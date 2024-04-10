#ifndef INCLUDED_openfl_events_NativeWindowDisplayStateEvent
#define INCLUDED_openfl_events_NativeWindowDisplayStateEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,NativeWindowDisplayStateEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES NativeWindowDisplayStateEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef NativeWindowDisplayStateEvent_obj OBJ_;
		NativeWindowDisplayStateEvent_obj();

	public:
		enum { _hx_ClassId = 0x7990795b };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic beforeDisplayState, ::Dynamic afterDisplayState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.NativeWindowDisplayStateEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.NativeWindowDisplayStateEvent"); }
		static ::hx::ObjectPtr< NativeWindowDisplayStateEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic beforeDisplayState, ::Dynamic afterDisplayState);
		static ::hx::ObjectPtr< NativeWindowDisplayStateEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic beforeDisplayState, ::Dynamic afterDisplayState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeWindowDisplayStateEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeWindowDisplayStateEvent",24,b8,6c,5a); }

		static void __boot();
		static ::String DISPLAY_STATE_CHANGING;
		static ::String DISPLAY_STATE_CHANGE;
		 ::Dynamic beforeDisplayState;
		 ::Dynamic afterDisplayState;
		 ::openfl::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_NativeWindowDisplayStateEvent */ 
