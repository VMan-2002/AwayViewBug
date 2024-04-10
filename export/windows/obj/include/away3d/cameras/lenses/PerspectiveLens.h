#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#define INCLUDED_away3d_cameras_lenses_PerspectiveLens

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS3(away3d,cameras,lenses,PerspectiveLens)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace cameras{
namespace lenses{


class HXCPP_CLASS_ATTRIBUTES PerspectiveLens_obj : public  ::away3d::cameras::lenses::LensBase_obj
{
	public:
		typedef  ::away3d::cameras::lenses::LensBase_obj super;
		typedef PerspectiveLens_obj OBJ_;
		PerspectiveLens_obj();

	public:
		enum { _hx_ClassId = 0x19f65503 };

		void __construct(::hx::Null< Float >  __o_fieldOfView,::hx::Null< int >  __o_coordinateSystem);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.cameras.lenses.PerspectiveLens")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.cameras.lenses.PerspectiveLens"); }
		static ::hx::ObjectPtr< PerspectiveLens_obj > __new(::hx::Null< Float >  __o_fieldOfView,::hx::Null< int >  __o_coordinateSystem);
		static ::hx::ObjectPtr< PerspectiveLens_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_fieldOfView,::hx::Null< int >  __o_coordinateSystem);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PerspectiveLens_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PerspectiveLens",7a,96,0d,49); }

		Float _fieldOfView;
		Float _focalLength;
		Float _focalLengthInv;
		Float _yMax;
		Float _xMax;
		int _coordinateSystem;
		Float get_fieldOfView();
		::Dynamic get_fieldOfView_dyn();

		Float set_fieldOfView(Float value);
		::Dynamic set_fieldOfView_dyn();

		Float get_focalLength();
		::Dynamic get_focalLength_dyn();

		Float set_focalLength(Float value);
		::Dynamic set_focalLength_dyn();

		 ::openfl::geom::Vector3D unproject(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v);

		 ::away3d::cameras::lenses::LensBase clone();

		int get_coordinateSystem();
		::Dynamic get_coordinateSystem_dyn();

		int set_coordinateSystem(int value);
		::Dynamic set_coordinateSystem_dyn();

		void updateMatrix();

};

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses

#endif /* INCLUDED_away3d_cameras_lenses_PerspectiveLens */ 
