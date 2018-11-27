package bazaarbot.agent;
import bazaarbot.Market;

/**
 * @author 
 */
interface ILogic 
{
	public function beforeTrades(agent:Agent, market:Market):Void;
	public function afterTrades(agent:Agent, market:Market):Void;
}