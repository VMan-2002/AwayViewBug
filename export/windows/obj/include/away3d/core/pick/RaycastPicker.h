#ifndef INCLUDED_away3d_core_pick_RaycastPicker
#define INCLUDED_away3d_core_pick_RaycastPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS3(away3d,core,pick,RaycastPicker)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,RaycastCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES RaycastPicker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RaycastPicker_obj OBJ_;
		RaycastPicker_obj();

	public:
		enum { _hx_ClassId = 0x58575818 };

		void __construct(bool findClosestCollision);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.pick.RaycastPicker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.pick.RaycastPicker"); }
		static ::hx::ObjectPtr< RaycastPicker_obj > __new(bool findClosestCollision);
		static ::hx::ObjectPtr< RaycastPicker_obj > __alloc(::hx::Ctx *_hx_ctx,bool findClosestCollision);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RaycastPicker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("RaycastPicker",f7,15,5b,b1); }

		static void __boot();
		static  ::openfl::geom::Vector3D tempRayPosition;
		static  ::openfl::geom::Vector3D tempRayDirection;
		bool _findClosestCollision;
		 ::away3d::core::traverse::RaycastCollector _raycastCollector;
		::Array< ::Dynamic> _ignoredEntities;
		bool _onlyMouseEnabled;
		 ::openfl::_Vector::ObjectVector _entities;
		int _numEntities;
		bool _hasCollisions;
		bool get_onlyMouseEnabled();
		::Dynamic get_onlyMouseEnabled_dyn();

		bool set_onlyMouseEnabled(bool value);
		::Dynamic set_onlyMouseEnabled_dyn();

		 ::away3d::core::pick::PickingCollisionVO getViewCollision(Float x,Float y, ::away3d::containers::View3D view);
		::Dynamic getViewCollision_dyn();

		 ::away3d::core::pick::PickingCollisionVO getSceneCollision( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::away3d::containers::Scene3D scene);
		::Dynamic getSceneCollision_dyn();

		 ::away3d::core::pick::PickingCollisionVO getEntityCollision( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction,::Array< ::Dynamic> entities);
		::Dynamic getEntityCollision_dyn();

		void setIgnoreList(::Array< ::Dynamic> entities);
		::Dynamic setIgnoreList_dyn();

		bool isIgnored( ::away3d::entities::Entity entity);
		::Dynamic isIgnored_dyn();

		int sortOnNearT( ::away3d::entities::Entity entity1, ::away3d::entities::Entity entity2);
		::Dynamic sortOnNearT_dyn();

		 ::away3d::core::pick::PickingCollisionVO getPickingCollisionVO();
		::Dynamic getPickingCollisionVO_dyn();

		void updateLocalPosition( ::away3d::core::pick::PickingCollisionVO pickingCollisionVO);
		::Dynamic updateLocalPosition_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_RaycastPicker */ 
