#include <hxcpp.h>

#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
namespace native{
namespace display{

Void Bitmap_obj::__construct(::native::display::BitmapData bitmapData,::native::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_PUSH("Bitmap::new","native/display/Bitmap.hx",15);
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(16)
	super::__construct(::native::display::DisplayObject_obj::nme_create_display_object(),HX_CSTRING("Bitmap"));
	HX_STACK_LINE(18)
	this->set_pixelSnapping((  (((pixelSnapping == null()))) ? ::native::display::PixelSnapping(::native::display::PixelSnapping_obj::AUTO) : ::native::display::PixelSnapping(pixelSnapping) ));
	HX_STACK_LINE(19)
	this->set_smoothing(smoothing);
	HX_STACK_LINE(21)
	if (((bitmapData != null()))){
		HX_STACK_LINE(22)
		this->set_bitmapData(bitmapData);
	}
	else{
		HX_STACK_LINE(25)
		if (((this->bitmapData != null()))){
			HX_STACK_LINE(26)
			this->nmeRebuild();
		}
	}
}
;
	return null();
}

Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::native::display::BitmapData bitmapData,::native::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return result;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool Bitmap_obj::set_smoothing( bool inSmooth){
	HX_STACK_PUSH("Bitmap::set_smoothing","native/display/Bitmap.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inSmooth,"inSmooth");
	HX_STACK_LINE(58)
	this->smoothing = inSmooth;
	HX_STACK_LINE(59)
	this->nmeRebuild();
	HX_STACK_LINE(61)
	return inSmooth;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_smoothing,return )

::native::display::BitmapData Bitmap_obj::set_bitmapData( ::native::display::BitmapData inBitmapData){
	HX_STACK_PUSH("Bitmap::set_bitmapData","native/display/Bitmap.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inBitmapData,"inBitmapData");
	HX_STACK_LINE(50)
	this->bitmapData = inBitmapData;
	HX_STACK_LINE(51)
	this->nmeRebuild();
	HX_STACK_LINE(53)
	return inBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Void Bitmap_obj::nmeRebuild( ){
{
		HX_STACK_PUSH("Bitmap::nmeRebuild","native/display/Bitmap.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		if (((this->nmeHandle != null()))){
			HX_STACK_LINE(35)
			::native::display::Graphics gfx = this->get_graphics();		HX_STACK_VAR(gfx,"gfx");
			HX_STACK_LINE(36)
			gfx->clear();
			HX_STACK_LINE(38)
			if (((this->bitmapData != null()))){
				HX_STACK_LINE(40)
				gfx->beginBitmapFill(this->bitmapData,null(),false,this->smoothing);
				HX_STACK_LINE(41)
				gfx->drawRect((int)0,(int)0,this->bitmapData->get_width(),this->bitmapData->get_height());
				HX_STACK_LINE(42)
				gfx->endFill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,nmeRebuild,(void))


Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(mGraphics,"mGraphics");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mGraphics,"mGraphics");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"mGraphics") ) { return mGraphics; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeRebuild") ) { return nmeRebuild_dyn(); }
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"mGraphics") ) { mGraphics=inValue.Cast< ::native::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp) return set_smoothing(inValue);smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp) return set_bitmapData(inValue);bitmapData=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mGraphics"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("bitmapData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_smoothing"),
	HX_CSTRING("set_bitmapData"),
	HX_CSTRING("nmeRebuild"),
	HX_CSTRING("mGraphics"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("bitmapData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.Bitmap"), hx::TCanCast< Bitmap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bitmap_obj::__boot()
{
}

} // end namespace native
} // end namespace display
