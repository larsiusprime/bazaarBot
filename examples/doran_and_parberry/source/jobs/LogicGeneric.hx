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
	
	private function makeRoomFor(market:Market, a:BasicAgent, c:String = "food", amt:Float = 1.0):Void
	{ 
		var to_drop:String = market.getCheapestCommodity(10, [c]);
		if (to_drop != "")
		{
			_consume(a, to_drop, amt);
		}
	}
}