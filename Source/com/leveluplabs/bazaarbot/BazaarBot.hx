package com.leveluplabs.bazaarbot;
import haxe.Json;
import haxe.xml.Fast;
import flash.errors.Error;

/**
 * ...
 * @author 
 */
class BazaarBot
{
	public var history_price(get, null):Map<String, Array<Float>>;
	public var history_asks(get, null):Map<String, Array<Float>>;
	public var history_bids(get, null):Map<String, Array<Float>>;
	public var history_trades(get, null):Map<String, Array<Float>>;
	
	public function new() 
	{
		list_commodities = new Array<String>();
		_map_commodities = new Map<String, Commodity>();
		
		_agent_classes = new Map<String, AgentClass>();		
		list_agents = new Array<Agent>();
		
		book_bids = new Map<String, Array<Offer>>();
		book_asks = new Map<String, Array<Offer>>();
		
		_history_price = new Map<String, Array<Float>>();
		_history_asks = new Map<String, Array<Float>>();
		_history_bids = new Map < String, Array<Float> > ();
		_history_trades = new Map < String, Array<Float> > ();
		_history_profit = new Map < String, Array<Float> > ();
	}
	
	public function init(data:Dynamic,format:String="json"):Void {
		if (Std.is(data,Fast)) {
			fromXML(data);
		}else if (Std.is(data,Xml)) {
			fromXML(new Fast(data));
		}else if (format == "json") {
			fromJSON(data);
		}else {
			throw new Error("unrecognized data format!");
		}
	}
	
	public function num_commodities():Int {
		return list_commodities.length;
	}
	
	public function num_agents():Int {
		return list_agents.length;
	}
	
	public function fromXML(data:Fast):Void {
		
	}
	
	public function fromJSON(data:Dynamic):Void {
		
		//Create commodity index
		var list:Array<Dynamic> = data.commodities;
		for(c in list) {
			list_commodities.push(c.id);
			_map_commodities.set(c.id,new Commodity(c.id, c.size));
			_history_price.set(c.id, new Array<Float>());
			_history_asks.set(c.id, new Array<Float>());
			_history_bids.set(c.id, new Array<Float>());			
			_history_trades.set(c.id, new Array<Float>());
			add_history_price(c.id, 1);		//start the bidding at $1!
			add_history_asks(c.id, 1);		//start history charts with 1 fake buy/sell bid
			add_history_bids(c.id, 1);
			add_history_trades(c.id, 1);
			book_asks.set(c.id,new Array<Offer>());
			book_bids.set(c.id,new Array<Offer>());
		}		
		
		//Create agent classes
		var agents:Array<Dynamic> = data.agents;
		_agent_classes = new Map<String, AgentClass>();
		for (a in agents) {			
			a.inventory.size = { };
			for (key in _map_commodities.keys()) {
				var c:Commodity = _map_commodities.get(key);
				Reflect.setField(a.inventory.size, c.id, c.size);
			}
			var ac:AgentClass = new AgentClass(a);
			_agent_classes.set(ac.id, ac);
			_history_profit.set(ac.id, new Array<Float>());
		}		
		
		//Make the agent list
		list_agents = new Array<Agent>();
		
		//Get start conditions
		var start_conditions:Dynamic = data.start_conditions;
		var starts:Array<Dynamic> = Reflect.fields(start_conditions.agents);
		
		var agent_index:Int = 0;
		//Make given number of each agent type
		for (class_str in starts) {
			var val:Int = Reflect.field(start_conditions.agents, class_str);
			var agent_class = _agent_classes.get(class_str);
			var inv:Inventory = agent_class.getStartInventory();
			var money:Float = agent_class.money;
			
			for (i in 0...val) {
				var a:Agent = new Agent(agent_index, class_str, inv.copy(), money);
				a.init(this);
				list_agents.push(a);
				agent_index++;
			}
		}		
	}
	
	public function simulate(rounds:Int):Void {
		for (round in 0...rounds) {
			for (agent in list_agents) {
				agent.set_money_last(agent.money);
				
				var ac:AgentClass = _agent_classes.get(agent.class_id);				
				ac.logic.perform(agent);
								
				for (commodity in list_commodities) {
					agent.generate_offers(this, commodity);
				}
			}
			for(commodity in list_commodities){
				resolve_offers(commodity);
			}
			for (agent in list_agents) {
				if (agent.money <= 0) {
					replaceAgent(agent);
				}
			}
		}
		_round_num++;
	}
	
	public function ask(offer:Offer):Void {
		var list:Array<Offer> = book_asks.get(offer.commodity);
		list.push(offer);
	}
	
