package bazaarbot.agent;
import bazaarbot.Offer;
import bazaarbot.agent.Inventory;
import bazaarbot.utils.EconNoun;
import bazaarbot.utils.Quick;
import openfl.Assets;
import openfl.geom.Point;
import bazaarbot.agent.InventoryData;
import bazaarbot.agent.ILogic;

/**
 * The most fundamental agent class, and has as little implementation as possible.
 * In most cases you should start by extending Agent instead of this.
 * @author larsiusprime
 */

@:allow(Market)
class Agent
{
	public var id:Int;				//unique integer identifier
	public var className:String;	//string identifier, "farmer", "woodcutter", etc.
	public var money:Float;
	public var moneyLastRound(default, null):Float;
	public var profit(get, null):Float;
	public var inventorySpace(get, null):Float;
	public var inventoryFull(get, null):Bool;
	public var destroyed(default, null):Bool;

	private var _logic:ILogic;
	private var _inventory:Inventory;
	private var _profit:Float = 0;	//profit from last round
	private var _lookback:Int = 15;
	
	public function new(id:Int, data:AgentData)
	{
		this.id = id;
		className = data.className;
		money = data.money;
		_inventory = new Inventory();
		_inventory.fromData(data.inventory);
		_logic = data.logic;
	}

	public function destroy():Void
	{
		destroyed = true;
		_inventory.destroy();
		_logic = null;
	}

	public function simulateBeforeTrades(market:Market):Void
	{
		_logic.beforeTrades(this, market);
	}
	
	public function simulateAfterTrades(market:Market):Void
	{
		_logic.afterTrades(this, market);
	}
	
	public function init(market:Market):Void
	{
		//no implementation -- provide your own in a subclass
	}

	public function generateOffers(bazaar:Market, good:String):Void
	{
		//no implemenation -- provide your own in a subclass
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
	
	public function queryInventoryCost(good:String, units:Int = 1):Float
	{
		return _inventory.queryCost(good, units);
	}
	
	public function consumeInventory(good:String, delta:Float):Void
	{
		var cost = _inventory.queryCost(good, delta);
		changeInventory(good, -delta);
		_inventory.changeCost(good, -delta * cost);
	}
	
	public function sellInventory(good:String, delta:Float, moneyReceived:Float):Void
	{
		consumeInventory(good, delta);
		money += moneyReceived;
	}
	
	public function buyInventory(good:String, delta:Float, moneySpent:Float):Void
	{
		changeInventory(good, delta);
		_inventory.change(good, moneySpent);
		money -= moneySpent;
	}

	public function changeInventory(good:String, delta:Float):Void
	{
		_inventory.change(good, delta);
	}
	
	public function onRejectedBid(offer:Offer):Void
	{
		//no implementation -- provide your own in a subclass
	}

	public function onRejectedAsk(offer:Offer):Void
	{
		//no implementation -- provide your own in a subclass
	}

	/********PRIVATE************/

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

}

typedef AgentData = {
	className:String,
	money:Float,
	inventory:InventoryData,
	logicName:String,
	logic:ILogic,
	?lookBack:Int
}
