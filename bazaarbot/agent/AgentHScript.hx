package bazaarbot.agent;
import bazaarbot.Agent.AgentData;
import bazaarbot.agent.script.LogicHScript;
import openfl.Assets;

/**
 * A StandardAgent that gets its logic module from HScript
 * @author larsiusprime
 */
class AgentHScript extends AgentStandard
{
	public function new(id:Int, data:AgentData) 
	{
		super(id, data);
	}
	
	private static var cache:Map<String, LogicHScript>;
	
	override private function getLogic(str:String):Logic
	{
		if (cache == null) { cache = new Map<String, LogicHScript>();}
		if (cache.exists(str))
		{
			return cache.get(str);
		}
		
		var script = Assets.getText("assets/data/scripts/" + str);
		var logic = null;
		if (script != "")
		{
			logic = new LogicHScript(script);
		}
		else
		{
			logic = new LogicHScript(str);
		}
		cache.set(str, logic);
		trace("logic = " + logic);
		return logic;
	}
}