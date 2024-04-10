#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#define INCLUDED_away3d_materials_passes_CompiledPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,ShadingMethodEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShaderMethodSetup)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS3(away3d,materials,passes,CompiledPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES CompiledPass_obj : public  ::away3d::materials::passes::MaterialPassBase_obj
{
	public:
		typedef  ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef CompiledPass_obj OBJ_;
		CompiledPass_obj();

	public:
		enum { _hx_ClassId = 0x31c7172e };

		void __construct( ::away3d::materials::MaterialBase material);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.passes.CompiledPass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.passes.CompiledPass"); }
		static ::hx::ObjectPtr< CompiledPass_obj > __new( ::away3d::materials::MaterialBase material);
		static ::hx::ObjectPtr< CompiledPass_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::materials::MaterialBase material);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompiledPass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompiledPass",22,99,e4,6a); }

		 ::openfl::_Vector::ObjectVector _passes;
		bool _passesDirty;
		int _specularLightSources;
		int _diffuseLightSources;
		::String _vertexCode;
		::String _fragmentLightCode;
		::String _framentPostLightCode;
		 ::openfl::_Vector::FloatVector _vertexConstantData;
		 ::openfl::_Vector::FloatVector _fragmentConstantData;
		int _commonsDataIndex;
		int _probeWeightsIndex;
		int _uvBufferIndex;
		int _secondaryUVBufferIndex;
		int _normalBufferIndex;
		int _tangentBufferIndex;
		int _sceneMatrixIndex;
		int _sceneNormalMatrixIndex;
		int _lightFragmentConstantIndex;
		int _cameraPositionIndex;
		int _uvTransformIndex;
		int _uvTransformIndex2;
		 ::openfl::_Vector::IntVector _lightProbeDiffuseIndices;
		 ::openfl::_Vector::IntVector _lightProbeSpecularIndices;
		Float _ambientLightR;
		Float _ambientLightG;
		Float _ambientLightB;
		 ::away3d::materials::compilation::ShaderCompiler _compiler;
		 ::away3d::materials::methods::ShaderMethodSetup _methodSetup;
		bool _usingSpecularMethod;
		bool _usesNormals;
		bool _preserveAlpha;
		bool _animateUVs;
		bool _animateUVs2;
		int _numPointLights;
		int _numDirectionalLights;
		int _numLightProbes;
		bool _enableLightFallOff;
		bool _forceSeparateMVP;
		bool get_enableLightFallOff();
		::Dynamic get_enableLightFallOff_dyn();

		bool set_enableLightFallOff(bool value);
		::Dynamic set_enableLightFallOff_dyn();

		bool get_forceSeparateMVP();
		::Dynamic get_forceSeparateMVP_dyn();

		bool set_forceSeparateMVP(bool value);
		::Dynamic set_forceSeparateMVP_dyn();

		int get_numPointLights();
		::Dynamic get_numPointLights_dyn();

		int get_numDirectionalLights();
		::Dynamic get_numDirectionalLights_dyn();

		int get_numLightProbes();
		::Dynamic get_numLightProbes_dyn();

		void updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		void reset(::String profile);
		::Dynamic reset_dyn();

		void updateUsedOffsets();
		::Dynamic updateUsedOffsets_dyn();

		void initConstantData();
		::Dynamic initConstantData_dyn();

		void initCompiler(::String profile);
		::Dynamic initCompiler_dyn();

		virtual  ::away3d::materials::compilation::ShaderCompiler createCompiler(::String profile);
		::Dynamic createCompiler_dyn();

		void updateShaderProperties();
		::Dynamic updateShaderProperties_dyn();

		void updateRegisterIndices();
		::Dynamic updateRegisterIndices_dyn();

		bool get_preserveAlpha();
		::Dynamic get_preserveAlpha_dyn();

		bool set_preserveAlpha(bool value);
		::Dynamic set_preserveAlpha_dyn();

		bool get_animateUVs();
		::Dynamic get_animateUVs_dyn();

		bool set_animateUVs(bool value);
		::Dynamic set_animateUVs_dyn();

		bool get_animateUVs2();
		::Dynamic get_animateUVs2_dyn();

		bool set_animateUVs2(bool value);
		::Dynamic set_animateUVs2_dyn();

		bool set_mipmap(bool value);

		 ::Dynamic set_anisotropy( ::Dynamic value);

		 ::away3d::textures::Texture2DBase get_normalMap();
		::Dynamic get_normalMap_dyn();

		 ::away3d::textures::Texture2DBase set_normalMap( ::away3d::textures::Texture2DBase value);
		::Dynamic set_normalMap_dyn();

		 ::away3d::materials::methods::BasicNormalMethod get_normalMethod();
		::Dynamic get_normalMethod_dyn();

		 ::away3d::materials::methods::BasicNormalMethod set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value);
		::Dynamic set_normalMethod_dyn();

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

		 ::away3d::materials::methods::BasicSpecularMethod get_specularMethod();
		::Dynamic get_specularMethod_dyn();

		 ::away3d::materials::methods::BasicSpecularMethod set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value);
		::Dynamic set_specularMethod_dyn();

		void init();
		::Dynamic init_dyn();

		void dispose();

		void invalidateShaderProgram(::hx::Null< bool >  updateMaterial);

		virtual void addPassesFromMethods();
		::Dynamic addPassesFromMethods_dyn();

		void addPasses( ::openfl::_Vector::ObjectVector passes);
		::Dynamic addPasses_dyn();

		void initUVTransformData();
		::Dynamic initUVTransformData_dyn();

		void initUVTransformData2();
		::Dynamic initUVTransformData2_dyn();

		void initCommonsData();
		::Dynamic initCommonsData_dyn();

		void cleanUp();
		::Dynamic cleanUp_dyn();

		virtual void updateMethodConstants();
		::Dynamic updateMethodConstants_dyn();

		virtual void updateLightConstants();
		::Dynamic updateLightConstants_dyn();

		virtual void updateProbes( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic updateProbes_dyn();

		void onShaderInvalidated( ::away3d::events::ShadingMethodEvent event);
		::Dynamic onShaderInvalidated_dyn();

		::String getVertexCode();

		::String getFragmentCode(::String animatorCode);

		virtual void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);

		void render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection);

		bool usesProbes();
		::Dynamic usesProbes_dyn();

		bool usesLights();
		::Dynamic usesLights_dyn();

		virtual void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);

		int get_specularLightSources();
		::Dynamic get_specularLightSources_dyn();

		int set_specularLightSources(int value);
		::Dynamic set_specularLightSources_dyn();

		int get_diffuseLightSources();
		::Dynamic get_diffuseLightSources_dyn();

		int set_diffuseLightSources(int value);
		::Dynamic set_diffuseLightSources_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_CompiledPass */ 
