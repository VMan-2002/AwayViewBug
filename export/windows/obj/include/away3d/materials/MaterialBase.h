#ifndef INCLUDED_away3d_materials_MaterialBase
#define INCLUDED_away3d_materials_MaterialBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,passes,DepthMapPass)
HX_DECLARE_CLASS3(away3d,materials,passes,DistanceMapPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES MaterialBase_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef MaterialBase_obj OBJ_;
		MaterialBase_obj();

	public:
		enum { _hx_ClassId = 0x7e319f05 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.MaterialBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.MaterialBase"); }
		static ::hx::ObjectPtr< MaterialBase_obj > __new();
		static ::hx::ObjectPtr< MaterialBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MaterialBase_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("MaterialBase",78,9c,6a,a0); }

		static void __boot();
		static int MATERIAL_ID_COUNT;
		 ::Dynamic extra;
		::String _classification;
		int _uniqueId;
		int _renderOrderId;
		int _depthPassId;
		bool _bothSides;
		::Dynamic _animationSet;
		 ::openfl::_Vector::ObjectVector _owners;
		bool _alphaPremultiplied;
		 ::Dynamic _blendMode;
		int _numPasses;
		 ::openfl::_Vector::ObjectVector _passes;
		bool _mipmap;
		bool _smooth;
		bool _repeat;
		 ::Dynamic _anisotropy;
		 ::away3d::materials::passes::DepthMapPass _depthPass;
		 ::away3d::materials::passes::DistanceMapPass _distancePass;
		 ::away3d::materials::lightpickers::LightPickerBase _lightPicker;
		bool _distanceBasedDepthRender;
		 ::Dynamic _depthCompareMode;
		::String get_assetType();
		::Dynamic get_assetType_dyn();

		 ::away3d::materials::lightpickers::LightPickerBase get_lightPicker();
		::Dynamic get_lightPicker_dyn();

		virtual  ::away3d::materials::lightpickers::LightPickerBase set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value);
		::Dynamic set_lightPicker_dyn();

		bool get_mipmap();
		::Dynamic get_mipmap_dyn();

		virtual bool set_mipmap(bool value);
		::Dynamic set_mipmap_dyn();

		bool get_smooth();
		::Dynamic get_smooth_dyn();

		bool set_smooth(bool value);
		::Dynamic set_smooth_dyn();

		 ::Dynamic get_depthCompareMode();
		::Dynamic get_depthCompareMode_dyn();

		virtual  ::Dynamic set_depthCompareMode( ::Dynamic value);
		::Dynamic set_depthCompareMode_dyn();

		bool get_repeat();
		::Dynamic get_repeat_dyn();

		bool set_repeat(bool value);
		::Dynamic set_repeat_dyn();

		 ::Dynamic get_anisotropy();
		::Dynamic get_anisotropy_dyn();

		 ::Dynamic set_anisotropy( ::Dynamic value);
		::Dynamic set_anisotropy_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		bool get_bothSides();
		::Dynamic get_bothSides_dyn();

		bool set_bothSides(bool value);
		::Dynamic set_bothSides_dyn();

		 ::Dynamic get_blendMode();
		::Dynamic get_blendMode_dyn();

		virtual  ::Dynamic set_blendMode( ::Dynamic value);
		::Dynamic set_blendMode_dyn();

		bool get_alphaPremultiplied();
		::Dynamic get_alphaPremultiplied_dyn();

		bool set_alphaPremultiplied(bool value);
		::Dynamic set_alphaPremultiplied_dyn();

		virtual bool get_requiresBlending();
		::Dynamic get_requiresBlending_dyn();

		int get_uniqueId();
		::Dynamic get_uniqueId_dyn();

		int get_numPasses();
		::Dynamic get_numPasses_dyn();

		bool hasDepthAlphaThreshold();
		::Dynamic hasDepthAlphaThreshold_dyn();

		virtual void activateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  distanceBased);
		::Dynamic activateForDepth_dyn();

		void deactivateForDepth( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic deactivateForDepth_dyn();

		void renderDepth(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection);
		::Dynamic renderDepth_dyn();

		bool passRendersToTexture(int index);
		::Dynamic passRendersToTexture_dyn();

		void activatePass(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);
		::Dynamic activatePass_dyn();

		void deactivatePass(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic deactivatePass_dyn();

		void renderPass(int index,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::geom::Matrix3D viewProjection);
		::Dynamic renderPass_dyn();

		void addOwner(::Dynamic owner);
		::Dynamic addOwner_dyn();

		void removeOwner(::Dynamic owner);
		::Dynamic removeOwner_dyn();

		 ::openfl::_Vector::ObjectVector get_owners();
		::Dynamic get_owners_dyn();

		virtual void updateMaterial( ::openfl::display3D::Context3D context);
		::Dynamic updateMaterial_dyn();

		void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic deactivate_dyn();

		void invalidatePasses( ::away3d::materials::passes::MaterialPassBase triggerPass);
		::Dynamic invalidatePasses_dyn();

		void removePass( ::away3d::materials::passes::MaterialPassBase pass);
		::Dynamic removePass_dyn();

		void clearPasses();
		::Dynamic clearPasses_dyn();

		void addPass( ::away3d::materials::passes::MaterialPassBase pass);
		::Dynamic addPass_dyn();

		void onPassChange( ::openfl::events::Event event);
		::Dynamic onPassChange_dyn();

		void onDistancePassChange( ::openfl::events::Event event);
		::Dynamic onDistancePassChange_dyn();

		void onDepthPassChange( ::openfl::events::Event event);
		::Dynamic onDepthPassChange_dyn();

};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_MaterialBase */ 
