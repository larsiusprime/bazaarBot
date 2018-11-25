package examples.artifact.source.logic;
import bazaarbot.Market;
import bazaarbot.agent.Agent;

/**
 * ...
 * @author 
 */
class PhantomDrafterLogic extends PlayerLogic
{
	public var 
	
	public function new() 
	{
		super();
	}
	
	override public function perform(agent:Agent, market:Market):Void 
	{
		sellAllCards();
	}
}