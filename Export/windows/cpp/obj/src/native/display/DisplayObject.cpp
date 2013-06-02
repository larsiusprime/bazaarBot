#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_display_BlendMode
#include <native/display/BlendMode.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_LoaderInfo
#include <native/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_EventPhase
#include <native/events/EventPhase.h>
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
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_native_geom_Transform
#include <native/geom/Transform.h>
#endif
#ifndef INCLUDED_native_net_URLLoader
#include <native/net/URLLoader.h>
#endif
namespace native{
namespace display{

Void DisplayObject_obj::__construct(Dynamic inHandle,::String inType)
{
HX_STACK_PUSH("DisplayObject::new","native/display/DisplayObject.hx",59);
{
	HX_STACK_LINE(60)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(62)
	this->nmeParent = null();
	HX_STACK_LINE(63)
	this->nmeHandle = inHandle;
	HX_STACK_LINE(64)
	this->nmeID = ::native::display::DisplayObject_obj::nme_display_object_get_id(this->nmeHandle);
	HX_STACK_LINE(65)
	this->set_name(((inType + HX_CSTRING(" ")) + this->nmeID));
}
;
	return null();
}

DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new(Dynamic inHandle,::String inType)
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct(inHandle,inType);
	return result;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::native::display::IBitmapDrawable_obj)) return operator ::native::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

