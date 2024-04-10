#ifndef INCLUDED_away3d_events_TouchEvent3D
#define INCLUDED_away3d_events_TouchEvent3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,TouchEvent3D)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES TouchEvent3D_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef TouchEvent3D_obj OBJ_;
		TouchEvent3D_obj();

	public:
		enum { _hx_ClassId = 0x5bfa3184 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.TouchEvent3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.TouchEvent3D"); }
		static ::hx::ObjectPtr< TouchEvent3D_obj > __new(::String type);
		static ::hx::ObjectPtr< TouchEvent3D_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TouchEvent3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TouchEvent3D",6c,11,0f,f9); }

		static void __boot();
		static ::String TOUCH_END;
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_OUT;
		static ::String TOUCH_OVER;
		bool _allowedToPropagate;
		 ::away3d::events::TouchEvent3D _parentEvent;
		Float screenX;
		Float screenY;
		 ::away3d::containers::View3D view;
		 ::away3d::containers::ObjectContainer3D object;
		::Dynamic renderable;
		 ::away3d::materials::MaterialBase material;
		 ::openfl::geom::Point uv;
		int index;
		int subGeometryIndex;
		 ::openfl::geom::Vector3D localPosition;
		 ::openfl::geom::Vector3D localNormal;
		bool ctrlKey;
		bool altKey;
		bool shiftKey;
		int touchPointID;
		void stopPropagation();

		void stopImmediatePropagation();

		 ::openfl::events::Event clone();

		 ::openfl::geom::Vector3D get_scenePosition();
		::Dynamic get_scenePosition_dyn();

		 ::openfl::geom::Vector3D get_sceneNormal();
		::Dynamic get_sceneNormal_dyn();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_TouchEvent3D */ 
