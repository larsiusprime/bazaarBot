#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
namespace native{
namespace geom{

Void Point_obj::__construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY)
{
HX_STACK_PUSH("Point::new","native/geom/Point.hx",11);
Float inX = __o_inX.Default(0);
Float inY = __o_inY.Default(0);
{
	HX_STACK_LINE(12)
	this->x = inX;
	HX_STACK_LINE(13)
	this->y = inY;
}
;
	return null();
}

Point_obj::~Point_obj() { }

Dynamic Point_obj::__CreateEmpty() { return  new Point_obj; }
hx::ObjectPtr< Point_obj > Point_obj::__new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(__o_inX,__o_inY);
	return result;}

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float Point_obj::get_length( ){
	HX_STACK_PUSH("Point::get_length","native/geom/Point.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

::String Point_obj::toString( ){
	HX_STACK_PUSH("Point::toString","native/geom/Point.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	return ((((HX_CSTRING("(x=") + this->x) + HX_CSTRING(", y=")) + this->y) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

::native::geom::Point Point_obj::subtract( ::native::geom::Point v){
	HX_STACK_PUSH("Point::subtract","native/geom/Point.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(75)
	return ::native::geom::Point_obj::__new((this->x - v->x),(this->y - v->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

Void Point_obj::offset( Float dx,Float dy){
{
		HX_STACK_PUSH("Point::offset","native/geom/Point.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(65)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(66)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

Void Point_obj::normalize( Float thickness){
{
		HX_STACK_PUSH("Point::normalize","native/geom/Point.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(thickness,"thickness");
		HX_STACK_LINE(50)
		if (((bool((this->x == (int)0)) && bool((this->y == (int)0))))){
			HX_STACK_LINE(52)
			return null();
		}
		else{
			HX_STACK_LINE(57)
			Float norm = (Float(thickness) / Float(::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)))));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(58)
			hx::MultEq(this->x,norm);
			HX_STACK_LINE(59)
			hx::MultEq(this->y,norm);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

bool Point_obj::equals( ::native::geom::Point toCompare){
	HX_STACK_PUSH("Point::equals","native/geom/Point.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(toCompare,"toCompare");
	HX_STACK_LINE(40)
	return (bool((toCompare->x == this->x)) && bool((toCompare->y == this->y)));
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

Void Point_obj::copyFrom( ::native::geom::Point sourcePoint){
{
		HX_STACK_PUSH("Point::copyFrom","native/geom/Point.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sourcePoint,"sourcePoint");
		HX_STACK_LINE(28)
		this->x = sourcePoint->x;
		HX_STACK_LINE(29)
		this->y = sourcePoint->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

::native::geom::Point Point_obj::clone( ){
	HX_STACK_PUSH("Point::clone","native/geom/Point.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return ::native::geom::Point_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

::native::geom::Point Point_obj::add( ::native::geom::Point v){
	HX_STACK_PUSH("Point::add","native/geom/Point.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(17)
	return ::native::geom::Point_obj::__new((v->x + this->x),(v->y + this->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

Float Point_obj::distance( ::native::geom::Point pt1,::native::geom::Point pt2){
	HX_STACK_PUSH("Point::distance","native/geom/Point.hx",33);
	HX_STACK_ARG(pt1,"pt1");
	HX_STACK_ARG(pt2,"pt2");
	HX_STACK_LINE(34)
	Float dx = (pt1->x - pt2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(35)
	Float dy = (pt1->y - pt2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(36)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

::native::geom::Point Point_obj::interpolate( ::native::geom::Point pt1,::native::geom::Point pt2,Float f){
	HX_STACK_PUSH("Point::interpolate","native/geom/Point.hx",45);
	HX_STACK_ARG(pt1,"pt1");
	HX_STACK_ARG(pt2,"pt2");
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(45)
	return ::native::geom::Point_obj::__new((pt2->x + (f * ((pt1->x - pt2->x)))),(pt2->y + (f * ((pt1->y - pt2->y)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

::native::geom::Point Point_obj::polar( Float len,Float angle){
	HX_STACK_PUSH("Point::polar","native/geom/Point.hx",70);
	HX_STACK_ARG(len,"len");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(70)
	return ::native::geom::Point_obj::__new((len * ::Math_obj::cos(angle)),(len * ::Math_obj::sin(angle)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


Point_obj::Point_obj()
{
}

void Point_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Point);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void Point_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic Point_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { return polar_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Point_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("distance"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("polar"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_length"),
	HX_CSTRING("toString"),
	HX_CSTRING("subtract"),
	HX_CSTRING("offset"),
	HX_CSTRING("normalize"),
	HX_CSTRING("equals"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("clone"),
	HX_CSTRING("add"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

Class Point_obj::__mClass;

void Point_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.geom.Point"), hx::TCanCast< Point_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Point_obj::__boot()
{
}

} // end namespace native
} // end namespace geom
