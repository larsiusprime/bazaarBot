#ifndef INCLUDED_native_errors_RangeError
#define INCLUDED_native_errors_RangeError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/errors/Error.h>
HX_DECLARE_CLASS2(native,errors,Error)
HX_DECLARE_CLASS2(native,errors,RangeError)
namespace native{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  RangeError_obj : public ::native::errors::Error_obj{
	public:
		typedef ::native::errors::Error_obj super;
		typedef RangeError_obj OBJ_;
		RangeError_obj();
		Void __construct(::String __o_inMessage);

	public:
		static hx::ObjectPtr< RangeError_obj > __new(::String __o_inMessage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RangeError_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RangeError"); }

};

} // end namespace native
} // end namespace errors

#endif /* INCLUDED_native_errors_RangeError */ 
