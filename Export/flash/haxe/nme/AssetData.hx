package nme;


import nme.Assets;


class AssetData {

	
	public static var className = new #if haxe3 Map <String, #else Hash <#end Dynamic> ();
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();
	
	private static var initialized:Bool = false;
	
	
	public static function initialize ():Void {
		
		if (!initialized) {
			
			className.set ("assets/data/settings.json", nme.NME_assets_data_settings_json);
			type.set ("assets/data/settings.json", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/nme.png", nme.NME_assets_nme_png);
			type.set ("assets/nme.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("Assets/data/settings.json", nme.NME_assets_data_settings_json1);
			type.set ("Assets/data/settings.json", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		}
		
	}
	
	
}


class NME_assets_data_settings_json extends nme.utils.ByteArray { }
class NME_assets_nme_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_settings_json1 extends nme.utils.ByteArray { }
