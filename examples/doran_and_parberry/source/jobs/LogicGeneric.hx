package jobs;
import bazaarbot.agent.BasicAgent;
import bazaarbot.agent.Logic;
import bazaarbot.Market;
/**
 * ...
 * @author larsiusprime
 */
class LogicGeneric extends Logic
{

	public function new(?data:Dynamic)
	{
		super(data);
	}

	private function makeRoomFor(market:Market, agent:BasicAgent, good:String = "food", amt:Float = 1.0):Void
	{
		var toDrop:String = market.getCheapestGood(10, [good]);
		if (toDrop != "")
		{
			_consume(agent, toDrop, amt);
		}
	}
}
