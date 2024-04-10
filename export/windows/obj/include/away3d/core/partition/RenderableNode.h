#ifndef INCLUDED_away3d_core_partition_RenderableNode
#define INCLUDED_away3d_core_partition_RenderableNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,RenderableNode)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES RenderableNode_obj : public  ::away3d::core::partition::EntityNode_obj
{
	public:
		typedef  ::away3d::core::partition::EntityNode_obj super;
		typedef RenderableNode_obj OBJ_;
		RenderableNode_obj();

	public:
		enum { _hx_ClassId = 0x620eecfe };

		void __construct(::Dynamic renderable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.RenderableNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.RenderableNode"); }
		static ::hx::ObjectPtr< RenderableNode_obj > __new(::Dynamic renderable);
		static ::hx::ObjectPtr< RenderableNode_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic renderable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderableNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderableNode",32,be,b6,65); }

		::Dynamic _renderable;
		void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_RenderableNode */ 
