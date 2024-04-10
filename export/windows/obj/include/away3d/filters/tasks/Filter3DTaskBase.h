#ifndef INCLUDED_away3d_filters_tasks_Filter3DTaskBase
#define INCLUDED_away3d_filters_tasks_Filter3DTaskBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,filters,tasks,Filter3DTaskBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace filters{
namespace tasks{


class HXCPP_CLASS_ATTRIBUTES Filter3DTaskBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Filter3DTaskBase_obj OBJ_;
		Filter3DTaskBase_obj();

	public:
		enum { _hx_ClassId = 0x0bd123f5 };

		void __construct(::hx::Null< bool >  __o_requireDepthRender);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.filters.tasks.Filter3DTaskBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.filters.tasks.Filter3DTaskBase"); }
		static ::hx::ObjectPtr< Filter3DTaskBase_obj > __new(::hx::Null< bool >  __o_requireDepthRender);
		static ::hx::ObjectPtr< Filter3DTaskBase_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_requireDepthRender);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Filter3DTaskBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Filter3DTaskBase",9f,ad,43,42); }

		 ::openfl::display3D::textures::Texture _mainInputTexture;
		 ::openfl::display3D::Context3D _mainInputTextureContext;
		int _scaledTextureWidth;
		int _scaledTextureHeight;
		int _textureWidth;
		int _textureHeight;
		bool _textureDimensionsInvalid;
		bool _program3DInvalid;
		 ::openfl::display3D::Program3D _program3D;
		 ::openfl::display3D::Context3D _program3DContext;
		 ::openfl::display3D::textures::Texture _target;
		bool _requireDepthRender;
		int _textureScale;
		int get_textureScale();
		::Dynamic get_textureScale_dyn();

		int set_textureScale(int value);
		::Dynamic set_textureScale_dyn();

		 ::openfl::display3D::textures::Texture get_target();
		::Dynamic get_target_dyn();

		 ::openfl::display3D::textures::Texture set_target( ::openfl::display3D::textures::Texture value);
		::Dynamic set_target_dyn();

		int get_textureWidth();
		::Dynamic get_textureWidth_dyn();

		int set_textureWidth(int value);
		::Dynamic set_textureWidth_dyn();

		int get_textureHeight();
		::Dynamic get_textureHeight_dyn();

		int set_textureHeight(int value);
		::Dynamic set_textureHeight_dyn();

		 ::openfl::display3D::textures::Texture getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage);
		::Dynamic getMainInputTexture_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void invalidateProgram3D();
		::Dynamic invalidateProgram3D_dyn();

		void updateProgram3D( ::away3d::core::managers::Stage3DProxy stage);
		::Dynamic updateProgram3D_dyn();

		::String getVertexCode();
		::Dynamic getVertexCode_dyn();

		::String getFragmentCode();
		::Dynamic getFragmentCode_dyn();

		void updateTextures( ::away3d::core::managers::Stage3DProxy stage);
		::Dynamic updateTextures_dyn();

		 ::openfl::display3D::Program3D getProgram3D( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic getProgram3D_dyn();

		void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::display3D::textures::Texture depthTexture);
		::Dynamic activate_dyn();

		void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic deactivate_dyn();

		bool get_requireDepthRender();
		::Dynamic get_requireDepthRender_dyn();

};

} // end namespace away3d
} // end namespace filters
} // end namespace tasks

#endif /* INCLUDED_away3d_filters_tasks_Filter3DTaskBase */ 
