#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_zip_Compress
#include <cpp/zip/Compress.h>
#endif
#ifndef INCLUDED_cpp_zip_Flush
#include <cpp/zip/Flush.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace cpp{
namespace zip{

Void Compress_obj::__construct(int level)
{
HX_STACK_PUSH("Compress::new","C:\\HaxeToolkit\\haxe/std/cpp/zip/Compress.hx",28);
{
	HX_STACK_LINE(28)
	this->s = ::cpp::zip::Compress_obj::_deflate_init(level);
}
;
	return null();
}

Compress_obj::~Compress_obj() { }

Dynamic Compress_obj::__CreateEmpty() { return  new Compress_obj; }
hx::ObjectPtr< Compress_obj > Compress_obj::__new(int level)
{  hx::ObjectPtr< Compress_obj > result = new Compress_obj();
	result->__construct(level);
	return result;}

Dynamic Compress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Compress_obj > result = new Compress_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Compress_obj::close( ){
{
		HX_STACK_PUSH("Compress::close","C:\\HaxeToolkit\\haxe/std/cpp/zip/Compress.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(40)
		::cpp::zip::Compress_obj::_deflate_end(this->s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Compress_obj,close,(void))

Void Compress_obj::setFlushMode( ::cpp::zip::Flush f){
{
		HX_STACK_PUSH("Compress::setFlushMode","C:\\HaxeToolkit\\haxe/std/cpp/zip/Compress.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_ARG(f,"f");
		HX_STACK_LINE(36)
		::cpp::zip::Compress_obj::_set_flush_mode(this->s,::Std_obj::string(f));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compress_obj,setFlushMode,(void))

Dynamic Compress_obj::execute( ::haxe::io::Bytes src,int srcPos,::haxe::io::Bytes dst,int dstPos){
	HX_STACK_PUSH("Compress::execute","C:\\HaxeToolkit\\haxe/std/cpp/zip/Compress.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(src,"src");
	HX_STACK_ARG(srcPos,"srcPos");
	HX_STACK_ARG(dst,"dst");
	HX_STACK_ARG(dstPos,"dstPos");
	HX_STACK_LINE(32)
	return ::cpp::zip::Compress_obj::_deflate_buffer(this->s,src->b,srcPos,dst->b,dstPos);
}


HX_DEFINE_DYNAMIC_FUNC4(Compress_obj,execute,return )

::haxe::io::Bytes Compress_obj::run( ::haxe::io::Bytes s,int level){
	HX_STACK_PUSH("Compress::run","C:\\HaxeToolkit\\haxe/std/cpp/zip/Compress.hx",44);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(level,"level");
	HX_STACK_LINE(45)
	::cpp::zip::Compress c = ::cpp::zip::Compress_obj::__new(level);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(46)
	c->setFlushMode(::cpp::zip::Flush_obj::FINISH);
	HX_STACK_LINE(47)
	::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(::cpp::zip::Compress_obj::_deflate_bound(c->s,s->length));		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(48)
	Dynamic r = c->execute(s,(int)0,out,(int)0);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(49)
	c->close();
	HX_STACK_LINE(50)
	if (((bool(!(r->__Field(HX_CSTRING("done"),true))) || bool((r->__Field(HX_CSTRING("read"),true) != s->length))))){
		HX_STACK_LINE(51)
		hx::Throw (HX_CSTRING("Compression failed"));
	}
	HX_STACK_LINE(52)
	return out->sub((int)0,r->__Field(HX_CSTRING("write"),true));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Compress_obj,run,return )

Dynamic Compress_obj::_deflate_init;

Dynamic Compress_obj::_deflate_bound;

Dynamic Compress_obj::_deflate_buffer;

Dynamic Compress_obj::_deflate_end;

Dynamic Compress_obj::_set_flush_mode;


Compress_obj::Compress_obj()
{
}

void Compress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Compress);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Compress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic Compress_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deflate_end") ) { return _deflate_end; }
		if (HX_FIELD_EQ(inName,"setFlushMode") ) { return setFlushMode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_deflate_init") ) { return _deflate_init; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_deflate_bound") ) { return _deflate_bound; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_deflate_buffer") ) { return _deflate_buffer; }
		if (HX_FIELD_EQ(inName,"_set_flush_mode") ) { return _set_flush_mode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Compress_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deflate_end") ) { _deflate_end=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_deflate_init") ) { _deflate_init=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_deflate_bound") ) { _deflate_bound=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_deflate_buffer") ) { _deflate_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_set_flush_mode") ) { _set_flush_mode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Compress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("run"),
	HX_CSTRING("_deflate_init"),
	HX_CSTRING("_deflate_bound"),
	HX_CSTRING("_deflate_buffer"),
	HX_CSTRING("_deflate_end"),
	HX_CSTRING("_set_flush_mode"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("close"),
	HX_CSTRING("setFlushMode"),
	HX_CSTRING("execute"),
	HX_CSTRING("s"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Compress_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_init,"_deflate_init");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_bound,"_deflate_bound");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_buffer,"_deflate_buffer");
	HX_MARK_MEMBER_NAME(Compress_obj::_deflate_end,"_deflate_end");
	HX_MARK_MEMBER_NAME(Compress_obj::_set_flush_mode,"_set_flush_mode");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compress_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_init,"_deflate_init");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_bound,"_deflate_bound");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_buffer,"_deflate_buffer");
	HX_VISIT_MEMBER_NAME(Compress_obj::_deflate_end,"_deflate_end");
	HX_VISIT_MEMBER_NAME(Compress_obj::_set_flush_mode,"_set_flush_mode");
};

Class Compress_obj::__mClass;

void Compress_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.zip.Compress"), hx::TCanCast< Compress_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Compress_obj::__boot()
{
	_deflate_init= ::cpp::Lib_obj::load(HX_CSTRING("zlib"),HX_CSTRING("deflate_init"),(int)1);
	_deflate_bound= ::cpp::Lib_obj::load(HX_CSTRING("zlib"),HX_CSTRING("deflate_bound"),(int)2);
	_deflate_buffer= ::cpp::Lib_obj::load(HX_CSTRING("zlib"),HX_CSTRING("deflate_buffer"),(int)5);
	_deflate_end= ::cpp::Lib_obj::load(HX_CSTRING("zlib"),HX_CSTRING("deflate_end"),(int)1);
	_set_flush_mode= ::cpp::Lib_obj::load(HX_CSTRING("zlib"),HX_CSTRING("set_flush_mode"),(int)2);
}

} // end namespace cpp
} // end namespace zip
