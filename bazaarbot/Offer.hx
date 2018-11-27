package bazaarbot;

/**
 * ...
 * @author
 */
class Offer
{
	public var good:String;               //the thing offered
	public var units:Float;               //how many units
	public var unit_price:Float;          //price per unit
	public var terminal_unit_price:Float; //the max (or min) price I'm willing to consider
	public var agent_id:Int;              //who offered this
	public var age:Int;	                  //number of rounds its been on the market unchanged

	public function new(agent_id_:Int=-1,commodity_:String="",units_:Float=1.0,unit_price_:Float=1.0,terminal_unit_price_:Float=1.0)
	{
		agent_id = agent_id_;
		good = commodity_;
		units = units_;
		unit_price = unit_price_;
		terminal_unit_price = terminal_unit_price_;
		age = 0;
	}

	public function toString():String
	{
		return "("+agent_id + "): " + good + "x " + units + " @ " + unit_price;
	}
}
