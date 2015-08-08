package bazaarbot;
import haxe.Json;
import haxe.xml.Fast;
import flash.errors.Error;
import hscript.Interp;
import hscript.Parser;
import openfl.Assets;

/**
 * ...
 * @author 
 */
class BazaarBot
{
	/**Logs information about all economic activity in this market**/
	public var history:History;
	
	public function new() 
	{
		history = new History();
		
		_book = new TradeBook();
		
		_goods = new Array<String>();
		_agents = new Array<Agent>();
		_mapGoods = new Map<String, Good>();
		_mapAgents = new Map<String, AgentClass>();
	}
	
	public function init(data:Dynamic, format:String = "json"):Void
	{
		if (format == "json")
		{
			fromJSON(data);
		}
		else
		{
			throw new Error("unrecognized data format!");
		}
	}
	
	public function numTypesOfGood():Int
	{
		return _goods.length;
	}
	
	public function numAgents():Int
	{
		return _agents.length;
	}
	
	public function simulate(rounds:Int):Void {
		for (round in 0...rounds) {
			for (agent in _agents) {
				agent.set_money_last(agent.money);
				
				var ac:AgentClass = _mapAgents.get(agent.class_id);
				ac.logic.perform(agent,this);
				
				for (commodity in _goods) {
					agent.generate_offers(this, commodity);
				}
			}
			
			for(commodity in _goods){
				resolveOffers(commodity);
			}
			for (agent in _agents) {
				if (agent.money <= 0) {
					replaceAgent(agent);
				}
			}
		}
		_roundNum++;
	}
	
	public function ask(offer:Offer):Void
	{
		_book.ask(offer);
	}
	
	public function bid(offer:Offer):Void
	{
		_book.bid(offer);
	}
	
	/**
	 * Returns the historical mean price of the given commodity over the last X rounds
	 * @param	commodity_ string id of commodity
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	public function getAverageHistoricalPrice(commodity_:String, range:Int):Float
	{
		return history.prices.average(commodity_, range);
	}
	
	public function getCheapestCommodity(range:Int, not_this:String = ""):String
	{
		var best_price:Float = 999999999999999999;
		var best_commodity:String = "";
		for (c in _goods) {
			if(c != not_this){
				var price:Float = history.prices.average(c, range);
				if (price < best_price) { best_price = price; best_commodity = c; }
			}
		}
		return best_commodity;
	}
	
	public function getDearestCommodity(range:Int, exclude:Array<String> = null):String
	{
		var best_price:Float = 0;
		var best_commodity:String = "";
		for (c in _goods)
		{
			if (exclude == null || exclude.indexOf(c) == -1)
			{
				var price = history.prices.average(c, range);
				if (price > best_price) { best_price = price; best_commodity = c; }
			}
		}
		return best_commodity;
	}
	
	public function get_commodities_unsafe():Array<String>
	{
		return _goods;
	}
	
	public function get_commodity_entry(str:String):Good
	{
		if (_mapGoods.exists(str))
		{
			return _mapGoods.get(str).copy();
		}
		return null;
	}
	
	/********REPORT**********/
	public function get_marketReport(rounds:Int):MarketReport
	{
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
			
		for (commodity in _goods) {
			mr.str_list_commodity += commodity + "\n";
			
			var price:Float = history.prices.average(commodity, rounds);
			mr.str_list_commodity_prices += Utility.numStr(price, 2) + "\n";
			
			var asks:Float = history.asks.average(commodity, rounds);
			mr.str_list_commodity_asks += Std.int(asks) + "\n";
			
			var bids:Float = history.bids.average(commodity, rounds);
			mr.str_list_commodity_bids += Std.int(bids) + "\n";
			
			var trades:Float = history.trades.average(commodity, rounds);
			mr.str_list_commodity_trades += Std.int(trades) + "\n";
			
			mr.arr_str_list_inventory.push(commodity + "\n\n");
		}	
		for (key in _mapAgents.keys())
		{
			var inventory:Array<Float> = [];
			for (str in _goods)
			{
				inventory.push(0);
			}
			mr.str_list_agent += key + "\n";
			var profit:Float = history.profit.average(key, rounds);
			mr.str_list_agent_profit += Utility.numStr(profit, 2) + "\n";
			
			var test_profit:Float = 0;
			var list = _agents.filter(function(a:Agent):Bool { return a.class_id == key; } );
			var count:Int = list.length;
			var money:Float = 0;
			
			for (a in list) {
				money += a.get_money();
				for (lic in 0..._goods.length) {
					inventory[lic] += a.query_inventory(_goods[lic]);
				}
			}		
						
			money /= list.length;
			for (lic in 0..._goods.length) {
				inventory[lic] /= list.length;
				mr.arr_str_list_inventory[lic] += Utility.numStr(inventory[lic],1) + "\n";
			}
			
			mr.str_list_agent_count += Utility.numStr(count, 0) + "\n";
			mr.str_list_agent_money += Utility.numStr(money, 0) + "\n";
		}
		return mr;
	}	
	
	/********PRIVATE*********/
	
	private var _roundNum:Int = 0;
	
