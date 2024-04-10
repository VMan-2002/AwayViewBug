#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb48bead2d0d11a3_11_new,"away3d.events.ShadingMethodEvent","new",0xd30e72c7,"away3d.events.ShadingMethodEvent.new","away3d/events/ShadingMethodEvent.hx",11,0x8ba5dc69)
HX_LOCAL_STACK_FRAME(_hx_pos_cb48bead2d0d11a3_7_boot,"away3d.events.ShadingMethodEvent","boot",0xd1aefbeb,"away3d.events.ShadingMethodEvent.boot","away3d/events/ShadingMethodEvent.hx",7,0x8ba5dc69)
namespace away3d{
namespace events{

void ShadingMethodEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_cb48bead2d0d11a3_11_new)
HXDLIN(  11)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic ShadingMethodEvent_obj::__CreateEmpty() { return new ShadingMethodEvent_obj; }

void *ShadingMethodEvent_obj::_hx_vtable = 0;

Dynamic ShadingMethodEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShadingMethodEvent_obj > _hx_result = new ShadingMethodEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ShadingMethodEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x137084a7;
	}
}

::String ShadingMethodEvent_obj::SHADER_INVALIDATED;


::hx::ObjectPtr< ShadingMethodEvent_obj > ShadingMethodEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< ShadingMethodEvent_obj > __this = new ShadingMethodEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< ShadingMethodEvent_obj > ShadingMethodEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	ShadingMethodEvent_obj *__this = (ShadingMethodEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShadingMethodEvent_obj), true, "away3d.events.ShadingMethodEvent"));
	*(void **)__this = ShadingMethodEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

ShadingMethodEvent_obj::ShadingMethodEvent_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShadingMethodEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ShadingMethodEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ShadingMethodEvent_obj::SHADER_INVALIDATED,HX_("SHADER_INVALIDATED",0f,fb,5b,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ShadingMethodEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShadingMethodEvent_obj::SHADER_INVALIDATED,"SHADER_INVALIDATED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShadingMethodEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShadingMethodEvent_obj::SHADER_INVALIDATED,"SHADER_INVALIDATED");
};

#endif

::hx::Class ShadingMethodEvent_obj::__mClass;

static ::String ShadingMethodEvent_obj_sStaticFields[] = {
	HX_("SHADER_INVALIDATED",0f,fb,5b,bb),
	::String(null())
};

void ShadingMethodEvent_obj::__register()
{
	ShadingMethodEvent_obj _hx_dummy;
	ShadingMethodEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.ShadingMethodEvent",55,03,86,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShadingMethodEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShadingMethodEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ShadingMethodEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShadingMethodEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShadingMethodEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShadingMethodEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShadingMethodEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cb48bead2d0d11a3_7_boot)
HXDLIN(   7)		SHADER_INVALIDATED = HX_("ShaderInvalidated",44,03,b9,4d);
            	}
}

} // end namespace away3d
} // end namespace events
