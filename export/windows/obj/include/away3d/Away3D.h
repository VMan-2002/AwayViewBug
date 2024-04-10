#ifndef INCLUDED_away3d_Away3D
#define INCLUDED_away3d_Away3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(away3d,Away3D)

namespace away3d{


class HXCPP_CLASS_ATTRIBUTES Away3D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Away3D_obj OBJ_;
		Away3D_obj();

	public:
		enum { _hx_ClassId = 0x0c0090c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.Away3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.Away3D"); }

		inline static ::hx::ObjectPtr< Away3D_obj > __new() {
			::hx::ObjectPtr< Away3D_obj > __this = new Away3D_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Away3D_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Away3D_obj *__this = (Away3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Away3D_obj), false, "away3d.Away3D"));
			*(void **)__this = Away3D_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Away3D_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Away3D",bf,2b,5b,c2); }

		static void __boot();
		static ::String WEBSITE_URL;
		static int MAJOR_VERSION;
		static int MINOR_VERSION;
		static int REVISION;
};

} // end namespace away3d

#endif /* INCLUDED_away3d_Away3D */ 
