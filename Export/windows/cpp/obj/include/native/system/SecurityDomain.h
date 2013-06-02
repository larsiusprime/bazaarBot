#ifndef INCLUDED_native_system_SecurityDomain
#define INCLUDED_native_system_SecurityDomain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,system,SecurityDomain)
namespace native{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  SecurityDomain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SecurityDomain_obj OBJ_;
		SecurityDomain_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SecurityDomain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SecurityDomain_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SecurityDomain"); }

		static ::native::system::SecurityDomain currentDomain;
};

} // end namespace native
} // end namespace system

#endif /* INCLUDED_native_system_SecurityDomain */ 
