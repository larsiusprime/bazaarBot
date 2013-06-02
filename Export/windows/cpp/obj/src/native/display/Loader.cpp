#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
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
#ifndef INCLUDED_native_display_Loader
#include <native/display/Loader.h>
#endif
#ifndef INCLUDED_native_display_LoaderInfo
#include <native/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
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
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_system_LoaderContext
#include <native/system/LoaderContext.h>
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

Void Loader_obj::__construct()
{
HX_STACK_PUSH("Loader::new","native/display/Loader.hx",26);
{
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	this->contentLoaderInfo = ::native::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(31)
	this->contentLoaderInfo->nmeOnComplete = this->doLoad_dyn();
}
;
	return null();
}

Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Void Loader_obj::onData( ::native::events::Event event){
{
		HX_STACK_PUSH("Loader::onData","native/display/Loader.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(114)
		event->stopImmediatePropagation();
		HX_STACK_LINE(115)
		this->doLoad(this->contentLoaderInfo->get_bytes());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,onData,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_PUSH("Loader::unload","native/display/Loader.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_LINE(88)
		if (((this->get_numChildren() > (int)0))){
			HX_STACK_LINE(91)
			while(((this->get_numChildren() > (int)0))){
				HX_STACK_LINE(92)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(98)
				this->contentLoaderInfo->url = null();
				HX_STACK_LINE(99)
				this->contentLoaderInfo->contentType = null();
				HX_STACK_LINE(100)
				this->contentLoaderInfo->content = null();
				HX_STACK_LINE(101)
				this->contentLoaderInfo->bytesLoaded = this->contentLoaderInfo->bytesTotal = (int)0;
				HX_STACK_LINE(102)
				this->contentLoaderInfo->width = (int)0;
				HX_STACK_LINE(103)
				this->contentLoaderInfo->height = (int)0;
			}
			HX_STACK_LINE(105)
			::native::events::Event event = ::native::events::Event_obj::__new(::native::events::Event_obj::UNLOAD,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(106)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(107)
			this->dispatchEvent(event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Void Loader_obj::loadBytes( ::native::utils::ByteArray bytes,::native::system::LoaderContext context){
{
		HX_STACK_PUSH("Loader::loadBytes","native/display/Loader.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bytes,"bytes");
		HX_STACK_ARG(context,"context");
		HX_STACK_LINE(76)
		if ((this->doLoad(bytes))){
			HX_STACK_LINE(79)
			::native::events::Event event = ::native::events::Event_obj::__new(::native::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(80)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(81)
			this->contentLoaderInfo->dispatchEvent(event);
		}
		else{
			HX_STACK_LINE(82)
			this->contentLoaderInfo->DispatchIOErrorEvent();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

Void Loader_obj::load( ::native::net::URLRequest request,::native::system::LoaderContext context){
{
		HX_STACK_PUSH("Loader::load","native/display/Loader.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_ARG(request,"request");
		HX_STACK_ARG(context,"context");
		HX_STACK_LINE(70)
		this->contentLoaderInfo->load(request);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

bool Loader_obj::doLoad( ::native::utils::ByteArray inBytes){
	HX_STACK_PUSH("Loader::doLoad","native/display/Loader.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inBytes,"inBytes");
	HX_STACK_LINE(36)
	if (((inBytes == null()))){
		HX_STACK_LINE(37)
		return false;
	}
	HX_STACK_LINE(47)
	try{
		HX_STACK_LINE(49)
		this->nmeImage = ::native::display::BitmapData_obj::loadFromBytes(inBytes,null());
		HX_STACK_LINE(50)
		::native::display::Bitmap bmp = ::native::display::Bitmap_obj::__new(this->nmeImage,null(),null());		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(51)
		this->content = bmp;
		HX_STACK_LINE(52)
		this->contentLoaderInfo->content = bmp;
		HX_STACK_LINE(54)
		while(((this->get_numChildren() > (int)0))){
			HX_STACK_LINE(55)
			this->removeChildAt((int)0);
		}
		HX_STACK_LINE(59)
		this->addChild(bmp);
		HX_STACK_LINE(60)
		return true;
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(63)
				return false;
			}
		}
	}
	HX_STACK_LINE(47)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,doLoad,return )


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(nmeImage,"nmeImage");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(content,"content");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeImage,"nmeImage");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(content,"content");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onData") ) { return onData_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"doLoad") ) { return doLoad_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeImage") ) { return nmeImage; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::native::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeImage") ) { nmeImage=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::native::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeImage"));
	outFields->push(HX_CSTRING("contentLoaderInfo"));
	outFields->push(HX_CSTRING("content"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onData"),
	HX_CSTRING("unload"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("load"),
	HX_CSTRING("doLoad"),
	HX_CSTRING("nmeImage"),
	HX_CSTRING("contentLoaderInfo"),
	HX_CSTRING("content"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Loader_obj::__boot()
{
}

} // end namespace native
} // end namespace display
