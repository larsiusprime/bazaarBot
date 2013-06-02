#ifndef INCLUDED_native_display_StageAlign
#define INCLUDED_native_display_StageAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,StageAlign)
namespace native{
namespace display{


class StageAlign_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageAlign_obj OBJ_;

	public:
		StageAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.StageAlign"); }
		::String __ToString() const { return HX_CSTRING("StageAlign.") + tag; }

		static ::native::display::StageAlign BOTTOM;
		static inline ::native::display::StageAlign BOTTOM_dyn() { return BOTTOM; }
		static ::native::display::StageAlign BOTTOM_LEFT;
		static inline ::native::display::StageAlign BOTTOM_LEFT_dyn() { return BOTTOM_LEFT; }
		static ::native::display::StageAlign BOTTOM_RIGHT;
		static inline ::native::display::StageAlign BOTTOM_RIGHT_dyn() { return BOTTOM_RIGHT; }
		static ::native::display::StageAlign LEFT;
		static inline ::native::display::StageAlign LEFT_dyn() { return LEFT; }
		static ::native::display::StageAlign RIGHT;
		static inline ::native::display::StageAlign RIGHT_dyn() { return RIGHT; }
		static ::native::display::StageAlign TOP;
		static inline ::native::display::StageAlign TOP_dyn() { return TOP; }
		static ::native::display::StageAlign TOP_LEFT;
		static inline ::native::display::StageAlign TOP_LEFT_dyn() { return TOP_LEFT; }
		static ::native::display::StageAlign TOP_RIGHT;
		static inline ::native::display::StageAlign TOP_RIGHT_dyn() { return TOP_RIGHT; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_StageAlign */ 
