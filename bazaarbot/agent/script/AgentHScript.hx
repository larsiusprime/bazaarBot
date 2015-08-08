package bazaarbot.agent.script;
import bazaarbot.agent.Agent.AgentData;
import bazaarbot.agent.AgentStandard;
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
	
	public function getLogic(str:String):Logic
	{
		script = Assets.getText("assets/data/scripts/" + str);
		
		var logic = null;
		if (script != "")
		{
			logic = new Logic(script);
		}
		else
		{
			logic = new Logic(data.logic);
		}
		return logic;
	}
}