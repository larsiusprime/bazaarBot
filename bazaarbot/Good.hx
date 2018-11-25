package bazaarbot;

/**
 * ...
 * @author
 */

class Good
{
	public var id:String = "";		//string id of good
	public var size:Float = 1.0;	//inventory size taken up

	public function new(id_:String,size_:Float)
	{
		id = id_;
		size = size_;
	}

	public function copy():Good
	{
		return new Good(id, size);
	}
}

