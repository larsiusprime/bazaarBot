#ifndef INCLUDED_native_system_ApplicationDomain
#define INCLUDED_native_system_ApplicationDomain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,system,ApplicationDomain)
namespace native{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  ApplicationDomain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ApplicationDomain_obj OBJ_;
		ApplicationDomain_obj();
		Void __construct(::native::system::ApplicationDomain parentDomain);

	public:
		static hx::ObjectPtr< ApplicationDomain_obj > __new(::native::system::ApplicationDomain parentDomain);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ApplicationDomain_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ApplicationDomain"); }

		virtual bool hasDefinition( ::String name);
		Dynamic hasDefinition_dyn();

		virtual Dynamic getDefinition( ::String name);
		Dynamic getDefinition_dyn();

		::native::system::ApplicationDomain parentDomain;
		static ::native::system::ApplicationDomain currentDomain;
};

} // end namespace native
} // end namespace system

#endif /* INCLUDED_native_system_ApplicationDomain */ 
