#ifndef INCLUDED_cpp_zip_Uncompress
#define INCLUDED_cpp_zip_Uncompress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,zip,Flush)
HX_DECLARE_CLASS2(cpp,zip,Uncompress)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace cpp{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES  Uncompress_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uncompress_obj OBJ_;
		Uncompress_obj();
		Void __construct(Dynamic windowBits);

	public:
		static hx::ObjectPtr< Uncompress_obj > __new(Dynamic windowBits);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Uncompress_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Uncompress"); }

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void setFlushMode( ::cpp::zip::Flush f);
		Dynamic setFlushMode_dyn();

		virtual Dynamic this_run( ::haxe::io::Bytes src,int srcPos,::haxe::io::Bytes dst,int dstPos);
		Dynamic this_run_dyn();

		Dynamic s;
		static ::haxe::io::Bytes run( ::haxe::io::Bytes src,Dynamic bufsize);
		static Dynamic run_dyn();

		static Dynamic _inflate_init;
		static Dynamic &_inflate_init_dyn() { return _inflate_init;}
		static Dynamic _inflate_buffer;
		static Dynamic &_inflate_buffer_dyn() { return _inflate_buffer;}
		static Dynamic _inflate_end;
		static Dynamic &_inflate_end_dyn() { return _inflate_end;}
		static Dynamic _set_flush_mode;
		static Dynamic &_set_flush_mode_dyn() { return _set_flush_mode;}
};

} // end namespace cpp
} // end namespace zip

#endif /* INCLUDED_cpp_zip_Uncompress */ 
