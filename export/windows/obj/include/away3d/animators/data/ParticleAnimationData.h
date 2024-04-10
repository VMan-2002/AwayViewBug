#ifndef INCLUDED_away3d_animators_data_ParticleAnimationData
#define INCLUDED_away3d_animators_data_ParticleAnimationData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,animators,data,ParticleAnimationData)
HX_DECLARE_CLASS4(away3d,core,base,data,ParticleData)

namespace away3d{
namespace animators{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ParticleAnimationData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ParticleAnimationData_obj OBJ_;
		ParticleAnimationData_obj();

	public:
		enum { _hx_ClassId = 0x021f7a89 };

		void __construct(int index,Float startTime,Float duration,Float delay, ::away3d::core::base::data::ParticleData particle);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.animators.data.ParticleAnimationData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.animators.data.ParticleAnimationData"); }
		static ::hx::ObjectPtr< ParticleAnimationData_obj > __new(int index,Float startTime,Float duration,Float delay, ::away3d::core::base::data::ParticleData particle);
		static ::hx::ObjectPtr< ParticleAnimationData_obj > __alloc(::hx::Ctx *_hx_ctx,int index,Float startTime,Float duration,Float delay, ::away3d::core::base::data::ParticleData particle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ParticleAnimationData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ParticleAnimationData",08,91,97,c9); }

		int index;
		Float startTime;
		Float totalTime;
		Float duration;
		Float delay;
		int startVertexIndex;
		int numVertices;
};

} // end namespace away3d
} // end namespace animators
} // end namespace data

#endif /* INCLUDED_away3d_animators_data_ParticleAnimationData */ 
