package;


import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Dynamic):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "rootPath")) {
			
			rootPath = Reflect.field (config, "rootPath");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif (sys && windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash && !display)
		
		#end
		
		var data, manifest, library;
		
		#if kha
		
		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);
		
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");
		
		#else
		
		data = '{"name":null,"assets":"aoy4:sizei3653y4:typey4:TEXTy9:classNamey24:__ASSET__assets_icon_svgy2:idy17:assets%2Ficon.svggoR0zR1R2R3y34:__ASSET__assets_scripts_drafter_hsR5y29:assets%2Fscripts%2Fdrafter.hsgoR0i503R1R2R3y33:__ASSET__assets_scripts_farmer_hsR5y28:assets%2Fscripts%2Ffarmer.hsgoR0zR1R2R3y36:__ASSET__assets_scripts_open_pack_hsR5y31:assets%2Fscripts%2Fopen_pack.hsgoR0i1385R1R2R3y29:__ASSET__assets_settings_jsonR5y22:assets%2Fsettings.jsongoR0zR1R2R3y35:__ASSET__assets_scripts_drafter_hs1R5y29:Assets%2Fscripts%2Fdrafter.hsgoR0i503R1R2R3y34:__ASSET__assets_scripts_farmer_hs1R5y28:Assets%2Fscripts%2Ffarmer.hsgoR0zR1R2R3y37:__ASSET__assets_scripts_open_pack_hs1R5y31:Assets%2Fscripts%2Fopen_pack.hsgoR0i1385R1R2R3y30:__ASSET__assets_settings_json1R5y22:Assets%2Fsettings.jsongh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
		#end
		
	}
	
	
}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_icon_svg extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_scripts_drafter_hs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_scripts_farmer_hs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_scripts_open_pack_hs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_settings_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_scripts_drafter_hs1 extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_scripts_farmer_hs1 extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_scripts_open_pack_hs1 extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_settings_json1 extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


#elseif (desktop || cpp)

@:keep @:file("Assets/icon.svg") #if display private #end class __ASSET__assets_icon_svg extends haxe.io.Bytes {}
@:keep @:file("Assets/scripts/drafter.hs") #if display private #end class __ASSET__assets_scripts_drafter_hs extends haxe.io.Bytes {}
@:keep @:file("Assets/scripts/farmer.hs") #if display private #end class __ASSET__assets_scripts_farmer_hs extends haxe.io.Bytes {}
@:keep @:file("Assets/scripts/open_pack.hs") #if display private #end class __ASSET__assets_scripts_open_pack_hs extends haxe.io.Bytes {}
@:keep @:file("Assets/settings.json") #if display private #end class __ASSET__assets_settings_json extends haxe.io.Bytes {}
@:keep @:file("Assets/scripts/drafter.hs") #if display private #end class __ASSET__assets_scripts_drafter_hs1 extends haxe.io.Bytes {}
@:keep @:file("Assets/scripts/farmer.hs") #if display private #end class __ASSET__assets_scripts_farmer_hs1 extends haxe.io.Bytes {}
@:keep @:file("Assets/scripts/open_pack.hs") #if display private #end class __ASSET__assets_scripts_open_pack_hs1 extends haxe.io.Bytes {}
@:keep @:file("Assets/settings.json") #if display private #end class __ASSET__assets_settings_json1 extends haxe.io.Bytes {}
@:keep @:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)

#if html5

#else

#end

#end
#end

#end