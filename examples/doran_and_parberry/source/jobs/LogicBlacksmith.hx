package jobs;
import bazaarbot.Market;
import bazaarbot.agent.BasicAgent;
import bazaarbot.agent.Logic;

/**
 * ...
 * @author larsiusprime
 */
class LogicBlacksmith extends LogicGeneric
{

	public function new(?data)
	{
		super(data);
	}

	override public function perform(agent:BasicAgent, market:Market)
	{
		var food = agent.queryInventory("food");
		var metal = agent.queryInventory("metal");

		var has_food = food >= 1;
		var has_metal = metal >= 1;

		if (has_food && has_metal)
		{
			//convert all metal into tools
			_produce(agent,"tools",metal);
			_consume(agent,"metal",metal);
		}
		else
		{
			//fined $2 for being idle
			_consume(agent,"money",2);
			if (!has_food && agent.inventoryFull)
			{
				makeRoomFor(market, agent,"food",2);
			}
		}
	}

}
