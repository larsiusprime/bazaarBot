#ifndef INCLUDED_native_events_EventPhase
#define INCLUDED_native_events_EventPhase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,events,EventPhase)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  EventPhase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventPhase_obj OBJ_;
		EventPhase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EventPhase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EventPhase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EventPhase"); }

		static int CAPTURING_PHASE;
		static int AT_TARGET;
		static int BUBBLING_PHASE;
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_EventPhase */ 
