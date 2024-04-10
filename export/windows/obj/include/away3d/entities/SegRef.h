#ifndef INCLUDED_away3d_entities_SegRef
#define INCLUDED_away3d_entities_SegRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ea420eaa75b8b6f0_642_new)
HX_DECLARE_CLASS2(away3d,entities,SegRef)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)

namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES SegRef_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SegRef_obj OBJ_;
		SegRef_obj();

	public:
		enum { _hx_ClassId = 0x4973cfde };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.entities.SegRef")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.entities.SegRef"); }

		inline static ::hx::ObjectPtr< SegRef_obj > __new() {
			::hx::ObjectPtr< SegRef_obj > __this = new SegRef_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SegRef_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SegRef_obj *__this = (SegRef_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SegRef_obj), true, "away3d.entities.SegRef"));
			*(void **)__this = SegRef_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ea420eaa75b8b6f0_642_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SegRef_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SegRef",de,14,6b,9b); }

		int index;
		int subSetIndex;
		 ::away3d::primitives::data::Segment segment;
};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_SegRef */ 