	private var _goods:Array<String>;		//list of string ids for all the legal commodities
	private var _agents:Array<Agent>;
	private var _book:TradeBook;
	private var _mapAgents:Map<String, AgentClass>;
	private var _mapGoods:Map<String, Good>;
	
	private function fromJSON(data:Dynamic):Void
	{
		//Create commodity index
		var list:Array<Dynamic> = data.commodities;
		for (g in list)
		{
			_goods.push(g.id);
			_mapGoods.set(g.id, new Good(g.id, g.size));
			
			history.register(g.id);
			history.prices.add(g.id, 1.0);	//start the bidding at $1!
			history.asks.add(g.id, 1.0);	//start history charts with 1 fake buy/sell bid
			history.bids.add(g.id, 1.0);
			history.trades.add(g.id, 1.0);
			
			_book.register(g.id);
		}
		
		//Create agent classes
		var temp_agents:Array<Dynamic> = data.agents;
		_mapAgents = new Map<String, AgentClass>();
		for (a in temp_agents)
		{
			a.inventory.size = { };
			for (key in _mapGoods.keys())
			{
				var c:Good = _mapGoods.get(key);
				Reflect.setField(a.inventory.size, c.id, c.size);
			}
			var ac:AgentClass = new AgentClass(a);
			_mapAgents.set(ac.id, ac);
			
			history.profit.register(ac.id);
		}
		
		//Make the agent list
		_agents = new Array<Agent>();
		
		//Get start conditions
		var start_conditions:Dynamic = data.start_conditions;
		var starts:Array<Dynamic> = Reflect.fields(start_conditions.agents);
		
		var agent_index:Int = 0;
		//Make given number of each agent type
		for (class_str in starts) {
			var val:Int = Reflect.field(start_conditions.agents, class_str);
			var agent_class = _mapAgents.get(class_str);
			var inv:Inventory = agent_class.getStartInventory();
			var money:Float = agent_class.money;
			
			for (i in 0...val) {
				var a:Agent = new Agent(agent_index, class_str, inv.copy(), money);
				a.init(this);
				_agents.push(a);
				agent_index++;
			}
		}
	}
	
	private function resolveOffers(good:String = ""):Void
	{
		var bids:Array<Offer> = _book.bids.get(good);
		var asks:Array<Offer> = _book.asks.get(good);
		
		bids = Utility.shuffle(bids);
		asks = Utility.shuffle(asks);
		
		bids.sort(Utility.sortDecreasingPrice);		//highest buying price first
		asks.sort(Utility.sortIncreasingPrice);		//lowest selling price first
		
		var successfulTrades:Int = 0;		//# of successful trades this round
		var moneyTraded:Float = 0;			//amount of money traded this round
		var unitsTraded:Float = 0;			//amount of goods traded this round
		var avgPrice:Float = 0;			//avg clearing price this round
		var numAsks:Float = 0;
		var numBids:Float = 0;
		
		var failsafe:Int = 0;
		
		for (i in 0...bids.length)
		{
			numBids += bids[i].units;
		}
		
		for (i in 0...asks.length)
		{
			numAsks += asks[i].units;
		}
		
		//march through and try to clear orders
		while (bids.length > 0 && asks.length > 0)		//while both books are non-empty
		{
			var buyer:Offer = bids[0];
			var seller:Offer = asks[0];
			
			var quantity_traded = Math.min(seller.units, buyer.units);
			var clearing_price  = Utility.avgf(seller.unit_price, buyer.unit_price);
						
			if (quantity_traded > 0) {
				//transfer the goods for the agreed price
				seller.units -= quantity_traded;
				buyer.units -= quantity_traded;
							
				transferGood(good, quantity_traded, seller.agent_id, buyer.agent_id);
				transferMoney(quantity_traded * clearing_price, seller.agent_id, buyer.agent_id);
									
				//update agent price beliefs based on successful transaction
				var buyer_a:Agent = _agents[buyer.agent_id];
				var seller_a:Agent = _agents[seller.agent_id];
				buyer_a.update_price_model(this, "buy", good, true, clearing_price);
				seller_a.update_price_model(this, "sell", good, true, clearing_price);
				
				//log the stats
				moneyTraded += (quantity_traded * clearing_price);
				unitsTraded += quantity_traded;
				successfulTrades++;
			}
			
			if (seller.units == 0)		//seller is out of offered good
			{
				asks.splice(0, 1);		//remove ask
				failsafe = 0;
			}
			if (buyer.units == 0)		//buyer is out of offered good
			{
				bids.splice(0, 1);		//remove bid
				failsafe = 0;
			}
			
			failsafe++;
			
			if (failsafe > 1000)
			{
				trace("BOINK!");
			}
		}
		
		//reject all remaining offers, 
		//update price belief models based on unsuccessful transaction
		while(bids.length > 0){
			var buyer:Offer = bids[0];
			var buyer_a:Agent = _agents[buyer.agent_id];
			buyer_a.update_price_model(this,"buy",good, false);
			bids.splice(0, 1);
		}
		while(asks.length > 0){
			var seller:Offer = asks[0];
			var seller_a:Agent = _agents[seller.agent_id];
			seller_a.update_price_model(this,"sell",good, false);
			asks.splice(0, 1);
		}
		
		//update history
	
		history.asks.add(good, numAsks);
		history.bids.add(good, numBids);
		history.trades.add(good, unitsTraded);
		
		if (unitsTraded > 0)
		{
			avgPrice = moneyTraded / cast(unitsTraded, Float);
			history.prices.add(good, avgPrice);
		}
		else
		{
			//special case: none were traded this round, use last round's average price
			history.prices.add(good, history.prices.average(good, 1));
			avgPrice = history.prices.average(good,1);
		}
		
		_agents.sort(Utility.sortAgentAlpha);
		
		var curr_class:String = "";
		var last_class:String = "";
		var list:Array<Float> = null;
		var avg_profit:Float = 0;
		
		for (i in 0..._agents.length)
		{
			var a:Agent = _agents[i];		//get current agent
			curr_class = a.class_id;			//check its class
			if (curr_class != last_class) {		//new class?
				if (list != null) {				//do we have a list built up?
					//log last class' profit
					history.profit.add(last_class, list_avg_f(list));
				}
				list = [];		//make a new list
				last_class = curr_class;		
			}
			list.push(a.get_profit());			//push profit onto list
		}
		
		//add the last class too
		history.profit.add(last_class, list_avg_f(list));
		
		//sort by id so everything works again
		_agents.sort(Utility.sortAgentId);
		
	}
	
