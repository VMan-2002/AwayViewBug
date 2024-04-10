#ifndef INCLUDED_away3d_materials_LightSources
#define INCLUDED_away3d_materials_LightSources

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,materials,LightSources)

namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES LightSources_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LightSources_obj OBJ_;
		LightSources_obj();

	public:
		enum { _hx_ClassId = 0x0258e9e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.materials.LightSources")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.materials.LightSources"); }

		inline static ::hx::ObjectPtr< LightSources_obj > __new() {
			::hx::ObjectPtr< LightSources_obj > __this = new LightSources_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LightSources_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LightSources_obj *__this = (LightSources_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightSources_obj), false, "away3d.materials.LightSources"));
			*(void **)__this = LightSources_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LightSources_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LightSources",22,59,8d,e1); }

		static void __boot();
		static int LIGHTS;
		static int PROBES;
		static int ALL;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_LightSources */ 
