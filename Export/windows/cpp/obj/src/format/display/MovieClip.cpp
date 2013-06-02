#include <hxcpp.h>

#ifndef INCLUDED_format_display_FrameLabel
#include <format/display/FrameLabel.h>
#endif
#ifndef INCLUDED_format_display_MovieClip
#include <format/display/MovieClip.h>
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
namespace format{
namespace display{

Void MovieClip_obj::__construct()
{
HX_STACK_PUSH("MovieClip::new","format/display/MovieClip.hx",34);
{
	HX_STACK_LINE(34)
	super::__construct();
}
;
	return null();
}

MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct();
	return result;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct();
	return result;}

Void MovieClip_obj::unflatten( ){
{
		HX_STACK_PUSH("MovieClip::unflatten","format/display/MovieClip.hx",97);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,unflatten,(void))

Void MovieClip_obj::stop( ){
{
		HX_STACK_PUSH("MovieClip::stop","format/display/MovieClip.hx",90);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

Void MovieClip_obj::prevFrame( ){
{
		HX_STACK_PUSH("MovieClip::prevFrame","format/display/MovieClip.hx",83);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::play( ){
{
		HX_STACK_PUSH("MovieClip::play","format/display/MovieClip.hx",76);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::nextFrame( ){
{
		HX_STACK_PUSH("MovieClip::nextFrame","format/display/MovieClip.hx",62);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_STACK_PUSH("MovieClip::gotoAndStop","format/display/MovieClip.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_ARG(scene,"scene");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_STACK_PUSH("MovieClip::gotoAndPlay","format/display/MovieClip.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_ARG(scene,"scene");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

Void MovieClip_obj::flatten( ){
{
		HX_STACK_PUSH("MovieClip::flatten","format/display/MovieClip.hx",41);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,flatten,(void))


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(currentLabels,"currentLabels");
	HX_MARK_MEMBER_NAME(currentLabel,"currentLabel");
	HX_MARK_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(currentLabels,"currentLabels");
	HX_VISIT_MEMBER_NAME(currentLabel,"currentLabel");
	HX_VISIT_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MovieClip_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatten") ) { return flatten_dyn(); }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unflatten") ) { return unflatten_dyn(); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { return trackAsMenu; }
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return totalFrames; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return framesLoaded; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { return currentLabel; }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return currentFrame; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { return currentLabels; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { return currentFrameLabel; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { trackAsMenu=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { currentLabels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("trackAsMenu"));
	outFields->push(HX_CSTRING("totalFrames"));
	outFields->push(HX_CSTRING("framesLoaded"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("currentLabels"));
	outFields->push(HX_CSTRING("currentLabel"));
	outFields->push(HX_CSTRING("currentFrameLabel"));
	outFields->push(HX_CSTRING("currentFrame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unflatten"),
	HX_CSTRING("stop"),
	HX_CSTRING("prevFrame"),
	HX_CSTRING("play"),
	HX_CSTRING("nextFrame"),
	HX_CSTRING("gotoAndStop"),
	HX_CSTRING("gotoAndPlay"),
	HX_CSTRING("flatten"),
	HX_CSTRING("trackAsMenu"),
	HX_CSTRING("totalFrames"),
	HX_CSTRING("framesLoaded"),
	HX_CSTRING("enabled"),
	HX_CSTRING("currentLabels"),
	HX_CSTRING("currentLabel"),
	HX_CSTRING("currentFrameLabel"),
	HX_CSTRING("currentFrame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.display.MovieClip"), hx::TCanCast< MovieClip_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MovieClip_obj::__boot()
{
}

} // end namespace format
} // end namespace display
