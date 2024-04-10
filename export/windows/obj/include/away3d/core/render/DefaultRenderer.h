#ifndef INCLUDED_away3d_core_render_DefaultRenderer
#define INCLUDED_away3d_core_render_DefaultRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,DefaultRenderer)
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES DefaultRenderer_obj : public  ::away3d::core::render::RendererBase_obj
{
	public:
		typedef  ::away3d::core::render::RendererBase_obj super;
		typedef DefaultRenderer_obj OBJ_;
		DefaultRenderer_obj();

	public:
		enum { _hx_ClassId = 0x73f2cdd0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.render.DefaultRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.render.DefaultRenderer"); }
		static ::hx::ObjectPtr< DefaultRenderer_obj > __new();
		static ::hx::ObjectPtr< DefaultRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultRenderer_obj();

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
		::String __ToString() const { return HX_("DefaultRenderer",04,8b,75,3c); }

		static void __boot();
		static int RTT_PASSES;
		static int SCREEN_PASSES;
		static int ALL_PASSES;
		 ::away3d::materials::MaterialBase _activeMaterial;
		 ::away3d::core::render::DepthRenderer _distanceRenderer;
		 ::away3d::core::render::DepthRenderer _depthRenderer;
		 ::openfl::geom::Matrix3D _skyboxProjection;
		 ::openfl::geom::Matrix3D _tempSkyboxMatrix;
		 ::openfl::geom::Vector3D _skyboxTempVector;
		 ::away3d::core::managers::Stage3DProxy set_stage3DProxy( ::away3d::core::managers::Stage3DProxy value);

		void executeRender( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target, ::openfl::geom::Rectangle scissorRect,::hx::Null< int >  surfaceSelector);

		void updateLights( ::away3d::core::traverse::EntityCollector entityCollector);
		::Dynamic updateLights_dyn();

		void draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target);

		void drawSkyBox( ::away3d::core::traverse::EntityCollector entityCollector);
		::Dynamic drawSkyBox_dyn();

		void updateSkyBoxProjection( ::away3d::cameras::Camera3D camera);
		::Dynamic updateSkyBoxProjection_dyn();

		void drawRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::core::traverse::EntityCollector entityCollector,int which);
		::Dynamic drawRenderables_dyn();

		void dispose();

};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_DefaultRenderer */ 
