#ifndef INCLUDED_native_errors_EOFError
#define INCLUDED_native_errors_EOFError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/errors/Error.h>
HX_DECLARE_CLASS2(native,errors,EOFError)
HX_DECLARE_CLASS2(native,errors,Error)
namespace native{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  EOFError_obj : public ::native::errors::Error_obj{
	public:
		typedef ::native::errors::Error_obj super;
		typedef EOFError_obj OBJ_;
		EOFError_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EOFError_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EOFError_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EOFError"); }

};

} // end namespace native
} // end namespace errors

#endif /* INCLUDED_native_errors_EOFError */ 
