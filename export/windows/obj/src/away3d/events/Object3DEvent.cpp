#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_events_Object3DEvent
#include <away3d/events/Object3DEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8ac4885527e98c73_54_new,"away3d.events.Object3DEvent","new",0x75465896,"away3d.events.Object3DEvent.new","away3d/events/Object3DEvent.hx",54,0x5a30fdba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ac4885527e98c73_64_clone,"away3d.events.Object3DEvent","clone",0xc5309513,"away3d.events.Object3DEvent.clone","away3d/events/Object3DEvent.hx",64,0x5a30fdba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ac4885527e98c73_15_boot,"away3d.events.Object3DEvent","boot",0x20602b3c,"away3d.events.Object3DEvent.boot","away3d/events/Object3DEvent.hx",15,0x5a30fdba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ac4885527e98c73_20_boot,"away3d.events.Object3DEvent","boot",0x20602b3c,"away3d.events.Object3DEvent.boot","away3d/events/Object3DEvent.hx",20,0x5a30fdba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ac4885527e98c73_25_boot,"away3d.events.Object3DEvent","boot",0x20602b3c,"away3d.events.Object3DEvent.boot","away3d/events/Object3DEvent.hx",25,0x5a30fdba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ac4885527e98c73_30_boot,"away3d.events.Object3DEvent","boot",0x20602b3c,"away3d.events.Object3DEvent.boot","away3d/events/Object3DEvent.hx",30,0x5a30fdba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ac4885527e98c73_35_boot,"away3d.events.Object3DEvent","boot",0x20602b3c,"away3d.events.Object3DEvent.boot","away3d/events/Object3DEvent.hx",35,0x5a30fdba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ac4885527e98c73_40_boot,"away3d.events.Object3DEvent","boot",0x20602b3c,"away3d.events.Object3DEvent.boot","away3d/events/Object3DEvent.hx",40,0x5a30fdba)
namespace away3d{
namespace events{

void Object3DEvent_obj::__construct(::String type, ::away3d::core::base::Object3D object){
            	HX_STACKFRAME(&_hx_pos_8ac4885527e98c73_54_new)
HXLINE(  55)		super::__construct(type,null(),null());
HXLINE(  56)		this->object = object;
            	}

Dynamic Object3DEvent_obj::__CreateEmpty() { return new Object3DEvent_obj; }

void *Object3DEvent_obj::_hx_vtable = 0;

Dynamic Object3DEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Object3DEvent_obj > _hx_result = new Object3DEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Object3DEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x162e1592;
	}
}

 ::openfl::events::Event Object3DEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_8ac4885527e98c73_64_clone)
HXDLIN(  64)		return  ::away3d::events::Object3DEvent_obj::__alloc( HX_CTX ,this->type,this->object);
            	}


::String Object3DEvent_obj::VISIBLITY_UPDATED;

::String Object3DEvent_obj::SCENETRANSFORM_CHANGED;

::String Object3DEvent_obj::SCENE_CHANGED;

::String Object3DEvent_obj::POSITION_CHANGED;

::String Object3DEvent_obj::ROTATION_CHANGED;

::String Object3DEvent_obj::SCALE_CHANGED;


::hx::ObjectPtr< Object3DEvent_obj > Object3DEvent_obj::__new(::String type, ::away3d::core::base::Object3D object) {
	::hx::ObjectPtr< Object3DEvent_obj > __this = new Object3DEvent_obj();
	__this->__construct(type,object);
	return __this;
}

::hx::ObjectPtr< Object3DEvent_obj > Object3DEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::core::base::Object3D object) {
	Object3DEvent_obj *__this = (Object3DEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Object3DEvent_obj), true, "away3d.events.Object3DEvent"));
	*(void **)__this = Object3DEvent_obj::_hx_vtable;
	__this->__construct(type,object);
	return __this;
}

Object3DEvent_obj::Object3DEvent_obj()
{
}

