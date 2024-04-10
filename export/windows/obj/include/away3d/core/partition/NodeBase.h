#ifndef INCLUDED_away3d_core_partition_NodeBase
#define INCLUDED_away3d_core_partition_NodeBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES NodeBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NodeBase_obj OBJ_;
		NodeBase_obj();

	public:
		enum { _hx_ClassId = 0x0f9d173b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.NodeBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.NodeBase"); }
		static ::hx::ObjectPtr< NodeBase_obj > __new();
		static ::hx::ObjectPtr< NodeBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NodeBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NodeBase",53,03,40,c4); }

		 ::away3d::core::partition::NodeBase _parent;
		 ::openfl::_Vector::ObjectVector _childNodes;
		int _numChildNodes;
		 ::away3d::primitives::WireframePrimitiveBase _debugPrimitive;
		int _numEntities;
		int _collectionMark;
		bool get_showDebugBounds();
		::Dynamic get_showDebugBounds_dyn();

		bool set_showDebugBounds(bool value);
		::Dynamic set_showDebugBounds_dyn();

		 ::away3d::core::partition::NodeBase get_parent();
		::Dynamic get_parent_dyn();

		void addNode( ::away3d::core::partition::NodeBase node);
		::Dynamic addNode_dyn();

		void removeNode( ::away3d::core::partition::NodeBase node);
		::Dynamic removeNode_dyn();

		virtual bool isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes);
		::Dynamic isInFrustum_dyn();

		virtual bool isIntersectingRay( ::openfl::geom::Vector3D rayPosition, ::openfl::geom::Vector3D rayDirection);
		::Dynamic isIntersectingRay_dyn();

		 ::away3d::core::partition::NodeBase findPartitionForEntity( ::away3d::entities::Entity entity);
		::Dynamic findPartitionForEntity_dyn();

		virtual void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);
		::Dynamic acceptTraverser_dyn();

		 ::away3d::primitives::WireframePrimitiveBase createDebugBounds();
		::Dynamic createDebugBounds_dyn();

		int get_numEntities();
		::Dynamic get_numEntities_dyn();

		void updateNumEntities(int value);
		::Dynamic updateNumEntities_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_NodeBase */ 
