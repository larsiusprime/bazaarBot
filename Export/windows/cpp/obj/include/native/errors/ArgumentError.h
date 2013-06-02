#ifndef INCLUDED_native_errors_ArgumentError
#define INCLUDED_native_errors_ArgumentError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/errors/Error.h>
HX_DECLARE_CLASS2(native,errors,ArgumentError)
HX_DECLARE_CLASS2(native,errors,Error)
namespace native{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  ArgumentError_obj : public ::native::errors::Error_obj{
	public:
		typedef ::native::errors::Error_obj super;
		typedef ArgumentError_obj OBJ_;
		ArgumentError_obj();
		Void __construct(Dynamic inMessage,Dynamic id);

	public:
		static hx::ObjectPtr< ArgumentError_obj > __new(Dynamic inMessage,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArgumentError_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArgumentError"); }

};

} // end namespace native
} // end namespace errors

#endif /* INCLUDED_native_errors_ArgumentError */ 
