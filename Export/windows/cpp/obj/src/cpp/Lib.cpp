#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
namespace cpp{

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

Dynamic Lib_obj::load( ::String lib,::String prim,int nargs){
	HX_STACK_PUSH("Lib::load","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",29);
	HX_STACK_ARG(lib,"lib");
	HX_STACK_ARG(prim,"prim");
	HX_STACK_ARG(nargs,"nargs");
	HX_STACK_LINE(29)
	return ::__loadprim(lib,prim,nargs);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

Dynamic Lib_obj::loadLazy( ::String lib,::String prim,int nargs){
	HX_STACK_PUSH("Lib::loadLazy","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",48);
	HX_STACK_ARG(lib,"lib");
	HX_STACK_ARG(prim,"prim");
	HX_STACK_ARG(nargs,"nargs");
	HX_STACK_LINE(49)
	try{
		HX_STACK_LINE(49)
		return ::__loadprim(lib,prim,nargs);
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(51)
				Dynamic e1 = Dynamic( Array_obj<Dynamic>::__new().Add(e));		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(51)
				switch( (int)(nargs)){
					case (int)0: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e1)
						Void run(){
							HX_STACK_PUSH("*::_Function_3_1","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",53);
							{
								HX_STACK_LINE(53)
								hx::Throw (e1->__GetItem((int)0));
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(53)
						return  Dynamic(new _Function_3_1(e1));
					}
					;break;
					case (int)2: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e1)
						Void run(Dynamic _1,Dynamic _2){
							HX_STACK_PUSH("*::_Function_3_1","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",54);
							HX_STACK_ARG(_1,"_1");
							HX_STACK_ARG(_2,"_2");
							{
								HX_STACK_LINE(54)
								hx::Throw (e1->__GetItem((int)0));
							}
							return null();
						}
						HX_END_LOCAL_FUNC2((void))

						HX_STACK_LINE(54)
						return  Dynamic(new _Function_3_1(e1));
					}
					;break;
					case (int)3: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e1)
						Void run(Dynamic _1,Dynamic _2,Dynamic _3){
							HX_STACK_PUSH("*::_Function_3_1","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",55);
							HX_STACK_ARG(_1,"_1");
							HX_STACK_ARG(_2,"_2");
							HX_STACK_ARG(_3,"_3");
							{
								HX_STACK_LINE(55)
								hx::Throw (e1->__GetItem((int)0));
							}
							return null();
						}
						HX_END_LOCAL_FUNC3((void))

						HX_STACK_LINE(55)
						return  Dynamic(new _Function_3_1(e1));
					}
					;break;
					case (int)4: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e1)
						Void run(Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4){
							HX_STACK_PUSH("*::_Function_3_1","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",56);
							HX_STACK_ARG(_1,"_1");
							HX_STACK_ARG(_2,"_2");
							HX_STACK_ARG(_3,"_3");
							HX_STACK_ARG(_4,"_4");
							{
								HX_STACK_LINE(56)
								hx::Throw (e1->__GetItem((int)0));
							}
							return null();
						}
						HX_END_LOCAL_FUNC4((void))

						HX_STACK_LINE(56)
						return  Dynamic(new _Function_3_1(e1));
					}
					;break;
					case (int)5: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e1)
						Void run(Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4,Dynamic _5){
							HX_STACK_PUSH("*::_Function_3_1","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",57);
							HX_STACK_ARG(_1,"_1");
							HX_STACK_ARG(_2,"_2");
							HX_STACK_ARG(_3,"_3");
							HX_STACK_ARG(_4,"_4");
							HX_STACK_ARG(_5,"_5");
							{
								HX_STACK_LINE(57)
								hx::Throw (e1->__GetItem((int)0));
							}
							return null();
						}
						HX_END_LOCAL_FUNC5((void))

						HX_STACK_LINE(57)
						return  Dynamic(new _Function_3_1(e1));
					}
					;break;
					default: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e1)
						Void run(Dynamic _1){
							HX_STACK_PUSH("*::_Function_3_1","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",58);
							HX_STACK_ARG(_1,"_1");
							{
								HX_STACK_LINE(58)
								hx::Throw (e1->__GetItem((int)0));
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(58)
						return  Dynamic(new _Function_3_1(e1));
					}
				}
			}
		}
	}
	HX_STACK_LINE(61)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,loadLazy,return )

Void Lib_obj::println( Dynamic v){
{
		HX_STACK_PUSH("Lib::println","C:\\HaxeToolkit\\haxe/std/cpp/Lib.hx",93);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(93)
		::__hxcpp_println(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,println,(void))


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
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { return println_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadLazy") ) { return loadLazy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Lib_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("load"),
	HX_CSTRING("loadLazy"),
	HX_CSTRING("println"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

Class Lib_obj::__mClass;

void Lib_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.Lib"), hx::TCanCast< Lib_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lib_obj::__boot()
{
}

} // end namespace cpp
