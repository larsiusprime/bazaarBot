#ifndef INCLUDED_native_display_LoaderInfo
#define INCLUDED_native_display_LoaderInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/net/URLLoader.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
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
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  LoaderInfo_obj : public ::native::net::URLLoader_obj{
	public:
		typedef ::native::net::URLLoader_obj super;
		typedef LoaderInfo_obj OBJ_;
		LoaderInfo_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LoaderInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LoaderInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LoaderInfo"); }

		virtual ::native::utils::ByteArray get_bytes( );
		Dynamic get_bytes_dyn();

		virtual Void onURLLoaded( ::native::events::Event event);
		Dynamic onURLLoaded_dyn();

		virtual Void load( ::native::net::URLRequest request);

		::String pendingURL;
		int width;
		::String url;
		::native::events::EventDispatcher sharedEvents;
		bool sameDomain;
		bool parentAllowsChild;
		Dynamic parameters;
		::String loaderURL;
		::native::display::Loader loader;
		int height;
		Float frameRate;
		::String contentType;
		::native::display::DisplayObject content;
		bool childAllowsParent;
		::native::utils::ByteArray bytes;
		static ::native::display::LoaderInfo create( ::native::display::Loader ldr);
		static Dynamic create_dyn();

};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_LoaderInfo */ 
