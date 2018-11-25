package card;
import card.Card;
import card.BoosterPack;

/**
 * ...
 * @author 
 */

class Card
{
	public var type:CardType;
	public var color:CardColor;
	public var rarity:CardRarity;
	
	public function getId():String
	{
		return type+"," + colod + "," + rarity;
	}
	
	public function equals(other:Card):Bool{
		return type == type && color == color && rarity == rarity;
	}
	
	public function copy():Card
	{
		var c = new Card();
		c.type = type;
		c.color = color;
		c.rarity = rarity;
		return c;
	}
	
	public function new(type:CardType = UNKNOWN, rarity:CardRarity = UNKNOWN, color:CardColor = UNKNOWN)
	{
		this.color = color != UNKNOWN ? color : Std.int(Util.iRandom(RED, BLACK));
		this.type = type != UNKNOWN ? type : Std.int(Util.iRandom(SPELL, IMPROVEMENT));
		
		if (rarity != UNKNOWN)
		{
			this.rarity = rarity;
		}
		else
		{
			var roll = Math.random();
			if (roll < CHANCE_RARE)
			{
				this.rarity = RARE;
			}
			else if (roll < CHANCE_UNCOMMON)
			{
				this.rarity = UNCOMMON;
			}
			else
			{
				this.rarity = COMMON;
			}
		}
	}
}