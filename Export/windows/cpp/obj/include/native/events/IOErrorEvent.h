#ifndef INCLUDED_native_events_IOErrorEvent
#define INCLUDED_native_events_IOErrorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/ErrorEvent.h>
HX_DECLARE_CLASS2(native,events,ErrorEvent)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,IOErrorEvent)
HX_DECLARE_CLASS2(native,events,TextEvent)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  IOErrorEvent_obj : public ::native::events::ErrorEvent_obj{
	public:
		typedef ::native::events::ErrorEvent_obj super;
		typedef IOErrorEvent_obj OBJ_;
		IOErrorEvent_obj();
		Void __construct(::String inType,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);

	public:
		static hx::ObjectPtr< IOErrorEvent_obj > __new(::String inType,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IOErrorEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IOErrorEvent"); }

		virtual ::String toString( );

		virtual ::native::events::Event clone( );

		static ::String IO_ERROR;
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_IOErrorEvent */ 
