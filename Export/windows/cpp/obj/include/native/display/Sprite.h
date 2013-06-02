#ifndef INCLUDED_native_display_Sprite
#define INCLUDED_native_display_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/DisplayObjectContainer.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public ::native::display::DisplayObjectContainer_obj{
	public:
		typedef ::native::display::DisplayObjectContainer_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Sprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sprite"); }

		virtual Void stopDrag( );
		Dynamic stopDrag_dyn();

		virtual Void startDrag( hx::Null< bool >  lockCenter,::native::geom::Rectangle bounds);
		Dynamic startDrag_dyn();

		virtual ::String nmeGetType( );
		Dynamic nmeGetType_dyn();

		bool useHandCursor;
		bool buttonMode;
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_Sprite */ 
