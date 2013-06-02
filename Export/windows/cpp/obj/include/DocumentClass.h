#ifndef INCLUDED_DocumentClass
#define INCLUDED_DocumentClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Main.h>
HX_DECLARE_CLASS0(DocumentClass)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,display,Stage)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  DocumentClass_obj : public ::Main_obj{
	public:
		typedef ::Main_obj super;
		typedef DocumentClass_obj OBJ_;
		DocumentClass_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DocumentClass_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DocumentClass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DocumentClass"); }

		virtual ::native::display::Stage get_stage( );

};


#endif /* INCLUDED_DocumentClass */ 
