#ifndef INCLUDED_away3d_core_math_MathConsts
#define INCLUDED_away3d_core_math_MathConsts

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,MathConsts)

namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES MathConsts_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MathConsts_obj OBJ_;
		MathConsts_obj();

	public:
		enum { _hx_ClassId = 0x78ceb4c2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.math.MathConsts")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.math.MathConsts"); }

		inline static ::hx::ObjectPtr< MathConsts_obj > __new() {
			::hx::ObjectPtr< MathConsts_obj > __this = new MathConsts_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MathConsts_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MathConsts_obj *__this = (MathConsts_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MathConsts_obj), false, "away3d.core.math.MathConsts"));
			*(void **)__this = MathConsts_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MathConsts_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MathConsts",b8,7d,e3,8f); }

		static void __boot();
		static Float RADIANS_TO_DEGREES;
		static Float DEGREES_TO_RADIANS;
};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_MathConsts */ 
