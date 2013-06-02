#include <hxcpp.h>

#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_ColorTransform
#include <native/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_native_geom_Transform
#include <native/geom/Transform.h>
#endif
namespace native{
namespace geom{

Void Transform_obj::__construct(::native::display::DisplayObject inParent)
{
HX_STACK_PUSH("Transform::new","native/geom/Transform.hx",16);
{
	HX_STACK_LINE(16)
	this->nmeObj = inParent;
}
;
	return null();
}

Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::native::display::DisplayObject inParent)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(inParent);
	return result;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(inArgs[0]);
	return result;}

::native::geom::Rectangle Transform_obj::get_pixelBounds( ){
	HX_STACK_PUSH("Transform::get_pixelBounds","native/geom/Transform.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->nmeObj->nmeGetPixelBounds();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_pixelBounds,return )

::native::geom::Matrix Transform_obj::set_matrix( ::native::geom::Matrix inMatrix){
	HX_STACK_PUSH("Transform::set_matrix","native/geom/Transform.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inMatrix,"inMatrix");
	HX_STACK_LINE(26)
	this->nmeObj->nmeSetMatrix(inMatrix);
	HX_STACK_LINE(26)
	return inMatrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::native::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_PUSH("Transform::get_matrix","native/geom/Transform.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_LINE(25)
	return this->nmeObj->nmeGetMatrix();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::native::geom::Matrix Transform_obj::get_concatenatedMatrix( ){
	HX_STACK_PUSH("Transform::get_concatenatedMatrix","native/geom/Transform.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return this->nmeObj->nmeGetConcatenatedMatrix();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

::native::geom::ColorTransform Transform_obj::get_concatenatedColorTransform( ){
	HX_STACK_PUSH("Transform::get_concatenatedColorTransform","native/geom/Transform.hx",23);
	HX_STACK_THIS(this);
	HX_STACK_LINE(23)
	return this->nmeObj->nmeGetConcatenatedColorTransform();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedColorTransform,return )

::native::geom::ColorTransform Transform_obj::set_colorTransform( ::native::geom::ColorTransform inTrans){
	HX_STACK_PUSH("Transform::set_colorTransform","native/geom/Transform.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inTrans,"inTrans");
	HX_STACK_LINE(22)
	this->nmeObj->nmeSetColorTransform(inTrans);
	HX_STACK_LINE(22)
	return inTrans;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::native::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_PUSH("Transform::get_colorTransform","native/geom/Transform.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_LINE(21)
	return this->nmeObj->nmeGetColorTransform();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(nmeObj,"nmeObj");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeObj,"nmeObj");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
}

Dynamic Transform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nmeObj") ) { return nmeObj; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return get_matrix(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return inCallProp ? get_pixelBounds() : pixelBounds; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_pixelBounds") ) { return get_pixelBounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { return inCallProp ? get_concatenatedMatrix() : concatenatedMatrix; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return get_concatenatedMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return inCallProp ? get_concatenatedColorTransform() : concatenatedColorTransform; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_concatenatedColorTransform") ) { return get_concatenatedColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nmeObj") ) { nmeObj=inValue.Cast< ::native::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return set_matrix(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return set_colorTransform(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { concatenatedMatrix=inValue.Cast< ::native::geom::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::native::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeObj"));
	outFields->push(HX_CSTRING("pixelBounds"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("concatenatedMatrix"));
	outFields->push(HX_CSTRING("concatenatedColorTransform"));
	outFields->push(HX_CSTRING("colorTransform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_pixelBounds"),
	HX_CSTRING("set_matrix"),
	HX_CSTRING("get_matrix"),
	HX_CSTRING("get_concatenatedMatrix"),
	HX_CSTRING("get_concatenatedColorTransform"),
	HX_CSTRING("set_colorTransform"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("nmeObj"),
	HX_CSTRING("pixelBounds"),
	HX_CSTRING("concatenatedMatrix"),
	HX_CSTRING("concatenatedColorTransform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.geom.Transform"), hx::TCanCast< Transform_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Transform_obj::__boot()
{
}

} // end namespace native
} // end namespace geom
