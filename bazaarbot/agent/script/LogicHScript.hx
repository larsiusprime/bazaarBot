package bazaarbot.agent.script;
import bazaarbot.agent.script.HScriptAction;
import bazaarbot.BazaarBot;
import bazaarbot.Agent;
import haxe.Json;
import bazaarbot.agent.script.HScriptNode;
import hscript.Interp;
import hscript.Parser;
import openfl.Assets;

/**
 * ...
 * @author larsiusprime
 */
class LogicHScript extends Logic
{
	var script:String = "";
	var source:String;
	var root:HScriptNode;
	
	public function new(?data:Dynamic) 
	{
		super(data);
		if (data == null) return;
		if (Std.is(data, String))
		{
			script = Assets.getText("assets/scripts/"+data);
		}
		else
		{
			source = Json.stringify(data);
			root = new HScriptNode(data);
		}
	}
	
	override public function perform(agent:Agent, bazaar:BazaarBot):Void 
	{
		if (script == "")
		{
			_perform(root, agent);
		}
		else
		{
			_perform_script(script, agent, bazaar);
		}
	}
	
	private function _evaluate(curr_node:HScriptNode, agent:Agent):Bool 
	{
		//Fail on the first condition that is false
		for (c in curr_node.conditions)
		{
			switch(c.condition)
			{
				case "has":	//Do you have something?
					var str:String;
					var has:Bool = false;
					for (str in curr_node.params)		//look at all the things
					{
						var amount:Float = agent.queryInventory(str);	//count em
						if (amount > 0)
						{
							has = true;					//have it or not
						}						
						if (c.negated)					//looking for NO-has
						{
							if (has) { return false;}
						}
						else							//looking for YES-has
						{
							if (!has) { return false;}
						}
					}
					break;
			}
		}
		return true;
	}
	
	/**
	 * Recursively steps through the current node and does the given action for the given agent
	 * @param	curr_node
	 * @param	agent
	 */
	
	private function _perform(curr_node:HScriptNode, agent:Agent):Void 
	{
		if (!curr_node.isLeaf)								//If not a leaf node
		{
			if (_evaluate(curr_node, agent))				//Test the conditions
			{
				if (curr_node.node_true != null)
				{
					_perform(curr_node.node_true, agent);	//Branch to "if_true" node
				}
			}
			else
			{
				if (curr_node.node_false != null)
				{
					_perform(curr_node.node_false, agent);	//Branch to "if_false" node
				}
			}
		}
		else
		{												//Do the actions
			var act:HScriptAction;
			for (act in curr_node.actions)
			{
				var i:Int;
				for (i in 0...act.targets.length)
				{
					var amount:Float  = act.amounts[i];
					var target:String = act.targets[i];
					var chance:Float  = act.chances[i];
					
					//Roll to see if this happens
					if (chance >= 1.0 || Math.random() < chance)
					{
						var curr_amount:Float = agent.queryInventory(target);
						
						if (amount == -1)	//-1 means "match my total value"
						{
							amount = curr_amount;
						}
						
						switch(act.action)
						{
							case "produce":
								agent.changeInventory(target, amount);		//produce some stuff
							case "consume":
								agent.changeInventory(target, -amount);	//consume some stuff
							case "transform":
								var amount_target:Float = amount;
								
								//exchange rate between A -> B
								var amount_product:Float = amount * act.efficiency[i]; 
								var result:String = act.results[i];
								
								agent.changeInventory(target, -amount_target);	//consume this much of A
								agent.changeInventory(result, amount_product); //produce this much of B
						}
					}
				}
				
			}
		}
	}
	
	private function _perform_script(script:String, agent:Agent, bazaar:BazaarBot):Void
	{
		var parser = new Parser();
		var ast = parser.parseString(script);
		var interp = new Interp();
		
		var vars:Map<String,Dynamic> = 
		[
		 "agent" => agent, 
		 "query_inventory" => agent.queryInventory,
		 "produce" => _produce,
		 "consume" => _consume,
		 "inventory_is_full" => agent.get_inventoryFull,
		 "make_room_for" => 
			function(a:Agent, c:String = "food", amt:Float = 1.0):Void
			{ 
				var to_drop:String = bazaar.getCheapestCommodity(10, [c]);
				if (to_drop != "") {_consume(a, to_drop, amt);}
			}
		 ];
		 
		interp.variables = vars;
		interp.execute(ast);
	}
}