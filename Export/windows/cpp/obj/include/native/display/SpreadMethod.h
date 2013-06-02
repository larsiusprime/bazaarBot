#ifndef INCLUDED_native_display_SpreadMethod
#define INCLUDED_native_display_SpreadMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,SpreadMethod)
namespace native{
namespace display{


class SpreadMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SpreadMethod_obj OBJ_;

	public:
		SpreadMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.SpreadMethod"); }
		::String __ToString() const { return HX_CSTRING("SpreadMethod.") + tag; }

		static ::native::display::SpreadMethod PAD;
		static inline ::native::display::SpreadMethod PAD_dyn() { return PAD; }
		static ::native::display::SpreadMethod REFLECT;
		static inline ::native::display::SpreadMethod REFLECT_dyn() { return REFLECT; }
		static ::native::display::SpreadMethod REPEAT;
		static inline ::native::display::SpreadMethod REPEAT_dyn() { return REPEAT; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_SpreadMethod */ 
