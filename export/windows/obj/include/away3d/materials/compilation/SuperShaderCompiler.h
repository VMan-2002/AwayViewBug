#ifndef INCLUDED_away3d_materials_compilation_SuperShaderCompiler
#define INCLUDED_away3d_materials_compilation_SuperShaderCompiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_compilation_ShaderCompiler
#include <away3d/materials/compilation/ShaderCompiler.h>
#endif
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderCompiler)
HX_DECLARE_CLASS3(away3d,materials,compilation,SuperShaderCompiler)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)

namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES SuperShaderCompiler_obj : public  ::away3d::materials::compilation::ShaderCompiler_obj
{
	public:
		typedef  ::away3d::materials::compilation::ShaderCompiler_obj super;
		typedef SuperShaderCompiler_obj OBJ_;
		SuperShaderCompiler_obj();

	public:
		enum { _hx_ClassId = 0x4167e349 };

		void __construct(::String profile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.compilation.SuperShaderCompiler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.compilation.SuperShaderCompiler"); }
		static ::hx::ObjectPtr< SuperShaderCompiler_obj > __new(::String profile);
		static ::hx::ObjectPtr< SuperShaderCompiler_obj > __alloc(::hx::Ctx *_hx_ctx,::String profile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SuperShaderCompiler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SuperShaderCompiler",9f,d6,d7,1c); }

		 ::openfl::_Vector::ObjectVector _pointLightRegisters;
		 ::openfl::_Vector::ObjectVector _dirLightRegisters;
		void initLightData();

		void calculateDependencies();

		void compileNormalCode();

		void createNormalRegisters();

		void compileTangentVertexCode( ::openfl::_Vector::ObjectVector matrix);
		::Dynamic compileTangentVertexCode_dyn();

		void compileTangentNormalMapFragmentCode();
		::Dynamic compileTangentNormalMapFragmentCode_dyn();

		void compileViewDirCode();

		void compileLightingCode();

		void initLightRegisters();
		::Dynamic initLightRegisters_dyn();

		void compileDirectionalLightCode();
		::Dynamic compileDirectionalLightCode_dyn();

		void compilePointLightCode();
		::Dynamic compilePointLightCode_dyn();

		void compileLightProbeCode();
		::Dynamic compileLightProbeCode_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_SuperShaderCompiler */ 
