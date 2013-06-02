#ifndef INCLUDED_native_net_URLLoader
#define INCLUDED_native_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,net,URLLoader)
HX_DECLARE_CLASS2(native,net,URLLoaderDataFormat)
HX_DECLARE_CLASS2(native,net,URLRequest)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLLoader_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();
		Void __construct(::native::net::URLRequest request);

	public:
		static hx::ObjectPtr< URLLoader_obj > __new(::native::net::URLRequest request);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~URLLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("URLLoader"); }

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void dispatchHTTPStatus( int code);
		Dynamic dispatchHTTPStatus_dyn();

		virtual Void onError( ::String msg);
		Dynamic onError_dyn();

		virtual Void nmeDataComplete( );
		Dynamic nmeDataComplete_dyn();

		virtual Void load( ::native::net::URLRequest request);
		Dynamic load_dyn();

		virtual Array< ::String > getCookies( );
		Dynamic getCookies_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		Dynamic nmeOnComplete;
		Dynamic &nmeOnComplete_dyn() { return nmeOnComplete;}
		int state;
		Dynamic nmeHandle;
		::native::net::URLLoaderDataFormat dataFormat;
		Dynamic data;
		int bytesTotal;
		int bytesLoaded;
		static ::List activeLoaders;
		static bool hasActive( );
		static Dynamic hasActive_dyn();

		static Void initialize( ::String inCACertFilePath);
		static Dynamic initialize_dyn();

		static bool nmeLoadPending( );
		static Dynamic nmeLoadPending_dyn();

		static Void nmePollData( );
		static Dynamic nmePollData_dyn();

		static Dynamic nme_curl_create;
		static Dynamic &nme_curl_create_dyn() { return nme_curl_create;}
		static Dynamic nme_curl_process_loaders;
		static Dynamic &nme_curl_process_loaders_dyn() { return nme_curl_process_loaders;}
		static Dynamic nme_curl_update_loader;
		static Dynamic &nme_curl_update_loader_dyn() { return nme_curl_update_loader;}
		static Dynamic nme_curl_get_code;
		static Dynamic &nme_curl_get_code_dyn() { return nme_curl_get_code;}
		static Dynamic nme_curl_get_error_message;
		static Dynamic &nme_curl_get_error_message_dyn() { return nme_curl_get_error_message;}
		static Dynamic nme_curl_get_data;
		static Dynamic &nme_curl_get_data_dyn() { return nme_curl_get_data;}
		static Dynamic nme_curl_get_cookies;
		static Dynamic &nme_curl_get_cookies_dyn() { return nme_curl_get_cookies;}
		static Dynamic nme_curl_initialize;
		static Dynamic &nme_curl_initialize_dyn() { return nme_curl_initialize;}
};

} // end namespace native
} // end namespace net

#endif /* INCLUDED_native_net_URLLoader */ 
