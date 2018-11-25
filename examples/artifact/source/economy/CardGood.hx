package examples.artifact.source.economy;
import card.CardColor;
import card.CardRarity;
import card.CardType;
import card.Card;
import examples.artifact.source.economy.GoodCard.CardGood;


/**
 * A card, treated as a good (tradeable object)
 * @author 
 */
class CardGood
{
	public var type:CardType(default, null);
	public var color:CardColor(default, null);
	public var rarity:CardRarity(default, null);
	
	public function new(){}
	
	public static function fromCard(card:Card)
	{
		var cg = new CardGood();
		cg.type = card.type;
		cg.color = card.color;
		cg.rarity = card.rarity;
		cg.id = type+"," + color + "," + rarity;
		cg.size = 1.0;
		return cg;
	}
	
}