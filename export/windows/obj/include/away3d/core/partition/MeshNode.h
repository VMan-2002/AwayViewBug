#ifndef INCLUDED_away3d_core_partition_MeshNode
#define INCLUDED_away3d_core_partition_MeshNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,MeshNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES MeshNode_obj : public  ::away3d::core::partition::EntityNode_obj
{
	public:
		typedef  ::away3d::core::partition::EntityNode_obj super;
		typedef MeshNode_obj OBJ_;
		MeshNode_obj();

	public:
		enum { _hx_ClassId = 0x341290b3 };

		void __construct( ::away3d::entities::Mesh mesh);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.MeshNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.MeshNode"); }
		static ::hx::ObjectPtr< MeshNode_obj > __new( ::away3d::entities::Mesh mesh);
		static ::hx::ObjectPtr< MeshNode_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Mesh mesh);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MeshNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MeshNode",af,36,be,ac); }

		 ::away3d::entities::Mesh _mesh;
		 ::away3d::entities::Mesh get_mesh();
		::Dynamic get_mesh_dyn();

		void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_MeshNode */ 
