#ifndef INCLUDED_away3d_core_math_PlaneClassification
#define INCLUDED_away3d_core_math_PlaneClassification

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,PlaneClassification)

namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES PlaneClassification_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PlaneClassification_obj OBJ_;
		PlaneClassification_obj();

	public:
		enum { _hx_ClassId = 0x2602931c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.math.PlaneClassification")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.math.PlaneClassification"); }

		inline static ::hx::ObjectPtr< PlaneClassification_obj > __new() {
			::hx::ObjectPtr< PlaneClassification_obj > __this = new PlaneClassification_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PlaneClassification_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PlaneClassification_obj *__this = (PlaneClassification_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlaneClassification_obj), false, "away3d.core.math.PlaneClassification"));
			*(void **)__this = PlaneClassification_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlaneClassification_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlaneClassification",82,be,ac,fb); }

		static void __boot();
		static int BACK;
		static int FRONT;
		static int IN;
		static int OUT;
		static int INTERSECT;
};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_PlaneClassification */ 