	public function bid(offer:Offer):Void {
		var list:Array<Offer> = book_bids.get(offer.commodity);
		list.push(offer);
	}
	
	/**
	 * Returns the historical mean price of the given commodity over the last X rounds
	 * @param	commodity_ string id of commodity
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	public function get_history_price_avg(commodity_:String, range:Int):Float {
		var list = _history_price.get(commodity_);
		return avg_list_f(list, range);
	}
	
	/**
	 * Returns the historical profitability for the given agent class over the last X rounds
	 * @param	class_ string id of agent class
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	public function get_history_profit_avg(class_:String, range:Int):Float {
		var list = _history_profit.get(class_);
		return avg_list_f(list, range);
	}
	
	/**
	 * Returns the historical mean # of asks (sell offers) per round of the given commodity over the last X rounds
	 * @param	commodity_ string id of commodity
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	public function get_history_asks_avg(commodity_:String,range:Int):Float {
		var list = _history_asks.get(commodity_);
		return avg_list_f(list, range);
	}
		
	/**
	 * Returns the historical mean # of bids (buy offers) per round of the given commodity over the last X rounds
	 * @param	commodity_ string id of commodity
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	public function get_history_bids_avg(commodity_:String,range:Int):Float {
		var list = _history_bids.get(commodity_);
		return avg_list_f(list, range);
	}
	
	public function get_history_trades_avg(commodity_:String, range:Int):Float {
		var list = _history_trades.get(commodity_);
		return avg_list_f(list, range);
	}
	
	public function get_commodities_unsafe():Array<String> {
		return list_commodities;
	}
	
	public function get_commodity_entry(str:String):Commodity {
		if (_map_commodities.exists(str)) {
			return _map_commodities.get(str).copy();
		}
		return null;
	}
	
	/********REPORT**********/
	public function get_marketReport(rounds:Int):MarketReport {
		var mr:MarketReport = new MarketReport();		
		mr.str_list_commodity = "Commodities\n\n";
		mr.str_list_commodity_prices = "Price\n\n";
		mr.str_list_commodity_trades = "Trades\n\n";
		mr.str_list_commodity_asks = "Supply\n\n";
		mr.str_list_commodity_bids = "Demand\n\n";
		
		mr.str_list_agent = "Classes\n\n";
		mr.str_list_agent_count = "Count\n\n";
		mr.str_list_agent_profit = "Profit\n\n";
		mr.str_list_agent_money = "Money\n\n";
		
		mr.arr_str_list_inventory = [];
			
		for (commodity in list_commodities) {
			mr.str_list_commodity += commodity + "\n";
			
			var price:Float = get_history_price_avg(commodity, rounds);			
			mr.str_list_commodity_prices += num_str(price, 2) + "\n";
			
			var asks:Float = get_history_asks_avg(commodity, rounds);
			mr.str_list_commodity_asks += Std.int(asks) + "\n";
			
			var bids:Float = get_history_bids_avg(commodity, rounds);
			mr.str_list_commodity_bids += Std.int(bids) + "\n";
						
			var trades:Float = get_history_trades_avg(commodity, rounds);
			mr.str_list_commodity_trades += Std.int(trades) + "\n";
			
			mr.arr_str_list_inventory.push(commodity + "\n\n");
		}	
		for (key in _agent_classes.keys()) {
			var inventory:Array<Float> = [];		
			for (str in list_commodities) {
				inventory.push(0);		
			}
			mr.str_list_agent += key + "\n";
			var profit:Float = get_history_profit_avg(key, rounds);
			mr.str_list_agent_profit += num_str(profit, 2) + "\n";
			
			var test_profit:Float = 0;
			var list = list_agents.filter(function(a:Agent):Bool { return a.class_id == key; } );
			var count:Int = list.length;
			var money:Float = 0;
			
			for (a in list) {
				money += a.get_money();
				for (lic in 0...list_commodities.length) {
					inventory[lic] += a.query_inventory(list_commodities[lic]);
				}
			}		
						
			money /= list.length;
			for (lic in 0...list_commodities.length) {
				inventory[lic] /= list.length;
				mr.arr_str_list_inventory[lic] += num_str(inventory[lic],1) + "\n";
			}
			
			mr.str_list_agent_count += num_str(count, 0) + "\n";
			mr.str_list_agent_money += num_str(money, 0) + "\n";
		}
		return mr;
	}	
	
	/********PRIVATE*********/
	
	private var _round_num:Int = 0;
	
	private var list_commodities:Array<String>;			//list of string ids for all the legal commodities
	private var list_agents:Array<Agent>;
	private var book_bids:Map<String, Array<Offer>>;
	private var book_asks:Map<String, Array<Offer>>;
	
