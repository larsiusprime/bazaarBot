package bazaarbot.utils;

/**
 * ...
 * @author larsiusprime
 */
class TradeBook
{
	public var bids:Map<String, Array<Offer>>;
	public var asks:Map<String, Array<Offer>>;

	public function new()
	{
		bids = new Map<String, Array<Offer>>();
		asks = new Map<String, Array<Offer>>();
	}

	public function register(name:String)
	{
		asks.set(name, new Array<Offer>());
		bids.set(name, new Array<Offer>());
	}

	public function bid(offer:Offer):Bool
	{
		if (!bids.exists(offer.good))
			return false;

		bids.get(offer.good).push(offer);
		return true;
	}

	public function ask(offer:Offer):Bool
	{
		if (!bids.exists(offer.good))
			return false;

		asks.get(offer.good).push(offer);
		return true;
	}
}
