#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#define INCLUDED_away3d_events_ShadingMethodEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,events,ShadingMethodEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ShadingMethodEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ShadingMethodEvent_obj OBJ_;
		ShadingMethodEvent_obj();

	public:
		enum { _hx_ClassId = 0x137084a7 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.ShadingMethodEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.ShadingMethodEvent"); }
		static ::hx::ObjectPtr< ShadingMethodEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< ShadingMethodEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShadingMethodEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShadingMethodEvent",8f,42,6a,99); }

		static void __boot();
		static ::String SHADER_INVALIDATED;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_ShadingMethodEvent */ 
