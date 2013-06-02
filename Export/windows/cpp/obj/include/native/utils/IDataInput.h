#ifndef INCLUDED_native_utils_IDataInput
#define INCLUDED_native_utils_IDataInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  IDataInput_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDataInput_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::String set_endian( ::String s)=0;
		Dynamic set_endian_dyn();
virtual ::String get_endian( )=0;
		Dynamic get_endian_dyn();
virtual int get_bytesAvailable( )=0;
		Dynamic get_bytesAvailable_dyn();
virtual ::String readUTFBytes( int inLen)=0;
		Dynamic readUTFBytes_dyn();
virtual ::String readUTF( )=0;
		Dynamic readUTF_dyn();
virtual int readUnsignedShort( )=0;
		Dynamic readUnsignedShort_dyn();
virtual int readUnsignedInt( )=0;
		Dynamic readUnsignedInt_dyn();
virtual int readUnsignedByte( )=0;
		Dynamic readUnsignedByte_dyn();
virtual int readShort( )=0;
		Dynamic readShort_dyn();
virtual int readInt( )=0;
		Dynamic readInt_dyn();
virtual Float readFloat( )=0;
		Dynamic readFloat_dyn();
virtual Float readDouble( )=0;
		Dynamic readDouble_dyn();
virtual Void readBytes( ::native::utils::ByteArray outData,hx::Null< int >  inOffset,hx::Null< int >  inLen)=0;
		Dynamic readBytes_dyn();
virtual int readByte( )=0;
		Dynamic readByte_dyn();
virtual bool readBoolean( )=0;
		Dynamic readBoolean_dyn();
};

#define DELEGATE_native_utils_IDataInput \
virtual ::String set_endian( ::String s) { return mDelegate->set_endian(s);}  \
virtual Dynamic set_endian_dyn() { return mDelegate->set_endian_dyn();}  \
virtual ::String get_endian( ) { return mDelegate->get_endian();}  \
virtual Dynamic get_endian_dyn() { return mDelegate->get_endian_dyn();}  \
virtual int get_bytesAvailable( ) { return mDelegate->get_bytesAvailable();}  \
virtual Dynamic get_bytesAvailable_dyn() { return mDelegate->get_bytesAvailable_dyn();}  \
virtual ::String readUTFBytes( int inLen) { return mDelegate->readUTFBytes(inLen);}  \
virtual Dynamic readUTFBytes_dyn() { return mDelegate->readUTFBytes_dyn();}  \
virtual ::String readUTF( ) { return mDelegate->readUTF();}  \
virtual Dynamic readUTF_dyn() { return mDelegate->readUTF_dyn();}  \
virtual int readUnsignedShort( ) { return mDelegate->readUnsignedShort();}  \
virtual Dynamic readUnsignedShort_dyn() { return mDelegate->readUnsignedShort_dyn();}  \
virtual int readUnsignedInt( ) { return mDelegate->readUnsignedInt();}  \
virtual Dynamic readUnsignedInt_dyn() { return mDelegate->readUnsignedInt_dyn();}  \
virtual int readUnsignedByte( ) { return mDelegate->readUnsignedByte();}  \
virtual Dynamic readUnsignedByte_dyn() { return mDelegate->readUnsignedByte_dyn();}  \
virtual int readShort( ) { return mDelegate->readShort();}  \
virtual Dynamic readShort_dyn() { return mDelegate->readShort_dyn();}  \
virtual int readInt( ) { return mDelegate->readInt();}  \
virtual Dynamic readInt_dyn() { return mDelegate->readInt_dyn();}  \
virtual Float readFloat( ) { return mDelegate->readFloat();}  \
virtual Dynamic readFloat_dyn() { return mDelegate->readFloat_dyn();}  \
virtual Float readDouble( ) { return mDelegate->readDouble();}  \
virtual Dynamic readDouble_dyn() { return mDelegate->readDouble_dyn();}  \
virtual Void readBytes( ::native::utils::ByteArray outData,hx::Null< int >  inOffset,hx::Null< int >  inLen) { return mDelegate->readBytes(outData,inOffset,inLen);}  \
virtual Dynamic readBytes_dyn() { return mDelegate->readBytes_dyn();}  \
virtual int readByte( ) { return mDelegate->readByte();}  \
virtual Dynamic readByte_dyn() { return mDelegate->readByte_dyn();}  \
virtual bool readBoolean( ) { return mDelegate->readBoolean();}  \
virtual Dynamic readBoolean_dyn() { return mDelegate->readBoolean_dyn();}  \


template<typename IMPL>
class IDataInput_delegate_ : public IDataInput_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataInput_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_native_utils_IDataInput
};

} // end namespace native
} // end namespace utils

#endif /* INCLUDED_native_utils_IDataInput */ 
