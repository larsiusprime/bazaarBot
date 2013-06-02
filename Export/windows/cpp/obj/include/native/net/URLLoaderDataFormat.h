#ifndef INCLUDED_native_net_URLLoaderDataFormat
#define INCLUDED_native_net_URLLoaderDataFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,net,URLLoaderDataFormat)
namespace native{
namespace net{


class URLLoaderDataFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef URLLoaderDataFormat_obj OBJ_;

	public:
		URLLoaderDataFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.net.URLLoaderDataFormat"); }
		::String __ToString() const { return HX_CSTRING("URLLoaderDataFormat.") + tag; }

		static ::native::net::URLLoaderDataFormat BINARY;
		static inline ::native::net::URLLoaderDataFormat BINARY_dyn() { return BINARY; }
		static ::native::net::URLLoaderDataFormat TEXT;
		static inline ::native::net::URLLoaderDataFormat TEXT_dyn() { return TEXT; }
		static ::native::net::URLLoaderDataFormat VARIABLES;
		static inline ::native::net::URLLoaderDataFormat VARIABLES_dyn() { return VARIABLES; }
};

} // end namespace native
} // end namespace net

#endif /* INCLUDED_native_net_URLLoaderDataFormat */ 
