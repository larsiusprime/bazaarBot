package card;
import bazaarbot.Market;
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
	public var price(default,set):Float;
	
	public function set_price(f:Float):Float
	{
		if (Math.isNaN(f))
		{
			trace("BOINK");
		}
		price = f;
		return price;
	}
	
	public static function fromId(str:String):Card
	{
		if (str == "" || str == null) return null;
		var arr:Array<String> = str.split(",");
		if (arr.length < 3) return null;
		var type = Std.parseInt(arr[0]);
		var color = Std.parseInt(arr[1]);
		var rarity = Std.parseInt(arr[2]);
		var c = new Card(type, rarity, color);
		return c;
	}
	
	public function getId():String
	{
		return type + "," + color + "," + rarity;
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
		c.price = price;
		return c;
	}
	
	public function new(type:CardType = UNKNOWN, rarity:CardRarity = UNKNOWN, color:CardColor = UNKNOWN)
	{
		this.color = color != UNKNOWN ? color : Std.int(Util.iRandom(CardColor.RED, CardColor.BLACK));
		this.type = type != UNKNOWN ? type : Std.int(Util.iRandom(CardType.SPELL, CardType.IMPROVEMENT));
		
		if (rarity != UNKNOWN)
		{
			this.rarity = rarity;
		}
		else
		{
			var roll = Math.random();
			if (roll < Rules.CHANCE_RARE)
			{
				this.rarity = RARE;
			}
			else if (roll < Rules.CHANCE_UNCOMMON)
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