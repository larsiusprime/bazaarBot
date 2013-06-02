#ifndef INCLUDED_native_display_StageDisplayState
#define INCLUDED_native_display_StageDisplayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,StageDisplayState)
namespace native{
namespace display{


class StageDisplayState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageDisplayState_obj OBJ_;

	public:
		StageDisplayState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.StageDisplayState"); }
		::String __ToString() const { return HX_CSTRING("StageDisplayState.") + tag; }

		static ::native::display::StageDisplayState FULL_SCREEN;
		static inline ::native::display::StageDisplayState FULL_SCREEN_dyn() { return FULL_SCREEN; }
		static ::native::display::StageDisplayState FULL_SCREEN_INTERACTIVE;
		static inline ::native::display::StageDisplayState FULL_SCREEN_INTERACTIVE_dyn() { return FULL_SCREEN_INTERACTIVE; }
		static ::native::display::StageDisplayState NORMAL;
		static inline ::native::display::StageDisplayState NORMAL_dyn() { return NORMAL; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_StageDisplayState */ 
