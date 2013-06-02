#ifndef INCLUDED_native_events_MouseEvent
#define INCLUDED_native_events_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,MouseEvent)
HX_DECLARE_CLASS2(native,geom,Point)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  MouseEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::native::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);

	public:
		static hx::ObjectPtr< MouseEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::native::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MouseEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MouseEvent"); }

		virtual Void updateAfterEvent( );
		Dynamic updateAfterEvent_dyn();

		virtual ::String toString( );

		virtual ::native::events::MouseEvent nmeCreateSimilar( ::String inType,::native::display::InteractiveObject related,::native::display::InteractiveObject targ);
		Dynamic nmeCreateSimilar_dyn();

		virtual ::native::events::Event clone( );

		Float stageY;
		Float stageX;
		bool shiftKey;
		::native::display::InteractiveObject relatedObject;
		Float localY;
		Float localX;
		int delta;
		bool ctrlKey;
		bool commandKey;
		int clickCount;
		bool buttonDown;
		bool altKey;
		static ::String DOUBLE_CLICK;
		static ::String CLICK;
		static ::String MIDDLE_CLICK;
		static ::String MIDDLE_MOUSE_DOWN;
		static ::String MIDDLE_MOUSE_UP;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_MOVE;
		static ::String MOUSE_OUT;
		static ::String MOUSE_OVER;
		static ::String MOUSE_UP;
		static ::String MOUSE_WHEEL;
		static ::String RIGHT_CLICK;
		static ::String RIGHT_MOUSE_DOWN;
		static ::String RIGHT_MOUSE_UP;
		static ::String ROLL_OUT;
		static ::String ROLL_OVER;
		static int efLeftDown;
		static int efShiftDown;
		static int efCtrlDown;
		static int efAltDown;
		static int efCommandDown;
		static ::native::events::MouseEvent nmeCreate( ::String inType,Dynamic inEvent,::native::geom::Point inLocal,::native::display::InteractiveObject inTarget);
		static Dynamic nmeCreate_dyn();

};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_MouseEvent */ 
