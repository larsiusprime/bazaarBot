package bazaarbot;

/**
 * ...
 * @author larsiusprime
 */

class Economy
{
	public function new() 
	{
		
	}
	
	public function addMarket(m:Market)
	{
		if (_markets.indexOf(m) == -1)
		{
			_markets.push(m);
		}
	}
	
	public function simulate(i:Int)
	{
		for (m in _markets)
		{
			m.simulate(rounds);
		}
	}
	
	private var _markets:Array<Market>;
}