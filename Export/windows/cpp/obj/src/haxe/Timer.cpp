#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
namespace haxe{

Void Timer_obj::__construct(Float time)
{
HX_STACK_PUSH("Timer::new","haxe/Timer.hx",113);
{
	HX_STACK_LINE(115)
	this->mTime = time;
	HX_STACK_LINE(116)
	::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(117)
	this->mFireAt = (::haxe::Timer_obj::GetMS() + this->mTime);
	HX_STACK_LINE(118)
	this->mRunning = true;
}
;
	return null();
}

Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float time)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(time);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Timer_obj::nmeCheck( Float inTime){
{
		HX_STACK_PUSH("Timer::nmeCheck","haxe/Timer.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inTime,"inTime");
		HX_STACK_LINE(181)
		if (((inTime >= this->mFireAt))){
			HX_STACK_LINE(185)
			hx::AddEq(this->mFireAt,this->mTime);
			HX_STACK_LINE(186)
			this->run();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,nmeCheck,(void))

Void Timer_obj::stop( ){
{
		HX_STACK_PUSH("Timer::stop","haxe/Timer.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_LINE(139)
		if ((this->mRunning)){
			HX_STACK_LINE(143)
			this->mRunning = false;
			HX_STACK_LINE(144)
			::haxe::Timer_obj::sRunningTimers->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_PUSH("Timer::run","haxe/Timer.hx",132);
		HX_STACK_THIS(this);
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Array< ::Dynamic > Timer_obj::sRunningTimers;

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_PUSH("Timer::measure","haxe/Timer.hx",123);
	HX_STACK_ARG(f,"f");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_LINE(124)
	Float t0 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(125)
	Dynamic r = f();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(126)
	::haxe::Log_obj::trace(((::haxe::Timer_obj::stamp() - t0) + HX_CSTRING("s")),pos);
	HX_STACK_LINE(127)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::nmeNextWake( Float limit){
	HX_STACK_PUSH("Timer::nmeNextWake","haxe/Timer.hx",154);
	HX_STACK_ARG(limit,"limit");
	HX_STACK_LINE(156)
	Float now = (::haxe::Timer_obj::nme_time_stamp() * 1000.0);		HX_STACK_VAR(now,"now");
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::haxe::Timer_obj::sRunningTimers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		while(((_g < _g1->length))){
			HX_STACK_LINE(158)
			::haxe::Timer timer = _g1->__get(_g).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(158)
			++(_g);
			HX_STACK_LINE(160)
			Float sleep = (timer->mFireAt - now);		HX_STACK_VAR(sleep,"sleep");
			HX_STACK_LINE(162)
			if (((sleep < limit))){
				HX_STACK_LINE(164)
				limit = sleep;
				HX_STACK_LINE(166)
				if (((limit < (int)0))){
					HX_STACK_LINE(166)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(176)
	return (limit * 0.001);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,nmeNextWake,return )

Void Timer_obj::nmeCheckTimers( ){
{
		HX_STACK_PUSH("Timer::nmeCheckTimers","haxe/Timer.hx",196);
		HX_STACK_LINE(198)
		Float now = ::haxe::Timer_obj::GetMS();		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::haxe::Timer_obj::sRunningTimers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(200)
			while(((_g < _g1->length))){
				HX_STACK_LINE(200)
				::haxe::Timer timer = _g1->__get(_g).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(200)
				++(_g);
				HX_STACK_LINE(202)
				timer->nmeCheck(now);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,nmeCheckTimers,(void))

Float Timer_obj::GetMS( ){
	HX_STACK_PUSH("Timer::GetMS","haxe/Timer.hx",209);
	HX_STACK_LINE(209)
	return (::haxe::Timer_obj::stamp() * 1000.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,GetMS,return )

::haxe::Timer Timer_obj::delay( Dynamic f,int time){
	HX_STACK_PUSH("Timer::delay","haxe/Timer.hx",217);
	HX_STACK_ARG(f,"f");
	HX_STACK_ARG(time,"time");
	HX_STACK_LINE(217)
	Dynamic f1 = Dynamic( Array_obj<Dynamic>::__new().Add(f));		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(219)
	Array< ::Dynamic > t = Array_obj< ::Dynamic >::__new().Add(::haxe::Timer_obj::__new(time));		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,t,Dynamic,f1)
	Void run(){
		HX_STACK_PUSH("*::_Function_1_1","haxe/Timer.hx",221);
		{
			HX_STACK_LINE(222)
			t->__get((int)0).StaticCast< ::haxe::Timer >()->stop();
			HX_STACK_LINE(223)
			f1->__GetItem((int)0)().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(221)
	t->__get((int)0).StaticCast< ::haxe::Timer >()->run =  Dynamic(new _Function_1_1(t,f1));
	HX_STACK_LINE(226)
	return t->__get((int)0).StaticCast< ::haxe::Timer >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::stamp( ){
	HX_STACK_PUSH("Timer::stamp","haxe/Timer.hx",231);
	HX_STACK_LINE(231)
	return ::haxe::Timer_obj::nme_time_stamp();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )

Dynamic Timer_obj::nme_time_stamp;


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(run,"run");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(mFireAt,"mFireAt");
	HX_VISIT_MEMBER_NAME(mTime,"mTime");
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"GetMS") ) { return GetMS_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"mTime") ) { return mTime; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return measure_dyn(); }
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return mFireAt; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeCheck") ) { return nmeCheck_dyn(); }
		if (HX_FIELD_EQ(inName,"mRunning") ) { return mRunning; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeNextWake") ) { return nmeNextWake_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { return sRunningTimers; }
		if (HX_FIELD_EQ(inName,"nmeCheckTimers") ) { return nmeCheckTimers_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_time_stamp") ) { return nme_time_stamp; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_time_stamp") ) { nme_time_stamp=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mRunning"));
	outFields->push(HX_CSTRING("mFireAt"));
	outFields->push(HX_CSTRING("mTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sRunningTimers"),
	HX_CSTRING("measure"),
	HX_CSTRING("nmeNextWake"),
	HX_CSTRING("nmeCheckTimers"),
	HX_CSTRING("GetMS"),
	HX_CSTRING("delay"),
	HX_CSTRING("stamp"),
	HX_CSTRING("nme_time_stamp"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("nmeCheck"),
	HX_CSTRING("stop"),
	HX_CSTRING("run"),
	HX_CSTRING("mRunning"),
	HX_CSTRING("mFireAt"),
	HX_CSTRING("mTime"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_MARK_MEMBER_NAME(Timer_obj::nme_time_stamp,"nme_time_stamp");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_VISIT_MEMBER_NAME(Timer_obj::nme_time_stamp,"nme_time_stamp");
};

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Timer_obj::__boot()
{
	sRunningTimers= Array_obj< ::Dynamic >::__new();
	nme_time_stamp= ::native::Loader_obj::load(HX_CSTRING("nme_time_stamp"),(int)0);
}

} // end namespace haxe
