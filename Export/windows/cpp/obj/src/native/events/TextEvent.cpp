#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_TextEvent
#include <native/events/TextEvent.h>
#endif
namespace native{
namespace events{

Void TextEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text)
{
HX_STACK_PUSH("TextEvent::new","native/events/TextEvent.hx",12);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(13)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(15)
	this->text = text;
}
;
	return null();
}

TextEvent_obj::~TextEvent_obj() { }

Dynamic TextEvent_obj::__CreateEmpty() { return  new TextEvent_obj; }
hx::ObjectPtr< TextEvent_obj > TextEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text)
{  hx::ObjectPtr< TextEvent_obj > result = new TextEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_text);
	return result;}

Dynamic TextEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEvent_obj > result = new TextEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String TextEvent_obj::toString( ){
	HX_STACK_PUSH("TextEvent::toString","native/events/TextEvent.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return ((((((((HX_CSTRING("[TextEvent type=") + this->get_type()) + HX_CSTRING(" bubbles=")) + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable=")) + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" text=")) + this->text) + HX_CSTRING("]"));
}


::native::events::Event TextEvent_obj::clone( ){
	HX_STACK_PUSH("TextEvent::clone","native/events/TextEvent.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_LINE(19)
	return ::native::events::TextEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),this->text);
}


::String TextEvent_obj::LINK;

::String TextEvent_obj::TEXT_INPUT;


TextEvent_obj::TextEvent_obj()
{
}

void TextEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEvent);
	HX_MARK_MEMBER_NAME(text,"text");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TextEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LINK") ) { return LINK; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TEXT_INPUT") ) { return TEXT_INPUT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LINK") ) { LINK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TEXT_INPUT") ) { TEXT_INPUT=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LINK"),
	HX_CSTRING("TEXT_INPUT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("clone"),
	HX_CSTRING("text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_MARK_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

Class TextEvent_obj::__mClass;

void TextEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.TextEvent"), hx::TCanCast< TextEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextEvent_obj::__boot()
{
	LINK= HX_CSTRING("link");
	TEXT_INPUT= HX_CSTRING("textInput");
}

} // end namespace native
} // end namespace events
