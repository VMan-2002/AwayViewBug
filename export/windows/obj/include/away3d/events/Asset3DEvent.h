#ifndef INCLUDED_away3d_events_Asset3DEvent
#define INCLUDED_away3d_events_Asset3DEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,events,Asset3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES Asset3DEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef Asset3DEvent_obj OBJ_;
		Asset3DEvent_obj();

	public:
		enum { _hx_ClassId = 0x2701f955 };

		void __construct(::String type,::Dynamic asset,::String prevName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.Asset3DEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.Asset3DEvent"); }
		static ::hx::ObjectPtr< Asset3DEvent_obj > __new(::String type,::Dynamic asset,::String prevName);
		static ::hx::ObjectPtr< Asset3DEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::Dynamic asset,::String prevName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Asset3DEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Asset3DEvent",d9,69,10,9d); }

		static void __boot();
		static ::String ASSET_COMPLETE;
		static ::String ENTITY_COMPLETE;
		static ::String SKYBOX_COMPLETE;
		static ::String CAMERA_COMPLETE;
		static ::String MESH_COMPLETE;
		static ::String GEOMETRY_COMPLETE;
		static ::String SKELETON_COMPLETE;
		static ::String SKELETON_POSE_COMPLETE;
		static ::String CONTAINER_COMPLETE;
		static ::String TEXTURE_COMPLETE;
		static ::String TEXTURE_PROJECTOR_COMPLETE;
		static ::String MATERIAL_COMPLETE;
		static ::String ANIMATOR_COMPLETE;
		static ::String ANIMATION_SET_COMPLETE;
		static ::String ANIMATION_STATE_COMPLETE;
		static ::String ANIMATION_NODE_COMPLETE;
		static ::String STATE_TRANSITION_COMPLETE;
		static ::String SEGMENT_SET_COMPLETE;
		static ::String LIGHT_COMPLETE;
		static ::String LIGHTPICKER_COMPLETE;
		static ::String EFFECTMETHOD_COMPLETE;
		static ::String SHADOWMAPMETHOD_COMPLETE;
		static ::String ASSET_RENAME;
		static ::String ASSET_CONFLICT_RESOLVED;
		static ::String TEXTURE_SIZE_ERROR;
		::Dynamic _asset;
		::String _prevName;
		::Dynamic get_asset();
		::Dynamic get_asset_dyn();

		::String get_assetPrevName();
		::Dynamic get_assetPrevName_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_Asset3DEvent */ 
