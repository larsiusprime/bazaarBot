package bazaarbot.agent.script;

/**
 * ...
 * @author 
 */
class HScriptNode
{
	public var isLeaf:Bool = false;		//if it's a leaf node, it should only have actions
										//if it's a branch node, it should only have conditions/params
	
	public var conditions:Array<HScriptCondition>;
	public var params:Array<Dynamic>;
	
	public var node_true:HScriptNode;
	public var node_false:HScriptNode;
	
	public var actions:Array<HScriptAction>;		
		
	public function new(data:Dynamic=null) 
	{
		if (data != null) {
			if (Reflect.hasField(data, "condition")) {
				isLeaf = false;
				var list_conditions:Array<Dynamic> = data.condition;
				conditions = [];
				for (cond in list_conditions) {
					conditions.push(new HScriptCondition(cond));
				}				
				params = data.param;			
				if(Reflect.hasField(data,"if_true")){
					node_true = new HScriptNode(data.if_true);
				}
				if (Reflect.hasField(data, "if_false")) {
					node_false = new HScriptNode(data.if_false);
				}
			}else {
				isLeaf = true;
				var list_actions:Array<Dynamic> = data.action;
				actions = [];
				for (a in list_actions) {
					actions.push(new HScriptAction(a));
				}
			}
		}
	}
	
}