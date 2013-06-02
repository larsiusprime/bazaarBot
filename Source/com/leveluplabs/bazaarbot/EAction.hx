package com.leveluplabs.bazaarbot;

/**
 * ...
 * @author 
 */
enum EAction {
	Produce;
	Consume;
	Transform;
}
 
class EAction
{
	static function toString(a:EAction):String {
		return switch(a) {
			case Produce: "produce";
			case Consume: "consume";
			case Transform: "transform";
		}
	}
	
	static function toInt(a:EAction):Int {
		return switch(a) {
			case Produce: 0;
			case Consume: 1;
			case Transform: 2;
		}
	}	
}