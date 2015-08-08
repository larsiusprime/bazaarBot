package bazaarbot.agent;
import bazaarbot.Inventory.InventoryData;
import openfl.Assets;

/**
 * ...
 * @author 
 */
class AgentClass
{
	public var id:String;
	public var money:Int;
	public var inventoryData:InventoryData;
	public var logic:AgentLogic;
	
	public function new(data:Dynamic) 
	{
		id = data.id;
		money = data.money;
		
		inventoryData =
		{
			maxSize: data.inventory.max_size,
			ideal:new Map<String, Float>(),
			start:new Map<String, Float>(),
			size:new Map<String, Float>()
		};
		
		var inventory_ideal_ids = Reflect.fields(data.inventory.ideal);
		for (istr in inventory_ideal_ids)
		{
			inventoryData.ideal.set(istr, Reflect.field(data.inventory.ideal, istr));
		}
		
		var inventory_start_ids = Reflect.fields(data.inventory.start);
		for (istr in inventory_start_ids)
		{
			inventoryData.start.set(istr, Reflect.field(data.inventory.start, istr));
		}
		
		var inventory_size_ids = Reflect.fields(data.inventory.size);
		for (istr in inventory_size_ids)
		{
			inventoryData.size.set(istr, Reflect.field(data.inventory.size, istr));
		}
		
		var script:String = "";
		if (Reflect.hasField(data, "script"))
		{
			var script_id:String = data.script;
			script = Assets.getText("assets/data/scripts/" + script_id);
		}
		
		if (script != "")
		{
			logic = new AgentLogic(script);
		}
		else
		{
			logic = new AgentLogic(data.logic);
		}
	}

	public function getStartInventoryData():InventoryData
	{
		return inventoryData;
	}
	
}
