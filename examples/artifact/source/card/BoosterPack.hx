package card;

/**
 * ...
 * @author 
 */
class BoosterPack
{
	public static inline var COST:Int = 2.00;
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
		deck = [];
		heroes = 0;
		items = 0;
		rares = 0;
	
		for (i in 0...HEROES)
		{
			var card = new Card(HERO);
			count(card);
		}
		
		for (i in 0...ITEMS)
		{
			var card = new Card(ITEM);
			count(card);
		}
		
		var otherCards = (CARDS - (HEROES + ITEMS));
		for (i in 0...otherCards)
		{
			var card = new Card();
			count(card);
		}
		
		if (rares == 0)
		{
			var i:Int = Util.iRandom(0, cards.length - 1);
			var card = cards[i];
			card.rarity = RARE;
		}
	}
	
	private function count(card:Card)
	{
		cards.push(card);
		if (card.type == HERO) heroes++;
		if (card.type == ITEM) items++;
		if (card.type == RARE) rares++;
	}
}