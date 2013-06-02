#ifndef INCLUDED_native_net_URLRequestMethod
#define INCLUDED_native_net_URLRequestMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,net,URLRequestMethod)
namespace native{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLRequestMethod_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequestMethod_obj OBJ_;
		URLRequestMethod_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< URLRequestMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~URLRequestMethod_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("URLRequestMethod"); }

};

} // end namespace native
} // end namespace net

#endif /* INCLUDED_native_net_URLRequestMethod */ 
