#ifndef INCLUDED_native_utils_WeakRef
#define INCLUDED_native_utils_WeakRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,utils,WeakRef)
namespace native{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  WeakRef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WeakRef_obj OBJ_;
		WeakRef_obj();
		Void __construct(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak);

	public:
		static hx::ObjectPtr< WeakRef_obj > __new(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WeakRef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WeakRef"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Dynamic get( );
		Dynamic get_dyn();

		int weakRef;
		Dynamic hardRef;
		static Dynamic nme_weak_ref_create;
		static Dynamic nme_weak_ref_get;
};

} // end namespace native
} // end namespace utils

#endif /* INCLUDED_native_utils_WeakRef */ 
