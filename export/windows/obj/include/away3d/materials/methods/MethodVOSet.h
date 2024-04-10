#ifndef INCLUDED_away3d_materials_methods_MethodVOSet
#define INCLUDED_away3d_materials_methods_MethodVOSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,methods,EffectMethodBase)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVOSet)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES MethodVOSet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MethodVOSet_obj OBJ_;
		MethodVOSet_obj();

	public:
		enum { _hx_ClassId = 0x0d8a557f };

		void __construct( ::away3d::materials::methods::EffectMethodBase method);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.MethodVOSet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.MethodVOSet"); }
		static ::hx::ObjectPtr< MethodVOSet_obj > __new( ::away3d::materials::methods::EffectMethodBase method);
		static ::hx::ObjectPtr< MethodVOSet_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::materials::methods::EffectMethodBase method);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MethodVOSet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MethodVOSet",48,23,95,2e); }

		 ::away3d::materials::methods::EffectMethodBase method;
		 ::away3d::materials::methods::MethodVO data;
};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_MethodVOSet */ 
