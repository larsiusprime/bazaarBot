package card;
import bazaarbot.Market;

/**
 * ...
 * @author 
 */
class Deck
{
	public var count(default, null):Int;
	private var map:Map<String,Int>;
	private var prices:Map<String,Float>;
	
	public function new()
	{
		count = 0;
		map = new Map<String, Int>();
		prices = new Map<String, Float>();
	}
	
	public function getPriceById(id:String):Float
	{
		if (prices.exists(id)) return prices.get(id);
		return -1;
	}
	
	public function updatePrices(market:Market)
	{
		for (key in map.keys())
		{
			prices.set(key, market.getAverageHistoricalPrice(key, 1));
		}
	}
	
	public function addCard(card:Card)
	{
		var id = card.getId();
		addCardById(id);
	}
	
	public function addCardById(id:String)
	{
		var amount:Int = 0;
		if (map.exists(id)) amount = map.get(id);
		amount++;
		map.set(id, amount);
		count++;
	}
	
	public function removeCard(card:Card)
	{
		var id = card.getId();
		removeCardById(id);
	}
	
	public function removeCardById(id:String)
	{
		var amount:Int = 0;
		if (map.exists(id)) amount = map.get(id);
		amount--;
		if (amount < 0)
		{
			amount = 0;
		}
		else
		{
			count--;
		}
		if (amount == 0)
		{
			map.remove(id);
		}
		else
		{
			map.set(id, amount);
		}
	}
	
	public function selectValue(money:Float, includingTax:Bool=true):Map<String,Int>
	{
		var cheapest = selectCheapest(count);
		var valueSoFar:Float = 0.0;
		
		if (includingTax)
		{
			money = (money / (1.0 - Rules.TAX));
		}
		
		var result = new Map<String, Int>();
		
		var cheapestMap = toCardMap(cheapest);
		
		for (key in cheapestMap.keys())
		{
			var amount = cheapestMap.get(key);
			var price = getPriceById(key);
			var units = 0;
			while (valueSoFar < money && amount > 0)
			{
				valueSoFar += price;
				units++;
				amount--;
			}
			result.set(key, units);
			if (valueSoFar >= money)
			{
				return result;
			}
		}
		return null;
	}
	
	public function selectCheaperThan(value:Float):Array<Card>
	{
		var cheapList = selectCheapest(count);
		var newList = [];
		for (c in cheapList)
		{
			if (c.price < value)
			{
				newList.push(c);
			}
			break;
		}
		return newList;
	}
	
	public function selectCheapest(amount:Int):Array<Card>
	{
		var cards = toCardArray();
		cards.sort(function(a:Card, b:Card):Int
		{
			if (a.price < b.price) return -1;
			if (a.price > b.price) return  1;
			if (Std.int(a.rarity) < Std.int(b.rarity)) return -1;
			if (Std.int(a.rarity) > Std.int(b.rarity)) return  1;
			return 0;
		});
		if (cards.length > amount)
		{
			cards = cards.slice(0, amount);
		}
		return cards;
	}
	
	public function toCardMap(cards:Array<Card>):Map<String,Int>
	{
		var map = new Map<String,Int>();
		for (card in cards)
		{
			var amount = 0;
			var id = card.getId();
			if (map.exists(id)) amount = map.get(id);
			amount++;
			map.set(id, amount);
		}
		return map;
	}
	
	public function toCardArray(?cards:Map<String,Int>):Array<Card>
	{
		var list = [];
		
		if (cards == null)
		{
			cards = map;
		}
		
		for (key in cards.keys())
		{
			var card = Card.fromId(key);
			card.price = prices.get(key);
			for (i in 0...cards.get(key))
			{
				list.push(card.copy());
			}
		}
		return list;
	}
}