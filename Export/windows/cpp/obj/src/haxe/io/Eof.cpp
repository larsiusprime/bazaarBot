#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
namespace haxe{
namespace io{

Void Eof_obj::__construct()
{
HX_STACK_PUSH("Eof::new","C:\\HaxeToolkit\\haxe/std/haxe/io/Eof.hx",28);
{
}
;
	return null();
}

Eof_obj::~Eof_obj() { }

Dynamic Eof_obj::__CreateEmpty() { return  new Eof_obj; }
hx::ObjectPtr< Eof_obj > Eof_obj::__new()
{  hx::ObjectPtr< Eof_obj > result = new Eof_obj();
	result->__construct();
	return result;}

Dynamic Eof_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Eof_obj > result = new Eof_obj();
	result->__construct();
	return result;}

::String Eof_obj::toString( ){
	HX_STACK_PUSH("Eof::toString","C:\\HaxeToolkit\\haxe/std/haxe/io/Eof.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	return HX_CSTRING("Eof");
}


HX_DEFINE_DYNAMIC_FUNC0(Eof_obj,toString,return )


Eof_obj::Eof_obj()
{
}

void Eof_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Eof);
	HX_MARK_END_CLASS();
}

void Eof_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Eof_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Eof_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Eof_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Eof_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Eof_obj::__mClass,"__mClass");
};

Class Eof_obj::__mClass;

void Eof_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Eof"), hx::TCanCast< Eof_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Eof_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
