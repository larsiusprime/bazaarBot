package com.leveluplabs.bazaarbot;

/**
 * ...
 * @author 
 */
class AgentClass
{
	public var id:String;
	public var money:Int;
	public var inventory_ideal_ids:Array<String>;
	public var inventory_ideal_amounts:Array<Float>;
	public var inventory_start_ids:Array<String>;
	public var inventory_start_amounts:Array<Float>;
	public var inventory_size_ids:Array<String>;
	public var inventory_size_amounts:Array<Float>;
	
	public var inventory_size:Float;
	
	public var logic:AgentLogic;
	
	public function new(data:Dynamic) 
	{
		id = data.id;
		money = data.money;
		
		inventory_size = data.inventory.max_size;
		
		inventory_ideal_ids = Reflect.fields(data.inventory.ideal);
		inventory_ideal_amounts = [];
		for (istr in inventory_ideal_ids) {
			inventory_ideal_amounts.push(Reflect.field(data.inventory.ideal, istr));
		}		
		
		inventory_start_ids = Reflect.fields(data.inventory.start);
		inventory_start_amounts = [];
		for (istr in inventory_start_ids) {
			inventory_start_amounts.push(Reflect.field(data.inventory.start, istr));
		}		
		
		inventory_size_ids = Reflect.fields(data.inventory.size);
		inventory_size_amounts = [];
		for (istr in inventory_size_ids) {
			inventory_size_amounts.push(Reflect.field(data.inventory.size, istr));
		}
		
		logic = new AgentLogic(data.logic);
	}
	
	public function getStartInventory():Inventory {
		var i:Inventory = new Inventory();
		i.set_ideal(inventory_ideal_ids, inventory_ideal_amounts);
		i.set_stuff(inventory_start_ids, inventory_start_amounts);
		i.set_sizes(inventory_size_ids, inventory_size_amounts);
		i.max_size = inventory_size;
		return i;
	}
	
}