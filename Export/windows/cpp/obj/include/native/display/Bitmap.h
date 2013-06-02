#ifndef INCLUDED_native_display_Bitmap
#define INCLUDED_native_display_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/DisplayObject.h>
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,Graphics)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,PixelSnapping)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Bitmap_obj : public ::native::display::DisplayObject_obj{
	public:
		typedef ::native::display::DisplayObject_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();
		Void __construct(::native::display::BitmapData bitmapData,::native::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);

	public:
		static hx::ObjectPtr< Bitmap_obj > __new(::native::display::BitmapData bitmapData,::native::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Bitmap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bitmap"); }

		virtual bool set_smoothing( bool inSmooth);
		Dynamic set_smoothing_dyn();

		virtual ::native::display::BitmapData set_bitmapData( ::native::display::BitmapData inBitmapData);
		Dynamic set_bitmapData_dyn();

		virtual Void nmeRebuild( );
		Dynamic nmeRebuild_dyn();

		::native::display::Graphics mGraphics;
		bool smoothing;
		::native::display::BitmapData bitmapData;
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_Bitmap */ 
