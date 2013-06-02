#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

::String Input_obj::readLine( ){
	HX_STACK_PUSH("Input::readLine","C:\\HaxeToolkit\\haxe/std/haxe/io/Input.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(129)
	int last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(130)
	::String s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(131)
	try{
		HX_STACK_LINE(132)
		while((((last = this->readByte()) != (int)10))){
			HX_STACK_LINE(133)
			buf->b->push(::String::fromCharCode(last));
		}
		HX_STACK_LINE(134)
		s = buf->b->join(HX_CSTRING(""));
		HX_STACK_LINE(135)
		if (((s.charCodeAt((s.length - (int)1)) == (int)13))){
			HX_STACK_LINE(135)
			s = s.substr((int)0,(int)-1);
		}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(137)
				s = buf->b->join(HX_CSTRING(""));
				HX_STACK_LINE(138)
				if (((s.length == (int)0))){
					HX_STACK_LINE(139)
					hx::Throw (e);
				}
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(141)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )

Void Input_obj::close( ){
{
		HX_STACK_PUSH("Input::close","C:\\HaxeToolkit\\haxe/std/haxe/io/Input.hx",67);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

int Input_obj::readByte( ){
	HX_STACK_PUSH("Input::readByte","C:\\HaxeToolkit\\haxe/std/haxe/io/Input.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	hx::Throw (HX_CSTRING("Not implemented"));
	HX_STACK_LINE(40)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readLine"),
	HX_CSTRING("close"),
	HX_CSTRING("readByte"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Input_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
