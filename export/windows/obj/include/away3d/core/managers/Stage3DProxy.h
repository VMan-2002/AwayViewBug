#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#define INCLUDED_away3d_core_managers_Stage3DProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(away3d,core,managers,Mouse3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,managers,Touch3DManager)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES Stage3DProxy_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Stage3DProxy_obj OBJ_;
		Stage3DProxy_obj();

	public:
		enum { _hx_ClassId = 0x08b64c63 };

		void __construct(int stage3DIndex, ::openfl::display::Stage3D stage3D, ::away3d::core::managers::Stage3DManager stage3DManager,::hx::Null< bool >  __o_forceSoftware,::String __o_profile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.managers.Stage3DProxy")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.managers.Stage3DProxy"); }
		static ::hx::ObjectPtr< Stage3DProxy_obj > __new(int stage3DIndex, ::openfl::display::Stage3D stage3D, ::away3d::core::managers::Stage3DManager stage3DManager,::hx::Null< bool >  __o_forceSoftware,::String __o_profile);
		static ::hx::ObjectPtr< Stage3DProxy_obj > __alloc(::hx::Ctx *_hx_ctx,int stage3DIndex, ::openfl::display::Stage3D stage3D, ::away3d::core::managers::Stage3DManager stage3DManager,::hx::Null< bool >  __o_forceSoftware,::String __o_profile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage3DProxy_obj();

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
		::String __ToString() const { return HX_("Stage3DProxy",1f,65,e1,d6); }

		static void __boot();
		static  ::openfl::display::Shape _frameEventDriver;
		static int vertexBufferCount;
		static int indexBufferCount;
		static int drawTriangleCount;
		static int _vbUploadCount;
		static int _ibUploadCount;
		static int _bmpUploadCount;
		static int _atfUploadCount;
		static void disposeVertexBuffer( ::openfl::display3D::VertexBuffer3D vb);
		static ::Dynamic disposeVertexBuffer_dyn();

		static void disposeIndexBuffer( ::openfl::display3D::IndexBuffer3D ib);
		static ::Dynamic disposeIndexBuffer_dyn();

		static void uploadVertexBufferFromVector( ::openfl::display3D::VertexBuffer3D vb, ::openfl::_Vector::FloatVector data,int startVertex,int numVertices);
		static ::Dynamic uploadVertexBufferFromVector_dyn();

		static void uploadIndexBufferFromVector( ::openfl::display3D::IndexBuffer3D ib, ::openfl::_Vector::IntVector data,int startOffset,int count);
		static ::Dynamic uploadIndexBufferFromVector_dyn();

		 ::openfl::display3D::Context3D _context3D;
		int _stage3DIndex;
		bool _usesSoftwareRendering;
		::String _profile;
		 ::openfl::display::Stage3D _stage3D;
		 ::openfl::display3D::Program3D _activeProgram3D;
		 ::away3d::core::managers::Stage3DManager _stage3DManager;
		int _backBufferWidth;
		int _backBufferHeight;
		int _antiAlias;
		bool _enableDepthAndStencil;
		bool _backBufferEnableDepthAndStencil;
		bool _contextRequested;
		 ::openfl::display3D::textures::TextureBase _renderTarget;
		int _renderSurfaceSelector;
		 ::openfl::geom::Rectangle _scissorRect;
		int _color;
		bool _backBufferDirty;
		 ::openfl::geom::Rectangle _viewPort;
		 ::openfl::events::Event _enterFrame;
		 ::openfl::events::Event _exitFrame;
		 ::away3d::events::Stage3DEvent _viewportUpdated;
		bool _viewportDirty;
		bool _bufferClear;
		 ::away3d::core::managers::Mouse3DManager _mouse3DManager;
		 ::away3d::core::managers::Touch3DManager _touch3DManager;
		void notifyViewportUpdated();
		::Dynamic notifyViewportUpdated_dyn();

		void notifyEnterFrame();
		::Dynamic notifyEnterFrame_dyn();

		void notifyExitFrame();
		::Dynamic notifyExitFrame_dyn();

		bool forceSoftware;
		::String get_profile();
		::Dynamic get_profile_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void configureBackBuffer(int backBufferWidth,int backBufferHeight,int antiAlias,bool enableDepthAndStencil);
		::Dynamic configureBackBuffer_dyn();

		bool get_enableDepthAndStencil();
		::Dynamic get_enableDepthAndStencil_dyn();

		bool set_enableDepthAndStencil(bool enableDepthAndStencil);
		::Dynamic set_enableDepthAndStencil_dyn();

		 ::openfl::display3D::textures::TextureBase get_renderTarget();
		::Dynamic get_renderTarget_dyn();

		int get_renderSurfaceSelector();
		::Dynamic get_renderSurfaceSelector_dyn();

		void setRenderTarget( ::openfl::display3D::textures::TextureBase target,::hx::Null< bool >  enableDepthAndStencil,::hx::Null< int >  surfaceSelector);
		::Dynamic setRenderTarget_dyn();

		void clear();
		::Dynamic clear_dyn();

		void present();
		::Dynamic present_dyn();

		void addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

		void removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture);

		 ::openfl::geom::Rectangle get_scissorRect();
		::Dynamic get_scissorRect_dyn();

		 ::openfl::geom::Rectangle set_scissorRect( ::openfl::geom::Rectangle value);
		::Dynamic set_scissorRect_dyn();

		int get_stage3DIndex();
		::Dynamic get_stage3DIndex_dyn();

		 ::openfl::display::Stage3D get_stage3D();
		::Dynamic get_stage3D_dyn();

		 ::openfl::display3D::Context3D get_context3D();
		::Dynamic get_context3D_dyn();

		::String get_driverInfo();
		::Dynamic get_driverInfo_dyn();

		bool get_usesSoftwareRendering();
		::Dynamic get_usesSoftwareRendering_dyn();

		Float get_x();
		::Dynamic get_x_dyn();

		Float set_x(Float value);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float value);
		::Dynamic set_y_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int set_width(int width);
		::Dynamic set_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		int set_height(int height);
		::Dynamic set_height_dyn();

		int get_antiAlias();
		::Dynamic get_antiAlias_dyn();

		int set_antiAlias(int antiAlias);
		::Dynamic set_antiAlias_dyn();

		 ::openfl::geom::Rectangle get_viewPort();
		::Dynamic get_viewPort_dyn();

		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int color);
		::Dynamic set_color_dyn();

		bool get_visible();
		::Dynamic get_visible_dyn();

		bool set_visible(bool value);
		::Dynamic set_visible_dyn();

		bool get_bufferClear();
		::Dynamic get_bufferClear_dyn();

		bool set_bufferClear(bool newBufferClear);
		::Dynamic set_bufferClear_dyn();

		 ::away3d::core::managers::Mouse3DManager get_mouse3DManager();
		::Dynamic get_mouse3DManager_dyn();

		 ::away3d::core::managers::Mouse3DManager set_mouse3DManager( ::away3d::core::managers::Mouse3DManager value);
		::Dynamic set_mouse3DManager_dyn();

		 ::away3d::core::managers::Touch3DManager get_touch3DManager();
		::Dynamic get_touch3DManager_dyn();

		 ::away3d::core::managers::Touch3DManager set_touch3DManager( ::away3d::core::managers::Touch3DManager value);
		::Dynamic set_touch3DManager_dyn();

		void freeContext3D();
		::Dynamic freeContext3D_dyn();

		void onContext3DUpdate( ::openfl::events::Event event);
		::Dynamic onContext3DUpdate_dyn();

		void requestContext(::hx::Null< bool >  forceSoftware,::String profile);
		::Dynamic requestContext_dyn();

		void onEnterFrame( ::openfl::events::Event event);
		::Dynamic onEnterFrame_dyn();

		bool recoverFromDisposal();
		::Dynamic recoverFromDisposal_dyn();

		void clearDepthBuffer();
		::Dynamic clearDepthBuffer_dyn();

		 ::openfl::display3D::VertexBuffer3D createVertexBuffer(int numVertices,int data32PerVertex);
		::Dynamic createVertexBuffer_dyn();

		 ::openfl::display3D::IndexBuffer3D createIndexBuffer(int numIndices);
		::Dynamic createIndexBuffer_dyn();

		void drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,::hx::Null< int >  firstIndex,::hx::Null< int >  numTriangles);
		::Dynamic drawTriangles_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Stage3DProxy */ 
