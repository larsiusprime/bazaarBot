package bazaarbot;

import bazaarbot.agent.BasicAgent;
import bazaarbot.agent.BasicAgent.AgentData;
import bazaarbot.Market;
import bazaarbot.Offer;
import flash.geom.Point;

/**
 * An agent that performs the basic logic from the Doran & Parberry article
 * @author
 */
class Agent extends BasicAgent
{
	public static inline var SIGNIFICANT:Float = 0.25;		//25% more or less is "significant"
	public static inline var SIG_IMBALANCE:Float = 0.33;
	public static inline var LOW_INVENTORY:Float = 0.1;		//10% of ideal inventory = "LOW"
	public static inline var HIGH_INVENTORY:Float = 2.0;	//200% of ideal inventory = "HIGH"

	public static inline var MIN_PRICE:Float = 0.01;		//lowest possible price

	public function new(id:Int, data:AgentData)
	{
		super(id, data);
	}

	override public function createBid(bazaar:Market, good:String, limit:Float):Offer
	{
		var bidPrice:Float = determinePriceOf(good);
		var ideal:Float = determinePurchaseQuantity(bazaar, good);

		//can't buy more than limit
		var quantityToBuy:Float = ideal > limit ? limit : ideal;
		if (quantityToBuy > 0)
		{
			return new Offer(id, good, quantityToBuy, bidPrice);
		}
		return null;
	}

	override public function createAsk(bazaar:Market, commodity_:String, limit_:Float):Offer
	{
		var ask_price:Float = determinePriceOf(commodity_);
		var ideal:Float = determineSaleQuantity(bazaar, commodity_);

		//can't sell less than limit
		var quantity_to_sell:Float = ideal < limit_ ? limit_ : ideal;
		if (quantity_to_sell > 0)
		{
			return new Offer(id, commodity_, quantity_to_sell, ask_price);
		}
		return null;
	}

	override public function generateOffers(bazaar:Market, commodity:String):Void
	{
		var offer:Offer;
		var surplus:Float = _inventory.surplus(commodity);
		if (surplus >= 1)
		{
			 offer = createAsk(bazaar, commodity, 1);
			 if (offer != null)
			 {
				bazaar.ask(offer);
			 }
		}
		else
		{
			var shortage:Float = _inventory.shortage(commodity);
			var space:Float = _inventory.getEmptySpace();
			var unit_size:Float = _inventory.getCapacityFor(commodity);

			if (shortage > 0 && space >= unit_size)
			{
				var limit:Float = 0;
				if ((shortage * unit_size) <= space)	//enough space for ideal order
				{
					limit = shortage;
				}
				else									//not enough space for ideal order
				{
					limit = Math.floor(space / shortage);
				}

				if (limit > 0)
				{
					offer = createBid(bazaar, commodity, limit);
					if (offer != null)
					{
						bazaar.bid(offer);
					}
				}
			}
		}
	}

	override public function updatePriceModel(bazaar:Market, act:String, good:String, success:Bool, unitPrice:Float = 0):Void
	{
		var observed_trades:Array<Float>;

		if (success)
		{
			//Add this to my list of observed trades
			observed_trades = _observedTradingRange.get(good);
			observed_trades.push(unitPrice);
		}

		var public_mean_price:Float = bazaar.getAverageHistoricalPrice(good, 1);

		var belief:Point = getPriceBelief(good);
		var mean:Float = (belief.x + belief.y) / 2;
		var wobble:Float = 0.05;

		var delta_to_mean:Float = mean - public_mean_price;

		if (success)
		{
			if (act == "buy" && delta_to_mean > SIGNIFICANT)			//overpaid
			{
				belief.x -= delta_to_mean / 2;							//SHIFT towards mean
				belief.y -= delta_to_mean / 2;
			}
			else if (act == "sell" && delta_to_mean < -SIGNIFICANT)		//undersold
			{
				belief.x -= delta_to_mean / 2;							//SHIFT towards mean
				belief.y -= delta_to_mean / 2;
			}

			belief.x += wobble * mean;	//increase the belief's certainty
			belief.y -= wobble * mean;
		}
		else
		{
			belief.x -= delta_to_mean / 2;	//SHIFT towards the mean
			belief.y -= delta_to_mean / 2;

			var special_case:Bool = false;
			var stocks:Float = queryInventory(good);
			var ideal:Float = _inventory.ideal(good);

			if (act == "buy" && stocks < LOW_INVENTORY * ideal)
			{
				//very low on inventory AND can't buy
				wobble *= 2;			//bid more liberally
				special_case = true;
			}
			else if (act == "sell" && stocks > HIGH_INVENTORY * ideal)
			{
				//very high on inventory AND can't sell
				wobble *= 2;			//ask more liberally
				special_case = true;
			}

			if (!special_case)
			{
				//Don't know what else to do? Check supply vs. demand
				var asks:Float = bazaar.history.asks.average(good,1);
				var bids:Float = bazaar.history.bids.average(good,1);

				//supply_vs_demand: 0=balance, 1=all supply, -1=all demand
				var supply_vs_demand:Float = (asks - bids) / (asks + bids);

				//too much supply, or too much demand
				if (supply_vs_demand > SIG_IMBALANCE || supply_vs_demand < -SIG_IMBALANCE)
				{
					//too much supply: lower price
					//too much demand: raise price

					var new_mean = public_mean_price * (1 - supply_vs_demand);
					delta_to_mean = mean - new_mean;

					belief.x -= delta_to_mean / 2;	//SHIFT towards anticipated new mean
					belief.y -= delta_to_mean / 2;
				}
			}

			belief.x -= wobble * mean;	//decrease the belief's certainty
			belief.y += wobble * mean;
		}

		if (belief.x < MIN_PRICE)
		{
			belief.x = MIN_PRICE;
		}
		else if (belief.y < MIN_PRICE)
		{
			belief.y = MIN_PRICE;
		}
	}
}
