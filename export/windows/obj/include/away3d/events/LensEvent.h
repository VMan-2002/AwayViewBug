#ifndef INCLUDED_away3d_events_LensEvent
#define INCLUDED_away3d_events_LensEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS3(away3d,cameras,lenses,LensBase)
HX_DECLARE_CLASS2(away3d,events,LensEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES LensEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef LensEvent_obj OBJ_;
		LensEvent_obj();

	public:
		enum { _hx_ClassId = 0x53f25104 };

		void __construct(::String type, ::away3d::cameras::lenses::LensBase lens,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.LensEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.LensEvent"); }
		static ::hx::ObjectPtr< LensEvent_obj > __new(::String type, ::away3d::cameras::lenses::LensBase lens,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< LensEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::cameras::lenses::LensBase lens,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LensEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LensEvent",1c,f0,c7,12); }

		static void __boot();
		static ::String MATRIX_CHANGED;
		 ::away3d::cameras::lenses::LensBase _lens;
		 ::away3d::cameras::lenses::LensBase get_lens();
		::Dynamic get_lens_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_LensEvent */ 
