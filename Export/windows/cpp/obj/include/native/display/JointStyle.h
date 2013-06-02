#ifndef INCLUDED_native_display_JointStyle
#define INCLUDED_native_display_JointStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,JointStyle)
namespace native{
namespace display{


class JointStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef JointStyle_obj OBJ_;

	public:
		JointStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.JointStyle"); }
		::String __ToString() const { return HX_CSTRING("JointStyle.") + tag; }

		static ::native::display::JointStyle BEVEL;
		static inline ::native::display::JointStyle BEVEL_dyn() { return BEVEL; }
		static ::native::display::JointStyle MITER;
		static inline ::native::display::JointStyle MITER_dyn() { return MITER; }
		static ::native::display::JointStyle ROUND;
		static inline ::native::display::JointStyle ROUND_dyn() { return ROUND; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_JointStyle */ 
