package bazaarbot.agent;
import bazaarbot.Agent.AgentData;
import openfl.Assets;

/**
 * A StandardAgent that gets its logic module from HScript
 * @author larsiusprime
 */
class AgentScript extends AgentStandard
{
	public function new(id:Int, data:AgentData) 
	{
		super(id, data);
	}
	
	private static var cache:Map<String, LogicScript>;
	
	override private function getLogic(str:String):Logic
	{
		if (cache == null) { cache = new Map<String, LogicScript>();}
		if (cache.exists(str))
		{
			return cache.get(str);
		}
		
		var script = Assets.getText("assets/data/scripts/" + str);
		var logic = null;
		if (script != "")
		{
			logic = new LogicScript(script);
		}
		else
		{
			logic = new LogicScript(str);
		}
		cache.set(str, logic);
		return logic;
	}
}