	private var _agent_classes:Map<String, AgentClass>;	
	
	private var _map_commodities:Map<String, Commodity>;
	
	private var _history_price:Map<String, Array<Float>>;	//avg clearing price per good over time
	private var _history_asks:Map<String, Array<Float>>;		//# ask (sell) offers per good over time
	private var _history_bids:Map<String, Array<Float>>;		//# bid (buy) offers per good over time
	private var _history_trades:Map<String, Array<Float>>;		//# units traded per good over time
	
	private var _history_profit:Map<String, Array<Float>>;	//profitability of various agent classes
	
	private function resolve_offers(commodity_:String = ""):Void {
		var bids:Array<Offer> = book_bids.get(commodity_);
		var asks:Array<Offer> = book_asks.get(commodity_);		
		
		//shuffle the books
		shuffle(bids);
		shuffle(asks);
		
		bids.sort(sort_decreasing_price);	//highest buying price first
		asks.sort(sort_increasing_price);	//lowest selling price first
		
		var successful_trades:Int = 0;		//# of successful trades this round
		var money_traded:Float = 0;			//amount of money traded this round
		var units_traded:Float = 0;			//amount of goods traded this round
		var avg_price:Float = 0;				//avg clearing price this round
		var num_asks:Float = 0;
		var num_bids:Float = 0;
		
		var failsafe:Int = 0;
		
		for (i in 0...bids.length) {
			num_bids += bids[i].units;
		}
		
		for (i in 0...asks.length) {
			num_asks += asks[i].units;
		}
				
		//march through and try to clear orders
		while (bids.length > 0 && asks.length > 0) {	//while both books are non-empty
			var buyer:Offer = bids[0];
			var seller:Offer = asks[0];
			
			var quantity_traded:Float = minf(seller.units, buyer.units);
			var clearing_price:Float = avgf(seller.unit_price, buyer.unit_price);
						
			if (quantity_traded > 0) {
				//transfer the goods for the agreed price
				seller.units -= quantity_traded;
				buyer.units -= quantity_traded;
							
				transfer_commodity(commodity_, quantity_traded, seller.agent_id, buyer.agent_id);
				transfer_money(quantity_traded * clearing_price, seller.agent_id, buyer.agent_id);
									
				//update agent price beliefs based on successful transaction
				var buyer_a:Agent = list_agents[buyer.agent_id];
				var seller_a:Agent = list_agents[seller.agent_id];
				buyer_a.update_price_model(this, "buy", commodity_, true, clearing_price);
				seller_a.update_price_model(this, "sell", commodity_, true, clearing_price);
				
				//log the stats
				money_traded += (quantity_traded * clearing_price);
				units_traded += quantity_traded;
				successful_trades++;							
			}
						
			if (seller.units == 0) {	//seller is out of offered good
				asks.splice(0, 1);		//remove ask
				failsafe = 0;
			}
			if (buyer.units == 0) {		//buyer is out of offered good
				bids.splice(0, 1);		//remove bid
				failsafe = 0;
			}
			
			failsafe++;
			
			if (failsafe > 1000) {
				trace("BOINK!");		
			}
		}
		
		//reject all remaining offers, 
		//update price belief models based on unsuccessful transaction
		while(bids.length > 0){
			var buyer:Offer = bids[0];
			var buyer_a:Agent = list_agents[buyer.agent_id];
			buyer_a.update_price_model(this,"buy",commodity_, false);
			bids.splice(0, 1);
		}
		while(asks.length > 0){
			var seller:Offer = asks[0];
			var seller_a:Agent = list_agents[seller.agent_id];
			seller_a.update_price_model(this,"sell",commodity_, false);
			asks.splice(0, 1);
		}
		
		//update history		
		
		add_history_asks(commodity_, num_asks);
		add_history_bids(commodity_, num_bids);
		add_history_trades(commodity_, units_traded);		
		
		if(units_traded > 0){
			avg_price = money_traded / cast(units_traded, Float);
			add_history_price(commodity_, avg_price);		
		}else {
			//special case: none were traded this round, use last round's average price
			add_history_price(commodity_, get_history_price_avg(commodity_, 1));
			avg_price = get_history_price_avg(commodity_,1);
		}		
		
		list_agents.sort(sort_agent_alpha);
		var curr_class:String = "";
		var last_class:String = "";
		var list:Array<Float>=null;		
		var avg_profit:Float = 0;		
		
		for (i in 0...list_agents.length) {
			var a:Agent = list_agents[i];		//get current agent
			curr_class = a.class_id;			//check its class
			if (curr_class != last_class) {		//new class?
				if (list != null) {				//do we have a list built up?
					//log last class' profit
					add_history_profit(last_class, list_avg_f(list));	
				}
				list = new Array<Float>();		//make a new list
				last_class = curr_class;		
			}
			list.push(a.get_profit());			//push profit onto list
		}	
		//add the last class too
		add_history_profit(last_class, list_avg_f(list));
		
		//sort by id so everything works again
		list_agents.sort(sort_agent_id);
		
	}
	
