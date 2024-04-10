#ifndef INCLUDED_away3d_controllers_ControllerBase
#define INCLUDED_away3d_controllers_ControllerBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,controllers,ControllerBase)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES ControllerBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ControllerBase_obj OBJ_;
		ControllerBase_obj();

	public:
		enum { _hx_ClassId = 0x603e0965 };

		void __construct( ::away3d::entities::Entity targetObject);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.controllers.ControllerBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.controllers.ControllerBase"); }
		static ::hx::ObjectPtr< ControllerBase_obj > __new( ::away3d::entities::Entity targetObject);
		static ::hx::ObjectPtr< ControllerBase_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity targetObject);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ControllerBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ControllerBase",ed,be,ac,cc); }

		bool _autoUpdate;
		 ::away3d::entities::Entity _targetObject;
		void notifyUpdate();
		::Dynamic notifyUpdate_dyn();

		 ::away3d::entities::Entity get_targetObject();
		::Dynamic get_targetObject_dyn();

		 ::away3d::entities::Entity set_targetObject( ::away3d::entities::Entity val);
		::Dynamic set_targetObject_dyn();

		bool get_autoUpdate();
		::Dynamic get_autoUpdate_dyn();

		bool set_autoUpdate(bool val);
		::Dynamic set_autoUpdate_dyn();

		virtual void update(::hx::Null< bool >  interpolate);
		::Dynamic update_dyn();

};

} // end namespace away3d
} // end namespace controllers

#endif /* INCLUDED_away3d_controllers_ControllerBase */ 
