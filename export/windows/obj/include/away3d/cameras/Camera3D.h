#ifndef INCLUDED_away3d_cameras_Camera3D
#define INCLUDED_away3d_cameras_Camera3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,LensEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace cameras{


class HXCPP_CLASS_ATTRIBUTES Camera3D_obj : public  ::away3d::entities::Entity_obj
{
	public:
		typedef  ::away3d::entities::Entity_obj super;
		typedef Camera3D_obj OBJ_;
		Camera3D_obj();

	public:
		enum { _hx_ClassId = 0x36e41561 };

		void __construct( ::away3d::cameras::lenses::LensBase lens);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.cameras.Camera3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.cameras.Camera3D"); }
		static ::hx::ObjectPtr< Camera3D_obj > __new( ::away3d::cameras::lenses::LensBase lens);
		static ::hx::ObjectPtr< Camera3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::cameras::lenses::LensBase lens);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Camera3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Camera3D",b6,e2,d8,c1); }

		 ::openfl::geom::Matrix3D _viewProjection;
		bool _viewProjectionDirty;
		 ::away3d::cameras::lenses::LensBase _lens;
		 ::openfl::_Vector::ObjectVector _frustumPlanes;
		bool _frustumPlanesDirty;
		 ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume();

		::String get_assetType();

		void onLensMatrixChanged( ::away3d::events::LensEvent event);
		::Dynamic onLensMatrixChanged_dyn();

		 ::openfl::_Vector::ObjectVector get_frustumPlanes();
		::Dynamic get_frustumPlanes_dyn();

		void updateFrustum();
		::Dynamic updateFrustum_dyn();

		void invalidateSceneTransform();

		void updateBounds();

		 ::away3d::core::partition::EntityNode createEntityPartitionNode();

		 ::away3d::cameras::lenses::LensBase get_lens();
		::Dynamic get_lens_dyn();

		 ::away3d::cameras::lenses::LensBase set_lens( ::away3d::cameras::lenses::LensBase value);
		::Dynamic set_lens_dyn();

		 ::openfl::geom::Matrix3D get_viewProjection();
		::Dynamic get_viewProjection_dyn();

		 ::openfl::geom::Vector3D unproject(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v);
		::Dynamic unproject_dyn();

		 ::openfl::geom::Vector3D getRay(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v);
		::Dynamic getRay_dyn();

		 ::openfl::geom::Vector3D project( ::openfl::geom::Vector3D point3d, ::openfl::geom::Vector3D v);
		::Dynamic project_dyn();

};

} // end namespace away3d
} // end namespace cameras

#endif /* INCLUDED_away3d_cameras_Camera3D */ 
