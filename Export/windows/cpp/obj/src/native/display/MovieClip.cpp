#include <hxcpp.h>

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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
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
namespace native{
namespace display{

Void MovieClip_obj::__construct()
{
HX_STACK_PUSH("MovieClip::new","native/display/MovieClip.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(17)
	this->mCurrentFrame = (int)0;
	HX_STACK_LINE(18)
	this->mTotalFrames = (int)0;
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

int MovieClip_obj::get_totalFrames( ){
	HX_STACK_PUSH("MovieClip::get_totalFrames","native/display/MovieClip.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return this->mTotalFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )

int MovieClip_obj::get_framesLoaded( ){
	HX_STACK_PUSH("MovieClip::get_framesLoaded","native/display/MovieClip.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->mTotalFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

int MovieClip_obj::get_currentFrame( ){
	HX_STACK_PUSH("MovieClip::get_currentFrame","native/display/MovieClip.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->mCurrentFrame;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

Void MovieClip_obj::stop( ){
{
		HX_STACK_PUSH("MovieClip::stop","native/display/MovieClip.hx",46);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

Void MovieClip_obj::prevFrame( ){
{
		HX_STACK_PUSH("MovieClip::prevFrame","native/display/MovieClip.hx",42);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::play( ){
{
		HX_STACK_PUSH("MovieClip::play","native/display/MovieClip.hx",38);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

::String MovieClip_obj::nmeGetType( ){
	HX_STACK_PUSH("MovieClip::nmeGetType","native/display/MovieClip.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return HX_CSTRING("MovieClip");
}


Void MovieClip_obj::nextFrame( ){
{
		HX_STACK_PUSH("MovieClip::nextFrame","native/display/MovieClip.hx",30);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_STACK_PUSH("MovieClip::gotoAndStop","native/display/MovieClip.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_ARG(scene,"scene");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_STACK_PUSH("MovieClip::gotoAndPlay","native/display/MovieClip.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_ARG(scene,"scene");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(mTotalFrames,"mTotalFrames");
	HX_MARK_MEMBER_NAME(mCurrentFrame,"mCurrentFrame");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mTotalFrames,"mTotalFrames");
	HX_VISIT_MEMBER_NAME(mCurrentFrame,"mCurrentFrame");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
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
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeGetType") ) { return nmeGetType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return inCallProp ? get_totalFrames() : totalFrames; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mTotalFrames") ) { return mTotalFrames; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return inCallProp ? get_framesLoaded() : framesLoaded; }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return inCallProp ? get_currentFrame() : currentFrame; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCurrentFrame") ) { return mCurrentFrame; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return get_totalFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return get_framesLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return get_currentFrame_dyn(); }
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
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mTotalFrames") ) { mTotalFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCurrentFrame") ) { mCurrentFrame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mTotalFrames"));
	outFields->push(HX_CSTRING("mCurrentFrame"));
	outFields->push(HX_CSTRING("totalFrames"));
	outFields->push(HX_CSTRING("framesLoaded"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("currentFrame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_totalFrames"),
	HX_CSTRING("get_framesLoaded"),
	HX_CSTRING("get_currentFrame"),
	HX_CSTRING("stop"),
	HX_CSTRING("prevFrame"),
	HX_CSTRING("play"),
	HX_CSTRING("nmeGetType"),
	HX_CSTRING("nextFrame"),
	HX_CSTRING("gotoAndStop"),
	HX_CSTRING("gotoAndPlay"),
	HX_CSTRING("mTotalFrames"),
	HX_CSTRING("mCurrentFrame"),
	HX_CSTRING("totalFrames"),
	HX_CSTRING("framesLoaded"),
	HX_CSTRING("enabled"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.MovieClip"), hx::TCanCast< MovieClip_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MovieClip_obj::__boot()
{
}

} // end namespace native
} // end namespace display
