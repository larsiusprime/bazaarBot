package com.leveluplabs.bazaarbot;

/**
 * ...
 * @author 
 */
enum ECondition {
	Has;
	Is;
	Needs;
	Wants;
}
 
class ECondition
{
	static function toString(a:ECondition):String {		
		return switch(a) {
			case Has: "has";
			case Is: "is";
			case Needs: "needs";
			case Wants: "wants";
		}
	}
	
	static function toInt(a:ECondition):Int {
		return switch(a) {
			case Has: 0;
			case Is: 1;
			case Needs: 2;
			case Wants: 3;
		}
	}	
}