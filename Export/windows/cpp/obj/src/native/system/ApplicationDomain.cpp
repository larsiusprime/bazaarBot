#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_native_system_ApplicationDomain
#include <native/system/ApplicationDomain.h>
#endif
namespace native{
namespace system{

Void ApplicationDomain_obj::__construct(::native::system::ApplicationDomain parentDomain)
{
HX_STACK_PUSH("ApplicationDomain::new","native/system/ApplicationDomain.hx",12);
{
	HX_STACK_LINE(12)
	if (((parentDomain != null()))){
		HX_STACK_LINE(14)
		this->parentDomain = parentDomain;
	}
	else{
		HX_STACK_LINE(18)
		this->parentDomain = ::native::system::ApplicationDomain_obj::currentDomain;
	}
}
;
	return null();
}

ApplicationDomain_obj::~ApplicationDomain_obj() { }

Dynamic ApplicationDomain_obj::__CreateEmpty() { return  new ApplicationDomain_obj; }
hx::ObjectPtr< ApplicationDomain_obj > ApplicationDomain_obj::__new(::native::system::ApplicationDomain parentDomain)
{  hx::ObjectPtr< ApplicationDomain_obj > result = new ApplicationDomain_obj();
	result->__construct(parentDomain);
	return result;}

Dynamic ApplicationDomain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationDomain_obj > result = new ApplicationDomain_obj();
	result->__construct(inArgs[0]);
	return result;}

bool ApplicationDomain_obj::hasDefinition( ::String name){
	HX_STACK_PUSH("ApplicationDomain::hasDefinition","native/system/ApplicationDomain.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(34)
	return (::Type_obj::resolveClass(name) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,hasDefinition,return )

Dynamic ApplicationDomain_obj::getDefinition( ::String name){
	HX_STACK_PUSH("ApplicationDomain::getDefinition","native/system/ApplicationDomain.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(27)
	return ::Type_obj::resolveClass(name);
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,getDefinition,return )

::native::system::ApplicationDomain ApplicationDomain_obj::currentDomain;


ApplicationDomain_obj::ApplicationDomain_obj()
{
}

void ApplicationDomain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationDomain);
	HX_MARK_MEMBER_NAME(parentDomain,"parentDomain");
	HX_MARK_END_CLASS();
}

void ApplicationDomain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentDomain,"parentDomain");
}

Dynamic ApplicationDomain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { return parentDomain; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { return currentDomain; }
		if (HX_FIELD_EQ(inName,"hasDefinition") ) { return hasDefinition_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return getDefinition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationDomain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { parentDomain=inValue.Cast< ::native::system::ApplicationDomain >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=inValue.Cast< ::native::system::ApplicationDomain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationDomain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parentDomain"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("currentDomain"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hasDefinition"),
	HX_CSTRING("getDefinition"),
	HX_CSTRING("parentDomain"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationDomain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationDomain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

Class ApplicationDomain_obj::__mClass;

void ApplicationDomain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.system.ApplicationDomain"), hx::TCanCast< ApplicationDomain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationDomain_obj::__boot()
{
	currentDomain= ::native::system::ApplicationDomain_obj::__new(null());
}

} // end namespace native
} // end namespace system
