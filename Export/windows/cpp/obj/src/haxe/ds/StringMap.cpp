#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace haxe{
namespace ds{

Void StringMap_obj::__construct()
{
HX_STACK_PUSH("StringMap::new","C:\\HaxeToolkit\\haxe/std/cpp/_std/haxe/ds/StringMap.hx",27);
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/cpp/_std/haxe/ds/StringMap.hx",28);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	this->__Internal = _Function_1_1::Block();
}
;
	return null();
}

StringMap_obj::~StringMap_obj() { }

Dynamic StringMap_obj::__CreateEmpty() { return  new StringMap_obj; }
hx::ObjectPtr< StringMap_obj > StringMap_obj::__new()
{  hx::ObjectPtr< StringMap_obj > result = new StringMap_obj();
	result->__construct();
	return result;}

Dynamic StringMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringMap_obj > result = new StringMap_obj();
	result->__construct();
	return result;}

hx::Object *StringMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::IMap_obj)) return operator ::IMap_obj *();
	return super::__ToInterface(inType);
}

Dynamic StringMap_obj::keys( ){
	HX_STACK_PUSH("StringMap::keys","C:\\HaxeToolkit\\haxe/std/cpp/_std/haxe/ds/StringMap.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(52)
	this->__Internal->__GetFields(a);
	HX_STACK_LINE(53)
	return a->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,keys,return )

bool StringMap_obj::exists( ::String key){
	HX_STACK_PUSH("StringMap::exists","C:\\HaxeToolkit\\haxe/std/cpp/_std/haxe/ds/StringMap.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(39)
	return this->__Internal->__HasField(key);
}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,exists,return )

Dynamic StringMap_obj::get( ::String key){
	HX_STACK_PUSH("StringMap::get","C:\\HaxeToolkit\\haxe/std/cpp/_std/haxe/ds/StringMap.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(35)
	return this->__Internal->__Field(key,true);
}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,get,return )

Void StringMap_obj::set( ::String key,Dynamic value){
{
		HX_STACK_PUSH("StringMap::set","C:\\HaxeToolkit\\haxe/std/cpp/_std/haxe/ds/StringMap.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(31)
		this->__Internal->__SetField(key,value,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StringMap_obj,set,(void))


StringMap_obj::StringMap_obj()
{
}

void StringMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringMap);
	HX_MARK_MEMBER_NAME(__Internal,"__Internal");
	HX_MARK_END_CLASS();
}

void StringMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__Internal,"__Internal");
}

Dynamic StringMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__Internal") ) { return __Internal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__Internal") ) { __Internal=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__Internal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keys"),
	HX_CSTRING("exists"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	HX_CSTRING("__Internal"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

Class StringMap_obj::__mClass;

void StringMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.StringMap"), hx::TCanCast< StringMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StringMap_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds
