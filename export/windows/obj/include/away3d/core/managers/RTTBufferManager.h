#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#define INCLUDED_away3d_core_managers_RTTBufferManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(away3d,core,managers,RTTBufferManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES RTTBufferManager_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef RTTBufferManager_obj OBJ_;
		RTTBufferManager_obj();

	public:
		enum { _hx_ClassId = 0x2064a3a7 };

		void __construct( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.managers.RTTBufferManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.managers.RTTBufferManager"); }
		static ::hx::ObjectPtr< RTTBufferManager_obj > __new( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static ::hx::ObjectPtr< RTTBufferManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RTTBufferManager_obj();

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
		::String __ToString() const { return HX_("RTTBufferManager",9b,df,0c,22); }

		static  ::haxe::ds::ObjectMap _instances;
		static  ::away3d::core::managers::RTTBufferManager getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static ::Dynamic getInstance_dyn();

		 ::openfl::display3D::VertexBuffer3D _renderToTextureVertexBuffer;
		 ::openfl::display3D::VertexBuffer3D _renderToScreenVertexBuffer;
		 ::openfl::display3D::IndexBuffer3D _indexBuffer;
		 ::away3d::core::managers::Stage3DProxy _stage3DProxy;
		int _viewWidth;
		int _viewHeight;
		int _textureWidth;
		int _textureHeight;
		 ::openfl::geom::Rectangle _renderToTextureRect;
		bool _buffersInvalid;
		Float _textureRatioX;
		Float _textureRatioY;
		Float get_textureRatioX();
		::Dynamic get_textureRatioX_dyn();

		Float get_textureRatioY();
		::Dynamic get_textureRatioY_dyn();

		int get_viewWidth();
		::Dynamic get_viewWidth_dyn();

		int set_viewWidth(int value);
		::Dynamic set_viewWidth_dyn();

		int get_viewHeight();
		::Dynamic get_viewHeight_dyn();

		int set_viewHeight(int value);
		::Dynamic set_viewHeight_dyn();

		 ::openfl::display3D::VertexBuffer3D get_renderToTextureVertexBuffer();
		::Dynamic get_renderToTextureVertexBuffer_dyn();

		 ::openfl::display3D::VertexBuffer3D get_renderToScreenVertexBuffer();
		::Dynamic get_renderToScreenVertexBuffer_dyn();

		 ::openfl::display3D::IndexBuffer3D get_indexBuffer();
		::Dynamic get_indexBuffer_dyn();

		 ::openfl::geom::Rectangle get_renderToTextureRect();
		::Dynamic get_renderToTextureRect_dyn();

		int get_textureWidth();
		::Dynamic get_textureWidth_dyn();

		int get_textureHeight();
		::Dynamic get_textureHeight_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void onContextRecreated( ::away3d::events::Stage3DEvent event);
		::Dynamic onContextRecreated_dyn();

		void updateRTTBuffers();
		::Dynamic updateRTTBuffers_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_RTTBufferManager */ 
