#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#define INCLUDED_away3d_core_traverse_PartitionTraverser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace traverse{


class HXCPP_CLASS_ATTRIBUTES PartitionTraverser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PartitionTraverser_obj OBJ_;
		PartitionTraverser_obj();

	public:
		enum { _hx_ClassId = 0x23f97a4a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.traverse.PartitionTraverser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.traverse.PartitionTraverser"); }
		static ::hx::ObjectPtr< PartitionTraverser_obj > __new();
		static ::hx::ObjectPtr< PartitionTraverser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PartitionTraverser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PartitionTraverser",56,53,ee,91); }

		static void __boot();
		static int _collectionMark;
		 ::away3d::containers::Scene3D scene;
		 ::openfl::geom::Vector3D _entryPoint;
		virtual bool enterNode( ::away3d::core::partition::NodeBase node);
		::Dynamic enterNode_dyn();

		virtual void applySkyBox(::Dynamic renderable);
		::Dynamic applySkyBox_dyn();

		virtual void applyRenderable(::Dynamic renderable);
		::Dynamic applyRenderable_dyn();

		virtual void applyUnknownLight( ::away3d::lights::LightBase light);
		::Dynamic applyUnknownLight_dyn();

		virtual void applyDirectionalLight( ::away3d::lights::DirectionalLight light);
		::Dynamic applyDirectionalLight_dyn();

		virtual void applyPointLight( ::away3d::lights::PointLight light);
		::Dynamic applyPointLight_dyn();

		virtual void applyLightProbe( ::away3d::lights::LightProbe light);
		::Dynamic applyLightProbe_dyn();

		virtual void applyEntity( ::away3d::entities::Entity entity);
		::Dynamic applyEntity_dyn();

		 ::openfl::geom::Vector3D get_entryPoint();
		::Dynamic get_entryPoint_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_PartitionTraverser */ 
