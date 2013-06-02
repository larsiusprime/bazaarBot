#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_events_ErrorEvent
#include <native/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_SystemEvent
#include <native/events/SystemEvent.h>
#endif
#ifndef INCLUDED_native_events_TextEvent
#include <native/events/TextEvent.h>
#endif
namespace native{
namespace events{

Void SystemEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_data)
{
HX_STACK_PUSH("SystemEvent::new","native/events/SystemEvent.hx",11);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int data = __o_data.Default(0);
{
	HX_STACK_LINE(12)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(13)
	this->data = data;
}
;
	return null();
}

SystemEvent_obj::~SystemEvent_obj() { }

Dynamic SystemEvent_obj::__CreateEmpty() { return  new SystemEvent_obj; }
hx::ObjectPtr< SystemEvent_obj > SystemEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_data)
{  hx::ObjectPtr< SystemEvent_obj > result = new SystemEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_data);
	return result;}

Dynamic SystemEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemEvent_obj > result = new SystemEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String SystemEvent_obj::toString( ){
	HX_STACK_PUSH("SystemEvent::toString","native/events/SystemEvent.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return ((((((((HX_CSTRING("[SystemEvent type=") + this->get_type()) + HX_CSTRING(" bubbles=")) + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable=")) + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" data=")) + this->data) + HX_CSTRING("]"));
}


::native::events::Event SystemEvent_obj::clone( ){
	HX_STACK_PUSH("SystemEvent::clone","native/events/SystemEvent.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_LINE(17)
	return ::native::events::ErrorEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),null(),this->data);
}


::String SystemEvent_obj::SYSTEM;


SystemEvent_obj::SystemEvent_obj()
{
}

void SystemEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SystemEvent);
	HX_MARK_MEMBER_NAME(data,"data");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SystemEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SystemEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SYSTEM") ) { return SYSTEM; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SystemEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SYSTEM") ) { SYSTEM=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SystemEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SYSTEM"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("clone"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemEvent_obj::SYSTEM,"SYSTEM");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemEvent_obj::SYSTEM,"SYSTEM");
};

Class SystemEvent_obj::__mClass;

void SystemEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.SystemEvent"), hx::TCanCast< SystemEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SystemEvent_obj::__boot()
{
	SYSTEM= HX_CSTRING("system");
}

} // end namespace native
} // end namespace events
