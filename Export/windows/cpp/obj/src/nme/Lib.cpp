#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
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
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
namespace nme{

Void Lib_obj::__construct()
{
	return null();
}

Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

int Lib_obj::FULLSCREEN;

int Lib_obj::BORDERLESS;

int Lib_obj::RESIZABLE;

int Lib_obj::HARDWARE;

int Lib_obj::VSYNC;

int Lib_obj::HW_AA;

int Lib_obj::HW_AA_HIRES;

int Lib_obj::ALLOW_SHADERS;

int Lib_obj::REQUIRE_SHADERS;

int Lib_obj::DEPTH_BUFFER;

int Lib_obj::STENCIL_BUFFER;

::String Lib_obj::company;

::native::display::MovieClip Lib_obj::current;

::String Lib_obj::file;

int Lib_obj::initHeight;

int Lib_obj::initWidth;

::String Lib_obj::packageName;

::native::display::Stage Lib_obj::stage;

::String Lib_obj::version;

Dynamic Lib_obj::as( Dynamic v,::Class c){
	HX_STACK_PUSH("Lib::as","nme/Lib.hx",54);
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(54)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

::native::display::MovieClip Lib_obj::attach( ::String name){
	HX_STACK_PUSH("Lib::attach","nme/Lib.hx",60);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(60)
	return ::native::display::MovieClip_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

Void Lib_obj::close( ){
{
		HX_STACK_PUSH("Lib::close","nme/Lib.hx",70);
		HX_STACK_LINE(70)
		::native::Lib_obj::close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,close,(void))

Void Lib_obj::create( Dynamic onLoaded,int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< int >  __o_color,hx::Null< int >  __o_flags,::String __o_title,::native::display::BitmapData icon,::Class stageClass){
Float frameRate = __o_frameRate.Default(60.0);
int color = __o_color.Default(16777215);
int flags = __o_flags.Default(15);
::String title = __o_title.Default(HX_CSTRING("NME"));
	HX_STACK_PUSH("Lib::create","nme/Lib.hx",93);
	HX_STACK_ARG(onLoaded,"onLoaded");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(frameRate,"frameRate");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(flags,"flags");
	HX_STACK_ARG(title,"title");
	HX_STACK_ARG(icon,"icon");
	HX_STACK_ARG(stageClass,"stageClass");
{
		HX_STACK_LINE(93)
		::native::Lib_obj::create(onLoaded,width,height,frameRate,color,flags,title,icon,stageClass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Lib_obj,create,(void))

::native::display::ManagedStage Lib_obj::createManagedStage( int width,int height){
	HX_STACK_PUSH("Lib::createManagedStage","nme/Lib.hx",109);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(112)
	return ::native::Lib_obj::createManagedStage(width,height,null());
	HX_STACK_LINE(114)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,createManagedStage,return )

Void Lib_obj::exit( ){
{
		HX_STACK_PUSH("Lib::exit","nme/Lib.hx",125);
		HX_STACK_LINE(125)
		::native::Lib_obj::exit();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,exit,(void))

Void Lib_obj::forceClose( ){
{
		HX_STACK_PUSH("Lib::forceClose","nme/Lib.hx",139);
		HX_STACK_LINE(139)
		::native::Lib_obj::forceClose();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,forceClose,(void))

int Lib_obj::getTimer( ){
	HX_STACK_PUSH("Lib::getTimer","nme/Lib.hx",157);
	HX_STACK_LINE(157)
	return ::native::Lib_obj::getTimer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

Void Lib_obj::getURL( ::native::net::URLRequest url,::String target){
{
		HX_STACK_PUSH("Lib::getURL","nme/Lib.hx",176);
		HX_STACK_ARG(url,"url");
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(176)
		::native::Lib_obj::getURL(url,target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

Void Lib_obj::pause( ){
{
		HX_STACK_PUSH("Lib::pause","nme/Lib.hx",195);
		HX_STACK_LINE(195)
		::native::Lib_obj::pause();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,pause,(void))

Void Lib_obj::postUICallback( Dynamic handler){
{
		HX_STACK_PUSH("Lib::postUICallback","nme/Lib.hx",213);
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(213)
		::native::Lib_obj::postUICallback(handler);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,postUICallback,(void))

Void Lib_obj::resume( ){
{
		HX_STACK_PUSH("Lib::resume","nme/Lib.hx",230);
		HX_STACK_LINE(230)
		::native::Lib_obj::resume();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,resume,(void))

Void Lib_obj::setPackage( ::String company,::String file,::String packageName,::String version){
{
		HX_STACK_PUSH("Lib::setPackage","nme/Lib.hx",249);
		HX_STACK_ARG(company,"company");
		HX_STACK_ARG(file,"file");
		HX_STACK_ARG(packageName,"packageName");
		HX_STACK_ARG(version,"version");
		HX_STACK_LINE(249)
		::native::Lib_obj::setPackage(company,file,packageName,version);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,setPackage,(void))

Void Lib_obj::trace( Dynamic arg){
{
		HX_STACK_PUSH("Lib::trace","nme/Lib.hx",267);
		HX_STACK_ARG(arg,"arg");
		HX_STACK_LINE(267)
		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_CSTRING("Lib.hx"),270,HX_CSTRING("nme.Lib"),HX_CSTRING("trace")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

::String Lib_obj::get_company( ){
	HX_STACK_PUSH("Lib::get_company","nme/Lib.hx",286);
	HX_STACK_LINE(289)
	return ::native::Lib_obj::company;
	HX_STACK_LINE(293)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_company,return )

::native::display::MovieClip Lib_obj::get_current( ){
	HX_STACK_PUSH("Lib::get_current","nme/Lib.hx",298);
	HX_STACK_LINE(298)
	return ::native::Lib_obj::get_current();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )

::String Lib_obj::get_file( ){
	HX_STACK_PUSH("Lib::get_file","nme/Lib.hx",312);
	HX_STACK_LINE(315)
	return ::native::Lib_obj::file;
	HX_STACK_LINE(319)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_file,return )

int Lib_obj::get_initHeight( ){
	HX_STACK_PUSH("Lib::get_initHeight","nme/Lib.hx",324);
	HX_STACK_LINE(327)
	return ::native::Lib_obj::initHeight;
	HX_STACK_LINE(329)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_initHeight,return )

int Lib_obj::get_initWidth( ){
	HX_STACK_PUSH("Lib::get_initWidth","nme/Lib.hx",334);
	HX_STACK_LINE(337)
	return ::native::Lib_obj::initWidth;
	HX_STACK_LINE(339)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_initWidth,return )

::String Lib_obj::get_packageName( ){
	HX_STACK_PUSH("Lib::get_packageName","nme/Lib.hx",344);
	HX_STACK_LINE(347)
	return ::native::Lib_obj::packageName;
	HX_STACK_LINE(351)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_packageName,return )

::native::display::Stage Lib_obj::get_stage( ){
	HX_STACK_PUSH("Lib::get_stage","nme/Lib.hx",356);
	HX_STACK_LINE(356)
	return ::native::Lib_obj::get_stage();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_stage,return )

::String Lib_obj::get_version( ){
	HX_STACK_PUSH("Lib::get_version","nme/Lib.hx",368);
	HX_STACK_LINE(371)
	return ::native::Lib_obj::version;
	HX_STACK_LINE(375)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_version,return )


Lib_obj::Lib_obj()
{
}

void Lib_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lib);
	HX_MARK_END_CLASS();
}

void Lib_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Lib_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { return as_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return inCallProp ? get_file() : file; }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { return VSYNC; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { return HW_AA; }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp ? get_stage() : stage; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return getURL_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { return inCallProp ? get_company() : company; }
		if (HX_FIELD_EQ(inName,"current") ) { return inCallProp ? get_current() : current; }
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? get_version() : version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { return HARDWARE; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_file") ) { return get_file_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { return RESIZABLE; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { return inCallProp ? get_initWidth() : initWidth; }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { return FULLSCREEN; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { return BORDERLESS; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { return inCallProp ? get_initHeight() : initHeight; }
		if (HX_FIELD_EQ(inName,"forceClose") ) { return forceClose_dyn(); }
		if (HX_FIELD_EQ(inName,"setPackage") ) { return setPackage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { return HW_AA_HIRES; }
		if (HX_FIELD_EQ(inName,"packageName") ) { return inCallProp ? get_packageName() : packageName; }
		if (HX_FIELD_EQ(inName,"get_company") ) { return get_company_dyn(); }
		if (HX_FIELD_EQ(inName,"get_current") ) { return get_current_dyn(); }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { return DEPTH_BUFFER; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { return ALLOW_SHADERS; }
		if (HX_FIELD_EQ(inName,"get_initWidth") ) { return get_initWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { return STENCIL_BUFFER; }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { return postUICallback_dyn(); }
		if (HX_FIELD_EQ(inName,"get_initHeight") ) { return get_initHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { return REQUIRE_SHADERS; }
		if (HX_FIELD_EQ(inName,"get_packageName") ) { return get_packageName_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createManagedStage") ) { return createManagedStage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { VSYNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { HW_AA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::native::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"company") ) { company=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::native::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { RESIZABLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { initWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { FULLSCREEN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { BORDERLESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initHeight") ) { initHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { HW_AA_HIRES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"packageName") ) { packageName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { DEPTH_BUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { ALLOW_SHADERS=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { STENCIL_BUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { REQUIRE_SHADERS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lib_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FULLSCREEN"),
	HX_CSTRING("BORDERLESS"),
	HX_CSTRING("RESIZABLE"),
	HX_CSTRING("HARDWARE"),
	HX_CSTRING("VSYNC"),
	HX_CSTRING("HW_AA"),
	HX_CSTRING("HW_AA_HIRES"),
	HX_CSTRING("ALLOW_SHADERS"),
	HX_CSTRING("REQUIRE_SHADERS"),
	HX_CSTRING("DEPTH_BUFFER"),
	HX_CSTRING("STENCIL_BUFFER"),
	HX_CSTRING("company"),
	HX_CSTRING("current"),
	HX_CSTRING("file"),
	HX_CSTRING("initHeight"),
	HX_CSTRING("initWidth"),
	HX_CSTRING("packageName"),
	HX_CSTRING("stage"),
	HX_CSTRING("version"),
	HX_CSTRING("as"),
	HX_CSTRING("attach"),
	HX_CSTRING("close"),
	HX_CSTRING("create"),
	HX_CSTRING("createManagedStage"),
	HX_CSTRING("exit"),
	HX_CSTRING("forceClose"),
	HX_CSTRING("getTimer"),
	HX_CSTRING("getURL"),
	HX_CSTRING("pause"),
	HX_CSTRING("postUICallback"),
	HX_CSTRING("resume"),
	HX_CSTRING("setPackage"),
	HX_CSTRING("trace"),
	HX_CSTRING("get_company"),
	HX_CSTRING("get_current"),
	HX_CSTRING("get_file"),
	HX_CSTRING("get_initHeight"),
	HX_CSTRING("get_initWidth"),
	HX_CSTRING("get_packageName"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("get_version"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_MARK_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_MARK_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::company,"company");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::file,"file");
	HX_MARK_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_MARK_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_MARK_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_MARK_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Lib_obj::version,"version");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_VISIT_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_VISIT_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_VISIT_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::company,"company");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::file,"file");
	HX_VISIT_MEMBER_NAME(Lib_obj::initHeight,"initHeight");
	HX_VISIT_MEMBER_NAME(Lib_obj::initWidth,"initWidth");
	HX_VISIT_MEMBER_NAME(Lib_obj::packageName,"packageName");
	HX_VISIT_MEMBER_NAME(Lib_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::version,"version");
};

Class Lib_obj::__mClass;

void Lib_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.Lib"), hx::TCanCast< Lib_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lib_obj::__boot()
{
	FULLSCREEN= (int)1;
	BORDERLESS= (int)2;
	RESIZABLE= (int)4;
	HARDWARE= (int)8;
	VSYNC= (int)16;
	HW_AA= (int)32;
	HW_AA_HIRES= (int)96;
	ALLOW_SHADERS= (int)128;
	REQUIRE_SHADERS= (int)256;
	DEPTH_BUFFER= (int)512;
	STENCIL_BUFFER= (int)1024;
}

} // end namespace nme
