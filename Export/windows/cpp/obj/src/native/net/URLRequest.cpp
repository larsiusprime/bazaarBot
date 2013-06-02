#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_net_URLRequestHeader
#include <native/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_native_net_URLVariables
#include <native/net/URLVariables.h>
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
namespace net{

Void URLRequest_obj::__construct(::String inURL)
{
HX_STACK_PUSH("URLRequest::new","native/net/URLRequest.hx",27);
{
	HX_STACK_LINE(28)
	if (((inURL != null()))){
		HX_STACK_LINE(29)
		this->url = inURL;
	}
	HX_STACK_LINE(31)
	this->requestHeaders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	this->method = HX_CSTRING("GET");
	HX_STACK_LINE(34)
	this->verbose = false;
	HX_STACK_LINE(35)
	this->cookieString = HX_CSTRING("");
	HX_STACK_LINE(36)
	this->authType = (int)0;
	HX_STACK_LINE(37)
	this->contentType = HX_CSTRING("application/x-www-form-urlencoded");
	HX_STACK_LINE(38)
	this->credentials = HX_CSTRING("");
}
;
	return null();
}

URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String inURL)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(inURL);
	return result;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLRequest_obj::nmePrepare( ){
{
		HX_STACK_PUSH("URLRequest::nmePrepare","native/net/URLRequest.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		if (((this->data == null()))){
			HX_STACK_LINE(55)
			this->nmeBytes = ::native::utils::ByteArray_obj::__new(null());
		}
		else{
			HX_STACK_LINE(58)
			if ((::Std_obj::is(this->data,hx::ClassOf< ::native::utils::ByteArray >()))){
				HX_STACK_LINE(59)
				this->nmeBytes = this->data;
			}
			else{
				HX_STACK_LINE(62)
				if ((::Std_obj::is(this->data,hx::ClassOf< ::native::net::URLVariables >()))){
					HX_STACK_LINE(64)
					::native::net::URLVariables vars = this->data;		HX_STACK_VAR(vars,"vars");
					HX_STACK_LINE(65)
					::String str = vars->toString();		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(66)
					this->nmeBytes = ::native::utils::ByteArray_obj::__new(null());
					HX_STACK_LINE(67)
					this->nmeBytes->writeUTFBytes(str);
				}
				else{
					HX_STACK_LINE(69)
					if ((::Std_obj::is(this->data,hx::ClassOf< ::String >()))){
						HX_STACK_LINE(71)
						::String str = this->data;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(72)
						this->nmeBytes = ::native::utils::ByteArray_obj::__new(null());
						HX_STACK_LINE(73)
						this->nmeBytes->writeUTFBytes(str);
					}
					else{
						HX_STACK_LINE(75)
						if ((::Std_obj::is(this->data,hx::ClassOf< ::Dynamic >()))){
							HX_STACK_LINE(77)
							::native::net::URLVariables vars = ::native::net::URLVariables_obj::__new(null());		HX_STACK_VAR(vars,"vars");
							HX_STACK_LINE(79)
							{
								HX_STACK_LINE(79)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								Array< ::String > _g1 = ::Reflect_obj::fields(this->data);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(79)
								while(((_g < _g1->length))){
									HX_STACK_LINE(79)
									::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(79)
									++(_g);
									HX_STACK_LINE(80)
									if (((vars != null()))){
										HX_STACK_LINE(80)
										vars->__SetField(i,::Reflect_obj::field(this->data,i),false);
									}
								}
							}
							HX_STACK_LINE(82)
							::String str = vars->toString();		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(83)
							this->nmeBytes = ::native::utils::ByteArray_obj::__new(null());
							HX_STACK_LINE(84)
							this->nmeBytes->writeUTFBytes(str);
						}
						else{
							HX_STACK_LINE(87)
							hx::Throw (HX_CSTRING("Unknown data type"));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,nmePrepare,(void))

Void URLRequest_obj::digestAuth( ::String inUser,::String inPasswd){
{
		HX_STACK_PUSH("URLRequest::digestAuth","native/net/URLRequest.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inUser,"inUser");
		HX_STACK_ARG(inPasswd,"inPasswd");
		HX_STACK_LINE(49)
		this->authType = (int)2;
		HX_STACK_LINE(50)
		this->credentials = ((inUser + HX_CSTRING(":")) + inPasswd);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,digestAuth,(void))

Void URLRequest_obj::basicAuth( ::String inUser,::String inPasswd){
{
		HX_STACK_PUSH("URLRequest::basicAuth","native/net/URLRequest.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inUser,"inUser");
		HX_STACK_ARG(inPasswd,"inPasswd");
		HX_STACK_LINE(43)
		this->authType = (int)1;
		HX_STACK_LINE(44)
		this->credentials = ((inUser + HX_CSTRING(":")) + inPasswd);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,basicAuth,(void))


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(nmeBytes,"nmeBytes");
	HX_MARK_MEMBER_NAME(credentials,"credentials");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(cookieString,"cookieString");
	HX_MARK_MEMBER_NAME(authType,"authType");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeBytes,"nmeBytes");
	HX_VISIT_MEMBER_NAME(credentials,"credentials");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(cookieString,"cookieString");
	HX_VISIT_MEMBER_NAME(authType,"authType");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(url,"url");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return verbose; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeBytes") ) { return nmeBytes; }
		if (HX_FIELD_EQ(inName,"authType") ) { return authType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"basicAuth") ) { return basicAuth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmePrepare") ) { return nmePrepare_dyn(); }
		if (HX_FIELD_EQ(inName,"digestAuth") ) { return digestAuth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"credentials") ) { return credentials; }
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { return cookieString; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return requestHeaders; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeBytes") ) { nmeBytes=inValue.Cast< ::native::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"authType") ) { authType=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"credentials") ) { credentials=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { cookieString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeBytes"));
	outFields->push(HX_CSTRING("credentials"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("contentType"));
	outFields->push(HX_CSTRING("method"));
	outFields->push(HX_CSTRING("verbose"));
	outFields->push(HX_CSTRING("cookieString"));
	outFields->push(HX_CSTRING("authType"));
	outFields->push(HX_CSTRING("requestHeaders"));
	outFields->push(HX_CSTRING("url"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("nmePrepare"),
	HX_CSTRING("digestAuth"),
	HX_CSTRING("basicAuth"),
	HX_CSTRING("nmeBytes"),
	HX_CSTRING("credentials"),
	HX_CSTRING("data"),
	HX_CSTRING("contentType"),
	HX_CSTRING("method"),
	HX_CSTRING("verbose"),
	HX_CSTRING("cookieString"),
	HX_CSTRING("authType"),
	HX_CSTRING("requestHeaders"),
	HX_CSTRING("url"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.net.URLRequest"), hx::TCanCast< URLRequest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void URLRequest_obj::__boot()
{
}

} // end namespace native
} // end namespace net
