package bazaarbot.agent;

/**
 * ...
 * @author
 */
class Inventory
{
	public var maxSize:Float = 0;

	public function new()
	{
		_sizes = new Map<String, Float>();
		_stuff = new Map<String, Float>();
		_ideal = new Map<String, Float>();
		maxSize = 0;
	}

	public function fromData(data:InventoryData)
	{
		var sizes = [];
		var amounts = [];
		for (key in data.start.keys())
		{
			sizes.push(key);
			amounts.push(data.start.get(key));
		}
		setStuff(sizes, amounts);
		sizes = [];
		amounts = [];
		for (key in data.size.keys())
		{
			sizes.push(key);
			amounts.push(data.size.get(key));
		}
		setSizes(sizes, amounts);
		sizes = [];
		amounts = [];
		for (key in data.ideal.keys())
		{
			sizes.push(key);
			amounts.push(data.ideal.get(key));
			setIdeal(sizes, amounts);
		}
		maxSize = data.maxSize;
	}

	public function copy():Inventory
	{
		var i:Inventory = new Inventory();
		var stufff:Array<Float> = [];
		var stuffi:Array<String> = [];
		var idealf:Array<Float> = [];
		var ideali:Array<String> = [];
		var sizesf:Array<Float> = [];
		var sizesi:Array<String> = [];
		for (key in _stuff.keys())
		{
			stufff.push(_stuff.get(key));
			stuffi.push(key);
		}
		for (key in _ideal.keys())
		{
			idealf.push(_ideal.get(key));
			ideali.push(key);
		}
		for (key in _sizes.keys())
		{
			sizesf.push(_sizes.get(key));
			sizesi.push(key);
		}
		i.setStuff(stuffi, stufff);
		i.setIdeal(ideali, idealf);
		i.setSizes(sizesi, sizesf);
		i.maxSize = maxSize;
		return i;
	}

	public function destroy():Void
	{
		for (key in _stuff.keys())
		{
			_stuff.remove(key);
		}
		for (key in _ideal.keys())
		{
			_ideal.remove(key);
		}
		for (key in _sizes.keys())
		{
			_sizes.remove(key);
		}
		_stuff = null;
		_ideal = null;
		_sizes = null;
	}

	/**
	 * Set amounts of various commodities
	 * @param	stuff_
	 * @param	amounts_
	 */

	public function setStuff(stuff:Array<String>, amounts:Array<Float>):Void
	{
		for (i in 0...stuff.length)
		{
			_stuff.set(stuff[i], amounts[i]);
		}
	}

	/**
	 * Set how much of each commodity to stockpile
	 * @param	stuff_
	 * @param	amounts_
	 */

	public function setIdeal(ideal:Array<String>, amounts:Array<Float>):Void
	{
		for (i in 0...ideal.length)
		{
			_ideal.set(ideal[i], amounts[i]);
		}
	}

	public function setSizes(sizes:Array<String>, amounts:Array<Float>):Void
	{
		for (i in 0...sizes.length)
		{
			_sizes.set(sizes[i], amounts[i]);
		}
	}

	/**
	 * Returns how much of this
	 * @param	commodity_ string id of commodity
	 * @return
	 */

	public function query(good:String):Float
	{
		if (_stuff.exists(good))
		{
			return _stuff.get(good);
		}
		return 0;
	}

	public function ideal(good:String):Float
	{
		if (_ideal.exists(good))
		{
			return _ideal.get(good);
		}
		return 0;
	}

	public function getEmptySpace():Float
	{
		return maxSize - getUsedSpace();
	}

	public function getUsedSpace():Float
	{
		var space_used:Float = 0;
		for (key in _stuff.keys())
		{
			space_used += _stuff.get(key) * _sizes.get(key);
		}
		return space_used;
	}

	public function getCapacityFor(good:String):Float
	{
		if (_sizes.exists(good))
		{
			return _sizes.get(good);
		}
		return -1;
	}

	/**
	 * Change the amount of the given commodity by delta
	 * @param	commodity_ string id of commodity
	 * @param	delta_ amount added
	 */

	public function change(good:String, delta:Float):Void
	{
		var result:Float;

		if (_stuff.exists(good))
		{
			var amount:Float = _stuff.get(good);
			result = amount + delta;
		}
		else
		{
			result = delta;
		}

		if (result < 0)
		{
			result = 0;
		}

		_stuff.set(good, result);
	}

	/**
	 * Returns # of units above the desired inventory level, or 0 if @ or below
	 * @param	commodity_ string id of commodity
	 * @return
	 */

	public function surplus(good:String):Float
	{
		var amt:Float = query(good);
		var ideal:Float = _ideal.get(good);
		if (amt > ideal)
		{
			return (amt - ideal);
		}
		return 0;
	}

	/**
	 * Returns # of units below the desired inventory level, or 0 if @ or above
	 * @param	commodity_
	 * @return
	 */

	public function shortage(good:String):Float
	{
		if (!_stuff.exists(good))
		{
			return 0;
		}
		var amt:Float = query(good);
		var ideal:Float = _ideal.get(good);
		if (amt < ideal)
		{
			return (ideal - amt);
		}
		return 0;
	}

	//private static var _index:Map<String, Commodity>;

	private var _stuff:Map<String, Float>;		// key:commodity_id, val:amount
	private var _ideal:Map<String, Float>;		// ideal counts for each thing
	private var _sizes:Map<String, Float>;		// how much space each thing takes up
}
