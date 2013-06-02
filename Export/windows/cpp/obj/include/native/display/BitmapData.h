#ifndef INCLUDED_native_display_BitmapData
#define INCLUDED_native_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/IBitmapDrawable.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,BlendMode)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,filters,BitmapFilter)
HX_DECLARE_CLASS2(native,geom,ColorTransform)
HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BitmapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();
		Void __construct(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillRGBA,Dynamic inGPUMode);

	public:
		static hx::ObjectPtr< BitmapData_obj > __new(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillRGBA,Dynamic inGPUMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::native::display::IBitmapDrawable_obj *()
			{ return new ::native::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BitmapData"); }

		virtual bool get_transparent( );
		Dynamic get_transparent_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual ::native::geom::Rectangle get_rect( );
		Dynamic get_rect_dyn();

		virtual Void noise( int randomSeed,hx::Null< int >  low,hx::Null< int >  high,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale);
		Dynamic noise_dyn();

		virtual Void setFormat( int format);
		Dynamic setFormat_dyn();

		virtual Void unlock( ::native::geom::Rectangle changeRect);
		Dynamic unlock_dyn();

		virtual Void setVector( ::native::geom::Rectangle rect,Array< int > inPixels);
		Dynamic setVector_dyn();

		virtual Void setPixels( ::native::geom::Rectangle rect,::native::utils::ByteArray pixels);
		Dynamic setPixels_dyn();

		virtual Void setPixel32( int inX,int inY,int inColour);
		Dynamic setPixel32_dyn();

		virtual Void setPixel( int inX,int inY,int inColour);
		Dynamic setPixel_dyn();

		virtual Void setFlags( int inFlags);
		Dynamic setFlags_dyn();

		virtual Void scroll( int inDX,int inDY);
		Dynamic scroll_dyn();

		virtual Void perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale,Array< ::Dynamic > offsets);
		Dynamic perlinNoise_dyn();

		virtual Void nmeLoadFromBytes( ::native::utils::ByteArray inBytes,::native::utils::ByteArray inRawAlpha);
		Dynamic nmeLoadFromBytes_dyn();

		virtual Void nmeDrawToSurface( Dynamic inSurface,::native::geom::Matrix matrix,::native::geom::ColorTransform colorTransform,::String blendMode,::native::geom::Rectangle clipRect,bool smoothing);
		Dynamic nmeDrawToSurface_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Array< int > getVector( ::native::geom::Rectangle rect);
		Dynamic getVector_dyn();

		virtual ::native::utils::ByteArray getPixels( ::native::geom::Rectangle rect);
		Dynamic getPixels_dyn();

		virtual int getPixel32( int x,int y);
		Dynamic getPixel32_dyn();

		virtual int getPixel( int x,int y);
		Dynamic getPixel_dyn();

		virtual ::native::geom::Rectangle getColorBoundsRect( int mask,int color,hx::Null< bool >  findColor);
		Dynamic getColorBoundsRect_dyn();

		virtual ::native::geom::Rectangle generateFilterRect( ::native::geom::Rectangle sourceRect,::native::filters::BitmapFilter filter);
		Dynamic generateFilterRect_dyn();

		virtual int _self_threshold( ::String operation,int threshold,hx::Null< int >  color,hx::Null< int >  mask);
		Dynamic _self_threshold_dyn();

		virtual int threshold( ::native::display::BitmapData sourceBitmapData,::native::geom::Rectangle sourceRect,::native::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  color,hx::Null< int >  mask,hx::Null< bool >  copySource);
		Dynamic threshold_dyn();

		virtual Void floodFill( int x,int y,int color);
		Dynamic floodFill_dyn();

		virtual Void fillRectEx( ::native::geom::Rectangle rect,int inColour,hx::Null< int >  inAlpha);
		Dynamic fillRectEx_dyn();

		virtual Void fillRect( ::native::geom::Rectangle rect,int inColour);
		Dynamic fillRect_dyn();

		virtual ::native::utils::ByteArray encode( ::String inFormat,hx::Null< Float >  inQuality);
		Dynamic encode_dyn();

		virtual Void dumpBits( );
		Dynamic dumpBits_dyn();

		virtual Void draw( ::native::display::IBitmapDrawable source,::native::geom::Matrix matrix,::native::geom::ColorTransform colorTransform,::native::display::BlendMode blendMode,::native::geom::Rectangle clipRect,hx::Null< bool >  smoothing);
		Dynamic draw_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void destroyHardwareSurface( );
		Dynamic destroyHardwareSurface_dyn();

		virtual Void createHardwareSurface( );
		Dynamic createHardwareSurface_dyn();

		virtual Void copyPixels( ::native::display::BitmapData sourceBitmapData,::native::geom::Rectangle sourceRect,::native::geom::Point destPoint,::native::display::BitmapData alphaBitmapData,::native::geom::Point alphaPoint,hx::Null< bool >  mergeAlpha);
		Dynamic copyPixels_dyn();

		virtual Void copyChannel( ::native::display::BitmapData sourceBitmapData,::native::geom::Rectangle sourceRect,::native::geom::Point destPoint,int inSourceChannel,int inDestChannel);
		Dynamic copyChannel_dyn();

		virtual Void colorTransform( ::native::geom::Rectangle rect,::native::geom::ColorTransform colorTransform);
		Dynamic colorTransform_dyn();

		virtual ::native::display::BitmapData clone( );
		Dynamic clone_dyn();

		virtual Void clear( int color);
		Dynamic clear_dyn();

		virtual Void applyFilter( ::native::display::BitmapData sourceBitmapData,::native::geom::Rectangle sourceRect,::native::geom::Point destPoint,::native::filters::BitmapFilter filter);
		Dynamic applyFilter_dyn();

		Dynamic nmeHandle;
		bool nmeTransparent;
		int width;
		bool transparent;
		::native::geom::Rectangle rect;
		int height;
		static int CLEAR;
		static int BLACK;
		static int WHITE;
		static int RED;
		static int GREEN;
		static int BLUE;
		static int TRANSPARENT;
		static int HARDWARE;
		static int FORMAT_8888;
		static int FORMAT_4444;
		static int FORMAT_565;
		static int createColor( int inRGB,hx::Null< int >  inAlpha);
		static Dynamic createColor_dyn();

		static int extractAlpha( int v);
		static Dynamic extractAlpha_dyn();

		static int extractColor( int v);
		static Dynamic extractColor_dyn();

		static bool sameValue( int a,int b);
		static Dynamic sameValue_dyn();

		static int flip_pixel4( int pix4);
		static Dynamic flip_pixel4_dyn();

		static int ucompare( int n1,int n2);
		static Dynamic ucompare_dyn();

		static ::native::utils::ByteArray getRGBAPixels( ::native::display::BitmapData bitmapData);
		static Dynamic getRGBAPixels_dyn();

		static ::native::display::BitmapData load( ::String inFilename,hx::Null< int >  format);
		static Dynamic load_dyn();

		static ::native::display::BitmapData loadFromBytes( ::native::utils::ByteArray inBytes,::native::utils::ByteArray inRawAlpha);
		static Dynamic loadFromBytes_dyn();

		static ::native::display::BitmapData loadFromHaxeBytes( ::haxe::io::Bytes inBytes,::haxe::io::Bytes inRawAlpha);
		static Dynamic loadFromHaxeBytes_dyn();

		static Dynamic nme_bitmap_data_create;
		static Dynamic &nme_bitmap_data_create_dyn() { return nme_bitmap_data_create;}
		static Dynamic nme_bitmap_data_load;
		static Dynamic &nme_bitmap_data_load_dyn() { return nme_bitmap_data_load;}
		static Dynamic nme_bitmap_data_from_bytes;
		static Dynamic &nme_bitmap_data_from_bytes_dyn() { return nme_bitmap_data_from_bytes;}
		static Dynamic nme_bitmap_data_clear;
		static Dynamic &nme_bitmap_data_clear_dyn() { return nme_bitmap_data_clear;}
		static Dynamic nme_bitmap_data_clone;
		static Dynamic &nme_bitmap_data_clone_dyn() { return nme_bitmap_data_clone;}
		static Dynamic nme_bitmap_data_apply_filter;
		static Dynamic &nme_bitmap_data_apply_filter_dyn() { return nme_bitmap_data_apply_filter;}
		static Dynamic nme_bitmap_data_color_transform;
		static Dynamic &nme_bitmap_data_color_transform_dyn() { return nme_bitmap_data_color_transform;}
		static Dynamic nme_bitmap_data_copy;
		static Dynamic &nme_bitmap_data_copy_dyn() { return nme_bitmap_data_copy;}
		static Dynamic nme_bitmap_data_copy_channel;
		static Dynamic &nme_bitmap_data_copy_channel_dyn() { return nme_bitmap_data_copy_channel;}
		static Dynamic nme_bitmap_data_fill;
		static Dynamic &nme_bitmap_data_fill_dyn() { return nme_bitmap_data_fill;}
		static Dynamic nme_bitmap_data_get_pixels;
		static Dynamic &nme_bitmap_data_get_pixels_dyn() { return nme_bitmap_data_get_pixels;}
		static Dynamic nme_bitmap_data_get_pixel;
		static Dynamic &nme_bitmap_data_get_pixel_dyn() { return nme_bitmap_data_get_pixel;}
		static Dynamic nme_bitmap_data_get_pixel32;
		static Dynamic &nme_bitmap_data_get_pixel32_dyn() { return nme_bitmap_data_get_pixel32;}
		static Dynamic nme_bitmap_data_get_pixel_rgba;
		static Dynamic nme_bitmap_data_get_array;
		static Dynamic &nme_bitmap_data_get_array_dyn() { return nme_bitmap_data_get_array;}
		static Dynamic nme_bitmap_data_get_color_bounds_rect;
		static Dynamic &nme_bitmap_data_get_color_bounds_rect_dyn() { return nme_bitmap_data_get_color_bounds_rect;}
		static Dynamic nme_bitmap_data_scroll;
		static Dynamic &nme_bitmap_data_scroll_dyn() { return nme_bitmap_data_scroll;}
		static Dynamic nme_bitmap_data_set_pixel;
		static Dynamic &nme_bitmap_data_set_pixel_dyn() { return nme_bitmap_data_set_pixel;}
		static Dynamic nme_bitmap_data_set_pixel32;
		static Dynamic &nme_bitmap_data_set_pixel32_dyn() { return nme_bitmap_data_set_pixel32;}
		static Dynamic nme_bitmap_data_set_pixel_rgba;
		static Dynamic nme_bitmap_data_set_bytes;
		static Dynamic &nme_bitmap_data_set_bytes_dyn() { return nme_bitmap_data_set_bytes;}
		static Dynamic nme_bitmap_data_set_format;
		static Dynamic &nme_bitmap_data_set_format_dyn() { return nme_bitmap_data_set_format;}
		static Dynamic nme_bitmap_data_set_array;
		static Dynamic &nme_bitmap_data_set_array_dyn() { return nme_bitmap_data_set_array;}
		static Dynamic nme_bitmap_data_create_hardware_surface;
		static Dynamic &nme_bitmap_data_create_hardware_surface_dyn() { return nme_bitmap_data_create_hardware_surface;}
		static Dynamic nme_bitmap_data_destroy_hardware_surface;
		static Dynamic &nme_bitmap_data_destroy_hardware_surface_dyn() { return nme_bitmap_data_destroy_hardware_surface;}
		static Dynamic nme_bitmap_data_generate_filter_rect;
		static Dynamic &nme_bitmap_data_generate_filter_rect_dyn() { return nme_bitmap_data_generate_filter_rect;}
		static Dynamic nme_render_surface_to_surface;
		static Dynamic &nme_render_surface_to_surface_dyn() { return nme_render_surface_to_surface;}
		static Dynamic nme_bitmap_data_height;
		static Dynamic &nme_bitmap_data_height_dyn() { return nme_bitmap_data_height;}
		static Dynamic nme_bitmap_data_width;
		static Dynamic &nme_bitmap_data_width_dyn() { return nme_bitmap_data_width;}
		static Dynamic nme_bitmap_data_get_transparent;
		static Dynamic nme_bitmap_data_set_flags;
		static Dynamic &nme_bitmap_data_set_flags_dyn() { return nme_bitmap_data_set_flags;}
		static Dynamic nme_bitmap_data_encode;
		static Dynamic &nme_bitmap_data_encode_dyn() { return nme_bitmap_data_encode;}
		static Dynamic nme_bitmap_data_dump_bits;
		static Dynamic &nme_bitmap_data_dump_bits_dyn() { return nme_bitmap_data_dump_bits;}
		static Dynamic nme_bitmap_data_noise;
		static Dynamic &nme_bitmap_data_noise_dyn() { return nme_bitmap_data_noise;}
		static Dynamic nme_bitmap_data_flood_fill;
		static Dynamic &nme_bitmap_data_flood_fill_dyn() { return nme_bitmap_data_flood_fill;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_BitmapData */ 
