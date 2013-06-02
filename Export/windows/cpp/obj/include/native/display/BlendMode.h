#ifndef INCLUDED_native_display_BlendMode
#define INCLUDED_native_display_BlendMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BlendMode)
namespace native{
namespace display{


class BlendMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BlendMode_obj OBJ_;

	public:
		BlendMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.BlendMode"); }
		::String __ToString() const { return HX_CSTRING("BlendMode.") + tag; }

		static ::native::display::BlendMode ADD;
		static inline ::native::display::BlendMode ADD_dyn() { return ADD; }
		static ::native::display::BlendMode ALPHA;
		static inline ::native::display::BlendMode ALPHA_dyn() { return ALPHA; }
		static ::native::display::BlendMode DARKEN;
		static inline ::native::display::BlendMode DARKEN_dyn() { return DARKEN; }
		static ::native::display::BlendMode DIFFERENCE;
		static inline ::native::display::BlendMode DIFFERENCE_dyn() { return DIFFERENCE; }
		static ::native::display::BlendMode ERASE;
		static inline ::native::display::BlendMode ERASE_dyn() { return ERASE; }
		static ::native::display::BlendMode HARDLIGHT;
		static inline ::native::display::BlendMode HARDLIGHT_dyn() { return HARDLIGHT; }
		static ::native::display::BlendMode INVERT;
		static inline ::native::display::BlendMode INVERT_dyn() { return INVERT; }
		static ::native::display::BlendMode LAYER;
		static inline ::native::display::BlendMode LAYER_dyn() { return LAYER; }
		static ::native::display::BlendMode LIGHTEN;
		static inline ::native::display::BlendMode LIGHTEN_dyn() { return LIGHTEN; }
		static ::native::display::BlendMode MULTIPLY;
		static inline ::native::display::BlendMode MULTIPLY_dyn() { return MULTIPLY; }
		static ::native::display::BlendMode NORMAL;
		static inline ::native::display::BlendMode NORMAL_dyn() { return NORMAL; }
		static ::native::display::BlendMode OVERLAY;
		static inline ::native::display::BlendMode OVERLAY_dyn() { return OVERLAY; }
		static ::native::display::BlendMode SCREEN;
		static inline ::native::display::BlendMode SCREEN_dyn() { return SCREEN; }
		static ::native::display::BlendMode SUBTRACT;
		static inline ::native::display::BlendMode SUBTRACT_dyn() { return SUBTRACT; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_BlendMode */ 
