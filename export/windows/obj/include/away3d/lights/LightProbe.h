#ifndef INCLUDED_away3d_lights_LightProbe
#define INCLUDED_away3d_lights_LightProbe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES LightProbe_obj : public  ::away3d::lights::LightBase_obj
{
	public:
		typedef  ::away3d::lights::LightBase_obj super;
		typedef LightProbe_obj OBJ_;
		LightProbe_obj();

	public:
		enum { _hx_ClassId = 0x3e60e0da };

		void __construct( ::away3d::textures::CubeTextureBase diffuseMap, ::away3d::textures::CubeTextureBase specularMap);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.lights.LightProbe")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.lights.LightProbe"); }
		static ::hx::ObjectPtr< LightProbe_obj > __new( ::away3d::textures::CubeTextureBase diffuseMap, ::away3d::textures::CubeTextureBase specularMap);
		static ::hx::ObjectPtr< LightProbe_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::textures::CubeTextureBase diffuseMap, ::away3d::textures::CubeTextureBase specularMap);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LightProbe_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LightProbe",9a,f6,46,40); }

		 ::away3d::textures::CubeTextureBase _diffuseMap;
		 ::away3d::textures::CubeTextureBase _specularMap;
		 ::away3d::core::partition::EntityNode createEntityPartitionNode();

		 ::away3d::textures::CubeTextureBase get_diffuseMap();
		::Dynamic get_diffuseMap_dyn();

		 ::away3d::textures::CubeTextureBase set_diffuseMap( ::away3d::textures::CubeTextureBase value);
		::Dynamic set_diffuseMap_dyn();

		 ::away3d::textures::CubeTextureBase get_specularMap();
		::Dynamic get_specularMap_dyn();

		 ::away3d::textures::CubeTextureBase set_specularMap( ::away3d::textures::CubeTextureBase value);
		::Dynamic set_specularMap_dyn();

		void updateBounds();

		 ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume();

		 ::openfl::geom::Matrix3D getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target);

};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_LightProbe */ 
