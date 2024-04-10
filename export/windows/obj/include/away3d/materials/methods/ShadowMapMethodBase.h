#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#define INCLUDED_away3d_materials_methods_ShadowMapMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES ShadowMapMethodBase_obj : public  ::away3d::materials::methods::ShadingMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef ShadowMapMethodBase_obj OBJ_;
		ShadowMapMethodBase_obj();

	public:
		enum { _hx_ClassId = 0x042d8f49 };

		void __construct( ::away3d::lights::LightBase castingLight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.ShadowMapMethodBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.ShadowMapMethodBase"); }
		static ::hx::ObjectPtr< ShadowMapMethodBase_obj > __new( ::away3d::lights::LightBase castingLight);
		static ::hx::ObjectPtr< ShadowMapMethodBase_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::lights::LightBase castingLight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShadowMapMethodBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ShadowMapMethodBase",2e,0d,44,e7); }

		 ::away3d::lights::LightBase _castingLight;
		 ::away3d::lights::shadowmaps::ShadowMapperBase _shadowMapper;
		Float _epsilon;
		Float _alpha;
		::String get_assetType();
		::Dynamic get_assetType_dyn();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		 ::away3d::lights::LightBase get_castingLight();
		::Dynamic get_castingLight_dyn();

		Float get_epsilon();
		::Dynamic get_epsilon_dyn();

		Float set_epsilon(Float value);
		::Dynamic set_epsilon_dyn();

		::String getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);
		::Dynamic getFragmentCode_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ShadowMapMethodBase */ 
