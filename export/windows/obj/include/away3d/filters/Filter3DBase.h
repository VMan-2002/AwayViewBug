#ifndef INCLUDED_away3d_filters_Filter3DBase
#define INCLUDED_away3d_filters_Filter3DBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,filters,Filter3DBase)
HX_DECLARE_CLASS3(away3d,filters,tasks,Filter3DTaskBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Filter3DBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Filter3DBase_obj OBJ_;
		Filter3DBase_obj();

	public:
		enum { _hx_ClassId = 0x7f56358e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.filters.Filter3DBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.filters.Filter3DBase"); }
		static ::hx::ObjectPtr< Filter3DBase_obj > __new();
		static ::hx::ObjectPtr< Filter3DBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Filter3DBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Filter3DBase",3a,f3,32,57); }

		 ::openfl::_Vector::ObjectVector _tasks;
		bool _requireDepthRender;
		int _textureWidth;
		int _textureHeight;
		bool get_requireDepthRender();
		::Dynamic get_requireDepthRender_dyn();

		void addTask( ::away3d::filters::tasks::Filter3DTaskBase filter);
		::Dynamic addTask_dyn();

		 ::openfl::_Vector::ObjectVector get_tasks();
		::Dynamic get_tasks_dyn();

		 ::openfl::display3D::textures::Texture getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic getMainInputTexture_dyn();

		int get_textureWidth();
		::Dynamic get_textureWidth_dyn();

		int set_textureWidth(int value);
		::Dynamic set_textureWidth_dyn();

		int get_textureHeight();
		::Dynamic get_textureHeight_dyn();

		int set_textureHeight(int value);
		::Dynamic set_textureHeight_dyn();

		void setRenderTargets( ::openfl::display3D::textures::Texture mainTarget, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic setRenderTargets_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void update( ::away3d::core::managers::Stage3DProxy stage, ::away3d::cameras::Camera3D camera);
		::Dynamic update_dyn();

};

} // end namespace away3d
} // end namespace filters

#endif /* INCLUDED_away3d_filters_Filter3DBase */ 
