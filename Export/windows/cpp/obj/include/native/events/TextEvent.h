#ifndef INCLUDED_native_events_TextEvent
#define INCLUDED_native_events_TextEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,TextEvent)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  TextEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef TextEvent_obj OBJ_;
		TextEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text);

	public:
		static hx::ObjectPtr< TextEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextEvent"); }

		virtual ::String toString( );

		virtual ::native::events::Event clone( );

		::String text;
		static ::String LINK;
		static ::String TEXT_INPUT;
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_TextEvent */ 
