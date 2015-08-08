package bazaarbot.agent.script;

/**
 * ...
 * @author 
 */
class LogicNode
{
	public var isLeaf:Bool = false;		//if it's a leaf node, it should only have actions
										//if it's a branch node, it should only have conditions/params
	
	public var conditions:Array<Condition>;
	public var params:Array<Dynamic>;
	
	public var node_true:LogicNode;
	public var node_false:LogicNode;
	
	public var actions:Array<LogicAction>;		
		
	public function new(data:Dynamic=null) 
	{
		if (data != null) {
			if (Reflect.hasField(data, "condition")) {
				isLeaf = false;
				var list_conditions:Array<Dynamic> = data.condition;
				conditions = [];
				for (cond in list_conditions) {
					conditions.push(new Condition(cond));
				}				
				params = data.param;			
				if(Reflect.hasField(data,"if_true")){
					node_true = new LogicNode(data.if_true);
				}
				if (Reflect.hasField(data, "if_false")) {
					node_false = new LogicNode(data.if_false);
				}
			}else {
				isLeaf = true;
				var list_actions:Array<Dynamic> = data.action;
				actions = [];
				for (a in list_actions) {
					actions.push(new LogicAction(a));
				}
			}
		}
	}
	
}