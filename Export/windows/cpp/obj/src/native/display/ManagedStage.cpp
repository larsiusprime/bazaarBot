#include <hxcpp.h>

#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
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
#ifndef INCLUDED_native_display_ManagedStage
#include <native/display/ManagedStage.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace native{
namespace display{

Void ManagedStage_obj::__construct(int inWidth,int inHeight,hx::Null< int >  __o_inFlags)
{
HX_STACK_PUSH("ManagedStage::new","native/display/ManagedStage.hx",39);
int inFlags = __o_inFlags.Default(0);
{
	HX_STACK_LINE(39)
	super::__construct(::native::display::ManagedStage_obj::nme_managed_stage_create(inWidth,inHeight,inFlags),inWidth,inHeight);
}
;
	return null();
}

ManagedStage_obj::~ManagedStage_obj() { }

Dynamic ManagedStage_obj::__CreateEmpty() { return  new ManagedStage_obj; }
hx::ObjectPtr< ManagedStage_obj > ManagedStage_obj::__new(int inWidth,int inHeight,hx::Null< int >  __o_inFlags)
{  hx::ObjectPtr< ManagedStage_obj > result = new ManagedStage_obj();
	result->__construct(inWidth,inHeight,__o_inFlags);
	return result;}

Dynamic ManagedStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ManagedStage_obj > result = new ManagedStage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_setNextWake,ManagedStage_obj)
Void run(Float inDelay){
{
		HX_STACK_PUSH("ManagedStage::setNextWake","native/display/ManagedStage.hx",83);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inDelay,"inDelay");
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void ManagedStage_obj::sendQuit( ){
{
		HX_STACK_PUSH("ManagedStage::sendQuit","native/display/ManagedStage.hx",78);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","native/display/ManagedStage.hx",79);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		this->pumpEvent(_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ManagedStage_obj,sendQuit,(void))

Void ManagedStage_obj::resize( int inWidth,int inHeight){
{
		HX_STACK_PUSH("ManagedStage::resize","native/display/ManagedStage.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inWidth,"inWidth");
		HX_STACK_ARG(inHeight,"inHeight");
		struct _Function_1_1{
			inline static Dynamic Block( int &inWidth,int &inHeight){
				HX_STACK_PUSH("*::closure","native/display/ManagedStage.hx",74);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					__result->Add(HX_CSTRING("x") , inWidth,false);
					__result->Add(HX_CSTRING("y") , inHeight,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		this->pumpEvent(_Function_1_1::Block(inWidth,inHeight));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ManagedStage_obj,resize,(void))

Void ManagedStage_obj::pumpEvent( Dynamic inEvent){
{
		HX_STACK_PUSH("ManagedStage::pumpEvent","native/display/ManagedStage.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inEvent,"inEvent");
		HX_STACK_LINE(68)
		::native::display::ManagedStage_obj::nme_managed_stage_pump_event(this->nmeHandle,inEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ManagedStage_obj,pumpEvent,(void))

Void ManagedStage_obj::nmeRender( bool inSendEnterFrame){
{
		HX_STACK_PUSH("ManagedStage::nmeRender","native/display/ManagedStage.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inSendEnterFrame,"inSendEnterFrame");
		HX_STACK_LINE(62)
		this->beginRender();
		HX_STACK_LINE(63)
		this->super::nmeRender(inSendEnterFrame);
		HX_STACK_LINE(64)
		this->endRender();
	}
return null();
}


Float ManagedStage_obj::nmeDoProcessStageEvent( Dynamic inEvent){
	HX_STACK_PUSH("ManagedStage::nmeDoProcessStageEvent","native/display/ManagedStage.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inEvent,"inEvent");
	HX_STACK_LINE(53)
	this->nmePollTimers();
	HX_STACK_LINE(55)
	Float wake = this->super::nmeDoProcessStageEvent(inEvent);		HX_STACK_VAR(wake,"wake");
	HX_STACK_LINE(56)
	this->setNextWake(wake);
	HX_STACK_LINE(58)
	return wake;
}


HX_BEGIN_DEFAULT_FUNC(__default_endRender,ManagedStage_obj)
Void run(){
{
		HX_STACK_PUSH("ManagedStage::endRender","native/display/ManagedStage.hx",48);
		HX_STACK_THIS(this);
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_beginRender,ManagedStage_obj)
Void run(){
{
		HX_STACK_PUSH("ManagedStage::beginRender","native/display/ManagedStage.hx",44);
		HX_STACK_THIS(this);
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Dynamic ManagedStage_obj::nme_managed_stage_create;

Dynamic ManagedStage_obj::nme_managed_stage_pump_event;


ManagedStage_obj::ManagedStage_obj()
{
	setNextWake = new __default_setNextWake(this);
	endRender = new __default_endRender(this);
	beginRender = new __default_beginRender(this);
}

void ManagedStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ManagedStage);
	HX_MARK_MEMBER_NAME(setNextWake,"setNextWake");
	HX_MARK_MEMBER_NAME(endRender,"endRender");
	HX_MARK_MEMBER_NAME(beginRender,"beginRender");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ManagedStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(setNextWake,"setNextWake");
	HX_VISIT_MEMBER_NAME(endRender,"endRender");
	HX_VISIT_MEMBER_NAME(beginRender,"beginRender");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ManagedStage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sendQuit") ) { return sendQuit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pumpEvent") ) { return pumpEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeRender") ) { return nmeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"endRender") ) { return endRender; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setNextWake") ) { return setNextWake; }
		if (HX_FIELD_EQ(inName,"beginRender") ) { return beginRender; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nmeDoProcessStageEvent") ) { return nmeDoProcessStageEvent_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_create") ) { return nme_managed_stage_create; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_pump_event") ) { return nme_managed_stage_pump_event; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ManagedStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"endRender") ) { endRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setNextWake") ) { setNextWake=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beginRender") ) { beginRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_create") ) { nme_managed_stage_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_pump_event") ) { nme_managed_stage_pump_event=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ManagedStage_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_managed_stage_create"),
	HX_CSTRING("nme_managed_stage_pump_event"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setNextWake"),
	HX_CSTRING("sendQuit"),
	HX_CSTRING("resize"),
	HX_CSTRING("pumpEvent"),
	HX_CSTRING("nmeRender"),
	HX_CSTRING("nmeDoProcessStageEvent"),
	HX_CSTRING("endRender"),
	HX_CSTRING("beginRender"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_create,"nme_managed_stage_create");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_pump_event,"nme_managed_stage_pump_event");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_create,"nme_managed_stage_create");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_pump_event,"nme_managed_stage_pump_event");
};

Class ManagedStage_obj::__mClass;

void ManagedStage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.ManagedStage"), hx::TCanCast< ManagedStage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ManagedStage_obj::__boot()
{
	nme_managed_stage_create= ::native::Loader_obj::load(HX_CSTRING("nme_managed_stage_create"),(int)3);
	nme_managed_stage_pump_event= ::native::Loader_obj::load(HX_CSTRING("nme_managed_stage_pump_event"),(int)2);
}

} // end namespace native
} // end namespace display
