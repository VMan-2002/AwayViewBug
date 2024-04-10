#ifndef INCLUDED_away3d_events_Object3DEvent
#define INCLUDED_away3d_events_Object3DEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,Object3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES Object3DEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef Object3DEvent_obj OBJ_;
		Object3DEvent_obj();

	public:
		enum { _hx_ClassId = 0x162e1592 };

		void __construct(::String type, ::away3d::core::base::Object3D object);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.Object3DEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.Object3DEvent"); }
		static ::hx::ObjectPtr< Object3DEvent_obj > __new(::String type, ::away3d::core::base::Object3D object);
		static ::hx::ObjectPtr< Object3DEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::core::base::Object3D object);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Object3DEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Object3DEvent",aa,20,5d,eb); }

		static void __boot();
		static ::String VISIBLITY_UPDATED;
		static ::String SCENETRANSFORM_CHANGED;
		static ::String SCENE_CHANGED;
		static ::String POSITION_CHANGED;
		static ::String ROTATION_CHANGED;
		static ::String SCALE_CHANGED;
		 ::away3d::core::base::Object3D object;
		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_Object3DEvent */ 