	private function list_avg_f(list:Array<Float>):Float
	{
		var avg:Float = 0;
		for (j in 0...list.length)
		{
			avg += list[j];
		}
		avg /= list.length;
		return avg;
	}
	
	private function replaceAgent(agent:Agent):Void
	{
		var best_id:String = mostProfitableAgentClass();
		
		//Special case to deal with very high demand-to-supply ratios
		//This will make them favor entering an underserved market over
		//Just picking the most profitable class
		var best_opportunity:String = getBestMarketOpportunity();
		if (best_opportunity != "")
		{
			var best_opportunity_class:String = getAgentClassThatMakesMost(best_opportunity);
			if (best_opportunity_class != "") {
				best_id = best_opportunity_class;
			}
		}
		
		var agent_class = _mapAgents.get(best_id);
		var new_agent:Agent = new Agent(agent.id, best_id, agent_class.getStartInventory(), agent_class.money);
		new_agent.init(this);
		_agents[agent.id] = new_agent;
		agent.destroy();
	}
	
	private function getAgentClassThatMakesMost(good:String):String
	{
		var best_class:String = "";
		var parser = new Parser();
		var script:String = Assets.getText("assets/data/scripts/best_job.hs");
		var ast = parser.parseString(script);
		var interp = new Interp();
		
		var variables:Map<String,Dynamic> = ["commodity" => good];
		interp.variables = variables;
		best_class = Std.string(interp.execute(ast));
		
		return best_class;
	}
	
	private function getAgentClassWithMost(good:String):String
	{
		var amount:Float = 0;
		var best_amount:Float = 0;
		var best_class:String = "";
		for (key in _mapAgents.keys()) {
			amount = getAverageInventory(key, good);
			if (amount > best_amount) {
				best_amount = amount;
				best_class = key;
			}
		}
		return best_class;
	}
	
	private function getAverageInventory(agent_id:String, commodity_:String):Float
	{
		var list = _agents.filter(function(a:Agent):Bool { return a.class_id == agent_id; } );
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
	
	private function getBestMarketOpportunity(minimum:Float = 1.5, range:Int = 10):String
	{
		var best_market:String = "";
		var best_ratio:Float = -999999;
		for(good in _goods){
			var asks:Float = history.asks.average(good, range);
			var bids:Float = history.bids.average(good, range);
			var ratio:Float = 0;
			if (asks == 0 && bids > 0) {
				ratio = 9999999999999999;
			}else {
				ratio = bids / asks;
			}
			if (ratio > minimum && ratio > best_ratio) {
				best_ratio = ratio;
				best_market = good;
			}
		}
		return best_market;
	}
	
	private function mostProfitableAgentClass(range:Int = 10):String
	{
		var list:Array<Float>;
		var best:Float = -99999;
		var best_id:String="";
		for(ac_id in _mapAgents.keys()){
			var val:Float = history.profit.average(ac_id, range);
			if (val > best) {
				best_id = ac_id;
				best = val;
			}
		}
		return best_id;
	}
	
	private function getAgentClass(str:String):AgentClass
	{
		if (_mapAgents.exists(str))
		{
			return _mapAgents.get(str);
		}
		return null;
	}
	
	private function transferGood(good:String, units:Float, seller_id:Int, buyer_id:Int):Void
	{
		var seller:Agent = _agents[seller_id];
		var  buyer:Agent = _agents[buyer_id];
		seller.change_inventory(good, -units);
		 buyer.change_inventory(good,  units);
	}
	
	private function transferMoney(amount:Float, seller_id:Int, buyer_id:Int):Void
	{
		var seller:Agent = _agents[seller_id];
		var  buyer:Agent = _agents[buyer_id];
		seller.money += amount;
		 buyer.money -= amount;
	}
	
}