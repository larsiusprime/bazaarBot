#ifndef INCLUDED_native_geom_Matrix
#define INCLUDED_native_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Point)
namespace native{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Matrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();
		Void __construct(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty);

	public:
		static hx::ObjectPtr< Matrix_obj > __new(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Matrix_obj();

		HX_DO_RTTI;
		double __INumField(int inFieldID);
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Matrix"); }

		virtual Void translate( Float inDX,Float inDY);
		Dynamic translate_dyn();

		virtual ::native::geom::Point transformPoint( ::native::geom::Point inPos);
		Dynamic transformPoint_dyn();

		virtual Void setRotation( Float inTheta,Dynamic inScale);
		Dynamic setRotation_dyn();

		virtual Void scale( Float inSX,Float inSY);
		Dynamic scale_dyn();

		virtual Void rotate( Float inTheta);
		Dynamic rotate_dyn();

		virtual ::native::geom::Matrix mult( ::native::geom::Matrix m);
		Dynamic mult_dyn();

		virtual ::native::geom::Matrix invert( );
		Dynamic invert_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::native::geom::Point deltaTransformPoint( ::native::geom::Point point);
		Dynamic deltaTransformPoint_dyn();

		virtual Void createGradientBox( Float in_width,Float in_height,Dynamic rotation,Dynamic in_tx,Dynamic in_ty);
		Dynamic createGradientBox_dyn();

		virtual Void createBox( Float scaleX,Float scaleY,Dynamic rotation,Dynamic tx,Dynamic ty);
		Dynamic createBox_dyn();

		virtual Void concat( ::native::geom::Matrix m);
		Dynamic concat_dyn();

		virtual ::native::geom::Matrix clone( );
		Dynamic clone_dyn();

		Float ty;
		Float tx;
		Float d;
		Float c;
		Float b;
		Float a;
};

} // end namespace native
} // end namespace geom

#endif /* INCLUDED_native_geom_Matrix */ 
