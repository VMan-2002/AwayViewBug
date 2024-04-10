#ifndef INCLUDED_away3d_core_managers_Mouse3DManager
#define INCLUDED_away3d_core_managers_Mouse3DManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,managers,Mouse3DManager)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(away3d,events,MouseEvent3D)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES Mouse3DManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Mouse3DManager_obj OBJ_;
		Mouse3DManager_obj();

	public:
		enum { _hx_ClassId = 0x15147023 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.managers.Mouse3DManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.managers.Mouse3DManager"); }
		static ::hx::ObjectPtr< Mouse3DManager_obj > __new();
		static ::hx::ObjectPtr< Mouse3DManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mouse3DManager_obj();

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
		::String __ToString() const { return HX_("Mouse3DManager",17,07,f2,b2); }

		static void __boot();
		static  ::haxe::ds::ObjectMap _view3Ds;
		static  ::openfl::_Vector::ObjectVector _view3DLookup;
		static int _viewCount;
		static  ::away3d::core::pick::PickingCollisionVO _collidingObject;
		static  ::away3d::core::pick::PickingCollisionVO _previousCollidingObject;
		static  ::openfl::_Vector::ObjectVector _collidingViewObjects;
		static  ::openfl::_Vector::ObjectVector _queuedEvents;
		static  ::away3d::events::MouseEvent3D _mouseUp;
		static  ::away3d::events::MouseEvent3D _mouseClick;
		static  ::away3d::events::MouseEvent3D _mouseOut;
		static  ::away3d::events::MouseEvent3D _mouseDown;
		static  ::away3d::events::MouseEvent3D _mouseMove;
		static  ::away3d::events::MouseEvent3D _mouseOver;
		static  ::away3d::events::MouseEvent3D _mouseWheel;
		static  ::away3d::events::MouseEvent3D _mouseDoubleClick;
		static int _previousCollidingView;
		static int _collidingView;
		 ::away3d::containers::View3D _activeView;
		bool _updateDirty;
		 ::openfl::geom::Vector3D _nullVector;
		 ::openfl::events::MouseEvent _mouseMoveEvent;
		bool _forceMouseMove;
		::Dynamic _mousePicker;
		int _childDepth;
		 ::away3d::core::pick::PickingCollisionVO _collidingDownObject;
		 ::away3d::core::pick::PickingCollisionVO _collidingUpObject;
		void updateCollider( ::away3d::containers::View3D view);
		::Dynamic updateCollider_dyn();

		void fireMouseEvents();
		::Dynamic fireMouseEvents_dyn();

		void addViewLayer( ::away3d::containers::View3D view);
		::Dynamic addViewLayer_dyn();

		void enableMouseListeners( ::away3d::containers::View3D view);
		::Dynamic enableMouseListeners_dyn();

		void disableMouseListeners( ::away3d::containers::View3D view);
		::Dynamic disableMouseListeners_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void queueDispatch( ::away3d::events::MouseEvent3D event, ::openfl::events::MouseEvent sourceEvent, ::away3d::core::pick::PickingCollisionVO collider);
		::Dynamic queueDispatch_dyn();

		void reThrowEvent( ::openfl::events::MouseEvent event);
		::Dynamic reThrowEvent_dyn();

		bool hasKey( ::away3d::containers::View3D view);
		::Dynamic hasKey_dyn();

		void traverseDisplayObjects( ::openfl::display::DisplayObjectContainer container);
		::Dynamic traverseDisplayObjects_dyn();

		void onMouseMove( ::openfl::events::MouseEvent event);
		::Dynamic onMouseMove_dyn();

		void onMouseOut( ::openfl::events::MouseEvent event);
		::Dynamic onMouseOut_dyn();

		void onMouseOver( ::openfl::events::MouseEvent event);
		::Dynamic onMouseOver_dyn();

		void onClick( ::openfl::events::MouseEvent event);
		::Dynamic onClick_dyn();

		void onDoubleClick( ::openfl::events::MouseEvent event);
		::Dynamic onDoubleClick_dyn();

		void onMouseDown( ::openfl::events::MouseEvent event);
		::Dynamic onMouseDown_dyn();

		void onMouseUp( ::openfl::events::MouseEvent event);
		::Dynamic onMouseUp_dyn();

		void onMouseWheel( ::openfl::events::MouseEvent event);
		::Dynamic onMouseWheel_dyn();

		bool get_forceMouseMove();
		::Dynamic get_forceMouseMove_dyn();

		bool set_forceMouseMove(bool value);
		::Dynamic set_forceMouseMove_dyn();

		::Dynamic get_mousePicker();
		::Dynamic get_mousePicker_dyn();

		::Dynamic set_mousePicker(::Dynamic value);
		::Dynamic set_mousePicker_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Mouse3DManager */ 
