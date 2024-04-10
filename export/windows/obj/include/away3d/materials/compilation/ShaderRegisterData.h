#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#define INCLUDED_away3d_materials_compilation_ShaderRegisterData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a80f26377d8af4ae_29_new)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterData)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)

namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES ShaderRegisterData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderRegisterData_obj OBJ_;
		ShaderRegisterData_obj();

	public:
		enum { _hx_ClassId = 0x077c5470 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.compilation.ShaderRegisterData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.compilation.ShaderRegisterData"); }

		inline static ::hx::ObjectPtr< ShaderRegisterData_obj > __new() {
			::hx::ObjectPtr< ShaderRegisterData_obj > __this = new ShaderRegisterData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderRegisterData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ShaderRegisterData_obj *__this = (ShaderRegisterData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderRegisterData_obj), true, "away3d.materials.compilation.ShaderRegisterData"));
			*(void **)__this = ShaderRegisterData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a80f26377d8af4ae_29_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderRegisterData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderRegisterData",12,69,7c,39); }

		 ::away3d::materials::compilation::ShaderRegisterElement normalVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement tangentVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement bitangentVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement uvVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement secondaryUVVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement viewDirVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement shadedTarget;
		 ::away3d::materials::compilation::ShaderRegisterElement globalPositionVertex;
		 ::away3d::materials::compilation::ShaderRegisterElement globalPositionVarying;
		 ::away3d::materials::compilation::ShaderRegisterElement localPosition;
		 ::away3d::materials::compilation::ShaderRegisterElement normalInput;
		 ::away3d::materials::compilation::ShaderRegisterElement tangentInput;
		 ::away3d::materials::compilation::ShaderRegisterElement animatedNormal;
		 ::away3d::materials::compilation::ShaderRegisterElement animatedTangent;
		 ::away3d::materials::compilation::ShaderRegisterElement commons;
		 ::away3d::materials::compilation::ShaderRegisterElement projectionFragment;
		 ::away3d::materials::compilation::ShaderRegisterElement normalFragment;
		 ::away3d::materials::compilation::ShaderRegisterElement viewDirFragment;
		 ::away3d::materials::compilation::ShaderRegisterElement bitangent;
};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderRegisterData */ 
