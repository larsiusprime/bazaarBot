#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_KeyboardEvent
#include <native/events/KeyboardEvent.h>
#endif
namespace native{
namespace events{

Void KeyboardEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,hx::Null< int >  __o_keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue)
{
HX_STACK_PUSH("KeyboardEvent::new","native/events/KeyboardEvent.hx",19);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int charCodeValue = __o_charCodeValue.Default(0);
int keyCodeValue = __o_keyCodeValue.Default(0);
int keyLocationValue = __o_keyLocationValue.Default(0);
bool ctrlKeyValue = __o_ctrlKeyValue.Default(false);
bool altKeyValue = __o_altKeyValue.Default(false);
bool shiftKeyValue = __o_shiftKeyValue.Default(false);
bool controlKeyValue = __o_controlKeyValue.Default(false);
bool commandKeyValue = __o_commandKeyValue.Default(false);
{
	HX_STACK_LINE(20)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(22)
	this->keyCode = keyCodeValue;
	HX_STACK_LINE(23)
	this->keyLocation = keyLocationValue;
	HX_STACK_LINE(24)
	this->charCode = charCodeValue;
	HX_STACK_LINE(26)
	this->shiftKey = shiftKeyValue;
	HX_STACK_LINE(27)
	this->altKey = altKeyValue;
	HX_STACK_LINE(28)
	this->controlKey = controlKeyValue;
	HX_STACK_LINE(29)
	this->commandKey = commandKeyValue;
	HX_STACK_LINE(30)
	this->ctrlKey = (bool((bool(ctrlKeyValue) || bool(this->controlKey))) || bool(this->commandKey));
}
;
	return null();
}

KeyboardEvent_obj::~KeyboardEvent_obj() { }

Dynamic KeyboardEvent_obj::__CreateEmpty() { return  new KeyboardEvent_obj; }
hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,hx::Null< int >  __o_keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue)
{  hx::ObjectPtr< KeyboardEvent_obj > result = new KeyboardEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_charCodeValue,__o_keyCodeValue,__o_keyLocationValue,__o_ctrlKeyValue,__o_altKeyValue,__o_shiftKeyValue,__o_controlKeyValue,__o_commandKeyValue);
	return result;}

Dynamic KeyboardEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyboardEvent_obj > result = new KeyboardEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

::String KeyboardEvent_obj::toString( ){
	HX_STACK_PUSH("KeyboardEvent::toString","native/events/KeyboardEvent.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return ((((((((((((((((((HX_CSTRING("[KeyboardEvent type=") + this->get_type()) + HX_CSTRING(" bubbles=")) + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable=")) + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" charCode=")) + this->charCode) + HX_CSTRING(" keyCode=")) + this->keyCode) + HX_CSTRING(" keyLocation=")) + this->keyLocation) + HX_CSTRING(" ctrlKey=")) + ::Std_obj::string(this->ctrlKey)) + HX_CSTRING(" altKey=")) + ::Std_obj::string(this->altKey)) + HX_CSTRING(" shiftKey=")) + ::Std_obj::string(this->shiftKey)) + HX_CSTRING("]"));
}


::native::events::Event KeyboardEvent_obj::clone( ){
	HX_STACK_PUSH("KeyboardEvent::clone","native/events/KeyboardEvent.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return ::native::events::KeyboardEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),this->charCode,this->keyCode,this->keyLocation,this->ctrlKey,this->altKey,this->shiftKey,this->controlKey,this->commandKey);
}


::String KeyboardEvent_obj::KEY_DOWN;

::String KeyboardEvent_obj::KEY_UP;


KeyboardEvent_obj::KeyboardEvent_obj()
{
}

void KeyboardEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyboardEvent);
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(keyLocation,"keyLocation");
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(controlKey,"controlKey");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(charCode,"charCode");
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KeyboardEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(keyLocation,"keyLocation");
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(controlKey,"controlKey");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(charCode,"charCode");
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic KeyboardEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"KEY_UP") ) { return KEY_UP; }
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_DOWN") ) { return KEY_DOWN; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { return controlKey; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyLocation") ) { return keyLocation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyboardEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"KEY_UP") ) { KEY_UP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_DOWN") ) { KEY_DOWN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyLocation") ) { keyLocation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shiftKey"));
	outFields->push(HX_CSTRING("keyLocation"));
	outFields->push(HX_CSTRING("keyCode"));
	outFields->push(HX_CSTRING("commandKey"));
	outFields->push(HX_CSTRING("controlKey"));
	outFields->push(HX_CSTRING("ctrlKey"));
	outFields->push(HX_CSTRING("charCode"));
	outFields->push(HX_CSTRING("altKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("KEY_DOWN"),
	HX_CSTRING("KEY_UP"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("clone"),
	HX_CSTRING("shiftKey"),
	HX_CSTRING("keyLocation"),
	HX_CSTRING("keyCode"),
	HX_CSTRING("commandKey"),
	HX_CSTRING("controlKey"),
	HX_CSTRING("ctrlKey"),
	HX_CSTRING("charCode"),
	HX_CSTRING("altKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

Class KeyboardEvent_obj::__mClass;

void KeyboardEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.KeyboardEvent"), hx::TCanCast< KeyboardEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KeyboardEvent_obj::__boot()
{
	KEY_DOWN= HX_CSTRING("keyDown");
	KEY_UP= HX_CSTRING("keyUp");
}

} // end namespace native
} // end namespace events
