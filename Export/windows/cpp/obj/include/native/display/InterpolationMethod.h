#ifndef INCLUDED_native_display_InterpolationMethod
#define INCLUDED_native_display_InterpolationMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,InterpolationMethod)
namespace native{
namespace display{


class InterpolationMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InterpolationMethod_obj OBJ_;

	public:
		InterpolationMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.InterpolationMethod"); }
		::String __ToString() const { return HX_CSTRING("InterpolationMethod.") + tag; }

		static ::native::display::InterpolationMethod LINEAR_RGB;
		static inline ::native::display::InterpolationMethod LINEAR_RGB_dyn() { return LINEAR_RGB; }
		static ::native::display::InterpolationMethod RGB;
		static inline ::native::display::InterpolationMethod RGB_dyn() { return RGB; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_InterpolationMethod */ 
