package;
import bazaarbot.Agent;
import bazaarbot.agent.BasicAgent;
import bazaarbot.agent.Logic;
import bazaarbot.agent.LogicScript;
import bazaarbot.Economy;
import bazaarbot.Market;
import bazaarbot.MarketData;
import haxe.Json;
import jobs.LogicBlacksmith;
import jobs.LogicFarmer;
import jobs.LogicMiner;
import jobs.LogicRefiner;
import jobs.LogicWoodcutter;
import openfl.Assets;

/**
 * ...
 * @author larsiusprime
 */
class DoranAndParberryEconomy extends Economy
{

	public function new()
	{
		super();
		var market = new Market("default");
		market.init(MarketData.fromJSON(Json.parse(Assets.getText("assets/settings.json")), getAgent));
		addMarket(market);
	}

	override function onBankruptcy(m:Market, a:BasicAgent):Void
	{
		replaceAgent(m, a);
	}

	private function replaceAgent(market:Market, agent:BasicAgent):Void
	{
		var bestClass:String = market.getMostProfitableAgentClass();

		//Special case to deal with very high demand-to-supply ratios
		//This will make them favor entering an underserved market over
		//Just picking the most profitable class
		var bestGood:String = market.getHottestGood();

		if (bestGood != "")
		{
			var bestGoodClass:String = getAgentClassThatMakesMost(bestGood);
			if (bestGoodClass != "")
			{
				bestClass = bestGoodClass;
			}
		}

		var newAgent = getAgent(market.getAgentClass(bestClass));
		market.replaceAgent(agent, newAgent);
	}


	/**
	 * Get the average amount of a given good that a given agent class has
	 * @param	className
	 * @param	good
	 * @return
	 */
	/*
	public function getAgentClassAverageInventory(className:String, good:String):Float
	{
		var list = _agents.filter(function(a:BasicAgent):Bool { return a.className == className; } );
		var amount:Float = 0;
		for (agent in list)
		{
			amount += agent.queryInventory(good);
		}
		amount /= list.length;
		return amount;
	}
	*/

	/**
	 * Find the agent class that produces the most of a given good
	 * @param	good
	 * @return
	 */
	public function getAgentClassThatMakesMost(good:String):String
	{
		return if (good == "food" ) {"farmer";      }
		  else if (good == "wood" ) {"woodcutter";  }
		  else if (good == "ore"  ) {"miner";       }
		  else if (good == "metal") {"refiner";     }
		  else if (good == "tools") { "blacksmith"; }
		  else "";
	}

	/**
	 * Find the agent class that has the most of a given good
	 * @param	good
	 * @return
	 */
	/*
	public function getAgentClassWithMost(good:String):String
	{
		var amount:Float = 0;
		var bestAmount:Float = 0;
		var bestClass:String = "";
		for (key in _mapAgents.keys())
		{
			amount = getAverageInventory(key, good);
			if (amount > bestAmount)
			{
				bestAmount = amount;
				bestClass = key;
			}
		}
		return bestClass;
	}
	*/

	private function getAgentScript(data:AgentData):BasicAgent
	{
		data.logic = new LogicScript(data.logicName+".hs");
		return new Agent(0, data);
	}

	private function getAgent(data:AgentData):BasicAgent
	{
		data.logic = getLogic(data.logicName);
		return new Agent(0, data);
	}

	private function getLogic(str:String):Logic
	{
		switch(str)
		{
			case "blacksmith": return new LogicBlacksmith(null);
			case "farmer": return new LogicFarmer(null);
			case "miner": return new LogicMiner(null);
			case "refiner": return new LogicRefiner(null);
			case "woodcutter": return new LogicWoodcutter(null);
		}
		return null;
	}
}
