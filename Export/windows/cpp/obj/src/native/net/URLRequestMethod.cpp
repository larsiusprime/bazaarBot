#include <hxcpp.h>

#ifndef INCLUDED_native_net_URLRequestMethod
#include <native/net/URLRequestMethod.h>
#endif
namespace native{
namespace net{

Void URLRequestMethod_obj::__construct()
{
	return null();
}

URLRequestMethod_obj::~URLRequestMethod_obj() { }

Dynamic URLRequestMethod_obj::__CreateEmpty() { return  new URLRequestMethod_obj; }
hx::ObjectPtr< URLRequestMethod_obj > URLRequestMethod_obj::__new()
{  hx::ObjectPtr< URLRequestMethod_obj > result = new URLRequestMethod_obj();
	result->__construct();
	return result;}

Dynamic URLRequestMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequestMethod_obj > result = new URLRequestMethod_obj();
	result->__construct();
	return result;}


URLRequestMethod_obj::URLRequestMethod_obj()
{
}

void URLRequestMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequestMethod);
	HX_MARK_END_CLASS();
}

void URLRequestMethod_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic URLRequestMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequestMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequestMethod_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequestMethod_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequestMethod_obj::__mClass,"__mClass");
};

Class URLRequestMethod_obj::__mClass;

void URLRequestMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.net.URLRequestMethod"), hx::TCanCast< URLRequestMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void URLRequestMethod_obj::__boot()
{
}

} // end namespace native
} // end namespace net
