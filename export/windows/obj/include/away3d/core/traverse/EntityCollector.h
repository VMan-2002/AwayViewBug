#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#define INCLUDED_away3d_core_traverse_EntityCollector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItem)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItemPool)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItemPool)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace traverse{


class HXCPP_CLASS_ATTRIBUTES EntityCollector_obj : public  ::away3d::core::traverse::PartitionTraverser_obj
{
	public:
		typedef  ::away3d::core::traverse::PartitionTraverser_obj super;
		typedef EntityCollector_obj OBJ_;
		EntityCollector_obj();

	public:
		enum { _hx_ClassId = 0x6a4dd616 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.traverse.EntityCollector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.traverse.EntityCollector"); }
		static ::hx::ObjectPtr< EntityCollector_obj > __new();
		static ::hx::ObjectPtr< EntityCollector_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EntityCollector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EntityCollector",8a,1d,ec,cd); }

		::Dynamic _skyBox;
		 ::away3d::core::data::RenderableListItem _opaqueRenderableHead;
		 ::away3d::core::data::RenderableListItem _blendedRenderableHead;
		 ::away3d::core::data::EntityListItem _entityHead;
		 ::away3d::core::data::RenderableListItemPool _renderableListItemPool;
		 ::away3d::core::data::EntityListItemPool _entityListItemPool;
		 ::openfl::_Vector::ObjectVector _lights;
		 ::openfl::_Vector::ObjectVector _directionalLights;
		 ::openfl::_Vector::ObjectVector _pointLights;
		 ::openfl::_Vector::ObjectVector _lightProbes;
		int _numEntities;
		int _numLights;
		int _numTriangles;
		int _numMouseEnableds;
		 ::away3d::cameras::Camera3D _camera;
		int _numDirectionalLights;
		int _numPointLights;
		int _numLightProbes;
		 ::openfl::geom::Vector3D _cameraForward;
		 ::openfl::_Vector::ObjectVector _customCullPlanes;
		 ::openfl::_Vector::ObjectVector _cullPlanes;
		int _numCullPlanes;
		void init();
		::Dynamic init_dyn();

		 ::away3d::cameras::Camera3D get_camera();
		::Dynamic get_camera_dyn();

		 ::away3d::cameras::Camera3D set_camera( ::away3d::cameras::Camera3D value);
		::Dynamic set_camera_dyn();

		 ::openfl::_Vector::ObjectVector get_cullPlanes();
		::Dynamic get_cullPlanes_dyn();

		 ::openfl::_Vector::ObjectVector set_cullPlanes( ::openfl::_Vector::ObjectVector value);
		::Dynamic set_cullPlanes_dyn();

		int get_numMouseEnableds();
		::Dynamic get_numMouseEnableds_dyn();

		::Dynamic get_skyBox();
		::Dynamic get_skyBox_dyn();

		 ::away3d::core::data::RenderableListItem get_opaqueRenderableHead();
		::Dynamic get_opaqueRenderableHead_dyn();

		 ::away3d::core::data::RenderableListItem set_opaqueRenderableHead( ::away3d::core::data::RenderableListItem value);
		::Dynamic set_opaqueRenderableHead_dyn();

		 ::away3d::core::data::RenderableListItem get_blendedRenderableHead();
		::Dynamic get_blendedRenderableHead_dyn();

		 ::away3d::core::data::RenderableListItem set_blendedRenderableHead( ::away3d::core::data::RenderableListItem value);
		::Dynamic set_blendedRenderableHead_dyn();

		 ::away3d::core::data::EntityListItem get_entityHead();
		::Dynamic get_entityHead_dyn();

		 ::openfl::_Vector::ObjectVector get_lights();
		::Dynamic get_lights_dyn();

		 ::openfl::_Vector::ObjectVector get_directionalLights();
		::Dynamic get_directionalLights_dyn();

		 ::openfl::_Vector::ObjectVector get_pointLights();
		::Dynamic get_pointLights_dyn();

		 ::openfl::_Vector::ObjectVector get_lightProbes();
		::Dynamic get_lightProbes_dyn();

		void clear();
		::Dynamic clear_dyn();

		virtual bool enterNode( ::away3d::core::partition::NodeBase node);

		virtual void applySkyBox(::Dynamic renderable);

		virtual void applyRenderable(::Dynamic renderable);

		void applyEntity( ::away3d::entities::Entity entity);

		virtual void applyUnknownLight( ::away3d::lights::LightBase light);

		virtual void applyDirectionalLight( ::away3d::lights::DirectionalLight light);

		virtual void applyPointLight( ::away3d::lights::PointLight light);

		virtual void applyLightProbe( ::away3d::lights::LightProbe light);

		int get_numTriangles();
		::Dynamic get_numTriangles_dyn();

		void cleanUp();
		::Dynamic cleanUp_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_EntityCollector */ 
