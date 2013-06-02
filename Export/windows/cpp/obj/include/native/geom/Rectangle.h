#ifndef INCLUDED_native_geom_Rectangle
#define INCLUDED_native_geom_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace native{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight);

	public:
		static hx::ObjectPtr< Rectangle_obj > __new(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Rectangle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rectangle"); }

		virtual ::native::geom::Point set_topLeft( ::native::geom::Point p);
		Dynamic set_topLeft_dyn();

		virtual ::native::geom::Point get_topLeft( );
		Dynamic get_topLeft_dyn();

		virtual Float set_top( Float t);
		Dynamic set_top_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual ::native::geom::Point set_size( ::native::geom::Point p);
		Dynamic set_size_dyn();

		virtual ::native::geom::Point get_size( );
		Dynamic get_size_dyn();

		virtual Float set_right( Float r);
		Dynamic set_right_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_left( Float l);
		Dynamic set_left_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual ::native::geom::Point set_bottomRight( ::native::geom::Point p);
		Dynamic set_bottomRight_dyn();

		virtual ::native::geom::Point get_bottomRight( );
		Dynamic get_bottomRight_dyn();

		virtual Float set_bottom( Float b);
		Dynamic set_bottom_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual ::native::geom::Rectangle _union( ::native::geom::Rectangle toUnion);
		Dynamic _union_dyn();

		virtual ::native::geom::Rectangle transform( ::native::geom::Matrix m);
		Dynamic transform_dyn();

		virtual Void setEmpty( );
		Dynamic setEmpty_dyn();

		virtual Void offsetPoint( ::native::geom::Point point);
		Dynamic offsetPoint_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual bool intersects( ::native::geom::Rectangle toIntersect);
		Dynamic intersects_dyn();

		virtual ::native::geom::Rectangle intersection( ::native::geom::Rectangle toIntersect);
		Dynamic intersection_dyn();

		virtual Void inflatePoint( ::native::geom::Point point);
		Dynamic inflatePoint_dyn();

		virtual Void inflate( Float dx,Float dy);
		Dynamic inflate_dyn();

		virtual Void extendBounds( ::native::geom::Rectangle r);
		Dynamic extendBounds_dyn();

		virtual bool equals( ::native::geom::Rectangle toCompare);
		Dynamic equals_dyn();

		virtual bool containsRect( ::native::geom::Rectangle rect);
		Dynamic containsRect_dyn();

		virtual bool containsPoint( ::native::geom::Point point);
		Dynamic containsPoint_dyn();

		virtual bool contains( Float inX,Float inY);
		Dynamic contains_dyn();

		virtual ::native::geom::Rectangle clone( );
		Dynamic clone_dyn();

		Float y;
		Float x;
		Float width;
		Float height;
};

} // end namespace native
} // end namespace geom

#endif /* INCLUDED_native_geom_Rectangle */ 
