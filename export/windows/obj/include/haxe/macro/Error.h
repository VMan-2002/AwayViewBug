#ifndef INCLUDED_haxe_macro_Error
#define INCLUDED_haxe_macro_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_3aabe5d3ff33afe4_1000_new)
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(haxe,macro,Error)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES Error_obj : public  ::haxe::Exception_obj
{
	public:
		typedef  ::haxe::Exception_obj super;
		typedef Error_obj OBJ_;
		Error_obj();

	public:
		enum { _hx_ClassId = 0x0c561a82 };

		void __construct(::String message, ::Dynamic pos, ::haxe::Exception previous);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.macro.Error")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.macro.Error"); }

		inline static ::hx::ObjectPtr< Error_obj > __new(::String message, ::Dynamic pos, ::haxe::Exception previous) {
			::hx::ObjectPtr< Error_obj > __this = new Error_obj();
			__this->__construct(message,pos,previous);
			return __this;
		}

		inline static ::hx::ObjectPtr< Error_obj > __alloc(::hx::Ctx *_hx_ctx,::String message, ::Dynamic pos, ::haxe::Exception previous) {
			Error_obj *__this = (Error_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Error_obj), true, "haxe.macro.Error"));
			*(void **)__this = Error_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_3aabe5d3ff33afe4_1000_new)
HXLINE(1001)		__this->super::__construct(message,previous,null());
HXLINE(1002)		( ( ::haxe::macro::Error)(__this) )->pos = pos;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Error_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Error",a8,3b,57,06); }

		 ::Dynamic pos;
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Error */ 
