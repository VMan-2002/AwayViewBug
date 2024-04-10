#ifndef INCLUDED_away3d_materials_SegmentMaterial
#define INCLUDED_away3d_materials_SegmentMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SegmentMaterial)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SegmentPass)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES SegmentMaterial_obj : public  ::away3d::materials::MaterialBase_obj
{
	public:
		typedef  ::away3d::materials::MaterialBase_obj super;
		typedef SegmentMaterial_obj OBJ_;
		SegmentMaterial_obj();

	public:
		enum { _hx_ClassId = 0x6a9eaeed };

		void __construct(::hx::Null< Float >  __o_thickness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.SegmentMaterial")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.SegmentMaterial"); }
		static ::hx::ObjectPtr< SegmentMaterial_obj > __new(::hx::Null< Float >  __o_thickness);
		static ::hx::ObjectPtr< SegmentMaterial_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_thickness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SegmentMaterial_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SegmentMaterial",5a,5b,65,02); }

		 ::away3d::materials::passes::SegmentPass _screenPass;
};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_SegmentMaterial */ 
