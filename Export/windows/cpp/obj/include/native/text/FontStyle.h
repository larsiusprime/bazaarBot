#ifndef INCLUDED_native_text_FontStyle
#define INCLUDED_native_text_FontStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,text,FontStyle)
namespace native{
namespace text{


class FontStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontStyle_obj OBJ_;

	public:
		FontStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.text.FontStyle"); }
		::String __ToString() const { return HX_CSTRING("FontStyle.") + tag; }

		static ::native::text::FontStyle BOLD;
		static inline ::native::text::FontStyle BOLD_dyn() { return BOLD; }
		static ::native::text::FontStyle BOLD_ITALIC;
		static inline ::native::text::FontStyle BOLD_ITALIC_dyn() { return BOLD_ITALIC; }
		static ::native::text::FontStyle ITALIC;
		static inline ::native::text::FontStyle ITALIC_dyn() { return ITALIC; }
		static ::native::text::FontStyle REGULAR;
		static inline ::native::text::FontStyle REGULAR_dyn() { return REGULAR; }
};

} // end namespace native
} // end namespace text

#endif /* INCLUDED_native_text_FontStyle */ 
