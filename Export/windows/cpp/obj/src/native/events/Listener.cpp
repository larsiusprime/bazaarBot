#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_Listener
#include <native/events/Listener.h>
#endif
namespace native{
namespace events{

Void Listener_obj::__construct(Dynamic inListener,bool inUseCapture,int inPriority)
{
HX_STACK_PUSH("Listener::new","native/events/EventDispatcher.hx",179);
{
	HX_STACK_LINE(180)
	this->mListner = inListener;
	HX_STACK_LINE(181)
	this->mUseCapture = inUseCapture;
	HX_STACK_LINE(182)
	this->mPriority = inPriority;
	HX_STACK_LINE(183)
	this->mID = (::native::events::Listener_obj::sIDs)++;
}
;
	return null();
}

Listener_obj::~Listener_obj() { }

Dynamic Listener_obj::__CreateEmpty() { return  new Listener_obj; }
hx::ObjectPtr< Listener_obj > Listener_obj::__new(Dynamic inListener,bool inUseCapture,int inPriority)
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct(inListener,inUseCapture,inPriority);
	return result;}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool Listener_obj::Is( Dynamic inListener,bool inCapture){
	HX_STACK_PUSH("Listener::Is","native/events/EventDispatcher.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inListener,"inListener");
	HX_STACK_ARG(inCapture,"inCapture");
	HX_STACK_LINE(192)
	return (bool(::Reflect_obj::compareMethods(this->mListner_dyn(),inListener)) && bool((this->mUseCapture == inCapture)));
}


HX_DEFINE_DYNAMIC_FUNC2(Listener_obj,Is,return )

Void Listener_obj::dispatchEvent( ::native::events::Event event){
{
		HX_STACK_PUSH("Listener::dispatchEvent","native/events/EventDispatcher.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(187)
		this->mListner(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,dispatchEvent,(void))

int Listener_obj::sIDs;


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(mUseCapture,"mUseCapture");
	HX_MARK_MEMBER_NAME(mPriority,"mPriority");
	HX_MARK_MEMBER_NAME(mListner,"mListner");
	HX_MARK_MEMBER_NAME(mID,"mID");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mUseCapture,"mUseCapture");
	HX_VISIT_MEMBER_NAME(mPriority,"mPriority");
	HX_VISIT_MEMBER_NAME(mListner,"mListner");
	HX_VISIT_MEMBER_NAME(mID,"mID");
}

Dynamic Listener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"Is") ) { return Is_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mID") ) { return mID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sIDs") ) { return sIDs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mListner") ) { return mListner; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPriority") ) { return mPriority; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mUseCapture") ) { return mUseCapture; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mID") ) { mID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sIDs") ) { sIDs=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mListner") ) { mListner=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPriority") ) { mPriority=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mUseCapture") ) { mUseCapture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mUseCapture"));
	outFields->push(HX_CSTRING("mPriority"));
	outFields->push(HX_CSTRING("mID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sIDs"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("Is"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("mUseCapture"),
	HX_CSTRING("mPriority"),
	HX_CSTRING("mListner"),
	HX_CSTRING("mID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Listener_obj::sIDs,"sIDs");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Listener_obj::sIDs,"sIDs");
};

Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.Listener"), hx::TCanCast< Listener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Listener_obj::__boot()
{
	sIDs= (int)1;
}

} // end namespace native
} // end namespace events
