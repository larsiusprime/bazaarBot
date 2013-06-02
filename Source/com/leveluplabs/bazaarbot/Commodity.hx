package com.leveluplabs.bazaarbot;

/**
 * ...
 * @author 
 */
 
class Commodity
{
	public var id:String = "";		//string id of commodity
	public var size:Float = 1.0;	//inventory size taken up
	
	public function new(id_:String,size_:Float) 
	{
		id = id_;
		size = size_;
	}

	public function copy():Commodity {
		return new Commodity(id,size);
	}
}
 