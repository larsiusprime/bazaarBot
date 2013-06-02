#ifndef INCLUDED_native_events_Listener
#define INCLUDED_native_events_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,Listener)
namespace native{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  Listener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Listener_obj OBJ_;
		Listener_obj();
		Void __construct(Dynamic inListener,bool inUseCapture,int inPriority);

	public:
		static hx::ObjectPtr< Listener_obj > __new(Dynamic inListener,bool inUseCapture,int inPriority);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Listener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Listener"); }

		virtual bool Is( Dynamic inListener,bool inCapture);
		Dynamic Is_dyn();

		virtual Void dispatchEvent( ::native::events::Event event);
		Dynamic dispatchEvent_dyn();

		bool mUseCapture;
		int mPriority;
		Dynamic mListner;
		Dynamic &mListner_dyn() { return mListner;}
		int mID;
		static int sIDs;
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_Listener */ 
