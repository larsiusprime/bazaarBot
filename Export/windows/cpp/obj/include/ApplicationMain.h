#ifndef INCLUDED_ApplicationMain
#define INCLUDED_ApplicationMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ApplicationMain)


class HXCPP_CLASS_ATTRIBUTES  ApplicationMain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ApplicationMain_obj OBJ_;
		ApplicationMain_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ApplicationMain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ApplicationMain_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ApplicationMain"); }

		static Void main( );
		static Dynamic main_dyn();

		static Dynamic getAsset( ::String inName);
		static Dynamic getAsset_dyn();

};


#endif /* INCLUDED_ApplicationMain */ 
