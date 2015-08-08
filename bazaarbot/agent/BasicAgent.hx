package bazaarbot.agent;
import openfl.geom.Point;

/**
 * ...
 * @author larsiusprime
 */
@:allow(BazaarBot)
class BasicAgent
{
	public var id:Int;				//unique integer identifier
	public var className:String;	//string identifier, "famer", "woodcutter", etc.
	public var money:Float;
	public var moneyLastRound(default, null):Float;
	public var profit(get, null):Float;
	public var inventorySpace(get, null):Float;
	public var destroyed(default, null):Bool;
	
	public function new(id:Int,className:String,inventory:Inventory,money:Float) 
	{
		this.id = id;
		this.className = className;
		if (inventory == null)
		{
			_inventory = new Inventory();
		}
		else
		{
			_inventory = inventory;
		}
		this.money = money;
		
		_priceBeliefs = new Map<String, Point>();
		_observedTradingRange = new Map<String, Array<Float>>();
	}
	
	public function destroy():Void
	{
		destroyed = true;
		_inventory.destroy();
		for (key in _priceBeliefs.keys())
		{
			_priceBeliefs.remove(key);
		}
		for (key in _observedTradingRange.keys())
		{
			var list:Array<Float> = _observedTradingRange.get(key);
			while (list.length > 0) {
				list.splice(0, 1);
			}list = null;
			_observedTradingRange.remove(key);
		}
		_priceBeliefs = null;
		_observedTradingRange = null;
	}
	
	
	public function init(bazaar:BazaarBot):Void
	{
		var list_commodities = bazaar.getGoods_unsafe();
		for (str in list_commodities)
		{
			var trades:Array<Float> = new Array<Float>();
			
			var price:Float = bazaar.getAverageHistoricalPrice(str, _lookback);
			trades.push(price * 0.5);
			trades.push(price * 1.5);	//push two fake trades to generate a range
			
			//set initial price belief & observed trading range
			_observedTradingRange.set(str, trades);
			_priceBeliefs.set(str, new Point(price * 0.5, price * 1.5));
		}
	}
	
	public function generateOffers(bazaar:BazaarBot, good:String):Void
	{
		//no implemenation -- provide your own in a subclass
	}
	
	public function updatePriceModel(bazaar:BazaarBot, act:String, good:String, success:Bool, unitPrice:Float = 0):Void
	{
		//no implementation -- provide your own in a subclass
	}
	
	public function createBid(bazaar:BazaarBot, good:String, limit:Float):Offer
	{
		var bidPrice:Float = determinePriceOf(good);
		var ideal:Float = determinePurchaseQuantity(bazaar, good);
		
		//can't buy more than limit
		var quantityToBuy:Float = ideal > limit ? limit : ideal;
		if (quantityToBuy > 0)
		{
			return new Offer(id, good, quantityToBuy, bidPrice);
		}
		return null;
	}
	
	public function createAsk(bazaar:BazaarBot, commodity_:String, limit_:Float):Offer
	{
		var ask_price:Float = determinePriceOf(commodity_);
		var ideal:Float = determineSaleQuantity(bazaar, commodity_);
		
		//can't sell less than limit
		var quantity_to_sell:Float = ideal < limit_ ? limit_ : ideal;
		if (quantity_to_sell > 0)
		{
			return new Offer(id, commodity_, quantity_to_sell, ask_price);
		}
		return null;
	}
	
	public function queryInventory(good:String):Float
	{
		return _inventory.query(good);
	}
	
	public function changeInventory(good:String, delta:Float):Void
	{
		_inventory.change(good, delta);
	}
	
	/********PRIVATE************/
	
	private var _inventory:Inventory;
	private var _priceBeliefs:Map<String, Point>;
	private var _observedTradingRange:Map<String, Array<Float>>;
	private var _profit:Float = 0;	//profit from last round
	private var _lookback:Int = 15;
	
	public function get_inventorySpace():Float
	{
		return _inventory.getEmptySpace();
	}
	
	private function get_profit():Float
	{
		return money - moneyLastRound;
	}
	
	private function determinePriceOf(commodity_:String):Float
	{
		var belief:Point = _priceBeliefs.get(commodity_);
		return Quick.randomRange(belief.x, belief.y);
	}
	
	private function determineSaleQuantity(bazaar:BazaarBot, commodity_:String):Float
	{
		var mean:Float = bazaar.getAverageHistoricalPrice(commodity_,_lookback);
		var trading_range:Point = observeTradingRange(commodity_);
		if (trading_range != null)
		{
			var favorability:Float = Quick.positionInRange(mean, trading_range.x, trading_range.y);
			//position_in_range: high means price is at a high point
			
			var amount_to_sell:Float = Math.round(favorability * _inventory.surplus(commodity_));
			if (amount_to_sell < 1)
			{
				amount_to_sell = 1;
			}
			return amount_to_sell;
		}
		return 0;
	}
	
	private function determinePurchaseQuantity(bazaar:BazaarBot, commodity_:String):Float
	{
		var mean:Float = bazaar.getAverageHistoricalPrice(commodity_,_lookback);
		var trading_range:Point = observeTradingRange(commodity_);
		if(trading_range != null){
			var favorability:Float = Quick.positionInRange(mean, trading_range.x, trading_range.y);
			favorability = 1 - favorability;			
			//do 1 - favorability to see how close we are to the low end
			
			var amount_to_buy:Float = Math.round(favorability * _inventory.shortage(commodity_));
			if (amount_to_buy < 1) {
				amount_to_buy = 1;
			}
			return amount_to_buy;
		}return 0;
	}
		
	private function getPriceBelief(good:String):Point
	{
		return _priceBeliefs.get(good);
	}
	
	private function observeTradingRange(good:String):Point
	{
		var a:Array<Float> = _observedTradingRange.get(good);
		var pt:Point = new Point(Quick.minArr(a), Quick.maxArr(a));
		return pt;
	}
}