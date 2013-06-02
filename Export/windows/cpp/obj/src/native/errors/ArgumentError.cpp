#include <hxcpp.h>

#ifndef INCLUDED_native_errors_ArgumentError
#include <native/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
namespace native{
namespace errors{

Void ArgumentError_obj::__construct(Dynamic inMessage,Dynamic id)
{
HX_STACK_PUSH("ArgumentError::new","native/errors/ArgumentError.hx",4);
{
	HX_STACK_LINE(4)
	super::__construct(inMessage,id);
}
;
	return null();
}

ArgumentError_obj::~ArgumentError_obj() { }

Dynamic ArgumentError_obj::__CreateEmpty() { return  new ArgumentError_obj; }
hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__new(Dynamic inMessage,Dynamic id)
{  hx::ObjectPtr< ArgumentError_obj > result = new ArgumentError_obj();
	result->__construct(inMessage,id);
	return result;}

Dynamic ArgumentError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArgumentError_obj > result = new ArgumentError_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


ArgumentError_obj::ArgumentError_obj()
{
}

void ArgumentError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArgumentError);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArgumentError_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ArgumentError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ArgumentError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArgumentError_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

Class ArgumentError_obj::__mClass;

void ArgumentError_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.errors.ArgumentError"), hx::TCanCast< ArgumentError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ArgumentError_obj::__boot()
{
}

} // end namespace native
} // end namespace errors
