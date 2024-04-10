#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_events_Scene3DEvent
#include <away3d/events/Scene3DEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f1426d1f658c2e56_23_new,"away3d.events.Scene3DEvent","new",0xf54ba4b5,"away3d.events.Scene3DEvent.new","away3d/events/Scene3DEvent.hx",23,0x42bf1a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_f1426d1f658c2e56_30_clone,"away3d.events.Scene3DEvent","clone",0x4a3866f2,"away3d.events.Scene3DEvent.clone","away3d/events/Scene3DEvent.hx",30,0x42bf1a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_f1426d1f658c2e56_9_boot,"away3d.events.Scene3DEvent","boot",0xa4fd7a3d,"away3d.events.Scene3DEvent.boot","away3d/events/Scene3DEvent.hx",9,0x42bf1a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_f1426d1f658c2e56_10_boot,"away3d.events.Scene3DEvent","boot",0xa4fd7a3d,"away3d.events.Scene3DEvent.boot","away3d/events/Scene3DEvent.hx",10,0x42bf1a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_f1426d1f658c2e56_11_boot,"away3d.events.Scene3DEvent","boot",0xa4fd7a3d,"away3d.events.Scene3DEvent.boot","away3d/events/Scene3DEvent.hx",11,0x42bf1a3b)
namespace away3d{
namespace events{

void Scene3DEvent_obj::__construct(::String type, ::away3d::containers::ObjectContainer3D objectContainer){
            	HX_STACKFRAME(&_hx_pos_f1426d1f658c2e56_23_new)
HXLINE(  24)		this->objectContainer3D = objectContainer;
HXLINE(  25)		super::__construct(type,null(),null());
            	}

Dynamic Scene3DEvent_obj::__CreateEmpty() { return new Scene3DEvent_obj; }

void *Scene3DEvent_obj::_hx_vtable = 0;

Dynamic Scene3DEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scene3DEvent_obj > _hx_result = new Scene3DEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Scene3DEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x1dfffe15;
	}
}

 ::openfl::events::Event Scene3DEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f1426d1f658c2e56_30_clone)
HXDLIN(  30)		return  ::away3d::events::Scene3DEvent_obj::__alloc( HX_CTX ,this->type,this->objectContainer3D);
            	}


::String Scene3DEvent_obj::ADDED_TO_SCENE;

::String Scene3DEvent_obj::REMOVED_FROM_SCENE;

::String Scene3DEvent_obj::PARTITION_CHANGED;


::hx::ObjectPtr< Scene3DEvent_obj > Scene3DEvent_obj::__new(::String type, ::away3d::containers::ObjectContainer3D objectContainer) {
	::hx::ObjectPtr< Scene3DEvent_obj > __this = new Scene3DEvent_obj();
	__this->__construct(type,objectContainer);
	return __this;
}

::hx::ObjectPtr< Scene3DEvent_obj > Scene3DEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::containers::ObjectContainer3D objectContainer) {
	Scene3DEvent_obj *__this = (Scene3DEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scene3DEvent_obj), true, "away3d.events.Scene3DEvent"));
	*(void **)__this = Scene3DEvent_obj::_hx_vtable;
	__this->__construct(type,objectContainer);
	return __this;
}

Scene3DEvent_obj::Scene3DEvent_obj()
{
}

void Scene3DEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene3DEvent);
	HX_MARK_MEMBER_NAME(objectContainer3D,"objectContainer3D");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene3DEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectContainer3D,"objectContainer3D");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Scene3DEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"objectContainer3D") ) { return ::hx::Val( objectContainer3D ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scene3DEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"objectContainer3D") ) { objectContainer3D=inValue.Cast<  ::away3d::containers::ObjectContainer3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene3DEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("objectContainer3D",b3,d7,46,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scene3DEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::containers::ObjectContainer3D */ ,(int)offsetof(Scene3DEvent_obj,objectContainer3D),HX_("objectContainer3D",b3,d7,46,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Scene3DEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Scene3DEvent_obj::ADDED_TO_SCENE,HX_("ADDED_TO_SCENE",e7,c6,a1,0f)},
	{::hx::fsString,(void *) &Scene3DEvent_obj::REMOVED_FROM_SCENE,HX_("REMOVED_FROM_SCENE",f6,3a,39,d0)},
	{::hx::fsString,(void *) &Scene3DEvent_obj::PARTITION_CHANGED,HX_("PARTITION_CHANGED",1f,ca,e6,71)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Scene3DEvent_obj_sMemberFields[] = {
	HX_("objectContainer3D",b3,d7,46,4a),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void Scene3DEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene3DEvent_obj::ADDED_TO_SCENE,"ADDED_TO_SCENE");
	HX_MARK_MEMBER_NAME(Scene3DEvent_obj::REMOVED_FROM_SCENE,"REMOVED_FROM_SCENE");
	HX_MARK_MEMBER_NAME(Scene3DEvent_obj::PARTITION_CHANGED,"PARTITION_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Scene3DEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene3DEvent_obj::ADDED_TO_SCENE,"ADDED_TO_SCENE");
	HX_VISIT_MEMBER_NAME(Scene3DEvent_obj::REMOVED_FROM_SCENE,"REMOVED_FROM_SCENE");
	HX_VISIT_MEMBER_NAME(Scene3DEvent_obj::PARTITION_CHANGED,"PARTITION_CHANGED");
};

#endif

::hx::Class Scene3DEvent_obj::__mClass;

static ::String Scene3DEvent_obj_sStaticFields[] = {
	HX_("ADDED_TO_SCENE",e7,c6,a1,0f),
	HX_("REMOVED_FROM_SCENE",f6,3a,39,d0),
	HX_("PARTITION_CHANGED",1f,ca,e6,71),
	::String(null())
};

void Scene3DEvent_obj::__register()
{
	Scene3DEvent_obj _hx_dummy;
	Scene3DEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.Scene3DEvent",43,26,ac,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Scene3DEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Scene3DEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scene3DEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scene3DEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Scene3DEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scene3DEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scene3DEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Scene3DEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f1426d1f658c2e56_9_boot)
HXDLIN(   9)		ADDED_TO_SCENE = HX_("addedToScene",f1,90,1b,01);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f1426d1f658c2e56_10_boot)
HXDLIN(  10)		REMOVED_FROM_SCENE = HX_("removedFromScene",c2,8f,3c,af);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f1426d1f658c2e56_11_boot)
HXDLIN(  11)		PARTITION_CHANGED = HX_("partitionChanged",2a,a8,20,c4);
            	}
}

} // end namespace away3d
} // end namespace events
