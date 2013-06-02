#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
namespace haxe{
namespace io{

Void BytesBuffer_obj::__construct()
{
HX_STACK_PUSH("BytesBuffer::new","C:\\HaxeToolkit\\haxe/std/haxe/io/BytesBuffer.hx",42);
{
	HX_STACK_LINE(42)
	this->b = Array_obj< unsigned char >::__new();
}
;
	return null();
}

BytesBuffer_obj::~BytesBuffer_obj() { }

Dynamic BytesBuffer_obj::__CreateEmpty() { return  new BytesBuffer_obj; }
hx::ObjectPtr< BytesBuffer_obj > BytesBuffer_obj::__new()
{  hx::ObjectPtr< BytesBuffer_obj > result = new BytesBuffer_obj();
	result->__construct();
	return result;}

Dynamic BytesBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesBuffer_obj > result = new BytesBuffer_obj();
	result->__construct();
	return result;}

::haxe::io::Bytes BytesBuffer_obj::getBytes( ){
	HX_STACK_PUSH("BytesBuffer::getBytes","C:\\HaxeToolkit\\haxe/std/haxe/io/BytesBuffer.hx",123);
	HX_STACK_THIS(this);
	HX_STACK_LINE(139)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new(this->b->length,this->b);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(141)
	this->b = null();
	HX_STACK_LINE(142)
	return bytes;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesBuffer_obj,getBytes,return )


BytesBuffer_obj::BytesBuffer_obj()
{
}

void BytesBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesBuffer);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic BytesBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getBytes"),
	HX_CSTRING("b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesBuffer_obj::__mClass,"__mClass");
};

Class BytesBuffer_obj::__mClass;

void BytesBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.BytesBuffer"), hx::TCanCast< BytesBuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BytesBuffer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
