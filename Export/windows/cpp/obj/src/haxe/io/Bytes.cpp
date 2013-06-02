#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace haxe{
namespace io{

Void Bytes_obj::__construct(int length,Array< unsigned char > b)
{
HX_STACK_PUSH("Bytes::new","C:\\HaxeToolkit\\haxe/std/haxe/io/Bytes.hx",29);
{
	HX_STACK_LINE(30)
	this->length = length;
	HX_STACK_LINE(31)
	this->b = b;
}
;
	return null();
}

Bytes_obj::~Bytes_obj() { }

Dynamic Bytes_obj::__CreateEmpty() { return  new Bytes_obj; }
hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,Array< unsigned char > b)
{  hx::ObjectPtr< Bytes_obj > result = new Bytes_obj();
	result->__construct(length,b);
	return result;}

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bytes_obj > result = new Bytes_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::haxe::io::Bytes Bytes_obj::sub( int pos,int len){
	HX_STACK_PUSH("Bytes::sub","C:\\HaxeToolkit\\haxe/std/haxe/io/Bytes.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pos,"pos");
	HX_STACK_ARG(len,"len");
	HX_STACK_LINE(101)
	if (((bool((bool((pos < (int)0)) || bool((len < (int)0)))) || bool(((pos + len) > this->length))))){
		HX_STACK_LINE(101)
		hx::Throw (::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(121)
	return ::haxe::io::Bytes_obj::__new(len,this->b->slice(pos,(pos + len)));
}


HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,sub,return )

Void Bytes_obj::blit( int pos,::haxe::io::Bytes src,int srcpos,int len){
{
		HX_STACK_PUSH("Bytes::blit","C:\\HaxeToolkit\\haxe/std/haxe/io/Bytes.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pos,"pos");
		HX_STACK_ARG(src,"src");
		HX_STACK_ARG(srcpos,"srcpos");
		HX_STACK_ARG(len,"len");
		HX_STACK_LINE(70)
		if (((bool((bool((bool((bool((pos < (int)0)) || bool((srcpos < (int)0)))) || bool((len < (int)0)))) || bool(((pos + len) > this->length)))) || bool(((srcpos + len) > src->length))))){
			HX_STACK_LINE(70)
			hx::Throw (::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(84)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(85)
		Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(86)
		if (((bool((b1 == b2)) && bool((pos > srcpos))))){
			HX_STACK_LINE(87)
			int i = len;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(88)
			while(((i > (int)0))){
				HX_STACK_LINE(89)
				(i)--;
				HX_STACK_LINE(90)
				b1[(i + pos)] = b2->__get((i + srcpos));
			}
			HX_STACK_LINE(92)
			return null();
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			while(((_g < len))){
				HX_STACK_LINE(94)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(95)
				b1[(i + pos)] = b2->__get((i + srcpos));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bytes_obj,blit,(void))

::haxe::io::Bytes Bytes_obj::alloc( int length){
	HX_STACK_PUSH("Bytes::alloc","C:\\HaxeToolkit\\haxe/std/haxe/io/Bytes.hx",250);
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(260)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(261)
	if (((length > (int)0))){
		HX_STACK_LINE(261)
		a[(length - (int)1)] = (int)0;
	}
	HX_STACK_LINE(262)
	return ::haxe::io::Bytes_obj::__new(length,a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

::haxe::io::Bytes Bytes_obj::ofString( ::String s){
	HX_STACK_PUSH("Bytes::ofString","C:\\HaxeToolkit\\haxe/std/haxe/io/Bytes.hx",275);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(286)
	Array< unsigned char > a = Array_obj< unsigned char >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(287)
	::__hxcpp_bytes_of_string(a,s);
	HX_STACK_LINE(288)
	return ::haxe::io::Bytes_obj::__new(a->length,a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

::haxe::io::Bytes Bytes_obj::ofData( Array< unsigned char > b){
	HX_STACK_PUSH("Bytes::ofData","C:\\HaxeToolkit\\haxe/std/haxe/io/Bytes.hx",324);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(324)
	return ::haxe::io::Bytes_obj::__new(b->length,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )


Bytes_obj::Bytes_obj()
{
}

void Bytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bytes);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void Bytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic Bytes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return blit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { return ofData_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { return ofString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("ofString"),
	HX_CSTRING("ofData"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sub"),
	HX_CSTRING("blit"),
	HX_CSTRING("b"),
	HX_CSTRING("length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
};

Class Bytes_obj::__mClass;

void Bytes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Bytes"), hx::TCanCast< Bytes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bytes_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
