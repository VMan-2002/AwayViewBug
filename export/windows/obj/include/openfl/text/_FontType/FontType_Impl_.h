#ifndef INCLUDED_openfl_text__FontType_FontType_Impl_
#define INCLUDED_openfl_text__FontType_FontType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_FontType,FontType_Impl_)

namespace openfl{
namespace text{
namespace _FontType{


class HXCPP_CLASS_ATTRIBUTES FontType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontType_Impl__obj OBJ_;
		FontType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3e1957d0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._FontType.FontType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._FontType.FontType_Impl_"); }

		inline static ::hx::ObjectPtr< FontType_Impl__obj > __new() {
			::hx::ObjectPtr< FontType_Impl__obj > __this = new FontType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FontType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FontType_Impl__obj *__this = (FontType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontType_Impl__obj), false, "openfl.text._FontType.FontType_Impl_"));
			*(void **)__this = FontType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontType_Impl_",a9,e5,01,a6); }

		static void __boot();
		static  ::Dynamic DEVICE;
		static  ::Dynamic EMBEDDED;
		static  ::Dynamic EMBEDDED_CFF;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _FontType

#endif /* INCLUDED_openfl_text__FontType_FontType_Impl_ */ 
