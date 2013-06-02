#include <hxcpp.h>

#ifndef INCLUDED_native_utils_CompressionAlgorithm
#include <native/utils/CompressionAlgorithm.h>
#endif
namespace native{
namespace utils{

::native::utils::CompressionAlgorithm CompressionAlgorithm_obj::DEFLATE;

::native::utils::CompressionAlgorithm CompressionAlgorithm_obj::GZIP;

::native::utils::CompressionAlgorithm CompressionAlgorithm_obj::LZMA;

::native::utils::CompressionAlgorithm CompressionAlgorithm_obj::ZLIB;

HX_DEFINE_CREATE_ENUM(CompressionAlgorithm_obj)

int CompressionAlgorithm_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DEFLATE")) return 0;
	if (inName==HX_CSTRING("GZIP")) return 3;
	if (inName==HX_CSTRING("LZMA")) return 2;
	if (inName==HX_CSTRING("ZLIB")) return 1;
	return super::__FindIndex(inName);
}

int CompressionAlgorithm_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DEFLATE")) return 0;
	if (inName==HX_CSTRING("GZIP")) return 0;
	if (inName==HX_CSTRING("LZMA")) return 0;
	if (inName==HX_CSTRING("ZLIB")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CompressionAlgorithm_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DEFLATE")) return DEFLATE;
	if (inName==HX_CSTRING("GZIP")) return GZIP;
	if (inName==HX_CSTRING("LZMA")) return LZMA;
	if (inName==HX_CSTRING("ZLIB")) return ZLIB;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("DEFLATE"),
	HX_CSTRING("ZLIB"),
	HX_CSTRING("LZMA"),
	HX_CSTRING("GZIP"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::DEFLATE,"DEFLATE");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::GZIP,"GZIP");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::LZMA,"LZMA");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_obj::ZLIB,"ZLIB");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::DEFLATE,"DEFLATE");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::GZIP,"GZIP");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::LZMA,"LZMA");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_obj::ZLIB,"ZLIB");
};

static ::String sMemberFields[] = { ::String(null()) };
Class CompressionAlgorithm_obj::__mClass;

Dynamic __Create_CompressionAlgorithm_obj() { return new CompressionAlgorithm_obj; }

void CompressionAlgorithm_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.utils.CompressionAlgorithm"), hx::TCanCast< CompressionAlgorithm_obj >,sStaticFields,sMemberFields,
	&__Create_CompressionAlgorithm_obj, &__Create,
	&super::__SGetClass(), &CreateCompressionAlgorithm_obj, sMarkStatics, sVisitStatic);
}

void CompressionAlgorithm_obj::__boot()
{
hx::Static(DEFLATE) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_CSTRING("DEFLATE"),0);
hx::Static(GZIP) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_CSTRING("GZIP"),3);
hx::Static(LZMA) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_CSTRING("LZMA"),2);
hx::Static(ZLIB) = hx::CreateEnum< CompressionAlgorithm_obj >(HX_CSTRING("ZLIB"),1);
}


} // end namespace native
} // end namespace utils
