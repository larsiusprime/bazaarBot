package bazaarbot.agent;

/**
 * ...
 * @author 
 */
class Condition
{
	public var condition:String;
	public var negated:Bool;
	
	public function new(str:String) 
	{
		if (str.substr(0, 1) == "!") {
			negated = true;
			str = str.substr(1, str.length - 1);
		}
		condition = str;
	}
	
}