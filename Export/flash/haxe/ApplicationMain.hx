#if (!macro || !haxe3)
#if nme

import com.leveluplabs.bazaarbot.example.Main;
import flash.display.DisplayObject;
import nme.Assets;
import nme.events.Event;

class ApplicationMain {

	static var mPreloader:NMEPreloader;

	public static function main() {
		var call_real = true;
		
		nme.Lib.setPackage("LevelUpLabs", "bazaarBot", "com.leveluplabs.example", "1.0.0");
		
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		
		nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
		nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		
		if (loaded < total || true) /* Always wait for event */ {
			call_real = false;
			mPreloader = new NMEPreloader();
			nme.Lib.current.addChild(mPreloader);
			mPreloader.onInit();
			mPreloader.onUpdate(loaded,total);
			nme.Lib.current.addEventListener(nme.events.Event.ENTER_FRAME, onEnter);
		}
		
		
      
		#if !fdb
		haxe.Log.trace = flashTrace;
		#end
      
		
		if (call_real)
			begin();
	}

	#if !fdb
	private static function flashTrace( v : Dynamic, ?pos : haxe.PosInfos ) {
		var className = pos.className.substr(pos.className.lastIndexOf('.') + 1);
		var message = className+"::"+pos.methodName+":"+pos.lineNumber+": " + v;
		
		if (flash.external.ExternalInterface.available)
			flash.external.ExternalInterface.call("console.log", message);
		else untyped flash.Boot.__trace(v, pos);
    }
	#end

	private static function begin() {
		var hasMain = false;
		for (methodName in Type.getClassFields(com.leveluplabs.bazaarbot.example.Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}

		if (hasMain)
		{
			Reflect.callMethod (com.leveluplabs.bazaarbot.example.Main, Reflect.field (com.leveluplabs.bazaarbot.example.Main, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(com.leveluplabs.bazaarbot.example.Main, []);
			if (Std.is(instance, nme.display.DisplayObject)) {
				nme.Lib.current.addChild(cast instance);
			}
		}
	}

	static function onEnter(_) {
		var loaded = nme.Lib.current.loaderInfo.bytesLoaded;
		var total = nme.Lib.current.loaderInfo.bytesTotal;
		mPreloader.onUpdate(loaded,total);
		
		if (loaded >= total) {
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME, onEnter);
			mPreloader.addEventListener (Event.COMPLETE, preloader_onComplete);
			mPreloader.onLoaded();
		}
	}

	private static function preloader_onComplete(event:Event):Void {
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		begin();
	}

   public static function getAsset(inName:String) : Dynamic
   {
      var types = Assets.type;
      if (types.exists(inName))
         switch(types.get(inName))
         {
 	         case BINARY, TEXT: return Assets.getBytes(inName);
	         case FONT: return Assets.getFont(inName);
	         case IMAGE: return Assets.getBitmapData(inName,false);
	         case MUSIC, SOUND: return Assets.getSound(inName);
         }

      throw "Asset does not exist: " + inName;
      return null;
   }
}

#else

import com.leveluplabs.bazaarbot.example.Main;

class ApplicationMain {
	
	public static function main() {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(com.leveluplabs.bazaarbot.example.Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod(com.leveluplabs.bazaarbot.example.Main, Reflect.field (com.leveluplabs.bazaarbot.example.Main, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(DocumentClass, []);
			if (Std.is(instance, flash.display.DisplayObject)) {
				flash.Lib.current.addChild(cast instance);
			}
		}
	}
}

#end

#if haxe3 @:build(DocumentClass.build()) #end
class DocumentClass extends com.leveluplabs.bazaarbot.example.Main { }

#else

import haxe.macro.Context;
import haxe.macro.Expr;

class DocumentClass {
	
	macro public static function build ():Array<Field> {
		var classType = Context.getLocalClass().get();
		var searchTypes = classType;
		while (searchTypes.superClass != null) {
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				var fields = Context.getBuildFields();
				var method = macro {
					return flash.Lib.current.stage;
				}
				fields.push ({ name: "get_stage", access: [ APrivate ], meta: [ { name: ":getter", params: [ macro stage ], pos: Context.currentPos() } ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos() });
				return fields;
			}
			searchTypes = searchTypes.superClass.t.get();
		}
		return null;
	}
	
}
#end
