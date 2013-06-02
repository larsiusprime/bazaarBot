package com.leveluplabs.bazaarbot.example;

import nme.text.TextFieldAutoSize;
import nme.text.TextFormat;
import com.leveluplabs.bazaarbot.BazaarBot;
import haxe.Json;
import nme.display.Bitmap;
import nme.display.Shape;
import nme.display.SimpleButton;
import nme.display.Sprite;
import nme.Assets;
import nme.events.MouseEvent;
import nme.Lib;
import nme.text.TextField;
import nme.text.TextFormatAlign;


class Main extends Sprite {
	
	private var bazaar:BazaarBot;
	
	private var display:MarketDisplay;
	
	public function new () {			
		super ();		
		
		var settings:String = Assets.getText("assets/data/settings.json");
		var data:Dynamic = Json.parse(settings);
		bazaar = new BazaarBot();
		bazaar.init(data);
		
		makeButtons();
	}		
	
	private function makeButtons():Void {
		makeButton(10, 10, "Advance", onAdvance);
		
		display = new MarketDisplay(799, 600 - 51);
		display.x = 0;
		display.y = 50;
		addChild(display);
	}
	
	private function onAdvance(m:MouseEvent):Void {
		bazaar.simulate(1);
		display.update(bazaar.get_marketReport(1));
		/*var str:String = "";
		for (c in bazaar.get_commodities_unsafe()) {
			str += c + " \t" + "$" + BazaarBot.num_str(bazaar.get_history_price(c, 1), 2);
			str += "\n";
		}*/
	}
	
	private function makeButton(X:Float, Y:Float, str:String, func:Dynamic, W:Float = 100, H:Float = 30):SimpleButton{
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
		
		addChild(s);
		return s;
	}
	
}	
