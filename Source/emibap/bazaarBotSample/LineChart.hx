package emibap.bazaarBotSample;

import flash.display.DisplayObjectContainer;
import flash.display.Shape;
import flash.display.Sprite;

class LineChart extends Sprite
{
	private var _data:Array<Dynamic>;
	
	private var _width:Float = 400;
	private var _height:Float = 200;
	
	private var _chartHolder:Shape;
	private var _maximum:Float = 100;
	private var _minimum:Float = 0;
	private var _autoScale:Bool = true;
	//private var _maxLabel:Label;
	//private var _minLabel:Label;
	private var _showScaleLabels:Bool = false;
	private var _labelPrecision:Int = 0;
	
	
	private var _lineWidth:Float = 1;
	private var _lineColor:Int = 0x999999;
	
	/**
	 * Constructor
	 * @param parent The parent DisplayObjectContainer on which to add this Label.
	 * @param xpos The x position to place this component.
	 * @param ypos The y position to place this component.
	 * @param data The array of numeric values to graph.
	 */
	function new(data:Array<Dynamic>=null):Void
	{
		super();
		_chartHolder = new Shape();
		addChild(_chartHolder);
		_data = data;
	}
	
	/**
	 * Graphs the numeric data in the chart.
	 */
	private function drawChart():Void
	{
		var border:Float = 2;
		var lineWidth:Float = (_width - border) / (_data.length - 1);
		var chartHeight:Float = _height - border;
		_chartHolder.x = 0;
		_chartHolder.y = _height;
		var xpos:Float = border;
		var max:Float = getMaxValue();
		var min:Float = getMinValue();
		var scale:Float = chartHeight / (max - min);
		_chartHolder.graphics.lineStyle(_lineWidth, _lineColor);
		_chartHolder.graphics.moveTo(xpos, (_data[0] - min) * -scale);
		xpos += lineWidth;
		for(i in 1..._data.length)
		{
			if(_data[i] != null)
			{
				_chartHolder.graphics.lineTo(xpos, (_data[i] - min) * -scale);
			}
			xpos += lineWidth;
		}
	}

	
	
	///////////////////////////////////
	// getter/setters
	///////////////////////////////////
	/**
	 * Sets/gets the width of the line in the graph.
	 */
	public var lineWidth(get, set):Float;
	function set_lineWidth(value:Float):Float
	{
		return _lineWidth = value;
	}
	function get_lineWidth():Float
	{
		return _lineWidth;
	}

	/**
	 * Sets/gets the color of the line in the graph.
	 */
	public var lineColor(get, set):Int;
	function set_lineColor(value:Int):Int
	{
		return _lineColor = value;
	}
	function get_lineColor():Int
	{
		return _lineColor;
	}

	/**
	 * Gets the highest value of the numbers in the data array.
	 */
	private function getMaxValue():Float
	{
		if(!_autoScale) return _maximum;
		var maxValue:Float = Math.NEGATIVE_INFINITY;
		for (i in 0..._data.length)
		{
			if(_data[i] != null)
			{
				maxValue = Math.max(_data[i], maxValue);
			}
		}
		return maxValue;
	}
	
	/**
	 * Gets the lowest value of the numbers in the data array.
	 */
	private function getMinValue():Float
	{
		if(!_autoScale) return _minimum;
		var minValue:Float = Math.POSITIVE_INFINITY;
		for (i in 0..._data.length)
		{
			if(_data[i] != null)
			{
				minValue = Math.min(_data[i], minValue);
			}
		}
		return minValue;
	}
	
	///////////////////////////////////
	// public methods
	///////////////////////////////////
	
	/**
	 * Draws the visual ui of the component.
	 */
	public function draw() : Void
	{
		_chartHolder.graphics.clear();
		if(_data != null)
		{
			drawChart();
		
			/*var mult:Float = Math.pow(10, _labelPrecision);
			var maxVal:Float = Math.round(maximum * mult) / mult;
			_maxLabel.text = maxVal.toString();
			_maxLabel.draw();
			_maxLabel.x = -_maxLabel.width - 5;
			_maxLabel.y = -_maxLabel.height * 0.5; 
			
			var minVal:Float = Math.round(minimum * mult) / mult;
			_minLabel.text = minVal.toString();
			_minLabel.draw();
			_minLabel.x = -_minLabel.width - 5;
			_minLabel.y = height - _minLabel.height * 0.5;*/
		}
	}
	
	///////////////////////////////////
	// getter/setters
	///////////////////////////////////
			
	/**
	 * Sets/gets the data array.
	 */
	public var data(get, set):Array<Dynamic>;
	function set_data(value:Array<Dynamic>):Array<Dynamic>
	{
		return _data = value;
	}
	function get_data():Array<Dynamic>
	{
		return _data;
	}

	/**
	 * Sets/gets the maximum value of the graph. Only used if autoScale is false.
	 */
	public var maximum(get, set):Float;
	function set_maximum(value:Float):Float
	{
		return _maximum = value;
	}
	function get_maximum():Float
	{
		if(_autoScale) return getMaxValue();
		return _maximum;
	}

	/**
	 * Sets/gets the minimum value of the graph. Only used if autoScale is false.
	 */
	public var minimum(get, set):Float;
	public function set_minimum(value:Float):Float
	{
		return _minimum = value;
	}
	public function get_minimum():Float
	{
		if(_autoScale) return getMinValue();
		return _minimum;
	}

	/**
	 * Sets/gets whether the graph will automatically setits own max and min values based on the data values.
	 */
	public var autoScale(get, set):Bool;
	public function set_autoScale(value:Bool):Bool
	{
		return _autoScale = value;
	}
	public function get_autoScale():Bool
	{
		return _autoScale;
	}
	

}
