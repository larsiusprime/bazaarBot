package card;

/**
 * ...
 * @author 
 */
class BoosterPack
{
	public static inline var COST:Float = 2.00;
	public static inline var CARDS:Int = 12;
	public static inline var ITEMS:Int = 2;
	public static inline var HEROES:Int = 1;
	
	public static inline var CHANCE_RARE:Float = 1 / 400;
	public static inline var CHANCE_UNCOMMON:Float = 1 / 20;
	
	public var cards:Array<Card>;
	public var heroes(default, null):Int;
	public var items(default, null):Int;
	public var rares(default, null):Int;
	
	public function new()
	{
		cards = [];
		heroes = 0;
		items = 0;
		rares = 0;
		
		var num = 0;
		
		for (i in 0...HEROES)
		{
			var card = new Card(HERO);
			count(card);
			num++;
		}
		
		for (i in 0...ITEMS)
		{
			var card = new Card(ITEM);
			count(card);
			num++;
		}
		
		var otherCards = (CARDS - (HEROES + ITEMS));
		for (i in 0...otherCards)
		{
			var card = new Card();
			count(card);
			num++;
		}
		
		if (rares == 0)
		{
			var i:Int = Util.iRandom(0, num - 1);
			var card = cards[i];
			while (card.rarity != RARE)
			{
				card.rarity = RARE;
			}
			num++;
		}
	}
	
	private function count(card:Card)
	{
		cards.push(card);
		if (card.type == HERO) heroes++;
		if (card.type == ITEM) items++;
		if (card.rarity == RARE) rares++;
	}
}