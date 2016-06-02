package bazaarbot;
import bazaarbot.agent.BasicAgent;

/**
 * ...
 * @author larsiusprime
 */

class Economy
{
	public function new()
	{
		_markets = [];
	}

	public function addMarket(m:Market)
	{
		if (_markets.indexOf(m) == -1)
		{
			_markets.push(m);
			m.signalBankrupt.add(onBankruptcy);
		}
	}

	public function getMarket(name:String):Market
	{
		for (m in _markets)
		{
			if (m.name == name) return m;
		}
		return null;
	}

	public function simulate(rounds:Int)
	{
		for (m in _markets)
		{
			m.simulate(rounds);
		}
	}

	/***PRIVATE***/

	private function onBankruptcy(m:Market, a:BasicAgent):Void
	{
		//no implemenation -- provide your own in a subclass
	}

	private var _markets:Array<Market>;
}
