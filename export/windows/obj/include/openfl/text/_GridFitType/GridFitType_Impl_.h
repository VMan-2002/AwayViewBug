#ifndef INCLUDED_openfl_text__GridFitType_GridFitType_Impl_
#define INCLUDED_openfl_text__GridFitType_GridFitType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_GridFitType,GridFitType_Impl_)

namespace openfl{
namespace text{
namespace _GridFitType{


class HXCPP_CLASS_ATTRIBUTES GridFitType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GridFitType_Impl__obj OBJ_;
		GridFitType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0b211ab2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._GridFitType.GridFitType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._GridFitType.GridFitType_Impl_"); }

		inline static ::hx::ObjectPtr< GridFitType_Impl__obj > __new() {
			::hx::ObjectPtr< GridFitType_Impl__obj > __this = new GridFitType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GridFitType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GridFitType_Impl__obj *__this = (GridFitType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GridFitType_Impl__obj), false, "openfl.text._GridFitType.GridFitType_Impl_"));
			*(void **)__this = GridFitType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GridFitType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GridFitType_Impl_",45,81,06,22); }

		static void __boot();
		static  ::Dynamic NONE;
		static  ::Dynamic PIXEL;
		static  ::Dynamic SUBPIXEL;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _GridFitType

#endif /* INCLUDED_openfl_text__GridFitType_GridFitType_Impl_ */ 
