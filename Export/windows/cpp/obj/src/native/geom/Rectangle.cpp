#include <hxcpp.h>

#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace native{
namespace geom{

Void Rectangle_obj::__construct(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight)
{
HX_STACK_PUSH("Rectangle::new","native/geom/Rectangle.hx",19);
{
	HX_STACK_LINE(20)
	this->x = (  (((inX == null()))) ? Float((int)0) : Float(inX) );
	HX_STACK_LINE(21)
	this->y = (  (((inY == null()))) ? Float((int)0) : Float(inY) );
	HX_STACK_LINE(22)
	this->width = (  (((inWidth == null()))) ? Float((int)0) : Float(inWidth) );
	HX_STACK_LINE(23)
	this->height = (  (((inHeight == null()))) ? Float((int)0) : Float(inHeight) );
}
;
	return null();
}

Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inX,inY,inWidth,inHeight);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::native::geom::Point Rectangle_obj::set_topLeft( ::native::geom::Point p){
	HX_STACK_PUSH("Rectangle::set_topLeft","native/geom/Rectangle.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(188)
	this->x = p->x;
	HX_STACK_LINE(188)
	this->y = p->y;
	HX_STACK_LINE(188)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )

::native::geom::Point Rectangle_obj::get_topLeft( ){
	HX_STACK_PUSH("Rectangle::get_topLeft","native/geom/Rectangle.hx",187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(187)
	return ::native::geom::Point_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

Float Rectangle_obj::set_top( Float t){
	HX_STACK_PUSH("Rectangle::set_top","native/geom/Rectangle.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(186)
	hx::SubEq(this->height,(t - this->y));
	HX_STACK_LINE(186)
	this->y = t;
	HX_STACK_LINE(186)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

Float Rectangle_obj::get_top( ){
	HX_STACK_PUSH("Rectangle::get_top","native/geom/Rectangle.hx",185);
	HX_STACK_THIS(this);
	HX_STACK_LINE(185)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

::native::geom::Point Rectangle_obj::set_size( ::native::geom::Point p){
	HX_STACK_PUSH("Rectangle::set_size","native/geom/Rectangle.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(184)
	this->width = p->x;
	HX_STACK_LINE(184)
	this->height = p->y;
	HX_STACK_LINE(184)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

::native::geom::Point Rectangle_obj::get_size( ){
	HX_STACK_PUSH("Rectangle::get_size","native/geom/Rectangle.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	return ::native::geom::Point_obj::__new(this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

Float Rectangle_obj::set_right( Float r){
	HX_STACK_PUSH("Rectangle::set_right","native/geom/Rectangle.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(182)
	this->width = (r - this->x);
	HX_STACK_LINE(182)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_PUSH("Rectangle::get_right","native/geom/Rectangle.hx",181);
	HX_STACK_THIS(this);
	HX_STACK_LINE(181)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_left( Float l){
	HX_STACK_PUSH("Rectangle::set_left","native/geom/Rectangle.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_ARG(l,"l");
	HX_STACK_LINE(180)
	hx::SubEq(this->width,(l - this->x));
	HX_STACK_LINE(180)
	this->x = l;
	HX_STACK_LINE(180)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_left( ){
	HX_STACK_PUSH("Rectangle::get_left","native/geom/Rectangle.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_LINE(179)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

::native::geom::Point Rectangle_obj::set_bottomRight( ::native::geom::Point p){
	HX_STACK_PUSH("Rectangle::set_bottomRight","native/geom/Rectangle.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(178)
	this->width = (p->x - this->x);
	HX_STACK_LINE(178)
	this->height = (p->y - this->y);
	HX_STACK_LINE(178)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

::native::geom::Point Rectangle_obj::get_bottomRight( ){
	HX_STACK_PUSH("Rectangle::get_bottomRight","native/geom/Rectangle.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(177)
	return ::native::geom::Point_obj::__new((this->x + this->width),(this->y + this->height));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

Float Rectangle_obj::set_bottom( Float b){
	HX_STACK_PUSH("Rectangle::set_bottom","native/geom/Rectangle.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(176)
	this->height = (b - this->y);
	HX_STACK_LINE(176)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

Float Rectangle_obj::get_bottom( ){
	HX_STACK_PUSH("Rectangle::get_bottom","native/geom/Rectangle.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(175)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

::native::geom::Rectangle Rectangle_obj::_union( ::native::geom::Rectangle toUnion){
	HX_STACK_PUSH("Rectangle::union","native/geom/Rectangle.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(toUnion,"toUnion");
	HX_STACK_LINE(167)
	Float x0 = (  (((this->x > toUnion->x))) ? Float(toUnion->x) : Float(this->x) );		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(168)
	Float x1 = (  (((this->get_right() < toUnion->get_right()))) ? Float(toUnion->get_right()) : Float(this->get_right()) );		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(169)
	Float y0 = (  (((this->y > toUnion->y))) ? Float(toUnion->y) : Float(this->y) );		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(170)
	Float y1 = (  (((this->get_bottom() < toUnion->get_bottom()))) ? Float(toUnion->get_bottom()) : Float(this->get_bottom()) );		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(171)
	return ::native::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

::native::geom::Rectangle Rectangle_obj::transform( ::native::geom::Matrix m){
	HX_STACK_PUSH("Rectangle::transform","native/geom/Rectangle.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(136)
	Float tx0 = ((m->a * this->x) + (m->c * this->y));		HX_STACK_VAR(tx0,"tx0");
	HX_STACK_LINE(137)
	Float tx1 = tx0;		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(138)
	Float ty0 = ((m->b * this->x) + (m->d * this->y));		HX_STACK_VAR(ty0,"ty0");
	HX_STACK_LINE(139)
	Float ty1 = tx0;		HX_STACK_VAR(ty1,"ty1");
	HX_STACK_LINE(141)
	Float tx = ((m->a * ((this->x + this->width))) + (m->c * this->y));		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(142)
	Float ty = ((m->b * ((this->x + this->width))) + (m->d * this->y));		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(143)
	if (((tx < tx0))){
		HX_STACK_LINE(143)
		tx0 = tx;
	}
	HX_STACK_LINE(144)
	if (((ty < ty0))){
		HX_STACK_LINE(144)
		ty0 = ty;
	}
	HX_STACK_LINE(145)
	if (((tx > tx1))){
		HX_STACK_LINE(145)
		tx1 = tx;
	}
	HX_STACK_LINE(146)
	if (((ty > ty1))){
		HX_STACK_LINE(146)
		ty1 = ty;
	}
	HX_STACK_LINE(148)
	tx = ((m->a * ((this->x + this->width))) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(149)
	ty = ((m->b * ((this->x + this->width))) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(150)
	if (((tx < tx0))){
		HX_STACK_LINE(150)
		tx0 = tx;
	}
	HX_STACK_LINE(151)
	if (((ty < ty0))){
		HX_STACK_LINE(151)
		ty0 = ty;
	}
	HX_STACK_LINE(152)
	if (((tx > tx1))){
		HX_STACK_LINE(152)
		tx1 = tx;
	}
	HX_STACK_LINE(153)
	if (((ty > ty1))){
		HX_STACK_LINE(153)
		ty1 = ty;
	}
	HX_STACK_LINE(155)
	tx = ((m->a * this->x) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(156)
	ty = ((m->b * this->x) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(157)
	if (((tx < tx0))){
		HX_STACK_LINE(157)
		tx0 = tx;
	}
	HX_STACK_LINE(158)
	if (((ty < ty0))){
		HX_STACK_LINE(158)
		ty0 = ty;
	}
	HX_STACK_LINE(159)
	if (((tx > tx1))){
		HX_STACK_LINE(159)
		tx1 = tx;
	}
	HX_STACK_LINE(160)
	if (((ty > ty1))){
		HX_STACK_LINE(160)
		ty1 = ty;
	}
	HX_STACK_LINE(162)
	return ::native::geom::Rectangle_obj::__new((tx0 + m->tx),(ty0 + m->ty),(tx1 - tx0),(ty1 - ty0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,transform,return )

Void Rectangle_obj::setEmpty( ){
{
		HX_STACK_PUSH("Rectangle::setEmpty","native/geom/Rectangle.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_LINE(130)
		this->x = this->y = this->width = this->height = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

Void Rectangle_obj::offsetPoint( ::native::geom::Point point){
{
		HX_STACK_PUSH("Rectangle::offsetPoint","native/geom/Rectangle.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(125)
		hx::AddEq(this->x,point->x);
		HX_STACK_LINE(126)
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::offset( Float dx,Float dy){
{
		HX_STACK_PUSH("Rectangle::offset","native/geom/Rectangle.hx",118);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(119)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(120)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

bool Rectangle_obj::isEmpty( ){
	HX_STACK_PUSH("Rectangle::isEmpty","native/geom/Rectangle.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(113)
	return (bool((this->width == (int)0)) && bool((this->height == (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

bool Rectangle_obj::intersects( ::native::geom::Rectangle toIntersect){
	HX_STACK_PUSH("Rectangle::intersects","native/geom/Rectangle.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(toIntersect,"toIntersect");
	HX_STACK_LINE(102)
	Float x0 = (  (((this->x < toIntersect->x))) ? Float(toIntersect->x) : Float(this->x) );		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(103)
	Float x1 = (  (((this->get_right() > toIntersect->get_right()))) ? Float(toIntersect->get_right()) : Float(this->get_right()) );		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(104)
	if (((x1 <= x0))){
		HX_STACK_LINE(105)
		return false;
	}
	HX_STACK_LINE(107)
	Float y0 = (  (((this->y < toIntersect->y))) ? Float(toIntersect->y) : Float(this->y) );		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(108)
	Float y1 = (  (((this->get_bottom() > toIntersect->get_bottom()))) ? Float(toIntersect->get_bottom()) : Float(this->get_bottom()) );		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(109)
	return (y1 > y0);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

::native::geom::Rectangle Rectangle_obj::intersection( ::native::geom::Rectangle toIntersect){
	HX_STACK_PUSH("Rectangle::intersection","native/geom/Rectangle.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(toIntersect,"toIntersect");
	HX_STACK_LINE(87)
	Float x0 = (  (((this->x < toIntersect->x))) ? Float(toIntersect->x) : Float(this->x) );		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(88)
	Float x1 = (  (((this->get_right() > toIntersect->get_right()))) ? Float(toIntersect->get_right()) : Float(this->get_right()) );		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(89)
	if (((x1 <= x0))){
		HX_STACK_LINE(90)
		return ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(92)
	Float y0 = (  (((this->y < toIntersect->y))) ? Float(toIntersect->y) : Float(this->y) );		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(93)
	Float y1 = (  (((this->get_bottom() > toIntersect->get_bottom()))) ? Float(toIntersect->get_bottom()) : Float(this->get_bottom()) );		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(94)
	if (((y1 <= y0))){
		HX_STACK_LINE(95)
		return ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(97)
	return ::native::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

Void Rectangle_obj::inflatePoint( ::native::geom::Point point){
{
		HX_STACK_PUSH("Rectangle::inflatePoint","native/geom/Rectangle.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(81)
		this->inflate(point->x,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		HX_STACK_PUSH("Rectangle::inflate","native/geom/Rectangle.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(76)
		hx::SubEq(this->x,dx);
		HX_STACK_LINE(76)
		hx::AddEq(this->width,(dx * (int)2));
		HX_STACK_LINE(77)
		hx::SubEq(this->y,dy);
		HX_STACK_LINE(77)
		hx::AddEq(this->height,(dy * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::extendBounds( ::native::geom::Rectangle r){
{
		HX_STACK_PUSH("Rectangle::extendBounds","native/geom/Rectangle.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(53)
		Float dx = (this->x - r->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(54)
		if (((dx > (int)0))){
			HX_STACK_LINE(56)
			hx::SubEq(this->x,dx);
			HX_STACK_LINE(57)
			hx::AddEq(this->width,dx);
		}
		HX_STACK_LINE(60)
		Float dy = (this->y - r->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(61)
		if (((dy > (int)0))){
			HX_STACK_LINE(63)
			hx::SubEq(this->y,dy);
			HX_STACK_LINE(64)
			hx::AddEq(this->height,dy);
		}
		HX_STACK_LINE(67)
		if (((r->get_right() > this->get_right()))){
			HX_STACK_LINE(68)
			this->set_right(r->get_right());
		}
		HX_STACK_LINE(70)
		if (((r->get_bottom() > this->get_bottom()))){
			HX_STACK_LINE(71)
			this->set_bottom(r->get_bottom());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,extendBounds,(void))

bool Rectangle_obj::equals( ::native::geom::Rectangle toCompare){
	HX_STACK_PUSH("Rectangle::equals","native/geom/Rectangle.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(toCompare,"toCompare");
	HX_STACK_LINE(47)
	return (bool((bool((bool((this->x == toCompare->x)) && bool((this->y == toCompare->y)))) && bool((this->width == toCompare->width)))) && bool((this->height == toCompare->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

bool Rectangle_obj::containsRect( ::native::geom::Rectangle rect){
	HX_STACK_PUSH("Rectangle::containsRect","native/geom/Rectangle.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(42)
	return (bool(this->contains(rect->x,rect->y)) && bool(this->containsPoint(rect->get_bottomRight())));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

bool Rectangle_obj::containsPoint( ::native::geom::Point point){
	HX_STACK_PUSH("Rectangle::containsPoint","native/geom/Rectangle.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(37)
	return this->contains(point->x,point->y);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::contains( Float inX,Float inY){
	HX_STACK_PUSH("Rectangle::contains","native/geom/Rectangle.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inX,"inX");
	HX_STACK_ARG(inY,"inY");
	HX_STACK_LINE(32)
	return (bool((bool((bool((inX >= this->x)) && bool((inY >= this->y)))) && bool((inX < this->get_right())))) && bool((inY < this->get_bottom())));
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

::native::geom::Rectangle Rectangle_obj::clone( ){
	HX_STACK_PUSH("Rectangle::clone","native/geom/Rectangle.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return ::native::geom::Rectangle_obj::__new(this->x,this->y,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )


Rectangle_obj::Rectangle_obj()
{
}

void Rectangle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rectangle);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Rectangle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic Rectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"topLeft") ) { return get_topLeft(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return get_bottomRight(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"extendBounds") ) { return extendBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("topLeft"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("bottomRight"));
	outFields->push(HX_CSTRING("bottom"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_topLeft"),
	HX_CSTRING("get_topLeft"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_top"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_right"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_left"),
	HX_CSTRING("set_bottomRight"),
	HX_CSTRING("get_bottomRight"),
	HX_CSTRING("set_bottom"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("union"),
	HX_CSTRING("transform"),
	HX_CSTRING("setEmpty"),
	HX_CSTRING("offsetPoint"),
	HX_CSTRING("offset"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("intersects"),
	HX_CSTRING("intersection"),
	HX_CSTRING("inflatePoint"),
	HX_CSTRING("inflate"),
	HX_CSTRING("extendBounds"),
	HX_CSTRING("equals"),
	HX_CSTRING("containsRect"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("contains"),
	HX_CSTRING("clone"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.geom.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Rectangle_obj::__boot()
{
}

} // end namespace native
} // end namespace geom
