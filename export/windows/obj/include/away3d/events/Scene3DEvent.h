#ifndef INCLUDED_away3d_events_Scene3DEvent
#define INCLUDED_away3d_events_Scene3DEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,Scene3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES Scene3DEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef Scene3DEvent_obj OBJ_;
		Scene3DEvent_obj();

	public:
		enum { _hx_ClassId = 0x1dfffe15 };

		void __construct(::String type, ::away3d::containers::ObjectContainer3D objectContainer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.Scene3DEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.Scene3DEvent"); }
		static ::hx::ObjectPtr< Scene3DEvent_obj > __new(::String type, ::away3d::containers::ObjectContainer3D objectContainer);
		static ::hx::ObjectPtr< Scene3DEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::containers::ObjectContainer3D objectContainer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scene3DEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Scene3DEvent",fd,dd,14,bb); }

		static void __boot();
		static ::String ADDED_TO_SCENE;
		static ::String REMOVED_FROM_SCENE;
		static ::String PARTITION_CHANGED;
		 ::away3d::containers::ObjectContainer3D objectContainer3D;
		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_Scene3DEvent */ 
