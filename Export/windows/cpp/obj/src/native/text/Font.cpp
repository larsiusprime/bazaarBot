#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_native_text_FontStyle
#include <native/text/FontStyle.h>
#endif
#ifndef INCLUDED_native_text_FontType
#include <native/text/FontType.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace text{

Void Font_obj::__construct(::String __o_inFilename,::native::text::FontStyle inStyle,::native::text::FontType inType)
{
HX_STACK_PUSH("Font::new","native/text/Font.hx",20);
::String inFilename = __o_inFilename.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(20)
	if (((inFilename == HX_CSTRING("")))){
		HX_STACK_LINE(23)
		::Class fontClass = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(24)
		if ((::Reflect_obj::hasField(fontClass,HX_CSTRING("resourceName")))){
			HX_STACK_LINE(25)
			::native::utils::ByteArray bytes = ::native::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::Reflect_obj::field(fontClass,HX_CSTRING("resourceName"))));		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(26)
			Dynamic details = ::native::text::Font_obj::loadBytes(bytes);		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(27)
			this->fontName = details->__Field(HX_CSTRING("family_name"),true);
			HX_STACK_LINE(28)
			if (((bool(details->__Field(HX_CSTRING("is_bold"),true)) && bool(details->__Field(HX_CSTRING("is_italic"),true))))){
				HX_STACK_LINE(29)
				this->fontStyle = ::native::text::FontStyle_obj::BOLD_ITALIC;
			}
			else{
				HX_STACK_LINE(32)
				if ((details->__Field(HX_CSTRING("is_bold"),true))){
					HX_STACK_LINE(33)
					this->fontStyle = ::native::text::FontStyle_obj::BOLD;
				}
				else{
					HX_STACK_LINE(36)
					if ((details->__Field(HX_CSTRING("is_italic"),true))){
						HX_STACK_LINE(37)
						this->fontStyle = ::native::text::FontStyle_obj::ITALIC;
					}
					else{
						HX_STACK_LINE(41)
						this->fontStyle = ::native::text::FontStyle_obj::REGULAR;
					}
				}
			}
			HX_STACK_LINE(44)
			this->fontType = ::native::text::FontType_obj::EMBEDDED;
		}
		else{
			HX_STACK_LINE(46)
			::String className = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));		HX_STACK_VAR(className,"className");
			HX_STACK_LINE(47)
			this->fontName = className.split(HX_CSTRING("."))->pop();
			HX_STACK_LINE(48)
			this->fontStyle = ::native::text::FontStyle_obj::REGULAR;
			HX_STACK_LINE(49)
			this->fontType = ::native::text::FontType_obj::EMBEDDED;
		}
	}
	else{
		HX_STACK_LINE(54)
		this->fontName = inFilename;
		HX_STACK_LINE(55)
		this->fontStyle = (  (((inStyle == null()))) ? ::native::text::FontStyle(::native::text::FontStyle_obj::REGULAR) : ::native::text::FontStyle(inStyle) );
		HX_STACK_LINE(56)
		this->fontType = (  (((inType == null()))) ? ::native::text::FontType(::native::text::FontType_obj::EMBEDDED) : ::native::text::FontType(inType) );
	}
}
;
	return null();
}

Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String __o_inFilename,::native::text::FontStyle inStyle,::native::text::FontType inType)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(__o_inFilename,inStyle,inType);
	return result;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Font_obj::toString( ){
	HX_STACK_PUSH("Font::toString","native/text/Font.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return ((((((HX_CSTRING("{ name=") + this->fontName) + HX_CSTRING(", style=")) + ::Std_obj::string(this->fontStyle)) + HX_CSTRING(", type=")) + ::Std_obj::string(this->fontType)) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,toString,return )

Array< ::Dynamic > Font_obj::nmeRegisteredFonts;

Array< ::Dynamic > Font_obj::nmeDeviceFonts;

Array< ::Dynamic > Font_obj::enumerateFonts( hx::Null< bool >  __o_enumerateDeviceFonts){
bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
	HX_STACK_PUSH("Font::enumerateFonts","native/text/Font.hx",66);
	HX_STACK_ARG(enumerateDeviceFonts,"enumerateDeviceFonts");
{
		HX_STACK_LINE(67)
		Array< ::Dynamic > result = ::native::text::Font_obj::nmeRegisteredFonts->copy();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(68)
		if ((enumerateDeviceFonts)){
			HX_STACK_LINE(70)
			if (((::native::text::Font_obj::nmeDeviceFonts == null()))){
				HX_STACK_LINE(72)
				::native::text::Font_obj::nmeDeviceFonts = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(73)
				Array< ::Dynamic > styles = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new().Add(::native::text::FontStyle_obj::BOLD).Add(::native::text::FontStyle_obj::BOLD_ITALIC).Add(::native::text::FontStyle_obj::ITALIC).Add(::native::text::FontStyle_obj::REGULAR));		HX_STACK_VAR(styles,"styles");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,styles)
				Void run(::String name,int style){
					HX_STACK_PUSH("*::_Function_3_1","native/text/Font.hx",74);
					HX_STACK_ARG(name,"name");
					HX_STACK_ARG(style,"style");
					{
						HX_STACK_LINE(74)
						::native::text::Font_obj::nmeDeviceFonts->push(::native::text::Font_obj::__new(name,styles->__get((int)0).StaticCast< Array< ::Dynamic > >()->__get(style).StaticCast< ::native::text::FontStyle >(),::native::text::FontType_obj::DEVICE));
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				HX_STACK_LINE(74)
				::native::text::Font_obj::nme_font_iterate_device_fonts( Dynamic(new _Function_3_1(styles)));
			}
			HX_STACK_LINE(76)
			result = result->concat(::native::text::Font_obj::nmeDeviceFonts);
		}
		HX_STACK_LINE(79)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

Dynamic Font_obj::load( ::String inFilename){
	HX_STACK_PUSH("Font::load","native/text/Font.hx",83);
	HX_STACK_ARG(inFilename,"inFilename");
	HX_STACK_LINE(84)
	Dynamic result = ::native::text::Font_obj::freetype_import_font(inFilename,null(),(int)20480,null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(85)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,load,return )

Dynamic Font_obj::loadBytes( ::native::utils::ByteArray inBytes){
	HX_STACK_PUSH("Font::loadBytes","native/text/Font.hx",89);
	HX_STACK_ARG(inBytes,"inBytes");
	HX_STACK_LINE(90)
	Dynamic result = ::native::text::Font_obj::freetype_import_font(HX_CSTRING(""),null(),(int)20480,inBytes);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(91)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadBytes,return )

Void Font_obj::registerFont( ::Class font){
{
		HX_STACK_PUSH("Font::registerFont","native/text/Font.hx",95);
		HX_STACK_ARG(font,"font");
		HX_STACK_LINE(96)
		::native::text::Font instance = ::Type_obj::createInstance(font,Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("")).Add(null()).Add(null())));		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(97)
		if (((instance != null()))){
			HX_STACK_LINE(99)
			if ((::Reflect_obj::hasField(font,HX_CSTRING("resourceName")))){
				HX_STACK_LINE(100)
				::native::text::Font_obj::nme_font_register_font(instance->fontName,::native::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::Reflect_obj::field(font,HX_CSTRING("resourceName")))));
			}
			HX_STACK_LINE(103)
			::native::text::Font_obj::nmeRegisteredFonts->push(instance);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))

Dynamic Font_obj::freetype_import_font;

Dynamic Font_obj::nme_font_register_font;

Dynamic Font_obj::nme_font_iterate_device_fonts;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
}

Dynamic Font_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"fontType") ) { return fontType; }
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerFont") ) { return registerFont_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeDeviceFonts") ) { return nmeDeviceFonts; }
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { return enumerateFonts_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeRegisteredFonts") ) { return nmeRegisteredFonts; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { return freetype_import_font; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_font_register_font") ) { return nme_font_register_font; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_font_iterate_device_fonts") ) { return nme_font_iterate_device_fonts; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast< ::native::text::FontType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::native::text::FontStyle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeDeviceFonts") ) { nmeDeviceFonts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeRegisteredFonts") ) { nmeRegisteredFonts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { freetype_import_font=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_font_register_font") ) { nme_font_register_font=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_font_iterate_device_fonts") ) { nme_font_iterate_device_fonts=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fontType"));
	outFields->push(HX_CSTRING("fontStyle"));
	outFields->push(HX_CSTRING("fontName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nmeRegisteredFonts"),
	HX_CSTRING("nmeDeviceFonts"),
	HX_CSTRING("enumerateFonts"),
	HX_CSTRING("load"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("registerFont"),
	HX_CSTRING("freetype_import_font"),
	HX_CSTRING("nme_font_register_font"),
	HX_CSTRING("nme_font_iterate_device_fonts"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("fontType"),
	HX_CSTRING("fontStyle"),
	HX_CSTRING("fontName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::nmeRegisteredFonts,"nmeRegisteredFonts");
	HX_MARK_MEMBER_NAME(Font_obj::nmeDeviceFonts,"nmeDeviceFonts");
	HX_MARK_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_MARK_MEMBER_NAME(Font_obj::nme_font_register_font,"nme_font_register_font");
	HX_MARK_MEMBER_NAME(Font_obj::nme_font_iterate_device_fonts,"nme_font_iterate_device_fonts");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::nmeRegisteredFonts,"nmeRegisteredFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::nmeDeviceFonts,"nmeDeviceFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_VISIT_MEMBER_NAME(Font_obj::nme_font_register_font,"nme_font_register_font");
	HX_VISIT_MEMBER_NAME(Font_obj::nme_font_iterate_device_fonts,"nme_font_iterate_device_fonts");
};

Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.text.Font"), hx::TCanCast< Font_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Font_obj::__boot()
{
	nmeRegisteredFonts= Array_obj< ::Dynamic >::__new();
	freetype_import_font= ::native::Loader_obj::load(HX_CSTRING("freetype_import_font"),(int)4);
	nme_font_register_font= ::native::Loader_obj::load(HX_CSTRING("nme_font_register_font"),(int)2);
	nme_font_iterate_device_fonts= ::native::Loader_obj::load(HX_CSTRING("nme_font_iterate_device_fonts"),(int)1);
}

} // end namespace native
} // end namespace text
