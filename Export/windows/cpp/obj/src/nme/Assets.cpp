#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_format_display_MovieClip
#include <format/display/MovieClip.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_native_media_SoundLoaderContext
#include <native/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_native_text_FontStyle
#include <native/text/FontStyle.h>
#endif
#ifndef INCLUDED_native_text_FontType
#include <native/text/FontType.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_nme_AssetType
#include <nme/AssetType.h>
#endif
#ifndef INCLUDED_nme_Assets
#include <nme/Assets.h>
#endif
namespace nme{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Assets_obj::cachedBitmapData;

Array< ::String > Assets_obj::id;

::haxe::ds::StringMap Assets_obj::library;

::haxe::ds::StringMap Assets_obj::path;

::haxe::ds::StringMap Assets_obj::type;

bool Assets_obj::initialized;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","nme/Assets.hx",61);
		HX_STACK_LINE(61)
		if ((!(::nme::Assets_obj::initialized))){
			HX_STACK_LINE(67)
			::nme::AssetData_obj::initialize();
			HX_STACK_LINE(71)
			::nme::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::native::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/Assets.hx",85);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(87)
		::nme::Assets_obj::initialize();
		HX_STACK_LINE(91)
		if (((bool(::nme::AssetData_obj::type->exists(id)) && bool((::nme::AssetData_obj::type->get(id) == ::nme::AssetType_obj::IMAGE))))){
			HX_STACK_LINE(91)
			if (((bool(useCache) && bool(::nme::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(93)
				return ::nme::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(109)
				::native::display::BitmapData data = ::native::display::BitmapData_obj::load(::nme::AssetData_obj::path->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(113)
				if ((useCache)){
					HX_STACK_LINE(113)
					::nme::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(119)
				return data;
			}
		}
		else{
			HX_STACK_LINE(123)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(125)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(126)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(128)
				if ((::nme::AssetData_obj::library->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(172)
					::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),174,HX_CSTRING("nme.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(178)
				::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),180,HX_CSTRING("nme.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(186)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::native::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/Assets.hx",197);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(199)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(203)
	if ((::nme::AssetData_obj::type->exists(id))){
		HX_STACK_LINE(203)
		return ::native::utils::ByteArray_obj::readFile(::nme::AssetData_obj::path->get(id));
	}
	else{
		HX_STACK_LINE(235)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),237,HX_CSTRING("nme.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(243)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::native::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/Assets.hx",254);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(256)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(260)
	if (((bool(::nme::AssetData_obj::type->exists(id)) && bool((::nme::AssetData_obj::type->get(id) == ::nme::AssetType_obj::FONT))))){
		HX_STACK_LINE(260)
		return ::native::text::Font_obj::__new(::nme::AssetData_obj::path->get(id),null(),null());
	}
	else{
		HX_STACK_LINE(272)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),274,HX_CSTRING("nme.Assets"),HX_CSTRING("getFont")));
	}
	HX_STACK_LINE(280)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::format::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","nme/Assets.hx",291);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(293)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(297)
	::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(298)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(300)
	if ((::nme::AssetData_obj::library->exists(libraryName))){
	}
	else{
		HX_STACK_LINE(344)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),346,HX_CSTRING("nme.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(352)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::native::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/Assets.hx",363);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(365)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(369)
	if ((::nme::AssetData_obj::type->exists(id))){
		HX_STACK_LINE(371)
		::nme::AssetType type = ::nme::AssetData_obj::type->get(id);		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(373)
		if (((bool((type == ::nme::AssetType_obj::SOUND)) || bool((type == ::nme::AssetType_obj::MUSIC))))){
			HX_STACK_LINE(373)
			return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::AssetData_obj::path->get(id)),null(),(type == ::nme::AssetType_obj::MUSIC));
		}
	}
	HX_STACK_LINE(393)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),393,HX_CSTRING("nme.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(397)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/Assets.hx",408);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(410)
	::native::utils::ByteArray bytes = ::nme::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(412)
	if (((bytes == null()))){
		HX_STACK_LINE(412)
		return null();
	}
	else{
		HX_STACK_LINE(416)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(412)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Array< ::String > Assets_obj::get_id( ){
	HX_STACK_PUSH("Assets::get_id","nme/Assets.hx",470);
	HX_STACK_LINE(472)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(474)
	Array< ::String > ids = Array_obj< ::String >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(478)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::nme::AssetData_obj::type->keys());  __it->hasNext(); ){
		::String key = __it->next();
		ids->push(key);
	}
	HX_STACK_LINE(486)
	return ids;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_id,return )

::haxe::ds::StringMap Assets_obj::get_library( ){
	HX_STACK_PUSH("Assets::get_library","nme/Assets.hx",491);
	HX_STACK_LINE(493)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(497)
	return ::nme::AssetData_obj::library;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_library,return )

::haxe::ds::StringMap Assets_obj::get_path( ){
	HX_STACK_PUSH("Assets::get_path","nme/Assets.hx",508);
	HX_STACK_LINE(510)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(514)
	return ::nme::AssetData_obj::path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_path,return )

::haxe::ds::StringMap Assets_obj::get_type( ){
	HX_STACK_PUSH("Assets::get_type","nme/Assets.hx",525);
	HX_STACK_LINE(527)
	::nme::Assets_obj::initialize();
	HX_STACK_LINE(531)
	return ::nme::AssetData_obj::type;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_type,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return inCallProp ? get_id() : id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return inCallProp ? get_path() : path; }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp ? get_type() : type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return inCallProp ? get_library() : library; }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return get_path_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"get_library") ) { return get_library_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("id"),
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMovieClip"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("get_id"),
	HX_CSTRING("get_library"),
	HX_CSTRING("get_path"),
	HX_CSTRING("get_type"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::id,"id");
	HX_MARK_MEMBER_NAME(Assets_obj::library,"library");
	HX_MARK_MEMBER_NAME(Assets_obj::path,"path");
	HX_MARK_MEMBER_NAME(Assets_obj::type,"type");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::id,"id");
	HX_VISIT_MEMBER_NAME(Assets_obj::library,"library");
	HX_VISIT_MEMBER_NAME(Assets_obj::path,"path");
	HX_VISIT_MEMBER_NAME(Assets_obj::type,"type");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace nme
