#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
namespace utils{

HX_DEFINE_DYNAMIC_FUNC1(IDataInput_obj,set_endian,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,get_endian,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,get_bytesAvailable,return )

HX_DEFINE_DYNAMIC_FUNC1(IDataInput_obj,readUTFBytes,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUTF,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUnsignedShort,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUnsignedInt,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readUnsignedByte,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readShort,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readInt,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readFloat,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readDouble,return )

HX_DEFINE_DYNAMIC_FUNC3(IDataInput_obj,readBytes,)

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readByte,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataInput_obj,readBoolean,return )


static ::String sMemberFields[] = {
	HX_CSTRING("set_endian"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("bytesAvailable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

Class IDataInput_obj::__mClass;

void IDataInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.utils.IDataInput"), hx::TCanCast< IDataInput_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IDataInput_obj::__boot()
{
}

} // end namespace native
} // end namespace utils
