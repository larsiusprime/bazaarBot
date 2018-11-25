package card;

/**
 * @author 
 */
@:enum abstract CardRarity(Int)
{
	var BASIC = 0;
	var COMMON = 1;
	var UNCOMMON = 2;
	var RARE = 3;
	var UNKNOWN = -1;
}