#include <hxcpp.h>

#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
namespace native{
namespace errors{

Void Error_obj::__construct(Dynamic inMessage,Dynamic __o_id)
{
HX_STACK_PUSH("Error::new","native/errors/Error.hx",11);
Dynamic id = __o_id.Default(0);
{
	HX_STACK_LINE(12)
	this->message = inMessage;
	HX_STACK_LINE(13)
	this->errorID = id;
}
;
	return null();
}

Error_obj::~Error_obj() { }

Dynamic Error_obj::__CreateEmpty() { return  new Error_obj; }
hx::ObjectPtr< Error_obj > Error_obj::__new(Dynamic inMessage,Dynamic __o_id)
{  hx::ObjectPtr< Error_obj > result = new Error_obj();
	result->__construct(inMessage,__o_id);
	return result;}

Dynamic Error_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Error_obj > result = new Error_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Error_obj::toString( ){
	HX_STACK_PUSH("Error::toString","native/errors/Error.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return this->message;
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,toString,return )

::String Error_obj::getStackTrace( ){
	HX_STACK_PUSH("Error::getStackTrace","native/errors/Error.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_LINE(17)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,getStackTrace,return )


Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(errorID,"errorID");
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(errorID,"errorID");
}

Dynamic Error_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStackTrace") ) { return getStackTrace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Error_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("message"));
	outFields->push(HX_CSTRING("errorID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getStackTrace"),
	HX_CSTRING("name"),
	HX_CSTRING("message"),
	HX_CSTRING("errorID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
};

Class Error_obj::__mClass;

void Error_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.errors.Error"), hx::TCanCast< Error_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Error_obj::__boot()
{
}

} // end namespace native
} // end namespace errors
