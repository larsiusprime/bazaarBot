package bazaarbot.utils;

/**
 * ...
 * @author larsiusprime
 */
class History
{
	public var prices(default, null):HistoryLog;
	public var askPrices(default, null):HistoryLog;
	public var bidPrices(default, null):HistoryLog;
	public var asks  (default, null):HistoryLog;
	public var bids  (default, null):HistoryLog;
	public var trades(default, null):HistoryLog;
	public var profit(default, null):HistoryLog;

	public var pricesLastTurn:Array<{good:String,price:Float}>;
	
	public function new()
	{
		prices = new HistoryLog(Price);
		askPrices = new HistoryLog(Price);
		bidPrices = new HistoryLog(Price);
		asks   = new HistoryLog(Ask);
		bids   = new HistoryLog(Bid);
		trades = new HistoryLog(Trade);
		profit = new HistoryLog(Profit);
		
		pricesLastTurn = [];
	}
	
	public function updateIndex()
	{
		var arr = [];
		for (key in prices.log.keys())
		{
			var prices = prices.log.get(key);
			var price = prices[prices.length - 1];
			arr.push({price:price, good:key});
		}
		arr.sort(function(a:{price:Float, good:String}, b:{price:Float, good:String}):Int
		{
			if (a.price < b.price) return -1;
			if (a.price > b.price) return  1;
			return 0;
		});
		pricesLastTurn = arr;
	}

	public function register(good:String)
	{
		prices.register(good);
		askPrices.register(good);
		bidPrices.register(good);
		asks.register(good);
		bids.register(good);
		trades.register(good);
		profit.register(good);
	}
}
