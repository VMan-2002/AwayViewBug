#ifndef INCLUDED_away3d_events_AnimatorEvent
#define INCLUDED_away3d_events_AnimatorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,AnimatorBase)
HX_DECLARE_CLASS2(away3d,events,AnimatorEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES AnimatorEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef AnimatorEvent_obj OBJ_;
		AnimatorEvent_obj();

	public:
		enum { _hx_ClassId = 0x59a54bfb };

		void __construct(::String type, ::away3d::animators::AnimatorBase animator);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.AnimatorEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.AnimatorEvent"); }
		static ::hx::ObjectPtr< AnimatorEvent_obj > __new(::String type, ::away3d::animators::AnimatorBase animator);
		static ::hx::ObjectPtr< AnimatorEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::animators::AnimatorBase animator);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimatorEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimatorEvent",13,57,d4,2e); }

		static void __boot();
		static ::String START;
		static ::String STOP;
		static ::String CYCLE_COMPLETE;
		 ::away3d::animators::AnimatorBase _animator;
		 ::away3d::animators::AnimatorBase get_animator();
		::Dynamic get_animator_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_AnimatorEvent */ 
