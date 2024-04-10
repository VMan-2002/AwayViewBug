#ifndef INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper
#define INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,CubeMapShadowMapper)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace lights{
namespace shadowmaps{


class HXCPP_CLASS_ATTRIBUTES CubeMapShadowMapper_obj : public  ::away3d::lights::shadowmaps::ShadowMapperBase_obj
{
	public:
		typedef  ::away3d::lights::shadowmaps::ShadowMapperBase_obj super;
		typedef CubeMapShadowMapper_obj OBJ_;
		CubeMapShadowMapper_obj();

	public:
		enum { _hx_ClassId = 0x507f9f35 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.lights.shadowmaps.CubeMapShadowMapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.lights.shadowmaps.CubeMapShadowMapper"); }
		static ::hx::ObjectPtr< CubeMapShadowMapper_obj > __new();
		static ::hx::ObjectPtr< CubeMapShadowMapper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CubeMapShadowMapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CubeMapShadowMapper",e8,26,02,86); }

		 ::openfl::_Vector::ObjectVector _depthCameras;
		 ::openfl::_Vector::ObjectVector _lenses;
		 ::openfl::_Vector::BoolVector _needsRender;
		void initCameras();
		::Dynamic initCameras_dyn();

		void addCamera(Float rotationX,Float rotationY,Float rotationZ);
		::Dynamic addCamera_dyn();

		 ::away3d::textures::TextureProxyBase createDepthTexture();

		void updateDepthProjection( ::away3d::cameras::Camera3D viewCamera);

		void drawDepthMap( ::openfl::display3D::textures::TextureBase target, ::away3d::containers::Scene3D scene, ::away3d::core::render::DepthRenderer renderer);

};

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps

#endif /* INCLUDED_away3d_lights_shadowmaps_CubeMapShadowMapper */ 
