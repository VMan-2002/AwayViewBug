#ifndef INCLUDED_away3d_core_partition_PointLightNode
#define INCLUDED_away3d_core_partition_PointLightNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,partition,PointLightNode)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace partition{


class HXCPP_CLASS_ATTRIBUTES PointLightNode_obj : public  ::away3d::core::partition::EntityNode_obj
{
	public:
		typedef  ::away3d::core::partition::EntityNode_obj super;
		typedef PointLightNode_obj OBJ_;
		PointLightNode_obj();

	public:
		enum { _hx_ClassId = 0x67d09190 };

		void __construct( ::away3d::lights::PointLight light);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.partition.PointLightNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.partition.PointLightNode"); }
		static ::hx::ObjectPtr< PointLightNode_obj > __new( ::away3d::lights::PointLight light);
		static ::hx::ObjectPtr< PointLightNode_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::lights::PointLight light);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PointLightNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PointLightNode",a8,9f,6f,f1); }

		 ::away3d::lights::PointLight _light;
		 ::away3d::lights::PointLight get_light();
		::Dynamic get_light_dyn();

		void acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser);

};

} // end namespace away3d
} // end namespace core
} // end namespace partition

#endif /* INCLUDED_away3d_core_partition_PointLightNode */ 
