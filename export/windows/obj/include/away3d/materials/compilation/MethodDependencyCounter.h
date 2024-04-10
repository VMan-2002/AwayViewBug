#ifndef INCLUDED_away3d_materials_compilation_MethodDependencyCounter
#define INCLUDED_away3d_materials_compilation_MethodDependencyCounter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,compilation,MethodDependencyCounter)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)

namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES MethodDependencyCounter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MethodDependencyCounter_obj OBJ_;
		MethodDependencyCounter_obj();

	public:
		enum { _hx_ClassId = 0x5b678cda };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.materials.compilation.MethodDependencyCounter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.materials.compilation.MethodDependencyCounter"); }
		static ::hx::ObjectPtr< MethodDependencyCounter_obj > __new();
		static ::hx::ObjectPtr< MethodDependencyCounter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MethodDependencyCounter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MethodDependencyCounter",30,e3,c2,fd); }

		int _projectionDependencies;
		int _normalDependencies;
		int _viewDirDependencies;
		int _uvDependencies;
		int _secondaryUVDependencies;
		int _globalPosDependencies;
		int _tangentDependencies;
		bool _usesGlobalPosFragment;
		int _numPointLights;
		int _lightSourceMask;
		void reset();
		::Dynamic reset_dyn();

		void setPositionedLights(int numPointLights,int lightSourceMask);
		::Dynamic setPositionedLights_dyn();

		void includeMethodVO( ::away3d::materials::methods::MethodVO methodVO);
		::Dynamic includeMethodVO_dyn();

		int get_tangentDependencies();
		::Dynamic get_tangentDependencies_dyn();

		bool get_usesGlobalPosFragment();
		::Dynamic get_usesGlobalPosFragment_dyn();

		int get_projectionDependencies();
		::Dynamic get_projectionDependencies_dyn();

		int get_normalDependencies();
		::Dynamic get_normalDependencies_dyn();

		int get_viewDirDependencies();
		::Dynamic get_viewDirDependencies_dyn();

		int get_uvDependencies();
		::Dynamic get_uvDependencies_dyn();

		int get_secondaryUVDependencies();
		::Dynamic get_secondaryUVDependencies_dyn();

		int get_globalPosDependencies();
		::Dynamic get_globalPosDependencies_dyn();

		void addWorldSpaceDependencies(bool fragmentLights);
		::Dynamic addWorldSpaceDependencies_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_MethodDependencyCounter */ 
