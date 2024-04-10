#ifndef INCLUDED_away3d_cameras_lenses_CoordinateSystem
#define INCLUDED_away3d_cameras_lenses_CoordinateSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,cameras,lenses,CoordinateSystem)

namespace away3d{
namespace cameras{
namespace lenses{


class HXCPP_CLASS_ATTRIBUTES CoordinateSystem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CoordinateSystem_obj OBJ_;
		CoordinateSystem_obj();

	public:
		enum { _hx_ClassId = 0x2000fee2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.cameras.lenses.CoordinateSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.cameras.lenses.CoordinateSystem"); }

		inline static ::hx::ObjectPtr< CoordinateSystem_obj > __new() {
			::hx::ObjectPtr< CoordinateSystem_obj > __this = new CoordinateSystem_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CoordinateSystem_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CoordinateSystem_obj *__this = (CoordinateSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CoordinateSystem_obj), false, "away3d.cameras.lenses.CoordinateSystem"));
			*(void **)__this = CoordinateSystem_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CoordinateSystem_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CoordinateSystem",a7,c7,57,c5); }

		static void __boot();
		static int LEFT_HANDED;
		static int RIGHT_HANDED;
};

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses

#endif /* INCLUDED_away3d_cameras_lenses_CoordinateSystem */ 
