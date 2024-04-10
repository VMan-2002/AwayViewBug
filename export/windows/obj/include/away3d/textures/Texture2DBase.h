#ifndef INCLUDED_away3d_textures_Texture2DBase
#define INCLUDED_away3d_textures_Texture2DBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES Texture2DBase_obj : public  ::away3d::textures::TextureProxyBase_obj
{
	public:
		typedef  ::away3d::textures::TextureProxyBase_obj super;
		typedef Texture2DBase_obj OBJ_;
		Texture2DBase_obj();

	public:
		enum { _hx_ClassId = 0x679431e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.textures.Texture2DBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.textures.Texture2DBase"); }
		static ::hx::ObjectPtr< Texture2DBase_obj > __new();
		static ::hx::ObjectPtr< Texture2DBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Texture2DBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Texture2DBase",fe,3f,75,f7); }

		virtual  ::openfl::display3D::textures::TextureBase createTexture( ::openfl::display3D::Context3D context);

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_Texture2DBase */ 
