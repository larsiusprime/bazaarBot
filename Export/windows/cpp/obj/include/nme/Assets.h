#ifndef INCLUDED_nme_Assets
#define INCLUDED_nme_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(format,display,MovieClip)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,media,Sound)
HX_DECLARE_CLASS2(native,text,Font)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
HX_DECLARE_CLASS1(nme,Assets)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Assets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Assets"); }

		static ::haxe::ds::StringMap cachedBitmapData;
		static Array< ::String > id;
		static ::haxe::ds::StringMap library;
		static ::haxe::ds::StringMap path;
		static ::haxe::ds::StringMap type;
		static bool initialized;
		static Void initialize( );
		static Dynamic initialize_dyn();

		static ::native::display::BitmapData getBitmapData( ::String id,hx::Null< bool >  useCache);
		static Dynamic getBitmapData_dyn();

		static ::native::utils::ByteArray getBytes( ::String id);
		static Dynamic getBytes_dyn();

		static ::native::text::Font getFont( ::String id);
		static Dynamic getFont_dyn();

		static ::format::display::MovieClip getMovieClip( ::String id);
		static Dynamic getMovieClip_dyn();

		static ::native::media::Sound getSound( ::String id);
		static Dynamic getSound_dyn();

		static ::String getText( ::String id);
		static Dynamic getText_dyn();

		static Array< ::String > get_id( );
		static Dynamic get_id_dyn();

		static ::haxe::ds::StringMap get_library( );
		static Dynamic get_library_dyn();

		static ::haxe::ds::StringMap get_path( );
		static Dynamic get_path_dyn();

		static ::haxe::ds::StringMap get_type( );
		static Dynamic get_type_dyn();

};

} // end namespace nme

#endif /* INCLUDED_nme_Assets */ 
