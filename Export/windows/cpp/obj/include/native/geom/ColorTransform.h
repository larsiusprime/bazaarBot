#ifndef INCLUDED_native_geom_ColorTransform
#define INCLUDED_native_geom_ColorTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,ColorTransform)
namespace native{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ColorTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColorTransform_obj OBJ_;
		ColorTransform_obj();
		Void __construct(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset);

	public:
		static hx::ObjectPtr< ColorTransform_obj > __new(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColorTransform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColorTransform"); }

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Void concat( ::native::geom::ColorTransform second);
		Dynamic concat_dyn();

		Float redOffset;
		Float redMultiplier;
		Float greenOffset;
		Float greenMultiplier;
		Float blueOffset;
		Float blueMultiplier;
		Float alphaOffset;
		Float alphaMultiplier;
};

} // end namespace native
} // end namespace geom

#endif /* INCLUDED_native_geom_ColorTransform */ 
