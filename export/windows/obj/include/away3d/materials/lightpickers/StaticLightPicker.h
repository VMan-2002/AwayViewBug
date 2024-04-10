#ifndef INCLUDED_away3d_materials_lightpickers_StaticLightPicker
#define INCLUDED_away3d_materials_lightpickers_StaticLightPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,LightEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,StaticLightPicker)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace lightpickers{


class HXCPP_CLASS_ATTRIBUTES StaticLightPicker_obj : public  ::away3d::materials::lightpickers::LightPickerBase_obj
{
	public:
		typedef  ::away3d::materials::lightpickers::LightPickerBase_obj super;
		typedef StaticLightPicker_obj OBJ_;
		StaticLightPicker_obj();

	public:
		enum { _hx_ClassId = 0x2771a4c2 };

		void __construct(::Array< ::Dynamic> lights);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.lightpickers.StaticLightPicker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.lightpickers.StaticLightPicker"); }
		static ::hx::ObjectPtr< StaticLightPicker_obj > __new(::Array< ::Dynamic> lights);
		static ::hx::ObjectPtr< StaticLightPicker_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> lights);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StaticLightPicker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticLightPicker",d6,c2,09,31); }

		::Array< ::Dynamic> _lights;
		::Array< ::Dynamic> get_lights();
		::Dynamic get_lights_dyn();

		::Array< ::Dynamic> set_lights(::Array< ::Dynamic> value);
		::Dynamic set_lights_dyn();

		void clearListeners();
		::Dynamic clearListeners_dyn();

		void onCastShadowChange( ::away3d::events::LightEvent event);
		::Dynamic onCastShadowChange_dyn();

		void updateDirectionalCasting( ::away3d::lights::DirectionalLight light);
		::Dynamic updateDirectionalCasting_dyn();

		void updatePointCasting( ::away3d::lights::PointLight light);
		::Dynamic updatePointCasting_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace lightpickers

#endif /* INCLUDED_away3d_materials_lightpickers_StaticLightPicker */ 
