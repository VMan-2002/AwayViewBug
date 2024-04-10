#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#define INCLUDED_away3d_materials_SinglePassMaterialBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SinglePassMaterialBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS3(away3d,materials,passes,CompiledPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SuperShaderPass)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)

namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES SinglePassMaterialBase_obj : public  ::away3d::materials::MaterialBase_obj
{
	public:
		typedef  ::away3d::materials::MaterialBase_obj super;
		typedef SinglePassMaterialBase_obj OBJ_;
		SinglePassMaterialBase_obj();

	public:
		enum { _hx_ClassId = 0x488e125e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.SinglePassMaterialBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.SinglePassMaterialBase"); }
		static ::hx::ObjectPtr< SinglePassMaterialBase_obj > __new();
		static ::hx::ObjectPtr< SinglePassMaterialBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SinglePassMaterialBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SinglePassMaterialBase",91,7d,af,14); }

		 ::away3d::materials::passes::SuperShaderPass _screenPass;
		bool _alphaBlending;
		bool get_enableLightFallOff();
		::Dynamic get_enableLightFallOff_dyn();

		bool set_enableLightFallOff(bool value);
		::Dynamic set_enableLightFallOff_dyn();

		Float get_alphaThreshold();
		::Dynamic get_alphaThreshold_dyn();

		Float set_alphaThreshold(Float value);
		::Dynamic set_alphaThreshold_dyn();

		 ::Dynamic set_blendMode( ::Dynamic value);

		 ::Dynamic set_depthCompareMode( ::Dynamic value);

		void activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  distanceBased);

		int get_specularLightSources();
		::Dynamic get_specularLightSources_dyn();

		int set_specularLightSources(int value);
		::Dynamic set_specularLightSources_dyn();

		int get_diffuseLightSources();
		::Dynamic get_diffuseLightSources_dyn();

		int set_diffuseLightSources(int value);
		::Dynamic set_diffuseLightSources_dyn();

		bool get_requiresBlending();

		 ::openfl::geom::ColorTransform get_colorTransform();
		::Dynamic get_colorTransform_dyn();

		 ::openfl::geom::ColorTransform set_colorTransform( ::openfl::geom::ColorTransform value);
		::Dynamic set_colorTransform_dyn();

		 ::away3d::materials::methods::BasicAmbientMethod get_ambientMethod();
		::Dynamic get_ambientMethod_dyn();

		 ::away3d::materials::methods::BasicAmbientMethod set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value);
		::Dynamic set_ambientMethod_dyn();

		 ::away3d::materials::methods::ShadowMapMethodBase get_shadowMethod();
		::Dynamic get_shadowMethod_dyn();

		 ::away3d::materials::methods::ShadowMapMethodBase set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value);
		::Dynamic set_shadowMethod_dyn();

		 ::away3d::materials::methods::BasicDiffuseMethod get_diffuseMethod();
		::Dynamic get_diffuseMethod_dyn();

		 ::away3d::materials::methods::BasicDiffuseMethod set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value);
		::Dynamic set_diffuseMethod_dyn();

		 ::away3d::materials::methods::BasicNormalMethod get_normalMethod();
		::Dynamic get_normalMethod_dyn();

		 ::away3d::materials::methods::BasicNormalMethod set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value);
		::Dynamic set_normalMethod_dyn();

		 ::away3d::materials::methods::BasicSpecularMethod get_specularMethod();
		::Dynamic get_specularMethod_dyn();

		 ::away3d::materials::methods::BasicSpecularMethod set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value);
		::Dynamic set_specularMethod_dyn();

		void addMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic addMethod_dyn();

		int get_numMethods();
		::Dynamic get_numMethods_dyn();

		bool hasMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic hasMethod_dyn();

		 ::away3d::materials::methods::EffectMethodBase getMethodAt(int index);
		::Dynamic getMethodAt_dyn();

		void addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index);
		::Dynamic addMethodAt_dyn();

		void removeMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic removeMethod_dyn();

		bool set_mipmap(bool value);

		 ::away3d::textures::Texture2DBase get_normalMap();
		::Dynamic get_normalMap_dyn();

		 ::away3d::textures::Texture2DBase set_normalMap( ::away3d::textures::Texture2DBase value);
		::Dynamic set_normalMap_dyn();

		 ::away3d::textures::Texture2DBase get_specularMap();
		::Dynamic get_specularMap_dyn();

		 ::away3d::textures::Texture2DBase set_specularMap( ::away3d::textures::Texture2DBase value);
		::Dynamic set_specularMap_dyn();

		Float get_gloss();
		::Dynamic get_gloss_dyn();

		Float set_gloss(Float value);
		::Dynamic set_gloss_dyn();

		Float get_ambient();
		::Dynamic get_ambient_dyn();

		Float set_ambient(Float value);
		::Dynamic set_ambient_dyn();

		Float get_specular();
		::Dynamic get_specular_dyn();

		Float set_specular(Float value);
		::Dynamic set_specular_dyn();

		int get_ambientColor();
		::Dynamic get_ambientColor_dyn();

		int set_ambientColor(int value);
		::Dynamic set_ambientColor_dyn();

		int get_specularColor();
		::Dynamic get_specularColor_dyn();

		int set_specularColor(int value);
		::Dynamic set_specularColor_dyn();

		bool get_alphaBlending();
		::Dynamic get_alphaBlending_dyn();

		bool set_alphaBlending(bool value);
		::Dynamic set_alphaBlending_dyn();

		void updateMaterial( ::openfl::display3D::Context3D context);

		 ::away3d::materials::lightpickers::LightPickerBase set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value);

};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_SinglePassMaterialBase */ 
