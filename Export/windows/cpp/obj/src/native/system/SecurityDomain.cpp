#include <hxcpp.h>

#ifndef INCLUDED_native_system_SecurityDomain
#include <native/system/SecurityDomain.h>
#endif
namespace native{
namespace system{

Void SecurityDomain_obj::__construct()
{
HX_STACK_PUSH("SecurityDomain::new","native/system/SecurityDomain.hx",10);
{
}
;
	return null();
}

SecurityDomain_obj::~SecurityDomain_obj() { }

Dynamic SecurityDomain_obj::__CreateEmpty() { return  new SecurityDomain_obj; }
hx::ObjectPtr< SecurityDomain_obj > SecurityDomain_obj::__new()
{  hx::ObjectPtr< SecurityDomain_obj > result = new SecurityDomain_obj();
	result->__construct();
	return result;}

Dynamic SecurityDomain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SecurityDomain_obj > result = new SecurityDomain_obj();
	result->__construct();
	return result;}

::native::system::SecurityDomain SecurityDomain_obj::currentDomain;


SecurityDomain_obj::SecurityDomain_obj()
{
}

void SecurityDomain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SecurityDomain);
	HX_MARK_END_CLASS();
}

void SecurityDomain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SecurityDomain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { return currentDomain; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SecurityDomain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=inValue.Cast< ::native::system::SecurityDomain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SecurityDomain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("currentDomain"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SecurityDomain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SecurityDomain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

Class SecurityDomain_obj::__mClass;

void SecurityDomain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.system.SecurityDomain"), hx::TCanCast< SecurityDomain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SecurityDomain_obj::__boot()
{
	currentDomain= ::native::system::SecurityDomain_obj::__new();
}

} // end namespace native
} // end namespace system
