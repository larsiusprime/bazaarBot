#ifndef INCLUDED_native_display_TriangleCulling
#define INCLUDED_native_display_TriangleCulling

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,TriangleCulling)
namespace native{
namespace display{


class TriangleCulling_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TriangleCulling_obj OBJ_;

	public:
		TriangleCulling_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.display.TriangleCulling"); }
		::String __ToString() const { return HX_CSTRING("TriangleCulling.") + tag; }

		static ::native::display::TriangleCulling NEGATIVE;
		static inline ::native::display::TriangleCulling NEGATIVE_dyn() { return NEGATIVE; }
		static ::native::display::TriangleCulling NONE;
		static inline ::native::display::TriangleCulling NONE_dyn() { return NONE; }
		static ::native::display::TriangleCulling POSITIVE;
		static inline ::native::display::TriangleCulling POSITIVE_dyn() { return POSITIVE; }
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_TriangleCulling */ 
