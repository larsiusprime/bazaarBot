#include <hxcpp.h>

#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace native{
namespace events{

HX_DEFINE_DYNAMIC_FUNC1(IEventDispatcher_obj,willTrigger,return )

HX_DEFINE_DYNAMIC_FUNC3(IEventDispatcher_obj,removeEventListener,)

HX_DEFINE_DYNAMIC_FUNC1(IEventDispatcher_obj,hasEventListener,return )

HX_DEFINE_DYNAMIC_FUNC1(IEventDispatcher_obj,dispatchEvent,return )

HX_DEFINE_DYNAMIC_FUNC5(IEventDispatcher_obj,addEventListener,)


static ::String sMemberFields[] = {
	HX_CSTRING("willTrigger"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("hasEventListener"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("addEventListener"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IEventDispatcher_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IEventDispatcher_obj::__mClass,"__mClass");
};

Class IEventDispatcher_obj::__mClass;

void IEventDispatcher_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.IEventDispatcher"), hx::TCanCast< IEventDispatcher_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IEventDispatcher_obj::__boot()
{
}

} // end namespace native
} // end namespace events
