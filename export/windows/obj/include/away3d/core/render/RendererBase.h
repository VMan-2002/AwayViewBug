#ifndef INCLUDED_away3d_core_render_RendererBase
#define INCLUDED_away3d_core_render_RendererBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,BackgroundImageRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,sort,IEntitySorter)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES RendererBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RendererBase_obj OBJ_;
		RendererBase_obj();

	public:
		enum { _hx_ClassId = 0x0639ed90 };

		void __construct(::hx::Null< bool >  __o_renderToTexture);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.render.RendererBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.render.RendererBase"); }
		static ::hx::ObjectPtr< RendererBase_obj > __new(::hx::Null< bool >  __o_renderToTexture);
		static ::hx::ObjectPtr< RendererBase_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_renderToTexture);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RendererBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RendererBase",14,83,77,34); }

		 ::openfl::display3D::Context3D _context;
		 ::away3d::core::managers::Stage3DProxy _stage3DProxy;
		Float _backgroundR;
		Float _backgroundG;
		Float _backgroundB;
		Float _backgroundAlpha;
		bool _shareContext;
		 ::openfl::display3D::textures::TextureBase _renderTarget;
		int _renderTargetSurface;
		Float _viewWidth;
		Float _viewHeight;
		::Dynamic _renderableSorter;
		 ::away3d::core::render::BackgroundImageRenderer _backgroundImageRenderer;
		 ::away3d::textures::Texture2DBase _background;
		bool _renderToTexture;
		int _antiAlias;
		Float _textureRatioX;
		Float _textureRatioY;
		 ::openfl::display::BitmapData _snapshotBitmapData;
		bool _snapshotRequired;
		bool _clearOnRender;
		 ::openfl::geom::Matrix3D _rttViewProjectionMatrix;
		 ::away3d::core::traverse::EntityCollector createEntityCollector();
		::Dynamic createEntityCollector_dyn();

		Float get_viewWidth();
		::Dynamic get_viewWidth_dyn();

		Float set_viewWidth(Float value);
		::Dynamic set_viewWidth_dyn();

		Float get_viewHeight();
		::Dynamic get_viewHeight_dyn();

		Float set_viewHeight(Float value);
		::Dynamic set_viewHeight_dyn();

		bool get_renderToTexture();
		::Dynamic get_renderToTexture_dyn();

		::Dynamic get_renderableSorter();
		::Dynamic get_renderableSorter_dyn();

		::Dynamic set_renderableSorter(::Dynamic value);
		::Dynamic set_renderableSorter_dyn();

		bool get_clearOnRender();
		::Dynamic get_clearOnRender_dyn();

		bool set_clearOnRender(bool value);
		::Dynamic set_clearOnRender_dyn();

		Float get_backgroundR();
		::Dynamic get_backgroundR_dyn();

		virtual Float set_backgroundR(Float value);
		::Dynamic set_backgroundR_dyn();

		Float get_backgroundG();
		::Dynamic get_backgroundG_dyn();

		virtual Float set_backgroundG(Float value);
		::Dynamic set_backgroundG_dyn();

		Float get_backgroundB();
		::Dynamic get_backgroundB_dyn();

		virtual Float set_backgroundB(Float value);
		::Dynamic set_backgroundB_dyn();

		 ::away3d::core::managers::Stage3DProxy get_stage3DProxy();
		::Dynamic get_stage3DProxy_dyn();

		virtual  ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value);
		::Dynamic set_stage3DProxy_dyn();

		bool get_shareContext();
		::Dynamic get_shareContext_dyn();

		bool set_shareContext(bool value);
		::Dynamic set_shareContext_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		void render( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target, ::openfl::geom::Rectangle scissorRect,::hx::Null< int >  surfaceSelector);
		::Dynamic render_dyn();

		virtual void executeRender( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target, ::openfl::geom::Rectangle scissorRect,::hx::Null< int >  surfaceSelector);
		::Dynamic executeRender_dyn();

		void queueSnapshot( ::openfl::display::BitmapData bmd);
		::Dynamic queueSnapshot_dyn();

		void executeRenderToTexturePass( ::away3d::core::traverse::EntityCollector entityCollector);
		::Dynamic executeRenderToTexturePass_dyn();

		virtual void draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target);
		::Dynamic draw_dyn();

		void onContextUpdate( ::openfl::events::Event event);
		::Dynamic onContextUpdate_dyn();

		Float get_backgroundAlpha();
		::Dynamic get_backgroundAlpha_dyn();

		Float set_backgroundAlpha(Float value);
		::Dynamic set_backgroundAlpha_dyn();

		 ::away3d::textures::Texture2DBase get_background();
		::Dynamic get_background_dyn();

		 ::away3d::textures::Texture2DBase set_background( ::away3d::textures::Texture2DBase value);
		::Dynamic set_background_dyn();

		 ::away3d::core::render::BackgroundImageRenderer get_backgroundImageRenderer();
		::Dynamic get_backgroundImageRenderer_dyn();

		int get_antiAlias();
		::Dynamic get_antiAlias_dyn();

		int set_antiAlias(int antiAlias);
		::Dynamic set_antiAlias_dyn();

		Float get_textureRatioX();
		::Dynamic get_textureRatioX_dyn();

		Float set_textureRatioX(Float value);
		::Dynamic set_textureRatioX_dyn();

		Float get_textureRatioY();
		::Dynamic get_textureRatioY_dyn();

		Float set_textureRatioY(Float value);
		::Dynamic set_textureRatioY_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_RendererBase */ 
