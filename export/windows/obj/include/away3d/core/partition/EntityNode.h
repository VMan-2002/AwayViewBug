#ifndef INCLUDED_away3d_core_partition_EntityNode
#define INCLUDED_away3d_core_partition_EntityNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES EntityNode_obj : public  ::away3d::core::partition::NodeBase_obj
{
	public:
		typedef  ::away3d::core::partition::NodeBase_obj super;
		typedef EntityNode_obj OBJ_;
		EntityNode_obj();

	public:
		enum { _hx_ClassId = 0x5d73f8cd };

		void __construct( ::away3d::entities::Entity entity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.EntityNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.EntityNode"); }
		static ::hx::ObjectPtr< EntityNode_obj > __new( ::away3d::entities::Entity entity);
		static ::hx::ObjectPtr< EntityNode_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity entity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EntityNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EntityNode",e5,1a,bc,b1); }

		 ::away3d::entities::Entity _entity;
		 ::away3d::core::partition::EntityNode _updateQueueNext;
		 ::away3d::entities::Entity get_entity();
		::Dynamic get_entity_dyn();

		virtual void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

		void removeFromParent();
		::Dynamic removeFromParent_dyn();

		bool isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes);

		bool isIntersectingRay( ::openfl::geom::Vector3D rayPosition, ::openfl::geom::Vector3D rayDirection);

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_EntityNode */ 
