package jobs;
import bazaarbot.agent.BasicAgent;
import bazaarbot.Market;
/**
 * ...
 * @author larsiusprime
 */
class LogicWoodcutter extends LogicGeneric
{

	public function new(?data:Dynamic)
	{
		super(data);
	}

	override public function perform(agent:BasicAgent, market:Market)
	{
		var food = agent.queryInventory("food");
		var tools = agent.queryInventory("tools");

		var has_food = food >= 1;
		var has_tools = tools >= 1;

		if (has_food)
		{
			if (has_tools)
			{
				//produce 2 wood, consume 1 food, break tools with 10% chance
				_produce(agent,"wood",2);
				_consume(agent,"food",1);
				_consume(agent,"tools",1,0.1);
			}
			else
			{
				//produce 1 wood, consume 1 food
				_produce(agent,"wood",1);
				_consume(agent,"food",1);
			}
		}
		else
		{
			//fined $2 for being idle
			_consume(agent,"money",2);
			if (!has_food && agent.inventoryFull)
			{
				makeRoomFor(market, agent, "food",2);
			}
		}
	}
}
