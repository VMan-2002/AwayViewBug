#ifndef INCLUDED_away3d_lights_LightBase
#define INCLUDED_away3d_lights_LightBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
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
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES LightBase_obj : public  ::away3d::entities::Entity_obj
{
	public:
		typedef  ::away3d::entities::Entity_obj super;
		typedef LightBase_obj OBJ_;
		LightBase_obj();

	public:
		enum { _hx_ClassId = 0x1e01c5a7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.lights.LightBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.lights.LightBase"); }
		static ::hx::ObjectPtr< LightBase_obj > __new();
		static ::hx::ObjectPtr< LightBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LightBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LightBase",e7,a7,01,5c); }

		int _color;
		Float _colorR;
		Float _colorG;
		Float _colorB;
		int _ambientColor;
		Float _ambient;
		Float _ambientR;
		Float _ambientG;
		Float _ambientB;
		Float _specular;
		Float _specularR;
		Float _specularG;
		Float _specularB;
		Float _diffuse;
		Float _diffuseR;
		Float _diffuseG;
		Float _diffuseB;
		bool _castsShadows;
		 ::away3d::lights::shadowmaps::ShadowMapperBase _shadowMapper;
		bool get_castsShadows();
		::Dynamic get_castsShadows_dyn();

		bool set_castsShadows(bool value);
		::Dynamic set_castsShadows_dyn();

		virtual  ::away3d::lights::shadowmaps::ShadowMapperBase createShadowMapper();
		::Dynamic createShadowMapper_dyn();

		Float get_specular();
		::Dynamic get_specular_dyn();

		Float set_specular(Float value);
		::Dynamic set_specular_dyn();

		Float get_diffuse();
		::Dynamic get_diffuse_dyn();

		Float set_diffuse(Float value);
		::Dynamic set_diffuse_dyn();

		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		Float get_ambient();
		::Dynamic get_ambient_dyn();

		Float set_ambient(Float value);
		::Dynamic set_ambient_dyn();

		int get_ambientColor();
		::Dynamic get_ambientColor_dyn();

		int set_ambientColor(int value);
		::Dynamic set_ambientColor_dyn();

		void updateAmbient();
		::Dynamic updateAmbient_dyn();

		virtual  ::openfl::geom::Matrix3D getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target);
		::Dynamic getObjectProjectionMatrix_dyn();

		virtual  ::away3d::core::partition::EntityNode createEntityPartitionNode();

		::String get_assetType();

		void updateSpecular();
		::Dynamic updateSpecular_dyn();

		void updateDiffuse();
		::Dynamic updateDiffuse_dyn();

		 ::away3d::lights::shadowmaps::ShadowMapperBase get_shadowMapper();
		::Dynamic get_shadowMapper_dyn();

		 ::away3d::lights::shadowmaps::ShadowMapperBase set_shadowMapper( ::away3d::lights::shadowmaps::ShadowMapperBase value);
		::Dynamic set_shadowMapper_dyn();

};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_LightBase */ 
