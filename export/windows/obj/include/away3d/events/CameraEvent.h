#ifndef INCLUDED_away3d_events_CameraEvent
#define INCLUDED_away3d_events_CameraEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,CameraEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES CameraEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef CameraEvent_obj OBJ_;
		CameraEvent_obj();

	public:
		enum { _hx_ClassId = 0x17c14719 };

		void __construct(::String type, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.CameraEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.CameraEvent"); }
		static ::hx::ObjectPtr< CameraEvent_obj > __new(::String type, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< CameraEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CameraEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CameraEvent",15,53,3d,4e); }

		static void __boot();
		static ::String LENS_CHANGED;
		 ::away3d::cameras::Camera3D _camera;
		 ::away3d::cameras::Camera3D get_camera();
		::Dynamic get_camera_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_CameraEvent */ 
