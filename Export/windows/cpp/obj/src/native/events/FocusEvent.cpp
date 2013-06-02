#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_FocusEvent
#include <native/events/FocusEvent.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace native{
namespace events{

Void FocusEvent_obj::__construct(::String inType,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::native::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode,::String __o_direction)
{
HX_STACK_PUSH("FocusEvent::new","native/events/FocusEvent.hx",18);
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
int keyCode = __o_keyCode.Default(0);
::String direction = __o_direction.Default(HX_CSTRING("none"));
{
	HX_STACK_LINE(19)
	super::__construct(inType,bubbles,cancelable);
	HX_STACK_LINE(21)
	this->relatedObject = relatedObject;
	HX_STACK_LINE(22)
	this->keyCode = keyCode;
	HX_STACK_LINE(23)
	this->shiftKey = shiftKey;
}
;
	return null();
}

FocusEvent_obj::~FocusEvent_obj() { }

Dynamic FocusEvent_obj::__CreateEmpty() { return  new FocusEvent_obj; }
hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String inType,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::native::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode,::String __o_direction)
{  hx::ObjectPtr< FocusEvent_obj > result = new FocusEvent_obj();
	result->__construct(inType,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode,__o_direction);
	return result;}

Dynamic FocusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FocusEvent_obj > result = new FocusEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::String FocusEvent_obj::toString( ){
	HX_STACK_PUSH("FocusEvent::toString","native/events/FocusEvent.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_LINE(32)
	return ((((((((((((HX_CSTRING("[FocusEvent type=") + this->get_type()) + HX_CSTRING(" bubbles=")) + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable=")) + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" relatedObject=")) + ::Std_obj::string(this->relatedObject)) + HX_CSTRING(" shiftKey=")) + ::Std_obj::string(this->shiftKey)) + HX_CSTRING(" keyCode=")) + this->keyCode) + HX_CSTRING("]"));
}


::native::events::Event FocusEvent_obj::clone( ){
	HX_STACK_PUSH("FocusEvent::clone","native/events/FocusEvent.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return ::native::events::FocusEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),this->relatedObject,this->shiftKey,this->keyCode,null());
}


::String FocusEvent_obj::FOCUS_IN;

::String FocusEvent_obj::FOCUS_OUT;

::String FocusEvent_obj::KEY_FOCUS_CHANGE;

::String FocusEvent_obj::MOUSE_FOCUS_CHANGE;


FocusEvent_obj::FocusEvent_obj()
{
}

void FocusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusEvent);
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FocusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FocusEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FOCUS_IN") ) { return FOCUS_IN; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FOCUS_OUT") ) { return FOCUS_OUT; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"KEY_FOCUS_CHANGE") ) { return KEY_FOCUS_CHANGE; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_FOCUS_CHANGE") ) { return MOUSE_FOCUS_CHANGE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FocusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FOCUS_IN") ) { FOCUS_IN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FOCUS_OUT") ) { FOCUS_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::native::display::InteractiveObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"KEY_FOCUS_CHANGE") ) { KEY_FOCUS_CHANGE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_FOCUS_CHANGE") ) { MOUSE_FOCUS_CHANGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shiftKey"));
	outFields->push(HX_CSTRING("relatedObject"));
	outFields->push(HX_CSTRING("keyCode"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FOCUS_IN"),
	HX_CSTRING("FOCUS_OUT"),
	HX_CSTRING("KEY_FOCUS_CHANGE"),
	HX_CSTRING("MOUSE_FOCUS_CHANGE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("clone"),
	HX_CSTRING("shiftKey"),
	HX_CSTRING("relatedObject"),
	HX_CSTRING("keyCode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

Class FocusEvent_obj::__mClass;

void FocusEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.FocusEvent"), hx::TCanCast< FocusEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FocusEvent_obj::__boot()
{
	FOCUS_IN= HX_CSTRING("focusIn");
	FOCUS_OUT= HX_CSTRING("focusOut");
	KEY_FOCUS_CHANGE= HX_CSTRING("keyFocusChange");
	MOUSE_FOCUS_CHANGE= HX_CSTRING("mouseFocusChange");
}

} // end namespace native
} // end namespace events
