#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#define INCLUDED_away3d_materials_methods_BasicDiffuseMethod

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
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
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


class HXCPP_CLASS_ATTRIBUTES BasicDiffuseMethod_obj : public  ::away3d::materials::methods::LightingMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::LightingMethodBase_obj super;
		typedef BasicDiffuseMethod_obj OBJ_;
		BasicDiffuseMethod_obj();

	public:
		enum { _hx_ClassId = 0x0446cf5e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.BasicDiffuseMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.BasicDiffuseMethod"); }
		static ::hx::ObjectPtr< BasicDiffuseMethod_obj > __new();
		static ::hx::ObjectPtr< BasicDiffuseMethod_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BasicDiffuseMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BasicDiffuseMethod",75,b6,d9,6f); }

		bool _useAmbientTexture;
		bool _useTexture;
		 ::away3d::materials::compilation::ShaderRegisterElement _totalLightColorReg;
		 ::away3d::materials::compilation::ShaderRegisterElement _diffuseInputRegister;
		 ::away3d::textures::Texture2DBase _texture;
		int _diffuseColor;
		Float _diffuseR;
		Float _diffuseG;
		Float _diffuseB;
		Float _diffuseA;
		 ::away3d::materials::compilation::ShaderRegisterElement _shadowRegister;
		Float _alphaThreshold;
		bool _isFirstLight;
		bool get_useAmbientTexture();
		::Dynamic get_useAmbientTexture_dyn();

		bool set_useAmbientTexture(bool value);
		::Dynamic set_useAmbientTexture_dyn();

		void initVO( ::away3d::materials::methods::MethodVO vo);

		void generateMip( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic generateMip_dyn();

		Float get_diffuseAlpha();
		::Dynamic get_diffuseAlpha_dyn();

		Float set_diffuseAlpha(Float value);
		::Dynamic set_diffuseAlpha_dyn();

		int get_diffuseColor();
		::Dynamic get_diffuseColor_dyn();

		int set_diffuseColor(int diffuseColor);
		::Dynamic set_diffuseColor_dyn();

		 ::away3d::textures::Texture2DBase get_texture();
		::Dynamic get_texture_dyn();

		 ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		::Dynamic set_texture_dyn();

		Float get_alphaThreshold();
		::Dynamic get_alphaThreshold_dyn();

		Float set_alphaThreshold(Float value);
		::Dynamic set_alphaThreshold_dyn();

		void dispose();

		void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		void cleanCompilationData();

		::String getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache);

		::String getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);

		::String applyShadow( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);
		::Dynamic applyShadow_dyn();

		void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

		void updateDiffuse();
		::Dynamic updateDiffuse_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement set_shadowRegister( ::away3d::materials::compilation::ShaderRegisterElement value);
		::Dynamic set_shadowRegister_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicDiffuseMethod */ 
