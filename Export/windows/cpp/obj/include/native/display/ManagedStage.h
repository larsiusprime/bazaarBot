#ifndef INCLUDED_native_display_ManagedStage
#define INCLUDED_native_display_ManagedStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Stage.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,ManagedStage)
HX_DECLARE_CLASS2(native,display,Stage)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ManagedStage_obj : public ::native::display::Stage_obj{
	public:
		typedef ::native::display::Stage_obj super;
		typedef ManagedStage_obj OBJ_;
		ManagedStage_obj();
		Void __construct(int inWidth,int inHeight,hx::Null< int >  __o_inFlags);

	public:
		static hx::ObjectPtr< ManagedStage_obj > __new(int inWidth,int inHeight,hx::Null< int >  __o_inFlags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ManagedStage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ManagedStage"); }

		Dynamic setNextWake;
		inline Dynamic &setNextWake_dyn() {return setNextWake; }

		virtual Void sendQuit( );
		Dynamic sendQuit_dyn();

		virtual Void resize( int inWidth,int inHeight);
		Dynamic resize_dyn();

		virtual Void pumpEvent( Dynamic inEvent);
		Dynamic pumpEvent_dyn();

		virtual Void nmeRender( bool inSendEnterFrame);

		virtual Float nmeDoProcessStageEvent( Dynamic inEvent);

		Dynamic endRender;
		inline Dynamic &endRender_dyn() {return endRender; }

		Dynamic beginRender;
		inline Dynamic &beginRender_dyn() {return beginRender; }

		static Dynamic nme_managed_stage_create;
		static Dynamic &nme_managed_stage_create_dyn() { return nme_managed_stage_create;}
		static Dynamic nme_managed_stage_pump_event;
		static Dynamic &nme_managed_stage_pump_event_dyn() { return nme_managed_stage_pump_event;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_ManagedStage */ 
