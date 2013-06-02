#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
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
#ifndef INCLUDED_native_events_SampleDataEvent
#include <native/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_native_media_SoundChannel
#include <native/media/SoundChannel.h>
#endif
#ifndef INCLUDED_native_media_SoundTransform
#include <native/media/SoundTransform.h>
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

Void SoundChannel_obj::__construct(Dynamic inSoundHandle,Float startTime,int loops,::native::media::SoundTransform sndTransform)
{
HX_STACK_PUSH("SoundChannel::new","native/media/SoundChannel.hx",23);
{
	HX_STACK_LINE(24)
	super::__construct(null());
	HX_STACK_LINE(26)
	if (((sndTransform != null()))){
		HX_STACK_LINE(27)
		this->nmeTransform = sndTransform->clone();
	}
	HX_STACK_LINE(31)
	if (((inSoundHandle != null()))){
		HX_STACK_LINE(32)
		this->nmeHandle = ::native::media::SoundChannel_obj::nme_sound_channel_create(inSoundHandle,startTime,loops,this->nmeTransform);
	}
	HX_STACK_LINE(34)
	if (((this->nmeHandle != null()))){
		HX_STACK_LINE(35)
		::native::media::SoundChannel_obj::nmeIncompleteList->push(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(Dynamic inSoundHandle,Float startTime,int loops,::native::media::SoundTransform sndTransform)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(inSoundHandle,startTime,loops,sndTransform);
	return result;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::native::media::SoundTransform SoundChannel_obj::set_soundTransform( ::native::media::SoundTransform inTransform){
	HX_STACK_PUSH("SoundChannel::set_soundTransform","native/media/SoundChannel.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inTransform,"inTransform");
	HX_STACK_LINE(127)
	this->nmeTransform = inTransform->clone();
	HX_STACK_LINE(128)
	::native::media::SoundChannel_obj::nme_sound_channel_set_transform(this->nmeHandle,this->nmeTransform);
	HX_STACK_LINE(130)
	return inTransform;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

::native::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_PUSH("SoundChannel::get_soundTransform","native/media/SoundChannel.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	if (((this->nmeTransform == null()))){
		HX_STACK_LINE(118)
		this->nmeTransform = ::native::media::SoundTransform_obj::__new(null(),null());
	}
	HX_STACK_LINE(122)
	return this->nmeTransform->clone();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_PUSH("SoundChannel::set_position","native/media/SoundChannel.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(113)
	return ::native::media::SoundChannel_obj::nme_sound_channel_set_position(this->nmeHandle,this->get_position());
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

Float SoundChannel_obj::get_position( ){
	HX_STACK_PUSH("SoundChannel::get_position","native/media/SoundChannel.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_LINE(112)
	return ::native::media::SoundChannel_obj::nme_sound_channel_get_position(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::get_rightPeak( ){
	HX_STACK_PUSH("SoundChannel::get_rightPeak","native/media/SoundChannel.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_LINE(111)
	return ::native::media::SoundChannel_obj::nme_sound_channel_get_right(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_rightPeak,return )

Float SoundChannel_obj::get_leftPeak( ){
	HX_STACK_PUSH("SoundChannel::get_leftPeak","native/media/SoundChannel.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_LINE(110)
	return ::native::media::SoundChannel_obj::nme_sound_channel_get_left(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_leftPeak,return )

Void SoundChannel_obj::stop( ){
{
		HX_STACK_PUSH("SoundChannel::stop","native/media/SoundChannel.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		::native::media::SoundChannel_obj::nme_sound_channel_stop(this->nmeHandle);
		HX_STACK_LINE(106)
		this->nmeHandle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

bool SoundChannel_obj::nmeCheckComplete( ){
	HX_STACK_PUSH("SoundChannel::nmeCheckComplete","native/media/SoundChannel.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	if (((this->nmeHandle != null()))){
		HX_STACK_LINE(53)
		if (((bool((this->nmeDataProvider != null())) && bool(::native::media::SoundChannel_obj::nme_sound_channel_needs_data(this->nmeHandle))))){
			HX_STACK_LINE(55)
			::native::events::SampleDataEvent request = ::native::events::SampleDataEvent_obj::__new(::native::events::SampleDataEvent_obj::SAMPLE_DATA,null(),null());		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(56)
			request->position = ::native::media::SoundChannel_obj::nme_sound_channel_get_data_position(this->nmeHandle);
			HX_STACK_LINE(57)
			this->nmeDataProvider->dispatchEvent(request);
			HX_STACK_LINE(59)
			if (((request->data->length > (int)0))){
				HX_STACK_LINE(60)
				::native::media::SoundChannel_obj::nme_sound_channel_add_data(this->nmeHandle,request->data);
			}
		}
		HX_STACK_LINE(65)
		if ((::native::media::SoundChannel_obj::nme_sound_channel_is_complete(this->nmeHandle))){
			HX_STACK_LINE(67)
			this->nmeHandle = null();
			HX_STACK_LINE(68)
			if (((this->nmeDataProvider != null()))){
				HX_STACK_LINE(69)
				(::native::media::SoundChannel_obj::nmeDynamicSoundCount)--;
			}
			HX_STACK_LINE(73)
			::native::events::Event complete = ::native::events::Event_obj::__new(::native::events::Event_obj::SOUND_COMPLETE,null(),null());		HX_STACK_VAR(complete,"complete");
			HX_STACK_LINE(74)
			this->dispatchEvent(complete);
			HX_STACK_LINE(75)
			return true;
		}
	}
	HX_STACK_LINE(79)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,nmeCheckComplete,return )

int SoundChannel_obj::nmeDynamicSoundCount;

Array< ::Dynamic > SoundChannel_obj::nmeIncompleteList;

::native::media::SoundChannel SoundChannel_obj::createDynamic( Dynamic inSoundHandle,::native::media::SoundTransform sndTransform,::native::events::EventDispatcher dataProvider){
	HX_STACK_PUSH("SoundChannel::createDynamic","native/media/SoundChannel.hx",39);
	HX_STACK_ARG(inSoundHandle,"inSoundHandle");
	HX_STACK_ARG(sndTransform,"sndTransform");
	HX_STACK_ARG(dataProvider,"dataProvider");
	HX_STACK_LINE(40)
	::native::media::SoundChannel result = ::native::media::SoundChannel_obj::__new(null(),(int)0,(int)0,sndTransform);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(42)
	result->nmeDataProvider = dataProvider;
	HX_STACK_LINE(43)
	result->nmeHandle = inSoundHandle;
	HX_STACK_LINE(44)
	::native::media::SoundChannel_obj::nmeIncompleteList->push(result);
	HX_STACK_LINE(45)
	(::native::media::SoundChannel_obj::nmeDynamicSoundCount)++;
	HX_STACK_LINE(47)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SoundChannel_obj,createDynamic,return )

bool SoundChannel_obj::nmeCompletePending( ){
	HX_STACK_PUSH("SoundChannel::nmeCompletePending","native/media/SoundChannel.hx",82);
	HX_STACK_LINE(82)
	return (::native::media::SoundChannel_obj::nmeIncompleteList->length > (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,nmeCompletePending,return )

Void SoundChannel_obj::nmePollComplete( ){
{
		HX_STACK_PUSH("SoundChannel::nmePollComplete","native/media/SoundChannel.hx",86);
		HX_STACK_LINE(86)
		if (((::native::media::SoundChannel_obj::nmeIncompleteList->length > (int)0))){
			HX_STACK_LINE(89)
			Array< ::Dynamic > incomplete = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(incomplete,"incomplete");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = ::native::media::SoundChannel_obj::nmeIncompleteList;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(91)
				while(((_g < _g1->length))){
					HX_STACK_LINE(91)
					::native::media::SoundChannel channel = _g1->__get(_g).StaticCast< ::native::media::SoundChannel >();		HX_STACK_VAR(channel,"channel");
					HX_STACK_LINE(91)
					++(_g);
					HX_STACK_LINE(93)
					if ((!(channel->nmeCheckComplete()))){
						HX_STACK_LINE(94)
						incomplete->push(channel);
					}
				}
			}
			HX_STACK_LINE(99)
			::native::media::SoundChannel_obj::nmeIncompleteList = incomplete;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,nmePollComplete,(void))

Dynamic SoundChannel_obj::nme_sound_channel_is_complete;

Dynamic SoundChannel_obj::nme_sound_channel_get_left;

Dynamic SoundChannel_obj::nme_sound_channel_get_right;

Dynamic SoundChannel_obj::nme_sound_channel_get_position;

Dynamic SoundChannel_obj::nme_sound_channel_set_position;

Dynamic SoundChannel_obj::nme_sound_channel_get_data_position;

Dynamic SoundChannel_obj::nme_sound_channel_stop;

Dynamic SoundChannel_obj::nme_sound_channel_create;

Dynamic SoundChannel_obj::nme_sound_channel_set_transform;

Dynamic SoundChannel_obj::nme_sound_channel_needs_data;

Dynamic SoundChannel_obj::nme_sound_channel_add_data;


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(nmeDataProvider,"nmeDataProvider");
	HX_MARK_MEMBER_NAME(nmeTransform,"nmeTransform");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeDataProvider,"nmeDataProvider");
	HX_VISIT_MEMBER_NAME(nmeTransform,"nmeTransform");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return inCallProp ? get_leftPeak() : leftPeak; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return inCallProp ? get_rightPeak() : rightPeak; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_leftPeak") ) { return get_leftPeak_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeTransform") ) { return nmeTransform; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createDynamic") ) { return createDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightPeak") ) { return get_rightPeak_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return get_soundTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmePollComplete") ) { return nmePollComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeDataProvider") ) { return nmeDataProvider; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeCheckComplete") ) { return nmeCheckComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeIncompleteList") ) { return nmeIncompleteList; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeCompletePending") ) { return nmeCompletePending_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeDynamicSoundCount") ) { return nmeDynamicSoundCount; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_stop") ) { return nme_sound_channel_stop; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create") ) { return nme_sound_channel_create; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_left") ) { return nme_sound_channel_get_left; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_add_data") ) { return nme_sound_channel_add_data; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_right") ) { return nme_sound_channel_get_right; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_needs_data") ) { return nme_sound_channel_needs_data; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_is_complete") ) { return nme_sound_channel_is_complete; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_position") ) { return nme_sound_channel_get_position; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_position") ) { return nme_sound_channel_set_position; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_transform") ) { return nme_sound_channel_set_transform; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_data_position") ) { return nme_sound_channel_get_data_position; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeTransform") ) { nmeTransform=inValue.Cast< ::native::media::SoundTransform >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return set_soundTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeDataProvider") ) { nmeDataProvider=inValue.Cast< ::native::events::EventDispatcher >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeIncompleteList") ) { nmeIncompleteList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeDynamicSoundCount") ) { nmeDynamicSoundCount=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_stop") ) { nme_sound_channel_stop=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create") ) { nme_sound_channel_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_left") ) { nme_sound_channel_get_left=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_add_data") ) { nme_sound_channel_add_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_right") ) { nme_sound_channel_get_right=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_needs_data") ) { nme_sound_channel_needs_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_is_complete") ) { nme_sound_channel_is_complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_position") ) { nme_sound_channel_get_position=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_position") ) { nme_sound_channel_set_position=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_transform") ) { nme_sound_channel_set_transform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_data_position") ) { nme_sound_channel_get_data_position=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeDataProvider"));
	outFields->push(HX_CSTRING("nmeTransform"));
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("soundTransform"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("rightPeak"));
	outFields->push(HX_CSTRING("leftPeak"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nmeDynamicSoundCount"),
	HX_CSTRING("nmeIncompleteList"),
	HX_CSTRING("createDynamic"),
	HX_CSTRING("nmeCompletePending"),
	HX_CSTRING("nmePollComplete"),
	HX_CSTRING("nme_sound_channel_is_complete"),
	HX_CSTRING("nme_sound_channel_get_left"),
	HX_CSTRING("nme_sound_channel_get_right"),
	HX_CSTRING("nme_sound_channel_get_position"),
	HX_CSTRING("nme_sound_channel_set_position"),
	HX_CSTRING("nme_sound_channel_get_data_position"),
	HX_CSTRING("nme_sound_channel_stop"),
	HX_CSTRING("nme_sound_channel_create"),
	HX_CSTRING("nme_sound_channel_set_transform"),
	HX_CSTRING("nme_sound_channel_needs_data"),
	HX_CSTRING("nme_sound_channel_add_data"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_soundTransform"),
	HX_CSTRING("get_soundTransform"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("get_rightPeak"),
	HX_CSTRING("get_leftPeak"),
	HX_CSTRING("stop"),
	HX_CSTRING("nmeCheckComplete"),
	HX_CSTRING("nmeDataProvider"),
	HX_CSTRING("nmeTransform"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("rightPeak"),
	HX_CSTRING("leftPeak"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nmeDynamicSoundCount,"nmeDynamicSoundCount");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nmeIncompleteList,"nmeIncompleteList");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_is_complete,"nme_sound_channel_is_complete");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_left,"nme_sound_channel_get_left");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_right,"nme_sound_channel_get_right");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_position,"nme_sound_channel_get_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_position,"nme_sound_channel_set_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_data_position,"nme_sound_channel_get_data_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_stop,"nme_sound_channel_stop");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create,"nme_sound_channel_create");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_transform,"nme_sound_channel_set_transform");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_needs_data,"nme_sound_channel_needs_data");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_add_data,"nme_sound_channel_add_data");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nmeDynamicSoundCount,"nmeDynamicSoundCount");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nmeIncompleteList,"nmeIncompleteList");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_is_complete,"nme_sound_channel_is_complete");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_left,"nme_sound_channel_get_left");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_right,"nme_sound_channel_get_right");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_position,"nme_sound_channel_get_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_position,"nme_sound_channel_set_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_data_position,"nme_sound_channel_get_data_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_stop,"nme_sound_channel_stop");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create,"nme_sound_channel_create");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_transform,"nme_sound_channel_set_transform");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_needs_data,"nme_sound_channel_needs_data");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_add_data,"nme_sound_channel_add_data");
};

Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.media.SoundChannel"), hx::TCanCast< SoundChannel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SoundChannel_obj::__boot()
{
	nmeDynamicSoundCount= (int)0;
	nmeIncompleteList= Array_obj< ::Dynamic >::__new();
	nme_sound_channel_is_complete= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_is_complete"),(int)1);
	nme_sound_channel_get_left= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_get_left"),(int)1);
	nme_sound_channel_get_right= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_get_right"),(int)1);
	nme_sound_channel_get_position= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_get_position"),(int)1);
	nme_sound_channel_set_position= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_set_position"),(int)2);
	nme_sound_channel_get_data_position= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_get_data_position"),(int)1);
	nme_sound_channel_stop= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_stop"),(int)1);
	nme_sound_channel_create= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_create"),(int)4);
	nme_sound_channel_set_transform= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_set_transform"),(int)2);
	nme_sound_channel_needs_data= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_needs_data"),(int)1);
	nme_sound_channel_add_data= ::native::Loader_obj::load(HX_CSTRING("nme_sound_channel_add_data"),(int)2);
}

} // end namespace native
} // end namespace media
