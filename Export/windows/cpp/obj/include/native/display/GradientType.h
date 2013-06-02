#ifndef INCLUDED_native_display_GradientType
#define INCLUDED_native_display_GradientType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,GradientType)
namespace native{
namespace display{


class GradientType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GradientType_obj OBJ_;

	public:
		GradientType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.GradientType"); }
		::String __ToString() const { return HX_CSTRING("GradientType.") + tag; }

		static ::native::display::GradientType LINEAR;
		static inline ::native::display::GradientType LINEAR_dyn() { return LINEAR; }
		static ::native::display::GradientType RADIAL;
		static inline ::native::display::GradientType RADIAL_dyn() { return RADIAL; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_GradientType */ 
