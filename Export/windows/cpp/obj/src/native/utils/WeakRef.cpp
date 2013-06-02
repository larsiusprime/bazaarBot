#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_utils_WeakRef
#include <native/utils/WeakRef.h>
#endif
namespace native{
namespace utils{

Void WeakRef_obj::__construct(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak)
{
HX_STACK_PUSH("WeakRef::new","native/utils/WeakRef.hx",12);
bool inMakeWeak = __o_inMakeWeak.Default(true);
{
	HX_STACK_LINE(12)
	if ((inMakeWeak)){
		HX_STACK_LINE(15)
		this->weakRef = ::native::utils::WeakRef_obj::nme_weak_ref_create(hx::ObjectPtr<OBJ_>(this),inObject);
		HX_STACK_LINE(16)
		this->hardRef = null();
	}
	else{
		HX_STACK_LINE(20)
		this->weakRef = (int)-1;
		HX_STACK_LINE(21)
		this->hardRef = inObject;
	}
}
;
	return null();
}

WeakRef_obj::~WeakRef_obj() { }

Dynamic WeakRef_obj::__CreateEmpty() { return  new WeakRef_obj; }
hx::ObjectPtr< WeakRef_obj > WeakRef_obj::__new(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak)
{  hx::ObjectPtr< WeakRef_obj > result = new WeakRef_obj();
	result->__construct(inObject,__o_inMakeWeak);
	return result;}

Dynamic WeakRef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakRef_obj > result = new WeakRef_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String WeakRef_obj::toString( ){
	HX_STACK_PUSH("WeakRef::toString","native/utils/WeakRef.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	if (((this->hardRef == null()))){
		HX_STACK_LINE(43)
		return (HX_CSTRING("") + ::Std_obj::string(this->hardRef));
	}
	HX_STACK_LINE(45)
	return ((HX_CSTRING("WeakRef(") + this->weakRef) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,toString,return )

Dynamic WeakRef_obj::get( ){
	HX_STACK_PUSH("WeakRef::get","native/utils/WeakRef.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	if (((this->hardRef != null()))){
		HX_STACK_LINE(28)
		return this->hardRef;
	}
	HX_STACK_LINE(30)
	if (((this->weakRef < (int)0))){
		HX_STACK_LINE(31)
		return null();
	}
	HX_STACK_LINE(33)
	Dynamic result = ::native::utils::WeakRef_obj::nme_weak_ref_get(this->weakRef);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(34)
	if (((result == null()))){
		HX_STACK_LINE(35)
		this->weakRef = (int)-1;
	}
	HX_STACK_LINE(37)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,get,return )

Dynamic WeakRef_obj::nme_weak_ref_create;

Dynamic WeakRef_obj::nme_weak_ref_get;


WeakRef_obj::WeakRef_obj()
{
}

void WeakRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakRef);
	HX_MARK_MEMBER_NAME(weakRef,"weakRef");
	HX_MARK_MEMBER_NAME(hardRef,"hardRef");
	HX_MARK_END_CLASS();
}

void WeakRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(weakRef,"weakRef");
	HX_VISIT_MEMBER_NAME(hardRef,"hardRef");
}

Dynamic WeakRef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"weakRef") ) { return weakRef; }
		if (HX_FIELD_EQ(inName,"hardRef") ) { return hardRef; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_weak_ref_get") ) { return nme_weak_ref_get; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_weak_ref_create") ) { return nme_weak_ref_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeakRef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"weakRef") ) { weakRef=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hardRef") ) { hardRef=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_weak_ref_get") ) { nme_weak_ref_get=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_weak_ref_create") ) { nme_weak_ref_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeakRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("weakRef"));
	outFields->push(HX_CSTRING("hardRef"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_weak_ref_create"),
	HX_CSTRING("nme_weak_ref_get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get"),
	HX_CSTRING("weakRef"),
	HX_CSTRING("hardRef"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WeakRef_obj::nme_weak_ref_create,"nme_weak_ref_create");
	HX_MARK_MEMBER_NAME(WeakRef_obj::nme_weak_ref_get,"nme_weak_ref_get");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WeakRef_obj::nme_weak_ref_create,"nme_weak_ref_create");
	HX_VISIT_MEMBER_NAME(WeakRef_obj::nme_weak_ref_get,"nme_weak_ref_get");
};

Class WeakRef_obj::__mClass;

void WeakRef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.utils.WeakRef"), hx::TCanCast< WeakRef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WeakRef_obj::__boot()
{
	nme_weak_ref_create= ::native::Loader_obj::load(HX_CSTRING("nme_weak_ref_create"),(int)2);
	nme_weak_ref_get= ::native::Loader_obj::load(HX_CSTRING("nme_weak_ref_get"),(int)1);
}

} // end namespace native
} // end namespace utils
