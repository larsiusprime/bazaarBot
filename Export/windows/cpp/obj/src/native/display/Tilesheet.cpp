#include <hxcpp.h>

#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace native{
namespace display{

Void Tilesheet_obj::__construct(::native::display::BitmapData inImage)
{
HX_STACK_PUSH("Tilesheet::new","native/display/Tilesheet.hx",22);
{
	HX_STACK_LINE(23)
	this->nmeBitmap = inImage;
	HX_STACK_LINE(24)
	this->nmeHandle = ::native::display::Tilesheet_obj::nme_tilesheet_create(inImage->nmeHandle);
}
;
	return null();
}

Tilesheet_obj::~Tilesheet_obj() { }

Dynamic Tilesheet_obj::__CreateEmpty() { return  new Tilesheet_obj; }
hx::ObjectPtr< Tilesheet_obj > Tilesheet_obj::__new(::native::display::BitmapData inImage)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(inImage);
	return result;}

Dynamic Tilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Tilesheet_obj::drawTiles( ::native::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
	HX_STACK_PUSH("Tilesheet::drawTiles","native/display/Tilesheet.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphics,"graphics");
	HX_STACK_ARG(tileData,"tileData");
	HX_STACK_ARG(smooth,"smooth");
	HX_STACK_ARG(flags,"flags");
{
		HX_STACK_LINE(33)
		graphics->drawTiles(hx::ObjectPtr<OBJ_>(this),tileData,smooth,flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Tilesheet_obj,drawTiles,(void))

int Tilesheet_obj::addTileRect( ::native::geom::Rectangle rectangle,::native::geom::Point centerPoint){
	HX_STACK_PUSH("Tilesheet::addTileRect","native/display/Tilesheet.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rectangle,"rectangle");
	HX_STACK_ARG(centerPoint,"centerPoint");
	HX_STACK_LINE(28)
	return ::native::display::Tilesheet_obj::nme_tilesheet_add_rect(this->nmeHandle,rectangle,centerPoint);
}


HX_DEFINE_DYNAMIC_FUNC2(Tilesheet_obj,addTileRect,return )

Dynamic Tilesheet_obj::nme_tilesheet_create;

Dynamic Tilesheet_obj::nme_tilesheet_add_rect;


Tilesheet_obj::Tilesheet_obj()
{
}

void Tilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilesheet);
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmeBitmap,"nmeBitmap");
	HX_MARK_END_CLASS();
}

void Tilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(nmeBitmap,"nmeBitmap");
}

Dynamic Tilesheet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { return nmeBitmap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_create") ) { return nme_tilesheet_create; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_add_rect") ) { return nme_tilesheet_add_rect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { nmeBitmap=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_create") ) { nme_tilesheet_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_add_rect") ) { nme_tilesheet_add_rect=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("nmeBitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_tilesheet_create"),
	HX_CSTRING("nme_tilesheet_add_rect"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawTiles"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("nmeBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_create,"nme_tilesheet_create");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_add_rect,"nme_tilesheet_add_rect");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_create,"nme_tilesheet_create");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_add_rect,"nme_tilesheet_add_rect");
};

Class Tilesheet_obj::__mClass;

void Tilesheet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.Tilesheet"), hx::TCanCast< Tilesheet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Tilesheet_obj::__boot()
{
	nme_tilesheet_create= ::native::Loader_obj::load(HX_CSTRING("nme_tilesheet_create"),(int)1);
	nme_tilesheet_add_rect= ::native::Loader_obj::load(HX_CSTRING("nme_tilesheet_add_rect"),(int)3);
}

} // end namespace native
} // end namespace display
