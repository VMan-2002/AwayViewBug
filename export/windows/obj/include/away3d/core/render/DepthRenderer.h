#ifndef INCLUDED_away3d_core_render_DepthRenderer
#define INCLUDED_away3d_core_render_DepthRenderer

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
HX_DECLARE_CLASS3(away3d,core,render,DepthRenderer)
HX_DECLARE_CLASS3(away3d,core,render,RendererBase)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES DepthRenderer_obj : public  ::away3d::core::render::RendererBase_obj
{
	public:
		typedef  ::away3d::core::render::RendererBase_obj super;
		typedef DepthRenderer_obj OBJ_;
		DepthRenderer_obj();

	public:
		enum { _hx_ClassId = 0x54c5ba2e };

		void __construct(::hx::Null< bool >  __o_renderBlended,::hx::Null< bool >  __o_distanceBased);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.render.DepthRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.render.DepthRenderer"); }
		static ::hx::ObjectPtr< DepthRenderer_obj > __new(::hx::Null< bool >  __o_renderBlended,::hx::Null< bool >  __o_distanceBased);
		static ::hx::ObjectPtr< DepthRenderer_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_renderBlended,::hx::Null< bool >  __o_distanceBased);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DepthRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DepthRenderer",46,fd,54,39); }

		 ::away3d::materials::MaterialBase _activeMaterial;
		bool _renderBlended;
		bool _distanceBased;
		bool _disableColor;
		bool get_disableColor();
		::Dynamic get_disableColor_dyn();

		bool set_disableColor(bool value);
		::Dynamic set_disableColor_dyn();

		Float set_backgroundR(Float value);

		Float set_backgroundG(Float value);

		Float set_backgroundB(Float value);

		void renderCascades( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target,int numCascades, ::openfl::_Vector::ObjectVector scissorRects, ::openfl::_Vector::ObjectVector cameras);
		::Dynamic renderCascades_dyn();

		void drawCascadeRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::cameras::Camera3D camera, ::openfl::_Vector::ObjectVector cullPlanes);
		::Dynamic drawCascadeRenderables_dyn();

		void draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target);

		void drawRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::core::traverse::EntityCollector entityCollector);
		::Dynamic drawRenderables_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_DepthRenderer */ 
