#ifndef INCLUDED_away3d_containers_View3D
#define INCLUDED_away3d_containers_View3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Mouse3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,RTTBufferManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,managers,Touch3DManager)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,Filter3DRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS2(away3d,filters,Filter3DBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES View3D_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef View3D_obj OBJ_;
		View3D_obj();

	public:
		enum { _hx_ClassId = 0x3cb27607 };

		void __construct( ::away3d::containers::Scene3D scene, ::away3d::cameras::Camera3D camera, ::away3d::core::render::RendererBase renderer,::hx::Null< bool >  __o_forceSoftware,::String __o_profile,::hx::Null< int >  __o_contextIndex);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.containers.View3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.containers.View3D"); }
		static ::hx::ObjectPtr< View3D_obj > __new( ::away3d::containers::Scene3D scene, ::away3d::cameras::Camera3D camera, ::away3d::core::render::RendererBase renderer,::hx::Null< bool >  __o_forceSoftware,::String __o_profile,::hx::Null< int >  __o_contextIndex);
		static ::hx::ObjectPtr< View3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::containers::Scene3D scene, ::away3d::cameras::Camera3D camera, ::away3d::core::render::RendererBase renderer,::hx::Null< bool >  __o_forceSoftware,::String __o_profile,::hx::Null< int >  __o_contextIndex);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~View3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("View3D",76,f6,e0,1a); }

		Float _width;
		Float _height;
		 ::openfl::geom::Point _localTLPos;
		 ::openfl::geom::Point _localBRPos;
		 ::openfl::geom::Point _globalPos;
		Float _globalWidth;
		Float _globalHeight;
		bool _globalPosDirty;
		 ::away3d::containers::Scene3D _scene;
		 ::away3d::cameras::Camera3D _camera;
		 ::away3d::core::traverse::EntityCollector _entityCollector;
		Float _aspectRatio;
		int _time;
		int _deltaTime;
		int _backgroundColor;
		Float _backgroundAlpha;
		 ::away3d::core::managers::Mouse3DManager _mouse3DManager;
		 ::away3d::core::managers::Touch3DManager _touch3DManager;
		 ::away3d::core::render::RendererBase _renderer;
		 ::away3d::core::render::DepthRenderer _depthRenderer;
		bool _addedToStage;
		bool _forceSoftware;
		 ::away3d::core::render::Filter3DRenderer _filter3DRenderer;
		bool _requireDepthRender;
		 ::openfl::display3D::textures::Texture _depthRender;
		bool _depthTextureInvalid;
		 ::openfl::display::Sprite _hitField;
		bool _parentIsStage;
		 ::away3d::textures::Texture2DBase _background;
		 ::away3d::core::managers::Stage3DProxy _stage3DProxy;
		bool _backBufferInvalid;
		int _antiAlias;
		 ::away3d::core::managers::RTTBufferManager _rttBufferManager;
		bool _rightClickMenuEnabled;
		::String _sourceURL;
		bool _shareContext;
		 ::openfl::geom::Rectangle _scissorRect;
		bool _scissorRectDirty;
		bool _viewportDirty;
		bool _depthPrepass;
		::String _profile;
		bool _layeredView;
		int _contextIndex;
		bool get_depthPrepass();
		::Dynamic get_depthPrepass_dyn();

		bool set_depthPrepass(bool value);
		::Dynamic set_depthPrepass_dyn();

		void onScenePartitionChanged( ::openfl::events::Event event);
		::Dynamic onScenePartitionChanged_dyn();

		 ::away3d::core::managers::Stage3DProxy get_stage3DProxy();
		::Dynamic get_stage3DProxy_dyn();

		 ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic set_stage3DProxy_dyn();

		void onContext3DRecreated( ::away3d::events::Stage3DEvent event);
		::Dynamic onContext3DRecreated_dyn();

		bool get_forceMouseMove();
		::Dynamic get_forceMouseMove_dyn();

		bool set_forceMouseMove(bool value);
		::Dynamic set_forceMouseMove_dyn();

		 ::away3d::textures::Texture2DBase get_background();
		::Dynamic get_background_dyn();

		 ::away3d::textures::Texture2DBase set_background( ::away3d::textures::Texture2DBase value);
		::Dynamic set_background_dyn();

		bool get_layeredView();
		::Dynamic get_layeredView_dyn();

		bool set_layeredView(bool value);
		::Dynamic set_layeredView_dyn();

		void initHitField();
		::Dynamic initHitField_dyn();

		::Array< ::Dynamic> get_filters3d();
		::Dynamic get_filters3d_dyn();

		::Array< ::Dynamic> set_filters3d(::Array< ::Dynamic> value);
		::Dynamic set_filters3d_dyn();

		 ::away3d::core::render::RendererBase get_renderer();
		::Dynamic get_renderer_dyn();

		 ::away3d::core::render::RendererBase set_renderer( ::away3d::core::render::RendererBase value);
		::Dynamic set_renderer_dyn();

		int get_backgroundColor();
		::Dynamic get_backgroundColor_dyn();

		int set_backgroundColor(int value);
		::Dynamic set_backgroundColor_dyn();

		Float get_backgroundAlpha();
		::Dynamic get_backgroundAlpha_dyn();

		Float set_backgroundAlpha(Float value);
		::Dynamic set_backgroundAlpha_dyn();

		 ::away3d::cameras::Camera3D get_camera();
		::Dynamic get_camera_dyn();

		 ::away3d::cameras::Camera3D set_camera( ::away3d::cameras::Camera3D camera);
		::Dynamic set_camera_dyn();

		 ::away3d::containers::Scene3D get_scene();
		::Dynamic get_scene_dyn();

		 ::away3d::containers::Scene3D set_scene( ::away3d::containers::Scene3D scene);
		::Dynamic set_scene_dyn();

		int deltaTime;
		int get_deltaTime();
		::Dynamic get_deltaTime_dyn();

		::Array< ::Dynamic> get_filters();

		::Array< ::Dynamic> set_filters(::Array< ::Dynamic> value);

		Float get_width();

		Float set_width(Float value);

		Float get_height();

		Float set_height(Float value);

		Float set_x(Float value);

		Float set_y(Float value);

		bool set_visible(bool value);

		int get_antiAlias();
		::Dynamic get_antiAlias_dyn();

		int set_antiAlias(int value);
		::Dynamic set_antiAlias_dyn();

		int renderedFacesCount;
		int get_renderedFacesCount();
		::Dynamic get_renderedFacesCount_dyn();

		bool get_shareContext();
		::Dynamic get_shareContext_dyn();

		bool set_shareContext(bool value);
		::Dynamic set_shareContext_dyn();

		void updateBackBuffer();
		::Dynamic updateBackBuffer_dyn();

		void render();
		::Dynamic render_dyn();

		void updateGlobalPos();
		::Dynamic updateGlobalPos_dyn();

		void updateTime();
		::Dynamic updateTime_dyn();

		void updateViewSizeData();
		::Dynamic updateViewSizeData_dyn();

		void renderDepthPrepass( ::away3d::core::traverse::EntityCollector entityCollector);
		::Dynamic renderDepthPrepass_dyn();

		void renderSceneDepthToTexture( ::away3d::core::traverse::EntityCollector entityCollector);
		::Dynamic renderSceneDepthToTexture_dyn();

		void initDepthTexture( ::openfl::display3D::Context3D context);
		::Dynamic initDepthTexture_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		 ::openfl::geom::Vector3D project( ::openfl::geom::Vector3D point3d);
		::Dynamic project_dyn();

		 ::openfl::geom::Vector3D unproject(Float sX,Float sY,Float sZ, ::openfl::geom::Vector3D v);
		::Dynamic unproject_dyn();

		 ::openfl::geom::Vector3D getRay(Float sX,Float sY,Float sZ);
		::Dynamic getRay_dyn();

		::Dynamic get_mousePicker();
		::Dynamic get_mousePicker_dyn();

		::Dynamic set_mousePicker(::Dynamic value);
		::Dynamic set_mousePicker_dyn();

		::Dynamic get_touchPicker();
		::Dynamic get_touchPicker_dyn();

		::Dynamic set_touchPicker(::Dynamic value);
		::Dynamic set_touchPicker_dyn();

		 ::away3d::core::traverse::EntityCollector entityCollector;
		 ::away3d::core::traverse::EntityCollector get_entityCollector();
		::Dynamic get_entityCollector_dyn();

		void onLensChanged( ::openfl::events::Event event);
		::Dynamic onLensChanged_dyn();

		void onAddedToStage( ::openfl::events::Event event);
		::Dynamic onAddedToStage_dyn();

		void onAdded( ::openfl::events::Event event);
		::Dynamic onAdded_dyn();

		void onViewportUpdated( ::away3d::events::Stage3DEvent event);
		::Dynamic onViewportUpdated_dyn();

};

} // end namespace away3d
} // end namespace containers

#endif /* INCLUDED_away3d_containers_View3D */ 
