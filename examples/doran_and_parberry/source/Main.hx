package;

import bazaarbot.Agent;
import bazaarbot.agent.BasicAgent;
import bazaarbot.agent.BasicAgent.AgentData;
import bazaarbot.agent.InventoryData;
import bazaarbot.agent.Logic;
import bazaarbot.agent.LogicScript;
import bazaarbot.MarketData;
import bazaarbot.utils.Quick;
import flash.Lib;
import flash.text.TextField;
import flash.text.TextFieldAutoSize;
import flash.text.TextFormat;
import bazaarbot.Market;
import haxe.Json;
import flash.display.Bitmap;
import flash.display.Shape;
import flash.display.SimpleButton;
import flash.display.Sprite;
import hscript.Interp;
import hscript.Parser;
import jobs.LogicBlacksmith;
import jobs.LogicFarmer;
import jobs.LogicMiner;
import jobs.LogicRefiner;
import jobs.LogicWoodcutter;
import openfl.Assets;
import flash.events.MouseEvent;
import flash.text.TextFormatAlign;


class Main extends Sprite
{
	private var market:Market;
	private var display:MarketDisplay;
	private var txt_benchmark:TextField;
	
	public function new ()
	{
		super ();
		
		market = new Market();
		market.init(MarketData.fromJSON(Json.parse(Assets.getText("assets/settings.json")), getAgent));
		
		makeButtons();
	}
	
	private function getAgentScript(data:AgentData):BasicAgent
	{
		data.logic = new LogicScript(data.logicName+".hs");
		return new Agent(0, data);
	}
	
	private function getAgent(data:AgentData):BasicAgent
	{
		data.logic = getLogic(data.logicName);
		return new Agent(0, data);
	}
	
	private function getLogic(str:String):Logic
	{
		switch(str)
		{
			case "blacksmith": return new LogicBlacksmith(null);
			case "farmer": return new LogicFarmer(null);
			case "miner": return new LogicMiner(null);
			case "refiner": return new LogicRefiner(null);
			case "woodcutter": return new LogicWoodcutter(null);
		}
		return null;
	}
	
	private function makeButtons():Void
	{
		makeButton(10, 10, "Advance", onAdvance);
		
		display = new MarketDisplay(799, 600 - 51);
		display.x = 0;
		display.y = 50;
		addChild(display);
		
		makeButton(120, 10, "Benchmark", onBenchmark);
		txt_benchmark = new TextField();
		txt_benchmark.x = 220;
		txt_benchmark.y = 10;
		txt_benchmark.width = 800 - 220;
		addChild(txt_benchmark);
	}
	
	private function onBenchmark(m:MouseEvent):Void
	{
		var time = Lib.getTimer();
		var benchmark:Int = 30;
		market.simulate(benchmark);
		display.update(market.get_marketReport(1));
		time = Lib.getTimer() - time;
		var avg:Float = (cast(time, Float) / cast(benchmark, Float)) / 1000;
		var tstr:String = Quick.numStr(time / 1000, 2);
		var platform:String="NONE";
		#if flash
			platform = "flash";
		#elseif cpp
			platform = "cpp";
		#elseif neko
			platform = "neko";
		#elseif js
			platform = "js";
		#end
		
		txt_benchmark.text = ("Platform=" + platform + " Rounds=" + benchmark + ", Commodities=" + market.numTypesOfGood() + ", Agents=" + market.numAgents() + ", TIME total=" + tstr + " avg=" + Quick.numStr(avg,2));
	}
	
	private function onAdvance(m:MouseEvent):Void
	{
		market.simulate(1);
		display.update(market.get_marketReport(1));
	}
	
	private function makeButton(X:Float, Y:Float, str:String, func:Dynamic, W:Float = 100, H:Float = 30):SimpleButton
	{
		var up:Sprite = new Sprite();
		var over:Sprite = new Sprite();
		var down:Sprite = new Sprite();
		var hit:Sprite = new Sprite();
		up.graphics.beginFill(0xaaaaaa);
		up.graphics.drawRoundRect(0, 0, W, H, 5, 5);
		up.graphics.endFill();
		
		over.graphics.beginFill(0xdddddd);
		over.graphics.drawRoundRect(0, 0, W, H, 5, 5);
		over.graphics.endFill();
		
		down.graphics.beginFill(0x777777);
		down.graphics.drawRoundRect(0, 0, W, H, 5, 5);
		down.graphics.endFill();
		
		hit.graphics.beginFill(0x000000);
		hit.graphics.drawRoundRect(0, 0, W, H, 5, 5);
		hit.graphics.endFill();
		
		var text1:TextField = new TextField();
		var text2:TextField = new TextField();
		var text3:TextField = new TextField();
		
		up.addChild(text1);
		over.addChild(text2);
		down.addChild(text3);
		
		text1.autoSize = TextFieldAutoSize.LEFT;
		text1.text = text2.text = text3.text = str;
		text1.x = text2.x = text3.x = (up.width - text1.textWidth)/2;
		text1.y = text2.y = text3.y = (up.height - text1.height) / 2;
		
		var s:SimpleButton = new SimpleButton(up, over, down, hit);
		s.addEventListener(MouseEvent.CLICK, func, false, 0, true);
		
		s.x = X;
		s.y = Y;
		
		addChild(s);
		return s;
	}
}
