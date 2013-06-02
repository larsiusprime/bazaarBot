#ifndef INCLUDED_nme_LibraryType
#define INCLUDED_nme_LibraryType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nme,LibraryType)
namespace nme{


class LibraryType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LibraryType_obj OBJ_;

	public:
		LibraryType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("nme.LibraryType"); }
		::String __ToString() const { return HX_CSTRING("LibraryType.") + tag; }

		static ::nme::LibraryType SWF;
		static inline ::nme::LibraryType SWF_dyn() { return SWF; }
		static ::nme::LibraryType XFL;
		static inline ::nme::LibraryType XFL_dyn() { return XFL; }
};

} // end namespace nme

#endif /* INCLUDED_nme_LibraryType */ 
