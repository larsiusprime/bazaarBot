package economy;

/**
 * ...
 * @author 
 */
class Income
{
	public var payTime:Int = 30;
	public var payAmount:Float = 1.0;
	
	private var time:Int = 0;
	
	public static function getRandom():Income
	{
		var p = Util.fNormal();
		
		if (p < 0)
		{
			p *= -1;
		}
		else
		{
			p *= 1;
		}
		
		p -= 0.5;
		
		if (p < 0)
		{
			p = 0;
		}
		
		p *= 10;
		
		p = Std.int(p * 100) / 100;
		
		var i = new Income();
		i.payTime = 14;
		i.payAmount = p;
		return i;
	}
	
	public function new() {}
	
	public function tick():Float
	{
		time++;
		if (time >= payTime)
		{
			time -= payTime;
			return payAmount;
		}
		return 0.0;
	}
}