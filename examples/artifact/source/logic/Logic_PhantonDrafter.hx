package logic;
import bazaarbot.Market;
import bazaarbot.agent.Agent;
import card.Card;
import card.Rules;
import economy.ArtifactAgent;
import economy.ArtifactAgentTask;

/**
 * ...
 * @author 
 */
class Logic_PhantomDrafter extends Logic_Player
{
	private var turnsOnSameTask:Int = 0;
	private var howToGetTicket:ArtifactAgentTask = NONE;
	
	public function new()
	{
		super();
	}
	
	override public function beforeTrades_Artifact(agent:ArtifactAgent, market:Market):Void 
	{
		super.beforeTrades_Artifact(agent, market);
		
		//Open any packs I have
		var packs = agent.queryInventory("pack");
		while (packs > 0)
		{
			agent.openPack();
			packs--;
		}
		
		var tickets = agent.queryInventory("ticket");
		if (tickets < 1)
		{
			howToGetTicket = tryToGetATicket(market, agent);
		}
	}
	
	override public function afterTrades_Artifact(agent:ArtifactAgent, market:Market):Void 
	{
		super.afterTrades_Artifact(agent, market);
		
		//Check how many tickets I have
		var tickets = agent.queryInventory("ticket");
		
		//If I don't have one, acquire it according to the predetermined method
		if (tickets <= 0)
		{
			switch(howToGetTicket)
			{
				case ArtifactAgentTask.BUY_TICKET:
					agent.buyTicket();
				case ArtifactAgentTask.BUY_TICKET_FODDER:
					var cards = getTicketFodder(agent);
					if (cards != null)
					{
						agent.recycleCards(cards);
					}
					else
					{
						agent.buyTicket();
					}
				default:
					agent.buyTicket();
			}
		}
		
		//If I have a ticket, play phantom draft expert (consumes a ticket)
		if (tickets > 0)
		{
			agent.playPhantomDraft();
		}
	}
	
	private function getTicketFodder(agent:ArtifactAgent):Array<Card>
	{
		var cards = agent.cards.selectCheapest(20);
		var value:Float = 0.0;
		for (card in cards){
			value += card.price;
		}
		if (value >= Rules.TICKET_PRICE)
		{
			return null;
		}
		return cards;
	}
	
	private function tryToGetATicket(market:Market, agent:ArtifactAgent):ArtifactAgentTask
	{
		var ticketFodderCost = Rules.TICKET_PRICE / Rules.RECYCLE_CARDS_FOR_TICKET;
		var ticketFodderCostWithTax = (ticketFodderCost / (1.0 - Rules.TAX));
		
		//If any card is worth < ticket fodder, recycle!
		var myCards = agent.cards.selectCheaperThan(ticketFodderCost+0.01);
		
		if (myCards.length >= Rules.RECYCLE_CARDS_FOR_TICKET)
		{
			agent.recycleCards(myCards);
			return ArtifactAgentTask.NONE;
		}
		
		//If I don't have enough cards, offer to buy some from the market at a cheap price
		var needCards = Rules.RECYCLE_CARDS_FOR_TICKET - myCards.length;
		var fodderPrice = needCards * ticketFodderCost;
		
		if (agent.money >= fodderPrice)
		{
			//If I can afford it, place a bid to buy cards at ticket fodder price
			agent.buyCard(market, "*", ticketFodderCost, ticketFodderCost, needCards);
			return ArtifactAgentTask.BUY_TICKET_FODDER;
		}
		
		if (agent.money >= Rules.TICKET_PRICE)
		{
			//If I can afford it, buy my ticket for money right now
			agent.buyTicket();
			return ArtifactAgentTask.NONE;
		}
		else
		{
			//If I'm short, sell some cards until I can afford the ticket
			var amountShort = Rules.TICKET_PRICE - agent.money;
			agent.sellCardsWorth(market, amountShort);
			return ArtifactAgentTask.BUY_TICKET;
		}
	}
	
	/*
	 * 
		//Compare cost of recycling cards vs. buying a ticket for money
		if (Rules.TICKET_PRICE < myCardsValue && Rules.TICKET_PRICE < marketCardsValue)
		{
			//It's cheaper to buy a ticket for money
			if (agent.money >= Rules.TICKET_PRICE)
			{
				//We have enough money, buy a ticket right now!
				agent.buyTicket();
				return true;
			}
			else
			{
				//We're a bit short, sell some cards first
				var moneyNeeded = Rules.TICKET_PRICE - agent.money;
				var success = agent.sellCardsWorth(market, moneyNeeded);
				
				if (success)
				{
					//Next turn, remember to buy a ticket (if we have the money)
					nextTask = BUY_TICKET;
				}
				
				//Even if we succeeded, we won't have the money for the ticket until next turn.
				//We don't have a ticket at this moment.
				return false;
			}
		}
		else
		{
			if (Math.isNaN(marketCardsValue))
			{
				marketCardsValue = Math.POSITIVE_INFINITY;
			}
			
			//It's cheaper to recycle cards
			if (myCardsValue < marketCardsValue && myCards.length >= 20)
			{
				//Market cards are more expensive, so it's better to recycle my own cards
				agent.recycleCards(myCards);
				return true;
			}
			else
			{
				//Market cards are cheaper, so it's better to purchase them
				
				//Calc the maximum I'm willing to pay for market cards
				var diff = (myCardsValue - marketCardsValue) - 0.01;
				var unitDiff = diff / marketCards.length;
				
				var marketCardsMap = agent.cards.toCardMap(marketCards);
				for (key in marketCardsMap.keys())
				{
					var price = agent.cards.getPriceById(key);
					agent.buyCard(market, key, price, price+unitDiff, marketCardsMap.get(key));
					nextTask = RECYCLE_CARDS;
				}
				
				//Even if we succeeded, we won't have the cards to recycle for the ticket until next turn.
				//We don't have a ticket at this moment.
				return false;
			}
		}
		*/
}