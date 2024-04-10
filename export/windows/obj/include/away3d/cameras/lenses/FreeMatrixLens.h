#ifndef INCLUDED_away3d_cameras_lenses_FreeMatrixLens
#define INCLUDED_away3d_cameras_lenses_FreeMatrixLens

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
HX_DECLARE_CLASS3(away3d,cameras,lenses,FreeMatrixLens)
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace cameras{
namespace lenses{


class HXCPP_CLASS_ATTRIBUTES FreeMatrixLens_obj : public  ::away3d::cameras::lenses::LensBase_obj
{
	public:
		typedef  ::away3d::cameras::lenses::LensBase_obj super;
		typedef FreeMatrixLens_obj OBJ_;
		FreeMatrixLens_obj();

	public:
		enum { _hx_ClassId = 0x72f3cc46 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.cameras.lenses.FreeMatrixLens")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.cameras.lenses.FreeMatrixLens"); }
		static ::hx::ObjectPtr< FreeMatrixLens_obj > __new();
		static ::hx::ObjectPtr< FreeMatrixLens_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FreeMatrixLens_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FreeMatrixLens",cb,69,c4,8c); }

		Float set_near(Float value);

		Float set_far(Float value);

		Float set_aspectRatio(Float value);

		 ::away3d::cameras::lenses::LensBase clone();

		void updateMatrix();

};

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses

#endif /* INCLUDED_away3d_cameras_lenses_FreeMatrixLens */ 
