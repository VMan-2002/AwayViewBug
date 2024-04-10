#ifndef INCLUDED_away3d_materials_methods_BasicSpecularMethod
#define INCLUDED_away3d_materials_methods_BasicSpecularMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES BasicSpecularMethod_obj : public  ::away3d::materials::methods::LightingMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::LightingMethodBase_obj super;
		typedef BasicSpecularMethod_obj OBJ_;
		BasicSpecularMethod_obj();

	public:
		enum { _hx_ClassId = 0x3d2c834d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.BasicSpecularMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.BasicSpecularMethod"); }
		static ::hx::ObjectPtr< BasicSpecularMethod_obj > __new();
		static ::hx::ObjectPtr< BasicSpecularMethod_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BasicSpecularMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BasicSpecularMethod",32,01,43,20); }

		bool _useTexture;
		 ::away3d::materials::compilation::ShaderRegisterElement _totalLightColorReg;
		 ::away3d::materials::compilation::ShaderRegisterElement _specularTextureRegister;
		 ::away3d::materials::compilation::ShaderRegisterElement _specularTexData;
		 ::away3d::materials::compilation::ShaderRegisterElement _specularDataRegister;
		 ::away3d::textures::Texture2DBase _texture;
		Float _gloss;
		Float _specular;
		int _specularColor;
		Float _specularR;
		Float _specularG;
		Float _specularB;
		 ::away3d::materials::compilation::ShaderRegisterElement _shadowRegister;
		bool _isFirstLight;
		void initVO( ::away3d::materials::methods::MethodVO vo);

		Float get_gloss();
		::Dynamic get_gloss_dyn();

		Float set_gloss(Float value);
		::Dynamic set_gloss_dyn();

		Float get_specular();
		::Dynamic get_specular_dyn();

		Float set_specular(Float value);
		::Dynamic set_specular_dyn();

		int get_specularColor();
		::Dynamic get_specularColor_dyn();

		int set_specularColor(int value);
		::Dynamic set_specularColor_dyn();

		 ::away3d::textures::Texture2DBase get_texture();
		::Dynamic get_texture_dyn();

		 ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		::Dynamic set_texture_dyn();

		void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		void cleanCompilationData();

		::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);

		void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

		void updateSpecular();
		::Dynamic updateSpecular_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement shadowReg);
		::Dynamic set_shadowRegister_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicSpecularMethod */ 
