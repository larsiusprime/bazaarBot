package bazaarbot.agent;
import haxe.io.Path;
import haxe.Json;
import hscript.Interp;
import hscript.Parser;
import openfl.Assets;

/**
 * ...
 * @author
 */
class Logic
{
	private var init:Bool = false;

	public function new(?data:Dynamic)
	{
		//no implemenation -- provide your own in a subclass
	}

	/**
	 * Perform this logic on the given agent
	 * @param	agent
	 */

	public function perform(agent:BasicAgent, market:Market):Void
	{
		//no implemenation -- provide your own in a subclass
	}

	private function _produce(agent:BasicAgent, commodity:String, amount:Float, chance:Float = 1.0):Void
	{
		if (chance >= 1.0 || Math.random() < chance)
		{
			agent.changeInventory(commodity, amount);
		}
	}

	private function _consume(agent:BasicAgent, commodity:String, amount:Float, chance:Float = 1.0):Void
	{
		if (chance >= 1.0 || Math.random() < chance)
		{
			if (commodity == "money")
			{
				agent.money -= amount;
			}
			else
			{
				agent.changeInventory(commodity, -amount);
			}
		}
	}

}
