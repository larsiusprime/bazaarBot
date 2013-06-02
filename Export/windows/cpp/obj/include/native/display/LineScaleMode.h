#ifndef INCLUDED_native_display_LineScaleMode
#define INCLUDED_native_display_LineScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,LineScaleMode)
namespace native{
namespace display{


class LineScaleMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LineScaleMode_obj OBJ_;

	public:
		LineScaleMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.LineScaleMode"); }
		::String __ToString() const { return HX_CSTRING("LineScaleMode.") + tag; }

		static ::native::display::LineScaleMode HORIZONTAL;
		static inline ::native::display::LineScaleMode HORIZONTAL_dyn() { return HORIZONTAL; }
		static ::native::display::LineScaleMode NONE;
		static inline ::native::display::LineScaleMode NONE_dyn() { return NONE; }
		static ::native::display::LineScaleMode NORMAL;
		static inline ::native::display::LineScaleMode NORMAL_dyn() { return NORMAL; }
		static ::native::display::LineScaleMode OPENGL;
		static inline ::native::display::LineScaleMode OPENGL_dyn() { return OPENGL; }
		static ::native::display::LineScaleMode VERTICAL;
		static inline ::native::display::LineScaleMode VERTICAL_dyn() { return VERTICAL; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_LineScaleMode */ 
