#ifndef INCLUDED_away3d_core_partition_NullNode
#define INCLUDED_away3d_core_partition_NullNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,NullNode)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES NullNode_obj : public  ::away3d::core::partition::NodeBase_obj
{
	public:
		typedef  ::away3d::core::partition::NodeBase_obj super;
		typedef NullNode_obj OBJ_;
		NullNode_obj();

	public:
		enum { _hx_ClassId = 0x0fc8ae15 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.NullNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.NullNode"); }
		static ::hx::ObjectPtr< NullNode_obj > __new();
		static ::hx::ObjectPtr< NullNode_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NullNode_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NullNode",49,e0,62,00); }

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_NullNode */ 
