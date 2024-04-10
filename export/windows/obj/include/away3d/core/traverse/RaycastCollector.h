#ifndef INCLUDED_away3d_core_traverse_RaycastCollector
#define INCLUDED_away3d_core_traverse_RaycastCollector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,RaycastCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace traverse{


class HXCPP_CLASS_ATTRIBUTES RaycastCollector_obj : public  ::away3d::core::traverse::EntityCollector_obj
{
	public:
		typedef  ::away3d::core::traverse::EntityCollector_obj super;
		typedef RaycastCollector_obj OBJ_;
		RaycastCollector_obj();

	public:
		enum { _hx_ClassId = 0x3db89f14 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.traverse.RaycastCollector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.traverse.RaycastCollector"); }
		static ::hx::ObjectPtr< RaycastCollector_obj > __new();
		static ::hx::ObjectPtr< RaycastCollector_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RaycastCollector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RaycastCollector",84,d2,3a,52); }

		 ::openfl::geom::Vector3D _rayPosition;
		 ::openfl::geom::Vector3D _rayDirection;
		 ::openfl::geom::Vector3D get_rayPosition();
		::Dynamic get_rayPosition_dyn();

		 ::openfl::geom::Vector3D set_rayPosition( ::openfl::geom::Vector3D value);
		::Dynamic set_rayPosition_dyn();

		 ::openfl::geom::Vector3D get_rayDirection();
		::Dynamic get_rayDirection_dyn();

		 ::openfl::geom::Vector3D set_rayDirection( ::openfl::geom::Vector3D value);
		::Dynamic set_rayDirection_dyn();

		bool enterNode( ::away3d::core::partition::NodeBase node);

		void applySkyBox(::Dynamic renderable);

		void applyRenderable(::Dynamic renderable);

		void applyUnknownLight( ::away3d::lights::LightBase light);

};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_RaycastCollector */ 
