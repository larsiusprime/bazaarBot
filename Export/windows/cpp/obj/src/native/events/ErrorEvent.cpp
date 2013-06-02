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
#ifndef INCLUDED_native_events_TextEvent
#include <native/events/TextEvent.h>
#endif
namespace native{
namespace events{

Void ErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{
HX_STACK_PUSH("ErrorEvent::new","native/events/ErrorEvent.hx",11);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_CSTRING(""));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(12)
	super::__construct(type,bubbles,cancelable,text);
	HX_STACK_LINE(13)
	this->errorID = id;
}
;
	return null();
}

ErrorEvent_obj::~ErrorEvent_obj() { }

Dynamic ErrorEvent_obj::__CreateEmpty() { return  new ErrorEvent_obj; }
hx::ObjectPtr< ErrorEvent_obj > ErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{  hx::ObjectPtr< ErrorEvent_obj > result = new ErrorEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return result;}

Dynamic ErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ErrorEvent_obj > result = new ErrorEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::String ErrorEvent_obj::toString( ){
	HX_STACK_PUSH("ErrorEvent::toString","native/events/ErrorEvent.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return ((((((((((HX_CSTRING("[ErrorEvent type=") + this->get_type()) + HX_CSTRING(" bubbles=")) + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable=")) + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" text=")) + this->text) + HX_CSTRING(" errorID=")) + this->errorID) + HX_CSTRING("]"));
}


::native::events::Event ErrorEvent_obj::clone( ){
	HX_STACK_PUSH("ErrorEvent::clone","native/events/ErrorEvent.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_LINE(17)
	return ::native::events::ErrorEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),this->text,this->errorID);
}


::String ErrorEvent_obj::ERROR;


ErrorEvent_obj::ErrorEvent_obj()
{
}

void ErrorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ErrorEvent);
	HX_MARK_MEMBER_NAME(errorID,"errorID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ErrorEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(errorID,"errorID");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ErrorEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { return ERROR; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ErrorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("errorID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ERROR"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("clone"),
	HX_CSTRING("errorID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

Class ErrorEvent_obj::__mClass;

void ErrorEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.ErrorEvent"), hx::TCanCast< ErrorEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ErrorEvent_obj::__boot()
{
	ERROR= HX_CSTRING("error");
}

} // end namespace native
} // end namespace events
