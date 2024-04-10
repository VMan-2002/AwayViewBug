#ifndef INCLUDED_away3d_lights_PointLight
#define INCLUDED_away3d_lights_PointLight

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
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS3(away3d,lights,shadowmaps,ShadowMapperBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace lights{


class HXCPP_CLASS_ATTRIBUTES PointLight_obj : public  ::away3d::lights::LightBase_obj
{
	public:
		typedef  ::away3d::lights::LightBase_obj super;
		typedef PointLight_obj OBJ_;
		PointLight_obj();

	public:
		enum { _hx_ClassId = 0x498598c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.lights.PointLight")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.lights.PointLight"); }
		static ::hx::ObjectPtr< PointLight_obj > __new();
		static ::hx::ObjectPtr< PointLight_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PointLight_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PointLight",86,ae,6b,4b); }

		Float _radius;
		Float _fallOff;
		Float _fallOffFactor;
		 ::away3d::lights::shadowmaps::ShadowMapperBase createShadowMapper();

		 ::away3d::core::partition::EntityNode createEntityPartitionNode();

		Float get_radius();
		::Dynamic get_radius_dyn();

		Float set_radius(Float value);
		::Dynamic set_radius_dyn();

		Float fallOffFactor();
		::Dynamic fallOffFactor_dyn();

		Float get_fallOff();
		::Dynamic get_fallOff_dyn();

		Float set_fallOff(Float value);
		::Dynamic set_fallOff_dyn();

		void updateBounds();

		 ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume();

		 ::openfl::geom::Matrix3D getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target);

};

} // end namespace away3d
} // end namespace lights

#endif /* INCLUDED_away3d_lights_PointLight */ 
