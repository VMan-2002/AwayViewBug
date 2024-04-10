#ifndef INCLUDED_away3d_materials_methods_ShaderMethodSetup
#define INCLUDED_away3d_materials_methods_ShaderMethodSetup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(away3d,events,ShadingMethodEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicAmbientMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicDiffuseMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicNormalMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,BasicSpecularMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,ColorTransformMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,LightingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVOSet)
HX_DECLARE_CLASS3(away3d,materials,methods,ShaderMethodSetup)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadowMapMethodBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES ShaderMethodSetup_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef ShaderMethodSetup_obj OBJ_;
		ShaderMethodSetup_obj();

	public:
		enum { _hx_ClassId = 0x3e0c9df2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.ShaderMethodSetup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.ShaderMethodSetup"); }
		static ::hx::ObjectPtr< ShaderMethodSetup_obj > __new();
		static ::hx::ObjectPtr< ShaderMethodSetup_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderMethodSetup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderMethodSetup",97,68,df,2e); }

		 ::away3d::materials::methods::ColorTransformMethod _colorTransformMethod;
		 ::away3d::materials::methods::MethodVO _colorTransformMethodVO;
		 ::away3d::materials::methods::BasicNormalMethod _normalMethod;
		 ::away3d::materials::methods::MethodVO _normalMethodVO;
		 ::away3d::materials::methods::BasicAmbientMethod _ambientMethod;
		 ::away3d::materials::methods::MethodVO _ambientMethodVO;
		 ::away3d::materials::methods::ShadowMapMethodBase _shadowMethod;
		 ::away3d::materials::methods::MethodVO _shadowMethodVO;
		 ::away3d::materials::methods::BasicDiffuseMethod _diffuseMethod;
		 ::away3d::materials::methods::MethodVO _diffuseMethodVO;
		 ::away3d::materials::methods::BasicSpecularMethod _specularMethod;
		 ::away3d::materials::methods::MethodVO _specularMethodVO;
		 ::openfl::_Vector::ObjectVector _methods;
		void onShaderInvalidated( ::away3d::events::ShadingMethodEvent event);
		::Dynamic onShaderInvalidated_dyn();

		void invalidateShaderProgram();
		::Dynamic invalidateShaderProgram_dyn();

		 ::away3d::materials::methods::BasicNormalMethod get_normalMethod();
		::Dynamic get_normalMethod_dyn();

		 ::away3d::materials::methods::BasicNormalMethod set_normalMethod( ::away3d::materials::methods::BasicNormalMethod value);
		::Dynamic set_normalMethod_dyn();

		 ::away3d::materials::methods::BasicAmbientMethod get_ambientMethod();
		::Dynamic get_ambientMethod_dyn();

		 ::away3d::materials::methods::BasicAmbientMethod set_ambientMethod( ::away3d::materials::methods::BasicAmbientMethod value);
		::Dynamic set_ambientMethod_dyn();

		 ::away3d::materials::methods::ShadowMapMethodBase get_shadowMethod();
		::Dynamic get_shadowMethod_dyn();

		 ::away3d::materials::methods::ShadowMapMethodBase set_shadowMethod( ::away3d::materials::methods::ShadowMapMethodBase value);
		::Dynamic set_shadowMethod_dyn();

		 ::away3d::materials::methods::BasicDiffuseMethod get_diffuseMethod();
		::Dynamic get_diffuseMethod_dyn();

		 ::away3d::materials::methods::BasicDiffuseMethod set_diffuseMethod( ::away3d::materials::methods::BasicDiffuseMethod value);
		::Dynamic set_diffuseMethod_dyn();

		 ::away3d::materials::methods::BasicSpecularMethod get_specularMethod();
		::Dynamic get_specularMethod_dyn();

		 ::away3d::materials::methods::BasicSpecularMethod set_specularMethod( ::away3d::materials::methods::BasicSpecularMethod value);
		::Dynamic set_specularMethod_dyn();

		 ::away3d::materials::methods::ColorTransformMethod get_colorTransformMethod();
		::Dynamic get_colorTransformMethod_dyn();

		 ::away3d::materials::methods::ColorTransformMethod set_colorTransformMethod( ::away3d::materials::methods::ColorTransformMethod value);
		::Dynamic set_colorTransformMethod_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void clearListeners( ::away3d::materials::methods::ShadingMethodBase method);
		::Dynamic clearListeners_dyn();

		void addMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic addMethod_dyn();

		bool hasMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic hasMethod_dyn();

		void addMethodAt( ::away3d::materials::methods::EffectMethodBase method,int index);
		::Dynamic addMethodAt_dyn();

		 ::away3d::materials::methods::EffectMethodBase getMethodAt(int index);
		::Dynamic getMethodAt_dyn();

		int get_numMethods();
		::Dynamic get_numMethods_dyn();

		void removeMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic removeMethod_dyn();

		 ::away3d::materials::methods::MethodVOSet getMethodSetForMethod( ::away3d::materials::methods::EffectMethodBase method);
		::Dynamic getMethodSetForMethod_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ShaderMethodSetup */ 
