#ifndef INCLUDED_away3d_textures_RenderCubeTexture
#define INCLUDED_away3d_textures_RenderCubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,CubeTextureBase)
HX_DECLARE_CLASS2(away3d,textures,RenderCubeTexture)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES RenderCubeTexture_obj : public  ::away3d::textures::CubeTextureBase_obj
{
	public:
		typedef  ::away3d::textures::CubeTextureBase_obj super;
		typedef RenderCubeTexture_obj OBJ_;
		RenderCubeTexture_obj();

	public:
		enum { _hx_ClassId = 0x4f27a6f9 };

		void __construct(int size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.textures.RenderCubeTexture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.textures.RenderCubeTexture"); }
		static ::hx::ObjectPtr< RenderCubeTexture_obj > __new(int size);
		static ::hx::ObjectPtr< RenderCubeTexture_obj > __alloc(::hx::Ctx *_hx_ctx,int size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderCubeTexture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderCubeTexture",90,0c,df,bd); }

		int set_size(int value);
		::Dynamic set_size_dyn();

		void uploadContent( ::openfl::display3D::textures::TextureBase texture);

		 ::openfl::display3D::textures::TextureBase createTexture( ::openfl::display3D::Context3D context);

};

} // end namespace away3d
} // end namespace textures

#endif /* INCLUDED_away3d_textures_RenderCubeTexture */ 
