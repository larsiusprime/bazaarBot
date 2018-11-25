package bazaarbot.agent;

/**
 * ...
 * @author larsiusprime
 */
class InventoryData
{
	public var maxSize:Float;
	public var ideal:Map<String, Float>;
	public var start:Map<String, Float>;
	public var size:Map<String, Float>;

	public function new(maxSize:Float, ideal:Map<String,Float>, start:Map<String,Float>, size:Map<String,Float>)
	{
		this.maxSize = maxSize;
		this.ideal = ideal;
		this.start = start;
		this.size = size;
	}

	public static function fromJson(data:Dynamic):InventoryData
	{
		var maxSize:Int = data.max_size;
		var ideal = new Map<String, Float>();
		var start = new Map<String, Float>();
		var size  = new Map<String, Float>();

		var startArray = Reflect.fields(data.start);
		if (startArray != null)
		{
			for (s in startArray)
			{
				start.set(s, cast Reflect.field(data.start, s));
				size.set(s, 1);	//initialize size of every item to 1 by default
			}
		}
		var idealArray = Reflect.fields(data.ideal);
		if (idealArray != null)
		{
			for (i in idealArray)
			{
				ideal.set(i, cast Reflect.field(data.ideal, i));
			}
		}

		return new InventoryData(maxSize, ideal, start, size);
	}
}
