#ifndef INCLUDED_away3d_events_Stage3DEvent
#define INCLUDED_away3d_events_Stage3DEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES Stage3DEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef Stage3DEvent_obj OBJ_;
		Stage3DEvent_obj();

	public:
		enum { _hx_ClassId = 0x0e07ce47 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.Stage3DEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.Stage3DEvent"); }
		static ::hx::ObjectPtr< Stage3DEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< Stage3DEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage3DEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stage3DEvent",cb,3e,16,84); }

		static void __boot();
		static ::String CONTEXT3D_CREATED;
		static ::String CONTEXT3D_DISPOSED;
		static ::String CONTEXT3D_RECREATED;
		static ::String VIEWPORT_UPDATED;
};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_Stage3DEvent */ 
