#ifndef INCLUDED_native_display_StageQuality
#define INCLUDED_native_display_StageQuality

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,StageQuality)
namespace native{
namespace display{


class StageQuality_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StageQuality_obj OBJ_;

	public:
		StageQuality_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.StageQuality"); }
		::String __ToString() const { return HX_CSTRING("StageQuality.") + tag; }

		static ::native::display::StageQuality BEST;
		static inline ::native::display::StageQuality BEST_dyn() { return BEST; }
		static ::native::display::StageQuality HIGH;
		static inline ::native::display::StageQuality HIGH_dyn() { return HIGH; }
		static ::native::display::StageQuality LOW;
		static inline ::native::display::StageQuality LOW_dyn() { return LOW; }
		static ::native::display::StageQuality MEDIUM;
		static inline ::native::display::StageQuality MEDIUM_dyn() { return MEDIUM; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_StageQuality */ 
