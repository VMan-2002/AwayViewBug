#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#define INCLUDED_away3d_materials_methods_BasicAmbientMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES BasicAmbientMethod_obj : public  ::away3d::materials::methods::ShadingMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef BasicAmbientMethod_obj OBJ_;
		BasicAmbientMethod_obj();

	public:
		enum { _hx_ClassId = 0x3e0c53f0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.BasicAmbientMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.BasicAmbientMethod"); }
		static ::hx::ObjectPtr< BasicAmbientMethod_obj > __new();
		static ::hx::ObjectPtr< BasicAmbientMethod_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BasicAmbientMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BasicAmbientMethod",ab,d9,aa,05); }

		bool _useTexture;
		 ::away3d::textures::Texture2DBase _texture;
		 ::away3d::materials::compilation::ShaderRegisterElement _ambientInputRegister;
		int _ambientColor;
		Float _ambientR;
		Float _ambientG;
		Float _ambientB;
		Float _ambient;
		Float _lightAmbientR;
		Float _lightAmbientG;
		Float _lightAmbientB;
		void initVO( ::away3d::materials::methods::MethodVO vo);

		void initConstants( ::away3d::materials::methods::MethodVO vo);

		Float get_ambient();
		::Dynamic get_ambient_dyn();

		Float set_ambient(Float value);
		::Dynamic set_ambient_dyn();

		int get_ambientColor();
		::Dynamic get_ambientColor_dyn();

		int set_ambientColor(int value);
		::Dynamic set_ambientColor_dyn();

		 ::away3d::textures::Texture2DBase get_texture();
		::Dynamic get_texture_dyn();

		 ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		::Dynamic set_texture_dyn();

		void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		void cleanCompilationData();

		::String getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);
		::Dynamic getFragmentCode_dyn();

		void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

		void updateAmbient();
		::Dynamic updateAmbient_dyn();

		void setRenderState( ::away3d::materials::methods::MethodVO vo,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicAmbientMethod */ 
