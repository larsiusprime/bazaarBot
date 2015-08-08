package bazaarbot.agent;
import openfl.Assets;

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
		
		var script:String = "";
		if (Reflect.hasField(data, "script")) {
			var script_id:String = data.script;
			script = Assets.getText("assets/data/scripts/" + script_id);
		}
		
		if (script != "") {
			logic = new AgentLogic(script);
		}else{
			logic = new AgentLogic(data.logic);
		}
	}
	
	public function getStartInventory():Inventory {
		var i:Inventory = new Inventory();
		i.setIdeal(inventory_ideal_ids, inventory_ideal_amounts);
		i.setStuff(inventory_start_ids, inventory_start_amounts);
		i.setSizes(inventory_size_ids, inventory_size_amounts);
		i.maxSize = inventory_size;
		return i;
	}
	
}


typedef AgentData = {
	id:Int,
	money:Int,
	inventory:InventoryData,
	logic:AgentLogic
}

typedef InventoryData = {
	maxSize:Float,
	ideal:Map<String, Float>,
	start:Map<String, Float>,
	size:Map<String, Float>
}