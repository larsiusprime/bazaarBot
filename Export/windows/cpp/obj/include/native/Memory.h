#ifndef INCLUDED_native_Memory
#define INCLUDED_native_Memory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(native,Memory)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{


class HXCPP_CLASS_ATTRIBUTES  Memory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Memory_obj OBJ_;
		Memory_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Memory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Memory_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Memory"); }

		static ::native::utils::ByteArray gcRef;
		static int len;
		static Void select( ::native::utils::ByteArray inBytes);
		static Dynamic select_dyn();

		static int getByte( int addr);
		static Dynamic getByte_dyn();

		static Float getDouble( int addr);
		static Dynamic getDouble_dyn();

		static Float getFloat( int addr);
		static Dynamic getFloat_dyn();

		static int getI32( int addr);
		static Dynamic getI32_dyn();

		static int getUI16( int addr);
		static Dynamic getUI16_dyn();

		static Void setByte( int addr,int v);
		static Dynamic setByte_dyn();

		static Void setDouble( int addr,Float v);
		static Dynamic setDouble_dyn();

		static Void setFloat( int addr,Float v);
		static Dynamic setFloat_dyn();

		static Void setI16( int addr,int v);
		static Dynamic setI16_dyn();

		static Void setI32( int addr,int v);
		static Dynamic setI32_dyn();

};

} // end namespace native

#endif /* INCLUDED_native_Memory */ 
