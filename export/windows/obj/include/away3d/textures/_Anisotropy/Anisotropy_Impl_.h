#ifndef INCLUDED_away3d_textures__Anisotropy_Anisotropy_Impl_
#define INCLUDED_away3d_textures__Anisotropy_Anisotropy_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,textures,_Anisotropy,Anisotropy_Impl_)

namespace away3d{
namespace textures{
namespace _Anisotropy{


class HXCPP_CLASS_ATTRIBUTES Anisotropy_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Anisotropy_Impl__obj OBJ_;
		Anisotropy_Impl__obj();

	public:
		enum { _hx_ClassId = 0x69123188 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.textures._Anisotropy.Anisotropy_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.textures._Anisotropy.Anisotropy_Impl_"); }

		inline static ::hx::ObjectPtr< Anisotropy_Impl__obj > __new() {
			::hx::ObjectPtr< Anisotropy_Impl__obj > __this = new Anisotropy_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Anisotropy_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Anisotropy_Impl__obj *__this = (Anisotropy_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Anisotropy_Impl__obj), false, "away3d.textures._Anisotropy.Anisotropy_Impl_"));
			*(void **)__this = Anisotropy_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Anisotropy_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Anisotropy_Impl_",42,fe,c7,be); }

		static void __boot();
		static  ::Dynamic NONE;
		static  ::Dynamic ANISOTROPIC2X;
		static  ::Dynamic ANISOTROPIC4X;
		static  ::Dynamic ANISOTROPIC8X;
		static  ::Dynamic ANISOTROPIC16X;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace away3d
} // end namespace textures
} // end namespace _Anisotropy

#endif /* INCLUDED_away3d_textures__Anisotropy_Anisotropy_Impl_ */ 
