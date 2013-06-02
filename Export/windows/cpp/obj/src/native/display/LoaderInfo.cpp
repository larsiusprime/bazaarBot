#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_native_display_Loader
#include <native/display/Loader.h>
#endif
#ifndef INCLUDED_native_display_LoaderInfo
#include <native/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_net_URLLoader
#include <native/net/URLLoader.h>
#endif
#ifndef INCLUDED_native_net_URLLoaderDataFormat
#include <native/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
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
namespace native{
namespace display{

Void LoaderInfo_obj::__construct()
{
HX_STACK_PUSH("LoaderInfo::new","native/display/LoaderInfo.hx",31);
{
	HX_STACK_LINE(32)
	super::__construct(null());
	HX_STACK_LINE(34)
	this->childAllowsParent = true;
	HX_STACK_LINE(35)
	this->frameRate = (int)0;
	HX_STACK_LINE(36)
	this->dataFormat = ::native::net::URLLoaderDataFormat_obj::BINARY;
	HX_STACK_LINE(37)
	this->loaderURL = null();
	HX_STACK_LINE(39)
	this->addEventListener(::native::events::Event_obj::COMPLETE,this->onURLLoaded_dyn(),null(),null(),null());
}
;
	return null();
}

LoaderInfo_obj::~LoaderInfo_obj() { }

Dynamic LoaderInfo_obj::__CreateEmpty() { return  new LoaderInfo_obj; }
hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__new()
{  hx::ObjectPtr< LoaderInfo_obj > result = new LoaderInfo_obj();
	result->__construct();
	return result;}

Dynamic LoaderInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderInfo_obj > result = new LoaderInfo_obj();
	result->__construct();
	return result;}

::native::utils::ByteArray LoaderInfo_obj::get_bytes( ){
	HX_STACK_PUSH("LoaderInfo::get_bytes","native/display/LoaderInfo.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(LoaderInfo_obj,get_bytes,return )

Void LoaderInfo_obj::onURLLoaded( ::native::events::Event event){
{
		HX_STACK_PUSH("LoaderInfo::onURLLoaded","native/display/LoaderInfo.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(80)
		this->url = this->pendingURL;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,onURLLoaded,(void))

Void LoaderInfo_obj::load( ::native::net::URLRequest request){
{
		HX_STACK_PUSH("LoaderInfo::load","native/display/LoaderInfo.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_ARG(request,"request");
		HX_STACK_LINE(59)
		this->pendingURL = request->url;
		HX_STACK_LINE(60)
		int dot = this->pendingURL.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(61)
		::String extension = (  (((dot > (int)0))) ? ::String(this->pendingURL.substr((dot + (int)1),null()).toLowerCase()) : ::String(HX_CSTRING("")) );		HX_STACK_VAR(extension,"extension");
		struct _Function_1_1{
			inline static ::String Block( ::String &extension,::native::display::LoaderInfo_obj *__this){
				HX_STACK_PUSH("*::closure","native/display/LoaderInfo.hx",63);
				{
					HX_STACK_LINE(63)
					::String _switch_1 = (extension);
					if (  ( _switch_1==HX_CSTRING("swf"))){
						HX_STACK_LINE(65)
						return HX_CSTRING("application/x-shockwave-flash");
					}
					else if (  ( _switch_1==HX_CSTRING("jpg")) ||  ( _switch_1==HX_CSTRING("jpeg"))){
						HX_STACK_LINE(66)
						return HX_CSTRING("image/jpeg");
					}
					else if (  ( _switch_1==HX_CSTRING("png"))){
						HX_STACK_LINE(67)
						return HX_CSTRING("image/png");
					}
					else if (  ( _switch_1==HX_CSTRING("gif"))){
						HX_STACK_LINE(68)
						return HX_CSTRING("image/gif");
					}
					else  {
						HX_STACK_LINE(69)
						return hx::Throw ((HX_CSTRING("Unrecognized file ") + __this->pendingURL));
					}
;
;
				}
				return null();
			}
		};
		HX_STACK_LINE(63)
		this->contentType = _Function_1_1::Block(extension,this);
		HX_STACK_LINE(73)
		this->url = null();
		HX_STACK_LINE(75)
		this->super::load(request);
	}
return null();
}


::native::display::LoaderInfo LoaderInfo_obj::create( ::native::display::Loader ldr){
	HX_STACK_PUSH("LoaderInfo::create","native/display/LoaderInfo.hx",43);
	HX_STACK_ARG(ldr,"ldr");
	HX_STACK_LINE(44)
	::native::display::LoaderInfo li = ::native::display::LoaderInfo_obj::__new();		HX_STACK_VAR(li,"li");
	HX_STACK_LINE(45)
	li->loader = ldr;
	HX_STACK_LINE(47)
	if (((ldr == null()))){
		HX_STACK_LINE(47)
		li->url = HX_CSTRING("");
	}
	HX_STACK_LINE(53)
	return li;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,create,return )


LoaderInfo_obj::LoaderInfo_obj()
{
}

void LoaderInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderInfo);
	HX_MARK_MEMBER_NAME(pendingURL,"pendingURL");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_MARK_MEMBER_NAME(sameDomain,"sameDomain");
	HX_MARK_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_MEMBER_NAME(loaderURL,"loaderURL");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pendingURL,"pendingURL");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_VISIT_MEMBER_NAME(sameDomain,"sameDomain");
	HX_VISIT_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
	HX_VISIT_MEMBER_NAME(loaderURL,"loaderURL");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LoaderInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"bytes") ) { return inCallProp ? get_bytes() : bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_bytes") ) { return get_bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { return loaderURL; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pendingURL") ) { return pendingURL; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { return sameDomain; }
		if (HX_FIELD_EQ(inName,"parameters") ) { return parameters; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onURLLoaded") ) { return onURLLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { return sharedEvents; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { return parentAllowsChild; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { return childAllowsParent; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoaderInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::native::utils::ByteArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::native::display::Loader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::native::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loaderURL") ) { loaderURL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pendingURL") ) { pendingURL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { sameDomain=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { sharedEvents=inValue.Cast< ::native::events::EventDispatcher >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { parentAllowsChild=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { childAllowsParent=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pendingURL"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("sharedEvents"));
	outFields->push(HX_CSTRING("sameDomain"));
	outFields->push(HX_CSTRING("parentAllowsChild"));
	outFields->push(HX_CSTRING("parameters"));
	outFields->push(HX_CSTRING("loaderURL"));
	outFields->push(HX_CSTRING("loader"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("contentType"));
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("childAllowsParent"));
	outFields->push(HX_CSTRING("bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_bytes"),
	HX_CSTRING("onURLLoaded"),
	HX_CSTRING("load"),
	HX_CSTRING("pendingURL"),
	HX_CSTRING("width"),
	HX_CSTRING("url"),
	HX_CSTRING("sharedEvents"),
	HX_CSTRING("sameDomain"),
	HX_CSTRING("parentAllowsChild"),
	HX_CSTRING("parameters"),
	HX_CSTRING("loaderURL"),
	HX_CSTRING("loader"),
	HX_CSTRING("height"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("contentType"),
	HX_CSTRING("content"),
	HX_CSTRING("childAllowsParent"),
	HX_CSTRING("bytes"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

Class LoaderInfo_obj::__mClass;

void LoaderInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.LoaderInfo"), hx::TCanCast< LoaderInfo_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LoaderInfo_obj::__boot()
{
}

} // end namespace native
} // end namespace display
