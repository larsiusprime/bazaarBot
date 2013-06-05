package com.leveluplabs.bazaarbot;

/**
 * ...
 * @author 
 */
class Inventory
{
	public var max_size:Float = 0;	
	
	public function new() 
	{
		_sizes = new Map<String, Float>();
		_stuff = new Map<String, Float>();
		_ideal = new Map<String, Float>();		
		max_size = 0;
	}
	
	public function copy():Inventory {
		var i:Inventory = new Inventory();
		var stufff:Array<Float> = [];
		var stuffi:Array<String> = [];
		var idealf:Array<Float> = [];
		var ideali:Array<String> = [];
		var sizesf:Array<Float> = [];
		var sizesi:Array<String> = [];
		for (key in _stuff.keys()) {
			stufff.push(_stuff.get(key));
			stuffi.push(key);
		}
		for (key in _ideal.keys()) {
			idealf.push(_ideal.get(key));
			ideali.push(key);
		}
		for (key in _sizes.keys()) {
			sizesf.push(_sizes.get(key));
			sizesi.push(key);
		}
		i.set_stuff(stuffi, stufff);
		i.set_ideal(ideali, idealf);
		i.set_sizes(sizesi, sizesf);
		i.max_size = max_size;
		return i;
	}
	
	public function destroy():Void {
		for (key in _stuff.keys()) {
			_stuff.remove(key);
		}
		for (key in _ideal.keys()) {
			_ideal.remove(key);
		}
		for (key in _sizes.keys()) {
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
	
	public function set_stuff(stuff_:Array<String>, amounts_:Array<Float>):Void {
		for (i in 0...stuff_.length) {
			_stuff.set(stuff_[i], amounts_[i]);
		}		
	}
	
	/**
	 * Set how much of each commodity to stockpile
	 * @param	stuff_
	 * @param	amounts_
	 */
	
	public function set_ideal(ideal_:Array<String>, amounts_:Array<Float>):Void {
		for (i in 0...ideal_.length) {
			_ideal.set(ideal_[i], amounts_[i]);
		}
	}
	
	public function set_sizes(sizes_:Array<String>, amounts_:Array<Float>):Void {
		for (i in 0...sizes_.length) {
			_sizes.set(sizes_[i], amounts_[i]);
		}
	}
	
	/*public static function init(commodities:Array<Commodity>):Void {
		_index = new Map<String, Commodity>();
		
		for (c in commodities) {
			_index.set(c.id, c.copy());
		}
	}*/
	
	/**
	 * Returns how much of this
	 * @param	commodity_ string id of commodity
	 * @return
	 */
	
	public function query(commodity_:String):Float {
		if (_stuff.exists(commodity_)) {
			return _stuff.get(commodity_);
		}
		return 0;
	}
	
	public function ideal(commodity_:String):Float {
		if (_ideal.exists(commodity_)) {
			return _ideal.get(commodity_);
		}
		return 0;
	}
	
	public function get_space_empty():Float {
		return max_size - get_space_used();
	}
	
	public function get_space_used():Float {
		var space_used:Float = 0;
		for (key in _stuff.keys()) {
			space_used += _stuff.get(key) * _sizes.get(key);
		}
		return space_used;
	}
	
	public function get_size_of(commodity:String):Float{
		if (_sizes.exists(commodity)) {
			return _sizes.get(commodity);
		}
		return -1;
	}
	
	/**
	 * Change the amount of the given commodity by delta
	 * @param	commodity_ string id of commodity
	 * @param	delta_ amount added
	 */
	
	public function change(commodity_:String, delta_:Float):Void{		
		var result:Float;
		
		if (_stuff.exists(commodity_)) {
			var amount:Float = _stuff.get(commodity_);
			result = amount + delta_;
		}else {
			result = delta_;
		}
		
		if (result < 0) {
			result = 0;
		}			
		
		_stuff.set(commodity_, result);
	}
	
	/**
	 * Returns # of units above the desired inventory level, or 0 if @ or below
	 * @param	commodity_ string id of commodity
	 * @return
	 */
	
	public function surplus(commodity_:String):Float {
		/*if (!_stuff.exists(commodity_)) {
			return 0;
		}*/
		var amt:Float = query(commodity_);
		var ideal:Float = _ideal.get(commodity_);
		if (amt > ideal) {
			return (amt - ideal);
		}
		return 0;
	}
	
	/**
	 * Returns # of units below the desired inventory level, or 0 if @ or above
	 * @param	commodity_
	 * @return
	 */
	
	public function shortage(commodity_:String):Float {
		if (!_stuff.exists(commodity_)) {
			return 0;
		}
		var amt:Float = query(commodity_);
		var ideal:Float = _ideal.get(commodity_);
		if (amt < ideal) {
			return (ideal - amt);
		}
		return 0;
	}
		
	//private static var _index:Map<String, Commodity>;
	
	private var _stuff:Map<String, Float>;		// key:commodity_id, val:amount	
	private var _ideal:Map<String, Float>;		// ideal counts for each thing
	private var _sizes:Map<String, Float>;		// how much space each thing takes up
}