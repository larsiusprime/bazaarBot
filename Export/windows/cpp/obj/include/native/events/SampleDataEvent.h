#ifndef INCLUDED_native_events_SampleDataEvent
#define INCLUDED_native_events_SampleDataEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,SampleDataEvent)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  SampleDataEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef SampleDataEvent_obj OBJ_;
		SampleDataEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		static hx::ObjectPtr< SampleDataEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SampleDataEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SampleDataEvent"); }

		virtual ::String toString( );

		virtual ::native::events::Event clone( );

		Float position;
		::native::utils::ByteArray data;
		static ::String SAMPLE_DATA;
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_SampleDataEvent */ 
