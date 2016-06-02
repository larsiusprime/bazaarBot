package jobs;
import bazaarbot.agent.BasicAgent;
import bazaarbot.Market;
/**
 * ...
 * @author larsiusprime
 */
class LogicRefiner extends LogicGeneric
{

	public function new(?data:Dynamic)
	{
		super(data);
	}

	override public function perform(agent:BasicAgent, market:Market)
	{
		var food = agent.queryInventory("food");
		var tools = agent.queryInventory("tools");
		var ore = agent.queryInventory("ore");

		var has_food = food >= 1;
		var has_tools = tools >= 1;
		var has_ore = ore >= 1;

		if (has_food && has_ore)
		{
			if (has_tools)
			{
				//convert all ore into metal, consume 1 food, break tools with 10% chance
				_produce(agent,"metal",ore);
				_consume(agent,"ore",ore);
				_consume(agent,"food",1);
				_consume(agent,"tools",1,0.1);
			}
			else{
				//convert up to 2 ore into metal, consume 1 food
				var max = agent.queryInventory("ore");
				if(max > 2){ max = 2;}
				_produce(agent,"metal", max);
				_consume(agent,"ore", max);
				_consume(agent,"food",1);
			}
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
