#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

Void Reflect_obj::__construct()
{
	return null();
}

Reflect_obj::~Reflect_obj() { }

Dynamic Reflect_obj::__CreateEmpty() { return  new Reflect_obj; }
hx::ObjectPtr< Reflect_obj > Reflect_obj::__new()
{  hx::ObjectPtr< Reflect_obj > result = new Reflect_obj();
	result->__construct();
	return result;}

Dynamic Reflect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reflect_obj > result = new Reflect_obj();
	result->__construct();
	return result;}

bool Reflect_obj::hasField( Dynamic o,::String field){
	HX_STACK_PUSH("Reflect::hasField","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",24);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(24)
	return (bool((o != null())) && bool(o->__HasField(field)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

Dynamic Reflect_obj::field( Dynamic o,::String field){
	HX_STACK_PUSH("Reflect::field","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",28);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(28)
	return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(field,false)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

Dynamic Reflect_obj::callMethod( Dynamic o,Dynamic func,Dynamic args){
	HX_STACK_PUSH("Reflect::callMethod","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",46);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(func,"func");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(47)
	if (((bool((func != null())) && bool((func->__GetType() == ::vtString))))){
		HX_STACK_LINE(48)
		func = o->__Field(func,true);
	}
	HX_STACK_LINE(49)
	func->__SetThis(o);
	HX_STACK_LINE(50)
	return func->__Run(args);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,callMethod,return )

Array< ::String > Reflect_obj::fields( Dynamic o){
	HX_STACK_PUSH("Reflect::fields","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",53);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(54)
	if (((o == null()))){
		HX_STACK_LINE(54)
		return Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(55)
	Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(56)
	o->__GetFields(a);
	HX_STACK_LINE(57)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,fields,return )

bool Reflect_obj::isFunction( Dynamic f){
	HX_STACK_PUSH("Reflect::isFunction","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",60);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(60)
	return (bool((f != null())) && bool((f->__GetType() == ::vtFunction)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isFunction,return )

bool Reflect_obj::compareMethods( Dynamic f1,Dynamic f2){
	HX_STACK_PUSH("Reflect::compareMethods","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",68);
	HX_STACK_ARG(f1,"f1");
	HX_STACK_ARG(f2,"f2");
	HX_STACK_LINE(69)
	if (((f1 == f2))){
		HX_STACK_LINE(70)
		return true;
	}
	HX_STACK_LINE(71)
	if (((bool(!(::Reflect_obj::isFunction(f1))) || bool(!(::Reflect_obj::isFunction(f2)))))){
		HX_STACK_LINE(72)
		return false;
	}
	HX_STACK_LINE(73)
	return ::__hxcpp_same_closure(f1,f2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compareMethods,return )

bool Reflect_obj::isObject( Dynamic v){
	HX_STACK_PUSH("Reflect::isObject","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",76);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(77)
	if (((v == null()))){
		HX_STACK_LINE(77)
		return false;
	}
	HX_STACK_LINE(78)
	int t = v->__GetType();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(79)
	return (bool((bool((bool((t == ::vtObject)) || bool((t == ::vtClass)))) || bool((t == ::vtString)))) || bool((t == ::vtArray)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )

bool Reflect_obj::deleteField( Dynamic o,::String field){
	HX_STACK_PUSH("Reflect::deleteField","C:\\HaxeToolkit\\haxe/std/cpp/_std/Reflect.hx",87);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(88)
	if (((o == null()))){
		HX_STACK_LINE(88)
		return false;
	}
	HX_STACK_LINE(89)
	return ::__hxcpp_anon_remove(o,field);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,deleteField,return )


Reflect_obj::Reflect_obj()
{
}

void Reflect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reflect);
	HX_MARK_END_CLASS();
}

void Reflect_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Reflect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { return hasField_dyn(); }
		if (HX_FIELD_EQ(inName,"isObject") ) { return isObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMethod") ) { return callMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"isFunction") ) { return isFunction_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"deleteField") ) { return deleteField_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compareMethods") ) { return compareMethods_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reflect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Reflect_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hasField"),
	HX_CSTRING("field"),
	HX_CSTRING("callMethod"),
	HX_CSTRING("fields"),
	HX_CSTRING("isFunction"),
	HX_CSTRING("compareMethods"),
	HX_CSTRING("isObject"),
	HX_CSTRING("deleteField"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

Class Reflect_obj::__mClass;

void Reflect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reflect"), hx::TCanCast< Reflect_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Reflect_obj::__boot()
{
}

