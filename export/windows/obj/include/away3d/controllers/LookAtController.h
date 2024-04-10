#ifndef INCLUDED_away3d_controllers_LookAtController
#define INCLUDED_away3d_controllers_LookAtController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,controllers,ControllerBase)
HX_DECLARE_CLASS2(away3d,controllers,LookAtController)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,events,Object3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES LookAtController_obj : public  ::away3d::controllers::ControllerBase_obj
{
	public:
		typedef  ::away3d::controllers::ControllerBase_obj super;
		typedef LookAtController_obj OBJ_;
		LookAtController_obj();

	public:
		enum { _hx_ClassId = 0x1f727d22 };

		void __construct( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.controllers.LookAtController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.controllers.LookAtController"); }
		static ::hx::ObjectPtr< LookAtController_obj > __new( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject);
		static ::hx::ObjectPtr< LookAtController_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LookAtController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LookAtController",8e,20,d5,5d); }

		 ::openfl::geom::Vector3D _lookAtPosition;
		 ::away3d::containers::ObjectContainer3D _lookAtObject;
		 ::openfl::geom::Vector3D _origin;
		 ::openfl::geom::Vector3D _upAxis;
		 ::openfl::geom::Vector3D _pos;
		 ::openfl::geom::Vector3D get_upAxis();
		::Dynamic get_upAxis_dyn();

		 ::openfl::geom::Vector3D set_upAxis( ::openfl::geom::Vector3D upAxis);
		::Dynamic set_upAxis_dyn();

		 ::openfl::geom::Vector3D get_lookAtPosition();
		::Dynamic get_lookAtPosition_dyn();

		 ::openfl::geom::Vector3D set_lookAtPosition( ::openfl::geom::Vector3D val);
		::Dynamic set_lookAtPosition_dyn();

		 ::away3d::containers::ObjectContainer3D get_lookAtObject();
		::Dynamic get_lookAtObject_dyn();

		 ::away3d::containers::ObjectContainer3D set_lookAtObject( ::away3d::containers::ObjectContainer3D val);
		::Dynamic set_lookAtObject_dyn();

		virtual void update(::hx::Null< bool >  interpolate);

		void onLookAtObjectChanged( ::away3d::events::Object3DEvent event);
		::Dynamic onLookAtObjectChanged_dyn();

};

} // end namespace away3d
} // end namespace controllers

#endif /* INCLUDED_away3d_controllers_LookAtController */ 
