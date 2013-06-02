#include <hxcpp.h>

#ifndef INCLUDED_native_media_SoundTransform
#include <native/media/SoundTransform.h>
#endif
namespace native{
namespace media{

Void SoundTransform_obj::__construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning)
{
HX_STACK_PUSH("SoundTransform::new","native/media/SoundTransform.hx",10);
Float vol = __o_vol.Default(1.0);
Float panning = __o_panning.Default(0.0);
{
	HX_STACK_LINE(11)
	this->volume = vol;
	HX_STACK_LINE(12)
	this->pan = panning;
}
;
	return null();
}

SoundTransform_obj::~SoundTransform_obj() { }

Dynamic SoundTransform_obj::__CreateEmpty() { return  new SoundTransform_obj; }
hx::ObjectPtr< SoundTransform_obj > SoundTransform_obj::__new(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning)
{  hx::ObjectPtr< SoundTransform_obj > result = new SoundTransform_obj();
	result->__construct(__o_vol,__o_panning);
	return result;}

Dynamic SoundTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundTransform_obj > result = new SoundTransform_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::native::media::SoundTransform SoundTransform_obj::clone( ){
	HX_STACK_PUSH("SoundTransform::clone","native/media/SoundTransform.hx",16);
	HX_STACK_THIS(this);
	HX_STACK_LINE(16)
	return ::native::media::SoundTransform_obj::__new(this->volume,this->pan);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundTransform_obj,clone,return )


SoundTransform_obj::SoundTransform_obj()
{
}

void SoundTransform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundTransform);
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(pan,"pan");
	HX_MARK_END_CLASS();
}

void SoundTransform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(pan,"pan");
}

Dynamic SoundTransform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return pan; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("pan"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("volume"),
	HX_CSTRING("pan"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

Class SoundTransform_obj::__mClass;

void SoundTransform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.media.SoundTransform"), hx::TCanCast< SoundTransform_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SoundTransform_obj::__boot()
{
}

} // end namespace native
} // end namespace media
