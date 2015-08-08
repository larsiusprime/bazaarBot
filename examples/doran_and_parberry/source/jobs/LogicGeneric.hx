package jobs;
import bazaarbot.Agent;
import bazaarbot.agent.Logic;
import bazaarbot.BazaarBot;

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
	
	private function makeRoomFor(bazaar:BazaarBot, a:Agent, c:String = "food", amt:Float = 1.0):Void
	{ 
		var to_drop:String = bazaar.getCheapestCommodity(10, [c]);
		if (to_drop != "")
		{
			_consume(a, to_drop, amt);
		}
	}
}