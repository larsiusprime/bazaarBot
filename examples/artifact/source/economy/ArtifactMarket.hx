package economy;
import bazaarbot.Good;
import bazaarbot.Market;
import bazaarbot.MarketData;
import bazaarbot.agent.Agent;
import bazaarbot.agent.Agent.AgentData;
import bazaarbot.agent.InventoryData;
import card.Card;
import card.CardColor;
import card.CardType;
import card.CardRarity;
import card.Rules;
import logic.Logic_PhantonDrafter;

/**
 * ...
 * @author 
 */
class ArtifactMarket extends Market
{
	public var cardIndex:Map<String, Card>;
	
	public function new() 
	{
		super("artifact");
		cardIndex = new Map<String, Card>();
		buildCardIndex();
		setup();
	}
	
	private function setup()
	{
		var starts = new Map<String,Float>();
		var sizes = new Map<String,Float>();
		starts.set("pack", Rules.STARTING_PACKS);
		starts.set("ticket", Rules.STARTING_TICKETS);
		
		var inventoryData:InventoryData = new InventoryData(Math.POSITIVE_INFINITY, null, starts, sizes);
		var aData:AgentData = {
			className:"phantomDrafter",
			money:0,
			inventory:inventoryData,
			logicName:"phantom_drafter",
			logic:null
		}
		
		var agents:Array<Agent> = [];
		for (i in 0...250)
		{
			var agent = new ArtifactAgent(i, aData);
			agents.push(agent);
		}
		
		var goods = [];
		for (card in cardIndex){
			goods.push(new Good(card.getId(), 1.0));
		}
		
		var mData:MarketData = new MarketData(goods, [aData], agents);
		
		init(mData);
	}
	
	private function buildCardIndex()
	{
		for (color in 0...CardColor.BLACK + 1)
		{
			for (type in 0...CardType.ITEM + 1)
			{
				for (rarity in 0...CardRarity.RARE + 1)
				{
					var c = new Card(type, rarity, color);
					cardIndex.set(c.getId(), c);
				}
			}
		}
	}
	
	public function countCheapestAsks(range:Int, minimumUnits:Int, exclude:Array<String> = null)
	{
		
	}
	
	override function transact(good:String, units:Float, money:Float, seller_id:Int, buyer_id:Int):Void 
	{
		var seller = _agents[seller_id];
		var buyer = _agents[buyer_id];
		
		seller.sellInventory(good, units, money * (1.0 - Rules.TAX));
		buyer.buyInventory(good, units, money);
	}
}