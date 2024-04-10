#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#define INCLUDED_away3d_materials_methods_LightingMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES LightingMethodBase_obj : public  ::away3d::materials::methods::ShadingMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef LightingMethodBase_obj OBJ_;
		LightingMethodBase_obj();

	public:
		enum { _hx_ClassId = 0x011e2747 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.LightingMethodBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.LightingMethodBase"); }
		static ::hx::ObjectPtr< LightingMethodBase_obj > __new();
		static ::hx::ObjectPtr< LightingMethodBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LightingMethodBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LightingMethodBase",9e,94,52,c3); }

		 ::Dynamic _modulateMethod;
		virtual ::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);
		::Dynamic getFragmentPreLightingCode_dyn();

		virtual ::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache);
		::Dynamic getFragmentCodePerLight_dyn();

		virtual ::String getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache);
		::Dynamic getFragmentCodePerProbe_dyn();

		virtual ::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);
		::Dynamic getFragmentPostLightingCode_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_LightingMethodBase */ 
