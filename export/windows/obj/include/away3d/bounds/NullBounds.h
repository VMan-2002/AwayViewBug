#ifndef INCLUDED_away3d_bounds_NullBounds
#define INCLUDED_away3d_bounds_NullBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,bounds,NullBounds)
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
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace bounds{


class HXCPP_CLASS_ATTRIBUTES NullBounds_obj : public  ::away3d::bounds::BoundingVolumeBase_obj
{
	public:
		typedef  ::away3d::bounds::BoundingVolumeBase_obj super;
		typedef NullBounds_obj OBJ_;
		NullBounds_obj();

	public:
		enum { _hx_ClassId = 0x250514b8 };

		void __construct(::hx::Null< bool >  __o_alwaysIn, ::away3d::primitives::WireframePrimitiveBase renderable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.bounds.NullBounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.bounds.NullBounds"); }
		static ::hx::ObjectPtr< NullBounds_obj > __new(::hx::Null< bool >  __o_alwaysIn, ::away3d::primitives::WireframePrimitiveBase renderable);
		static ::hx::ObjectPtr< NullBounds_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_alwaysIn, ::away3d::primitives::WireframePrimitiveBase renderable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NullBounds_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NullBounds",7c,bc,0d,46); }

		bool _alwaysIn;
		 ::away3d::primitives::WireframePrimitiveBase _renderable;
		 ::away3d::bounds::BoundingVolumeBase clone();

		 ::away3d::primitives::WireframePrimitiveBase createBoundingRenderable();

		bool isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes);

		void fromGeometry( ::away3d::core::base::Geometry geometry);

		void fromSphere( ::openfl::geom::Vector3D center,Float radius);

		void fromExtremes(Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ);

		int classifyToPlane( ::away3d::core::math::Plane3D plane);

		void transformFrom( ::away3d::bounds::BoundingVolumeBase bounds, ::openfl::geom::Matrix3D matrix);

};

} // end namespace away3d
} // end namespace bounds

#endif /* INCLUDED_away3d_bounds_NullBounds */ 
