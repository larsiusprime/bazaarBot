package economy;

import bazaarbot.agent.Agent;
import bazaarbot.agent.ILogic;
import bazaarbot.Economy;
import bazaarbot.Market;
import bazaarbot.MarketData;
import economy.ArtifactMarket;
import haxe.Json;
import openfl.Assets;

/**
 * ...
 * @author larsiusprime
 */
class ArtifactEconomy extends Economy
{
	public function new()
	{
		super();
		var market = new ArtifactMarket();
		addMarket(market);
	}

	override function onBankruptcy(m:Market, a:Agent)
	{
		//do nothing
	}
}
