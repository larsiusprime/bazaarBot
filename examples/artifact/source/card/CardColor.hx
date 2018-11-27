package card;

/**
 * ...
 * @author 
 */
@:enum abstract CardColor(Int) from Int to Int
{
	var RED = 0;
	var BLUE = 1;
	var GREEN = 2;
	var BLACK = 3;
	var UNKNOWN = -1;
}