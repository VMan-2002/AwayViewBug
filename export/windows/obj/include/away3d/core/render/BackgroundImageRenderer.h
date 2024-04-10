#ifndef INCLUDED_away3d_core_render_BackgroundImageRenderer
#define INCLUDED_away3d_core_render_BackgroundImageRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,BackgroundImageRenderer)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES BackgroundImageRenderer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BackgroundImageRenderer_obj OBJ_;
		BackgroundImageRenderer_obj();

	public:
		enum { _hx_ClassId = 0x0d222a0c };

		void __construct( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.render.BackgroundImageRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.render.BackgroundImageRenderer"); }
		static ::hx::ObjectPtr< BackgroundImageRenderer_obj > __new( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static ::hx::ObjectPtr< BackgroundImageRenderer_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackgroundImageRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BackgroundImageRenderer",d0,3a,db,e3); }

		 ::openfl::display3D::Program3D _program3d;
		 ::away3d::textures::Texture2DBase _texture;
		 ::openfl::display3D::IndexBuffer3D _indexBuffer;
		 ::openfl::display3D::VertexBuffer3D _vertexBuffer;
		 ::away3d::core::managers::Stage3DProxy _stage3DProxy;
		 ::openfl::display3D::Context3D _context;
		 ::away3d::core::managers::Stage3DProxy get_stage3DProxy();
		::Dynamic get_stage3DProxy_dyn();

		 ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value);
		::Dynamic set_stage3DProxy_dyn();

		void removeBuffers();
		::Dynamic removeBuffers_dyn();

		::String getVertexCode();
		::Dynamic getVertexCode_dyn();

		::String getFragmentCode();
		::Dynamic getFragmentCode_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void render();
		::Dynamic render_dyn();

		void initBuffers( ::openfl::display3D::Context3D context);
		::Dynamic initBuffers_dyn();

		 ::away3d::textures::Texture2DBase get_texture();
		::Dynamic get_texture_dyn();

		 ::away3d::textures::Texture2DBase set_texture( ::away3d::textures::Texture2DBase value);
		::Dynamic set_texture_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_BackgroundImageRenderer */ 
