package com.leveluplabs.bazaarbot;



/**
 * ...
 * @author 
 */
class AgentLogicAction
{
	public var action:String;
	public var targets:Array<String>;
	public var amounts:Array<Float>;
	public var chances:Array<Float>;
	public var efficiency:Array<Float>;
	public var results:Array<String>;
	
	public function new(data:Dynamic) 
	{
		for (str in Reflect.fields(data)) {
			var lstr:String = str.toLowerCase();
			switch(lstr) {
				case "produce",						
				     "consume",											 
					 "transform":											 
						 action = lstr;
						 targets = Reflect.field(data, str).copy();
				case "amount":
					amounts = [];
					var list_amounts:Array<Dynamic> = Reflect.field(data, str);
					for (val in list_amounts) {
						if (Std.is(val, String) && val == "all") {
							amounts.push( -1);			//-1 means "all", negative values are strictly reserved for this
														//sign is already implied by "produce/consume/transform" etc
						}else {
							amounts.push(cast(val, Float));
						}
					}
				case "chance":
					chances = Reflect.field(data, str).copy();		
				case "efficiency":
					efficiency = Reflect.field(data, str).copy();
				case "into":
					results = Reflect.field(data, str).copy();
			}
		}
		
		if (amounts == null) { amounts = [];}
		if (chances == null) { chances = [];}
		
		if(action == "transform"){
			if (efficiency == null) { efficiency = []; }
		}
			
		for (i in 0...targets.length) {
			if (i > amounts.length - 1) {
				amounts.push(1);			//if item is specified but amount is not, amount is 1
			}			
			if (i > chances.length - 1) {
				chances.push(1);			//if item is specified but chance is not, chance is 1
			}
			if(action == "transform"){
				if (i > efficiency.length - 1) {
					efficiency.push(1);			//if item is specified but efficiency is not, efficiency is 1
				}
			}
		}
	}
	
}