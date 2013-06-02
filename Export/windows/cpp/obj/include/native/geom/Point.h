#ifndef INCLUDED_native_geom_Point
#define INCLUDED_native_geom_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Point)
namespace native{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();
		Void __construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY);

	public:
		static hx::ObjectPtr< Point_obj > __new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Point_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Point"); }

		virtual Float get_length( );
		Dynamic get_length_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::native::geom::Point subtract( ::native::geom::Point v);
		Dynamic subtract_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void normalize( Float thickness);
		Dynamic normalize_dyn();

		virtual bool equals( ::native::geom::Point toCompare);
		Dynamic equals_dyn();

		virtual Void copyFrom( ::native::geom::Point sourcePoint);
		Dynamic copyFrom_dyn();

		virtual ::native::geom::Point clone( );
		Dynamic clone_dyn();

		virtual ::native::geom::Point add( ::native::geom::Point v);
		Dynamic add_dyn();

		Float y;
		Float x;
		Float length;
		static Float distance( ::native::geom::Point pt1,::native::geom::Point pt2);
		static Dynamic distance_dyn();

		static ::native::geom::Point interpolate( ::native::geom::Point pt1,::native::geom::Point pt2,Float f);
		static Dynamic interpolate_dyn();

		static ::native::geom::Point polar( Float len,Float angle);
		static Dynamic polar_dyn();

};

} // end namespace native
} // end namespace geom

#endif /* INCLUDED_native_geom_Point */ 
