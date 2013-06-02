#ifndef INCLUDED_native_events_SystemEvent
#define INCLUDED_native_events_SystemEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,SystemEvent)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  SystemEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef SystemEvent_obj OBJ_;
		SystemEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_data);

	public:
		static hx::ObjectPtr< SystemEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SystemEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SystemEvent"); }

		virtual ::String toString( );

		virtual ::native::events::Event clone( );

		int data;
		static ::String SYSTEM;
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_SystemEvent */ 
