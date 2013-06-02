#ifndef INCLUDED_native_text_FontType
#define INCLUDED_native_text_FontType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,text,FontType)
namespace native{
namespace text{


class FontType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontType_obj OBJ_;

	public:
		FontType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.text.FontType"); }
		::String __ToString() const { return HX_CSTRING("FontType.") + tag; }

		static ::native::text::FontType DEVICE;
		static inline ::native::text::FontType DEVICE_dyn() { return DEVICE; }
		static ::native::text::FontType EMBEDDED;
		static inline ::native::text::FontType EMBEDDED_dyn() { return EMBEDDED; }
		static ::native::text::FontType EMBEDDED_CFF;
		static inline ::native::text::FontType EMBEDDED_CFF_dyn() { return EMBEDDED_CFF; }
};

} // end namespace native
} // end namespace text

#endif /* INCLUDED_native_text_FontType */ 
