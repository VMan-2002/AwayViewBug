#ifndef INCLUDED_away3d_containers_Scene3D
#define INCLUDED_away3d_containers_Scene3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES Scene3D_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Scene3D_obj OBJ_;
		Scene3D_obj();

	public:
		enum { _hx_ClassId = 0x1714c148 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.containers.Scene3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.containers.Scene3D"); }
		static ::hx::ObjectPtr< Scene3D_obj > __new();
		static ::hx::ObjectPtr< Scene3D_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scene3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Scene3D",dd,18,45,81); }

		 ::away3d::containers::ObjectContainer3D _sceneGraphRoot;
		 ::openfl::_Vector::ObjectVector _partitions;
		void traversePartitions( ::away3d::core::traverse::PartitionTraverser traverser);
		::Dynamic traversePartitions_dyn();

		 ::away3d::core::partition::Partition3D get_partition();
		::Dynamic get_partition_dyn();

		 ::away3d::core::partition::Partition3D set_partition( ::away3d::core::partition::Partition3D value);
		::Dynamic set_partition_dyn();

		bool contains( ::away3d::containers::ObjectContainer3D child);
		::Dynamic contains_dyn();

		 ::away3d::containers::ObjectContainer3D addChild( ::away3d::containers::ObjectContainer3D child);
		::Dynamic addChild_dyn();

		void removeChild( ::away3d::containers::ObjectContainer3D child);
		::Dynamic removeChild_dyn();

		void removeChildAt(int index);
		::Dynamic removeChildAt_dyn();

		 ::away3d::containers::ObjectContainer3D getChildAt(int index);
		::Dynamic getChildAt_dyn();

		int get_numChildren();
		::Dynamic get_numChildren_dyn();

		void registerEntity( ::away3d::entities::Entity entity);
		::Dynamic registerEntity_dyn();

		void unregisterEntity( ::away3d::entities::Entity entity);
		::Dynamic unregisterEntity_dyn();

		void invalidateEntityBounds( ::away3d::entities::Entity entity);
		::Dynamic invalidateEntityBounds_dyn();

		void registerPartition( ::away3d::entities::Entity entity);
		::Dynamic registerPartition_dyn();

		void unregisterPartition( ::away3d::entities::Entity entity);
		::Dynamic unregisterPartition_dyn();

		void addPartitionUnique( ::away3d::core::partition::Partition3D partition);
		::Dynamic addPartitionUnique_dyn();

};

} // end namespace away3d
} // end namespace containers

#endif /* INCLUDED_away3d_containers_Scene3D */ 
