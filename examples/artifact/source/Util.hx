package;

/**
 * ...
 * @author 
 */
class Util
{
	
	public function iRandom
	
	static function iRandom(low:Int, high:Int):Int
	{
		var diff = (high-low)+1;
		var val = Std.int(Math.random() * diff) + low;
		return val;
	}
	
	static function fRandom(low:Float, high:Float):Float
	{
		var diff = (high-low);
		var val = (Math.random() * diff) + low;
		return val;
	}
}