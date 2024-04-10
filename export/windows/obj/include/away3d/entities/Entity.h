#ifndef INCLUDED_away3d_entities_Entity
#define INCLUDED_away3d_entities_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS3(away3d,core,pick,IPickingCollider)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES Entity_obj : public  ::away3d::containers::ObjectContainer3D_obj
{
	public:
		typedef  ::away3d::containers::ObjectContainer3D_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();

	public:
		enum { _hx_ClassId = 0x12b32fa7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.entities.Entity")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.entities.Entity"); }
		static ::hx::ObjectPtr< Entity_obj > __new();
		static ::hx::ObjectPtr< Entity_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Entity",43,87,b0,39); }

		bool _showBounds;
		 ::away3d::core::partition::EntityNode _partitionNode;
		bool _boundsIsShown;
		bool _shaderPickingDetails;
		 ::away3d::core::pick::PickingCollisionVO _pickingCollisionVO;
		::Dynamic _pickingCollider;
		bool _staticNode;
		 ::away3d::bounds::BoundingVolumeBase _bounds;
		bool _boundsInvalid;
		 ::away3d::bounds::BoundingVolumeBase _worldBounds;
		bool _worldBoundsInvalid;
		bool set_ignoreTransform(bool value);

		bool get_shaderPickingDetails();
		::Dynamic get_shaderPickingDetails_dyn();

		bool set_shaderPickingDetails(bool value);
		::Dynamic set_shaderPickingDetails_dyn();

		bool get_staticNode();
		::Dynamic get_staticNode_dyn();

		bool set_staticNode(bool value);
		::Dynamic set_staticNode_dyn();

		 ::away3d::core::pick::PickingCollisionVO get_pickingCollisionVO();
		::Dynamic get_pickingCollisionVO_dyn();

		virtual bool collidesBefore(Float shortestCollisionDistance,bool findClosest);
		::Dynamic collidesBefore_dyn();

		bool get_showBounds();
		::Dynamic get_showBounds_dyn();

		bool set_showBounds(bool value);
		::Dynamic set_showBounds_dyn();

		Float get_minX();

		Float get_minY();

		Float get_minZ();

		Float get_maxX();

		Float get_maxY();

		Float get_maxZ();

		virtual  ::away3d::bounds::BoundingVolumeBase get_bounds();
		::Dynamic get_bounds_dyn();

		 ::away3d::bounds::BoundingVolumeBase set_bounds( ::away3d::bounds::BoundingVolumeBase value);
		::Dynamic set_bounds_dyn();

		 ::away3d::bounds::BoundingVolumeBase get_worldBounds();
		::Dynamic get_worldBounds_dyn();

		void updateWorldBounds();
		::Dynamic updateWorldBounds_dyn();

		 ::away3d::core::partition::Partition3D set_implicitPartition( ::away3d::core::partition::Partition3D value);

		 ::away3d::containers::Scene3D set_scene( ::away3d::containers::Scene3D value);

		virtual ::String get_assetType();

		::Dynamic get_pickingCollider();
		::Dynamic get_pickingCollider_dyn();

		::Dynamic set_pickingCollider(::Dynamic value);
		::Dynamic set_pickingCollider_dyn();

		 ::away3d::core::partition::EntityNode getEntityPartitionNode();
		::Dynamic getEntityPartitionNode_dyn();

		bool isIntersectingRay( ::openfl::geom::Vector3D rayPosition, ::openfl::geom::Vector3D rayDirection);
		::Dynamic isIntersectingRay_dyn();

		virtual  ::away3d::core::partition::EntityNode createEntityPartitionNode();
		::Dynamic createEntityPartitionNode_dyn();

		virtual  ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume();
		::Dynamic getDefaultBoundingVolume_dyn();

		virtual void updateBounds();
		::Dynamic updateBounds_dyn();

		virtual void invalidateSceneTransform();

		void invalidateBounds();
		::Dynamic invalidateBounds_dyn();

		virtual void updateMouseChildren();

		void notifySceneBoundsInvalid();
		::Dynamic notifySceneBoundsInvalid_dyn();

		void notifyPartitionAssigned();
		::Dynamic notifyPartitionAssigned_dyn();

		void notifyPartitionUnassigned();
		::Dynamic notifyPartitionUnassigned_dyn();

		void addBounds();
		::Dynamic addBounds_dyn();

		void removeBounds();
		::Dynamic removeBounds_dyn();

		void internalUpdate();
		::Dynamic internalUpdate_dyn();

};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_Entity */ 