	private function list_avg_f(list:Array<Float>):Float {
		var avg:Float = 0;
		for (j in 0...list.length) {
			avg += list[j];
		}
		avg /= list.length;
		return avg;
	}
	
	private function replaceAgent(agent:Agent):Void {
		var best_id:String = most_profitable_agent_class();
		
		//Special case to deal with very high demand-to-supply ratios
		//This will make them favor entering an underserved market over
		//Just picking the most profitable class
		var best_opportunity:String = get_best_market_opportunity();				
		if (best_opportunity != "") {
			var best_opportunity_class:String = get_agent_class_that_makes_most(best_opportunity);
			if (best_opportunity_class != "") {
				best_id = best_opportunity_class;
			}
		}
		
		var agent_class = _agent_classes.get(best_id);			
		var new_agent:Agent = new Agent(agent.id, best_id, agent_class.getStartInventory(), agent_class.money);
		new_agent.init(this);
		list_agents[agent.id] = new_agent;
		agent.destroy();
	}
	
	private function get_agent_class_that_makes_most(commodity_:String):String {
		var best_amount:Float = 0;
		var best_class:String = "";
		for (key in _agent_classes.keys()) {
			var ac:AgentClass = _agent_classes.get(key);
			var amount:Float = ac.logic.get_production(commodity_);
			if (amount > best_amount) {
				best_amount = amount;
				best_class = ac.id;
			}
		}
		return best_class;
	}
	
	private function get_agent_class_with_most(commodity_:String):String {
		var amount:Float = 0;
		var best_amount:Float = 0;
		var best_class:String = "";
		for (key in _agent_classes.keys()) {
			amount = get_avg_inventory(key, commodity_);
			if (amount > best_amount) {
				best_amount = amount;
				best_class = key;
			}
		}
		return best_class;
	}
	
	private function get_avg_inventory(agent_id:String, commodity_:String):Float {
		var list = list_agents.filter(function(a:Agent):Bool { return a.class_id == agent_id; } );
		var amount:Float = 0;
		for (agent in list) {
			amount += agent.query_inventory(commodity_);
		}
		amount /= list.length;
		return amount;
	}
	
