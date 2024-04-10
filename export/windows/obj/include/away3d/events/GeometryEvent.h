#ifndef INCLUDED_away3d_events_GeometryEvent
#define INCLUDED_away3d_events_GeometryEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS2(away3d,events,GeometryEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES GeometryEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef GeometryEvent_obj OBJ_;
		GeometryEvent_obj();

	public:
		enum { _hx_ClassId = 0x46a974d0 };

		void __construct(::String type,::Dynamic subGeometry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.GeometryEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.GeometryEvent"); }
		static ::hx::ObjectPtr< GeometryEvent_obj > __new(::String type,::Dynamic subGeometry);
		static ::hx::ObjectPtr< GeometryEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::Dynamic subGeometry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GeometryEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GeometryEvent",e8,7f,d8,1b); }

		static void __boot();
		static ::String SUB_GEOMETRY_ADDED;
		static ::String SUB_GEOMETRY_REMOVED;
		static ::String BOUNDS_INVALID;
		::Dynamic _subGeometry;
		::Dynamic get_subGeometry();
		::Dynamic get_subGeometry_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_GeometryEvent */ 
