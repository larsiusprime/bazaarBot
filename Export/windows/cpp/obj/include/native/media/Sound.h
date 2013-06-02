#ifndef INCLUDED_native_media_Sound
#define INCLUDED_native_media_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,media,ID3Info)
HX_DECLARE_CLASS2(native,media,Sound)
HX_DECLARE_CLASS2(native,media,SoundChannel)
HX_DECLARE_CLASS2(native,media,SoundLoaderContext)
HX_DECLARE_CLASS2(native,media,SoundTransform)
HX_DECLARE_CLASS2(native,net,URLRequest)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::native::net::URLRequest stream,::native::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic);

	public:
		static hx::ObjectPtr< Sound_obj > __new(::native::net::URLRequest stream,::native::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sound"); }

		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual bool get_isBuffering( );
		Dynamic get_isBuffering_dyn();

		virtual ::native::media::ID3Info get_id3( );
		Dynamic get_id3_dyn();

		virtual ::native::media::SoundChannel play( hx::Null< Float >  startTime,hx::Null< int >  loops,::native::media::SoundTransform sndTransform);
		Dynamic play_dyn();

		virtual Void nmeOnError( ::String msg);
		Dynamic nmeOnError_dyn();

		virtual Void nmeCheckLoading( );
		Dynamic nmeCheckLoading_dyn();

		virtual Void loadPCMFromByteArray( ::native::utils::ByteArray Bytes,int samples,::String format,hx::Null< bool >  stereo,hx::Null< Float >  sampleRate);
		Dynamic loadPCMFromByteArray_dyn();

		virtual Void loadCompressedDataFromByteArray( ::native::utils::ByteArray bytes,int length,hx::Null< bool >  forcePlayAsMusic);
		Dynamic loadCompressedDataFromByteArray_dyn();

		virtual Void load( ::native::net::URLRequest stream,::native::media::SoundLoaderContext context,hx::Null< bool >  forcePlayAsMusic);
		Dynamic load_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		bool nmeDynamicSound;
		bool nmeLoading;
		Dynamic nmeHandle;
		::String url;
		Float length;
		bool isBuffering;
		::native::media::ID3Info id3;
		int bytesTotal;
		int bytesLoaded;
		static Dynamic nme_sound_from_file;
		static Dynamic &nme_sound_from_file_dyn() { return nme_sound_from_file;}
		static Dynamic nme_sound_from_data;
		static Dynamic &nme_sound_from_data_dyn() { return nme_sound_from_data;}
		static Dynamic nme_sound_get_id3;
		static Dynamic &nme_sound_get_id3_dyn() { return nme_sound_get_id3;}
		static Dynamic nme_sound_get_length;
		static Dynamic &nme_sound_get_length_dyn() { return nme_sound_get_length;}
		static Dynamic nme_sound_close;
		static Dynamic &nme_sound_close_dyn() { return nme_sound_close;}
		static Dynamic nme_sound_get_status;
		static Dynamic &nme_sound_get_status_dyn() { return nme_sound_get_status;}
		static Dynamic nme_sound_channel_create_dynamic;
		static Dynamic &nme_sound_channel_create_dynamic_dyn() { return nme_sound_channel_create_dynamic;}
};

} // end namespace native
} // end namespace media

#endif /* INCLUDED_native_media_Sound */ 
