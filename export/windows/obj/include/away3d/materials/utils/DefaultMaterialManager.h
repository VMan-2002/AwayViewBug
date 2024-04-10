#ifndef INCLUDED_away3d_materials_utils_DefaultMaterialManager
#define INCLUDED_away3d_materials_utils_DefaultMaterialManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(away3d,materials,SinglePassMaterialBase)
HX_DECLARE_CLASS2(away3d,materials,TextureMaterial)
HX_DECLARE_CLASS3(away3d,materials,utils,DefaultMaterialManager)
HX_DECLARE_CLASS2(away3d,textures,BitmapTexture)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES DefaultMaterialManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DefaultMaterialManager_obj OBJ_;
		DefaultMaterialManager_obj();

	public:
		enum { _hx_ClassId = 0x3556bba9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.materials.utils.DefaultMaterialManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.materials.utils.DefaultMaterialManager"); }

		inline static ::hx::ObjectPtr< DefaultMaterialManager_obj > __new() {
			::hx::ObjectPtr< DefaultMaterialManager_obj > __this = new DefaultMaterialManager_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DefaultMaterialManager_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DefaultMaterialManager_obj *__this = (DefaultMaterialManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultMaterialManager_obj), false, "away3d.materials.utils.DefaultMaterialManager"));
			*(void **)__this = DefaultMaterialManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultMaterialManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultMaterialManager",e5,34,5a,ac); }

		static  ::openfl::display::BitmapData _defaultTextureBitmapData;
		static  ::away3d::materials::TextureMaterial _defaultMaterial;
		static  ::away3d::textures::BitmapTexture _defaultTexture;
		static  ::away3d::materials::TextureMaterial getDefaultMaterial(::Dynamic renderable);
		static ::Dynamic getDefaultMaterial_dyn();

		static  ::away3d::textures::BitmapTexture getDefaultTexture(::Dynamic renderable);
		static ::Dynamic getDefaultTexture_dyn();

		static void createDefaultTexture();
		static ::Dynamic createDefaultTexture_dyn();

		static void createDefaultMaterial();
		static ::Dynamic createDefaultMaterial_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace utils

#endif /* INCLUDED_away3d_materials_utils_DefaultMaterialManager */ 
