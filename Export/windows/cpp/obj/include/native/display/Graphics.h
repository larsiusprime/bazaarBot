#ifndef INCLUDED_native_display_Graphics
#define INCLUDED_native_display_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,CapsStyle)
HX_DECLARE_CLASS2(native,display,GradientType)
HX_DECLARE_CLASS2(native,display,Graphics)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,IGraphicsData)
HX_DECLARE_CLASS2(native,display,InterpolationMethod)
HX_DECLARE_CLASS2(native,display,JointStyle)
HX_DECLARE_CLASS2(native,display,LineScaleMode)
HX_DECLARE_CLASS2(native,display,SpreadMethod)
HX_DECLARE_CLASS2(native,display,Tilesheet)
HX_DECLARE_CLASS2(native,display,TriangleCulling)
HX_DECLARE_CLASS2(native,geom,Matrix)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();
		Void __construct(Dynamic inHandle);

	public:
		static hx::ObjectPtr< Graphics_obj > __new(Dynamic inHandle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Graphics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Graphics"); }

		virtual Void moveTo( Float inX,Float inY);
		Dynamic moveTo_dyn();

		virtual Void lineTo( Float inX,Float inY);
		Dynamic lineTo_dyn();

		virtual Void lineStyle( Dynamic thickness,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  pixelHinting,::native::display::LineScaleMode scaleMode,::native::display::CapsStyle caps,::native::display::JointStyle joints,hx::Null< Float >  miterLimit);
		Dynamic lineStyle_dyn();

		virtual Void lineGradientStyle( ::native::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::native::geom::Matrix matrix,::native::display::SpreadMethod spreadMethod,::native::display::InterpolationMethod interpolationMethod,hx::Null< Float >  focalPointRatio);
		Dynamic lineGradientStyle_dyn();

		virtual Void lineBitmapStyle( ::native::display::BitmapData bitmap,::native::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		Dynamic lineBitmapStyle_dyn();

		virtual Void endFill( );
		Dynamic endFill_dyn();

		virtual Void drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::native::display::TriangleCulling culling,Array< int > colours,hx::Null< int >  blendMode,Array< Float > viewport);
		Dynamic drawTriangles_dyn();

		virtual Void drawTiles( ::native::display::Tilesheet sheet,Array< Float > inXYID,hx::Null< bool >  inSmooth,hx::Null< int >  inFlags);
		Dynamic drawTiles_dyn();

		virtual Void drawPath( Array< int > commands,Array< Float > data,::String winding);
		Dynamic drawPath_dyn();

		virtual Void drawRoundRect( Float inX,Float inY,Float inWidth,Float inHeight,Float inRadX,Dynamic inRadY);
		Dynamic drawRoundRect_dyn();

		virtual Void drawRect( Float inX,Float inY,Float inWidth,Float inHeight);
		Dynamic drawRect_dyn();

		virtual Void drawPoints( Array< Float > inXY,Array< int > inPointRGBA,hx::Null< int >  inDefaultRGBA,hx::Null< Float >  inSize);
		Dynamic drawPoints_dyn();

		virtual Void drawGraphicsDatum( ::native::display::IGraphicsData graphicsDatum);
		Dynamic drawGraphicsDatum_dyn();

		virtual Void drawGraphicsData( Array< ::Dynamic > graphicsData);
		Dynamic drawGraphicsData_dyn();

		virtual Void drawEllipse( Float inX,Float inY,Float inWidth,Float inHeight);
		Dynamic drawEllipse_dyn();

		virtual Void drawCircle( Float inX,Float inY,Float inRadius);
		Dynamic drawCircle_dyn();

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);
		Dynamic curveTo_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void beginGradientFill( ::native::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::native::geom::Matrix matrix,::native::display::SpreadMethod spreadMethod,::native::display::InterpolationMethod interpolationMethod,hx::Null< Float >  focalPointRatio);
		Dynamic beginGradientFill_dyn();

		virtual Void beginFill( int color,hx::Null< Float >  alpha);
		Dynamic beginFill_dyn();

		virtual Void beginBitmapFill( ::native::display::BitmapData bitmap,::native::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		Dynamic beginBitmapFill_dyn();

		virtual Void arcTo( Float inCX,Float inCY,Float inX,Float inY);
		Dynamic arcTo_dyn();

		Dynamic nmeHandle;
		static int RGBA( int inRGB,hx::Null< int >  inA);
		static Dynamic RGBA_dyn();

		static Dynamic nme_gfx_clear;
		static Dynamic &nme_gfx_clear_dyn() { return nme_gfx_clear;}
		static Dynamic nme_gfx_begin_fill;
		static Dynamic &nme_gfx_begin_fill_dyn() { return nme_gfx_begin_fill;}
		static Dynamic nme_gfx_begin_bitmap_fill;
		static Dynamic &nme_gfx_begin_bitmap_fill_dyn() { return nme_gfx_begin_bitmap_fill;}
		static Dynamic nme_gfx_line_bitmap_fill;
		static Dynamic &nme_gfx_line_bitmap_fill_dyn() { return nme_gfx_line_bitmap_fill;}
		static Dynamic nme_gfx_begin_gradient_fill;
		static Dynamic &nme_gfx_begin_gradient_fill_dyn() { return nme_gfx_begin_gradient_fill;}
		static Dynamic nme_gfx_line_gradient_fill;
		static Dynamic &nme_gfx_line_gradient_fill_dyn() { return nme_gfx_line_gradient_fill;}
		static Dynamic nme_gfx_end_fill;
		static Dynamic &nme_gfx_end_fill_dyn() { return nme_gfx_end_fill;}
		static Dynamic nme_gfx_line_style;
		static Dynamic &nme_gfx_line_style_dyn() { return nme_gfx_line_style;}
		static Dynamic nme_gfx_move_to;
		static Dynamic &nme_gfx_move_to_dyn() { return nme_gfx_move_to;}
		static Dynamic nme_gfx_line_to;
		static Dynamic &nme_gfx_line_to_dyn() { return nme_gfx_line_to;}
		static Dynamic nme_gfx_curve_to;
		static Dynamic &nme_gfx_curve_to_dyn() { return nme_gfx_curve_to;}
		static Dynamic nme_gfx_arc_to;
		static Dynamic &nme_gfx_arc_to_dyn() { return nme_gfx_arc_to;}
		static Dynamic nme_gfx_draw_ellipse;
		static Dynamic &nme_gfx_draw_ellipse_dyn() { return nme_gfx_draw_ellipse;}
		static Dynamic nme_gfx_draw_data;
		static Dynamic &nme_gfx_draw_data_dyn() { return nme_gfx_draw_data;}
		static Dynamic nme_gfx_draw_datum;
		static Dynamic &nme_gfx_draw_datum_dyn() { return nme_gfx_draw_datum;}
		static Dynamic nme_gfx_draw_rect;
		static Dynamic &nme_gfx_draw_rect_dyn() { return nme_gfx_draw_rect;}
		static Dynamic nme_gfx_draw_path;
		static Dynamic &nme_gfx_draw_path_dyn() { return nme_gfx_draw_path;}
		static Dynamic nme_gfx_draw_tiles;
		static Dynamic &nme_gfx_draw_tiles_dyn() { return nme_gfx_draw_tiles;}
		static Dynamic nme_gfx_draw_points;
		static Dynamic &nme_gfx_draw_points_dyn() { return nme_gfx_draw_points;}
		static Dynamic nme_gfx_draw_round_rect;
		static Dynamic &nme_gfx_draw_round_rect_dyn() { return nme_gfx_draw_round_rect;}
		static Dynamic nme_gfx_draw_triangles;
		static Dynamic &nme_gfx_draw_triangles_dyn() { return nme_gfx_draw_triangles;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_Graphics */ 
