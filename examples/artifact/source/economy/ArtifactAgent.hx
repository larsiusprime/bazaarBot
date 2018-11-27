package economy;
import bazaarbot.Market;
import bazaarbot.Offer;
import bazaarbot.agent.Agent;
import bazaarbot.agent.ILogic;
import bazaarbot.agent.Agent.AgentData;
import logic.Logic_PhantonDrafter;
import card.BoosterPack;
import card.Card;
import card.Deck;
import card.Rules;

/**
 * ...
 * @author 
 */
class ArtifactAgent extends Agent
{
	public var cards:Deck;
	public var income:Income;
	private var _asks:Array<Offer>;
	private var _bids:Array<Offer>;
	private var _haggle:Haggle;
	
	public function new(id:Int, data:AgentData) 
	{
		super(id, data);
		cards = new Deck();
		
		income = Income.getRandom();
		_haggle = switch(Util.iRandom(0, 2)){
			case 0: Haggle.pennyPincher();
			case 1: Haggle.fastDealer();
			default: Haggle.averageJoe();
		}
		
		_asks = [];
		_bids = [];
		
		_logic = pickLogic(data.logicName);
		money = Util.iRandom(0, 20);
		
		trace("income = " + income.payAmount + " @ " + income.payTime);
	}
	
	
	public function pickLogic(name:String)
	{
		return switch(name)
		{
			case "phantom_drafter": new Logic_PhantomDrafter();
			default: null;
		}
	}
	
	public function playPhantomDraft()
	{
		if (spendTicket())
		{
			//TODO
		}
	}
	
	public function playConstructed()
	{
		if (spendTicket())
		{
			//TODO
		}
	}
	
	public function selectCheapestFromMarket(market:Market, count:Int):Array<Card>
	{
		var history = market.history;
		
		var list = [];
		
		for (card in history.pricesLastTurn)
		{
			var cardId = card.good;
			var asks = history.asks.average(cardId, 1);
			while (asks > 0 && list.length < count)
			{
				asks--;
				list.push(Card.fromId(cardId));
			}
		}
		
		return list;
	}
	
	public function recycleCards(cards:Array<Card>)
	{
		var value:Float = 0.0;
		for (card in cards)
		{
			removeCard(card);
			value += card.price;
		}
		buyInventory("ticket", 1, value);
	}
	
	override public function onRejectedBid(offer:Offer):Void 
	{
		var maxBid = offer.terminal_unit_price * offer.units;
		var newOffer = _haggle.bidUp(offer, maxBid);
		if (newOffer != null)
		{
			_bids.push(newOffer);
		}
	}
	
	override public function onRejectedAsk(offer:Offer):Void 
	{
		var minBid = offer.terminal_unit_price * offer.units;
		var newOffer = _haggle.askDown(offer, minBid);
		if (newOffer != null)
		{
			_asks.push(newOffer);
		}
	}
	
	public function sellCardsWorth(market:Market, amount:Float):Bool
	{
		var goods:Map<String,Int> = cards.selectValue(amount);
		if (goods != null)
		{
			for (key in goods.keys())
			{
				var price = cards.getPriceById(key);
				if (price != -1)
				{
					var costBasis = queryInventoryCost(key, 1);
					var minPrice = Math.max(0.01, costBasis * 0.5);
					sellCard(market, key, price, minPrice, goods.get(key));
				}
			}
			return true;
		}
		return false;
	}
	
	public function spendTicket():Bool
	{
		if (queryInventory("ticket") >= 1)
		{
			consumeInventory("ticket", 1);
			return true;
		}
		return false;
	}
	
	public function buyTicket():Bool
	{
		if (money >= Rules.TICKET_PRICE)
		{
			buyInventory("ticket", 1, Rules.TICKET_PRICE);
			return true;
		}
		return false;
	}
	
	public function buyPack():Bool
	{
		if (money >= Rules.PACK_PRICE)
		{
			buyInventory("pack", 1, Rules.PACK_PRICE);
			return true;
		}
		return false;
	}
	
	public function openPack()
	{
		if (queryInventory("pack") > 0)
		{
			consumeInventory("pack", 1);
			var pack = new BoosterPack();
			for (card in pack.cards)
			{
				cards.addCard(card);
			}
			pack.cards = null;
			pack = null;
		}
	}
	
	public function onStartTurn(market:Market)
	{
		updateCardPrices(market);
		money += income.tick();
		while (_asks.length > 0)
		{
			market.ask(_asks.pop());
		}
		while (_bids.length > 0)
		{
			market.bid(_bids.pop());
		}
	}
	
	public function updateCardPrices(market:Market)
	{
		cards.updatePrices(market);
	}
	
	public function buyCard(market:Market, card:String, price:Float, maxPrice:Float, count:Int)
	{
		market.bid(new Offer(id, card, count, price, maxPrice));
	}
	
	public function sellCard(market:Market, card:String, price:Float, minPrice:Float, count:Int)
	{
		market.ask(new Offer(id, card, count, price, minPrice));
	}
	
	override public function buyInventory(good:String, delta:Float, money:Float):Void 
	{
		super.buyInventory(good, delta, money);
		var c = Card.fromId(good);
		if (c != null)
		{
			while (delta > 0)
			{
				addCard(c);
				delta--;
			}
		}
	}
	
	override public function sellInventory(good:String, delta:Float, money:Float):Void 
	{
		super.sellInventory(good, delta, money);
		var c = Card.fromId(good);
		if (c != null)
		{
			while (delta > 0)
			{
				removeCard(c);
				delta--;
			}
		}
	}
	
	public function addCard(card:Card)
	{
		cards.addCard(card);
	}
	
	public function removeCard(card:Card)
	{
		cards.removeCard(card);
	}
}