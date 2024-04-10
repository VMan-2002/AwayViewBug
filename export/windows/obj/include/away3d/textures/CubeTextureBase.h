#ifndef INCLUDED_away3d_textures_CubeTextureBase
#define INCLUDED_away3d_textures_CubeTextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES CubeTextureBase_obj : public  ::away3d::textures::TextureProxyBase_obj
{
	public:
		typedef  ::away3d::textures::TextureProxyBase_obj super;
		typedef CubeTextureBase_obj OBJ_;
		CubeTextureBase_obj();

	public:
		enum { _hx_ClassId = 0x6238b1a0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.textures.CubeTextureBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.textures.CubeTextureBase"); }
		static ::hx::ObjectPtr< CubeTextureBase_obj > __new();
		static ::hx::ObjectPtr< CubeTextureBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CubeTextureBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CubeTextureBase",77,b3,0a,77); }

		int get_size();
		::Dynamic get_size_dyn();

		virtual  ::openfl::display3D::textures::TextureBase createTexture( ::openfl::display3D::Context3D context);

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_CubeTextureBase */ 
