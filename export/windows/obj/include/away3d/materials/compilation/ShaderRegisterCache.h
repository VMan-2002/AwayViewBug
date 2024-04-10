#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#define INCLUDED_away3d_materials_compilation_ShaderRegisterCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,compilation,RegisterPool)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)

namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES ShaderRegisterCache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderRegisterCache_obj OBJ_;
		ShaderRegisterCache_obj();

	public:
		enum { _hx_ClassId = 0x4b2b1c20 };

		void __construct(::String profile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.compilation.ShaderRegisterCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.compilation.ShaderRegisterCache"); }
		static ::hx::ObjectPtr< ShaderRegisterCache_obj > __new(::String profile);
		static ::hx::ObjectPtr< ShaderRegisterCache_obj > __alloc(::hx::Ctx *_hx_ctx,::String profile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderRegisterCache_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderRegisterCache",5a,12,ec,7f); }

		 ::away3d::materials::compilation::RegisterPool _fragmentTempCache;
		 ::away3d::materials::compilation::RegisterPool _vertexTempCache;
		 ::away3d::materials::compilation::RegisterPool _varyingCache;
		 ::away3d::materials::compilation::RegisterPool _fragmentConstantsCache;
		 ::away3d::materials::compilation::RegisterPool _vertexConstantsCache;
		 ::away3d::materials::compilation::RegisterPool _textureCache;
		 ::away3d::materials::compilation::RegisterPool _vertexAttributesCache;
		int _vertexConstantOffset;
		int _vertexAttributesOffset;
		int _varyingsOffset;
		int _fragmentConstantOffset;
		 ::away3d::materials::compilation::ShaderRegisterElement _fragmentOutputRegister;
		 ::away3d::materials::compilation::ShaderRegisterElement _vertexOutputRegister;
		int _numUsedVertexConstants;
		int _numUsedFragmentConstants;
		int _numUsedStreams;
		int _numUsedTextures;
		int _numUsedVaryings;
		::String _profile;
		virtual void reset();
		::Dynamic reset_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void addFragmentTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _hx_register,int usageCount);
		::Dynamic addFragmentTempUsages_dyn();

		void removeFragmentTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register);
		::Dynamic removeFragmentTempUsage_dyn();

		void addVertexTempUsages( ::away3d::materials::compilation::ShaderRegisterElement _hx_register,int usageCount);
		::Dynamic addVertexTempUsages_dyn();

		void removeVertexTempUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register);
		::Dynamic removeVertexTempUsage_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeFragmentVectorTemp();
		::Dynamic getFreeFragmentVectorTemp_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeFragmentSingleTemp();
		::Dynamic getFreeFragmentSingleTemp_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeVarying();
		::Dynamic getFreeVarying_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeFragmentConstant();
		::Dynamic getFreeFragmentConstant_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexConstant();
		::Dynamic getFreeVertexConstant_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexVectorTemp();
		::Dynamic getFreeVertexVectorTemp_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexSingleTemp();
		::Dynamic getFreeVertexSingleTemp_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeVertexAttribute();
		::Dynamic getFreeVertexAttribute_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getFreeTextureReg();
		::Dynamic getFreeTextureReg_dyn();

		int get_vertexConstantOffset();
		::Dynamic get_vertexConstantOffset_dyn();

		int set_vertexConstantOffset(int vertexConstantOffset);
		::Dynamic set_vertexConstantOffset_dyn();

		int get_vertexAttributesOffset();
		::Dynamic get_vertexAttributesOffset_dyn();

		int set_vertexAttributesOffset(int value);
		::Dynamic set_vertexAttributesOffset_dyn();

		int get_varyingsOffset();
		::Dynamic get_varyingsOffset_dyn();

		int set_varyingsOffset(int value);
		::Dynamic set_varyingsOffset_dyn();

		int get_fragmentConstantOffset();
		::Dynamic get_fragmentConstantOffset_dyn();

		int set_fragmentConstantOffset(int value);
		::Dynamic set_fragmentConstantOffset_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement get_fragmentOutputRegister();
		::Dynamic get_fragmentOutputRegister_dyn();

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

};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderRegisterCache */ 
