#ifndef INCLUDED_nme_AssetData
#define INCLUDED_nme_AssetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(nme,AssetData)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  AssetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetData_obj OBJ_;
		AssetData_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AssetData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AssetData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetData"); }

		static ::haxe::ds::StringMap library;
		static ::haxe::ds::StringMap path;
		static ::haxe::ds::StringMap type;
		static bool initialized;
		static Void initialize( );
		static Dynamic initialize_dyn();

};

} // end namespace nme

#endif /* INCLUDED_nme_AssetData */ 
