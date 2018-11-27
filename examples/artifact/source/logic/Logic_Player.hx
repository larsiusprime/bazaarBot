package logic;
import bazaarbot.Market;
import bazaarbot.agent.Agent;
import bazaarbot.agent.ILogic;
import card.Card;
import card.CardType;
import card.CardColor;
import card.CardRarity;
import economy.ArtifactAgent;

/**
 * ...
 * @author 
 */
class Logic_Player implements ILogic
{
	public function new() 
	{
		
	}
	
	public function getCards(type:CardType, color:CardColor, rarity:CardRarity)
	{
		
	}
	
	public function beforeTrades(agent:Agent, market:Market):Void
	{
		beforeTrades_Artifact(cast agent, market);
	}
	
	public function afterTrades(agent:Agent, market:Market):Void
	{
		afterTrades_Artifact(cast agent, market);
	}
	
	
	public function beforeTrades_Artifact(agent:ArtifactAgent, market:Market):Void
	{
		agent.onStartTurn(market);
	}
	
	public function afterTrades_Artifact(agent:ArtifactAgent, market:Market):Void
	{
		
	}
}