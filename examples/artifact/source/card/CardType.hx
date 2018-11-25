package card;

/**
 * ...
 * @author 
 */
@:enum abstract CardType(Int)
{
	var HERO = 0;
	var SPELL = 1;
	var CREATURE = 2;
	var IMPROVEMENT = 3;
	var ITEM = 4;
	var UNKNOWN = -1;
}