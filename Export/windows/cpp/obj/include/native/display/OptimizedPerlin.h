#ifndef INCLUDED_native_display_OptimizedPerlin
#define INCLUDED_native_display_OptimizedPerlin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,OptimizedPerlin)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  OptimizedPerlin_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OptimizedPerlin_obj OBJ_;
		OptimizedPerlin_obj();
		Void __construct(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< Float >  __o_falloff);

	public:
		static hx::ObjectPtr< OptimizedPerlin_obj > __new(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< Float >  __o_falloff);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OptimizedPerlin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OptimizedPerlin"); }

		virtual Void seedOffset( int iSeed);
		Dynamic seedOffset_dyn();

		virtual Void octFreqPers( Float fPersistence);
		Dynamic octFreqPers_dyn();

		virtual Void fill( ::native::display::BitmapData bitmap,Float _x,Float _y,Float _z,Dynamic _);
		Dynamic fill_dyn();

		Float baseFactor;
		Float iZoffset;
		Float iYoffset;
		Float iXoffset;
		Float fPersMax;
		Array< Float > aOctPers;
		Array< Float > aOctFreq;
		int octaves;
		static Array< int > P;
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_OptimizedPerlin */ 
