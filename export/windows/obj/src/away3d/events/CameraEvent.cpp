#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_CameraEvent
#include <away3d/events/CameraEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_65944b0dfb9656ff_19_new,"away3d.events.CameraEvent","new",0xff734a01,"away3d.events.CameraEvent.new","away3d/events/CameraEvent.hx",19,0x4c159aaf)
HX_LOCAL_STACK_FRAME(_hx_pos_65944b0dfb9656ff_26_get_camera,"away3d.events.CameraEvent","get_camera",0x2b7f22ed,"away3d.events.CameraEvent.get_camera","away3d/events/CameraEvent.hx",26,0x4c159aaf)
HX_LOCAL_STACK_FRAME(_hx_pos_65944b0dfb9656ff_31_clone,"away3d.events.CameraEvent","clone",0xe98cf73e,"away3d.events.CameraEvent.clone","away3d/events/CameraEvent.hx",31,0x4c159aaf)
HX_LOCAL_STACK_FRAME(_hx_pos_65944b0dfb9656ff_14_boot,"away3d.events.CameraEvent","boot",0x7d867771,"away3d.events.CameraEvent.boot","away3d/events/CameraEvent.hx",14,0x4c159aaf)
namespace away3d{
namespace events{

void CameraEvent_obj::__construct(::String type, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_65944b0dfb9656ff_19_new)
HXLINE(  20)		super::__construct(type,bubbles,cancelable);
HXLINE(  21)		this->_camera = camera;
            	}

Dynamic CameraEvent_obj::__CreateEmpty() { return new CameraEvent_obj; }

void *CameraEvent_obj::_hx_vtable = 0;

Dynamic CameraEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CameraEvent_obj > _hx_result = new CameraEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CameraEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x17c14719;
	}
}

 ::away3d::cameras::Camera3D CameraEvent_obj::get_camera(){
            	HX_STACKFRAME(&_hx_pos_65944b0dfb9656ff_26_get_camera)
HXDLIN(  26)		return this->_camera;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraEvent_obj,get_camera,return )

 ::openfl::events::Event CameraEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_65944b0dfb9656ff_31_clone)
HXDLIN(  31)		return  ::away3d::events::CameraEvent_obj::__alloc( HX_CTX ,this->type,this->_camera,this->bubbles,this->cancelable);
            	}


::String CameraEvent_obj::LENS_CHANGED;


::hx::ObjectPtr< CameraEvent_obj > CameraEvent_obj::__new(::String type, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< CameraEvent_obj > __this = new CameraEvent_obj();
	__this->__construct(type,camera,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< CameraEvent_obj > CameraEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::cameras::Camera3D camera,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	CameraEvent_obj *__this = (CameraEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CameraEvent_obj), true, "away3d.events.CameraEvent"));
	*(void **)__this = CameraEvent_obj::_hx_vtable;
	__this->__construct(type,camera,__o_bubbles,__o_cancelable);
	return __this;
}

CameraEvent_obj::CameraEvent_obj()
{
}

void CameraEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraEvent);
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CameraEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CameraEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camera() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return ::hx::Val( _camera ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_camera") ) { return ::hx::Val( get_camera_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CameraEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast<  ::away3d::cameras::Camera3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("camera",a5,46,8c,b7));
	outFields->push(HX_("_camera",44,58,03,26));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CameraEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::cameras::Camera3D */ ,(int)offsetof(CameraEvent_obj,_camera),HX_("_camera",44,58,03,26)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CameraEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CameraEvent_obj::LENS_CHANGED,HX_("LENS_CHANGED",53,e3,15,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CameraEvent_obj_sMemberFields[] = {
	HX_("_camera",44,58,03,26),
	HX_("get_camera",6e,b6,13,a8),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void CameraEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraEvent_obj::LENS_CHANGED,"LENS_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CameraEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraEvent_obj::LENS_CHANGED,"LENS_CHANGED");
};

#endif

::hx::Class CameraEvent_obj::__mClass;

static ::String CameraEvent_obj_sStaticFields[] = {
	HX_("LENS_CHANGED",53,e3,15,c2),
	::String(null())
};

void CameraEvent_obj::__register()
{
	CameraEvent_obj _hx_dummy;
	CameraEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.CameraEvent",8f,35,ac,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CameraEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CameraEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CameraEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CameraEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CameraEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CameraEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_65944b0dfb9656ff_14_boot)
HXDLIN(  14)		LENS_CHANGED = HX_("lensChanged",96,c5,b8,2a);
            	}
}

} // end namespace away3d
} // end namespace events
