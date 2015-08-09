package bazaarbot;
import bazaarbot.Agent;
import bazaarbot.Agent.AgentData;
import bazaarbot.agent.AgentHScript;
import bazaarbot.agent.Logic;
import bazaarbot.utils.History;
import bazaarbot.utils.MarketReport;
import bazaarbot.utils.Quick;
import bazaarbot.utils.TradeBook;
import haxe.Json;
import haxe.xml.Fast;
import flash.errors.Error;
import hscript.Interp;
import hscript.Parser;
import openfl.Assets;

/**
 * ...
 * @author 
 */
class Market
{
	/**Logs information about all economic activity in this market**/
	public var history:History;
	
	public function new() 
	{
		history = new History();
		_book = new TradeBook();
		_goodTypes = new Array<String>();
		_agents = new Array<Agent>();
		_mapGoods = new Map<String, Good>();
		_mapAgents = new Map<String, AgentData>();
	}
	
	public function init(data:MarketData):Void
	{
		fromData(data);
	}
	
	/*public function init(data:Dynamic, getLogic:String->Logic):Void
	{
		fromJSON(data, getLogic);
	}*/
	
	public function numTypesOfGood():Int
	{
		return _goodTypes.length;
	}
	
	public function numAgents():Int
	{
		return _agents.length;
	}
	
	@:access(bazaarbot.Agent)
	public function simulate(rounds:Int):Void
	{
		for (round in 0...rounds)
		{
			for (agent in _agents)
			{
				agent.moneyLastRound = agent.money;
				
				var ac = _mapAgents.get(agent.className);
				ac.logic.perform(agent, this);
				//agent.getLogic(ac.logic).perform(agent, this);
				
				for (commodity in _goodTypes)
				{
					agent.generateOffers(this, commodity);
				}
			}
			
			for (commodity in _goodTypes)
			{
				resolveOffers(commodity);
			}
			for (agent in _agents)
			{
				if (agent.money <= 0)
				{
					replaceAgent(agent);
				}
			}
		}
		_roundNum++;
	}
	
	public function ask(offer:Offer):Void
	{
		_book.ask(offer);
	}
	
	public function bid(offer:Offer):Void
	{
		_book.bid(offer);
	}
	
