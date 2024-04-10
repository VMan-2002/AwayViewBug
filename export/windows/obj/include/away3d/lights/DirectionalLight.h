#ifndef INCLUDED_away3d_lights_DirectionalLight
#define INCLUDED_away3d_lights_DirectionalLight

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES DirectionalLight_obj : public  ::away3d::lights::LightBase_obj
{
	public:
		typedef  ::away3d::lights::LightBase_obj super;
		typedef DirectionalLight_obj OBJ_;
		DirectionalLight_obj();

	public:
		enum { _hx_ClassId = 0x07eee1ec };

		void __construct(::hx::Null< Float >  __o_xDir,::hx::Null< Float >  __o_yDir,::hx::Null< Float >  __o_zDir);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.lights.DirectionalLight")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.lights.DirectionalLight"); }
		static ::hx::ObjectPtr< DirectionalLight_obj > __new(::hx::Null< Float >  __o_xDir,::hx::Null< Float >  __o_yDir,::hx::Null< Float >  __o_zDir);
		static ::hx::ObjectPtr< DirectionalLight_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_xDir,::hx::Null< Float >  __o_yDir,::hx::Null< Float >  __o_zDir);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DirectionalLight_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DirectionalLight",ac,c7,2b,ed); }

		 ::openfl::geom::Vector3D _direction;
		 ::openfl::geom::Vector3D _tmpLookAt;
		 ::openfl::geom::Vector3D _sceneDirection;
		 ::openfl::_Vector::FloatVector _projAABBPoints;
		 ::away3d::core::partition::EntityNode createEntityPartitionNode();

		 ::openfl::geom::Vector3D get_sceneDirection();
		::Dynamic get_sceneDirection_dyn();

		 ::openfl::geom::Vector3D get_direction();
		::Dynamic get_direction_dyn();

		 ::openfl::geom::Vector3D set_direction( ::openfl::geom::Vector3D value);
		::Dynamic set_direction_dyn();

		 ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume();

		void updateBounds();

		void updateSceneTransform();

		 ::away3d::lights::shadowmaps::ShadowMapperBase createShadowMapper();

		 ::openfl::geom::Matrix3D getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target);

};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_DirectionalLight */ 
