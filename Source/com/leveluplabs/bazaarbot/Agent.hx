package com.leveluplabs.bazaarbot;
import flash.geom.Point;

/**
 * ...
 * @author 
 */
class Agent
{
	public var id:Int;			//unique integer identifier
	public var class_id:String;	//string identifier, "famer", "woodcutter", etc.
	public var money(get, set):Float;
	public var destroyed(get, null):Bool;
	
	public static inline var SIGNIFICANT:Float = 0.25;	//25% more or less is "significant"
	public static inline var SIG_IMBALANCE:Float = 0.33;
	public static inline var LOW_INVENTORY:Float = 0.1;		//10% of ideal inventory = "LOW"
	public static inline var HIGH_INVENTORY:Float = 2.0;	//200% of ideal inventory = "HIGH"
	
	public static inline var MIN_PRICE:Float = 0.01;		//lowest possible price
	
	public function new(id_:Int,class_id_:String,inventory_:Inventory,money_:Float) 
	{
		id = id_;
		class_id = class_id_;
		if(inventory_ == null){
			_inventory = new Inventory();
		}else {
			_inventory = inventory_;
		}
		money = money_;
		
		_price_beliefs = new Map<String, Point>();		
		_observed_trading_range = new Map<String, Array<Float>>();
	}
		
	public function destroy():Void {
		_destroyed = true;
		_inventory.destroy();
		for (key in _price_beliefs.keys()) {
			_price_beliefs.remove(key);
		}
		for (key in _observed_trading_range.keys()) {
			var list:Array<Float> = _observed_trading_range.get(key);
			while (list.length > 0) {
				list.splice(0, 1);
			}list = null;
			_observed_trading_range.remove(key);
		}
		_price_beliefs = null;
		_observed_trading_range = null;
	}
	
	public function init(bazaar:BazaarBot):Void {
		var list_commodities = bazaar.get_commodities_unsafe();
		for (str in list_commodities) {
			var trades:Array<Float> = new Array<Float>();
			
			var price:Float = bazaar.get_history_price_avg(str, _lookback);					
			trades.push(price * 0.5);			
			trades.push(price * 1.5);	//push two fake trades to generate a range
			
			//set initial price belief & observed trading range
			_observed_trading_range.set(str, trades);						
			_price_beliefs.set(str, new Point(price * 0.5, price * 1.5));	
		}
	}
	
	public function generate_offers(bazaar:BazaarBot, commodity:String):Void {
		var offer:Offer;
		var surplus:Float = _inventory.surplus(commodity);
		if (surplus >= 1) {
			 offer = create_ask(bazaar, commodity, 1);
			 if(offer != null){
				bazaar.ask(offer);
			 }
		}else {
			var shortage:Float = _inventory.shortage(commodity);
			var space:Float = _inventory.get_space_empty();
			var unit_size:Float = _inventory.get_size_of(commodity);
			
			if (shortage > 0 && space >= unit_size) {	
				var limit:Float = 0;
				if ((shortage * unit_size) <= space) { //enough space for ideal order
					limit = shortage;
				}else {								   //not enough space for ideal order
					limit = Math.floor(space / shortage);
				}
				
				if(limit > 0){
					offer = create_bid(bazaar, commodity, limit);
					if(offer != null){
						bazaar.bid(offer);
					}
				}
			}
		}		
	}
	
	public function update_price_model(bazaar:BazaarBot, act:String, commodity_:String, success:Bool, unit_price_:Float=0):Void {
		var observed_trades:Array<Float>;
		
		if (success) {
			//Add this to my list of observed trades		
			observed_trades = _observed_trading_range.get(commodity_);
			observed_trades.push(unit_price_);
		}
		
		var public_mean_price:Float = bazaar.get_history_price_avg(commodity_, 1);
		
		var belief:Point = price_belief(commodity_);
		var mean:Float = (belief.x + belief.y) / 2;
		var wobble:Float = 0.05;
		
		var delta_to_mean:Float = mean - public_mean_price;
		
		if (success) {		
			if(act == "buy" && delta_to_mean > SIGNIFICANT) {			//overpaid
				belief.x -= delta_to_mean / 2;							//SHIFT towards mean
				belief.y -= delta_to_mean / 2; 							
			}else if(act == "sell" && delta_to_mean < -SIGNIFICANT) {	//undersold
				belief.x -= delta_to_mean / 2;							//SHIFT towards mean
				belief.y -= delta_to_mean / 2;				
			}		
							
			belief.x += wobble * mean;	//increase the belief's certainty
			belief.y -= wobble * mean;
		}else {
			belief.x -= delta_to_mean / 2;	//SHIFT towards the mean
			belief.y -= delta_to_mean / 2;			
			
			var special_case:Bool = false;
			var stocks:Float = query_inventory(commodity_);
			var ideal:Float = _inventory.ideal(commodity_);
						
			if(act == "buy" && stocks < LOW_INVENTORY * ideal) {		
				//very low on inventory AND can't buy
				wobble *= 2;			//bid more liberally
				special_case = true;				
			}else if (act == "sell" && stocks > HIGH_INVENTORY * ideal) {	
				//very high on inventory AND can't sell
				wobble *= 2;			//ask more liberally
				special_case = true;				
			}
			
			if (!special_case) {	
				//Don't know what else to do? Check supply vs. demand
				var asks:Float = bazaar.get_history_asks_avg(commodity_,1);
				var bids:Float = bazaar.get_history_bids_avg(commodity_,1);
				
				//supply_vs_demand: 0=balance, 1=all supply, -1=all demand
				var supply_vs_demand:Float = (asks - bids) / (asks + bids);
				
				//too much supply, or too much demand
				if (supply_vs_demand > SIG_IMBALANCE || supply_vs_demand < -SIG_IMBALANCE) {	
					//too much supply: lower price
					//too much demand: raise price
					
					var new_mean = public_mean_price * (1 - supply_vs_demand);
					delta_to_mean = mean - new_mean;
					
					belief.x -= delta_to_mean / 2;	//SHIFT towards anticipated new mean
					belief.y -= delta_to_mean / 2;				
				}
			}
			
			belief.x -= wobble * mean;	//decrease the belief's certainty
			belief.y += wobble * mean;			
		}
		
		if (belief.x < MIN_PRICE) {
			belief.x = MIN_PRICE;
		}else if (belief.y < MIN_PRICE) {
			belief.y = MIN_PRICE;
		}
	}
	
