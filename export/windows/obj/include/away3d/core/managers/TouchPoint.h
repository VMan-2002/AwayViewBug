#ifndef INCLUDED_away3d_core_managers_TouchPoint
#define INCLUDED_away3d_core_managers_TouchPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_eeb5fa3a2de877ab_280_new)
HX_DECLARE_CLASS3(away3d,core,managers,TouchPoint)

namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES TouchPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TouchPoint_obj OBJ_;
		TouchPoint_obj();

	public:
		enum { _hx_ClassId = 0x1eaf8f3d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.managers.TouchPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.managers.TouchPoint"); }

		inline static ::hx::ObjectPtr< TouchPoint_obj > __new() {
			::hx::ObjectPtr< TouchPoint_obj > __this = new TouchPoint_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TouchPoint_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TouchPoint_obj *__this = (TouchPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TouchPoint_obj), false, "away3d.core.managers.TouchPoint"));
			*(void **)__this = TouchPoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_eeb5fa3a2de877ab_280_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TouchPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TouchPoint",31,9c,d1,b6); }

		int id;
		Float x;
		Float y;
};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_TouchPoint */ 
