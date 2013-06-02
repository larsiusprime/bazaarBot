#ifndef INCLUDED_native_display_TouchInfo
#define INCLUDED_native_display_TouchInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,TouchInfo)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  TouchInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchInfo_obj OBJ_;
		TouchInfo_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TouchInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TouchInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TouchInfo"); }

		Array< ::Dynamic > touchOverObjects;
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_TouchInfo */ 
