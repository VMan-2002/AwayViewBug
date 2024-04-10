#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#define INCLUDED_away3d_bounds_BoundingVolumeBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace bounds{


class HXCPP_CLASS_ATTRIBUTES BoundingVolumeBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BoundingVolumeBase_obj OBJ_;
		BoundingVolumeBase_obj();

	public:
		enum { _hx_ClassId = 0x09388beb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.bounds.BoundingVolumeBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.bounds.BoundingVolumeBase"); }
		static ::hx::ObjectPtr< BoundingVolumeBase_obj > __new();
		static ::hx::ObjectPtr< BoundingVolumeBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoundingVolumeBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BoundingVolumeBase",af,97,94,6e); }

		 ::openfl::geom::Vector3D _min;
		 ::openfl::geom::Vector3D _max;
		 ::openfl::_Vector::FloatVector _aabbPoints;
		bool _aabbPointsDirty;
		 ::away3d::primitives::WireframePrimitiveBase _boundingRenderable;
		 ::openfl::geom::Vector3D get_max();
		::Dynamic get_max_dyn();

		 ::openfl::geom::Vector3D get_min();
		::Dynamic get_min_dyn();

		 ::openfl::_Vector::FloatVector get_aabbPoints();
		::Dynamic get_aabbPoints_dyn();

		 ::away3d::primitives::WireframePrimitiveBase get_boundingRenderable();
		::Dynamic get_boundingRenderable_dyn();

		virtual void nullify();
		::Dynamic nullify_dyn();

		void disposeRenderable();
		::Dynamic disposeRenderable_dyn();

		void fromVertices( ::openfl::_Vector::FloatVector vertices);
		::Dynamic fromVertices_dyn();

		virtual void fromGeometry( ::away3d::core::base::Geometry geometry);
		::Dynamic fromGeometry_dyn();

		virtual void fromSphere( ::openfl::geom::Vector3D center,Float radius);
		::Dynamic fromSphere_dyn();

		virtual void fromExtremes(Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);
		::Dynamic fromExtremes_dyn();

		virtual bool isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes);
		::Dynamic isInFrustum_dyn();

		bool overlaps( ::away3d::bounds::BoundingVolumeBase bounds);
		::Dynamic overlaps_dyn();

		virtual  ::away3d::bounds::BoundingVolumeBase clone();
		::Dynamic clone_dyn();

		virtual Float rayIntersection( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::openfl::geom::Vector3D targetNormal);
		::Dynamic rayIntersection_dyn();

		virtual bool containsPoint( ::openfl::geom::Vector3D position);
		::Dynamic containsPoint_dyn();

		void updateAABBPoints();
		::Dynamic updateAABBPoints_dyn();

		virtual void updateBoundingRenderable();
		::Dynamic updateBoundingRenderable_dyn();

		virtual  ::away3d::primitives::WireframePrimitiveBase createBoundingRenderable();
		::Dynamic createBoundingRenderable_dyn();

		virtual int classifyToPlane( ::away3d::core::math::Plane3D plane);
		::Dynamic classifyToPlane_dyn();

		virtual void transformFrom( ::away3d::bounds::BoundingVolumeBase bounds, ::openfl::geom::Matrix3D matrix);
		::Dynamic transformFrom_dyn();

};

} // end namespace away3d
} // end namespace bounds

#endif /* INCLUDED_away3d_bounds_BoundingVolumeBase */ 
