#ifndef INCLUDED_away3d_core_render_Filter3DRenderer
#define INCLUDED_away3d_core_render_Filter3DRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,RTTBufferManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,render,Filter3DRenderer)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS2(away3d,filters,Filter3DBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace render{


class HXCPP_CLASS_ATTRIBUTES Filter3DRenderer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Filter3DRenderer_obj OBJ_;
		Filter3DRenderer_obj();

	public:
		enum { _hx_ClassId = 0x0dd35d04 };

		void __construct( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.render.Filter3DRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.render.Filter3DRenderer"); }
		static ::hx::ObjectPtr< Filter3DRenderer_obj > __new( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static ::hx::ObjectPtr< Filter3DRenderer_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Filter3DRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Filter3DRenderer",ec,18,cd,85); }

		::Array< ::Dynamic> _filters;
		 ::openfl::_Vector::ObjectVector _tasks;
		bool _filterTasksInvalid;
		 ::openfl::display3D::textures::Texture _mainInputTexture;
		bool _requireDepthRender;
		 ::away3d::core::managers::RTTBufferManager _rttManager;
		 ::away3d::core::managers::Stage3DProxy _stage3DProxy;
		bool _filterSizesInvalid;
		void onContext3DRecreated( ::away3d::events::Stage3DEvent event);
		::Dynamic onContext3DRecreated_dyn();

		void onRTTResize( ::openfl::events::Event event);
		::Dynamic onRTTResize_dyn();

		bool get_requireDepthRender();
		::Dynamic get_requireDepthRender_dyn();

		 ::openfl::display3D::textures::Texture getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic getMainInputTexture_dyn();

		::Array< ::Dynamic> get_filters();
		::Dynamic get_filters_dyn();

		::Array< ::Dynamic> set_filters(::Array< ::Dynamic> value);
		::Dynamic set_filters_dyn();

		void updateFilterTasks( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic updateFilterTasks_dyn();

		void render( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera3D, ::openfl::display3D::textures::Texture depthTexture);
		::Dynamic render_dyn();

		void updateFilterSizes();
		::Dynamic updateFilterSizes_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace render

#endif /* INCLUDED_away3d_core_render_Filter3DRenderer */ 
