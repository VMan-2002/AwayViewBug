#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#define INCLUDED_away3d_cameras_lenses_LensBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace cameras{
namespace lenses{


class HXCPP_CLASS_ATTRIBUTES LensBase_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef LensBase_obj OBJ_;
		LensBase_obj();

	public:
		enum { _hx_ClassId = 0x3a7a0cde };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.cameras.lenses.LensBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.cameras.lenses.LensBase"); }
		static ::hx::ObjectPtr< LensBase_obj > __new();
		static ::hx::ObjectPtr< LensBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LensBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LensBase",4f,36,32,c1); }

		 ::openfl::geom::Matrix3D _matrix;
		 ::openfl::geom::Rectangle _scissorRect;
		 ::openfl::geom::Rectangle _viewPort;
		Float _near;
		Float _far;
		Float _aspectRatio;
		bool _matrixInvalid;
		 ::openfl::_Vector::FloatVector _frustumCorners;
		 ::openfl::geom::Matrix3D _unprojection;
		bool _unprojectionInvalid;
		 ::openfl::_Vector::FloatVector get_frustumCorners();
		::Dynamic get_frustumCorners_dyn();

		 ::openfl::_Vector::FloatVector set_frustumCorners( ::openfl::_Vector::FloatVector frustumCorners);
		::Dynamic set_frustumCorners_dyn();

		 ::openfl::geom::Matrix3D get_matrix();
		::Dynamic get_matrix_dyn();

		 ::openfl::geom::Matrix3D set_matrix( ::openfl::geom::Matrix3D value);
		::Dynamic set_matrix_dyn();

		Float get_near();
		::Dynamic get_near_dyn();

		virtual Float set_near(Float value);
		::Dynamic set_near_dyn();

		Float get_far();
		::Dynamic get_far_dyn();

		virtual Float set_far(Float value);
		::Dynamic set_far_dyn();

		 ::openfl::geom::Vector3D project( ::openfl::geom::Vector3D point3d, ::openfl::geom::Vector3D v);
		::Dynamic project_dyn();

		 ::openfl::geom::Matrix3D get_unprojectionMatrix();
		::Dynamic get_unprojectionMatrix_dyn();

		virtual  ::openfl::geom::Vector3D unproject(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v);
		::Dynamic unproject_dyn();

		virtual  ::away3d::cameras::lenses::LensBase clone();
		::Dynamic clone_dyn();

		Float get_aspectRatio();
		::Dynamic get_aspectRatio_dyn();

		virtual Float set_aspectRatio(Float value);
		::Dynamic set_aspectRatio_dyn();

		void invalidateMatrix();
		::Dynamic invalidateMatrix_dyn();

		virtual void updateMatrix();
		::Dynamic updateMatrix_dyn();

		void updateScissorRect(Float x,Float y,Float width,Float height);
		::Dynamic updateScissorRect_dyn();

		void updateViewport(Float x,Float y,Float width,Float height);
		::Dynamic updateViewport_dyn();

};

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses

#endif /* INCLUDED_away3d_cameras_lenses_LensBase */ 
