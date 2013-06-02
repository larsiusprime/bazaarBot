#include <hxcpp.h>

#ifndef INCLUDED_native_display_InterpolationMethod
#include <native/display/InterpolationMethod.h>
#endif
namespace native{
namespace display{

::native::display::InterpolationMethod InterpolationMethod_obj::LINEAR_RGB;

::native::display::InterpolationMethod InterpolationMethod_obj::RGB;

HX_DEFINE_CREATE_ENUM(InterpolationMethod_obj)

int InterpolationMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LINEAR_RGB")) return 1;
	if (inName==HX_CSTRING("RGB")) return 0;
	return super::__FindIndex(inName);
}

int InterpolationMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LINEAR_RGB")) return 0;
	if (inName==HX_CSTRING("RGB")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InterpolationMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LINEAR_RGB")) return LINEAR_RGB;
	if (inName==HX_CSTRING("RGB")) return RGB;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("RGB"),
	HX_CSTRING("LINEAR_RGB"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpolationMethod_obj::LINEAR_RGB,"LINEAR_RGB");
	HX_MARK_MEMBER_NAME(InterpolationMethod_obj::RGB,"RGB");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::LINEAR_RGB,"LINEAR_RGB");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::RGB,"RGB");
};

static ::String sMemberFields[] = { ::String(null()) };
Class InterpolationMethod_obj::__mClass;

Dynamic __Create_InterpolationMethod_obj() { return new InterpolationMethod_obj; }

void InterpolationMethod_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.InterpolationMethod"), hx::TCanCast< InterpolationMethod_obj >,sStaticFields,sMemberFields,
	&__Create_InterpolationMethod_obj, &__Create,
	&super::__SGetClass(), &CreateInterpolationMethod_obj, sMarkStatics, sVisitStatic);
}

void InterpolationMethod_obj::__boot()
{
hx::Static(LINEAR_RGB) = hx::CreateEnum< InterpolationMethod_obj >(HX_CSTRING("LINEAR_RGB"),1);
hx::Static(RGB) = hx::CreateEnum< InterpolationMethod_obj >(HX_CSTRING("RGB"),0);
}


} // end namespace native
} // end namespace display
