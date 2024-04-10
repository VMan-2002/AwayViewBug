#ifndef INCLUDED_away3d_materials_passes_SuperShaderPass
#define INCLUDED_away3d_materials_passes_SuperShaderPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,methods,ColorTransformMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,passes,CompiledPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SuperShaderPass)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)

namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES SuperShaderPass_obj : public  ::away3d::materials::passes::CompiledPass_obj
{
	public:
		typedef  ::away3d::materials::passes::CompiledPass_obj super;
		typedef SuperShaderPass_obj OBJ_;
		SuperShaderPass_obj();

	public:
		enum { _hx_ClassId = 0x437483a9 };

		void __construct( ::away3d::materials::MaterialBase material);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.passes.SuperShaderPass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.passes.SuperShaderPass"); }
		static ::hx::ObjectPtr< SuperShaderPass_obj > __new( ::away3d::materials::MaterialBase material);
		static ::hx::ObjectPtr< SuperShaderPass_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::materials::MaterialBase material);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SuperShaderPass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SuperShaderPass",d1,9b,30,4e); }

		bool _includeCasters;
		bool _ignoreLights;
		 ::away3d::materials::compilation::ShaderCompiler createCompiler(::String profile);

		bool get_includeCasters();
		::Dynamic get_includeCasters_dyn();

		bool set_includeCasters(bool value);
		::Dynamic set_includeCasters_dyn();

		 ::openfl::geom::ColorTransform get_colorTransform();
		::Dynamic get_colorTransform_dyn();

		 ::openfl::geom::ColorTransform set_colorTransform( ::openfl::geom::ColorTransform value);
		::Dynamic set_colorTransform_dyn();

		 ::away3d::materials::methods::ColorTransformMethod get_colorTransformMethod();
		::Dynamic get_colorTransformMethod_dyn();

		 ::away3d::materials::methods::ColorTransformMethod set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value);
		::Dynamic set_colorTransformMethod_dyn();

		void addMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic addMethod_dyn();

		int numMethods;
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

		void updateLights();

		void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);

		void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		void addPassesFromMethods();

		bool usesProbesForSpecular();
		::Dynamic usesProbesForSpecular_dyn();

		bool usesProbesForDiffuse();
		::Dynamic usesProbesForDiffuse_dyn();

		void updateMethodConstants();

		void updateLightConstants();

		void updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		bool set_ignoreLights(bool ignoreLights);
		::Dynamic set_ignoreLights_dyn();

		bool get_ignoreLights();
		::Dynamic get_ignoreLights_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_SuperShaderPass */ 
