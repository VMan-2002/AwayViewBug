#ifndef INCLUDED_away3d_core_base_data_ParticleData
#define INCLUDED_away3d_core_base_data_ParticleData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d9357340cbd09bbd_13_new)
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS4(away3d,core,base,data,ParticleData)

namespace away3d{
namespace core{
namespace base{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ParticleData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ParticleData_obj OBJ_;
		ParticleData_obj();

	public:
		enum { _hx_ClassId = 0x04ec2389 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.base.data.ParticleData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.base.data.ParticleData"); }

		inline static ::hx::ObjectPtr< ParticleData_obj > __new() {
			::hx::ObjectPtr< ParticleData_obj > __this = new ParticleData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ParticleData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ParticleData_obj *__this = (ParticleData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ParticleData_obj), true, "away3d.core.base.data.ParticleData"));
			*(void **)__this = ParticleData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d9357340cbd09bbd_13_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ParticleData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ParticleData",b0,a7,63,a4); }

		int particleIndex;
		int numVertices;
		int startVertexIndex;
		 ::away3d::core::base::CompactSubGeometry subGeometry;
};

} // end namespace away3d
} // end namespace core
} // end namespace base
} // end namespace data

#endif /* INCLUDED_away3d_core_base_data_ParticleData */ 
