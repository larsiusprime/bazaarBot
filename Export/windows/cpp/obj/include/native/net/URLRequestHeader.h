#ifndef INCLUDED_native_net_URLRequestHeader
#define INCLUDED_native_net_URLRequestHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,net,URLRequestHeader)
namespace native{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLRequestHeader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequestHeader_obj OBJ_;
		URLRequestHeader_obj();
		Void __construct(::String name,::String value);

	public:
		static hx::ObjectPtr< URLRequestHeader_obj > __new(::String name,::String value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~URLRequestHeader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("URLRequestHeader"); }

		::String value;
		::String name;
};

} // end namespace native
} // end namespace net

#endif /* INCLUDED_native_net_URLRequestHeader */ 
