#ifndef INCLUDED_native_events_ProgressEvent
#define INCLUDED_native_events_ProgressEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,ProgressEvent)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  ProgressEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef ProgressEvent_obj OBJ_;
		ProgressEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_bytesLoaded,hx::Null< int >  __o_bytesTotal);

	public:
		static hx::ObjectPtr< ProgressEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_bytesLoaded,hx::Null< int >  __o_bytesTotal);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ProgressEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ProgressEvent"); }

		virtual ::String toString( );

		virtual ::native::events::Event clone( );

		int bytesTotal;
		int bytesLoaded;
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_ProgressEvent */ 
