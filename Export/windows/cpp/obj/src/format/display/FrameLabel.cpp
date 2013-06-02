#include <hxcpp.h>

#ifndef INCLUDED_format_display_FrameLabel
#include <format/display/FrameLabel.h>
#endif
namespace format{
namespace display{

Void FrameLabel_obj::__construct(int frame,::String name)
{
HX_STACK_PUSH("FrameLabel::new","format/display/FrameLabel.hx",11);
{
	HX_STACK_LINE(13)
	this->frame = frame;
	HX_STACK_LINE(14)
	this->name = name;
}
;
	return null();
}

FrameLabel_obj::~FrameLabel_obj() { }

Dynamic FrameLabel_obj::__CreateEmpty() { return  new FrameLabel_obj; }
hx::ObjectPtr< FrameLabel_obj > FrameLabel_obj::__new(int frame,::String name)
{  hx::ObjectPtr< FrameLabel_obj > result = new FrameLabel_obj();
	result->__construct(frame,name);
	return result;}

Dynamic FrameLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameLabel_obj > result = new FrameLabel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


FrameLabel_obj::FrameLabel_obj()
{
}

void FrameLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameLabel);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_END_CLASS();
}

void FrameLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
}

Dynamic FrameLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("frame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("frame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

Class FrameLabel_obj::__mClass;

void FrameLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.display.FrameLabel"), hx::TCanCast< FrameLabel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FrameLabel_obj::__boot()
{
}

} // end namespace format
} // end namespace display
