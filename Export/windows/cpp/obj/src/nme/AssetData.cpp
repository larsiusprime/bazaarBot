#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_nme_AssetType
#include <nme/AssetType.h>
#endif
namespace nme{

Void AssetData_obj::__construct()
{
	return null();
}

AssetData_obj::~AssetData_obj() { }

Dynamic AssetData_obj::__CreateEmpty() { return  new AssetData_obj; }
hx::ObjectPtr< AssetData_obj > AssetData_obj::__new()
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

Dynamic AssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap AssetData_obj::library;

::haxe::ds::StringMap AssetData_obj::path;

::haxe::ds::StringMap AssetData_obj::type;

bool AssetData_obj::initialized;

Void AssetData_obj::initialize( ){
{
		HX_STACK_PUSH("AssetData::initialize","nme/AssetData.hx",17);
		HX_STACK_LINE(17)
		if ((!(::nme::AssetData_obj::initialized))){
			HX_STACK_LINE(21)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/nme.png"),HX_CSTRING("assets/nme.png"));
			HX_STACK_LINE(22)
			{
				HX_STACK_LINE(22)
				::nme::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::nme::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(22)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/nme.png"),value);
			}
			HX_STACK_LINE(25)
			::nme::AssetData_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AssetData_obj,initialize,(void))


AssetData_obj::AssetData_obj()
{
}

void AssetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetData);
	HX_MARK_END_CLASS();
}

void AssetData_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AssetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return library; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetData_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetData_obj::library,"library");
	HX_MARK_MEMBER_NAME(AssetData_obj::path,"path");
	HX_MARK_MEMBER_NAME(AssetData_obj::type,"type");
	HX_MARK_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetData_obj::library,"library");
	HX_VISIT_MEMBER_NAME(AssetData_obj::path,"path");
	HX_VISIT_MEMBER_NAME(AssetData_obj::type,"type");
	HX_VISIT_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

Class AssetData_obj::__mClass;

void AssetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.AssetData"), hx::TCanCast< AssetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetData_obj::__boot()
{
	library= ::haxe::ds::StringMap_obj::__new();
	path= ::haxe::ds::StringMap_obj::__new();
	type= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace nme
