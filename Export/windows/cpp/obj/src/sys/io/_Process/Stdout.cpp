#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdout
#include <sys/io/_Process/Stdout.h>
#endif
namespace sys{
namespace io{
namespace _Process{

Void Stdout_obj::__construct(Dynamic p,bool out)
{
HX_STACK_PUSH("Stdout::new","C:\\HaxeToolkit\\haxe/std/cpp/_std/sys/io/Process.hx",64);
{
	HX_STACK_LINE(65)
	this->p = p;
	HX_STACK_LINE(66)
	this->out = out;
	HX_STACK_LINE(67)
	this->buf = ::haxe::io::Bytes_obj::alloc((int)1);
}
;
	return null();
}

Stdout_obj::~Stdout_obj() { }

Dynamic Stdout_obj::__CreateEmpty() { return  new Stdout_obj; }
hx::ObjectPtr< Stdout_obj > Stdout_obj::__new(Dynamic p,bool out)
{  hx::ObjectPtr< Stdout_obj > result = new Stdout_obj();
	result->__construct(p,out);
	return result;}

Dynamic Stdout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stdout_obj > result = new Stdout_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Stdout_obj::readBytes( ::haxe::io::Bytes str,int pos,int len){
	HX_STACK_PUSH("Stdout::readBytes","C:\\HaxeToolkit\\haxe/std/cpp/_std/sys/io/Process.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_ARG(len,"len");
	HX_STACK_LINE(77)
	int result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(78)
	try{
		HX_STACK_LINE(78)
		result = ((  ((this->out)) ? Dynamic(::sys::io::_Process::Stdout_obj::_stdout_read_dyn()) : Dynamic(::sys::io::_Process::Stdout_obj::_stderr_read_dyn()) ))(this->p,str->b,pos,len).Cast< int >();
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(80)
				hx::Throw (::haxe::io::Eof_obj::__new());
			}
		}
	}
	HX_STACK_LINE(83)
	if (((result == (int)0))){
		HX_STACK_LINE(83)
		hx::Throw (::haxe::io::Eof_obj::__new());
	}
	HX_STACK_LINE(84)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(Stdout_obj,readBytes,return )

int Stdout_obj::readByte( ){
	HX_STACK_PUSH("Stdout::readByte","C:\\HaxeToolkit\\haxe/std/cpp/_std/sys/io/Process.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(71)
	if (((this->readBytes(this->buf,(int)0,(int)1) == (int)0))){
		HX_STACK_LINE(72)
		hx::Throw (::haxe::io::Error_obj::Blocked);
	}
	HX_STACK_LINE(73)
	return this->buf->b->__get((int)0);
}


Dynamic Stdout_obj::_stdout_read;

Dynamic Stdout_obj::_stderr_read;


Stdout_obj::Stdout_obj()
{
}

void Stdout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stdout);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(p,"p");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stdout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(p,"p");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stdout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		if (HX_FIELD_EQ(inName,"out") ) { return out; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stdout_read") ) { return _stdout_read; }
		if (HX_FIELD_EQ(inName,"_stderr_read") ) { return _stderr_read; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stdout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stdout_read") ) { _stdout_read=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stderr_read") ) { _stderr_read=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stdout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buf"));
	outFields->push(HX_CSTRING("out"));
	outFields->push(HX_CSTRING("p"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_stdout_read"),
	HX_CSTRING("_stderr_read"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readBytes"),
	HX_CSTRING("readByte"),
	HX_CSTRING("buf"),
	HX_CSTRING("out"),
	HX_CSTRING("p"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stdout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stdout_obj::_stdout_read,"_stdout_read");
	HX_MARK_MEMBER_NAME(Stdout_obj::_stderr_read,"_stderr_read");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stdout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stdout_obj::_stdout_read,"_stdout_read");
	HX_VISIT_MEMBER_NAME(Stdout_obj::_stderr_read,"_stderr_read");
};

Class Stdout_obj::__mClass;

void Stdout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.io._Process.Stdout"), hx::TCanCast< Stdout_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stdout_obj::__boot()
{
	_stdout_read= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("process_stdout_read"),(int)4);
	_stderr_read= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("process_stderr_read"),(int)4);
}

} // end namespace sys
} // end namespace io
} // end namespace _Process
