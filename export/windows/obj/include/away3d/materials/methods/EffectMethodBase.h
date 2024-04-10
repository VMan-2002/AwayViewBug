#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#define INCLUDED_away3d_materials_methods_EffectMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES EffectMethodBase_obj : public  ::away3d::materials::methods::ShadingMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef EffectMethodBase_obj OBJ_;
		EffectMethodBase_obj();

	public:
		enum { _hx_ClassId = 0x781a5ed4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.EffectMethodBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.EffectMethodBase"); }
		static ::hx::ObjectPtr< EffectMethodBase_obj > __new();
		static ::hx::ObjectPtr< EffectMethodBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EffectMethodBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("EffectMethodBase",a3,09,df,f4); }

		::String get_assetType();
		::Dynamic get_assetType_dyn();

		virtual ::String getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);
		::Dynamic getFragmentCode_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_EffectMethodBase */ 
