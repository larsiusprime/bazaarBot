#ifndef INCLUDED_native_display_IGraphicsData
#define INCLUDED_native_display_IGraphicsData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,IGraphicsData)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IGraphicsData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IGraphicsData_obj OBJ_;
		IGraphicsData_obj();
		Void __construct(Dynamic inHandle);

	public:
		static hx::ObjectPtr< IGraphicsData_obj > __new(Dynamic inHandle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IGraphicsData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IGraphicsData"); }

		Dynamic nmeHandle;
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_IGraphicsData */ 
