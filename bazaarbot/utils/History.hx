package bazaarbot.utils;

/**
 * ...
 * @author larsiusprime
 */
class History
{
	public var prices(default, null):HistoryLog;
	public var asks  (default, null):HistoryLog;
	public var bids  (default, null):HistoryLog;
	public var trades(default, null):HistoryLog;
	public var profit(default, null):HistoryLog;

	public function new()
	{
		prices = new HistoryLog(Price);
		asks   = new HistoryLog(Ask);
		bids   = new HistoryLog(Bid);
		trades = new HistoryLog(Trade);
		profit = new HistoryLog(Profit);
	}

	public function register(good:String)
	{
		prices.register(good);
		asks.register(good);
		bids.register(good);
		trades.register(good);
		profit.register(good);
	}
}
