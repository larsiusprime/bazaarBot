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
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
namespace native{
namespace events{

Void MouseEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::native::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{
HX_STACK_PUSH("MouseEvent::new","native/events/MouseEvent.hx",46);
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
Float localX = __o_localX.Default(0);
Float localY = __o_localY.Default(0);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool buttonDown = __o_buttonDown.Default(false);
int delta = __o_delta.Default(0);
bool commandKey = __o_commandKey.Default(false);
int clickCount = __o_clickCount.Default(0);
{
	HX_STACK_LINE(47)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(49)
	this->localX = localX;
	HX_STACK_LINE(50)
	this->localY = localY;
	HX_STACK_LINE(51)
	this->relatedObject = relatedObject;
	HX_STACK_LINE(52)
	this->ctrlKey = ctrlKey;
	HX_STACK_LINE(53)
	this->altKey = altKey;
	HX_STACK_LINE(54)
	this->shiftKey = shiftKey;
	HX_STACK_LINE(55)
	this->buttonDown = buttonDown;
	HX_STACK_LINE(56)
	this->delta = delta;
	HX_STACK_LINE(57)
	this->commandKey = commandKey;
	HX_STACK_LINE(58)
	this->clickCount = clickCount;
}
;
	return null();
}

MouseEvent_obj::~MouseEvent_obj() { }

Dynamic MouseEvent_obj::__CreateEmpty() { return  new MouseEvent_obj; }
hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::native::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{  hx::ObjectPtr< MouseEvent_obj > result = new MouseEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_localX,__o_localY,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_buttonDown,__o_delta,__o_commandKey,__o_clickCount);
	return result;}

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEvent_obj > result = new MouseEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return result;}

