#ifndef INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper
#define INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS3(away3d,cameras,lenses,FreeMatrixLens)
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,DirectionalShadowMapper)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace lights{
namespace shadowmaps{


class HXCPP_CLASS_ATTRIBUTES DirectionalShadowMapper_obj : public  ::away3d::lights::shadowmaps::ShadowMapperBase_obj
{
	public:
		typedef  ::away3d::lights::shadowmaps::ShadowMapperBase_obj super;
		typedef DirectionalShadowMapper_obj OBJ_;
		DirectionalShadowMapper_obj();

	public:
		enum { _hx_ClassId = 0x2aaf44b0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.lights.shadowmaps.DirectionalShadowMapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.lights.shadowmaps.DirectionalShadowMapper"); }
		static ::hx::ObjectPtr< DirectionalShadowMapper_obj > __new();
		static ::hx::ObjectPtr< DirectionalShadowMapper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DirectionalShadowMapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DirectionalShadowMapper",ab,27,dd,24); }

		 ::away3d::cameras::Camera3D _overallDepthCamera;
		 ::openfl::_Vector::FloatVector _localFrustum;
		Float _lightOffset;
		 ::openfl::geom::Matrix3D _matrix;
		 ::away3d::cameras::lenses::FreeMatrixLens _overallDepthLens;
		Float _snap;
		 ::openfl::_Vector::ObjectVector _cullPlanes;
		Float _minZ;
		Float _maxZ;
		Float get_snap();
		::Dynamic get_snap_dyn();

		Float set_snap(Float value);
		::Dynamic set_snap_dyn();

		Float get_lightOffset();
		::Dynamic get_lightOffset_dyn();

		Float set_lightOffset(Float value);
		::Dynamic set_lightOffset_dyn();

		 ::openfl::geom::Matrix3D get_depthProjection();
		::Dynamic get_depthProjection_dyn();

		Float get_depth();
		::Dynamic get_depth_dyn();

		void drawDepthMap( ::openfl::display3D::textures::TextureBase target, ::away3d::containers::Scene3D scene, ::away3d::core::render::DepthRenderer renderer);

		void updateCullPlanes( ::away3d::cameras::Camera3D viewCamera);
		::Dynamic updateCullPlanes_dyn();

		void updateDepthProjection( ::away3d::cameras::Camera3D viewCamera);

		void updateProjectionFromFrustumCorners( ::away3d::cameras::Camera3D viewCamera, ::openfl::_Vector::FloatVector corners, ::openfl::geom::Matrix3D matrix);
		::Dynamic updateProjectionFromFrustumCorners_dyn();

};

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps

#endif /* INCLUDED_away3d_lights_shadowmaps_DirectionalShadowMapper */ 
