#ifndef INCLUDED_native_text_Font
#define INCLUDED_native_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,text,Font)
HX_DECLARE_CLASS2(native,text,FontStyle)
HX_DECLARE_CLASS2(native,text,FontType)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(::String __o_inFilename,::native::text::FontStyle inStyle,::native::text::FontType inType);

	public:
		static hx::ObjectPtr< Font_obj > __new(::String __o_inFilename,::native::text::FontStyle inStyle,::native::text::FontType inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Font_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Font"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		::native::text::FontType fontType;
		::native::text::FontStyle fontStyle;
		::String fontName;
		static Array< ::Dynamic > nmeRegisteredFonts;
		static Array< ::Dynamic > nmeDeviceFonts;
		static Array< ::Dynamic > enumerateFonts( hx::Null< bool >  enumerateDeviceFonts);
		static Dynamic enumerateFonts_dyn();

		static Dynamic load( ::String inFilename);
		static Dynamic load_dyn();

		static Dynamic loadBytes( ::native::utils::ByteArray inBytes);
		static Dynamic loadBytes_dyn();

		static Void registerFont( ::Class font);
		static Dynamic registerFont_dyn();

		static Dynamic freetype_import_font;
		static Dynamic &freetype_import_font_dyn() { return freetype_import_font;}
		static Dynamic nme_font_register_font;
		static Dynamic &nme_font_register_font_dyn() { return nme_font_register_font;}
		static Dynamic nme_font_iterate_device_fonts;
		static Dynamic &nme_font_iterate_device_fonts_dyn() { return nme_font_iterate_device_fonts;}
};

} // end namespace native
} // end namespace text

#endif /* INCLUDED_native_text_Font */ 
