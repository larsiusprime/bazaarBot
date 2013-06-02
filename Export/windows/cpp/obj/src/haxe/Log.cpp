#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace haxe{

Void Log_obj::__construct()
{
	return null();
}

Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_trace,Log_obj)
Void run(Dynamic v,Dynamic infos){
{
		HX_STACK_PUSH("Log::trace","C:\\HaxeToolkit\\haxe/std/haxe/Log.hx",45);
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(infos,"infos");
		HX_STACK_LINE(45)
		if (((bool((infos != null())) && bool((infos->__Field(HX_CSTRING("customParams"),true) != null()))))){
			HX_STACK_LINE(74)
			::String extra = HX_CSTRING("");		HX_STACK_VAR(extra,"extra");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Dynamic _g1 = infos->__Field(HX_CSTRING("customParams"),true);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(75)
				while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(75)
					Dynamic v1 = _g1->__GetItem(_g);		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(75)
					++(_g);
					HX_STACK_LINE(76)
					hx::AddEq(extra,(HX_CSTRING(",") + ::Std_obj::string(v1)));
				}
			}
			HX_STACK_LINE(77)
			__trace((::Std_obj::string(v) + extra),infos);
		}
		else{
			HX_STACK_LINE(80)
			__trace(v,infos);
		}
	}
return null();
}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

Dynamic Log_obj::trace;


Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Log_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { return trace; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { trace=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("trace"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::trace,"trace");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::trace,"trace");
};

Class Log_obj::__mClass;

void Log_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Log"), hx::TCanCast< Log_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Log_obj::__boot()
{
	trace = new __default_trace;

}

} // end namespace haxe
