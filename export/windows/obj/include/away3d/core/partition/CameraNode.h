#ifndef INCLUDED_away3d_core_partition_CameraNode
#define INCLUDED_away3d_core_partition_CameraNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,CameraNode)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES CameraNode_obj : public  ::away3d::core::partition::EntityNode_obj
{
	public:
		typedef  ::away3d::core::partition::EntityNode_obj super;
		typedef CameraNode_obj OBJ_;
		CameraNode_obj();

	public:
		enum { _hx_ClassId = 0x5191154f };

		void __construct( ::away3d::cameras::Camera3D camera);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.CameraNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.CameraNode"); }
		static ::hx::ObjectPtr< CameraNode_obj > __new( ::away3d::cameras::Camera3D camera);
		static ::hx::ObjectPtr< CameraNode_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::cameras::Camera3D camera);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CameraNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CameraNode",67,37,d9,a5); }

		void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_CameraNode */ 
