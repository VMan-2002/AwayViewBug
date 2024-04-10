#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#define INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,ShadowCasterCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace lights{
namespace shadowmaps{


class HXCPP_CLASS_ATTRIBUTES ShadowMapperBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShadowMapperBase_obj OBJ_;
		ShadowMapperBase_obj();

	public:
		enum { _hx_ClassId = 0x7bcfe5e1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.lights.shadowmaps.ShadowMapperBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.lights.shadowmaps.ShadowMapperBase"); }
		static ::hx::ObjectPtr< ShadowMapperBase_obj > __new();
		static ::hx::ObjectPtr< ShadowMapperBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShadowMapperBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShadowMapperBase",92,9c,10,b4); }

		 ::away3d::core::traverse::ShadowCasterCollector _casterCollector;
		 ::away3d::textures::TextureProxyBase _depthMap;
		int _depthMapSize;
		 ::away3d::lights::LightBase _light;
		bool _explicitDepthMap;
		bool _autoUpdateShadows;
		bool _shadowsInvalid;
		 ::away3d::core::traverse::ShadowCasterCollector createCasterCollector();
		::Dynamic createCasterCollector_dyn();

		bool get_autoUpdateShadows();
		::Dynamic get_autoUpdateShadows_dyn();

		bool set_autoUpdateShadows(bool value);
		::Dynamic set_autoUpdateShadows_dyn();

		void updateShadows();
		::Dynamic updateShadows_dyn();

		void setDepthMap( ::away3d::textures::TextureProxyBase depthMap);
		::Dynamic setDepthMap_dyn();

		 ::away3d::lights::LightBase get_light();
		::Dynamic get_light_dyn();

		 ::away3d::lights::LightBase set_light( ::away3d::lights::LightBase value);
		::Dynamic set_light_dyn();

		 ::away3d::textures::TextureProxyBase get_depthMap();
		::Dynamic get_depthMap_dyn();

		int get_depthMapSize();
		::Dynamic get_depthMapSize_dyn();

		int set_depthMapSize(int value);
		::Dynamic set_depthMapSize_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		virtual  ::away3d::textures::TextureProxyBase createDepthTexture();
		::Dynamic createDepthTexture_dyn();

		void renderDepthMap( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::core::traverse::EntityCollector entityCollector, ::away3d::core::render::DepthRenderer renderer);
		::Dynamic renderDepthMap_dyn();

		virtual void updateDepthProjection( ::away3d::cameras::Camera3D viewCamera);
		::Dynamic updateDepthProjection_dyn();

		virtual void drawDepthMap( ::openfl::display3D::textures::TextureBase target, ::away3d::containers::Scene3D scene, ::away3d::core::render::DepthRenderer renderer);
		::Dynamic drawDepthMap_dyn();

};

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps

#endif /* INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase */ 
