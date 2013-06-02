#ifndef INCLUDED_format_display_MovieClip
#define INCLUDED_format_display_MovieClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS2(format,display,FrameLabel)
HX_DECLARE_CLASS2(format,display,MovieClip)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace format{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  MovieClip_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef MovieClip_obj OBJ_;
		MovieClip_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MovieClip_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MovieClip_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MovieClip"); }

		virtual Void unflatten( );
		Dynamic unflatten_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void prevFrame( );
		Dynamic prevFrame_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void nextFrame( );
		Dynamic nextFrame_dyn();

		virtual Void gotoAndStop( Dynamic frame,::String scene);
		Dynamic gotoAndStop_dyn();

		virtual Void gotoAndPlay( Dynamic frame,::String scene);
		Dynamic gotoAndPlay_dyn();

		virtual Void flatten( );
		Dynamic flatten_dyn();

		bool trackAsMenu;
		int totalFrames;
		int framesLoaded;
		bool enabled;
		Array< ::Dynamic > currentLabels;
		::String currentLabel;
		::String currentFrameLabel;
		int currentFrame;
};

} // end namespace format
} // end namespace display

#endif /* INCLUDED_format_display_MovieClip */ 
