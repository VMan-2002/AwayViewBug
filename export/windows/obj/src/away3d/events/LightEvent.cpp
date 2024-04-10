#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_LightEvent
#include <away3d/events/LightEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_066584af52a61e0c_11_new,"away3d.events.LightEvent","new",0xee77fc3c,"away3d.events.LightEvent.new","away3d/events/LightEvent.hx",11,0xe5581894)
HX_LOCAL_STACK_FRAME(_hx_pos_066584af52a61e0c_16_clone,"away3d.events.LightEvent","clone",0x28ceee39,"away3d.events.LightEvent.clone","away3d/events/LightEvent.hx",16,0xe5581894)
HX_LOCAL_STACK_FRAME(_hx_pos_066584af52a61e0c_7_boot,"away3d.events.LightEvent","boot",0xb29db8d6,"away3d.events.LightEvent.boot","away3d/events/LightEvent.hx",7,0xe5581894)
namespace away3d{
namespace events{

void LightEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_066584af52a61e0c_11_new)
HXDLIN(  11)		super::__construct(type,null(),null());
            	}

Dynamic LightEvent_obj::__CreateEmpty() { return new LightEvent_obj; }

void *LightEvent_obj::_hx_vtable = 0;

Dynamic LightEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightEvent_obj > _hx_result = new LightEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LightEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00c15c00) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00c15c00;
	} else {
		return inClassId==(int)0x08ec4c31;
	}
}

 ::openfl::events::Event LightEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_066584af52a61e0c_16_clone)
HXDLIN(  16)		return  ::away3d::events::LightEvent_obj::__alloc( HX_CTX ,this->type);
            	}


::String LightEvent_obj::CASTS_SHADOW_CHANGE;


::hx::ObjectPtr< LightEvent_obj > LightEvent_obj::__new(::String type) {
	::hx::ObjectPtr< LightEvent_obj > __this = new LightEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< LightEvent_obj > LightEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	LightEvent_obj *__this = (LightEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightEvent_obj), true, "away3d.events.LightEvent"));
	*(void **)__this = LightEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

LightEvent_obj::LightEvent_obj()
{
}

::hx::Val LightEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LightEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LightEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LightEvent_obj::CASTS_SHADOW_CHANGE,HX_("CASTS_SHADOW_CHANGE",24,5b,1e,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LightEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void LightEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightEvent_obj::CASTS_SHADOW_CHANGE,"CASTS_SHADOW_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LightEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightEvent_obj::CASTS_SHADOW_CHANGE,"CASTS_SHADOW_CHANGE");
};

#endif

::hx::Class LightEvent_obj::__mClass;

static ::String LightEvent_obj_sStaticFields[] = {
	HX_("CASTS_SHADOW_CHANGE",24,5b,1e,a3),
	::String(null())
};

void LightEvent_obj::__register()
{
	LightEvent_obj _hx_dummy;
	LightEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.LightEvent",4a,6e,46,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LightEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LightEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LightEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LightEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_066584af52a61e0c_7_boot)
HXDLIN(   7)		CASTS_SHADOW_CHANGE = HX_("castsShadowChange",64,f8,e5,91);
            	}
}

} // end namespace away3d
} // end namespace events