	/**
	 * Returns the historical mean price of the given commodity over the last X rounds
	 * @param	commodity_ string id of commodity
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	public function getAverageHistoricalPrice(good:String, range:Int):Float
	{
		return history.prices.average(good, range);
	}
	
	public function getCheapestCommodity(range:Int, exclude:Array<String> = null):String
	{
		var best_price:Float = 999999999999999999;
		var best_good:String = "";
		for (g in _goodTypes)
		{
			if (exclude == null || exclude.indexOf(g) == -1)
			{
				var price:Float = history.prices.average(g, range);
				if (price < best_price)
				{
					best_price = price; 
					best_good = g;
				}
			}
		}
		return best_good;
	}
	
	public function getDearestCommodity(range:Int, exclude:Array<String> = null):String
	{
		var best_price:Float = 0;
		var best_good:String = "";
		for (g in _goodTypes)
		{
			if (exclude == null || exclude.indexOf(g) == -1)
			{
				var price = history.prices.average(g, range);
				if (price > best_price)
				{
					best_price = price;
					best_good = g;
				}
			}
		}
		return best_good;
	}
	
	public function getGoods_unsafe():Array<String>
	{
		return _goodTypes;
	}
	
	public function getGoodEntry(str:String):Good
	{
		if (_mapGoods.exists(str))
		{
			return _mapGoods.get(str).copy();
		}
		return null;
	}
	
	/********REPORT**********/
	public function get_marketReport(rounds:Int):MarketReport
	{
		var mr:MarketReport = new MarketReport();
		mr.strListGood = "Commodities\n\n";
		mr.strListGoodPrices = "Price\n\n";
		mr.strListGoodTrades = "Trades\n\n";
		mr.strListGoodAsks = "Supply\n\n";
		mr.strListGoodBids = "Demand\n\n";
		
		mr.strListAgent = "Classes\n\n";
		mr.strListAgentCount = "Count\n\n";
		mr.strListAgentProfit = "Profit\n\n";
		mr.strListAgentMoney = "Money\n\n";
		
		mr.arrStrListInventory = [];
			
		for (commodity in _goodTypes)
		{
			mr.strListGood += commodity + "\n";
			
			var price:Float = history.prices.average(commodity, rounds);
			mr.strListGoodPrices += Quick.numStr(price, 2) + "\n";
			
			var asks:Float = history.asks.average(commodity, rounds);
			mr.strListGoodAsks += Std.int(asks) + "\n";
			
			var bids:Float = history.bids.average(commodity, rounds);
			mr.strListGoodBids += Std.int(bids) + "\n";
			
			var trades:Float = history.trades.average(commodity, rounds);
			mr.strListGoodTrades += Std.int(trades) + "\n";
			
			mr.arrStrListInventory.push(commodity + "\n\n");
		}
		for (key in _mapAgents.keys())
		{
			var inventory:Array<Float> = [];
			for (str in _goodTypes)
			{
				inventory.push(0);
			}
			mr.strListAgent += key + "\n";
			var profit:Float = history.profit.average(key, rounds);
			mr.strListAgentProfit += Quick.numStr(profit, 2) + "\n";
			
			var test_profit:Float = 0;
			var list = _agents.filter(function(a:Agent):Bool { return a.className == key; } );
			var count:Int = list.length;
			var money:Float = 0;
			
			for (a in list)
			{
				money += a.money;
				for (lic in 0..._goodTypes.length)
				{
					inventory[lic] += a.queryInventory(_goodTypes[lic]);
				}
			}
			
			money /= list.length;
			for (lic in 0..._goodTypes.length)
			{
				inventory[lic] /= list.length;
				mr.arrStrListInventory[lic] += Quick.numStr(inventory[lic],1) + "\n";
			}
			
			mr.strListAgentCount += Quick.numStr(count, 0) + "\n";
			mr.strListAgentMoney += Quick.numStr(money, 0) + "\n";
		}
		return mr;
	}	
	
	/********PRIVATE*********/
	
	private var _roundNum:Int = 0;
	
	private var _goodTypes:Array<String>;		//list of string ids for all the legal commodities
	private var _agents:Array<Agent>;
	private var _book:TradeBook;
	private var _mapAgents:Map<String, AgentData>;
	private var _mapAgentLogic:Map<String, Logic>;
	private var _mapGoods:Map<String, Good>;
	
	private function fromData(data:MarketData)
	{
		//Create commodity index
		for (g in data.goods)
		{
			_goodTypes.push(g.id);
			_mapGoods.set(g.id, new Good(g.id, g.size));
			
			history.register(g.id);
			history.prices.add(g.id, 1.0);	//start the bidding at $1!
			history.asks.add(g.id, 1.0);	//start history charts with 1 fake buy/sell bid
			history.bids.add(g.id, 1.0);
			history.trades.add(g.id, 1.0);
			
			_book.register(g.id);
		}
		
		_mapAgents = new Map<String, AgentData>();
		
		for (aData in data.agentTypes)
		{
			_mapAgents.set(aData.className, aData);
			history.profit.register(aData.className);
		}
		
		//Make the agent list
		_agents = [];
		
		var agentIndex = 0;
		for (agent in data.agents)
		{
			agent.id = agentIndex;
			agent.init(this);
			_agents.push(agent);
			agentIndex++;
		}
		
	}
	
