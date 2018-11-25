package bazaarbot.agent;
import bazaarbot.agent.Inventory.GoodRecord;

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
		_ideal = new Map<String, Float>();
		_stuff = new Map<String, GoodRecord>();
		maxSize = 0;
	}

	public function fromData(data:InventoryData)
	{
		var sizes = [];
		var records = [];
		for (key in data.start.keys())
		{
			sizes.push(key);
			records.push(data.start.get(key).copy());
		}
		setStuff(sizes, records);
		
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
		var stuffc:Array<GoodRecord> = [];
		var stuffi:Array<String> = [];
		var idealc:Array<Float> = [];
		var ideali:Array<String> = [];
		var sizesc:Array<Float> = [];
		var sizesi:Array<String> = [];
		
		for (key in _stuff.keys())
		{
			stuffc.push(_stuff.get(key).copy());
			stuffi.push(key);
		}
		for (key in _ideal.keys())
		{
			idealc.push(_ideal.get(key));
			ideali.push(key);
		}
		for (key in _sizes.keys())
		{
			sizesc.push(_sizes.get(key));
			sizesi.push(key);
		}
		i.setStuff(stuffi, stuffc);
		i.setIdeal(ideali, idealc);
		i.setSizes(sizesi, sizesc);
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
	
	public function setStuff(stuff:Array<String>, amounts:Array<GoodRecord>):Void
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
			return _stuff.get(good).amount;
		}
		return 0;
	}
	
	public function queryCost(good:String):Float
	{
		if (_stuff.exists(good))
		{
			return _stuff.get(good).originalCost;
		}
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
	 * @param	the new average cost per unit
	 */
	
	public function change(good:String, delta:Float, unitCost:Float):Float
	{
		var result:GoodRecord = new GoodRecord(0,0);
		
		if (_stuff.exists(good))
		{
			var record = _stuff.get(good);
			if (unitCost > 0)
			{
				if (record.amount <= 0)
				{
					result.amount = delta;
					result.originalCost = unitCost;
				}
				else
				{
					result.originalCost = (record.amount * record.originalCost + (delta * unitCost)) / (record.amount + delta);
					result.amount = record.amount + delta;
				}
			}
			else
			{
				result.amount = record.amount + delta;
				result.originalCost = record.originalCost;
			}
		}
		else
		{
			result.amount = delta;
			result.originalCost = unitCost;
		}
		
		if (result.amount < 0)
		{
			result.amount = 0;
			result.originalCost = 0;
		}

		_stuff.set(good, result);
		return result.originalCost;
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

class GoodRecord
{
	public var amount:Float;
	public var originalCost:Float;
	
	public function new(Amount:Float, OriginalCost:Float)
	{
		amount = Amount;
		originalCost = OriginalCost;
	}
	
	public function copy():GoodRecord
	{
		return new GoodRecord(amount, originalCost);
	}
}
