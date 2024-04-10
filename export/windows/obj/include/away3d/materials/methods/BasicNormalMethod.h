#ifndef INCLUDED_away3d_materials_methods_BasicNormalMethod
#define INCLUDED_away3d_materials_methods_BasicNormalMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES BasicNormalMethod_obj : public  ::away3d::materials::methods::ShadingMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::ShadingMethodBase_obj super;
		typedef BasicNormalMethod_obj OBJ_;
		BasicNormalMethod_obj();

	public:
		enum { _hx_ClassId = 0x06572da9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.BasicNormalMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.BasicNormalMethod"); }
		static ::hx::ObjectPtr< BasicNormalMethod_obj > __new();
		static ::hx::ObjectPtr< BasicNormalMethod_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BasicNormalMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BasicNormalMethod",16,f8,7d,cb); }

		 ::away3d::textures::Texture2DBase _texture;
		bool _useTexture;
		 ::away3d::materials::compilation::ShaderRegisterElement _normalTextureRegister;
		void initVO( ::away3d::materials::methods::MethodVO vo);

		bool get_tangentSpace();
		::Dynamic get_tangentSpace_dyn();

		bool get_hasOutput();
		::Dynamic get_hasOutput_dyn();

		void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);

		 ::away3d::textures::Texture2DBase get_normalMap();
		::Dynamic get_normalMap_dyn();

		 ::away3d::textures::Texture2DBase set_normalMap( ::away3d::textures::Texture2DBase value);
		::Dynamic set_normalMap_dyn();

		void cleanCompilationData();

		void dispose();

		void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

		::String getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);
		::Dynamic getFragmentCode_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_BasicNormalMethod */ 
