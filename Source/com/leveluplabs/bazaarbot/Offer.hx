package com.leveluplabs.bazaarbot;

/**
 * ...
 * @author 
 */
class Offer
{
	public var commodity:String;	//the thing offered
	public var units:Float;			//how many units
	public var unit_price:Float;	//price per unit
	public var agent_id:Int;		//who offered this
	
	public function new(agent_id_:Int=-1,commodity_:String="",units_:Float=1.0,unit_price_:Float=1.0) 
	{
		agent_id = agent_id_;
		commodity = commodity_;
		units = units_;
		unit_price = unit_price_;
	}
	
	public function toString():String {
		return "("+agent_id + "): " + commodity + "x " + units + " @ " + unit_price;
	}
	
	/*public function copy():Offer {
		return new Offer(agent_id, commodity_, units_, unit_price);
	}*/

	
}