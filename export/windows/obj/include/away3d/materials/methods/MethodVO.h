#ifndef INCLUDED_away3d_materials_methods_MethodVO
#define INCLUDED_away3d_materials_methods_MethodVO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_63062586413d18c7_41_new)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES MethodVO_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MethodVO_obj OBJ_;
		MethodVO_obj();

	public:
		enum { _hx_ClassId = 0x2dbc1a7f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.MethodVO")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.MethodVO"); }

		inline static ::hx::ObjectPtr< MethodVO_obj > __new() {
			::hx::ObjectPtr< MethodVO_obj > __this = new MethodVO_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MethodVO_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MethodVO_obj *__this = (MethodVO_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MethodVO_obj), true, "away3d.materials.methods.MethodVO"));
			*(void **)__this = MethodVO_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_63062586413d18c7_41_new)
HXDLIN(  41)		( ( ::away3d::materials::methods::MethodVO)(__this) )->useLightFallOff = true;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MethodVO_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MethodVO",7a,38,e1,28); }

		 ::openfl::_Vector::FloatVector vertexData;
		 ::openfl::_Vector::FloatVector fragmentData;
		int texturesIndex;
		int secondaryTexturesIndex;
		int vertexConstantsIndex;
		int secondaryVertexConstantsIndex;
		int fragmentConstantsIndex;
		int secondaryFragmentConstantsIndex;
		bool useMipmapping;
		bool useSmoothTextures;
		bool repeatTextures;
		 ::Dynamic anisotropy;
		bool needsProjection;
		bool needsView;
		bool needsNormals;
		bool needsTangents;
		bool needsUV;
		bool needsSecondaryUV;
		bool needsGlobalVertexPos;
		bool needsGlobalFragmentPos;
		int numLights;
		bool useLightFallOff;
		void reset();
		::Dynamic reset_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_MethodVO */ 