Void MouseEvent_obj::updateAfterEvent( ){
{
		HX_STACK_PUSH("MouseEvent::updateAfterEvent","native/events/MouseEvent.hx",93);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,updateAfterEvent,(void))

::String MouseEvent_obj::toString( ){
	HX_STACK_PUSH("MouseEvent::toString","native/events/MouseEvent.hx",88);
	HX_STACK_THIS(this);
	HX_STACK_LINE(88)
	return ((((((((((((((((((((((HX_CSTRING("[MouseEvent type=") + this->get_type()) + HX_CSTRING(" bubbles=")) + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable=")) + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" localX=")) + this->localX) + HX_CSTRING(" localY=")) + this->localY) + HX_CSTRING(" relatedObject=")) + ::Std_obj::string(this->relatedObject)) + HX_CSTRING(" ctrlKey=")) + ::Std_obj::string(this->ctrlKey)) + HX_CSTRING(" altKey=")) + ::Std_obj::string(this->altKey)) + HX_CSTRING(" shiftKey=")) + ::Std_obj::string(this->shiftKey)) + HX_CSTRING(" buttonDown=")) + ::Std_obj::string(this->buttonDown)) + HX_CSTRING(" delta=")) + this->delta) + HX_CSTRING("]"));
}


::native::events::MouseEvent MouseEvent_obj::nmeCreateSimilar( ::String inType,::native::display::InteractiveObject related,::native::display::InteractiveObject targ){
	HX_STACK_PUSH("MouseEvent::nmeCreateSimilar","native/events/MouseEvent.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inType,"inType");
	HX_STACK_ARG(related,"related");
	HX_STACK_ARG(targ,"targ");
	HX_STACK_LINE(76)
	::native::events::MouseEvent result = ::native::events::MouseEvent_obj::__new(inType,this->get_bubbles(),this->get_cancelable(),this->localX,this->localY,(  (((related == null()))) ? ::native::display::InteractiveObject(this->relatedObject) : ::native::display::InteractiveObject(related) ),this->ctrlKey,this->altKey,this->shiftKey,this->buttonDown,this->delta,this->commandKey,this->clickCount);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(78)
	result->stageX = this->stageX;
	HX_STACK_LINE(79)
	result->stageY = this->stageY;
	HX_STACK_LINE(81)
	if (((targ != null()))){
		HX_STACK_LINE(82)
		result->set_target(targ);
	}
	HX_STACK_LINE(84)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(MouseEvent_obj,nmeCreateSimilar,return )

::native::events::Event MouseEvent_obj::clone( ){
	HX_STACK_PUSH("MouseEvent::clone","native/events/MouseEvent.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return ::native::events::MouseEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),this->localX,this->localY,this->relatedObject,this->ctrlKey,this->altKey,this->shiftKey,this->buttonDown,this->delta,this->commandKey,this->clickCount);
}


::String MouseEvent_obj::DOUBLE_CLICK;

::String MouseEvent_obj::CLICK;

::String MouseEvent_obj::MIDDLE_CLICK;

::String MouseEvent_obj::MIDDLE_MOUSE_DOWN;

::String MouseEvent_obj::MIDDLE_MOUSE_UP;

::String MouseEvent_obj::MOUSE_DOWN;

::String MouseEvent_obj::MOUSE_MOVE;

::String MouseEvent_obj::MOUSE_OUT;

::String MouseEvent_obj::MOUSE_OVER;

::String MouseEvent_obj::MOUSE_UP;

::String MouseEvent_obj::MOUSE_WHEEL;

::String MouseEvent_obj::RIGHT_CLICK;

::String MouseEvent_obj::RIGHT_MOUSE_DOWN;

::String MouseEvent_obj::RIGHT_MOUSE_UP;

::String MouseEvent_obj::ROLL_OUT;

::String MouseEvent_obj::ROLL_OVER;

int MouseEvent_obj::efLeftDown;

int MouseEvent_obj::efShiftDown;

int MouseEvent_obj::efCtrlDown;

int MouseEvent_obj::efAltDown;

int MouseEvent_obj::efCommandDown;

::native::events::MouseEvent MouseEvent_obj::nmeCreate( ::String inType,Dynamic inEvent,::native::geom::Point inLocal,::native::display::InteractiveObject inTarget){
	HX_STACK_PUSH("MouseEvent::nmeCreate","native/events/MouseEvent.hx",66);
	HX_STACK_ARG(inType,"inType");
	HX_STACK_ARG(inEvent,"inEvent");
	HX_STACK_ARG(inLocal,"inLocal");
	HX_STACK_ARG(inTarget,"inTarget");
	HX_STACK_LINE(67)
	int flags = inEvent->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(68)
	::native::events::MouseEvent evt = ::native::events::MouseEvent_obj::__new(inType,true,true,inLocal->x,inLocal->y,null(),(((int(flags) & int(::native::events::MouseEvent_obj::efCtrlDown))) != (int)0),(((int(flags) & int(::native::events::MouseEvent_obj::efAltDown))) != (int)0),(((int(flags) & int(::native::events::MouseEvent_obj::efShiftDown))) != (int)0),(((int(flags) & int(::native::events::MouseEvent_obj::efLeftDown))) != (int)0),(int)0,null(),(int)0);		HX_STACK_VAR(evt,"evt");
	HX_STACK_LINE(69)
	evt->stageX = inEvent->__Field(HX_CSTRING("x"),true);
	HX_STACK_LINE(70)
	evt->stageY = inEvent->__Field(HX_CSTRING("y"),true);
	HX_STACK_LINE(71)
	evt->set_target(inTarget);
	HX_STACK_LINE(72)
	return evt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MouseEvent_obj,nmeCreate,return )


MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(clickCount,"clickCount");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(clickCount,"clickCount");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MouseEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { return CLICK; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"localY") ) { return localY; }
		if (HX_FIELD_EQ(inName,"localX") ) { return localX; }
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { return MOUSE_UP; }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { return ROLL_OUT; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { return MOUSE_OUT; }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { return ROLL_OVER; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { return efAltDown; }
		if (HX_FIELD_EQ(inName,"nmeCreate") ) { return nmeCreate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { return MOUSE_DOWN; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { return MOUSE_MOVE; }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { return MOUSE_OVER; }
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { return efLeftDown; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { return efCtrlDown; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { return clickCount; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { return MOUSE_WHEEL; }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { return RIGHT_CLICK; }
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { return efShiftDown; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { return DOUBLE_CLICK; }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { return MIDDLE_CLICK; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { return efCommandDown; }
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { return RIGHT_MOUSE_UP; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { return MIDDLE_MOUSE_UP; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { return RIGHT_MOUSE_DOWN; }
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return updateAfterEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeCreateSimilar") ) { return nmeCreateSimilar_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { return MIDDLE_MOUSE_DOWN; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { MOUSE_UP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { ROLL_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { MOUSE_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { ROLL_OVER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { efAltDown=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { MOUSE_DOWN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { MOUSE_MOVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { MOUSE_OVER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { efLeftDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { efCtrlDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { clickCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { MOUSE_WHEEL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { RIGHT_CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { efShiftDown=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { DOUBLE_CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { MIDDLE_CLICK=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { efCommandDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::native::display::InteractiveObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { RIGHT_MOUSE_UP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { MIDDLE_MOUSE_UP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { RIGHT_MOUSE_DOWN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { MIDDLE_MOUSE_DOWN=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stageY"));
	outFields->push(HX_CSTRING("stageX"));
	outFields->push(HX_CSTRING("shiftKey"));
	outFields->push(HX_CSTRING("relatedObject"));
	outFields->push(HX_CSTRING("localY"));
	outFields->push(HX_CSTRING("localX"));
	outFields->push(HX_CSTRING("delta"));
	outFields->push(HX_CSTRING("ctrlKey"));
	outFields->push(HX_CSTRING("commandKey"));
	outFields->push(HX_CSTRING("clickCount"));
	outFields->push(HX_CSTRING("buttonDown"));
	outFields->push(HX_CSTRING("altKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DOUBLE_CLICK"),
	HX_CSTRING("CLICK"),
	HX_CSTRING("MIDDLE_CLICK"),
	HX_CSTRING("MIDDLE_MOUSE_DOWN"),
	HX_CSTRING("MIDDLE_MOUSE_UP"),
	HX_CSTRING("MOUSE_DOWN"),
	HX_CSTRING("MOUSE_MOVE"),
	HX_CSTRING("MOUSE_OUT"),
	HX_CSTRING("MOUSE_OVER"),
	HX_CSTRING("MOUSE_UP"),
	HX_CSTRING("MOUSE_WHEEL"),
	HX_CSTRING("RIGHT_CLICK"),
	HX_CSTRING("RIGHT_MOUSE_DOWN"),
	HX_CSTRING("RIGHT_MOUSE_UP"),
	HX_CSTRING("ROLL_OUT"),
	HX_CSTRING("ROLL_OVER"),
	HX_CSTRING("efLeftDown"),
	HX_CSTRING("efShiftDown"),
	HX_CSTRING("efCtrlDown"),
	HX_CSTRING("efAltDown"),
	HX_CSTRING("efCommandDown"),
	HX_CSTRING("nmeCreate"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateAfterEvent"),
	HX_CSTRING("toString"),
	HX_CSTRING("nmeCreateSimilar"),
	HX_CSTRING("clone"),
	HX_CSTRING("stageY"),
	HX_CSTRING("stageX"),
	HX_CSTRING("shiftKey"),
	HX_CSTRING("relatedObject"),
	HX_CSTRING("localY"),
	HX_CSTRING("localX"),
	HX_CSTRING("delta"),
	HX_CSTRING("ctrlKey"),
	HX_CSTRING("commandKey"),
	HX_CSTRING("clickCount"),
	HX_CSTRING("buttonDown"),
	HX_CSTRING("altKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efCommandDown,"efCommandDown");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efLeftDown,"efLeftDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efCommandDown,"efCommandDown");
};

Class MouseEvent_obj::__mClass;

void MouseEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.MouseEvent"), hx::TCanCast< MouseEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MouseEvent_obj::__boot()
{
	DOUBLE_CLICK= HX_CSTRING("doubleClick");
	CLICK= HX_CSTRING("click");
	MIDDLE_CLICK= HX_CSTRING("middleClick");
	MIDDLE_MOUSE_DOWN= HX_CSTRING("middleMouseDown");
	MIDDLE_MOUSE_UP= HX_CSTRING("middleMouseUp");
	MOUSE_DOWN= HX_CSTRING("mouseDown");
	MOUSE_MOVE= HX_CSTRING("mouseMove");
	MOUSE_OUT= HX_CSTRING("mouseOut");
	MOUSE_OVER= HX_CSTRING("mouseOver");
	MOUSE_UP= HX_CSTRING("mouseUp");
	MOUSE_WHEEL= HX_CSTRING("mouseWheel");
	RIGHT_CLICK= HX_CSTRING("rightClick");
	RIGHT_MOUSE_DOWN= HX_CSTRING("rightMouseDown");
	RIGHT_MOUSE_UP= HX_CSTRING("rightMouseUp");
	ROLL_OUT= HX_CSTRING("rollOut");
	ROLL_OVER= HX_CSTRING("rollOver");
	efLeftDown= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efCommandDown= (int)16;
}

} // end namespace native
} // end namespace events
