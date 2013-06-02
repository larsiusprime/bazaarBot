#ifndef INCLUDED_native_display_CapsStyle
#define INCLUDED_native_display_CapsStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,CapsStyle)
namespace native{
namespace display{


class CapsStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CapsStyle_obj OBJ_;

	public:
		CapsStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.CapsStyle"); }
		::String __ToString() const { return HX_CSTRING("CapsStyle.") + tag; }

		static ::native::display::CapsStyle NONE;
		static inline ::native::display::CapsStyle NONE_dyn() { return NONE; }
		static ::native::display::CapsStyle ROUND;
		static inline ::native::display::CapsStyle ROUND_dyn() { return ROUND; }
		static ::native::display::CapsStyle SQUARE;
		static inline ::native::display::CapsStyle SQUARE_dyn() { return SQUARE; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_CapsStyle */ 
