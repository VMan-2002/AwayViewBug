#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad80fdef085776b0_17_new,"away3d.events.Stage3DEvent","new",0xe7088483,"away3d.events.Stage3DEvent.new","away3d/events/Stage3DEvent.hx",17,0x4d03ae2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ad80fdef085776b0_10_boot,"away3d.events.Stage3DEvent","boot",0x38846eaf,"away3d.events.Stage3DEvent.boot","away3d/events/Stage3DEvent.hx",10,0x4d03ae2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ad80fdef085776b0_11_boot,"away3d.events.Stage3DEvent","boot",0x38846eaf,"away3d.events.Stage3DEvent.boot","away3d/events/Stage3DEvent.hx",11,0x4d03ae2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ad80fdef085776b0_12_boot,"away3d.events.Stage3DEvent","boot",0x38846eaf,"away3d.events.Stage3DEvent.boot","away3d/events/Stage3DEvent.hx",12,0x4d03ae2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ad80fdef085776b0_13_boot,"away3d.events.Stage3DEvent","boot",0x38846eaf,"away3d.events.Stage3DEvent.boot","away3d/events/Stage3DEvent.hx",13,0x4d03ae2d)
namespace away3d{
namespace events{

void Stage3DEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_ad80fdef085776b0_17_new)
HXDLIN(  17)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic Stage3DEvent_obj::__CreateEmpty() { return new Stage3DEvent_obj; }

void *Stage3DEvent_obj::_hx_vtable = 0;

Dynamic Stage3DEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stage3DEvent_obj > _hx_result = new Stage3DEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Stage3DEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x0e07ce47;
	}
}

::String Stage3DEvent_obj::CONTEXT3D_CREATED;

::String Stage3DEvent_obj::CONTEXT3D_DISPOSED;

::String Stage3DEvent_obj::CONTEXT3D_RECREATED;

::String Stage3DEvent_obj::VIEWPORT_UPDATED;


::hx::ObjectPtr< Stage3DEvent_obj > Stage3DEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< Stage3DEvent_obj > __this = new Stage3DEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< Stage3DEvent_obj > Stage3DEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	Stage3DEvent_obj *__this = (Stage3DEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stage3DEvent_obj), true, "away3d.events.Stage3DEvent"));
	*(void **)__this = Stage3DEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

Stage3DEvent_obj::Stage3DEvent_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Stage3DEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Stage3DEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Stage3DEvent_obj::CONTEXT3D_CREATED,HX_("CONTEXT3D_CREATED",89,0b,ce,d4)},
	{::hx::fsString,(void *) &Stage3DEvent_obj::CONTEXT3D_DISPOSED,HX_("CONTEXT3D_DISPOSED",04,a2,2b,5b)},
	{::hx::fsString,(void *) &Stage3DEvent_obj::CONTEXT3D_RECREATED,HX_("CONTEXT3D_RECREATED",76,22,ef,74)},
	{::hx::fsString,(void *) &Stage3DEvent_obj::VIEWPORT_UPDATED,HX_("VIEWPORT_UPDATED",02,a2,f2,09)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Stage3DEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_CREATED,"CONTEXT3D_CREATED");
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_DISPOSED,"CONTEXT3D_DISPOSED");
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_RECREATED,"CONTEXT3D_RECREATED");
	HX_MARK_MEMBER_NAME(Stage3DEvent_obj::VIEWPORT_UPDATED,"VIEWPORT_UPDATED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stage3DEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_CREATED,"CONTEXT3D_CREATED");
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_DISPOSED,"CONTEXT3D_DISPOSED");
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::CONTEXT3D_RECREATED,"CONTEXT3D_RECREATED");
	HX_VISIT_MEMBER_NAME(Stage3DEvent_obj::VIEWPORT_UPDATED,"VIEWPORT_UPDATED");
};

#endif

::hx::Class Stage3DEvent_obj::__mClass;

static ::String Stage3DEvent_obj_sStaticFields[] = {
	HX_("CONTEXT3D_CREATED",89,0b,ce,d4),
	HX_("CONTEXT3D_DISPOSED",04,a2,2b,5b),
	HX_("CONTEXT3D_RECREATED",76,22,ef,74),
	HX_("VIEWPORT_UPDATED",02,a2,f2,09),
	::String(null())
};

void Stage3DEvent_obj::__register()
{
	Stage3DEvent_obj _hx_dummy;
	Stage3DEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.Stage3DEvent",11,87,ad,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stage3DEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stage3DEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Stage3DEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stage3DEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stage3DEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stage3DEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Stage3DEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ad80fdef085776b0_10_boot)
HXDLIN(  10)		CONTEXT3D_CREATED = HX_("Context3DCreated",88,a9,28,8d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ad80fdef085776b0_11_boot)
HXDLIN(  11)		CONTEXT3D_DISPOSED = HX_("Context3DDisposed",45,43,1b,f2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ad80fdef085776b0_12_boot)
HXDLIN(  12)		CONTEXT3D_RECREATED = HX_("Context3DRecreated",35,9a,ac,ef);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ad80fdef085776b0_13_boot)
HXDLIN(  13)		VIEWPORT_UPDATED = HX_("ViewportUpdated",55,9e,a2,01);
            	}
}

} // end namespace away3d
} // end namespace events
