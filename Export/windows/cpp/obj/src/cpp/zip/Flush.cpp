#include <hxcpp.h>

#ifndef INCLUDED_cpp_zip_Flush
#include <cpp/zip/Flush.h>
#endif
namespace cpp{
namespace zip{

::cpp::zip::Flush Flush_obj::BLOCK;

::cpp::zip::Flush Flush_obj::FINISH;

::cpp::zip::Flush Flush_obj::FULL;

::cpp::zip::Flush Flush_obj::NO;

::cpp::zip::Flush Flush_obj::SYNC;

HX_DEFINE_CREATE_ENUM(Flush_obj)

int Flush_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BLOCK")) return 4;
	if (inName==HX_CSTRING("FINISH")) return 3;
	if (inName==HX_CSTRING("FULL")) return 2;
	if (inName==HX_CSTRING("NO")) return 0;
	if (inName==HX_CSTRING("SYNC")) return 1;
	return super::__FindIndex(inName);
}

int Flush_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BLOCK")) return 0;
	if (inName==HX_CSTRING("FINISH")) return 0;
	if (inName==HX_CSTRING("FULL")) return 0;
	if (inName==HX_CSTRING("NO")) return 0;
	if (inName==HX_CSTRING("SYNC")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Flush_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BLOCK")) return BLOCK;
	if (inName==HX_CSTRING("FINISH")) return FINISH;
	if (inName==HX_CSTRING("FULL")) return FULL;
	if (inName==HX_CSTRING("NO")) return NO;
	if (inName==HX_CSTRING("SYNC")) return SYNC;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NO"),
	HX_CSTRING("SYNC"),
	HX_CSTRING("FULL"),
	HX_CSTRING("FINISH"),
	HX_CSTRING("BLOCK"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Flush_obj::BLOCK,"BLOCK");
	HX_MARK_MEMBER_NAME(Flush_obj::FINISH,"FINISH");
	HX_MARK_MEMBER_NAME(Flush_obj::FULL,"FULL");
	HX_MARK_MEMBER_NAME(Flush_obj::NO,"NO");
	HX_MARK_MEMBER_NAME(Flush_obj::SYNC,"SYNC");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Flush_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Flush_obj::BLOCK,"BLOCK");
	HX_VISIT_MEMBER_NAME(Flush_obj::FINISH,"FINISH");
	HX_VISIT_MEMBER_NAME(Flush_obj::FULL,"FULL");
	HX_VISIT_MEMBER_NAME(Flush_obj::NO,"NO");
	HX_VISIT_MEMBER_NAME(Flush_obj::SYNC,"SYNC");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Flush_obj::__mClass;

Dynamic __Create_Flush_obj() { return new Flush_obj; }

void Flush_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.zip.Flush"), hx::TCanCast< Flush_obj >,sStaticFields,sMemberFields,
	&__Create_Flush_obj, &__Create,
	&super::__SGetClass(), &CreateFlush_obj, sMarkStatics, sVisitStatic);
}

void Flush_obj::__boot()
{
hx::Static(BLOCK) = hx::CreateEnum< Flush_obj >(HX_CSTRING("BLOCK"),4);
hx::Static(FINISH) = hx::CreateEnum< Flush_obj >(HX_CSTRING("FINISH"),3);
hx::Static(FULL) = hx::CreateEnum< Flush_obj >(HX_CSTRING("FULL"),2);
hx::Static(NO) = hx::CreateEnum< Flush_obj >(HX_CSTRING("NO"),0);
hx::Static(SYNC) = hx::CreateEnum< Flush_obj >(HX_CSTRING("SYNC"),1);
}


} // end namespace cpp
} // end namespace zip
