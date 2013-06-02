#ifndef INCLUDED_native_geom_Transform
#define INCLUDED_native_geom_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,ColorTransform)
HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(native,geom,Transform)
namespace native{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Transform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Transform_obj OBJ_;
		Transform_obj();
		Void __construct(::native::display::DisplayObject inParent);

	public:
		static hx::ObjectPtr< Transform_obj > __new(::native::display::DisplayObject inParent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Transform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Transform"); }

		virtual ::native::geom::Rectangle get_pixelBounds( );
		Dynamic get_pixelBounds_dyn();

		virtual ::native::geom::Matrix set_matrix( ::native::geom::Matrix inMatrix);
		Dynamic set_matrix_dyn();

		virtual ::native::geom::Matrix get_matrix( );
		Dynamic get_matrix_dyn();

		virtual ::native::geom::Matrix get_concatenatedMatrix( );
		Dynamic get_concatenatedMatrix_dyn();

		virtual ::native::geom::ColorTransform get_concatenatedColorTransform( );
		Dynamic get_concatenatedColorTransform_dyn();

		virtual ::native::geom::ColorTransform set_colorTransform( ::native::geom::ColorTransform inTrans);
		Dynamic set_colorTransform_dyn();

		virtual ::native::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		::native::display::DisplayObject nmeObj;
		::native::geom::Rectangle pixelBounds;
		::native::geom::Matrix concatenatedMatrix;
		::native::geom::ColorTransform concatenatedColorTransform;
};

} // end namespace native
} // end namespace geom

#endif /* INCLUDED_native_geom_Transform */ 
