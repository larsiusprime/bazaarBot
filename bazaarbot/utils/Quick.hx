package bazaarbot.utils;
import bazaarbot.agent.BasicAgent;

/**
 * A quick & dirty utility class
 * @author larsiusprime
 */
class Quick
{

	public static inline function avgf(a:Float, b:Float):Float
	{
		return (a + b) / 2;
	}

	public static function listAvgf(list:Array<Float>):Float
	{
		var avg:Float = 0;
		for (j in 0...list.length)
		{
			avg += list[j];
		}
		avg /= list.length;
		return avg;
	}

	public static inline function minArr(a:Array<Float>):Float
	{
		var min:Float = Math.POSITIVE_INFINITY;
		for (f in a) {
			if (f < min) { min = f;}
		}
		return min;
	}

	public static inline function maxArr(a:Array<Float>):Float
	{
		var max:Float = Math.NEGATIVE_INFINITY;
		for (f in a) {
			if (f > max) { max = f; }
		}
		return max;
	}

	/**
	 * Turns a number into a string with the specified number of decimal points
	 * @param	num
	 * @param	decimals
	 * @return
	 */
	public static function numStr(num:Float, decimals:Int):String
	{
		var tens:Float = 1;
		for (i in 0...decimals)
		{
			tens *= 10;
		}
		num = Math.floor(num * tens) / tens;
		var str:String = Std.string(num);
		var split = str.split(".");
		if (split.length == 2)
		{
			if (split[1].length < decimals)
			{
				var diff:Int = decimals - split[1].length;
				for (i in 0...diff)
				{
					str += "0";
				}
			}
			if (decimals > 0)
			{
				str = split[0] + "." + split[1].substr(0, decimals);
			}
			else
			{
				str = split[0];
			}
		}
		else
		{
			if (decimals > 0)
			{
				str += ".";
				for (i in 0...decimals)
				{
					str += "0";
				}
			}
		}
		return str;
	}

	public static inline function positionInRange(value:Float, min:Float, max:Float, clamp:Bool = true):Float
	{
		value -= min;
		max -= min;
		min = 0;
		value = (value / (max - min));
		if (clamp) {
			if (value < 0) { value = 0; }
			if (value > 1) { value = 1; }
		}
		return value;
	}

	public static inline function randomInteger(min:Int, max:Int):Int
	{
		return Std.int(Math.random() * cast(1 + max - min, Float)) + min;
	}

	public static inline function randomRange(a:Float, b:Float):Float
	{
		var r:Float = Math.random();
		var min:Float = a < b ? a : b;
		var max:Float = a < b ? b : a;
		var range:Float = max - min;
		return r * range + min;
	}

	public static function shuffle(list:Array<Offer>):Array<Offer>
	{
		/*
		To shuffle an array a of n elements (indices 0..n-1):
		for i from n − 1 downto 1 do
			j ← random integer with 0 ≤ j ≤ i
			exchange a[j] and a[i]
		 */
		for (i in 0...list.length - 1)
		{
			var ii:Int = (list.length - 1) - i;
			if (ii > 1)
			{
				var j:Int = randomInteger(0, ii);
				var temp = list[j];
				list[j] = list[ii];
				list[ii] = temp;
			}
		}
		return list;
	}

	public static function sortAgentAlpha(a:BasicAgent, b:BasicAgent):Int
	{
		if (a.className < b.className) return -1;
		if (a.className > b.className) return 1;
		return 0;
	}

	public static function sortAgentId(a:BasicAgent, b:BasicAgent):Int
	{
		if (a.id < b.id) return -1;
		if (a.id > b.id) return 1;
		return 0;
	}

	public static function sortDecreasingPrice(a:Offer, b:Offer):Int
	{
		//Decreasing means: highest first
		if (a.unit_price < b.unit_price) return 1;
		if (a.unit_price > b.unit_price) return -1;
		return 0;
	}

	public static function sortIncreasingPrice(a:Offer, b:Offer):Int
	{
		//Increasing means: lowest first
		if (a.unit_price > b.unit_price) return 1;
		if (a.unit_price < b.unit_price) return -1;
		return 0;
	}
}
