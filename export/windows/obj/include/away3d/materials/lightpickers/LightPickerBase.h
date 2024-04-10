#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#define INCLUDED_away3d_materials_lightpickers_LightPickerBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace lightpickers{


class HXCPP_CLASS_ATTRIBUTES LightPickerBase_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef LightPickerBase_obj OBJ_;
		LightPickerBase_obj();

	public:
		enum { _hx_ClassId = 0x658b889d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.lightpickers.LightPickerBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.lightpickers.LightPickerBase"); }
		static ::hx::ObjectPtr< LightPickerBase_obj > __new();
		static ::hx::ObjectPtr< LightPickerBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LightPickerBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LightPickerBase",15,33,b2,8c); }

		int _numPointLights;
		int _numDirectionalLights;
		int _numCastingPointLights;
		int _numCastingDirectionalLights;
		int _numLightProbes;
		 ::openfl::_Vector::ObjectVector _allPickedLights;
		 ::openfl::_Vector::ObjectVector _pointLights;
		 ::openfl::_Vector::ObjectVector _castingPointLights;
		 ::openfl::_Vector::ObjectVector _directionalLights;
		 ::openfl::_Vector::ObjectVector _castingDirectionalLights;
		 ::openfl::_Vector::ObjectVector _lightProbes;
		 ::openfl::_Vector::FloatVector _lightProbeWeights;
		void dispose();
		::Dynamic dispose_dyn();

		::String get_assetType();
		::Dynamic get_assetType_dyn();

		int get_numDirectionalLights();
		::Dynamic get_numDirectionalLights_dyn();

		int get_numPointLights();
		::Dynamic get_numPointLights_dyn();

		int get_numCastingDirectionalLights();
		::Dynamic get_numCastingDirectionalLights_dyn();

		int get_numCastingPointLights();
		::Dynamic get_numCastingPointLights_dyn();

		int get_numLightProbes();
		::Dynamic get_numLightProbes_dyn();

		 ::openfl::_Vector::ObjectVector get_pointLights();
		::Dynamic get_pointLights_dyn();

		 ::openfl::_Vector::ObjectVector get_directionalLights();
		::Dynamic get_directionalLights_dyn();

		 ::openfl::_Vector::ObjectVector get_castingPointLights();
		::Dynamic get_castingPointLights_dyn();

		 ::openfl::_Vector::ObjectVector get_castingDirectionalLights();
		::Dynamic get_castingDirectionalLights_dyn();

		 ::openfl::_Vector::ObjectVector get_lightProbes();
		::Dynamic get_lightProbes_dyn();

		 ::openfl::_Vector::FloatVector get_lightProbeWeights();
		::Dynamic get_lightProbeWeights_dyn();

		 ::openfl::_Vector::ObjectVector get_allPickedLights();
		::Dynamic get_allPickedLights_dyn();

		void collectLights(::Dynamic renderable, ::away3d::core::traverse::EntityCollector entityCollector);
		::Dynamic collectLights_dyn();

		void updateProbeWeights(::Dynamic renderable);
		::Dynamic updateProbeWeights_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace lightpickers

#endif /* INCLUDED_away3d_materials_lightpickers_LightPickerBase */ 
