#include <hxcpp.h>

#ifndef INCLUDED_nme_AssetType
#include <nme/AssetType.h>
#endif
namespace nme{

::nme::AssetType AssetType_obj::BINARY;

::nme::AssetType AssetType_obj::FONT;

::nme::AssetType AssetType_obj::IMAGE;

::nme::AssetType AssetType_obj::MUSIC;

::nme::AssetType AssetType_obj::SOUND;

::nme::AssetType AssetType_obj::TEXT;

HX_DEFINE_CREATE_ENUM(AssetType_obj)

int AssetType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BINARY")) return 0;
	if (inName==HX_CSTRING("FONT")) return 1;
	if (inName==HX_CSTRING("IMAGE")) return 2;
	if (inName==HX_CSTRING("MUSIC")) return 3;
	if (inName==HX_CSTRING("SOUND")) return 4;
	if (inName==HX_CSTRING("TEXT")) return 5;
	return super::__FindIndex(inName);
}

int AssetType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BINARY")) return 0;
	if (inName==HX_CSTRING("FONT")) return 0;
	if (inName==HX_CSTRING("IMAGE")) return 0;
	if (inName==HX_CSTRING("MUSIC")) return 0;
	if (inName==HX_CSTRING("SOUND")) return 0;
	if (inName==HX_CSTRING("TEXT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic AssetType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BINARY")) return BINARY;
	if (inName==HX_CSTRING("FONT")) return FONT;
	if (inName==HX_CSTRING("IMAGE")) return IMAGE;
	if (inName==HX_CSTRING("MUSIC")) return MUSIC;
	if (inName==HX_CSTRING("SOUND")) return SOUND;
	if (inName==HX_CSTRING("TEXT")) return TEXT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BINARY"),
	HX_CSTRING("FONT"),
	HX_CSTRING("IMAGE"),
	HX_CSTRING("MUSIC"),
	HX_CSTRING("SOUND"),
	HX_CSTRING("TEXT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(AssetType_obj::FONT,"FONT");
	HX_MARK_MEMBER_NAME(AssetType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(AssetType_obj::MUSIC,"MUSIC");
	HX_MARK_MEMBER_NAME(AssetType_obj::SOUND,"SOUND");
	HX_MARK_MEMBER_NAME(AssetType_obj::TEXT,"TEXT");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(AssetType_obj::FONT,"FONT");
	HX_VISIT_MEMBER_NAME(AssetType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::MUSIC,"MUSIC");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SOUND,"SOUND");
	HX_VISIT_MEMBER_NAME(AssetType_obj::TEXT,"TEXT");
};

static ::String sMemberFields[] = { ::String(null()) };
Class AssetType_obj::__mClass;

Dynamic __Create_AssetType_obj() { return new AssetType_obj; }

void AssetType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.AssetType"), hx::TCanCast< AssetType_obj >,sStaticFields,sMemberFields,
	&__Create_AssetType_obj, &__Create,
	&super::__SGetClass(), &CreateAssetType_obj, sMarkStatics, sVisitStatic);
}

void AssetType_obj::__boot()
{
hx::Static(BINARY) = hx::CreateEnum< AssetType_obj >(HX_CSTRING("BINARY"),0);
hx::Static(FONT) = hx::CreateEnum< AssetType_obj >(HX_CSTRING("FONT"),1);
hx::Static(IMAGE) = hx::CreateEnum< AssetType_obj >(HX_CSTRING("IMAGE"),2);
hx::Static(MUSIC) = hx::CreateEnum< AssetType_obj >(HX_CSTRING("MUSIC"),3);
hx::Static(SOUND) = hx::CreateEnum< AssetType_obj >(HX_CSTRING("SOUND"),4);
hx::Static(TEXT) = hx::CreateEnum< AssetType_obj >(HX_CSTRING("TEXT"),5);
}


} // end namespace nme
