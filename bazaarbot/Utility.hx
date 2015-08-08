package bazaarbot;

/**
 * ...
 * @author larsiusprime
 */
class Utility
{

	public static inline function randomInteger(min:Int, max:Int):Int
	{
		return Std.int(Math.random() * cast(1 + max - min, Float)) + min;
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