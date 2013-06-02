#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_events_ErrorEvent
#include <native/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IOErrorEvent
#include <native/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_native_events_SampleDataEvent
#include <native/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_native_events_TextEvent
#include <native/events/TextEvent.h>
#endif
#ifndef INCLUDED_native_media_ID3Info
#include <native/media/ID3Info.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_native_media_SoundChannel
#include <native/media/SoundChannel.h>
#endif
#ifndef INCLUDED_native_media_SoundLoaderContext
#include <native/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_native_media_SoundTransform
#include <native/media/SoundTransform.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace media{

Void Sound_obj::__construct(::native::net::URLRequest stream,::native::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{
HX_STACK_PUSH("Sound::new","native/media/Sound.hx",28);
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(29)
	super::__construct(null());
	HX_STACK_LINE(31)
	this->bytesLoaded = this->bytesTotal = (int)0;
	HX_STACK_LINE(32)
	this->nmeLoading = false;
	HX_STACK_LINE(33)
	this->nmeDynamicSound = false;
	HX_STACK_LINE(35)
	if (((stream != null()))){
		HX_STACK_LINE(36)
		this->load(stream,context,forcePlayAsMusic);
	}
}
;
	return null();
}

Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::native::net::URLRequest stream,::native::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(stream,context,__o_forcePlayAsMusic);
	return result;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float Sound_obj::get_length( ){
	HX_STACK_PUSH("Sound::get_length","native/media/Sound.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_LINE(210)
	if (((bool((this->nmeHandle == null())) || bool(this->nmeLoading)))){
		HX_STACK_LINE(211)
		return (int)0;
	}
	HX_STACK_LINE(213)
	return ::native::media::Sound_obj::nme_sound_get_length(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

bool Sound_obj::get_isBuffering( ){
	HX_STACK_PUSH("Sound::get_isBuffering","native/media/Sound.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_LINE(205)
	this->nmeCheckLoading();
	HX_STACK_LINE(206)
	return (bool(this->nmeLoading) && bool((this->nmeHandle == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_isBuffering,return )

::native::media::ID3Info Sound_obj::get_id3( ){
	HX_STACK_PUSH("Sound::get_id3","native/media/Sound.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_LINE(194)
	this->nmeCheckLoading();
	HX_STACK_LINE(196)
	if (((bool((this->nmeHandle == null())) || bool(this->nmeLoading)))){
		HX_STACK_LINE(197)
		return null();
	}
	HX_STACK_LINE(199)
	::native::media::ID3Info id3 = ::native::media::ID3Info_obj::__new();		HX_STACK_VAR(id3,"id3");
	HX_STACK_LINE(200)
	::native::media::Sound_obj::nme_sound_get_id3(this->nmeHandle,id3);
	HX_STACK_LINE(201)
	return id3;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

::native::media::SoundChannel Sound_obj::play( hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::native::media::SoundTransform sndTransform){
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
	HX_STACK_PUSH("Sound::play","native/media/Sound.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(startTime,"startTime");
	HX_STACK_ARG(loops,"loops");
	HX_STACK_ARG(sndTransform,"sndTransform");
{
		HX_STACK_LINE(164)
		this->nmeCheckLoading();
		HX_STACK_LINE(166)
		if ((this->nmeDynamicSound)){
			HX_STACK_LINE(168)
			::native::events::SampleDataEvent request = ::native::events::SampleDataEvent_obj::__new(::native::events::SampleDataEvent_obj::SAMPLE_DATA,null(),null());		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(169)
			this->dispatchEvent(request);
			HX_STACK_LINE(171)
			if (((request->data->length > (int)0))){
				HX_STACK_LINE(172)
				this->nmeHandle = ::native::media::Sound_obj::nme_sound_channel_create_dynamic(request->data,sndTransform);
			}
			HX_STACK_LINE(176)
			if (((this->nmeHandle == null()))){
				HX_STACK_LINE(177)
				return null();
			}
			HX_STACK_LINE(179)
			::native::media::SoundChannel result = ::native::media::SoundChannel_obj::createDynamic(this->nmeHandle,sndTransform,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(180)
			this->nmeHandle = null();
			HX_STACK_LINE(181)
			return result;
		}
		else{
			HX_STACK_LINE(185)
			if (((bool((this->nmeHandle == null())) || bool(this->nmeLoading)))){
				HX_STACK_LINE(186)
				return null();
			}
			HX_STACK_LINE(188)
			return ::native::media::SoundChannel_obj::__new(this->nmeHandle,startTime,loops,sndTransform);
		}
		HX_STACK_LINE(166)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

Void Sound_obj::nmeOnError( ::String msg){
{
		HX_STACK_PUSH("Sound::nmeOnError","native/media/Sound.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
		HX_STACK_LINE(157)
		this->dispatchEvent(::native::events::IOErrorEvent_obj::__new(::native::events::IOErrorEvent_obj::IO_ERROR,true,false,msg,null()));
		HX_STACK_LINE(158)
		this->nmeHandle = null();
		HX_STACK_LINE(159)
		this->nmeLoading = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,nmeOnError,(void))

Void Sound_obj::nmeCheckLoading( ){
{
		HX_STACK_PUSH("Sound::nmeCheckLoading","native/media/Sound.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_LINE(136)
		if (((bool((bool(!(this->nmeDynamicSound)) && bool(this->nmeLoading))) && bool((this->nmeHandle != null()))))){
			HX_STACK_LINE(139)
			Dynamic status = ::native::media::Sound_obj::nme_sound_get_status(this->nmeHandle);		HX_STACK_VAR(status,"status");
			HX_STACK_LINE(141)
			if (((status == null()))){
				HX_STACK_LINE(142)
				hx::Throw (HX_CSTRING("Could not get sound status"));
			}
			HX_STACK_LINE(144)
			this->bytesLoaded = status->__Field(HX_CSTRING("bytesLoaded"),true);
			HX_STACK_LINE(145)
			this->bytesTotal = status->__Field(HX_CSTRING("bytesTotal"),true);
			HX_STACK_LINE(147)
			this->nmeLoading = (this->bytesLoaded < this->bytesTotal);
			HX_STACK_LINE(149)
			if (((status->__Field(HX_CSTRING("error"),true) != null()))){
				HX_STACK_LINE(150)
				hx::Throw (status->__Field(HX_CSTRING("error"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,nmeCheckLoading,(void))

Void Sound_obj::loadPCMFromByteArray( ::native::utils::ByteArray Bytes,int samples,::String __o_format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
::String format = __o_format.Default(HX_CSTRING("float"));
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100.0);
	HX_STACK_PUSH("Sound::loadPCMFromByteArray","native/media/Sound.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Bytes,"Bytes");
	HX_STACK_ARG(samples,"samples");
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(stereo,"stereo");
	HX_STACK_ARG(sampleRate,"sampleRate");
{
		HX_STACK_LINE(94)
		::native::utils::ByteArray wav = ::native::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(wav,"wav");
		HX_STACK_LINE(95)
		wav->set_endian(HX_CSTRING("littleEndian"));
		struct _Function_1_1{
			inline static int Block( ::String &format){
				HX_STACK_PUSH("*::closure","native/media/Sound.hx",97);
				{
					HX_STACK_LINE(97)
					::String _switch_1 = (format);
					if (  ( _switch_1==HX_CSTRING("float"))){
						HX_STACK_LINE(99)
						return (int)3;
					}
					else if (  ( _switch_1==HX_CSTRING("short"))){
						HX_STACK_LINE(100)
						return (int)1;
					}
					else  {
						HX_STACK_LINE(101)
						return hx::Throw (::native::errors::Error_obj::__new((HX_CSTRING("Unsupported format ") + format),null()));
					}
;
;
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		int AudioFormat = _Function_1_1::Block(format);		HX_STACK_VAR(AudioFormat,"AudioFormat");
		HX_STACK_LINE(104)
		int NumChannels = (  ((stereo)) ? int((int)2) : int((int)1) );		HX_STACK_VAR(NumChannels,"NumChannels");
		HX_STACK_LINE(105)
		int SampleRate = ::Std_obj::_int(sampleRate);		HX_STACK_VAR(SampleRate,"SampleRate");
		struct _Function_1_2{
			inline static int Block( ::String &format){
				HX_STACK_PUSH("*::closure","native/media/Sound.hx",106);
				{
					HX_STACK_LINE(106)
					::String _switch_2 = (format);
					if (  ( _switch_2==HX_CSTRING("float"))){
						HX_STACK_LINE(108)
						return (int)32;
					}
					else if (  ( _switch_2==HX_CSTRING("short"))){
						HX_STACK_LINE(109)
						return (int)16;
					}
					else  {
						HX_STACK_LINE(110)
						return hx::Throw (::native::errors::Error_obj::__new((HX_CSTRING("Unsupported format ") + format),null()));
					}
;
;
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		int BitsPerSample = _Function_1_2::Block(format);		HX_STACK_VAR(BitsPerSample,"BitsPerSample");
		HX_STACK_LINE(113)
		int ByteRate = ::Std_obj::_int((Float(((SampleRate * NumChannels) * BitsPerSample)) / Float((int)8)));		HX_STACK_VAR(ByteRate,"ByteRate");
		HX_STACK_LINE(114)
		int BlockAlign = ::Std_obj::_int((Float((NumChannels * BitsPerSample)) / Float((int)8)));		HX_STACK_VAR(BlockAlign,"BlockAlign");
		HX_STACK_LINE(115)
		int NumSamples = ::Std_obj::_int((Float(Bytes->length) / Float(BlockAlign)));		HX_STACK_VAR(NumSamples,"NumSamples");
		HX_STACK_LINE(117)
		wav->writeUTFBytes(HX_CSTRING("RIFF"));
		HX_STACK_LINE(118)
		wav->writeInt(((int)36 + Bytes->length));
		HX_STACK_LINE(119)
		wav->writeUTFBytes(HX_CSTRING("WAVE"));
		HX_STACK_LINE(120)
		wav->writeUTFBytes(HX_CSTRING("fmt "));
		HX_STACK_LINE(121)
		wav->writeInt((int)16);
		HX_STACK_LINE(122)
		wav->writeShort(AudioFormat);
		HX_STACK_LINE(123)
		wav->writeShort(NumChannels);
		HX_STACK_LINE(124)
		wav->writeInt(SampleRate);
		HX_STACK_LINE(125)
		wav->writeInt(ByteRate);
		HX_STACK_LINE(126)
		wav->writeShort(BlockAlign);
		HX_STACK_LINE(127)
		wav->writeShort(BitsPerSample);
		HX_STACK_LINE(128)
		wav->writeUTFBytes(HX_CSTRING("data"));
		HX_STACK_LINE(129)
		wav->writeInt(Bytes->length);
		HX_STACK_LINE(130)
		wav->writeBytes(Bytes,(int)0,Bytes->length);
		HX_STACK_LINE(132)
		wav->position = (int)0;
		HX_STACK_LINE(133)
		this->loadCompressedDataFromByteArray(wav,wav->length,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::native::utils::ByteArray bytes,int length,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_PUSH("Sound::loadCompressedDataFromByteArray","native/media/Sound.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic");
{
		HX_STACK_LINE(82)
		this->bytesLoaded = this->bytesTotal = length;
		HX_STACK_LINE(83)
		this->nmeHandle = ::native::media::Sound_obj::nme_sound_from_data(bytes,length,forcePlayAsMusic);
		HX_STACK_LINE(85)
		if (((this->nmeHandle == null()))){
			HX_STACK_LINE(86)
			hx::Throw ((HX_CSTRING("Could not load buffer with length: ") + length));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::load( ::native::net::URLRequest stream,::native::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_PUSH("Sound::load","native/media/Sound.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stream,"stream");
	HX_STACK_ARG(context,"context");
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic");
{
		HX_STACK_LINE(64)
		this->bytesLoaded = this->bytesTotal = (int)0;
		HX_STACK_LINE(65)
		this->nmeHandle = ::native::media::Sound_obj::nme_sound_from_file(stream->url,forcePlayAsMusic);
		HX_STACK_LINE(67)
		if (((this->nmeHandle == null()))){
			HX_STACK_LINE(68)
			hx::Throw ((HX_CSTRING("Could not load:") + stream->url));
		}
		else{
			HX_STACK_LINE(73)
			this->url = stream->url;
			HX_STACK_LINE(74)
			this->nmeLoading = true;
			HX_STACK_LINE(75)
			this->nmeLoading = false;
			HX_STACK_LINE(76)
			this->nmeCheckLoading();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,load,(void))

Void Sound_obj::close( ){
{
		HX_STACK_PUSH("Sound::close","native/media/Sound.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		if (((this->nmeHandle != null()))){
			HX_STACK_LINE(56)
			::native::media::Sound_obj::nme_sound_close(this->nmeHandle);
		}
		HX_STACK_LINE(58)
		this->nmeHandle = (int)0;
		HX_STACK_LINE(59)
		this->nmeLoading = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("Sound::addEventListener","native/media/Sound.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(41)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_STACK_LINE(43)
		if (((type == ::native::events::SampleDataEvent_obj::SAMPLE_DATA))){
			HX_STACK_LINE(45)
			if (((this->nmeHandle != null()))){
				HX_STACK_LINE(46)
				hx::Throw (HX_CSTRING("Can't use dynamic sound once file loaded"));
			}
			HX_STACK_LINE(48)
			this->nmeDynamicSound = true;
			HX_STACK_LINE(49)
			this->nmeLoading = false;
		}
	}
return null();
}


Dynamic Sound_obj::nme_sound_from_file;

Dynamic Sound_obj::nme_sound_from_data;

Dynamic Sound_obj::nme_sound_get_id3;

Dynamic Sound_obj::nme_sound_get_length;

Dynamic Sound_obj::nme_sound_close;

Dynamic Sound_obj::nme_sound_get_status;

Dynamic Sound_obj::nme_sound_channel_create_dynamic;


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(nmeDynamicSound,"nmeDynamicSound");
	HX_MARK_MEMBER_NAME(nmeLoading,"nmeLoading");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(id3,"id3");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeDynamicSound,"nmeDynamicSound");
	HX_VISIT_MEMBER_NAME(nmeLoading,"nmeLoading");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(id3,"id3");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		if (HX_FIELD_EQ(inName,"id3") ) { return inCallProp ? get_id3() : id3; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return get_id3_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnError") ) { return nmeOnError_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeLoading") ) { return nmeLoading; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return inCallProp ? get_isBuffering() : isBuffering; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { return nme_sound_close; }
		if (HX_FIELD_EQ(inName,"get_isBuffering") ) { return get_isBuffering_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeCheckLoading") ) { return nmeCheckLoading_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeDynamicSound") ) { return nmeDynamicSound; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { return nme_sound_get_id3; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { return nme_sound_from_file; }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { return nme_sound_from_data; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { return nme_sound_get_length; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { return nme_sound_get_status; }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { return nme_sound_channel_create_dynamic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id3") ) { id3=inValue.Cast< ::native::media::ID3Info >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeLoading") ) { nmeLoading=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { nme_sound_close=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDynamicSound") ) { nmeDynamicSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { nme_sound_get_id3=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { nme_sound_from_file=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { nme_sound_from_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { nme_sound_get_length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { nme_sound_get_status=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { nme_sound_channel_create_dynamic=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeDynamicSound"));
	outFields->push(HX_CSTRING("nmeLoading"));
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("isBuffering"));
	outFields->push(HX_CSTRING("id3"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("bytesLoaded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_sound_from_file"),
	HX_CSTRING("nme_sound_from_data"),
	HX_CSTRING("nme_sound_get_id3"),
	HX_CSTRING("nme_sound_get_length"),
	HX_CSTRING("nme_sound_close"),
	HX_CSTRING("nme_sound_get_status"),
	HX_CSTRING("nme_sound_channel_create_dynamic"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_length"),
	HX_CSTRING("get_isBuffering"),
	HX_CSTRING("get_id3"),
	HX_CSTRING("play"),
	HX_CSTRING("nmeOnError"),
	HX_CSTRING("nmeCheckLoading"),
	HX_CSTRING("loadPCMFromByteArray"),
	HX_CSTRING("loadCompressedDataFromByteArray"),
	HX_CSTRING("load"),
	HX_CSTRING("close"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("nmeDynamicSound"),
	HX_CSTRING("nmeLoading"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("url"),
	HX_CSTRING("length"),
	HX_CSTRING("isBuffering"),
	HX_CSTRING("id3"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("bytesLoaded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_file,"nme_sound_from_file");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_data,"nme_sound_from_data");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_id3,"nme_sound_get_id3");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_length,"nme_sound_get_length");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_close,"nme_sound_close");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_status,"nme_sound_get_status");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_channel_create_dynamic,"nme_sound_channel_create_dynamic");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_from_file,"nme_sound_from_file");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_from_data,"nme_sound_from_data");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_id3,"nme_sound_get_id3");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_length,"nme_sound_get_length");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_close,"nme_sound_close");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_status,"nme_sound_get_status");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_channel_create_dynamic,"nme_sound_channel_create_dynamic");
};

Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.media.Sound"), hx::TCanCast< Sound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sound_obj::__boot()
{
	nme_sound_from_file= ::native::Loader_obj::load(HX_CSTRING("nme_sound_from_file"),(int)2);
	nme_sound_from_data= ::native::Loader_obj::load(HX_CSTRING("nme_sound_from_data"),(int)3);
	nme_sound_get_id3= ::native::Loader_obj::load(HX_CSTRING("nme_sound_get_id3"),(int)2);
	nme_sound_get_length= ::native::Loader_obj::load(HX_CSTRING("nme_sound_get_length"),(int)1);
	nme_sound_close= ::native::Loader_obj::load(HX_CSTRING("nme_sound_close"),(int)1);
	nme_sound_get_status= ::native::Loader_obj::load(HX_CSTRING("nme_sound_get_status"),(int)1);
	nme_sound_channel_create_dynamic= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_create_dynamic"),(int)2);
}

} // end namespace native
} // end namespace media
