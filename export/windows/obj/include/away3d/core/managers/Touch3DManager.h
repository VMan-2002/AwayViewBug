#ifndef INCLUDED_away3d_core_managers_Touch3DManager
#define INCLUDED_away3d_core_managers_Touch3DManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,managers,Touch3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,TouchPoint)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
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
HX_DECLARE_CLASS2(openfl,events,TouchEvent)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES Touch3DManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Touch3DManager_obj OBJ_;
		Touch3DManager_obj();

	public:
		enum { _hx_ClassId = 0x36f84281 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.managers.Touch3DManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.managers.Touch3DManager"); }
		static ::hx::ObjectPtr< Touch3DManager_obj > __new();
		static ::hx::ObjectPtr< Touch3DManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Touch3DManager_obj();

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
		::String __ToString() const { return HX_("Touch3DManager",3d,02,a8,38); }

		static void __boot();
		static  ::haxe::ds::IntMap _collidingObjectFromTouchId;
		static  ::haxe::ds::IntMap _previousCollidingObjectFromTouchId;
		static  ::openfl::_Vector::ObjectVector _queuedEvents;
		bool _updateDirty;
		 ::openfl::geom::Vector3D _nullVector;
		int _numTouchPoints;
		 ::away3d::core::managers::TouchPoint _touchPoint;
		 ::away3d::core::pick::PickingCollisionVO _collidingObject;
		 ::away3d::core::pick::PickingCollisionVO _previousCollidingObject;
		 ::openfl::_Vector::ObjectVector _touchPoints;
		 ::haxe::ds::IntMap _touchPointFromId;
		 ::openfl::events::TouchEvent _touchMoveEvent;
		bool _forceTouchMove;
		::Dynamic _touchPicker;
		 ::away3d::containers::View3D _view;
		void updateCollider();
		::Dynamic updateCollider_dyn();

		void fireTouchEvents();
		::Dynamic fireTouchEvents_dyn();

		void enableTouchListeners( ::away3d::containers::View3D view);
		::Dynamic enableTouchListeners_dyn();

		void disableTouchListeners( ::away3d::containers::View3D view);
		::Dynamic disableTouchListeners_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void queueDispatch(::String emitType, ::openfl::events::TouchEvent sourceEvent, ::away3d::core::pick::PickingCollisionVO collider, ::away3d::core::managers::TouchPoint touch);
		::Dynamic queueDispatch_dyn();

		void onTouchBegin( ::openfl::events::TouchEvent event);
		::Dynamic onTouchBegin_dyn();

		void onTouchMove( ::openfl::events::TouchEvent event);
		::Dynamic onTouchMove_dyn();

		void onTouchEnd( ::openfl::events::TouchEvent event);
		::Dynamic onTouchEnd_dyn();

		bool get_forceTouchMove();
		::Dynamic get_forceTouchMove_dyn();

		bool set_forceTouchMove(bool value);
		::Dynamic set_forceTouchMove_dyn();

		::Dynamic get_touchPicker();
		::Dynamic get_touchPicker_dyn();

		::Dynamic set_touchPicker(::Dynamic value);
		::Dynamic set_touchPicker_dyn();

		 ::away3d::containers::View3D set_view( ::away3d::containers::View3D value);
		::Dynamic set_view_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Touch3DManager */ 