	private function getAgentClassThatMakesMost(good:String):String
	{
		var best_class:String = "";
		var parser = new Parser();
		var script:String = Assets.getText("assets/data/scripts/best_job.hs");
		var ast = parser.parseString(script);
		var interp = new Interp();
		
		var variables:Map<String,Dynamic> = ["commodity" => good];
		interp.variables = variables;
		best_class = Std.string(interp.execute(ast));
		
		return best_class;
	}
	
	private function getAgentClassWithMost(good:String):String
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
	
	private function getAverageInventory(className:String, good:String):Float
	{
		var list = _agents.filter(function(a:Agent):Bool { return a.className == className; } );
		var amount:Float = 0;
		for (agent in list)
		{
			amount += agent.queryInventory(good);
		}
		amount /= list.length;
		return amount;
	}
	
	/**
	 * Get the market with the highest demand/supply ratio over time
	 * @param   minimum the minimum demand/supply ratio to consider an opportunity
	 * @param	range number of rounds to look back
	 * @return
	 */
	
	private function getBestMarketOpportunity(minimum:Float = 1.5, range:Int = 10):String
	{
		var best_market:String = "";
		var best_ratio:Float = -999999;
		for(good in _goodTypes){
			var asks:Float = history.asks.average(good, range);
			var bids:Float = history.bids.average(good, range);
			var ratio:Float = 0;
			if (asks == 0 && bids > 0) {
				ratio = 9999999999999999;
			}else {
				ratio = bids / asks;
			}
			if (ratio > minimum && ratio > best_ratio) {
				best_ratio = ratio;
				best_market = good;
			}
		}
		return best_market;
	}
	
	private function getMostProfitableAgentClass(range:Int = 10):String
	{
		var list:Array<Float>;
		var best:Float = -99999;
		var best_id:String="";
		for (ac_id in _mapAgents.keys())
		{
			var val:Float = history.profit.average(ac_id, range);
			if (val > best) {
				best_id = ac_id;
				best = val;
			}
		}
		return best_id;
	}
	
