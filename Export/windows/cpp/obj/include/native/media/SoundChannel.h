#ifndef INCLUDED_native_media_SoundChannel
#define INCLUDED_native_media_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,media,SoundChannel)
HX_DECLARE_CLASS2(native,media,SoundTransform)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundChannel_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();
		Void __construct(Dynamic inSoundHandle,Float startTime,int loops,::native::media::SoundTransform sndTransform);

	public:
		static hx::ObjectPtr< SoundChannel_obj > __new(Dynamic inSoundHandle,Float startTime,int loops,::native::media::SoundTransform sndTransform);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundChannel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundChannel"); }

		virtual ::native::media::SoundTransform set_soundTransform( ::native::media::SoundTransform inTransform);
		Dynamic set_soundTransform_dyn();

		virtual ::native::media::SoundTransform get_soundTransform( );
		Dynamic get_soundTransform_dyn();

		virtual Float set_position( Float value);
		Dynamic set_position_dyn();

		virtual Float get_position( );
		Dynamic get_position_dyn();

		virtual Float get_rightPeak( );
		Dynamic get_rightPeak_dyn();

		virtual Float get_leftPeak( );
		Dynamic get_leftPeak_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual bool nmeCheckComplete( );
		Dynamic nmeCheckComplete_dyn();

		::native::events::EventDispatcher nmeDataProvider;
		::native::media::SoundTransform nmeTransform;
		Dynamic nmeHandle;
		Float rightPeak;
		Float leftPeak;
		static int nmeDynamicSoundCount;
		static Array< ::Dynamic > nmeIncompleteList;
		static ::native::media::SoundChannel createDynamic( Dynamic inSoundHandle,::native::media::SoundTransform sndTransform,::native::events::EventDispatcher dataProvider);
		static Dynamic createDynamic_dyn();

		static bool nmeCompletePending( );
		static Dynamic nmeCompletePending_dyn();

		static Void nmePollComplete( );
		static Dynamic nmePollComplete_dyn();

		static Dynamic nme_sound_channel_is_complete;
		static Dynamic &nme_sound_channel_is_complete_dyn() { return nme_sound_channel_is_complete;}
		static Dynamic nme_sound_channel_get_left;
		static Dynamic &nme_sound_channel_get_left_dyn() { return nme_sound_channel_get_left;}
		static Dynamic nme_sound_channel_get_right;
		static Dynamic &nme_sound_channel_get_right_dyn() { return nme_sound_channel_get_right;}
		static Dynamic nme_sound_channel_get_position;
		static Dynamic &nme_sound_channel_get_position_dyn() { return nme_sound_channel_get_position;}
		static Dynamic nme_sound_channel_set_position;
		static Dynamic &nme_sound_channel_set_position_dyn() { return nme_sound_channel_set_position;}
		static Dynamic nme_sound_channel_get_data_position;
		static Dynamic &nme_sound_channel_get_data_position_dyn() { return nme_sound_channel_get_data_position;}
		static Dynamic nme_sound_channel_stop;
		static Dynamic &nme_sound_channel_stop_dyn() { return nme_sound_channel_stop;}
		static Dynamic nme_sound_channel_create;
		static Dynamic &nme_sound_channel_create_dyn() { return nme_sound_channel_create;}
		static Dynamic nme_sound_channel_set_transform;
		static Dynamic &nme_sound_channel_set_transform_dyn() { return nme_sound_channel_set_transform;}
		static Dynamic nme_sound_channel_needs_data;
		static Dynamic &nme_sound_channel_needs_data_dyn() { return nme_sound_channel_needs_data;}
		static Dynamic nme_sound_channel_add_data;
		static Dynamic &nme_sound_channel_add_data_dyn() { return nme_sound_channel_add_data;}
};

} // end namespace native
} // end namespace media

#endif /* INCLUDED_native_media_SoundChannel */ 
