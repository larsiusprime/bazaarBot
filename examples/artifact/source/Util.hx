package;

/**
 * ...
 * @author 
 */
class Util
{
	
	public static function iRandom(low:Int, high:Int):Int
	{
		var diff = (high-low)+1;
		var val = Std.int(Math.random() * diff) + low;
		return val;
	}
	
	public static function fRandom(low:Float, high:Float):Float
	{
		var diff = (high-low);
		var val = (Math.random() * diff) + low;
		return val;
	}
	
	static var _hasFloatNormalSpare:Bool = false;
	static var _floatNormalRand1:Float = 0;
	static var _floatNormalRand2:Float = 0;
	static var _twoPI:Float = Math.PI * 2;
	static var _floatNormalRho:Float = 0;
	static var internalSeed:Float = 1;
	
	static inline var MODULUS:Int = 0x7FFFFFFF;
	static inline var MULTIPLIER:Float = 48271.0;

	public static function fNormal(Mean:Float = 0, StdDev:Float = 1):Float
	{
		if (_hasFloatNormalSpare)
		{
			_hasFloatNormalSpare = false;
			var scale:Float = StdDev * _floatNormalRho;
			return Mean + scale * _floatNormalRand2;
		}
		
		_hasFloatNormalSpare = true;
		
		var theta:Float = _twoPI * (generate() / MODULUS);
		_floatNormalRho = Math.sqrt( -2 * Math.log(1 - (generate() / MODULUS)));
		var scale:Float = StdDev * _floatNormalRho;
		
		_floatNormalRand1 = Math.cos(theta);
		_floatNormalRand2 = Math.sin(theta);
		
		return Mean + scale * _floatNormalRand1;
	}
	
	private static inline function generate():Float
	{
		return internalSeed = (internalSeed * MULTIPLIER) % MODULUS;
	}
}