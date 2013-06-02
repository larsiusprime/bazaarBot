#ifndef INCLUDED_native_display_DisplayObject
#define INCLUDED_native_display_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
#include <native/display/IBitmapDrawable.h>
HX_DECLARE_CLASS2(native,display,BlendMode)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,Graphics)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,LoaderInfo)
HX_DECLARE_CLASS2(native,display,PixelSnapping)
HX_DECLARE_CLASS2(native,display,Stage)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,ColorTransform)
HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(native,geom,Transform)
HX_DECLARE_CLASS2(native,net,URLLoader)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObject_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();
		Void __construct(Dynamic inHandle,::String inType);

	public:
		static hx::ObjectPtr< DisplayObject_obj > __new(Dynamic inHandle,::String inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DisplayObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::native::display::IBitmapDrawable_obj *()
			{ return new ::native::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("DisplayObject"); }

		virtual Float set_y( Float inVal);
		Dynamic set_y_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_x( Float inVal);
		Dynamic set_x_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_width( Float inVal);
		Dynamic set_width_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual bool set_visible( bool inVal);
		Dynamic set_visible_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual ::native::geom::Transform set_transform( ::native::geom::Transform inTransform);
		Dynamic set_transform_dyn();

		virtual ::native::geom::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual ::native::display::Stage get_stage( );
		Dynamic get_stage_dyn();

		virtual ::native::geom::Rectangle set_scrollRect( ::native::geom::Rectangle inRect);
		Dynamic set_scrollRect_dyn();

		virtual ::native::geom::Rectangle get_scrollRect( );
		Dynamic get_scrollRect_dyn();

		virtual Float set_scaleY( Float inVal);
		Dynamic set_scaleY_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleX( Float inVal);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual ::native::geom::Rectangle set_scale9Grid( ::native::geom::Rectangle inRect);
		Dynamic set_scale9Grid_dyn();

		virtual ::native::geom::Rectangle get_scale9Grid( );
		Dynamic get_scale9Grid_dyn();

		virtual Float set_rotation( Float inVal);
		Dynamic set_rotation_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		virtual ::native::display::DisplayObjectContainer get_parent( );
		Dynamic get_parent_dyn();

		virtual ::String set_name( ::String inVal);
		Dynamic set_name_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual Float get_mouseY( );
		Dynamic get_mouseY_dyn();

		virtual Float get_mouseX( );
		Dynamic get_mouseX_dyn();

		virtual ::native::display::DisplayObject set_mask( ::native::display::DisplayObject inObject);
		Dynamic set_mask_dyn();

		virtual Float set_height( Float inVal);
		Dynamic set_height_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual ::native::display::Graphics get_graphics( );
		Dynamic get_graphics_dyn();

		virtual Dynamic set_filters( Dynamic inFilters);
		Dynamic set_filters_dyn();

		virtual Dynamic get_filters( );
		Dynamic get_filters_dyn();

		virtual ::native::display::PixelSnapping set_pixelSnapping( ::native::display::PixelSnapping inVal);
		Dynamic set_pixelSnapping_dyn();

		virtual ::native::display::PixelSnapping get_pixelSnapping( );
		Dynamic get_pixelSnapping_dyn();

		virtual bool set_pedanticBitmapCaching( bool inVal);
		Dynamic set_pedanticBitmapCaching_dyn();

		virtual bool get_pedanticBitmapCaching( );
		Dynamic get_pedanticBitmapCaching_dyn();

		virtual bool set_cacheAsBitmap( bool inVal);
		Dynamic set_cacheAsBitmap_dyn();

		virtual bool get_cacheAsBitmap( );
		Dynamic get_cacheAsBitmap_dyn();

		virtual ::native::display::BlendMode set_blendMode( ::native::display::BlendMode inMode);
		Dynamic set_blendMode_dyn();

		virtual ::native::display::BlendMode get_blendMode( );
		Dynamic get_blendMode_dyn();

		virtual Dynamic set_opaqueBackground( Dynamic inBG);
		Dynamic set_opaqueBackground_dyn();

		virtual Dynamic get_opaqueBackground( );
		Dynamic get_opaqueBackground_dyn();

		virtual Float set_alpha( Float inAlpha);
		Dynamic set_alpha_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual ::String toString( );

		virtual ::native::display::DisplayObjectContainer nmeSetParent( ::native::display::DisplayObjectContainer inParent);
		Dynamic nmeSetParent_dyn();

		virtual Void nmeSetMatrix( ::native::geom::Matrix inMatrix);
		Dynamic nmeSetMatrix_dyn();

		virtual Void nmeSetColorTransform( ::native::geom::ColorTransform inTrans);
		Dynamic nmeSetColorTransform_dyn();

		virtual Void nmeOnRemoved( ::native::display::DisplayObject inObj,bool inWasOnStage);
		Dynamic nmeOnRemoved_dyn();

		virtual Void nmeOnAdded( ::native::display::DisplayObject inObj,bool inIsOnStage);
		Dynamic nmeOnAdded_dyn();

		virtual ::native::geom::Rectangle nmeGetPixelBounds( );
		Dynamic nmeGetPixelBounds_dyn();

		virtual Void nmeGetObjectsUnderPoint( ::native::geom::Point point,Array< ::Dynamic > result);
		Dynamic nmeGetObjectsUnderPoint_dyn();

		virtual ::native::geom::Matrix nmeGetMatrix( );
		Dynamic nmeGetMatrix_dyn();

		virtual Void nmeGetInteractiveObjectStack( Array< ::Dynamic > outStack);
		Dynamic nmeGetInteractiveObjectStack_dyn();

		virtual ::native::geom::Matrix nmeGetConcatenatedMatrix( );
		Dynamic nmeGetConcatenatedMatrix_dyn();

		virtual ::native::geom::ColorTransform nmeGetConcatenatedColorTransform( );
		Dynamic nmeGetConcatenatedColorTransform_dyn();

		virtual ::native::geom::ColorTransform nmeGetColorTransform( );
		Dynamic nmeGetColorTransform_dyn();

		virtual Void nmeFireEvent( ::native::events::Event inEvt);
		Dynamic nmeFireEvent_dyn();

		virtual ::native::display::DisplayObject nmeFindByID( int inID);
		Dynamic nmeFindByID_dyn();

		virtual Void nmeDrawToSurface( Dynamic inSurface,::native::geom::Matrix matrix,::native::geom::ColorTransform colorTransform,::String blendMode,::native::geom::Rectangle clipRect,bool smoothing);
		Dynamic nmeDrawToSurface_dyn();

		virtual bool nmeDispatchEvent( ::native::events::Event inEvt);
		Dynamic nmeDispatchEvent_dyn();

		virtual Void nmeBroadcast( ::native::events::Event inEvt);
		Dynamic nmeBroadcast_dyn();

		virtual ::native::display::InteractiveObject nmeAsInteractiveObject( );
		Dynamic nmeAsInteractiveObject_dyn();

		virtual ::native::geom::Point localToGlobal( ::native::geom::Point inLocal);
		Dynamic localToGlobal_dyn();

		virtual bool hitTestPoint( Float x,Float y,hx::Null< bool >  shapeFlag);
		Dynamic hitTestPoint_dyn();

		virtual bool hitTestObject( ::native::display::DisplayObject object);
		Dynamic hitTestObject_dyn();

		virtual ::native::geom::Point globalToLocal( ::native::geom::Point inGlobal);
		Dynamic globalToLocal_dyn();

		virtual ::native::geom::Rectangle getRect( ::native::display::DisplayObject targetCoordinateSpace);
		Dynamic getRect_dyn();

		virtual ::native::geom::Rectangle getBounds( ::native::display::DisplayObject targetCoordinateSpace);
		Dynamic getBounds_dyn();

		virtual bool dispatchEvent( ::native::events::Event event);

		::native::geom::Rectangle nmeScrollRect;
		::native::geom::Rectangle nmeScale9Grid;
		::native::display::DisplayObjectContainer nmeParent;
		int nmeID;
		::native::display::Graphics nmeGraphicsCache;
		Dynamic nmeFilters;
		Dynamic nmeHandle;
		::native::display::Stage stage;
		::native::display::DisplayObjectContainer parent;
		Float mouseY;
		Float mouseX;
		::native::display::DisplayObject mask;
		::native::display::LoaderInfo loaderInfo;
		::native::display::Graphics graphics;
		static Dynamic nme_create_display_object;
		static Dynamic &nme_create_display_object_dyn() { return nme_create_display_object;}
		static Dynamic nme_display_object_get_graphics;
		static Dynamic &nme_display_object_get_graphics_dyn() { return nme_display_object_get_graphics;}
		static Dynamic nme_display_object_draw_to_surface;
		static Dynamic &nme_display_object_draw_to_surface_dyn() { return nme_display_object_draw_to_surface;}
		static Dynamic nme_display_object_get_id;
		static Dynamic &nme_display_object_get_id_dyn() { return nme_display_object_get_id;}
		static Dynamic nme_display_object_get_x;
		static Dynamic &nme_display_object_get_x_dyn() { return nme_display_object_get_x;}
		static Dynamic nme_display_object_set_x;
		static Dynamic &nme_display_object_set_x_dyn() { return nme_display_object_set_x;}
		static Dynamic nme_display_object_get_y;
		static Dynamic &nme_display_object_get_y_dyn() { return nme_display_object_get_y;}
		static Dynamic nme_display_object_set_y;
		static Dynamic &nme_display_object_set_y_dyn() { return nme_display_object_set_y;}
		static Dynamic nme_display_object_get_scale_x;
		static Dynamic &nme_display_object_get_scale_x_dyn() { return nme_display_object_get_scale_x;}
		static Dynamic nme_display_object_set_scale_x;
		static Dynamic &nme_display_object_set_scale_x_dyn() { return nme_display_object_set_scale_x;}
		static Dynamic nme_display_object_get_scale_y;
		static Dynamic &nme_display_object_get_scale_y_dyn() { return nme_display_object_get_scale_y;}
		static Dynamic nme_display_object_set_scale_y;
		static Dynamic &nme_display_object_set_scale_y_dyn() { return nme_display_object_set_scale_y;}
		static Dynamic nme_display_object_get_mouse_x;
		static Dynamic &nme_display_object_get_mouse_x_dyn() { return nme_display_object_get_mouse_x;}
		static Dynamic nme_display_object_get_mouse_y;
		static Dynamic &nme_display_object_get_mouse_y_dyn() { return nme_display_object_get_mouse_y;}
		static Dynamic nme_display_object_get_rotation;
		static Dynamic &nme_display_object_get_rotation_dyn() { return nme_display_object_get_rotation;}
		static Dynamic nme_display_object_set_rotation;
		static Dynamic &nme_display_object_set_rotation_dyn() { return nme_display_object_set_rotation;}
		static Dynamic nme_display_object_get_bg;
		static Dynamic &nme_display_object_get_bg_dyn() { return nme_display_object_get_bg;}
		static Dynamic nme_display_object_set_bg;
		static Dynamic &nme_display_object_set_bg_dyn() { return nme_display_object_set_bg;}
		static Dynamic nme_display_object_get_name;
		static Dynamic &nme_display_object_get_name_dyn() { return nme_display_object_get_name;}
		static Dynamic nme_display_object_set_name;
		static Dynamic &nme_display_object_set_name_dyn() { return nme_display_object_set_name;}
		static Dynamic nme_display_object_get_width;
		static Dynamic &nme_display_object_get_width_dyn() { return nme_display_object_get_width;}
		static Dynamic nme_display_object_set_width;
		static Dynamic &nme_display_object_set_width_dyn() { return nme_display_object_set_width;}
		static Dynamic nme_display_object_get_height;
		static Dynamic &nme_display_object_get_height_dyn() { return nme_display_object_get_height;}
		static Dynamic nme_display_object_set_height;
		static Dynamic &nme_display_object_set_height_dyn() { return nme_display_object_set_height;}
		static Dynamic nme_display_object_get_alpha;
		static Dynamic &nme_display_object_get_alpha_dyn() { return nme_display_object_get_alpha;}
		static Dynamic nme_display_object_set_alpha;
		static Dynamic &nme_display_object_set_alpha_dyn() { return nme_display_object_set_alpha;}
		static Dynamic nme_display_object_get_blend_mode;
		static Dynamic &nme_display_object_get_blend_mode_dyn() { return nme_display_object_get_blend_mode;}
		static Dynamic nme_display_object_set_blend_mode;
		static Dynamic &nme_display_object_set_blend_mode_dyn() { return nme_display_object_set_blend_mode;}
		static Dynamic nme_display_object_get_cache_as_bitmap;
		static Dynamic &nme_display_object_get_cache_as_bitmap_dyn() { return nme_display_object_get_cache_as_bitmap;}
		static Dynamic nme_display_object_set_cache_as_bitmap;
		static Dynamic &nme_display_object_set_cache_as_bitmap_dyn() { return nme_display_object_set_cache_as_bitmap;}
		static Dynamic nme_display_object_get_pedantic_bitmap_caching;
		static Dynamic &nme_display_object_get_pedantic_bitmap_caching_dyn() { return nme_display_object_get_pedantic_bitmap_caching;}
		static Dynamic nme_display_object_set_pedantic_bitmap_caching;
		static Dynamic &nme_display_object_set_pedantic_bitmap_caching_dyn() { return nme_display_object_set_pedantic_bitmap_caching;}
		static Dynamic nme_display_object_get_pixel_snapping;
		static Dynamic &nme_display_object_get_pixel_snapping_dyn() { return nme_display_object_get_pixel_snapping;}
		static Dynamic nme_display_object_set_pixel_snapping;
		static Dynamic &nme_display_object_set_pixel_snapping_dyn() { return nme_display_object_set_pixel_snapping;}
		static Dynamic nme_display_object_get_visible;
		static Dynamic &nme_display_object_get_visible_dyn() { return nme_display_object_get_visible;}
		static Dynamic nme_display_object_set_visible;
		static Dynamic &nme_display_object_set_visible_dyn() { return nme_display_object_set_visible;}
		static Dynamic nme_display_object_set_filters;
		static Dynamic &nme_display_object_set_filters_dyn() { return nme_display_object_set_filters;}
		static Dynamic nme_display_object_global_to_local;
		static Dynamic &nme_display_object_global_to_local_dyn() { return nme_display_object_global_to_local;}
		static Dynamic nme_display_object_local_to_global;
		static Dynamic &nme_display_object_local_to_global_dyn() { return nme_display_object_local_to_global;}
		static Dynamic nme_display_object_set_scale9_grid;
		static Dynamic &nme_display_object_set_scale9_grid_dyn() { return nme_display_object_set_scale9_grid;}
		static Dynamic nme_display_object_set_scroll_rect;
		static Dynamic &nme_display_object_set_scroll_rect_dyn() { return nme_display_object_set_scroll_rect;}
		static Dynamic nme_display_object_set_mask;
		static Dynamic &nme_display_object_set_mask_dyn() { return nme_display_object_set_mask;}
		static Dynamic nme_display_object_set_matrix;
		static Dynamic &nme_display_object_set_matrix_dyn() { return nme_display_object_set_matrix;}
		static Dynamic nme_display_object_get_matrix;
		static Dynamic &nme_display_object_get_matrix_dyn() { return nme_display_object_get_matrix;}
		static Dynamic nme_display_object_get_color_transform;
		static Dynamic &nme_display_object_get_color_transform_dyn() { return nme_display_object_get_color_transform;}
		static Dynamic nme_display_object_set_color_transform;
		static Dynamic &nme_display_object_set_color_transform_dyn() { return nme_display_object_set_color_transform;}
		static Dynamic nme_display_object_get_pixel_bounds;
		static Dynamic &nme_display_object_get_pixel_bounds_dyn() { return nme_display_object_get_pixel_bounds;}
		static Dynamic nme_display_object_get_bounds;
		static Dynamic &nme_display_object_get_bounds_dyn() { return nme_display_object_get_bounds;}
		static Dynamic nme_display_object_hit_test_point;
		static Dynamic &nme_display_object_hit_test_point_dyn() { return nme_display_object_hit_test_point;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_DisplayObject */ 
