#ifndef INCLUDED_lime_ui_Window
#define INCLUDED_lime_ui_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_lime_ui_MouseButton_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_lime_ui_MouseWheelMode_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_String_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_String_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_graphics_RenderContext_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,_hx_system,Display)
HX_DECLARE_CLASS2(lime,_hx_system,DisplayMode)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x7d946485 };

		void __construct( ::lime::app::Application application, ::Dynamic attributes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.ui.Window")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.ui.Window"); }
		static ::hx::ObjectPtr< Window_obj > __new( ::lime::app::Application application, ::Dynamic attributes);
		static ::hx::ObjectPtr< Window_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::app::Application application, ::Dynamic attributes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Window",10,08,21,87); }

		 ::lime::app::Application application;
		 ::lime::graphics::RenderContext context;
		 ::lime::_hx_system::Display display;
		 ::Dynamic element;
		bool hidden;
		int id;
		 ::lime::app::_Event_Void_Void onActivate;
		 ::lime::app::_Event_Void_Void onClose;
		 ::lime::app::_Event_Void_Void onDeactivate;
		 ::lime::app::_Event_String_Void onDropFile;
		 ::lime::app::_Event_Void_Void onEnter;
		 ::lime::app::_Event_Void_Void onExpose;
		 ::lime::app::_Event_Void_Void onFocusIn;
		 ::lime::app::_Event_Void_Void onFocusOut;
		 ::lime::app::_Event_Void_Void onFullscreen;
		 ::lime::app::_Event_Void_Void onHide;
		 ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void onKeyDown;
		 ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void onKeyUp;
		 ::lime::app::_Event_Void_Void onLeave;
		 ::lime::app::_Event_Void_Void onMaximize;
		 ::lime::app::_Event_Void_Void onMinimize;
		 ::lime::app::_Event_Float_Float_lime_ui_MouseButton_Void onMouseDown;
		 ::lime::app::_Event_Float_Float_Void onMouseMove;
		 ::lime::app::_Event_Float_Float_Void onMouseMoveRelative;
		 ::lime::app::_Event_Float_Float_Int_Void onMouseUp;
		 ::lime::app::_Event_Float_Float_lime_ui_MouseWheelMode_Void onMouseWheel;
		 ::lime::app::_Event_Float_Float_Void onMove;
		 ::lime::app::_Event_lime_graphics_RenderContext_Void onRender;
		 ::lime::app::_Event_Void_Void onRenderContextLost;
		 ::lime::app::_Event_lime_graphics_RenderContext_Void onRenderContextRestored;
		 ::lime::app::_Event_Int_Int_Void onResize;
		 ::lime::app::_Event_Void_Void onRestore;
		 ::lime::app::_Event_Void_Void onShow;
		 ::lime::app::_Event_String_Int_Int_Void onTextEdit;
		 ::lime::app::_Event_String_Void onTextInput;
		 ::Dynamic parameters;
		Float scale;
		 ::openfl::display::Stage stage;
		int clickCount;
		 ::Dynamic _hx___attributes;
		 ::lime::_internal::backend::native::NativeWindow _hx___backend;
		bool _hx___borderless;
		bool _hx___fullscreen;
		int _hx___height;
		bool _hx___hidden;
		bool _hx___maximized;
		bool _hx___minimized;
		bool _hx___resizable;
		Float _hx___scale;
		::String _hx___title;
		bool _hx___visible;
		int _hx___width;
		int _hx___x;
		int _hx___y;
		int _hx___minWidth;
		int _hx___minHeight;
		int _hx___maxWidth;
		int _hx___maxHeight;
		void alert(::String message,::String title);
		::Dynamic alert_dyn();

		virtual void close();
		::Dynamic close_dyn();

		void focus();
		::Dynamic focus_dyn();

		void move(int x,int y);
		::Dynamic move_dyn();

		 ::lime::graphics::Image readPixels( ::lime::math::Rectangle rect);
		::Dynamic readPixels_dyn();

		void resize(int width,int height);
		::Dynamic resize_dyn();

		void setMinSize(int width,int height);
		::Dynamic setMinSize_dyn();

		void setMaxSize(int width,int height);
		::Dynamic setMaxSize_dyn();

		void setIcon( ::lime::graphics::Image image);
		::Dynamic setIcon_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void warpMouse(int x,int y);
		::Dynamic warpMouse_dyn();

		 ::lime::ui::MouseCursor get_cursor();
		::Dynamic get_cursor_dyn();

		 ::lime::ui::MouseCursor set_cursor( ::lime::ui::MouseCursor value);
		::Dynamic set_cursor_dyn();

		 ::lime::_hx_system::Display get_display();
		::Dynamic get_display_dyn();

		 ::lime::_hx_system::DisplayMode get_displayMode();
		::Dynamic get_displayMode_dyn();

		 ::lime::_hx_system::DisplayMode set_displayMode( ::lime::_hx_system::DisplayMode value);
		::Dynamic set_displayMode_dyn();

		bool get_borderless();
		::Dynamic get_borderless_dyn();

		bool set_borderless(bool value);
		::Dynamic set_borderless_dyn();

		Float get_frameRate();
		::Dynamic get_frameRate_dyn();

		Float set_frameRate(Float value);
		::Dynamic set_frameRate_dyn();

		bool get_fullscreen();
		::Dynamic get_fullscreen_dyn();

		bool set_fullscreen(bool value);
		::Dynamic set_fullscreen_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		int set_height(int value);
		::Dynamic set_height_dyn();

		bool get_hidden();
		::Dynamic get_hidden_dyn();

		int get_maxHeight();
		::Dynamic get_maxHeight_dyn();

		int set_maxHeight(int value);
		::Dynamic set_maxHeight_dyn();

		bool get_maximized();
		::Dynamic get_maximized_dyn();

		bool set_maximized(bool value);
		::Dynamic set_maximized_dyn();

		int get_maxWidth();
		::Dynamic get_maxWidth_dyn();

		int set_maxWidth(int value);
		::Dynamic set_maxWidth_dyn();

		int get_minHeight();
		::Dynamic get_minHeight_dyn();

		int set_minHeight(int value);
		::Dynamic set_minHeight_dyn();

		bool get_minimized();
		::Dynamic get_minimized_dyn();

		bool set_minimized(bool value);
		::Dynamic set_minimized_dyn();

		int get_minWidth();
		::Dynamic get_minWidth_dyn();

		int set_minWidth(int value);
		::Dynamic set_minWidth_dyn();

		bool get_mouseLock();
		::Dynamic get_mouseLock_dyn();

		bool set_mouseLock(bool value);
		::Dynamic set_mouseLock_dyn();

		Float get_opacity();
		::Dynamic get_opacity_dyn();

		Float set_opacity(Float value);
		::Dynamic set_opacity_dyn();

		bool get_resizable();
		::Dynamic get_resizable_dyn();

		bool set_resizable(bool value);
		::Dynamic set_resizable_dyn();

		Float get_scale();
		::Dynamic get_scale_dyn();

		bool get_textInputEnabled();
		::Dynamic get_textInputEnabled_dyn();

		bool set_textInputEnabled(bool value);
		::Dynamic set_textInputEnabled_dyn();

		 ::lime::math::Rectangle setTextInputRect( ::lime::math::Rectangle value);
		::Dynamic setTextInputRect_dyn();

		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String value);
		::Dynamic set_title_dyn();

		bool get_visible();
		::Dynamic get_visible_dyn();

		bool set_visible(bool value);
		::Dynamic set_visible_dyn();

		int get_width();
		::Dynamic get_width_dyn();

		int set_width(int value);
		::Dynamic set_width_dyn();

		int get_x();
		::Dynamic get_x_dyn();

		int set_x(int value);
		::Dynamic set_x_dyn();

		int get_y();
		::Dynamic get_y_dyn();

		int set_y(int value);
		::Dynamic set_y_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Window */ 
