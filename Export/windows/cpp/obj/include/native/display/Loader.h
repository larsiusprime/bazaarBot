#ifndef INCLUDED_native_display_Loader
#define INCLUDED_native_display_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Loader)
HX_DECLARE_CLASS2(native,display,LoaderInfo)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,net,URLLoader)
HX_DECLARE_CLASS2(native,net,URLRequest)
HX_DECLARE_CLASS2(native,system,LoaderContext)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Loader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Loader"); }

		virtual Void onData( ::native::events::Event event);
		Dynamic onData_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void loadBytes( ::native::utils::ByteArray bytes,::native::system::LoaderContext context);
		Dynamic loadBytes_dyn();

		virtual Void load( ::native::net::URLRequest request,::native::system::LoaderContext context);
		Dynamic load_dyn();

		virtual bool doLoad( ::native::utils::ByteArray inBytes);
		Dynamic doLoad_dyn();

		::native::display::BitmapData nmeImage;
		::native::display::LoaderInfo contentLoaderInfo;
		::native::display::DisplayObject content;
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_Loader */ 