	private function resolveOffers(good:String = ""):Void
	{
		var bids:Array<Offer> = _book.bids.get(good);
		var asks:Array<Offer> = _book.asks.get(good);
		
		bids = Quick.shuffle(bids);
		asks = Quick.shuffle(asks);
		
		bids.sort(Quick.sortDecreasingPrice);		//highest buying price first
		asks.sort(Quick.sortIncreasingPrice);		//lowest selling price first
		
		var successfulTrades:Int = 0;		//# of successful trades this round
		var moneyTraded:Float = 0;			//amount of money traded this round
		var unitsTraded:Float = 0;			//amount of goods traded this round
		var avgPrice:Float = 0;				//avg clearing price this round
		var numAsks:Float = 0;
		var numBids:Float = 0;
		
		var failsafe:Int = 0;
		
		for (i in 0...bids.length)
		{
			numBids += bids[i].units;
		}
		
		for (i in 0...asks.length)
		{
			numAsks += asks[i].units;
		}
		
		//march through and try to clear orders
		while (bids.length > 0 && asks.length > 0)		//while both books are non-empty
		{
			var buyer:Offer = bids[0];
			var seller:Offer = asks[0];
			
			var quantity_traded = Math.min(seller.units, buyer.units);
			var clearing_price  = Quick.avgf(seller.unit_price, buyer.unit_price);
			
			if (quantity_traded > 0)
			{
				//transfer the goods for the agreed price
				seller.units -= quantity_traded;
				buyer.units -= quantity_traded;
				
				transferGood(good, quantity_traded, seller.agent_id, buyer.agent_id);
				transferMoney(quantity_traded * clearing_price, seller.agent_id, buyer.agent_id);
				
				//update agent price beliefs based on successful transaction
				var buyer_a:Agent = _agents[buyer.agent_id];
				var seller_a:Agent = _agents[seller.agent_id];
				buyer_a.updatePriceModel(this, "buy", good, true, clearing_price);
				seller_a.updatePriceModel(this, "sell", good, true, clearing_price);
				
				//log the stats
				moneyTraded += (quantity_traded * clearing_price);
				unitsTraded += quantity_traded;
				successfulTrades++;
			}
			
			if (seller.units == 0)		//seller is out of offered good
			{
				asks.splice(0, 1);		//remove ask
				failsafe = 0;
			}
			if (buyer.units == 0)		//buyer is out of offered good
			{
				bids.splice(0, 1);		//remove bid
				failsafe = 0;
			}
			
			failsafe++;
			
			if (failsafe > 1000)
			{
				trace("BOINK!");
			}
		}
		
		//reject all remaining offers, 
		//update price belief models based on unsuccessful transaction
		while (bids.length > 0)
		{
			var buyer:Offer = bids[0];
			var buyer_a:Agent = _agents[buyer.agent_id];
			buyer_a.updatePriceModel(this,"buy",good, false);
			bids.splice(0, 1);
		}
		while (asks.length > 0)
		{
			var seller:Offer = asks[0];
			var seller_a:Agent = _agents[seller.agent_id];
			seller_a.updatePriceModel(this,"sell",good, false);
			asks.splice(0, 1);
		}
		
		//update history
	
		history.asks.add(good, numAsks);
		history.bids.add(good, numBids);
		history.trades.add(good, unitsTraded);
		
		if (unitsTraded > 0)
		{
			avgPrice = moneyTraded / cast(unitsTraded, Float);
			history.prices.add(good, avgPrice);
		}
		else
		{
			//special case: none were traded this round, use last round's average price
			history.prices.add(good, history.prices.average(good, 1));
			avgPrice = history.prices.average(good,1);
		}
		
		_agents.sort(Quick.sortAgentAlpha);
		
		var curr_class:String = "";
		var last_class:String = "";
		var list:Array<Float> = null;
		var avg_profit:Float = 0;
		
		trace("_agents = " + _agents);
		
		for (i in 0..._agents.length)
		{
			var a:Agent = _agents[i];		//get current agent
			curr_class = a.className;			//check its class
			if (curr_class != last_class)		//new class?
			{
				if (list != null)				//do we have a list built up?
				{				
					//log last class' profit
					history.profit.add(last_class, Quick.listAvgf(list));
				}
				list = [];		//make a new list
				last_class = curr_class;
			}
			list.push(a.profit);			//push profit onto list
		}
		
		//add the last class too
		history.profit.add(last_class, Quick.listAvgf(list));
		
		//sort by id so everything works again
		_agents.sort(Quick.sortAgentId);
		
	}
	
	private function replaceAgent(agent:Agent):Void
	{
		var best_id:String = getMostProfitableAgentClass();
		
		//Special case to deal with very high demand-to-supply ratios
		//This will make them favor entering an underserved market over
		//Just picking the most profitable class
		var best_opportunity:String = getBestMarketOpportunity();
		if (best_opportunity != "")
		{
			var best_opportunity_class:String = getAgentClassThatMakesMost(best_opportunity);
			if (best_opportunity_class != "") {
				best_id = best_opportunity_class;
			}
		}
		
		var agentData = _mapAgents.get(best_id);
		
		var newAgent:Agent = new AgentHScript(agent.id, agentData);
		newAgent.init(this);
		_agents[agent.id] = newAgent;
		agent.destroy();
	}
	
	private function transferGood(good:String, units:Float, seller_id:Int, buyer_id:Int):Void
	{
		var seller:Agent = _agents[seller_id];
		var  buyer:Agent = _agents[buyer_id];
		seller.changeInventory(good, -units);
		 buyer.changeInventory(good,  units);
	}
	
	private function transferMoney(amount:Float, seller_id:Int, buyer_id:Int):Void
	{
		var seller:Agent = _agents[seller_id];
		var  buyer:Agent = _agents[buyer_id];
		seller.money += amount;
		 buyer.money -= amount;
	}
	
}