void Object3DEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object3DEvent);
	HX_MARK_MEMBER_NAME(object,"object");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Object3DEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Object3DEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Object3DEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::away3d::core::base::Object3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object3DEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("object",bf,7e,3f,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Object3DEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::core::base::Object3D */ ,(int)offsetof(Object3DEvent_obj,object),HX_("object",bf,7e,3f,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Object3DEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Object3DEvent_obj::VISIBLITY_UPDATED,HX_("VISIBLITY_UPDATED",f7,19,40,a1)},
	{::hx::fsString,(void *) &Object3DEvent_obj::SCENETRANSFORM_CHANGED,HX_("SCENETRANSFORM_CHANGED",f5,84,9e,14)},
	{::hx::fsString,(void *) &Object3DEvent_obj::SCENE_CHANGED,HX_("SCENE_CHANGED",81,fb,8f,86)},
	{::hx::fsString,(void *) &Object3DEvent_obj::POSITION_CHANGED,HX_("POSITION_CHANGED",fe,5f,e7,af)},
	{::hx::fsString,(void *) &Object3DEvent_obj::ROTATION_CHANGED,HX_("ROTATION_CHANGED",93,19,f1,d2)},
	{::hx::fsString,(void *) &Object3DEvent_obj::SCALE_CHANGED,HX_("SCALE_CHANGED",bf,5e,81,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Object3DEvent_obj_sMemberFields[] = {
	HX_("object",bf,7e,3f,15),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void Object3DEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::VISIBLITY_UPDATED,"VISIBLITY_UPDATED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::SCENETRANSFORM_CHANGED,"SCENETRANSFORM_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::SCENE_CHANGED,"SCENE_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::POSITION_CHANGED,"POSITION_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::ROTATION_CHANGED,"ROTATION_CHANGED");
	HX_MARK_MEMBER_NAME(Object3DEvent_obj::SCALE_CHANGED,"SCALE_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Object3DEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::VISIBLITY_UPDATED,"VISIBLITY_UPDATED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::SCENETRANSFORM_CHANGED,"SCENETRANSFORM_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::SCENE_CHANGED,"SCENE_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::POSITION_CHANGED,"POSITION_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::ROTATION_CHANGED,"ROTATION_CHANGED");
	HX_VISIT_MEMBER_NAME(Object3DEvent_obj::SCALE_CHANGED,"SCALE_CHANGED");
};

#endif

::hx::Class Object3DEvent_obj::__mClass;

static ::String Object3DEvent_obj_sStaticFields[] = {
	HX_("VISIBLITY_UPDATED",f7,19,40,a1),
	HX_("SCENETRANSFORM_CHANGED",f5,84,9e,14),
	HX_("SCENE_CHANGED",81,fb,8f,86),
	HX_("POSITION_CHANGED",fe,5f,e7,af),
	HX_("ROTATION_CHANGED",93,19,f1,d2),
	HX_("SCALE_CHANGED",bf,5e,81,02),
	::String(null())
};

void Object3DEvent_obj::__register()
{
	Object3DEvent_obj _hx_dummy;
	Object3DEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.Object3DEvent",a4,15,25,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Object3DEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Object3DEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Object3DEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Object3DEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Object3DEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object3DEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object3DEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Object3DEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8ac4885527e98c73_15_boot)
HXDLIN(  15)		VISIBLITY_UPDATED = HX_("visiblityUpdated",00,38,3c,6c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ac4885527e98c73_20_boot)
HXDLIN(  20)		SCENETRANSFORM_CHANGED = HX_("scenetransformChanged",34,a2,78,f4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ac4885527e98c73_25_boot)
HXDLIN(  25)		SCENE_CHANGED = HX_("sceneChanged",08,01,23,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ac4885527e98c73_30_boot)
HXDLIN(  30)		POSITION_CHANGED = HX_("positionChanged",4b,8f,04,cc);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ac4885527e98c73_35_boot)
HXDLIN(  35)		ROTATION_CHANGED = HX_("rotationChanged",56,df,c0,2d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8ac4885527e98c73_40_boot)
HXDLIN(  40)		SCALE_CHANGED = HX_("scaleChanged",8a,4f,16,64);
            	}
}

} // end namespace away3d
} // end namespace events