	/**
	 * Get the market with the highest demand/supply ratio over time
	 * @param   minimum the minimum demand/supply ratio to consider an opportunity
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	private function get_best_market_opportunity(minimum:Float=1.5,range:Int = 10):String {
		var best_market:String = "";
		var best_ratio:Float = -999999;
		for(commodity in list_commodities){
			var asks:Float = get_history_asks_avg(commodity, range);
			var bids:Float = get_history_bids_avg(commodity, range);			
			var ratio:Float = 0;
			if (asks == 0 && bids > 0) {
				ratio = 9999999999999999;	
			}else {
				ratio = bids / asks;
			}
			if (ratio > minimum && ratio > best_ratio) {
				best_ratio = ratio;
				best_market = commodity;
			}
		}
		return best_market;
	}
	
	private function most_profitable_agent_class(range:Int=10):String{
		var list:Array<Float>;
		var best:Float = -99999;
		var best_id:String="";
		for(ac_id in _agent_classes.keys()){
			var val:Float = get_history_profit_avg(ac_id, range);
			if (val > best) {
				best_id = ac_id;
				best = val;
			}
		}
		return best_id;
	}
	
	private function get_agent_class(str:String):AgentClass{
		for (ac in _agent_classes) {
			if (ac.id == str) {
				return ac;
			}
		}
		return null;
	}
	
	private function add_history_profit(agent_class_:String, f:Float):Void {
		var list = _history_profit.get(agent_class_);
		list.push(f);
	}
	
	private function add_history_asks(commodity_:String, f:Float):Void {
		var list = _history_asks.get(commodity_);
		list.push(f);
	}
	
	private function add_history_bids(commodity_:String, f:Float):Void {
		var list = _history_bids.get(commodity_);
		list.push(f);
	}
	
	private function add_history_trades(commodity_:String, f:Float):Void {
		var list = _history_trades.get(commodity_);
		list.push(f);
	}
	
	private function add_history_price(commodity_:String, p:Float):Void {
		var list = _history_price.get(commodity_);
		list.push(p);
	}
	
	private function transfer_commodity(commodity_:String, units_:Float, seller_id:Int, buyer_id:Int):Void {
		var seller:Agent = list_agents[seller_id];
		var buyer:Agent = list_agents[buyer_id];
		seller.change_inventory(commodity_, -units_);
		buyer.change_inventory(commodity_, units_);
	}
	
	private function transfer_money(amount_:Float, seller_id:Int, buyer_id:Int):Void {
		var seller:Agent = list_agents[seller_id];
		var buyer:Agent = list_agents[buyer_id];
		seller.money += amount_;
		buyer.money -= amount_;
	}	
	
	private function get_history_price():Map<String, Array<Float>> 
	{
		return _history_price;
	}
	
	
	private function get_history_asks():Map<String, Array<Float>> 
	{
		return _history_asks;
	}
	
	
	private function get_history_bids():Map<String, Array<Float>> 
	{
		return _history_bids;
	}
	
	
	private function get_history_trades():Map<String, Array<Float>> 
	{
		return _history_trades;
	}
		
	private static function sort_agent_id(a:Agent, b:Agent):Int {
		if (a.id < b.id) return -1;
		if (a.id > b.id) return 1;
		return 0;
	}
	
	private static function sort_agent_alpha(a:Agent, b:Agent):Int {
		if (a.class_id < b.class_id) return -1;
		if (a.class_id > b.class_id) return 1;
		return 0;
	}
	
	private static function sort_decreasing_price(a:Offer, b:Offer):Int {
		//Decreasing means: highest first
		if (a.unit_price < b.unit_price) return 1;
		if (a.unit_price > b.unit_price) return -1;
		return 0;
	}
	
	private static function sort_increasing_price(a:Offer, b:Offer):Int {
		//Increasing means: lowest first
		if (a.unit_price > b.unit_price) return 1;
		if (a.unit_price < b.unit_price) return -1;
		return 0;
	}
	
	private static inline function avgf(a:Float, b:Float):Float {
		return (a + b) / 2;
	}
	
	private static inline function minf(a:Float, b:Float):Float {
		return a < b ? a : b;
	}
	
	private static inline function maxf(a:Float, b:Float):Float {
		return a > b ? a : b;
	}
	
	private static inline function mini(a:Int, b:Int):Int {
		return a < b ? a : b;
	}
	
	private static inline function maxi(a:Int, b:Int):Int {
		return a > b ? a : b;
	}
	
	private static inline function shuffle(list:Array<Dynamic>):Array<Dynamic> {	
		/*
		To shuffle an array a of n elements (indices 0..n-1):	
		for i from n − 1 downto 1 do
			j ← random integer with 0 ≤ j ≤ i
			exchange a[j] and a[i]
		}	
		 */
		for (i in 0...list.length - 1) {
			var ii:Int = (list.length - 1) - i;
			if (ii > 1) {
				var j:Int = rand_i(0, ii);
				var temp:Dynamic = list[j];
				list[j] = list[ii];
				list[ii] = temp;
			}
		}
		return list;
	}	
	
	public static function num_str(num:Float,decimals:Int):String {
		var tens:Float = 1;
		for(i in 0...decimals) {
			tens *= 10;
		}
		num = Math.floor(num * tens) / tens;
		var str:String = Std.string(num);
		var split = str.split(".");
		if (split.length == 2) {
			if (split[1].length < decimals) {
				var diff:Int = decimals - split[1].length;
				for (i in 0...diff) {
					str += "0";
				}
			}
			if(decimals > 0){
				str = split[0] + "." + split[1].substr(0, decimals);
			}else {
				str = split[0];
			}			
		}else {
			if(decimals > 0){
				str += ".";
				for (i in 0...decimals) {
					str += "0";
				}
			}
		}
		return str;
	}
	
	private static inline function rand_i(min:Int, max:Int):Int {
		return Std.int(Math.random() * cast(1+max-min, Float)) + min;		
	}

	private static inline function avg_list_f(list:Array<Float>, range:Int):Float {
		var avg:Float = 0;
		var length:Int = list.length;
		if (length < range) {
			range = length;
		}
		for (i in 0...range) {
			avg += list[length - 1 - i];
		}
		avg /= cast(range,Float);
		return avg;
	}
	
	private static inline function avg_list_i(list:Array<Int>, range:Int):Float {
		var avg:Float = 0;
		var length:Int = list.length;
		if (length < range) {
			range = length;
		}
		for (i in 0...range) {
			avg += list[length - 1 - i];
		}
		avg /= cast(range,Float);
		return avg;
	}
}