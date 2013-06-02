#ifndef INCLUDED_native_utils_CompressionAlgorithm
#define INCLUDED_native_utils_CompressionAlgorithm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,utils,CompressionAlgorithm)
namespace native{
namespace utils{


class CompressionAlgorithm_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CompressionAlgorithm_obj OBJ_;

	public:
		CompressionAlgorithm_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("native.utils.CompressionAlgorithm"); }
		::String __ToString() const { return HX_CSTRING("CompressionAlgorithm.") + tag; }

		static ::native::utils::CompressionAlgorithm DEFLATE;
		static inline ::native::utils::CompressionAlgorithm DEFLATE_dyn() { return DEFLATE; }
		static ::native::utils::CompressionAlgorithm GZIP;
		static inline ::native::utils::CompressionAlgorithm GZIP_dyn() { return GZIP; }
		static ::native::utils::CompressionAlgorithm LZMA;
		static inline ::native::utils::CompressionAlgorithm LZMA_dyn() { return LZMA; }
		static ::native::utils::CompressionAlgorithm ZLIB;
		static inline ::native::utils::CompressionAlgorithm ZLIB_dyn() { return ZLIB; }
};

} // end namespace native
} // end namespace utils

#endif /* INCLUDED_native_utils_CompressionAlgorithm */ 
