#ifndef INCLUDED_away3d_events_MouseEvent3D
#define INCLUDED_away3d_events_MouseEvent3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,MouseEvent3D)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace events{


class HXCPP_CLASS_ATTRIBUTES MouseEvent3D_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef MouseEvent3D_obj OBJ_;
		MouseEvent3D_obj();

	public:
		enum { _hx_ClassId = 0x133d6bde };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.events.MouseEvent3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.events.MouseEvent3D"); }
		static ::hx::ObjectPtr< MouseEvent3D_obj > __new(::String type);
		static ::hx::ObjectPtr< MouseEvent3D_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MouseEvent3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MouseEvent3D",c6,4b,52,b0); }

		static void __boot();
		static ::String MOUSE_OVER;
		static ::String MOUSE_OUT;
		static ::String MOUSE_UP;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_MOVE;
		static ::String CLICK;
		static ::String DOUBLE_CLICK;
		static ::String MOUSE_WHEEL;
		bool _allowedToPropagate;
		 ::away3d::events::MouseEvent3D _parentEvent;
		Float screenX;
		Float screenY;
		 ::away3d::containers::View3D view;
		 ::away3d::containers::ObjectContainer3D object;
		::Dynamic renderable;
		 ::away3d::materials::MaterialBase material;
		 ::openfl::geom::Point uv;
		int index;
		int subGeometryIndex;
		 ::openfl::geom::Vector3D localPosition;
		 ::openfl::geom::Vector3D localNormal;
		bool ctrlKey;
		bool altKey;
		bool shiftKey;
		int delta;
		void stopPropagation();

		void stopImmediatePropagation();

		 ::openfl::events::Event clone();

		 ::openfl::geom::Vector3D get_scenePosition();
		::Dynamic get_scenePosition_dyn();

		 ::openfl::geom::Vector3D getScenePosition( ::openfl::geom::Vector3D v);
		::Dynamic getScenePosition_dyn();

		 ::openfl::geom::Vector3D get_sceneNormal();
		::Dynamic get_sceneNormal_dyn();

		 ::openfl::geom::Vector3D getSceneNormal( ::openfl::geom::Vector3D v);
		::Dynamic getSceneNormal_dyn();

};

} // end namespace away3d
} // end namespace events

#endif /* INCLUDED_away3d_events_MouseEvent3D */ 
