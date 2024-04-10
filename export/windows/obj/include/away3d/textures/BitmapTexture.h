#ifndef INCLUDED_away3d_textures_BitmapTexture
#define INCLUDED_away3d_textures_BitmapTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,BitmapTexture)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES BitmapTexture_obj : public  ::away3d::textures::Texture2DBase_obj
{
	public:
		typedef  ::away3d::textures::Texture2DBase_obj super;
		typedef BitmapTexture_obj OBJ_;
		BitmapTexture_obj();

	public:
		enum { _hx_ClassId = 0x077d8e75 };

		void __construct( ::openfl::display::BitmapData bitmapData,::hx::Null< bool >  __o_generateMipmaps);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.textures.BitmapTexture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.textures.BitmapTexture"); }
		static ::hx::ObjectPtr< BitmapTexture_obj > __new( ::openfl::display::BitmapData bitmapData,::hx::Null< bool >  __o_generateMipmaps);
		static ::hx::ObjectPtr< BitmapTexture_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData,::hx::Null< bool >  __o_generateMipmaps);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapTexture_obj();

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
		::String __ToString() const { return HX_("BitmapTexture",8c,9c,5e,97); }

		static void __boot();
		static ::Array< ::Dynamic> _mipMaps;
		static ::Array< ::Dynamic> _mipMapUses;
		 ::openfl::display::BitmapData _bitmapData;
		 ::openfl::display::BitmapData _mipMapHolder;
		bool _generateMipmaps;
		 ::openfl::display::BitmapData get_bitmapData();
		::Dynamic get_bitmapData_dyn();

		 ::openfl::display::BitmapData set_bitmapData( ::openfl::display::BitmapData value);
		::Dynamic set_bitmapData_dyn();

		void uploadContent( ::openfl::display3D::textures::TextureBase texture);

		void getMipMapHolder();
		::Dynamic getMipMapHolder_dyn();

		void freeMipMapHolder();
		::Dynamic freeMipMapHolder_dyn();

		void dispose();

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_BitmapTexture */ 
