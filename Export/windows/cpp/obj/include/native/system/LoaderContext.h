#ifndef INCLUDED_native_system_LoaderContext
#define INCLUDED_native_system_LoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,system,ApplicationDomain)
HX_DECLARE_CLASS2(native,system,LoaderContext)
HX_DECLARE_CLASS2(native,system,SecurityDomain)
namespace native{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  LoaderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LoaderContext_obj OBJ_;
		LoaderContext_obj();
		Void __construct(hx::Null< bool >  __o_checkPolicyFile,::native::system::ApplicationDomain applicationDomain,::native::system::SecurityDomain securityDomain);

	public:
		static hx::ObjectPtr< LoaderContext_obj > __new(hx::Null< bool >  __o_checkPolicyFile,::native::system::ApplicationDomain applicationDomain,::native::system::SecurityDomain securityDomain);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LoaderContext_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LoaderContext"); }

		::native::system::SecurityDomain securityDomain;
		bool checkPolicyFile;
		::native::system::ApplicationDomain applicationDomain;
		bool allowLoadBytesCodeExecution;
		bool allowCodeImport;
};

} // end namespace native
} // end namespace system

#endif /* INCLUDED_native_system_LoaderContext */ 
