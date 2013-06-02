#ifndef INCLUDED_native_media_SoundTransform
#define INCLUDED_native_media_SoundTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,media,SoundTransform)
namespace native{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundTransform_obj OBJ_;
		SoundTransform_obj();
		Void __construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning);

	public:
		static hx::ObjectPtr< SoundTransform_obj > __new(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundTransform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundTransform"); }

		virtual ::native::media::SoundTransform clone( );
		Dynamic clone_dyn();

		Float volume;
		Float pan;
};

} // end namespace native
} // end namespace media

#endif /* INCLUDED_native_media_SoundTransform */ 
