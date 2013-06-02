#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_geom_ColorTransform
#include <native/geom/ColorTransform.h>
#endif
namespace native{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset)
{
HX_STACK_PUSH("ColorTransform::new","native/geom/ColorTransform.hx",17);
Float inRedMultiplier = __o_inRedMultiplier.Default(1.0);
Float inGreenMultiplier = __o_inGreenMultiplier.Default(1.0);
Float inBlueMultiplier = __o_inBlueMultiplier.Default(1.0);
Float inAlphaMultiplier = __o_inAlphaMultiplier.Default(1.0);
Float inRedOffset = __o_inRedOffset.Default(0.0);
Float inGreenOffset = __o_inGreenOffset.Default(0.0);
Float inBlueOffset = __o_inBlueOffset.Default(0.0);
Float inAlphaOffset = __o_inAlphaOffset.Default(0.0);
{
	HX_STACK_LINE(18)
	this->redMultiplier = inRedMultiplier;
	HX_STACK_LINE(19)
	this->greenMultiplier = inGreenMultiplier;
	HX_STACK_LINE(20)
	this->blueMultiplier = inBlueMultiplier;
	HX_STACK_LINE(21)
	this->alphaMultiplier = inAlphaMultiplier;
	HX_STACK_LINE(22)
	this->redOffset = inRedOffset;
	HX_STACK_LINE(23)
	this->greenOffset = inGreenOffset;
	HX_STACK_LINE(24)
	this->blueOffset = inBlueOffset;
	HX_STACK_LINE(25)
	this->alphaOffset = inAlphaOffset;
}
;
	return null();
}

ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > result = new ColorTransform_obj();
	result->__construct(__o_inRedMultiplier,__o_inGreenMultiplier,__o_inBlueMultiplier,__o_inAlphaMultiplier,__o_inRedOffset,__o_inGreenOffset,__o_inBlueOffset,__o_inAlphaOffset);
	return result;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > result = new ColorTransform_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

int ColorTransform_obj::set_color( int value){
	HX_STACK_PUSH("ColorTransform::set_color","native/geom/ColorTransform.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(44)
	this->redOffset = (int((int(value) >> int((int)16))) & int((int)255));
	HX_STACK_LINE(45)
	this->greenOffset = (int((int(value) >> int((int)8))) & int((int)255));
	HX_STACK_LINE(46)
	this->blueOffset = (int(value) & int((int)255));
	HX_STACK_LINE(48)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(49)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(50)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(52)
	return this->get_color();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

int ColorTransform_obj::get_color( ){
	HX_STACK_PUSH("ColorTransform::get_color","native/geom/ColorTransform.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_LINE(38)
	return (int((int((int(::Std_obj::_int(this->redOffset)) << int((int)16))) | int((int(::Std_obj::_int(this->greenOffset)) << int((int)8))))) | int(::Std_obj::_int(this->blueOffset)));
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

Void ColorTransform_obj::concat( ::native::geom::ColorTransform second){
{
		HX_STACK_PUSH("ColorTransform::concat","native/geom/ColorTransform.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(second,"second");
		HX_STACK_LINE(30)
		hx::AddEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(31)
		hx::AddEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(32)
		hx::AddEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(33)
		hx::AddEq(this->alphaMultiplier,second->alphaMultiplier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))


ColorTransform_obj::ColorTransform_obj()
{
}

void ColorTransform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTransform);
	HX_MARK_MEMBER_NAME(redOffset,"redOffset");
	HX_MARK_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_MARK_MEMBER_NAME(greenOffset,"greenOffset");
	HX_MARK_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_MARK_MEMBER_NAME(blueOffset,"blueOffset");
	HX_MARK_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_MARK_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_MARK_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
	HX_MARK_END_CLASS();
}

void ColorTransform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redOffset,"redOffset");
	HX_VISIT_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_VISIT_MEMBER_NAME(greenOffset,"greenOffset");
	HX_VISIT_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_VISIT_MEMBER_NAME(blueOffset,"blueOffset");
	HX_VISIT_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_VISIT_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_VISIT_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("redOffset"));
	outFields->push(HX_CSTRING("redMultiplier"));
	outFields->push(HX_CSTRING("greenOffset"));
	outFields->push(HX_CSTRING("greenMultiplier"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("blueOffset"));
	outFields->push(HX_CSTRING("blueMultiplier"));
	outFields->push(HX_CSTRING("alphaOffset"));
	outFields->push(HX_CSTRING("alphaMultiplier"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("concat"),
	HX_CSTRING("redOffset"),
	HX_CSTRING("redMultiplier"),
	HX_CSTRING("greenOffset"),
	HX_CSTRING("greenMultiplier"),
	HX_CSTRING("blueOffset"),
	HX_CSTRING("blueMultiplier"),
	HX_CSTRING("alphaOffset"),
	HX_CSTRING("alphaMultiplier"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

Class ColorTransform_obj::__mClass;

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.geom.ColorTransform"), hx::TCanCast< ColorTransform_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorTransform_obj::__boot()
{
}

} // end namespace native
} // end namespace geom
