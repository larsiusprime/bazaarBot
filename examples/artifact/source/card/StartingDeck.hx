package card;

/**
 * ...
 * @author 
 */
class StartingDeck
{
	public static inline var CARDS:Int = 54;
	public static inline var HEROES:Int = 5;
	public static inline var ITEMS:Int = 9;
	
	public var cards:Array<Card>;
	
	public function new()
	{
		cards = [];
		for (i in 0...HEROES)
		{
			cards.push(new Card(HERO, BASIC));
		}
		for (i in 0...ITEMS)
		{
			cards.push(new Card(ITEM, BASIC));
		}
		var otherCards = (CARDS - (HEROES + ITEMS));
		for (i in 0...otherCards)
		{
			cards.push(new Card(UNKNOWN, BASIC);
		}
	}
}