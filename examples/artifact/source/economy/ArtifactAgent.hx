package examples.artifact.source.economy;
import bazaarbot.Market;
import bazaarbot.Offer;
import bazaarbot.agent.Agent;
import card.Card;

/**
 * ...
 * @author 
 */
class ArtifactAgent extends Agent
{
	public var cards:Array<Card>;
	
	public function new() 
	{
		cards = [];
	}
	
	public function buyCard(market:Market, card:Card, price:Float, count:Int)
	{
		var good = card.getId();
		market.bid(new Offer(id, good, count, price));
	}
	
	public function sellCard(market:Market, card:Card, price:Float, count:Int)
	{
		var good = card.getId();
		market.ask(new Offer(id, good, count, price));
	}
	
	public function addCard(card:Card)
	{
		cards.push(card.copy());
	}
	
	public function removeCard(card:Card)
	{
		for (c in cards)
		{
			if (c.equals(card))
			{
				cards.remove(c);
				break;
			}
		}
	}
}