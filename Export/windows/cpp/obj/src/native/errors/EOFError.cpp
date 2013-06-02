#include <hxcpp.h>

#ifndef INCLUDED_native_errors_EOFError
#include <native/errors/EOFError.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
namespace native{
namespace errors{

Void EOFError_obj::__construct()
{
HX_STACK_PUSH("EOFError::new","native/errors/EOFError.hx",7);
{
	HX_STACK_LINE(7)
	super::__construct(HX_CSTRING("End of file was encountered"),(int)2030);
}
;
	return null();
}

EOFError_obj::~EOFError_obj() { }

Dynamic EOFError_obj::__CreateEmpty() { return  new EOFError_obj; }
hx::ObjectPtr< EOFError_obj > EOFError_obj::__new()
{  hx::ObjectPtr< EOFError_obj > result = new EOFError_obj();
	result->__construct();
	return result;}

Dynamic EOFError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EOFError_obj > result = new EOFError_obj();
	result->__construct();
	return result;}


EOFError_obj::EOFError_obj()
{
}

void EOFError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EOFError);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EOFError_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EOFError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic EOFError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EOFError_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

Class EOFError_obj::__mClass;

void EOFError_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.errors.EOFError"), hx::TCanCast< EOFError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EOFError_obj::__boot()
{
}

} // end namespace native
} // end namespace errors
