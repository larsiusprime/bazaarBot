package bazaarbot.agent;
import bazaarbot.Market;

/**
 * @author 
 */
interface ILogic 
{
	public function perform(agent:Agent, market:Market):Void;
}