Float DisplayObject_obj::set_y( Float inVal){
	HX_STACK_PUSH("DisplayObject::set_y","native/display/DisplayObject.hx",548);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(549)
	::native::display::DisplayObject_obj::nme_display_object_set_y(this->nmeHandle,inVal);
	HX_STACK_LINE(550)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_PUSH("DisplayObject::get_y","native/display/DisplayObject.hx",546);
	HX_STACK_THIS(this);
	HX_STACK_LINE(546)
	return ::native::display::DisplayObject_obj::nme_display_object_get_y(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_x( Float inVal){
	HX_STACK_PUSH("DisplayObject::set_x","native/display/DisplayObject.hx",541);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(542)
	::native::display::DisplayObject_obj::nme_display_object_set_x(this->nmeHandle,inVal);
	HX_STACK_LINE(543)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_PUSH("DisplayObject::get_x","native/display/DisplayObject.hx",539);
	HX_STACK_THIS(this);
	HX_STACK_LINE(539)
	return ::native::display::DisplayObject_obj::nme_display_object_get_x(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_width( Float inVal){
	HX_STACK_PUSH("DisplayObject::set_width","native/display/DisplayObject.hx",534);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(535)
	::native::display::DisplayObject_obj::nme_display_object_set_width(this->nmeHandle,inVal);
	HX_STACK_LINE(536)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_PUSH("DisplayObject::get_width","native/display/DisplayObject.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_LINE(532)
	return ::native::display::DisplayObject_obj::nme_display_object_get_width(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

bool DisplayObject_obj::set_visible( bool inVal){
	HX_STACK_PUSH("DisplayObject::set_visible","native/display/DisplayObject.hx",527);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(528)
	::native::display::DisplayObject_obj::nme_display_object_set_visible(this->nmeHandle,inVal);
	HX_STACK_LINE(529)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_PUSH("DisplayObject::get_visible","native/display/DisplayObject.hx",525);
	HX_STACK_THIS(this);
	HX_STACK_LINE(525)
	return ::native::display::DisplayObject_obj::nme_display_object_get_visible(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

::native::geom::Transform DisplayObject_obj::set_transform( ::native::geom::Transform inTransform){
	HX_STACK_PUSH("DisplayObject::set_transform","native/display/DisplayObject.hx",519);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inTransform,"inTransform");
	HX_STACK_LINE(520)
	this->nmeSetMatrix(inTransform->get_matrix());
	HX_STACK_LINE(521)
	this->nmeSetColorTransform(inTransform->get_colorTransform());
	HX_STACK_LINE(522)
	return inTransform;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

::native::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_PUSH("DisplayObject::get_transform","native/display/DisplayObject.hx",517);
	HX_STACK_THIS(this);
	HX_STACK_LINE(517)
	return ::native::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::native::display::Stage DisplayObject_obj::get_stage( ){
	HX_STACK_PUSH("DisplayObject::get_stage","native/display/DisplayObject.hx",510);
	HX_STACK_THIS(this);
	HX_STACK_LINE(511)
	if (((this->nmeParent != null()))){
		HX_STACK_LINE(512)
		return this->nmeParent->get_stage();
	}
	HX_STACK_LINE(514)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_stage,return )

::native::geom::Rectangle DisplayObject_obj::set_scrollRect( ::native::geom::Rectangle inRect){
	HX_STACK_PUSH("DisplayObject::set_scrollRect","native/display/DisplayObject.hx",503);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inRect,"inRect");
	HX_STACK_LINE(504)
	this->nmeScrollRect = (  (((inRect == null()))) ? ::native::geom::Rectangle(null()) : ::native::geom::Rectangle(inRect->clone()) );
	HX_STACK_LINE(505)
	::native::display::DisplayObject_obj::nme_display_object_set_scroll_rect(this->nmeHandle,this->nmeScrollRect);
	HX_STACK_LINE(506)
	return inRect;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::native::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_PUSH("DisplayObject::get_scrollRect","native/display/DisplayObject.hx",501);
	HX_STACK_THIS(this);
	HX_STACK_LINE(501)
	return (  (((this->nmeScrollRect == null()))) ? ::native::geom::Rectangle(null()) : ::native::geom::Rectangle(this->nmeScrollRect->clone()) );
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

Float DisplayObject_obj::set_scaleY( Float inVal){
	HX_STACK_PUSH("DisplayObject::set_scaleY","native/display/DisplayObject.hx",496);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(497)
	::native::display::DisplayObject_obj::nme_display_object_set_scale_y(this->nmeHandle,inVal);
	HX_STACK_LINE(498)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_PUSH("DisplayObject::get_scaleY","native/display/DisplayObject.hx",494);
	HX_STACK_THIS(this);
	HX_STACK_LINE(494)
	return ::native::display::DisplayObject_obj::nme_display_object_get_scale_y(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleX( Float inVal){
	HX_STACK_PUSH("DisplayObject::set_scaleX","native/display/DisplayObject.hx",489);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(490)
	::native::display::DisplayObject_obj::nme_display_object_set_scale_x(this->nmeHandle,inVal);
	HX_STACK_LINE(491)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_PUSH("DisplayObject::get_scaleX","native/display/DisplayObject.hx",487);
	HX_STACK_THIS(this);
	HX_STACK_LINE(487)
	return ::native::display::DisplayObject_obj::nme_display_object_get_scale_x(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

::native::geom::Rectangle DisplayObject_obj::set_scale9Grid( ::native::geom::Rectangle inRect){
	HX_STACK_PUSH("DisplayObject::set_scale9Grid","native/display/DisplayObject.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inRect,"inRect");
	HX_STACK_LINE(482)
	this->nmeScale9Grid = (  (((inRect == null()))) ? ::native::geom::Rectangle(null()) : ::native::geom::Rectangle(inRect->clone()) );
	HX_STACK_LINE(483)
	::native::display::DisplayObject_obj::nme_display_object_set_scale9_grid(this->nmeHandle,this->nmeScale9Grid);
	HX_STACK_LINE(484)
	return inRect;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scale9Grid,return )

::native::geom::Rectangle DisplayObject_obj::get_scale9Grid( ){
	HX_STACK_PUSH("DisplayObject::get_scale9Grid","native/display/DisplayObject.hx",479);
	HX_STACK_THIS(this);
	HX_STACK_LINE(479)
	return (  (((this->nmeScale9Grid == null()))) ? ::native::geom::Rectangle(null()) : ::native::geom::Rectangle(this->nmeScale9Grid->clone()) );
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scale9Grid,return )

Float DisplayObject_obj::set_rotation( Float inVal){
	HX_STACK_PUSH("DisplayObject::set_rotation","native/display/DisplayObject.hx",474);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(475)
	::native::display::DisplayObject_obj::nme_display_object_set_rotation(this->nmeHandle,inVal);
	HX_STACK_LINE(476)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_PUSH("DisplayObject::get_rotation","native/display/DisplayObject.hx",472);
	HX_STACK_THIS(this);
	HX_STACK_LINE(472)
	return ::native::display::DisplayObject_obj::nme_display_object_get_rotation(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

::native::display::DisplayObjectContainer DisplayObject_obj::get_parent( ){
	HX_STACK_PUSH("DisplayObject::get_parent","native/display/DisplayObject.hx",470);
	HX_STACK_THIS(this);
	HX_STACK_LINE(470)
	return this->nmeParent;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_parent,return )

::String DisplayObject_obj::set_name( ::String inVal){
	HX_STACK_PUSH("DisplayObject::set_name","native/display/DisplayObject.hx",465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(466)
	::native::display::DisplayObject_obj::nme_display_object_set_name(this->nmeHandle,inVal);
	HX_STACK_LINE(467)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_PUSH("DisplayObject::get_name","native/display/DisplayObject.hx",463);
	HX_STACK_THIS(this);
	HX_STACK_LINE(463)
	return ::native::display::DisplayObject_obj::nme_display_object_get_name(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_PUSH("DisplayObject::get_mouseY","native/display/DisplayObject.hx",461);
	HX_STACK_THIS(this);
	HX_STACK_LINE(461)
	return ::native::display::DisplayObject_obj::nme_display_object_get_mouse_y(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_PUSH("DisplayObject::get_mouseX","native/display/DisplayObject.hx",460);
	HX_STACK_THIS(this);
	HX_STACK_LINE(460)
	return ::native::display::DisplayObject_obj::nme_display_object_get_mouse_x(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

::native::display::DisplayObject DisplayObject_obj::set_mask( ::native::display::DisplayObject inObject){
	HX_STACK_PUSH("DisplayObject::set_mask","native/display/DisplayObject.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inObject,"inObject");
	HX_STACK_LINE(455)
	this->mask = inObject;
	HX_STACK_LINE(456)
	::native::display::DisplayObject_obj::nme_display_object_set_mask(this->nmeHandle,(  (((inObject == null()))) ? Dynamic(null()) : Dynamic(inObject->nmeHandle) ));
	HX_STACK_LINE(457)
	return inObject;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::set_height( Float inVal){
	HX_STACK_PUSH("DisplayObject::set_height","native/display/DisplayObject.hx",448);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(449)
	::native::display::DisplayObject_obj::nme_display_object_set_height(this->nmeHandle,inVal);
	HX_STACK_LINE(450)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_PUSH("DisplayObject::get_height","native/display/DisplayObject.hx",446);
	HX_STACK_THIS(this);
	HX_STACK_LINE(446)
	return ::native::display::DisplayObject_obj::nme_display_object_get_height(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

::native::display::Graphics DisplayObject_obj::get_graphics( ){
	HX_STACK_PUSH("DisplayObject::get_graphics","native/display/DisplayObject.hx",439);
	HX_STACK_THIS(this);
	HX_STACK_LINE(440)
	if (((this->nmeGraphicsCache == null()))){
		HX_STACK_LINE(441)
		this->nmeGraphicsCache = ::native::display::Graphics_obj::__new(::native::display::DisplayObject_obj::nme_display_object_get_graphics(this->nmeHandle));
	}
	HX_STACK_LINE(443)
	return this->nmeGraphicsCache;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_graphics,return )

Dynamic DisplayObject_obj::set_filters( Dynamic inFilters){
	HX_STACK_PUSH("DisplayObject::set_filters","native/display/DisplayObject.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inFilters,"inFilters");
	HX_STACK_LINE(421)
	if (((inFilters == null()))){
		HX_STACK_LINE(422)
		this->nmeFilters = null();
	}
	else{
		HX_STACK_LINE(427)
		this->nmeFilters = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(429)
			while(((_g < inFilters->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(429)
				Dynamic filter = inFilters->__GetItem(_g);		HX_STACK_VAR(filter,"filter");
				HX_STACK_LINE(429)
				++(_g);
				HX_STACK_LINE(430)
				this->nmeFilters->__Field(HX_CSTRING("push"),true)(filter->__Field(HX_CSTRING("clone"),true)());
			}
		}
	}
	HX_STACK_LINE(433)
	::native::display::DisplayObject_obj::nme_display_object_set_filters(this->nmeHandle,this->nmeFilters);
	HX_STACK_LINE(435)
	return inFilters;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Dynamic DisplayObject_obj::get_filters( ){
	HX_STACK_PUSH("DisplayObject::get_filters","native/display/DisplayObject.hx",408);
	HX_STACK_THIS(this);
	HX_STACK_LINE(409)
	if (((this->nmeFilters == null()))){
		HX_STACK_LINE(409)
		return Dynamic( Array_obj<Dynamic>::__new());
	}
	HX_STACK_LINE(411)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(413)
	{
		HX_STACK_LINE(413)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Dynamic _g1 = this->nmeFilters;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(413)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(413)
			Dynamic filter = _g1->__GetItem(_g);		HX_STACK_VAR(filter,"filter");
			HX_STACK_LINE(413)
			++(_g);
			HX_STACK_LINE(414)
			result->__Field(HX_CSTRING("push"),true)(filter->__Field(HX_CSTRING("clone"),true)());
		}
	}
	HX_STACK_LINE(416)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

::native::display::PixelSnapping DisplayObject_obj::set_pixelSnapping( ::native::display::PixelSnapping inVal){
	HX_STACK_PUSH("DisplayObject::set_pixelSnapping","native/display/DisplayObject.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(395)
	if (((inVal == null()))){
		HX_STACK_LINE(396)
		::native::display::DisplayObject_obj::nme_display_object_set_pixel_snapping(this->nmeHandle,(int)0);
	}
	else{
		HX_STACK_LINE(400)
		::native::display::DisplayObject_obj::nme_display_object_set_pixel_snapping(this->nmeHandle,inVal->__Index());
	}
	HX_STACK_LINE(404)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_pixelSnapping,return )

::native::display::PixelSnapping DisplayObject_obj::get_pixelSnapping( ){
	HX_STACK_PUSH("DisplayObject::get_pixelSnapping","native/display/DisplayObject.hx",388);
	HX_STACK_THIS(this);
	HX_STACK_LINE(389)
	int val = ::native::display::DisplayObject_obj::nme_display_object_get_pixel_snapping(this->nmeHandle);		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(390)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::native::display::PixelSnapping >(),val,null());
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_pixelSnapping,return )

bool DisplayObject_obj::set_pedanticBitmapCaching( bool inVal){
	HX_STACK_PUSH("DisplayObject::set_pedanticBitmapCaching","native/display/DisplayObject.hx",382);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(383)
	::native::display::DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching(this->nmeHandle,inVal);
	HX_STACK_LINE(384)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_pedanticBitmapCaching,return )

bool DisplayObject_obj::get_pedanticBitmapCaching( ){
	HX_STACK_PUSH("DisplayObject::get_pedanticBitmapCaching","native/display/DisplayObject.hx",380);
	HX_STACK_THIS(this);
	HX_STACK_LINE(380)
	return ::native::display::DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_pedanticBitmapCaching,return )

bool DisplayObject_obj::set_cacheAsBitmap( bool inVal){
	HX_STACK_PUSH("DisplayObject::set_cacheAsBitmap","native/display/DisplayObject.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(376)
	::native::display::DisplayObject_obj::nme_display_object_set_cache_as_bitmap(this->nmeHandle,inVal);
	HX_STACK_LINE(377)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

bool DisplayObject_obj::get_cacheAsBitmap( ){
	HX_STACK_PUSH("DisplayObject::get_cacheAsBitmap","native/display/DisplayObject.hx",373);
	HX_STACK_THIS(this);
	HX_STACK_LINE(373)
	return ::native::display::DisplayObject_obj::nme_display_object_get_cache_as_bitmap(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

::native::display::BlendMode DisplayObject_obj::set_blendMode( ::native::display::BlendMode inMode){
	HX_STACK_PUSH("DisplayObject::set_blendMode","native/display/DisplayObject.hx",368);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inMode,"inMode");
	HX_STACK_LINE(369)
	::native::display::DisplayObject_obj::nme_display_object_set_blend_mode(this->nmeHandle,inMode->__Index());
	HX_STACK_LINE(370)
	return inMode;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

::native::display::BlendMode DisplayObject_obj::get_blendMode( ){
	HX_STACK_PUSH("DisplayObject::get_blendMode","native/display/DisplayObject.hx",362);
	HX_STACK_THIS(this);
	HX_STACK_LINE(363)
	int i = ::native::display::DisplayObject_obj::nme_display_object_get_blend_mode(this->nmeHandle);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(364)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::native::display::BlendMode >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_blendMode,return )

Dynamic DisplayObject_obj::set_opaqueBackground( Dynamic inBG){
	HX_STACK_PUSH("DisplayObject::set_opaqueBackground","native/display/DisplayObject.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inBG,"inBG");
	HX_STACK_LINE(353)
	if (((inBG == null()))){
		HX_STACK_LINE(354)
		::native::display::DisplayObject_obj::nme_display_object_set_bg(this->nmeHandle,(int)0);
	}
	else{
		HX_STACK_LINE(356)
		::native::display::DisplayObject_obj::nme_display_object_set_bg(this->nmeHandle,inBG);
	}
	HX_STACK_LINE(358)
	return inBG;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_opaqueBackground,return )

Dynamic DisplayObject_obj::get_opaqueBackground( ){
	HX_STACK_PUSH("DisplayObject::get_opaqueBackground","native/display/DisplayObject.hx",343);
	HX_STACK_THIS(this);
	HX_STACK_LINE(344)
	int i = ::native::display::DisplayObject_obj::nme_display_object_get_bg(this->nmeHandle);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(345)
	if (((((int(i) & int((int)16777216))) == (int)0))){
		HX_STACK_LINE(346)
		return null();
	}
	HX_STACK_LINE(348)
	return (int(i) & int((int)16777215));
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_opaqueBackground,return )

Float DisplayObject_obj::set_alpha( Float inAlpha){
	HX_STACK_PUSH("DisplayObject::set_alpha","native/display/DisplayObject.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inAlpha,"inAlpha");
	HX_STACK_LINE(338)
	::native::display::DisplayObject_obj::nme_display_object_set_alpha(this->nmeHandle,inAlpha);
	HX_STACK_LINE(339)
	return inAlpha;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_PUSH("DisplayObject::get_alpha","native/display/DisplayObject.hx",335);
	HX_STACK_THIS(this);
	HX_STACK_LINE(335)
	return ::native::display::DisplayObject_obj::nme_display_object_get_alpha(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

::String DisplayObject_obj::toString( ){
	HX_STACK_PUSH("DisplayObject::toString","native/display/DisplayObject.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_LINE(330)
	return this->get_name();
}


::native::display::DisplayObjectContainer DisplayObject_obj::nmeSetParent( ::native::display::DisplayObjectContainer inParent){
	HX_STACK_PUSH("DisplayObject::nmeSetParent","native/display/DisplayObject.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inParent,"inParent");
	HX_STACK_LINE(304)
	if (((inParent == this->nmeParent))){
		HX_STACK_LINE(305)
		return inParent;
	}
	HX_STACK_LINE(307)
	if (((this->nmeParent != null()))){
		HX_STACK_LINE(308)
		this->nmeParent->nmeRemoveChildFromArray(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(310)
	if (((bool((this->nmeParent == null())) && bool((inParent != null()))))){
		HX_STACK_LINE(312)
		this->nmeParent = inParent;
		HX_STACK_LINE(313)
		this->nmeOnAdded(hx::ObjectPtr<OBJ_>(this),(this->get_stage() != null()));
	}
	else{
		HX_STACK_LINE(315)
		if (((bool((this->nmeParent != null())) && bool((inParent == null()))))){
			HX_STACK_LINE(317)
			bool was_on_stage = (this->get_stage() != null());		HX_STACK_VAR(was_on_stage,"was_on_stage");
			HX_STACK_LINE(318)
			this->nmeParent = inParent;
			HX_STACK_LINE(319)
			this->nmeOnRemoved(hx::ObjectPtr<OBJ_>(this),was_on_stage);
		}
		else{
			HX_STACK_LINE(322)
			this->nmeParent = inParent;
		}
	}
	HX_STACK_LINE(326)
	return inParent;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetParent,return )

Void DisplayObject_obj::nmeSetMatrix( ::native::geom::Matrix inMatrix){
{
		HX_STACK_PUSH("DisplayObject::nmeSetMatrix","native/display/DisplayObject.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inMatrix,"inMatrix");
		HX_STACK_LINE(299)
		::native::display::DisplayObject_obj::nme_display_object_set_matrix(this->nmeHandle,inMatrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetMatrix,(void))

Void DisplayObject_obj::nmeSetColorTransform( ::native::geom::ColorTransform inTrans){
{
		HX_STACK_PUSH("DisplayObject::nmeSetColorTransform","native/display/DisplayObject.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inTrans,"inTrans");
		HX_STACK_LINE(295)
		::native::display::DisplayObject_obj::nme_display_object_set_color_transform(this->nmeHandle,inTrans);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetColorTransform,(void))

Void DisplayObject_obj::nmeOnRemoved( ::native::display::DisplayObject inObj,bool inWasOnStage){
{
		HX_STACK_PUSH("DisplayObject::nmeOnRemoved","native/display/DisplayObject.hx",279);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inObj,"inObj");
		HX_STACK_ARG(inWasOnStage,"inWasOnStage");
		HX_STACK_LINE(280)
		if (((inObj == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(282)
			::native::events::Event evt = ::native::events::Event_obj::__new(::native::events::Event_obj::REMOVED,true,false);		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(283)
			evt->set_target(inObj);
			HX_STACK_LINE(284)
			this->dispatchEvent(evt);
		}
		HX_STACK_LINE(287)
		if ((inWasOnStage)){
			HX_STACK_LINE(289)
			::native::events::Event evt = ::native::events::Event_obj::__new(::native::events::Event_obj::REMOVED_FROM_STAGE,false,false);		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(290)
			evt->set_target(inObj);
			HX_STACK_LINE(291)
			this->dispatchEvent(evt);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeOnRemoved,(void))

Void DisplayObject_obj::nmeOnAdded( ::native::display::DisplayObject inObj,bool inIsOnStage){
{
		HX_STACK_PUSH("DisplayObject::nmeOnAdded","native/display/DisplayObject.hx",263);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inObj,"inObj");
		HX_STACK_ARG(inIsOnStage,"inIsOnStage");
		HX_STACK_LINE(264)
		if (((inObj == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(266)
			::native::events::Event evt = ::native::events::Event_obj::__new(::native::events::Event_obj::ADDED,true,false);		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(267)
			evt->set_target(inObj);
			HX_STACK_LINE(268)
			this->dispatchEvent(evt);
		}
		HX_STACK_LINE(271)
		if ((inIsOnStage)){
			HX_STACK_LINE(273)
			::native::events::Event evt = ::native::events::Event_obj::__new(::native::events::Event_obj::ADDED_TO_STAGE,false,false);		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(274)
			evt->set_target(inObj);
			HX_STACK_LINE(275)
			this->dispatchEvent(evt);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeOnAdded,(void))

::native::geom::Rectangle DisplayObject_obj::nmeGetPixelBounds( ){
	HX_STACK_PUSH("DisplayObject::nmeGetPixelBounds","native/display/DisplayObject.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_LINE(258)
	::native::geom::Rectangle rect = ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(259)
	::native::display::DisplayObject_obj::nme_display_object_get_pixel_bounds(this->nmeHandle,rect);
	HX_STACK_LINE(260)
	return rect;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetPixelBounds,return )

Void DisplayObject_obj::nmeGetObjectsUnderPoint( ::native::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_PUSH("DisplayObject::nmeGetObjectsUnderPoint","native/display/DisplayObject.hx",252);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(result,"result");
		HX_STACK_LINE(252)
		if ((::native::display::DisplayObject_obj::nme_display_object_hit_test_point(this->nmeHandle,point->x,point->y,true,false))){
			HX_STACK_LINE(254)
			result->push(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeGetObjectsUnderPoint,(void))

::native::geom::Matrix DisplayObject_obj::nmeGetMatrix( ){
	HX_STACK_PUSH("DisplayObject::nmeGetMatrix","native/display/DisplayObject.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_LINE(247)
	::native::geom::Matrix mtx = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
	HX_STACK_LINE(248)
	::native::display::DisplayObject_obj::nme_display_object_get_matrix(this->nmeHandle,mtx,false);
	HX_STACK_LINE(249)
	return mtx;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetMatrix,return )

Void DisplayObject_obj::nmeGetInteractiveObjectStack( Array< ::Dynamic > outStack){
{
		HX_STACK_PUSH("DisplayObject::nmeGetInteractiveObjectStack","native/display/DisplayObject.hx",236);
		HX_STACK_THIS(this);
		HX_STACK_ARG(outStack,"outStack");
		HX_STACK_LINE(237)
		::native::display::InteractiveObject io = this->nmeAsInteractiveObject();		HX_STACK_VAR(io,"io");
		HX_STACK_LINE(239)
		if (((io != null()))){
			HX_STACK_LINE(240)
			outStack->push(io);
		}
		HX_STACK_LINE(242)
		if (((this->nmeParent != null()))){
			HX_STACK_LINE(243)
			this->nmeParent->nmeGetInteractiveObjectStack(outStack);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeGetInteractiveObjectStack,(void))

::native::geom::Matrix DisplayObject_obj::nmeGetConcatenatedMatrix( ){
	HX_STACK_PUSH("DisplayObject::nmeGetConcatenatedMatrix","native/display/DisplayObject.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_LINE(231)
	::native::geom::Matrix mtx = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
	HX_STACK_LINE(232)
	::native::display::DisplayObject_obj::nme_display_object_get_matrix(this->nmeHandle,mtx,true);
	HX_STACK_LINE(233)
	return mtx;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetConcatenatedMatrix,return )

::native::geom::ColorTransform DisplayObject_obj::nmeGetConcatenatedColorTransform( ){
	HX_STACK_PUSH("DisplayObject::nmeGetConcatenatedColorTransform","native/display/DisplayObject.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(225)
	::native::geom::ColorTransform trans = ::native::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(trans,"trans");
	HX_STACK_LINE(226)
	::native::display::DisplayObject_obj::nme_display_object_get_color_transform(this->nmeHandle,trans,true);
	HX_STACK_LINE(227)
	return trans;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetConcatenatedColorTransform,return )

::native::geom::ColorTransform DisplayObject_obj::nmeGetColorTransform( ){
	HX_STACK_PUSH("DisplayObject::nmeGetColorTransform","native/display/DisplayObject.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	::native::geom::ColorTransform trans = ::native::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(trans,"trans");
	HX_STACK_LINE(220)
	::native::display::DisplayObject_obj::nme_display_object_get_color_transform(this->nmeHandle,trans,false);
	HX_STACK_LINE(221)
	return trans;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetColorTransform,return )

Void DisplayObject_obj::nmeFireEvent( ::native::events::Event inEvt){
{
		HX_STACK_PUSH("DisplayObject::nmeFireEvent","native/display/DisplayObject.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inEvt,"inEvt");
		HX_STACK_LINE(170)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(172)
		if (((this->nmeParent != null()))){
			HX_STACK_LINE(173)
			this->nmeParent->nmeGetInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(175)
		int l = stack->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(177)
		if (((l > (int)0))){
			HX_STACK_LINE(180)
			inEvt->nmeSetPhase(::native::events::EventPhase_obj::CAPTURING_PHASE);
			HX_STACK_LINE(181)
			stack->reverse();
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(183)
				while(((_g < stack->length))){
					HX_STACK_LINE(183)
					::native::display::InteractiveObject obj = stack->__get(_g).StaticCast< ::native::display::InteractiveObject >();		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(183)
					++(_g);
					HX_STACK_LINE(185)
					inEvt->set_currentTarget(obj);
					HX_STACK_LINE(186)
					obj->nmeDispatchEvent(inEvt);
					HX_STACK_LINE(188)
					if ((inEvt->nmeGetIsCancelled())){
						HX_STACK_LINE(189)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(194)
		inEvt->nmeSetPhase(::native::events::EventPhase_obj::AT_TARGET);
		HX_STACK_LINE(195)
		inEvt->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(196)
		this->nmeDispatchEvent(inEvt);
		HX_STACK_LINE(198)
		if ((inEvt->nmeGetIsCancelled())){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(202)
		if ((inEvt->get_bubbles())){
			HX_STACK_LINE(204)
			inEvt->nmeSetPhase(::native::events::EventPhase_obj::BUBBLING_PHASE);
			HX_STACK_LINE(205)
			stack->reverse();
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(207)
				while(((_g < stack->length))){
					HX_STACK_LINE(207)
					::native::display::InteractiveObject obj = stack->__get(_g).StaticCast< ::native::display::InteractiveObject >();		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(207)
					++(_g);
					HX_STACK_LINE(209)
					inEvt->set_currentTarget(obj);
					HX_STACK_LINE(210)
					obj->nmeDispatchEvent(inEvt);
					HX_STACK_LINE(212)
					if ((inEvt->nmeGetIsCancelled())){
						HX_STACK_LINE(213)
						return null();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeFireEvent,(void))

::native::display::DisplayObject DisplayObject_obj::nmeFindByID( int inID){
	HX_STACK_PUSH("DisplayObject::nmeFindByID","native/display/DisplayObject.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inID,"inID");
	HX_STACK_LINE(164)
	if (((this->nmeID == inID))){
		HX_STACK_LINE(165)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(166)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeFindByID,return )

Void DisplayObject_obj::nmeDrawToSurface( Dynamic inSurface,::native::geom::Matrix matrix,::native::geom::ColorTransform colorTransform,::String blendMode,::native::geom::Rectangle clipRect,bool smoothing){
{
		HX_STACK_PUSH("DisplayObject::nmeDrawToSurface","native/display/DisplayObject.hx",158);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inSurface,"inSurface");
		HX_STACK_ARG(matrix,"matrix");
		HX_STACK_ARG(colorTransform,"colorTransform");
		HX_STACK_ARG(blendMode,"blendMode");
		HX_STACK_ARG(clipRect,"clipRect");
		HX_STACK_ARG(smoothing,"smoothing");
		HX_STACK_LINE(158)
		::native::display::DisplayObject_obj::nme_display_object_draw_to_surface(this->nmeHandle,inSurface,matrix,colorTransform,blendMode,clipRect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,nmeDrawToSurface,(void))

bool DisplayObject_obj::nmeDispatchEvent( ::native::events::Event inEvt){
	HX_STACK_PUSH("DisplayObject::nmeDispatchEvent","native/display/DisplayObject.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inEvt,"inEvt");
	HX_STACK_LINE(149)
	if (((inEvt->get_target() == null()))){
		HX_STACK_LINE(150)
		inEvt->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(154)
	inEvt->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(155)
	return this->super::dispatchEvent(inEvt);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeDispatchEvent,return )

Void DisplayObject_obj::nmeBroadcast( ::native::events::Event inEvt){
{
		HX_STACK_PUSH("DisplayObject::nmeBroadcast","native/display/DisplayObject.hx",144);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inEvt,"inEvt");
		HX_STACK_LINE(144)
		this->nmeDispatchEvent(inEvt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeBroadcast,(void))

::native::display::InteractiveObject DisplayObject_obj::nmeAsInteractiveObject( ){
	HX_STACK_PUSH("DisplayObject::nmeAsInteractiveObject","native/display/DisplayObject.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeAsInteractiveObject,return )

::native::geom::Point DisplayObject_obj::localToGlobal( ::native::geom::Point inLocal){
	HX_STACK_PUSH("DisplayObject::localToGlobal","native/display/DisplayObject.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inLocal,"inLocal");
	HX_STACK_LINE(135)
	::native::geom::Point result = inLocal->clone();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(136)
	::native::display::DisplayObject_obj::nme_display_object_local_to_global(this->nmeHandle,result);
	HX_STACK_LINE(137)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_PUSH("DisplayObject::hitTestPoint","native/display/DisplayObject.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(shapeFlag,"shapeFlag");
{
		HX_STACK_LINE(129)
		return ::native::display::DisplayObject_obj::nme_display_object_hit_test_point(this->nmeHandle,x,y,shapeFlag,true);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

bool DisplayObject_obj::hitTestObject( ::native::display::DisplayObject object){
	HX_STACK_PUSH("DisplayObject::hitTestObject","native/display/DisplayObject.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(object,"object");
	HX_STACK_LINE(106)
	if (((bool((bool((object != null())) && bool((object->get_parent() != null())))) && bool((this->get_parent() != null()))))){
		HX_STACK_LINE(108)
		::native::geom::Matrix currentMatrix = this->get_transform()->get_concatenatedMatrix();		HX_STACK_VAR(currentMatrix,"currentMatrix");
		HX_STACK_LINE(109)
		::native::geom::Matrix targetMatrix = object->get_transform()->get_concatenatedMatrix();		HX_STACK_VAR(targetMatrix,"targetMatrix");
		HX_STACK_LINE(111)
		::native::geom::Point xPoint = ::native::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(xPoint,"xPoint");
		HX_STACK_LINE(112)
		::native::geom::Point yPoint = ::native::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(yPoint,"yPoint");
		HX_STACK_LINE(114)
		Float currentWidth = (this->get_width() * currentMatrix->deltaTransformPoint(xPoint)->get_length());		HX_STACK_VAR(currentWidth,"currentWidth");
		HX_STACK_LINE(115)
		Float currentHeight = (this->get_height() * currentMatrix->deltaTransformPoint(yPoint)->get_length());		HX_STACK_VAR(currentHeight,"currentHeight");
		HX_STACK_LINE(116)
		Float targetWidth = (object->get_width() * targetMatrix->deltaTransformPoint(xPoint)->get_length());		HX_STACK_VAR(targetWidth,"targetWidth");
		HX_STACK_LINE(117)
		Float targetHeight = (object->get_height() * targetMatrix->deltaTransformPoint(yPoint)->get_length());		HX_STACK_VAR(targetHeight,"targetHeight");
		HX_STACK_LINE(119)
		::native::geom::Rectangle currentRect = ::native::geom::Rectangle_obj::__new(currentMatrix->tx,currentMatrix->ty,currentWidth,currentHeight);		HX_STACK_VAR(currentRect,"currentRect");
		HX_STACK_LINE(120)
		::native::geom::Rectangle targetRect = ::native::geom::Rectangle_obj::__new(targetMatrix->tx,targetMatrix->ty,targetWidth,targetHeight);		HX_STACK_VAR(targetRect,"targetRect");
		HX_STACK_LINE(122)
		return currentRect->intersects(targetRect);
	}
	HX_STACK_LINE(125)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

::native::geom::Point DisplayObject_obj::globalToLocal( ::native::geom::Point inGlobal){
	HX_STACK_PUSH("DisplayObject::globalToLocal","native/display/DisplayObject.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inGlobal,"inGlobal");
	HX_STACK_LINE(99)
	::native::geom::Point result = inGlobal->clone();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(100)
	::native::display::DisplayObject_obj::nme_display_object_global_to_local(this->nmeHandle,result);
	HX_STACK_LINE(101)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

::native::geom::Rectangle DisplayObject_obj::getRect( ::native::display::DisplayObject targetCoordinateSpace){
	HX_STACK_PUSH("DisplayObject::getRect","native/display/DisplayObject.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace");
	HX_STACK_LINE(92)
	::native::geom::Rectangle result = ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(93)
	::native::display::DisplayObject_obj::nme_display_object_get_bounds(this->nmeHandle,targetCoordinateSpace->nmeHandle,result,false);
	HX_STACK_LINE(94)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::native::geom::Rectangle DisplayObject_obj::getBounds( ::native::display::DisplayObject targetCoordinateSpace){
	HX_STACK_PUSH("DisplayObject::getBounds","native/display/DisplayObject.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace");
	HX_STACK_LINE(85)
	::native::geom::Rectangle result = ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(86)
	::native::display::DisplayObject_obj::nme_display_object_get_bounds(this->nmeHandle,targetCoordinateSpace->nmeHandle,result,true);
	HX_STACK_LINE(87)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

bool DisplayObject_obj::dispatchEvent( ::native::events::Event event){
	HX_STACK_PUSH("DisplayObject::dispatchEvent","native/display/DisplayObject.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(70)
	bool result = this->nmeDispatchEvent(event);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(72)
	if ((event->nmeGetIsCancelled())){
		HX_STACK_LINE(73)
		return true;
	}
	HX_STACK_LINE(75)
	if (((bool(event->get_bubbles()) && bool((this->get_parent() != null()))))){
		HX_STACK_LINE(76)
		this->get_parent()->dispatchEvent(event);
	}
	HX_STACK_LINE(80)
	return result;
}


Dynamic DisplayObject_obj::nme_create_display_object;

Dynamic DisplayObject_obj::nme_display_object_get_graphics;

Dynamic DisplayObject_obj::nme_display_object_draw_to_surface;

Dynamic DisplayObject_obj::nme_display_object_get_id;

Dynamic DisplayObject_obj::nme_display_object_get_x;

Dynamic DisplayObject_obj::nme_display_object_set_x;

Dynamic DisplayObject_obj::nme_display_object_get_y;

Dynamic DisplayObject_obj::nme_display_object_set_y;

Dynamic DisplayObject_obj::nme_display_object_get_scale_x;

Dynamic DisplayObject_obj::nme_display_object_set_scale_x;

Dynamic DisplayObject_obj::nme_display_object_get_scale_y;

Dynamic DisplayObject_obj::nme_display_object_set_scale_y;

Dynamic DisplayObject_obj::nme_display_object_get_mouse_x;

Dynamic DisplayObject_obj::nme_display_object_get_mouse_y;

Dynamic DisplayObject_obj::nme_display_object_get_rotation;

Dynamic DisplayObject_obj::nme_display_object_set_rotation;

Dynamic DisplayObject_obj::nme_display_object_get_bg;

Dynamic DisplayObject_obj::nme_display_object_set_bg;

Dynamic DisplayObject_obj::nme_display_object_get_name;

Dynamic DisplayObject_obj::nme_display_object_set_name;

Dynamic DisplayObject_obj::nme_display_object_get_width;

Dynamic DisplayObject_obj::nme_display_object_set_width;

Dynamic DisplayObject_obj::nme_display_object_get_height;

Dynamic DisplayObject_obj::nme_display_object_set_height;

Dynamic DisplayObject_obj::nme_display_object_get_alpha;

Dynamic DisplayObject_obj::nme_display_object_set_alpha;

Dynamic DisplayObject_obj::nme_display_object_get_blend_mode;

Dynamic DisplayObject_obj::nme_display_object_set_blend_mode;

Dynamic DisplayObject_obj::nme_display_object_get_cache_as_bitmap;

Dynamic DisplayObject_obj::nme_display_object_set_cache_as_bitmap;

Dynamic DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching;

Dynamic DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching;

Dynamic DisplayObject_obj::nme_display_object_get_pixel_snapping;

Dynamic DisplayObject_obj::nme_display_object_set_pixel_snapping;

Dynamic DisplayObject_obj::nme_display_object_get_visible;

Dynamic DisplayObject_obj::nme_display_object_set_visible;

Dynamic DisplayObject_obj::nme_display_object_set_filters;

Dynamic DisplayObject_obj::nme_display_object_global_to_local;

Dynamic DisplayObject_obj::nme_display_object_local_to_global;

Dynamic DisplayObject_obj::nme_display_object_set_scale9_grid;

Dynamic DisplayObject_obj::nme_display_object_set_scroll_rect;

Dynamic DisplayObject_obj::nme_display_object_set_mask;

Dynamic DisplayObject_obj::nme_display_object_set_matrix;

Dynamic DisplayObject_obj::nme_display_object_get_matrix;

Dynamic DisplayObject_obj::nme_display_object_get_color_transform;

Dynamic DisplayObject_obj::nme_display_object_set_color_transform;

Dynamic DisplayObject_obj::nme_display_object_get_pixel_bounds;

Dynamic DisplayObject_obj::nme_display_object_get_bounds;

Dynamic DisplayObject_obj::nme_display_object_hit_test_point;


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(nmeScrollRect,"nmeScrollRect");
	HX_MARK_MEMBER_NAME(nmeScale9Grid,"nmeScale9Grid");
	HX_MARK_MEMBER_NAME(nmeParent,"nmeParent");
	HX_MARK_MEMBER_NAME(nmeID,"nmeID");
	HX_MARK_MEMBER_NAME(nmeGraphicsCache,"nmeGraphicsCache");
	HX_MARK_MEMBER_NAME(nmeFilters,"nmeFilters");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeScrollRect,"nmeScrollRect");
	HX_VISIT_MEMBER_NAME(nmeScale9Grid,"nmeScale9Grid");
	HX_VISIT_MEMBER_NAME(nmeParent,"nmeParent");
	HX_VISIT_MEMBER_NAME(nmeID,"nmeID");
	HX_VISIT_MEMBER_NAME(nmeGraphicsCache,"nmeGraphicsCache");
	HX_VISIT_MEMBER_NAME(nmeFilters,"nmeFilters");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return get_name(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeID") ) { return nmeID; }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp ? get_stage() : stage; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"filters") ) { return get_filters(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp ? get_graphics() : graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeParent") ) { return nmeParent; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"transform") ) { return get_transform(); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return get_blendMode(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnAdded") ) { return nmeOnAdded_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFilters") ) { return nmeFilters; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return get_scale9Grid(); }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFindByID") ) { return nmeFindByID_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetParent") ) { return nmeSetParent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetMatrix") ) { return nmeSetMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnRemoved") ) { return nmeOnRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetMatrix") ) { return nmeGetMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFireEvent") ) { return nmeFireEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeBroadcast") ) { return nmeBroadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return get_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeScrollRect") ) { return nmeScrollRect; }
		if (HX_FIELD_EQ(inName,"nmeScale9Grid") ) { return nmeScale9Grid; }
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return get_pixelSnapping(); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return get_cacheAsBitmap(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale9Grid") ) { return set_scale9Grid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale9Grid") ) { return get_scale9Grid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeDrawToSurface") ) { return nmeDrawToSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeDispatchEvent") ) { return nmeDispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGraphicsCache") ) { return nmeGraphicsCache; }
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return get_opaqueBackground(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_pixelSnapping") ) { return set_pixelSnapping_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixelSnapping") ) { return get_pixelSnapping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return set_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return get_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetPixelBounds") ) { return nmeGetPixelBounds_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_opaqueBackground") ) { return set_opaqueBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"get_opaqueBackground") ) { return get_opaqueBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetColorTransform") ) { return nmeSetColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetColorTransform") ) { return nmeGetColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pedanticBitmapCaching") ) { return get_pedanticBitmapCaching(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nmeAsInteractiveObject") ) { return nmeAsInteractiveObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nmeGetObjectsUnderPoint") ) { return nmeGetObjectsUnderPoint_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_x") ) { return nme_display_object_get_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_x") ) { return nme_display_object_set_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_y") ) { return nme_display_object_get_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_y") ) { return nme_display_object_set_y; }
		if (HX_FIELD_EQ(inName,"nmeGetConcatenatedMatrix") ) { return nmeGetConcatenatedMatrix_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_create_display_object") ) { return nme_create_display_object; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_id") ) { return nme_display_object_get_id; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bg") ) { return nme_display_object_get_bg; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { return nme_display_object_set_bg; }
		if (HX_FIELD_EQ(inName,"set_pedanticBitmapCaching") ) { return set_pedanticBitmapCaching_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pedanticBitmapCaching") ) { return get_pedanticBitmapCaching_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_name") ) { return nme_display_object_get_name; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_name") ) { return nme_display_object_set_name; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mask") ) { return nme_display_object_set_mask; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_width") ) { return nme_display_object_get_width; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_width") ) { return nme_display_object_set_width; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_alpha") ) { return nme_display_object_get_alpha; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_alpha") ) { return nme_display_object_set_alpha; }
		if (HX_FIELD_EQ(inName,"nmeGetInteractiveObjectStack") ) { return nmeGetInteractiveObjectStack_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_height") ) { return nme_display_object_get_height; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_height") ) { return nme_display_object_set_height; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_matrix") ) { return nme_display_object_set_matrix; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_matrix") ) { return nme_display_object_get_matrix; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bounds") ) { return nme_display_object_get_bounds; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_x") ) { return nme_display_object_get_scale_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_x") ) { return nme_display_object_set_scale_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_y") ) { return nme_display_object_get_scale_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_y") ) { return nme_display_object_set_scale_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_x") ) { return nme_display_object_get_mouse_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_y") ) { return nme_display_object_get_mouse_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_visible") ) { return nme_display_object_get_visible; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_visible") ) { return nme_display_object_set_visible; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_filters") ) { return nme_display_object_set_filters; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_graphics") ) { return nme_display_object_get_graphics; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_rotation") ) { return nme_display_object_get_rotation; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_rotation") ) { return nme_display_object_set_rotation; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nmeGetConcatenatedColorTransform") ) { return nmeGetConcatenatedColorTransform_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_blend_mode") ) { return nme_display_object_get_blend_mode; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_blend_mode") ) { return nme_display_object_set_blend_mode; }
		if (HX_FIELD_EQ(inName,"nme_display_object_hit_test_point") ) { return nme_display_object_hit_test_point; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_display_object_draw_to_surface") ) { return nme_display_object_draw_to_surface; }
		if (HX_FIELD_EQ(inName,"nme_display_object_global_to_local") ) { return nme_display_object_global_to_local; }
		if (HX_FIELD_EQ(inName,"nme_display_object_local_to_global") ) { return nme_display_object_local_to_global; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale9_grid") ) { return nme_display_object_set_scale9_grid; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scroll_rect") ) { return nme_display_object_set_scroll_rect; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_bounds") ) { return nme_display_object_get_pixel_bounds; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_snapping") ) { return nme_display_object_get_pixel_snapping; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pixel_snapping") ) { return nme_display_object_set_pixel_snapping; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_cache_as_bitmap") ) { return nme_display_object_get_cache_as_bitmap; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_cache_as_bitmap") ) { return nme_display_object_set_cache_as_bitmap; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_color_transform") ) { return nme_display_object_get_color_transform; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_color_transform") ) { return nme_display_object_set_color_transform; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pedantic_bitmap_caching") ) { return nme_display_object_get_pedantic_bitmap_caching; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pedantic_bitmap_caching") ) { return nme_display_object_set_pedantic_bitmap_caching; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp) return set_mask(inValue);mask=inValue.Cast< ::native::display::DisplayObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nmeID") ) { nmeID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::native::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::native::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"filters") ) { return set_filters(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::native::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeParent") ) { nmeParent=inValue.Cast< ::native::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return set_blendMode(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeFilters") ) { nmeFilters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return set_scale9Grid(inValue); }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::native::display::LoaderInfo >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nmeScrollRect") ) { nmeScrollRect=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeScale9Grid") ) { nmeScale9Grid=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return set_pixelSnapping(inValue); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return set_cacheAsBitmap(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeGraphicsCache") ) { nmeGraphicsCache=inValue.Cast< ::native::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return set_opaqueBackground(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pedanticBitmapCaching") ) { return set_pedanticBitmapCaching(inValue); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_x") ) { nme_display_object_get_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_x") ) { nme_display_object_set_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_y") ) { nme_display_object_get_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_y") ) { nme_display_object_set_y=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_create_display_object") ) { nme_create_display_object=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_id") ) { nme_display_object_get_id=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bg") ) { nme_display_object_get_bg=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { nme_display_object_set_bg=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_name") ) { nme_display_object_get_name=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_name") ) { nme_display_object_set_name=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mask") ) { nme_display_object_set_mask=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_width") ) { nme_display_object_get_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_width") ) { nme_display_object_set_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_alpha") ) { nme_display_object_get_alpha=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_alpha") ) { nme_display_object_set_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_height") ) { nme_display_object_get_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_height") ) { nme_display_object_set_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_matrix") ) { nme_display_object_set_matrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_matrix") ) { nme_display_object_get_matrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bounds") ) { nme_display_object_get_bounds=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_x") ) { nme_display_object_get_scale_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_x") ) { nme_display_object_set_scale_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_y") ) { nme_display_object_get_scale_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_y") ) { nme_display_object_set_scale_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_x") ) { nme_display_object_get_mouse_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_y") ) { nme_display_object_get_mouse_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_visible") ) { nme_display_object_get_visible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_visible") ) { nme_display_object_set_visible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_filters") ) { nme_display_object_set_filters=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_graphics") ) { nme_display_object_get_graphics=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_rotation") ) { nme_display_object_get_rotation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_rotation") ) { nme_display_object_set_rotation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_blend_mode") ) { nme_display_object_get_blend_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_blend_mode") ) { nme_display_object_set_blend_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_hit_test_point") ) { nme_display_object_hit_test_point=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_display_object_draw_to_surface") ) { nme_display_object_draw_to_surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_global_to_local") ) { nme_display_object_global_to_local=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_local_to_global") ) { nme_display_object_local_to_global=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale9_grid") ) { nme_display_object_set_scale9_grid=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scroll_rect") ) { nme_display_object_set_scroll_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_bounds") ) { nme_display_object_get_pixel_bounds=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_snapping") ) { nme_display_object_get_pixel_snapping=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pixel_snapping") ) { nme_display_object_set_pixel_snapping=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_cache_as_bitmap") ) { nme_display_object_get_cache_as_bitmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_cache_as_bitmap") ) { nme_display_object_set_cache_as_bitmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_color_transform") ) { nme_display_object_get_color_transform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_color_transform") ) { nme_display_object_set_color_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pedantic_bitmap_caching") ) { nme_display_object_get_pedantic_bitmap_caching=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pedantic_bitmap_caching") ) { nme_display_object_set_pedantic_bitmap_caching=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeScrollRect"));
	outFields->push(HX_CSTRING("nmeScale9Grid"));
	outFields->push(HX_CSTRING("nmeParent"));
	outFields->push(HX_CSTRING("nmeID"));
	outFields->push(HX_CSTRING("nmeGraphicsCache"));
	outFields->push(HX_CSTRING("nmeFilters"));
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("stage"));
	outFields->push(HX_CSTRING("scrollRect"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scale9Grid"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("opaqueBackground"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("loaderInfo"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("pixelSnapping"));
	outFields->push(HX_CSTRING("pedanticBitmapCaching"));
	outFields->push(HX_CSTRING("cacheAsBitmap"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("alpha"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_create_display_object"),
	HX_CSTRING("nme_display_object_get_graphics"),
	HX_CSTRING("nme_display_object_draw_to_surface"),
	HX_CSTRING("nme_display_object_get_id"),
	HX_CSTRING("nme_display_object_get_x"),
	HX_CSTRING("nme_display_object_set_x"),
	HX_CSTRING("nme_display_object_get_y"),
	HX_CSTRING("nme_display_object_set_y"),
	HX_CSTRING("nme_display_object_get_scale_x"),
	HX_CSTRING("nme_display_object_set_scale_x"),
	HX_CSTRING("nme_display_object_get_scale_y"),
	HX_CSTRING("nme_display_object_set_scale_y"),
	HX_CSTRING("nme_display_object_get_mouse_x"),
	HX_CSTRING("nme_display_object_get_mouse_y"),
	HX_CSTRING("nme_display_object_get_rotation"),
	HX_CSTRING("nme_display_object_set_rotation"),
	HX_CSTRING("nme_display_object_get_bg"),
	HX_CSTRING("nme_display_object_set_bg"),
	HX_CSTRING("nme_display_object_get_name"),
	HX_CSTRING("nme_display_object_set_name"),
	HX_CSTRING("nme_display_object_get_width"),
	HX_CSTRING("nme_display_object_set_width"),
	HX_CSTRING("nme_display_object_get_height"),
	HX_CSTRING("nme_display_object_set_height"),
	HX_CSTRING("nme_display_object_get_alpha"),
	HX_CSTRING("nme_display_object_set_alpha"),
	HX_CSTRING("nme_display_object_get_blend_mode"),
	HX_CSTRING("nme_display_object_set_blend_mode"),
	HX_CSTRING("nme_display_object_get_cache_as_bitmap"),
	HX_CSTRING("nme_display_object_set_cache_as_bitmap"),
	HX_CSTRING("nme_display_object_get_pedantic_bitmap_caching"),
	HX_CSTRING("nme_display_object_set_pedantic_bitmap_caching"),
	HX_CSTRING("nme_display_object_get_pixel_snapping"),
	HX_CSTRING("nme_display_object_set_pixel_snapping"),
	HX_CSTRING("nme_display_object_get_visible"),
	HX_CSTRING("nme_display_object_set_visible"),
	HX_CSTRING("nme_display_object_set_filters"),
	HX_CSTRING("nme_display_object_global_to_local"),
	HX_CSTRING("nme_display_object_local_to_global"),
	HX_CSTRING("nme_display_object_set_scale9_grid"),
	HX_CSTRING("nme_display_object_set_scroll_rect"),
	HX_CSTRING("nme_display_object_set_mask"),
	HX_CSTRING("nme_display_object_set_matrix"),
	HX_CSTRING("nme_display_object_get_matrix"),
	HX_CSTRING("nme_display_object_get_color_transform"),
	HX_CSTRING("nme_display_object_set_color_transform"),
	HX_CSTRING("nme_display_object_get_pixel_bounds"),
	HX_CSTRING("nme_display_object_get_bounds"),
	HX_CSTRING("nme_display_object_hit_test_point"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_transform"),
	HX_CSTRING("get_transform"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("set_scrollRect"),
	HX_CSTRING("get_scrollRect"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("get_scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("get_scaleX"),
	HX_CSTRING("set_scale9Grid"),
	HX_CSTRING("get_scale9Grid"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("get_parent"),
	HX_CSTRING("set_name"),
	HX_CSTRING("get_name"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("set_mask"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_graphics"),
	HX_CSTRING("set_filters"),
	HX_CSTRING("get_filters"),
	HX_CSTRING("set_pixelSnapping"),
	HX_CSTRING("get_pixelSnapping"),
	HX_CSTRING("set_pedanticBitmapCaching"),
	HX_CSTRING("get_pedanticBitmapCaching"),
	HX_CSTRING("set_cacheAsBitmap"),
	HX_CSTRING("get_cacheAsBitmap"),
	HX_CSTRING("set_blendMode"),
	HX_CSTRING("get_blendMode"),
	HX_CSTRING("set_opaqueBackground"),
	HX_CSTRING("get_opaqueBackground"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("toString"),
	HX_CSTRING("nmeSetParent"),
	HX_CSTRING("nmeSetMatrix"),
	HX_CSTRING("nmeSetColorTransform"),
	HX_CSTRING("nmeOnRemoved"),
	HX_CSTRING("nmeOnAdded"),
	HX_CSTRING("nmeGetPixelBounds"),
	HX_CSTRING("nmeGetObjectsUnderPoint"),
	HX_CSTRING("nmeGetMatrix"),
	HX_CSTRING("nmeGetInteractiveObjectStack"),
	HX_CSTRING("nmeGetConcatenatedMatrix"),
	HX_CSTRING("nmeGetConcatenatedColorTransform"),
	HX_CSTRING("nmeGetColorTransform"),
	HX_CSTRING("nmeFireEvent"),
	HX_CSTRING("nmeFindByID"),
	HX_CSTRING("nmeDrawToSurface"),
	HX_CSTRING("nmeDispatchEvent"),
	HX_CSTRING("nmeBroadcast"),
	HX_CSTRING("nmeAsInteractiveObject"),
	HX_CSTRING("localToGlobal"),
	HX_CSTRING("hitTestPoint"),
	HX_CSTRING("hitTestObject"),
	HX_CSTRING("globalToLocal"),
	HX_CSTRING("getRect"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("nmeScrollRect"),
	HX_CSTRING("nmeScale9Grid"),
	HX_CSTRING("nmeParent"),
	HX_CSTRING("nmeID"),
	HX_CSTRING("nmeGraphicsCache"),
	HX_CSTRING("nmeFilters"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("stage"),
	HX_CSTRING("parent"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("mask"),
	HX_CSTRING("loaderInfo"),
	HX_CSTRING("graphics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_create_display_object,"nme_create_display_object");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_graphics,"nme_display_object_get_graphics");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_draw_to_surface,"nme_display_object_draw_to_surface");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_id,"nme_display_object_get_id");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_x,"nme_display_object_get_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_x,"nme_display_object_set_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_y,"nme_display_object_get_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_y,"nme_display_object_set_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_x,"nme_display_object_get_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_x,"nme_display_object_set_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_y,"nme_display_object_get_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_y,"nme_display_object_set_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_x,"nme_display_object_get_mouse_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_y,"nme_display_object_get_mouse_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_rotation,"nme_display_object_get_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_rotation,"nme_display_object_set_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bg,"nme_display_object_get_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_bg,"nme_display_object_set_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_name,"nme_display_object_get_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_name,"nme_display_object_set_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_width,"nme_display_object_get_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_width,"nme_display_object_set_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_height,"nme_display_object_get_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_height,"nme_display_object_set_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_alpha,"nme_display_object_get_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_alpha,"nme_display_object_set_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_blend_mode,"nme_display_object_get_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_blend_mode,"nme_display_object_set_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_cache_as_bitmap,"nme_display_object_get_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_cache_as_bitmap,"nme_display_object_set_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching,"nme_display_object_get_pedantic_bitmap_caching");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching,"nme_display_object_set_pedantic_bitmap_caching");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_snapping,"nme_display_object_get_pixel_snapping");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pixel_snapping,"nme_display_object_set_pixel_snapping");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_visible,"nme_display_object_get_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_visible,"nme_display_object_set_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_filters,"nme_display_object_set_filters");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_global_to_local,"nme_display_object_global_to_local");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_local_to_global,"nme_display_object_local_to_global");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale9_grid,"nme_display_object_set_scale9_grid");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scroll_rect,"nme_display_object_set_scroll_rect");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_mask,"nme_display_object_set_mask");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_matrix,"nme_display_object_set_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_matrix,"nme_display_object_get_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_color_transform,"nme_display_object_get_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_color_transform,"nme_display_object_set_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_bounds,"nme_display_object_get_pixel_bounds");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bounds,"nme_display_object_get_bounds");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_hit_test_point,"nme_display_object_hit_test_point");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_create_display_object,"nme_create_display_object");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_graphics,"nme_display_object_get_graphics");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_draw_to_surface,"nme_display_object_draw_to_surface");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_id,"nme_display_object_get_id");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_x,"nme_display_object_get_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_x,"nme_display_object_set_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_y,"nme_display_object_get_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_y,"nme_display_object_set_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_x,"nme_display_object_get_scale_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_x,"nme_display_object_set_scale_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_y,"nme_display_object_get_scale_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_y,"nme_display_object_set_scale_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_x,"nme_display_object_get_mouse_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_y,"nme_display_object_get_mouse_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_rotation,"nme_display_object_get_rotation");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_rotation,"nme_display_object_set_rotation");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bg,"nme_display_object_get_bg");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_bg,"nme_display_object_set_bg");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_name,"nme_display_object_get_name");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_name,"nme_display_object_set_name");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_width,"nme_display_object_get_width");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_width,"nme_display_object_set_width");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_height,"nme_display_object_get_height");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_height,"nme_display_object_set_height");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_alpha,"nme_display_object_get_alpha");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_alpha,"nme_display_object_set_alpha");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_blend_mode,"nme_display_object_get_blend_mode");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_blend_mode,"nme_display_object_set_blend_mode");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_cache_as_bitmap,"nme_display_object_get_cache_as_bitmap");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_cache_as_bitmap,"nme_display_object_set_cache_as_bitmap");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching,"nme_display_object_get_pedantic_bitmap_caching");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching,"nme_display_object_set_pedantic_bitmap_caching");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_snapping,"nme_display_object_get_pixel_snapping");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pixel_snapping,"nme_display_object_set_pixel_snapping");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_visible,"nme_display_object_get_visible");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_visible,"nme_display_object_set_visible");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_filters,"nme_display_object_set_filters");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_global_to_local,"nme_display_object_global_to_local");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_local_to_global,"nme_display_object_local_to_global");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale9_grid,"nme_display_object_set_scale9_grid");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scroll_rect,"nme_display_object_set_scroll_rect");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_mask,"nme_display_object_set_mask");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_matrix,"nme_display_object_set_matrix");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_matrix,"nme_display_object_get_matrix");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_color_transform,"nme_display_object_get_color_transform");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_color_transform,"nme_display_object_set_color_transform");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_bounds,"nme_display_object_get_pixel_bounds");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bounds,"nme_display_object_get_bounds");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_hit_test_point,"nme_display_object_hit_test_point");
};

Class DisplayObject_obj::__mClass;

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.DisplayObject"), hx::TCanCast< DisplayObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DisplayObject_obj::__boot()
{
	nme_create_display_object= ::native::Loader_obj::load(HX_CSTRING("nme_create_display_object"),(int)0);
	nme_display_object_get_graphics= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_graphics"),(int)1);
	nme_display_object_draw_to_surface= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_draw_to_surface"),(int)-1);
	nme_display_object_get_id= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_id"),(int)1);
	nme_display_object_get_x= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_x"),(int)1);
	nme_display_object_set_x= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_x"),(int)2);
	nme_display_object_get_y= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_y"),(int)1);
	nme_display_object_set_y= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_y"),(int)2);
	nme_display_object_get_scale_x= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_scale_x"),(int)1);
	nme_display_object_set_scale_x= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_scale_x"),(int)2);
	nme_display_object_get_scale_y= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_scale_y"),(int)1);
	nme_display_object_set_scale_y= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_scale_y"),(int)2);
	nme_display_object_get_mouse_x= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_mouse_x"),(int)1);
	nme_display_object_get_mouse_y= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_mouse_y"),(int)1);
	nme_display_object_get_rotation= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_rotation"),(int)1);
	nme_display_object_set_rotation= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_rotation"),(int)2);
	nme_display_object_get_bg= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_bg"),(int)1);
	nme_display_object_set_bg= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_bg"),(int)2);
	nme_display_object_get_name= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_name"),(int)1);
	nme_display_object_set_name= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_name"),(int)2);
	nme_display_object_get_width= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_width"),(int)1);
	nme_display_object_set_width= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_width"),(int)2);
	nme_display_object_get_height= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_height"),(int)1);
	nme_display_object_set_height= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_height"),(int)2);
	nme_display_object_get_alpha= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_alpha"),(int)1);
	nme_display_object_set_alpha= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_alpha"),(int)2);
	nme_display_object_get_blend_mode= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_blend_mode"),(int)1);
	nme_display_object_set_blend_mode= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_blend_mode"),(int)2);
	nme_display_object_get_cache_as_bitmap= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_cache_as_bitmap"),(int)1);
	nme_display_object_set_cache_as_bitmap= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_cache_as_bitmap"),(int)2);
	nme_display_object_get_pedantic_bitmap_caching= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_pedantic_bitmap_caching"),(int)1);
	nme_display_object_set_pedantic_bitmap_caching= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_pedantic_bitmap_caching"),(int)2);
	nme_display_object_get_pixel_snapping= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_pixel_snapping"),(int)1);
	nme_display_object_set_pixel_snapping= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_pixel_snapping"),(int)2);
	nme_display_object_get_visible= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_visible"),(int)1);
	nme_display_object_set_visible= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_visible"),(int)2);
	nme_display_object_set_filters= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_filters"),(int)2);
	nme_display_object_global_to_local= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_global_to_local"),(int)2);
	nme_display_object_local_to_global= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_local_to_global"),(int)2);
	nme_display_object_set_scale9_grid= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_scale9_grid"),(int)2);
	nme_display_object_set_scroll_rect= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_scroll_rect"),(int)2);
	nme_display_object_set_mask= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_mask"),(int)2);
	nme_display_object_set_matrix= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_matrix"),(int)2);
	nme_display_object_get_matrix= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_matrix"),(int)3);
	nme_display_object_get_color_transform= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_color_transform"),(int)3);
	nme_display_object_set_color_transform= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_set_color_transform"),(int)2);
	nme_display_object_get_pixel_bounds= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_pixel_bounds"),(int)2);
	nme_display_object_get_bounds= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_get_bounds"),(int)4);
	nme_display_object_hit_test_point= ::native::Loader_obj::load(HX_CSTRING("nme_display_object_hit_test_point"),(int)5);
}

} // end namespace native
} // end namespace display
