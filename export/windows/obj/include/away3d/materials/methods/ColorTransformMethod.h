#ifndef INCLUDED_away3d_materials_methods_ColorTransformMethod
#define INCLUDED_away3d_materials_methods_ColorTransformMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,ColorTransformMethod)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES ColorTransformMethod_obj : public  ::away3d::materials::methods::EffectMethodBase_obj
{
	public:
		typedef  ::away3d::materials::methods::EffectMethodBase_obj super;
		typedef ColorTransformMethod_obj OBJ_;
		ColorTransformMethod_obj();

	public:
		enum { _hx_ClassId = 0x0efad0ef };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.ColorTransformMethod")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.ColorTransformMethod"); }
		static ::hx::ObjectPtr< ColorTransformMethod_obj > __new();
		static ::hx::ObjectPtr< ColorTransformMethod_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorTransformMethod_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorTransformMethod",6a,7b,92,df); }

		 ::openfl::geom::ColorTransform _colorTransform;
		 ::openfl::geom::ColorTransform get_colorTransform();
		::Dynamic get_colorTransform_dyn();

		 ::openfl::geom::ColorTransform set_colorTransform( ::openfl::geom::ColorTransform value);
		::Dynamic set_colorTransform_dyn();

		::String getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg);

		void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ColorTransformMethod */ 
