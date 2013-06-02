#include <hxcpp.h>

#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_GradientType
#include <native/display/GradientType.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_IGraphicsData
#include <native/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_native_display_InterpolationMethod
#include <native/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_native_display_SpreadMethod
#include <native/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_display_TriangleCulling
#include <native/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
namespace native{
namespace display{

Void Graphics_obj::__construct(Dynamic inHandle)
{
HX_STACK_PUSH("Graphics::new","native/display/Graphics.hx",20);
{
	HX_STACK_LINE(20)
	this->nmeHandle = inHandle;
}
;
	return null();
}

Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(Dynamic inHandle)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct(inHandle);
	return result;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphics_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_PUSH("Graphics::moveTo","native/display/Graphics.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(152)
		::native::display::Graphics_obj::nme_gfx_move_to(this->nmeHandle,inX,inY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

Void Graphics_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_PUSH("Graphics::lineTo","native/display/Graphics.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(147)
		::native::display::Graphics_obj::nme_gfx_line_to(this->nmeHandle,inX,inY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,::native::display::LineScaleMode scaleMode,::native::display::CapsStyle caps,::native::display::JointStyle joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1.0);
bool pixelHinting = __o_pixelHinting.Default(false);
Float miterLimit = __o_miterLimit.Default(3);
	HX_STACK_PUSH("Graphics::lineStyle","native/display/Graphics.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(thickness,"thickness");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(pixelHinting,"pixelHinting");
	HX_STACK_ARG(scaleMode,"scaleMode");
	HX_STACK_ARG(caps,"caps");
	HX_STACK_ARG(joints,"joints");
	HX_STACK_ARG(miterLimit,"miterLimit");
{
		HX_STACK_LINE(142)
		::native::display::Graphics_obj::nme_gfx_line_style(this->nmeHandle,thickness,color,alpha,pixelHinting,(  (((scaleMode == null()))) ? int((int)0) : int(scaleMode->__Index()) ),(  (((caps == null()))) ? int((int)0) : int(caps->__Index()) ),(  (((joints == null()))) ? int((int)0) : int(joints->__Index()) ),miterLimit);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineGradientStyle( ::native::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::native::geom::Matrix matrix,::native::display::SpreadMethod spreadMethod,::native::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(0.0);
	HX_STACK_PUSH("Graphics::lineGradientStyle","native/display/Graphics.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(colors,"colors");
	HX_STACK_ARG(alphas,"alphas");
	HX_STACK_ARG(ratios,"ratios");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(spreadMethod,"spreadMethod");
	HX_STACK_ARG(interpolationMethod,"interpolationMethod");
	HX_STACK_ARG(focalPointRatio,"focalPointRatio");
{
		HX_STACK_LINE(132)
		if (((matrix == null()))){
			HX_STACK_LINE(134)
			matrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(135)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(138)
		::native::display::Graphics_obj::nme_gfx_line_gradient_fill(this->nmeHandle,type->__Index(),colors,alphas,ratios,matrix,(  (((spreadMethod == null()))) ? int((int)0) : int(spreadMethod->__Index()) ),(  (((interpolationMethod == null()))) ? int((int)0) : int(interpolationMethod->__Index()) ),focalPointRatio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineBitmapStyle( ::native::display::BitmapData bitmap,::native::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_PUSH("Graphics::lineBitmapStyle","native/display/Graphics.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmap,"bitmap");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(repeat,"repeat");
	HX_STACK_ARG(smooth,"smooth");
{
		HX_STACK_LINE(126)
		::native::display::Graphics_obj::nme_gfx_line_bitmap_fill(this->nmeHandle,bitmap->nmeHandle,matrix,repeat,smooth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_PUSH("Graphics::endFill","native/display/Graphics.hx",121);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		::native::display::Graphics_obj::nme_gfx_end_fill(this->nmeHandle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::native::display::TriangleCulling culling,Array< int > colours,hx::Null< int >  __o_blendMode,Array< Float > viewport){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_PUSH("Graphics::drawTriangles","native/display/Graphics.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vertices,"vertices");
	HX_STACK_ARG(indices,"indices");
	HX_STACK_ARG(uvtData,"uvtData");
	HX_STACK_ARG(culling,"culling");
	HX_STACK_ARG(colours,"colours");
	HX_STACK_ARG(blendMode,"blendMode");
	HX_STACK_ARG(viewport,"viewport");
{
		HX_STACK_LINE(116)
		int cull = (  (((culling == null()))) ? int((int)0) : int((culling->__Index() - (int)1)) );		HX_STACK_VAR(cull,"cull");
		HX_STACK_LINE(117)
		::native::display::Graphics_obj::nme_gfx_draw_triangles(this->nmeHandle,vertices,indices,uvtData,cull,colours,blendMode,viewport);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::drawTiles( ::native::display::Tilesheet sheet,Array< Float > inXYID,hx::Null< bool >  __o_inSmooth,hx::Null< int >  __o_inFlags){
bool inSmooth = __o_inSmooth.Default(false);
int inFlags = __o_inFlags.Default(0);
	HX_STACK_PUSH("Graphics::drawTiles","native/display/Graphics.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sheet,"sheet");
	HX_STACK_ARG(inXYID,"inXYID");
	HX_STACK_ARG(inSmooth,"inSmooth");
	HX_STACK_ARG(inFlags,"inFlags");
{
		HX_STACK_LINE(106)
		this->beginBitmapFill(sheet->nmeBitmap,null(),false,inSmooth);
		HX_STACK_LINE(108)
		if ((inSmooth)){
			HX_STACK_LINE(109)
			hx::OrEq(inFlags,(int)4096);
		}
		HX_STACK_LINE(111)
		::native::display::Graphics_obj::nme_gfx_draw_tiles(this->nmeHandle,sheet->nmeHandle,inXYID,inFlags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::String __o_winding){
::String winding = __o_winding.Default(HX_CSTRING("evenOdd"));
	HX_STACK_PUSH("Graphics::drawPath","native/display/Graphics.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(commands,"commands");
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(winding,"winding");
{
		HX_STACK_LINE(101)
		::native::display::Graphics_obj::nme_gfx_draw_path(this->nmeHandle,commands,data,(winding == HX_CSTRING("evenOdd")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRoundRect( Float inX,Float inY,Float inWidth,Float inHeight,Float inRadX,Dynamic inRadY){
{
		HX_STACK_PUSH("Graphics::drawRoundRect","native/display/Graphics.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_ARG(inWidth,"inWidth");
		HX_STACK_ARG(inHeight,"inHeight");
		HX_STACK_ARG(inRadX,"inRadX");
		HX_STACK_ARG(inRadY,"inRadY");
		HX_STACK_LINE(96)
		::native::display::Graphics_obj::nme_gfx_draw_round_rect(this->nmeHandle,inX,inY,inWidth,inHeight,inRadX,(  (((inRadY == null()))) ? Dynamic(inRadX) : Dynamic(inRadY) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRect( Float inX,Float inY,Float inWidth,Float inHeight){
{
		HX_STACK_PUSH("Graphics::drawRect","native/display/Graphics.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_ARG(inWidth,"inWidth");
		HX_STACK_ARG(inHeight,"inHeight");
		HX_STACK_LINE(91)
		::native::display::Graphics_obj::nme_gfx_draw_rect(this->nmeHandle,inX,inY,inWidth,inHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawPoints( Array< Float > inXY,Array< int > inPointRGBA,hx::Null< int >  __o_inDefaultRGBA,hx::Null< Float >  __o_inSize){
int inDefaultRGBA = __o_inDefaultRGBA.Default(-1);
Float inSize = __o_inSize.Default(-1.0);
	HX_STACK_PUSH("Graphics::drawPoints","native/display/Graphics.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inXY,"inXY");
	HX_STACK_ARG(inPointRGBA,"inPointRGBA");
	HX_STACK_ARG(inDefaultRGBA,"inDefaultRGBA");
	HX_STACK_ARG(inSize,"inSize");
{
		HX_STACK_LINE(86)
		::native::display::Graphics_obj::nme_gfx_draw_points(this->nmeHandle,inXY,inPointRGBA,inDefaultRGBA,false,inSize);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawPoints,(void))

Void Graphics_obj::drawGraphicsDatum( ::native::display::IGraphicsData graphicsDatum){
{
		HX_STACK_PUSH("Graphics::drawGraphicsDatum","native/display/Graphics.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphicsDatum,"graphicsDatum");
		HX_STACK_LINE(81)
		::native::display::Graphics_obj::nme_gfx_draw_datum(this->nmeHandle,graphicsDatum->nmeHandle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsDatum,(void))

Void Graphics_obj::drawGraphicsData( Array< ::Dynamic > graphicsData){
{
		HX_STACK_PUSH("Graphics::drawGraphicsData","native/display/Graphics.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphicsData,"graphicsData");
		HX_STACK_LINE(72)
		Dynamic handles = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(handles,"handles");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while(((_g < graphicsData->length))){
				HX_STACK_LINE(74)
				::native::display::IGraphicsData datum = graphicsData->__get(_g).StaticCast< ::native::display::IGraphicsData >();		HX_STACK_VAR(datum,"datum");
				HX_STACK_LINE(74)
				++(_g);
				HX_STACK_LINE(75)
				handles->__Field(HX_CSTRING("push"),true)(datum->nmeHandle);
			}
		}
		HX_STACK_LINE(77)
		::native::display::Graphics_obj::nme_gfx_draw_data(this->nmeHandle,handles);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawEllipse( Float inX,Float inY,Float inWidth,Float inHeight){
{
		HX_STACK_PUSH("Graphics::drawEllipse","native/display/Graphics.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_ARG(inWidth,"inWidth");
		HX_STACK_ARG(inHeight,"inHeight");
		HX_STACK_LINE(66)
		::native::display::Graphics_obj::nme_gfx_draw_ellipse(this->nmeHandle,inX,inY,inWidth,inHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawCircle( Float inX,Float inY,Float inRadius){
{
		HX_STACK_PUSH("Graphics::drawCircle","native/display/Graphics.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_ARG(inRadius,"inRadius");
		HX_STACK_LINE(61)
		::native::display::Graphics_obj::nme_gfx_draw_ellipse(this->nmeHandle,(inX - inRadius),(inY - inRadius),(inRadius * (int)2),(inRadius * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_PUSH("Graphics::curveTo","native/display/Graphics.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inCX,"inCX");
		HX_STACK_ARG(inCY,"inCY");
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(56)
		::native::display::Graphics_obj::nme_gfx_curve_to(this->nmeHandle,inCX,inCY,inX,inY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_PUSH("Graphics::clear","native/display/Graphics.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(51)
		::native::display::Graphics_obj::nme_gfx_clear(this->nmeHandle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::beginGradientFill( ::native::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::native::geom::Matrix matrix,::native::display::SpreadMethod spreadMethod,::native::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(0.0);
	HX_STACK_PUSH("Graphics::beginGradientFill","native/display/Graphics.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(colors,"colors");
	HX_STACK_ARG(alphas,"alphas");
	HX_STACK_ARG(ratios,"ratios");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(spreadMethod,"spreadMethod");
	HX_STACK_ARG(interpolationMethod,"interpolationMethod");
	HX_STACK_ARG(focalPointRatio,"focalPointRatio");
{
		HX_STACK_LINE(41)
		if (((matrix == null()))){
			HX_STACK_LINE(43)
			matrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(44)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(47)
		::native::display::Graphics_obj::nme_gfx_begin_gradient_fill(this->nmeHandle,type->__Index(),colors,alphas,ratios,matrix,(  (((spreadMethod == null()))) ? int((int)0) : int(spreadMethod->__Index()) ),(  (((interpolationMethod == null()))) ? int((int)0) : int(interpolationMethod->__Index()) ),focalPointRatio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::beginFill( int color,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(1.0);
	HX_STACK_PUSH("Graphics::beginFill","native/display/Graphics.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(35)
		::native::display::Graphics_obj::nme_gfx_begin_fill(this->nmeHandle,color,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginBitmapFill( ::native::display::BitmapData bitmap,::native::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_PUSH("Graphics::beginBitmapFill","native/display/Graphics.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmap,"bitmap");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(repeat,"repeat");
	HX_STACK_ARG(smooth,"smooth");
{
		HX_STACK_LINE(30)
		::native::display::Graphics_obj::nme_gfx_begin_bitmap_fill(this->nmeHandle,bitmap->nmeHandle,matrix,repeat,smooth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::arcTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_PUSH("Graphics::arcTo","native/display/Graphics.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inCX,"inCX");
		HX_STACK_ARG(inCY,"inCY");
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(25)
		::native::display::Graphics_obj::nme_gfx_arc_to(this->nmeHandle,inCX,inCY,inX,inY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,arcTo,(void))

int Graphics_obj::RGBA( int inRGB,hx::Null< int >  __o_inA){
int inA = __o_inA.Default(255);
	HX_STACK_PUSH("Graphics::RGBA","native/display/Graphics.hx",157);
	HX_STACK_ARG(inRGB,"inRGB");
	HX_STACK_ARG(inA,"inA");
{
		HX_STACK_LINE(157)
		return (int(inRGB) | int((int(inA) << int((int)24))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,RGBA,return )

Dynamic Graphics_obj::nme_gfx_clear;

Dynamic Graphics_obj::nme_gfx_begin_fill;

Dynamic Graphics_obj::nme_gfx_begin_bitmap_fill;

Dynamic Graphics_obj::nme_gfx_line_bitmap_fill;

Dynamic Graphics_obj::nme_gfx_begin_gradient_fill;

Dynamic Graphics_obj::nme_gfx_line_gradient_fill;

Dynamic Graphics_obj::nme_gfx_end_fill;

Dynamic Graphics_obj::nme_gfx_line_style;

Dynamic Graphics_obj::nme_gfx_move_to;

Dynamic Graphics_obj::nme_gfx_line_to;

Dynamic Graphics_obj::nme_gfx_curve_to;

Dynamic Graphics_obj::nme_gfx_arc_to;

Dynamic Graphics_obj::nme_gfx_draw_ellipse;

Dynamic Graphics_obj::nme_gfx_draw_data;

Dynamic Graphics_obj::nme_gfx_draw_datum;

Dynamic Graphics_obj::nme_gfx_draw_rect;

Dynamic Graphics_obj::nme_gfx_draw_path;

Dynamic Graphics_obj::nme_gfx_draw_tiles;

Dynamic Graphics_obj::nme_gfx_draw_points;

Dynamic Graphics_obj::nme_gfx_draw_round_rect;

Dynamic Graphics_obj::nme_gfx_draw_triangles;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
}

Dynamic Graphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"arcTo") ) { return arcTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawPoints") ) { return drawPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nme_gfx_clear") ) { return nme_gfx_clear; }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_gfx_arc_to") ) { return nme_gfx_arc_to; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_gfx_move_to") ) { return nme_gfx_move_to; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_to") ) { return nme_gfx_line_to; }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_gfx_end_fill") ) { return nme_gfx_end_fill; }
		if (HX_FIELD_EQ(inName,"nme_gfx_curve_to") ) { return nme_gfx_curve_to; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_data") ) { return nme_gfx_draw_data; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_rect") ) { return nme_gfx_draw_rect; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_path") ) { return nme_gfx_draw_path; }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawGraphicsDatum") ) { return drawGraphicsDatum_dyn(); }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_fill") ) { return nme_gfx_begin_fill; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_style") ) { return nme_gfx_line_style; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_datum") ) { return nme_gfx_draw_datum; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_tiles") ) { return nme_gfx_draw_tiles; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_points") ) { return nme_gfx_draw_points; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_ellipse") ) { return nme_gfx_draw_ellipse; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_triangles") ) { return nme_gfx_draw_triangles; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_round_rect") ) { return nme_gfx_draw_round_rect; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_bitmap_fill") ) { return nme_gfx_line_bitmap_fill; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_bitmap_fill") ) { return nme_gfx_begin_bitmap_fill; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_gradient_fill") ) { return nme_gfx_line_gradient_fill; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_gradient_fill") ) { return nme_gfx_begin_gradient_fill; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nme_gfx_clear") ) { nme_gfx_clear=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_gfx_arc_to") ) { nme_gfx_arc_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_gfx_move_to") ) { nme_gfx_move_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_to") ) { nme_gfx_line_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_gfx_end_fill") ) { nme_gfx_end_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_curve_to") ) { nme_gfx_curve_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_data") ) { nme_gfx_draw_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_rect") ) { nme_gfx_draw_rect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_path") ) { nme_gfx_draw_path=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_fill") ) { nme_gfx_begin_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_style") ) { nme_gfx_line_style=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_datum") ) { nme_gfx_draw_datum=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_tiles") ) { nme_gfx_draw_tiles=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_points") ) { nme_gfx_draw_points=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_ellipse") ) { nme_gfx_draw_ellipse=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_triangles") ) { nme_gfx_draw_triangles=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_round_rect") ) { nme_gfx_draw_round_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_bitmap_fill") ) { nme_gfx_line_bitmap_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_bitmap_fill") ) { nme_gfx_begin_bitmap_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_gradient_fill") ) { nme_gfx_line_gradient_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_gradient_fill") ) { nme_gfx_begin_gradient_fill=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeHandle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RGBA"),
	HX_CSTRING("nme_gfx_clear"),
	HX_CSTRING("nme_gfx_begin_fill"),
	HX_CSTRING("nme_gfx_begin_bitmap_fill"),
	HX_CSTRING("nme_gfx_line_bitmap_fill"),
	HX_CSTRING("nme_gfx_begin_gradient_fill"),
	HX_CSTRING("nme_gfx_line_gradient_fill"),
	HX_CSTRING("nme_gfx_end_fill"),
	HX_CSTRING("nme_gfx_line_style"),
	HX_CSTRING("nme_gfx_move_to"),
	HX_CSTRING("nme_gfx_line_to"),
	HX_CSTRING("nme_gfx_curve_to"),
	HX_CSTRING("nme_gfx_arc_to"),
	HX_CSTRING("nme_gfx_draw_ellipse"),
	HX_CSTRING("nme_gfx_draw_data"),
	HX_CSTRING("nme_gfx_draw_datum"),
	HX_CSTRING("nme_gfx_draw_rect"),
	HX_CSTRING("nme_gfx_draw_path"),
	HX_CSTRING("nme_gfx_draw_tiles"),
	HX_CSTRING("nme_gfx_draw_points"),
	HX_CSTRING("nme_gfx_draw_round_rect"),
	HX_CSTRING("nme_gfx_draw_triangles"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("moveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("lineGradientStyle"),
	HX_CSTRING("lineBitmapStyle"),
	HX_CSTRING("endFill"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("drawTiles"),
	HX_CSTRING("drawPath"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawPoints"),
	HX_CSTRING("drawGraphicsDatum"),
	HX_CSTRING("drawGraphicsData"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("clear"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginBitmapFill"),
	HX_CSTRING("arcTo"),
	HX_CSTRING("nmeHandle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_clear,"nme_gfx_clear");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_fill,"nme_gfx_begin_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_bitmap_fill,"nme_gfx_begin_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_bitmap_fill,"nme_gfx_line_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_gradient_fill,"nme_gfx_begin_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_gradient_fill,"nme_gfx_line_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_end_fill,"nme_gfx_end_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_style,"nme_gfx_line_style");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_move_to,"nme_gfx_move_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_to,"nme_gfx_line_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_curve_to,"nme_gfx_curve_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_arc_to,"nme_gfx_arc_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_ellipse,"nme_gfx_draw_ellipse");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_data,"nme_gfx_draw_data");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_datum,"nme_gfx_draw_datum");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_rect,"nme_gfx_draw_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_path,"nme_gfx_draw_path");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_tiles,"nme_gfx_draw_tiles");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_points,"nme_gfx_draw_points");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_round_rect,"nme_gfx_draw_round_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_triangles,"nme_gfx_draw_triangles");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_clear,"nme_gfx_clear");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_fill,"nme_gfx_begin_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_bitmap_fill,"nme_gfx_begin_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_bitmap_fill,"nme_gfx_line_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_gradient_fill,"nme_gfx_begin_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_gradient_fill,"nme_gfx_line_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_end_fill,"nme_gfx_end_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_style,"nme_gfx_line_style");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_move_to,"nme_gfx_move_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_to,"nme_gfx_line_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_curve_to,"nme_gfx_curve_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_arc_to,"nme_gfx_arc_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_ellipse,"nme_gfx_draw_ellipse");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_data,"nme_gfx_draw_data");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_datum,"nme_gfx_draw_datum");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_rect,"nme_gfx_draw_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_path,"nme_gfx_draw_path");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_tiles,"nme_gfx_draw_tiles");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_points,"nme_gfx_draw_points");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_round_rect,"nme_gfx_draw_round_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_triangles,"nme_gfx_draw_triangles");
};

Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.Graphics"), hx::TCanCast< Graphics_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Graphics_obj::__boot()
{
	nme_gfx_clear= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_clear"),(int)1);
	nme_gfx_begin_fill= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_begin_fill"),(int)3);
	nme_gfx_begin_bitmap_fill= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_begin_bitmap_fill"),(int)5);
	nme_gfx_line_bitmap_fill= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_line_bitmap_fill"),(int)5);
	nme_gfx_begin_gradient_fill= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_begin_gradient_fill"),(int)-1);
	nme_gfx_line_gradient_fill= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_line_gradient_fill"),(int)-1);
	nme_gfx_end_fill= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_end_fill"),(int)1);
	nme_gfx_line_style= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_line_style"),(int)-1);
	nme_gfx_move_to= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_move_to"),(int)3);
	nme_gfx_line_to= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_line_to"),(int)3);
	nme_gfx_curve_to= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_curve_to"),(int)5);
	nme_gfx_arc_to= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_arc_to"),(int)5);
	nme_gfx_draw_ellipse= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_ellipse"),(int)5);
	nme_gfx_draw_data= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_data"),(int)2);
	nme_gfx_draw_datum= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_datum"),(int)2);
	nme_gfx_draw_rect= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_rect"),(int)5);
	nme_gfx_draw_path= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_path"),(int)4);
	nme_gfx_draw_tiles= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_tiles"),(int)4);
	nme_gfx_draw_points= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_points"),(int)-1);
	nme_gfx_draw_round_rect= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_round_rect"),(int)-1);
	nme_gfx_draw_triangles= ::native::Loader_obj::load(HX_CSTRING("nme_gfx_draw_triangles"),(int)-1);
}

} // end namespace native
} // end namespace display
