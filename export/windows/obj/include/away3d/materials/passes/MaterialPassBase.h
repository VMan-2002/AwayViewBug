#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#define INCLUDED_away3d_materials_passes_MaterialPassBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS3(away3d,animators,data,AnimationRegisterCache)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES MaterialPassBase_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef MaterialPassBase_obj OBJ_;
		MaterialPassBase_obj();

	public:
		enum { _hx_ClassId = 0x5a0f1d75 };

		void __construct(::hx::Null< bool >  __o_renderToTexture);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.passes.MaterialPassBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.passes.MaterialPassBase"); }
		static ::hx::ObjectPtr< MaterialPassBase_obj > __new(::hx::Null< bool >  __o_renderToTexture);
		static ::hx::ObjectPtr< MaterialPassBase_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_renderToTexture);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MaterialPassBase_obj();

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
		::String __ToString() const { return HX_("MaterialPassBase",69,a9,46,14); }

		static void __boot();
		static  ::openfl::_Vector::IntVector _previousUsedStreams;
		static  ::openfl::_Vector::IntVector _previousUsedTexs;
		 ::away3d::materials::MaterialBase _material;
		::Dynamic _animationSet;
		 ::openfl::_Vector::ObjectVector _program3Ds;
		 ::openfl::_Vector::IntVector _program3Dids;
		 ::openfl::_Vector::ObjectVector _context3Ds;
		int _numUsedStreams;
		int _numUsedTextures;
		int _numUsedVertexConstants;
		int _numUsedFragmentConstants;
		int _numUsedVaryings;
		bool _smooth;
		bool _repeat;
		bool _mipmap;
		 ::Dynamic _anisotropy;
		 ::Dynamic _depthCompareMode;
		 ::Dynamic _blendFactorSource;
		 ::Dynamic _blendFactorDest;
		bool _enableBlending;
		bool _bothSides;
		 ::away3d::materials::lightpickers::LightPickerBase _lightPicker;
		 ::openfl::_Vector::ObjectVector _animatableAttributes;
		 ::openfl::_Vector::ObjectVector _animationTargetRegisters;
		::String _shadedTarget;
		 ::Dynamic _defaultCulling;
		bool _renderToTexture;
		 ::openfl::display3D::textures::TextureBase _oldTarget;
		int _oldSurface;
		bool _oldDepthStencil;
		 ::openfl::geom::Rectangle _oldRect;
		bool _alphaPremultiplied;
		bool _needFragmentAnimation;
		bool _needUVAnimation;
		::String _UVTarget;
		::String _UVSource;
		int _agalVersion;
		bool _writeDepth;
		 ::away3d::animators::data::AnimationRegisterCache animationRegisterCache;
		 ::away3d::materials::MaterialBase get_material();
		::Dynamic get_material_dyn();

		 ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		::Dynamic set_material_dyn();

		bool get_writeDepth();
		::Dynamic get_writeDepth_dyn();

		bool set_writeDepth(bool value);
		::Dynamic set_writeDepth_dyn();

		bool get_mipmap();
		::Dynamic get_mipmap_dyn();

		virtual bool set_mipmap(bool value);
		::Dynamic set_mipmap_dyn();

		 ::Dynamic get_anisotropy();
		::Dynamic get_anisotropy_dyn();

		virtual  ::Dynamic set_anisotropy( ::Dynamic value);
		::Dynamic set_anisotropy_dyn();

		bool get_smooth();
		::Dynamic get_smooth_dyn();

		bool set_smooth(bool value);
		::Dynamic set_smooth_dyn();

		bool get_repeat();
		::Dynamic get_repeat_dyn();

		bool set_repeat(bool value);
		::Dynamic set_repeat_dyn();

		bool get_bothSides();
		::Dynamic get_bothSides_dyn();

		bool set_bothSides(bool value);
		::Dynamic set_bothSides_dyn();

		 ::Dynamic get_depthCompareMode();
		::Dynamic get_depthCompareMode_dyn();

		 ::Dynamic set_depthCompareMode( ::Dynamic value);
		::Dynamic set_depthCompareMode_dyn();

		::Dynamic get_animationSet();
		::Dynamic get_animationSet_dyn();

		::Dynamic set_animationSet(::Dynamic value);
		::Dynamic set_animationSet_dyn();

		bool get_renderToTexture();
		::Dynamic get_renderToTexture_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		int get_numUsedStreams();
		::Dynamic get_numUsedStreams_dyn();

		int get_numUsedVertexConstants();
		::Dynamic get_numUsedVertexConstants_dyn();

		int get_numUsedVaryings();
		::Dynamic get_numUsedVaryings_dyn();

		int get_numUsedFragmentConstants();
		::Dynamic get_numUsedFragmentConstants_dyn();

		bool get_needFragmentAnimation();
		::Dynamic get_needFragmentAnimation_dyn();

		bool get_needUVAnimation();
		::Dynamic get_needUVAnimation_dyn();

		void updateAnimationState(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);
		::Dynamic updateAnimationState_dyn();

		virtual void render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection);
		::Dynamic render_dyn();

		virtual ::String getVertexCode();
		::Dynamic getVertexCode_dyn();

		virtual ::String getFragmentCode(::String fragmentAnimatorCode);
		::Dynamic getFragmentCode_dyn();

		void setBlendMode( ::Dynamic value);
		::Dynamic setBlendMode_dyn();

		virtual void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);
		::Dynamic activate_dyn();

		virtual void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic deactivate_dyn();

		virtual void invalidateShaderProgram(::hx::Null< bool >  updateMaterial);
		::Dynamic invalidateShaderProgram_dyn();

		virtual void updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic updateProgram_dyn();

		 ::away3d::materials::lightpickers::LightPickerBase get_lightPicker();
		::Dynamic get_lightPicker_dyn();

		 ::away3d::materials::lightpickers::LightPickerBase set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value);
		::Dynamic set_lightPicker_dyn();

		void onLightsChange( ::openfl::events::Event event);
		::Dynamic onLightsChange_dyn();

		virtual void updateLights();
		::Dynamic updateLights_dyn();

		bool get_alphaPremultiplied();
		::Dynamic get_alphaPremultiplied_dyn();

		bool set_alphaPremultiplied(bool value);
		::Dynamic set_alphaPremultiplied_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_MaterialPassBase */ 
