#ifndef INCLUDED_native_events_TouchEvent
#define INCLUDED_native_events_TouchEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/MouseEvent.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,MouseEvent)
HX_DECLARE_CLASS2(native,events,TouchEvent)
HX_DECLARE_CLASS2(native,geom,Point)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  TouchEvent_obj : public ::native::events::MouseEvent_obj{
	public:
		typedef ::native::events::MouseEvent_obj super;
		typedef TouchEvent_obj OBJ_;
		TouchEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_in_localX,hx::Null< Float >  __o_in_localY,hx::Null< Float >  __o_in_sizeX,hx::Null< Float >  __o_in_sizeY,::native::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount);

	public:
		static hx::ObjectPtr< TouchEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_in_localX,hx::Null< Float >  __o_in_localY,hx::Null< Float >  __o_in_sizeX,hx::Null< Float >  __o_in_sizeY,::native::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TouchEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TouchEvent"); }

		virtual ::native::events::MouseEvent nmeCreateSimilar( ::String inType,::native::display::InteractiveObject related,::native::display::InteractiveObject targ);

		Float sizeY;
		Float sizeX;
		int touchPointID;
		bool isPrimaryTouchPoint;
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_END;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_OUT;
		static ::String TOUCH_OVER;
		static ::String TOUCH_ROLL_OUT;
		static ::String TOUCH_ROLL_OVER;
		static ::String TOUCH_TAP;
		static ::native::events::TouchEvent nmeCreate( ::String inType,Dynamic inEvent,::native::geom::Point inLocal,::native::display::InteractiveObject inTarget,Float sizeX,Float sizeY);
		static Dynamic nmeCreate_dyn();

};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_TouchEvent */ 
