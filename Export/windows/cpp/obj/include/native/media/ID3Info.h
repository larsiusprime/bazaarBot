#ifndef INCLUDED_native_media_ID3Info
#define INCLUDED_native_media_ID3Info

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,media,ID3Info)
namespace native{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  ID3Info_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ID3Info_obj OBJ_;
		ID3Info_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ID3Info_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ID3Info_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ID3Info"); }

		::String year;
		::String track;
		::String songName;
		::String genre;
		::String comment;
		::String artist;
		::String album;
};

} // end namespace native
} // end namespace media

#endif /* INCLUDED_native_media_ID3Info */ 
