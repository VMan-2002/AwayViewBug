#ifndef INCLUDED_away3d_controllers_HoverController
#define INCLUDED_away3d_controllers_HoverController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_controllers_LookAtController
#include <away3d/controllers/LookAtController.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,controllers,ControllerBase)
HX_DECLARE_CLASS2(away3d,controllers,HoverController)
HX_DECLARE_CLASS2(away3d,controllers,LookAtController)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES HoverController_obj : public  ::away3d::controllers::LookAtController_obj
{
	public:
		typedef  ::away3d::controllers::LookAtController_obj super;
		typedef HoverController_obj OBJ_;
		HoverController_obj();

	public:
		enum { _hx_ClassId = 0x51376be0 };

		void __construct( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject,::hx::Null< Float >  __o_panAngle,::hx::Null< Float >  __o_tiltAngle,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_minTiltAngle,::hx::Null< Float >  __o_maxTiltAngle, ::Dynamic minPanAngle, ::Dynamic maxPanAngle, ::Dynamic __o_steps, ::Dynamic __o_yFactor, ::Dynamic __o_wrapPanAngle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.controllers.HoverController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.controllers.HoverController"); }
		static ::hx::ObjectPtr< HoverController_obj > __new( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject,::hx::Null< Float >  __o_panAngle,::hx::Null< Float >  __o_tiltAngle,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_minTiltAngle,::hx::Null< Float >  __o_maxTiltAngle, ::Dynamic minPanAngle, ::Dynamic maxPanAngle, ::Dynamic __o_steps, ::Dynamic __o_yFactor, ::Dynamic __o_wrapPanAngle);
		static ::hx::ObjectPtr< HoverController_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject,::hx::Null< Float >  __o_panAngle,::hx::Null< Float >  __o_tiltAngle,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_minTiltAngle,::hx::Null< Float >  __o_maxTiltAngle, ::Dynamic minPanAngle, ::Dynamic maxPanAngle, ::Dynamic __o_steps, ::Dynamic __o_yFactor, ::Dynamic __o_wrapPanAngle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HoverController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HoverController",58,8d,a7,c5); }

		Float _currentPanAngle;
		Float _currentTiltAngle;
		Float _panAngle;
		Float _tiltAngle;
		Float _distance;
		Float _minPanAngle;
		Float _maxPanAngle;
		Float _minTiltAngle;
		Float _maxTiltAngle;
		int _steps;
		Float _yFactor;
		bool _wrapPanAngle;
		int get_steps();
		::Dynamic get_steps_dyn();

		int set_steps(int val);
		::Dynamic set_steps_dyn();

		Float get_panAngle();
		::Dynamic get_panAngle_dyn();

		Float set_panAngle(Float val);
		::Dynamic set_panAngle_dyn();

		Float get_tiltAngle();
		::Dynamic get_tiltAngle_dyn();

		Float set_tiltAngle(Float val);
		::Dynamic set_tiltAngle_dyn();

		Float get_distance();
		::Dynamic get_distance_dyn();

		Float set_distance(Float val);
		::Dynamic set_distance_dyn();

		Float get_minPanAngle();
		::Dynamic get_minPanAngle_dyn();

		Float set_minPanAngle(Float val);
		::Dynamic set_minPanAngle_dyn();

		Float get_maxPanAngle();
		::Dynamic get_maxPanAngle_dyn();

		Float set_maxPanAngle(Float val);
		::Dynamic set_maxPanAngle_dyn();

		Float get_minTiltAngle();
		::Dynamic get_minTiltAngle_dyn();

		Float set_minTiltAngle(Float val);
		::Dynamic set_minTiltAngle_dyn();

		Float get_maxTiltAngle();
		::Dynamic get_maxTiltAngle_dyn();

		Float set_maxTiltAngle(Float val);
		::Dynamic set_maxTiltAngle_dyn();

		Float get_yFactor();
		::Dynamic get_yFactor_dyn();

		Float set_yFactor(Float val);
		::Dynamic set_yFactor_dyn();

		bool get_wrapPanAngle();
		::Dynamic get_wrapPanAngle_dyn();

		bool set_wrapPanAngle(bool val);
		::Dynamic set_wrapPanAngle_dyn();

		void update(::hx::Null< bool >  interpolate);

};

} // end namespace away3d
} // end namespace controllers

#endif /* INCLUDED_away3d_controllers_HoverController */ 
