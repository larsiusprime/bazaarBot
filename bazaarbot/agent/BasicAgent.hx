package bazaarbot.agent;
import bazaarbot.agent.Inventory;
import bazaarbot.utils.EconNoun;
import bazaarbot.utils.Quick;
import openfl.Assets;
import openfl.geom.Point;
import bazaarbot.agent.InventoryData;
import bazaarbot.agent.Logic;

/**
 * The most fundamental agent class, and has as little implementation as possible.
 * In most cases you should start by extending Agent instead of this.
 * @author larsiusprime
 */

@:allow(Market)
class BasicAgent
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
		money = data.money;
		_inventory = new Inventory();
		_inventory.fromData(data.inventory);
		_logic = data.logic;

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
		_logic = null;
	}

	public function init(market:Market):Void
	{
		var listGoods = market.getGoods_unsafe();
		for (str in listGoods)
		{
			var trades:Array<Float> = new Array<Float>();

			var price:Float = market.getAverageHistoricalPrice(str, _lookback);
			trades.push(price * 0.5);
			trades.push(price * 1.5);	//push two fake trades to generate a range

			//set initial price belief & observed trading range
			_observedTradingRange.set(str, trades);
			_priceBeliefs.set(str, new Point(price * 0.5, price * 1.5));
		}
	}

	public function simulate(market:Market):Void
	{
		_logic.perform(this, market);
	}

	public function generateOffers(bazaar:Market, good:String):Void
	{
		//no implemenation -- provide your own in a subclass
	}

	public function updatePriceModel(bazaar:Market, act:String, good:String, success:Bool, unitPrice:Float = 0):Void
	{
		//no implementation -- provide your own in a subclass
	}

	public function createBid(bazaar:Market, good:String, limit:Float):Offer
	{
		//no implementation -- provide your own in a subclass
		return null;
	}

	public function createAsk(bazaar:Market, commodity_:String, limit_:Float):Offer
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

	/********PRIVATE************/

	private var _logic:Logic;
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

	private function determinePriceOf(commodity_:String):Float
	{
		var belief:Point = _priceBeliefs.get(commodity_);
		return Quick.randomRange(belief.x, belief.y);
	}

	private function determineSaleQuantity(bazaar:Market, commodity_:String):Float
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

	private function determinePurchaseQuantity(bazaar:Market, commodity_:String):Float
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
	logicName:String,
	logic:Logic,
	?lookBack:Int
}
