#ifndef INCLUDED_away3d_materials_TextureMaterial
#define INCLUDED_away3d_materials_TextureMaterial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SinglePassMaterialBase)
HX_DECLARE_CLASS2(away3d,materials,TextureMaterial)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{


class HXCPP_CLASS_ATTRIBUTES TextureMaterial_obj : public  ::away3d::materials::SinglePassMaterialBase_obj
{
	public:
		typedef  ::away3d::materials::SinglePassMaterialBase_obj super;
		typedef TextureMaterial_obj OBJ_;
		TextureMaterial_obj();

	public:
		enum { _hx_ClassId = 0x208a1015 };

		void __construct( ::away3d::textures::Texture2DBase texture,::hx::Null< bool >  __o_smooth,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_mipmap, ::Dynamic __o_anisotropy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.TextureMaterial")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.TextureMaterial"); }
		static ::hx::ObjectPtr< TextureMaterial_obj > __new( ::away3d::textures::Texture2DBase texture,::hx::Null< bool >  __o_smooth,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_mipmap, ::Dynamic __o_anisotropy);
		static ::hx::ObjectPtr< TextureMaterial_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::textures::Texture2DBase texture,::hx::Null< bool >  __o_smooth,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_mipmap, ::Dynamic __o_anisotropy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextureMaterial_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextureMaterial",82,bc,50,b8); }

		bool get_animateUVs();
		::Dynamic get_animateUVs_dyn();

		bool set_animateUVs(bool value);
		::Dynamic set_animateUVs_dyn();

		bool get_animateUVs2();
		::Dynamic get_animateUVs2_dyn();

		bool set_animateUVs2(bool value);
		::Dynamic set_animateUVs2_dyn();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		 ::away3d::textures::Texture2DBase get_texture();
		::Dynamic get_texture_dyn();

		 ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		::Dynamic set_texture_dyn();

		 ::away3d::textures::Texture2DBase get_ambientTexture();
		::Dynamic get_ambientTexture_dyn();

		 ::away3d::textures::Texture2DBase set_ambientTexture( ::away3d::textures::Texture2DBase value);
		::Dynamic set_ambientTexture_dyn();

};

} // end namespace away3d
} // end namespace materials

#endif /* INCLUDED_away3d_materials_TextureMaterial */ 
