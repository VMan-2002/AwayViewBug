#ifndef INCLUDED_away3d_events_LightEvent
#define INCLUDED_away3d_events_LightEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,events,LightEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES LightEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef LightEvent_obj OBJ_;
		LightEvent_obj();

	public:
		enum { _hx_ClassId = 0x00c15c00 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.LightEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.LightEvent"); }
		static ::hx::ObjectPtr< LightEvent_obj > __new(::String type);
		static ::hx::ObjectPtr< LightEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LightEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LightEvent",84,e3,7b,ed); }

		static void __boot();
		static ::String CASTS_SHADOW_CHANGE;
		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_LightEvent */ 
