#ifndef INCLUDED_away3d_core_partition_Partition3D
#define INCLUDED_away3d_core_partition_Partition3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES Partition3D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Partition3D_obj OBJ_;
		Partition3D_obj();

	public:
		enum { _hx_ClassId = 0x0fde0eaf };

		void __construct( ::away3d::core::partition::NodeBase rootNode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.Partition3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.Partition3D"); }
		static ::hx::ObjectPtr< Partition3D_obj > __new( ::away3d::core::partition::NodeBase rootNode);
		static ::hx::ObjectPtr< Partition3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::core::partition::NodeBase rootNode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Partition3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Partition3D",fb,34,8e,2a); }

		 ::away3d::core::partition::NodeBase _rootNode;
		bool _updatesMade;
		 ::away3d::core::partition::EntityNode _updateQueue;
		bool get_showDebugBounds();
		::Dynamic get_showDebugBounds_dyn();

		bool set_showDebugBounds(bool value);
		::Dynamic set_showDebugBounds_dyn();

		void traverse( ::away3d::core::traverse::PartitionTraverser traverser);
		::Dynamic traverse_dyn();

		void markForUpdate( ::away3d::entities::Entity entity);
		::Dynamic markForUpdate_dyn();

		void removeEntity( ::away3d::entities::Entity entity);
		::Dynamic removeEntity_dyn();

		void updateEntities();
		::Dynamic updateEntities_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_Partition3D */ 
