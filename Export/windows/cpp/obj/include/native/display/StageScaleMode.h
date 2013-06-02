#ifndef INCLUDED_native_display_StageScaleMode
#define INCLUDED_native_display_StageScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,StageScaleMode)
namespace native{
namespace display{


class StageScaleMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageScaleMode_obj OBJ_;

	public:
		StageScaleMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.StageScaleMode"); }
		::String __ToString() const { return HX_CSTRING("StageScaleMode.") + tag; }

		static ::native::display::StageScaleMode EXACT_FIT;
		static inline ::native::display::StageScaleMode EXACT_FIT_dyn() { return EXACT_FIT; }
		static ::native::display::StageScaleMode NO_BORDER;
		static inline ::native::display::StageScaleMode NO_BORDER_dyn() { return NO_BORDER; }
		static ::native::display::StageScaleMode NO_SCALE;
		static inline ::native::display::StageScaleMode NO_SCALE_dyn() { return NO_SCALE; }
		static ::native::display::StageScaleMode SHOW_ALL;
		static inline ::native::display::StageScaleMode SHOW_ALL_dyn() { return SHOW_ALL; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_StageScaleMode */ 
