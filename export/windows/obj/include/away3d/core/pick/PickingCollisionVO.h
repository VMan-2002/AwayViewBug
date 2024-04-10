#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#define INCLUDED_away3d_core_pick_PickingCollisionVO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES PickingCollisionVO_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PickingCollisionVO_obj OBJ_;
		PickingCollisionVO_obj();

	public:
		enum { _hx_ClassId = 0x50b32169 };

		void __construct( ::away3d::entities::Entity entity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.pick.PickingCollisionVO")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.pick.PickingCollisionVO"); }
		static ::hx::ObjectPtr< PickingCollisionVO_obj > __new( ::away3d::entities::Entity entity);
		static ::hx::ObjectPtr< PickingCollisionVO_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity entity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PickingCollisionVO_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PickingCollisionVO",2a,bb,97,09); }

		 ::away3d::entities::Entity entity;
		 ::openfl::geom::Vector3D localPosition;
		 ::openfl::geom::Vector3D localNormal;
		 ::openfl::geom::Point uv;
		int index;
		int subGeometryIndex;
		 ::openfl::geom::Vector3D localRayPosition;
		 ::openfl::geom::Vector3D localRayDirection;
		 ::openfl::geom::Vector3D rayPosition;
		 ::openfl::geom::Vector3D rayDirection;
		bool rayOriginIsInsideBounds;
		Float rayEntryDistance;
		::Dynamic renderable;
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_PickingCollisionVO */ 
