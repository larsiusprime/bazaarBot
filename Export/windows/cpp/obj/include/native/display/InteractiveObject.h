#ifndef INCLUDED_native_display_InteractiveObject
#define INCLUDED_native_display_InteractiveObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/DisplayObject.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  InteractiveObject_obj : public ::native::display::DisplayObject_obj{
	public:
		typedef ::native::display::DisplayObject_obj super;
		typedef InteractiveObject_obj OBJ_;
		InteractiveObject_obj();
		Void __construct(Dynamic inHandle,::String inType);

	public:
		static hx::ObjectPtr< InteractiveObject_obj > __new(Dynamic inHandle,::String inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InteractiveObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InteractiveObject"); }

		virtual bool get_needsSoftKeyboard( );
		Dynamic get_needsSoftKeyboard_dyn();

		virtual bool set_needsSoftKeyboard( bool inVal);
		Dynamic set_needsSoftKeyboard_dyn();

		virtual bool get_moveForSoftKeyboard( );
		Dynamic get_moveForSoftKeyboard_dyn();

		virtual bool set_moveForSoftKeyboard( bool inVal);
		Dynamic set_moveForSoftKeyboard_dyn();

		virtual bool set_mouseEnabled( bool inVal);
		Dynamic set_mouseEnabled_dyn();

		virtual bool get_mouseEnabled( );
		Dynamic get_mouseEnabled_dyn();

		virtual bool requestSoftKeyboard( );
		Dynamic requestSoftKeyboard_dyn();

		virtual ::native::display::InteractiveObject nmeAsInteractiveObject( );

		bool nmeMouseEnabled;
		bool doubleClickEnabled;
		static Dynamic nme_display_object_set_mouse_enabled;
		static Dynamic &nme_display_object_set_mouse_enabled_dyn() { return nme_display_object_set_mouse_enabled;}
		static Dynamic nme_display_object_set_needs_soft_keyboard;
		static Dynamic &nme_display_object_set_needs_soft_keyboard_dyn() { return nme_display_object_set_needs_soft_keyboard;}
		static Dynamic nme_display_object_get_needs_soft_keyboard;
		static Dynamic &nme_display_object_get_needs_soft_keyboard_dyn() { return nme_display_object_get_needs_soft_keyboard;}
		static Dynamic nme_display_object_set_moves_for_soft_keyboard;
		static Dynamic &nme_display_object_set_moves_for_soft_keyboard_dyn() { return nme_display_object_set_moves_for_soft_keyboard;}
		static Dynamic nme_display_object_get_moves_for_soft_keyboard;
		static Dynamic &nme_display_object_get_moves_for_soft_keyboard_dyn() { return nme_display_object_get_moves_for_soft_keyboard;}
		static Dynamic nme_display_object_request_soft_keyboard;
		static Dynamic &nme_display_object_request_soft_keyboard_dyn() { return nme_display_object_request_soft_keyboard;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_InteractiveObject */ 
