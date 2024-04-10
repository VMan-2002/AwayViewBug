#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#define INCLUDED_away3d_materials_compilation_ShaderCompiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,MethodDependencyCounter)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterData)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShaderMethodSetup)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES ShaderCompiler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderCompiler_obj OBJ_;
		ShaderCompiler_obj();

	public:
		enum { _hx_ClassId = 0x05340f9a };

		void __construct(::String profile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.compilation.ShaderCompiler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.compilation.ShaderCompiler"); }
		static ::hx::ObjectPtr< ShaderCompiler_obj > __new(::String profile);
		static ::hx::ObjectPtr< ShaderCompiler_obj > __alloc(::hx::Ctx *_hx_ctx,::String profile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderCompiler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderCompiler",04,dc,34,d9); }

		 ::away3d::materials::compilation::ShaderRegisterData _sharedRegisters;
		 ::away3d::materials::compilation::ShaderRegisterCache _registerCache;
		 ::away3d::materials::compilation::MethodDependencyCounter _dependencyCounter;
		 ::away3d::materials::methods::ShaderMethodSetup _methodSetup;
		bool _smooth;
		bool _repeat;
		bool _mipmap;
		 ::Dynamic _anisotropy;
		bool _enableLightFallOff;
		bool _preserveAlpha;
		bool _animateUVs;
		bool _animateUVs2;
		bool _alphaPremultiplied;
		 ::openfl::_Vector::FloatVector _vertexConstantData;
		 ::openfl::_Vector::FloatVector _fragmentConstantData;
		::String _vertexCode;
		::String _fragmentCode;
		::String _fragmentLightCode;
		::String _fragmentPostLightCode;
		int _commonsDataIndex;
		 ::openfl::_Vector::ObjectVector _animatableAttributes;
		 ::openfl::_Vector::ObjectVector _animationTargetRegisters;
		 ::openfl::_Vector::IntVector _lightProbeDiffuseIndices;
		 ::openfl::_Vector::IntVector _lightProbeSpecularIndices;
		int _uvBufferIndex;
		int _uvTransformIndex;
		int _uvTransformIndex2;
		int _secondaryUVBufferIndex;
		int _normalBufferIndex;
		int _tangentBufferIndex;
		int _lightFragmentConstantIndex;
		int _sceneMatrixIndex;
		int _sceneNormalMatrixIndex;
		int _cameraPositionIndex;
		int _probeWeightsIndex;
		int _specularLightSources;
		int _diffuseLightSources;
		int _numLights;
		int _numLightProbes;
		int _numPointLights;
		int _numDirectionalLights;
		int _numProbeRegisters;
		int _combinedLightSources;
		bool _usingSpecularMethod;
		bool _needUVAnimation;
		::String _UVTarget;
		::String _UVSource;
		::String _profile;
		bool _forceSeperateMVP;
		bool get_enableLightFallOff();
		::Dynamic get_enableLightFallOff_dyn();

		bool set_enableLightFallOff(bool value);
		::Dynamic set_enableLightFallOff_dyn();

		bool get_needUVAnimation();
		::Dynamic get_needUVAnimation_dyn();

		::String get_UVTarget();
		::Dynamic get_UVTarget_dyn();

		::String get_UVSource();
		::Dynamic get_UVSource_dyn();

		bool get_forceSeperateMVP();
		::Dynamic get_forceSeperateMVP_dyn();

		bool set_forceSeperateMVP(bool value);
		::Dynamic set_forceSeperateMVP_dyn();

		void initRegisterCache(::String profile);
		::Dynamic initRegisterCache_dyn();

		bool get_animateUVs();
		::Dynamic get_animateUVs_dyn();

		bool set_animateUVs(bool value);
		::Dynamic set_animateUVs_dyn();

		bool get_animateUVs2();
		::Dynamic get_animateUVs2_dyn();

		bool set_animateUVs2(bool value);
		::Dynamic set_animateUVs2_dyn();

		bool get_alphaPremultiplied();
		::Dynamic get_alphaPremultiplied_dyn();

		bool set_alphaPremultiplied(bool value);
		::Dynamic set_alphaPremultiplied_dyn();

		bool get_preserveAlpha();
		::Dynamic get_preserveAlpha_dyn();

		bool set_preserveAlpha(bool value);
		::Dynamic set_preserveAlpha_dyn();

		void setTextureSampling(bool smooth,bool repeat,bool mipmap, ::Dynamic anisotropy);
		::Dynamic setTextureSampling_dyn();

		void setConstantDataBuffers( ::openfl::_Vector::FloatVector vertexConstantData, ::openfl::_Vector::FloatVector fragmentConstantData);
		::Dynamic setConstantDataBuffers_dyn();

		 ::away3d::materials::methods::ShaderMethodSetup get_methodSetup();
		::Dynamic get_methodSetup_dyn();

		 ::away3d::materials::methods::ShaderMethodSetup set_methodSetup( ::away3d::materials::methods::ShaderMethodSetup value);
		::Dynamic set_methodSetup_dyn();

		void compile();
		::Dynamic compile_dyn();

		virtual void createNormalRegisters();
		::Dynamic createNormalRegisters_dyn();

		void compileMethodsCode();
		::Dynamic compileMethodsCode_dyn();

		virtual void compileLightingCode();
		::Dynamic compileLightingCode_dyn();

		virtual void compileViewDirCode();
		::Dynamic compileViewDirCode_dyn();

		virtual void compileNormalCode();
		::Dynamic compileNormalCode_dyn();

		void compileUVCode();
		::Dynamic compileUVCode_dyn();

		void compileSecondaryUVCode();
		::Dynamic compileSecondaryUVCode_dyn();

		void compileGlobalPositionCode();
		::Dynamic compileGlobalPositionCode_dyn();

		void compileProjectionCode();
		::Dynamic compileProjectionCode_dyn();

		void compileFragmentOutput();
		::Dynamic compileFragmentOutput_dyn();

		void initRegisterIndices();
		::Dynamic initRegisterIndices_dyn();

		virtual void initLightData();
		::Dynamic initLightData_dyn();

		void createCommons();
		::Dynamic createCommons_dyn();

		virtual void calculateDependencies();
		::Dynamic calculateDependencies_dyn();

		void setupAndCountMethodDependencies( ::away3d::materials::methods::ShadingMethodBase method, ::away3d::materials::methods::MethodVO methodVO);
		::Dynamic setupAndCountMethodDependencies_dyn();

		void setupMethod( ::away3d::materials::methods::ShadingMethodBase method, ::away3d::materials::methods::MethodVO methodVO);
		::Dynamic setupMethod_dyn();

		int get_commonsDataIndex();
		::Dynamic get_commonsDataIndex_dyn();

		void updateMethodRegisters();
		::Dynamic updateMethodRegisters_dyn();

		int get_numUsedVertexConstants();
		::Dynamic get_numUsedVertexConstants_dyn();

		int get_numUsedFragmentConstants();
		::Dynamic get_numUsedFragmentConstants_dyn();

		int get_numUsedStreams();
		::Dynamic get_numUsedStreams_dyn();

		int get_numUsedTextures();
		::Dynamic get_numUsedTextures_dyn();

		int get_numUsedVaryings();
		::Dynamic get_numUsedVaryings_dyn();

		bool usesLightsForSpecular();
		::Dynamic usesLightsForSpecular_dyn();

		bool usesLightsForDiffuse();
		::Dynamic usesLightsForDiffuse_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void cleanUpMethods();
		::Dynamic cleanUpMethods_dyn();

		int get_specularLightSources();
		::Dynamic get_specularLightSources_dyn();

		int set_specularLightSources(int value);
		::Dynamic set_specularLightSources_dyn();

		int get_diffuseLightSources();
		::Dynamic get_diffuseLightSources_dyn();

		int set_diffuseLightSources(int value);
		::Dynamic set_diffuseLightSources_dyn();

		bool usesProbesForSpecular();
		::Dynamic usesProbesForSpecular_dyn();

		bool usesProbesForDiffuse();
		::Dynamic usesProbesForDiffuse_dyn();

		bool usesProbes();
		::Dynamic usesProbes_dyn();

		int get_uvBufferIndex();
		::Dynamic get_uvBufferIndex_dyn();

		int get_uvTransformIndex();
		::Dynamic get_uvTransformIndex_dyn();

		int get_uvTransformIndex2();
		::Dynamic get_uvTransformIndex2_dyn();

		int get_secondaryUVBufferIndex();
		::Dynamic get_secondaryUVBufferIndex_dyn();

		int get_normalBufferIndex();
		::Dynamic get_normalBufferIndex_dyn();

		int get_tangentBufferIndex();
		::Dynamic get_tangentBufferIndex_dyn();

		int get_lightFragmentConstantIndex();
		::Dynamic get_lightFragmentConstantIndex_dyn();

		int get_cameraPositionIndex();
		::Dynamic get_cameraPositionIndex_dyn();

		int get_sceneMatrixIndex();
		::Dynamic get_sceneMatrixIndex_dyn();

		int get_sceneNormalMatrixIndex();
		::Dynamic get_sceneNormalMatrixIndex_dyn();

		int get_probeWeightsIndex();
		::Dynamic get_probeWeightsIndex_dyn();

		::String get_vertexCode();
		::Dynamic get_vertexCode_dyn();

		::String get_fragmentCode();
		::Dynamic get_fragmentCode_dyn();

		::String get_fragmentLightCode();
		::Dynamic get_fragmentLightCode_dyn();

		::String get_fragmentPostLightCode();
		::Dynamic get_fragmentPostLightCode_dyn();

		::String get_shadedTarget();
		::Dynamic get_shadedTarget_dyn();

		int get_numPointLights();
		::Dynamic get_numPointLights_dyn();

		int set_numPointLights(int numPointLights);
		::Dynamic set_numPointLights_dyn();

		int get_numDirectionalLights();
		::Dynamic get_numDirectionalLights_dyn();

		int set_numDirectionalLights(int value);
		::Dynamic set_numDirectionalLights_dyn();

		int get_numLightProbes();
		::Dynamic get_numLightProbes_dyn();

		int set_numLightProbes(int value);
		::Dynamic set_numLightProbes_dyn();

		bool get_usingSpecularMethod();
		::Dynamic get_usingSpecularMethod_dyn();

		 ::openfl::_Vector::ObjectVector get_animatableAttributes();
		::Dynamic get_animatableAttributes_dyn();

		 ::openfl::_Vector::ObjectVector get_animationTargetRegisters();
		::Dynamic get_animationTargetRegisters_dyn();

		bool get_usesNormals();
		::Dynamic get_usesNormals_dyn();

		bool usesLights();
		::Dynamic usesLights_dyn();

		void compileMethods();
		::Dynamic compileMethods_dyn();

		 ::openfl::_Vector::IntVector get_lightProbeDiffuseIndices();
		::Dynamic get_lightProbeDiffuseIndices_dyn();

		 ::openfl::_Vector::IntVector get_lightProbeSpecularIndices();
		::Dynamic get_lightProbeSpecularIndices_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderCompiler */ 