	public function create_bid(bazaar:BazaarBot, commodity_:String, limit_:Float):Offer{
		var bid_price:Float = determine_price_of(commodity_);
		var ideal:Float = determine_purchase_quantity(bazaar, commodity_);
		
		//can't buy more than limit
		var quantity_to_buy:Float = ideal > limit_ ? limit_ : ideal;
		if(quantity_to_buy > 0){
			return new Offer(id, commodity_, quantity_to_buy, bid_price);
		}
		return null;
	}
	
	public function create_ask(bazaar:BazaarBot, commodity_:String, limit_:Float):Offer{
		var ask_price:Float = determine_price_of(commodity_);
		var ideal:Float = determine_sale_quantity(bazaar, commodity_);		
		
		//can't sell less than limit
		var quantity_to_sell:Float = ideal < limit_ ? limit_ : ideal;
		if(quantity_to_sell > 0){
			return new Offer(id, commodity_, quantity_to_sell, ask_price);
		}
		return null;
	}
	
	public function query_inventory(commodity_:String):Float {
		return _inventory.query(commodity_);
	}
	
	public function change_inventory(commodity_:String, delta_:Float):Void {				
		_inventory.change(commodity_, delta_);
	}
	
	public function get_money():Float {
		return _money;
	}
	
	public function set_money(f:Float):Float {
		_money = f;
		return _money;
	}
	
	public function get_money_last():Float {
		return _money_last;
	}
	
	public function set_money_last(f:Float):Float {
		_money_last = f;
		return _money_last;
	}
	
	public function get_profit():Float {
		return _money - _money_last;
	}
	
	/********PRIVATE************/
	
	private var _inventory:Inventory;
	private var _money:Float;	
	private var _money_last:Float; 	//money I had last round
	private var _price_beliefs:Map<String, Point>;
	private var _observed_trading_range:Map<String, Array<Float>>;
	private var _profit:Float = 0;	//profit from last round
	private var _lookback:Int = 15;
	private var _destroyed:Bool = false;
	
	private function get_destroyed():Bool {
		return _destroyed;
	}
	
	private function determine_price_of(commodity_:String):Float {
		var belief:Point = _price_beliefs.get(commodity_);
		return rand_range(belief.x, belief.y);
	}
	
	private function determine_sale_quantity(bazaar:BazaarBot, commodity_:String):Float {
		var mean:Float = bazaar.get_history_price_avg(commodity_,_lookback);
		var trading_range:Point = observe_trading_range(commodity_);
		if (trading_range != null) {			
			var favorability:Float = position_in_range(mean, trading_range.x, trading_range.y);
			//position_in_range: high means price is at a high point
			
			var amount_to_sell:Float = Math.round(favorability * _inventory.surplus(commodity_));
			if (amount_to_sell < 1) {
				amount_to_sell = 1;
			}
			return amount_to_sell;
		}return 0;
	}
	
	private function determine_purchase_quantity(bazaar:BazaarBot, commodity_:String):Float {
		var mean:Float = bazaar.get_history_price_avg(commodity_,_lookback);
		var trading_range:Point = observe_trading_range(commodity_);
		if(trading_range != null){
			var favorability:Float = position_in_range(mean, trading_range.x, trading_range.y);
			favorability = 1 - favorability;			
			//do 1 - favorability to see how close we are to the low end
			
			var amount_to_buy:Float = Math.round(favorability * _inventory.shortage(commodity_));
			if (amount_to_buy < 1) {
				amount_to_buy = 1;
			}
			return amount_to_buy;
		}return 0;
	}
		
	private function price_belief(commodity_:String):Point {
		return _price_beliefs.get(commodity_);
	}
	
	private function observe_trading_range(commodity_:String):Point {
		var a:Array<Float> = _observed_trading_range.get(commodity_);
		var pt:Point = new Point(min_arr(a), max_arr(a));
		return pt;
	}
	
	private static inline function rand_range(a:Float, b:Float):Float {
		var r:Float = Math.random();
		var min:Float = a < b ? a : b;
		var max:Float = a < b ? b : a;
		var range:Float = max - min;
		return r * range + min;
	}
	
	private static inline function min_arr(a:Array<Float>):Float {
		var min:Float = 999999999;
		for (f in a) {
			if (f < min) { min = f;}
		}
		return min;
	}
	
	private static inline function max_arr(a:Array<Float>):Float{
		var max:Float = -999999999;
		for (f in a) {
			if (f > max) { max = f; }			
		}
		return max;
	}
	
	private static inline function position_in_range(value:Float, min:Float, max:Float, clamp:Bool=true):Float {
		value -= min;
		max -= min;
		min = 0;		
		value = (value / (max - min));
		if (clamp) {
			if (value < 0) { value = 0; }
			if (value > 1) { value = 1; }
		}
		return value;
	}
	
}