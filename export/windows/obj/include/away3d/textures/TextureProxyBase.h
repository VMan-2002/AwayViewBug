#ifndef INCLUDED_away3d_textures_TextureProxyBase
#define INCLUDED_away3d_textures_TextureProxyBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES TextureProxyBase_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef TextureProxyBase_obj OBJ_;
		TextureProxyBase_obj();

	public:
		enum { _hx_ClassId = 0x6775b71b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.textures.TextureProxyBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.textures.TextureProxyBase"); }
		static ::hx::ObjectPtr< TextureProxyBase_obj > __new();
		static ::hx::ObjectPtr< TextureProxyBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextureProxyBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TextureProxyBase",64,51,65,8a); }

		 ::Dynamic _format;
		bool _hasMipmaps;
		 ::openfl::_Vector::ObjectVector _textures;
		 ::openfl::_Vector::ObjectVector _dirty;
		int _width;
		int _height;
		bool get_hasMipMaps();
		::Dynamic get_hasMipMaps_dyn();

		 ::Dynamic get_format();
		::Dynamic get_format_dyn();

		::String get_assetType();
		::Dynamic get_assetType_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		virtual int set_width(int value);
		::Dynamic set_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		virtual int set_height(int value);
		::Dynamic set_height_dyn();

		 ::openfl::display3D::textures::TextureBase getTextureForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic getTextureForStage3D_dyn();

		virtual void uploadContent( ::openfl::display3D::textures::TextureBase texture);
		::Dynamic uploadContent_dyn();

		void setSize(int width,int height);
		::Dynamic setSize_dyn();

		void invalidateContent();
		::Dynamic invalidateContent_dyn();

		void invalidateSize();
		::Dynamic invalidateSize_dyn();

		virtual  ::openfl::display3D::textures::TextureBase createTexture( ::openfl::display3D::Context3D context);
		::Dynamic createTexture_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_TextureProxyBase */ 
