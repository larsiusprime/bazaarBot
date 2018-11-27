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
		_costs = new Map<String, Float>();
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
		
		maxSize = data.maxSize;
	}

	public function copy():Inventory
	{
		var i:Inventory = new Inventory();
		var stufff:Array<Float> = [];
		var stuffi:Array<String> = [];
		var sizesf:Array<Float> = [];
		var sizesi:Array<String> = [];
		var costsf:Array<Float> = [];
		var costsi:Array<String> = [];
		for (key in _stuff.keys())
		{
			stufff.push(_stuff.get(key));
			stuffi.push(key);
		}
		for (key in _sizes.keys())
		{
			sizesf.push(_sizes.get(key));
			sizesi.push(key);
		}
		for (key in _costs.keys())
		{
			costsf.push(_costs.get(key));
			costsi.push(key);
		}
		i.setStuff(stuffi, stufff);
		i.setSizes(sizesi, sizesf);
		i.setCosts(costsi, costsf);
		i.maxSize = maxSize;
		return i;
	}

	public function destroy():Void
	{
		for (key in _stuff.keys())
		{
			_stuff.remove(key);
		}
		for (key in _sizes.keys())
		{
			_sizes.remove(key);
		}
		for (key in _costs.keys())
		{
			_costs.remove(key);
		}
		_stuff = null;
		_sizes = null;
		_costs = null;
	}

	/**
	 * Set amounts of various commodities
	 * @param	stuff
	 * @param	amounts
	 * @param	?costs
	 */

	public function setStuff(stuff:Array<String>, amounts:Array<Float>):Void
	{
		for (i in 0...stuff.length)
		{
			_stuff.set(stuff[i], amounts[i]);
		}
	}

	public function setSizes(sizes:Array<String>, amounts:Array<Float>):Void
	{
		for (i in 0...sizes.length)
		{
			_sizes.set(sizes[i], amounts[i]);
		}
	}

	public function setCosts(costs:Array<String>, amounts:Array<Float>):Void
	{
		for (i in 0...costs.length)
		{
			_costs.set(costs[i], amounts[i]);
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
	
	public function queryCost(good:String, units:Float = 1):Float
	{
		if (units <= 0) throw "units must be >= 1";
		var unitsOwned = query(good);
		if (unitsOwned > 0 && _costs.exists(good))
		{
			var totalCost = _costs.get(good);
			var unitCost = totalCost / unitsOwned;
			return unitCost * units;
		}
		return 0.0;
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

	public function buy(good:String, delta:Float, money:Float)
	{
		if (delta <= 0) return;
		if (money < 0) return;
		change(good, delta);
		changeCost(good, money);
	}
	
	public function sell(good:String, delta:Float, money:Float)
	{
		if (delta <= 0) return;
		if (money < 0) return;
		change(good, -delta);
		changeCost(good, -money);
	}
	
	public function changeCost(good:String, delta:Float)
	{
		var result:Float;
		if (_costs.exists(good))
		{
			var amount:Float = _costs.get(good);
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
		
		_costs.set(good, result);
	}
	
	/**
	 * Change the amount of the given commodity by delta
	 * @param	commodity_ string id of commodity
	 * @param	delta_ amount added
	 * @return	
	 */

	public function change(good:String, delta:Float)
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

	private var _stuff:Map<String, Float>;		// key:commodity_id, val:amount
	private var _sizes:Map<String, Float>;		// how much space each thing takes up
	private var _costs:Map<String, Float>;		// how much money you've invested in each kind of thing (average unit costs)
}
