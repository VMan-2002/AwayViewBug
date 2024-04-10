#ifndef INCLUDED_lime_utils__Resource_Resource_Impl_
#define INCLUDED_lime_utils__Resource_Resource_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,utils,_Resource,Resource_Impl_)

namespace lime{
namespace utils{
namespace _Resource{


class HXCPP_CLASS_ATTRIBUTES Resource_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Resource_Impl__obj OBJ_;
		Resource_Impl__obj();

	public:
		enum { _hx_ClassId = 0x18186667 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils._Resource.Resource_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.utils._Resource.Resource_Impl_"); }

		inline static ::hx::ObjectPtr< Resource_Impl__obj > __new() {
			::hx::ObjectPtr< Resource_Impl__obj > __this = new Resource_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Resource_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Resource_Impl__obj *__this = (Resource_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Resource_Impl__obj), false, "lime.utils._Resource.Resource_Impl_"));
			*(void **)__this = Resource_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Resource_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Resource_Impl_",0e,bc,71,ee); }

		static  ::haxe::io::Bytes _new(::hx::Null< int >  size);
		static ::Dynamic _new_dyn();

		static  ::haxe::io::Bytes _hx___fromString(::String value);
		static ::Dynamic _hx___fromString_dyn();

		static ::String _hx___toString( ::haxe::io::Bytes value);
		static ::Dynamic _hx___toString_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _Resource

#endif /* INCLUDED_lime_utils__Resource_Resource_Impl_ */ 
