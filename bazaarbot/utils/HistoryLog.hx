package bazaarbot.utils;
import bazaarbot.utils.EconNoun;

/**
 * ...
 * @author larsiusprime
 */
class HistoryLog
{
	var type:EconNoun;
	var log:Map<String, Array<Float>>;

	public function new(type:EconNoun)
	{
		this.type = type;
		log = new Map<String, Array<Float>>();
	}

	/**
	 * Add a new entry to this log
	 * @param	name
	 * @param	amount
	 */
	public function add(name:String, amount:Float)
	{
		if (log.exists(name))
		{
			var list = log.get(name);
			list.push(amount);
		}
	}

	/**
	 * Register a new category list in this log
	 * @param	name
	 */
	public function register(name:String)
	{
		if (!log.exists(name))
		{
			log.set(name, new Array<Float>());
		}
	}

	/**
	 * Returns the average amount of the given category, looking backwards over a specified range
	 * @param	name the category of thing
	 * @param	range how far to look back
	 * @return
	 */
	public function average(name:String, range:Int):Float
	{
		if (log.exists(name))
		{
			var list = log.get(name);
			var amt:Float = 0.0;
			var length = list.length;
			if (length < range)
			{
				range = length;
			}
			for (i in 0...range)
			{
				amt += list[length - 1 - i];
			}
			return amt / range;
		}
		return 0;
	}
}
