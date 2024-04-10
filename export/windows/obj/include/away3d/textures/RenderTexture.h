#ifndef INCLUDED_away3d_textures_RenderTexture
#define INCLUDED_away3d_textures_RenderTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,RenderTexture)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES RenderTexture_obj : public  ::away3d::textures::Texture2DBase_obj
{
	public:
		typedef  ::away3d::textures::Texture2DBase_obj super;
		typedef RenderTexture_obj OBJ_;
		RenderTexture_obj();

	public:
		enum { _hx_ClassId = 0x52dd7dee };

		void __construct(int width,int height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.textures.RenderTexture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.textures.RenderTexture"); }
		static ::hx::ObjectPtr< RenderTexture_obj > __new(int width,int height);
		static ::hx::ObjectPtr< RenderTexture_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderTexture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderTexture",05,8c,be,e2); }

		int set_width(int value);

		int set_height(int value);

		void uploadContent( ::openfl::display3D::textures::TextureBase texture);

		 ::openfl::display3D::textures::TextureBase createTexture( ::openfl::display3D::Context3D context);

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_RenderTexture */ 
