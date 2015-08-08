package bazaarbot;
import bazaarbot.agent.Inventory;
import bazaarbot.utils.EconNoun;
import bazaarbot.utils.Quick;
import openfl.Assets;
import openfl.geom.Point;
import bazaarbot.agent.Inventory.InventoryData;
import bazaarbot.agent.Logic;

/**
 * ...
 * @author larsiusprime
 */
@:allow(BazaarBot)
class Agent
{
	public var id:Int;				//unique integer identifier
	public var className:String;	//string identifier, "famer", "woodcutter", etc.
	public var money:Float;
	public var moneyLastRound(default, null):Float;
	public var profit(get, null):Float;
	public var inventorySpace(get, null):Float;
	public var inventoryFull(get, null):Bool;
	public var destroyed(default, null):Bool;
	
	public function new(id:Int, data:AgentData) 
	{
		this.id = id;
		className = data.className;
		_inventory = new Inventory();
		_inventory.fromData(data.inventory);
		money = data.money;
		if (data.lookBack == null)
		{
			_lookback = 15;
		}
		else
		{
			_lookback = data.lookBack;
		}
		
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
		//no implementation -- provide your own in a subclass
		return null;
	}
	
	public function createAsk(bazaar:BazaarBot, commodity_:String, limit_:Float):Offer
	{
		//no implementation -- provide your own in a subclass
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
	
	/********STATIC*************/
	
	public static function agentDataFromJSON(data:Dynamic, getLogic:String->Logic):AgentData
	{
		var agentData = {
			className:data.id,
			money:data.money,
			inventory:
			{
				maxSize: data.inventory.max_size,
				ideal:new Map<String, Float>(),
				start:new Map<String, Float>(),
				size:new Map<String, Float>()
			},
			logic:getLogic(data.logic)
		}
		
		var inventory_ideal_ids = Reflect.fields(data.inventory.ideal);
		for (istr in inventory_ideal_ids)
		{
			agentData.inventory.ideal.set(istr, Reflect.field(data.inventory.ideal, istr));
		}
		
		var inventory_start_ids = Reflect.fields(data.inventory.start);
		for (istr in inventory_start_ids)
		{
			agentData.inventory.start.set(istr, Reflect.field(data.inventory.start, istr));
		}
		
		var inventory_size_ids = Reflect.fields(data.inventory.size);
		for (istr in inventory_size_ids)
		{
			agentData.inventory.size.set(istr, Reflect.field(data.inventory.size, istr));
		}
		
		return agentData;
	}

	
	/********PRIVATE************/
	
	private var _inventory:Inventory;
	private var _priceBeliefs:Map<String, Point>;
	private var _observedTradingRange:Map<String, Array<Float>>;
	private var _profit:Float = 0;	//profit from last round
	private var _lookback:Int = 15;
	
	private function get_inventorySpace():Float
	{
		return _inventory.getEmptySpace();
	}
	
	public function get_inventoryFull():Bool
	{
		return _inventory.getEmptySpace() == 0;
	}
	
	private function get_profit():Float
	{
		return money - moneyLastRound;
	}
	
	private function getLogic(str:String):Logic
	{
		//no implemenation -- provide your own in a subclass
		return null;
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
		if (trading_range != null)
		{
			var favorability:Float = Quick.positionInRange(mean, trading_range.x, trading_range.y);
			favorability = 1 - favorability;			
			//do 1 - favorability to see how close we are to the low end
			
			var amount_to_buy:Float = Math.round(favorability * _inventory.shortage(commodity_));
			if (amount_to_buy < 1)
			{
				amount_to_buy = 1;
			}
			return amount_to_buy;
		}
		return 0;
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

typedef AgentData = {
	className:String,
	money:Float,
	inventory:InventoryData,
	logic:Logic,
	?lookBack:Int
}