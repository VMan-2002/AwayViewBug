#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_AnimatorBase
#include <away3d/animators/AnimatorBase.h>
#endif
#ifndef INCLUDED_away3d_events_AnimatorEvent
#include <away3d/events/AnimatorEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7a27c5e60f1e9fd5_38_new,"away3d.events.AnimatorEvent","new",0x58a3777f,"away3d.events.AnimatorEvent.new","away3d/events/AnimatorEvent.hx",38,0x5206eef1)
HX_LOCAL_STACK_FRAME(_hx_pos_7a27c5e60f1e9fd5_45_get_animator,"away3d.events.AnimatorEvent","get_animator",0xc1142c71,"away3d.events.AnimatorEvent.get_animator","away3d/events/AnimatorEvent.hx",45,0x5206eef1)
HX_LOCAL_STACK_FRAME(_hx_pos_7a27c5e60f1e9fd5_55_clone,"away3d.events.AnimatorEvent","clone",0x1142003c,"away3d.events.AnimatorEvent.clone","away3d/events/AnimatorEvent.hx",55,0x5206eef1)
HX_LOCAL_STACK_FRAME(_hx_pos_7a27c5e60f1e9fd5_17_boot,"away3d.events.AnimatorEvent","boot",0x2e7e1833,"away3d.events.AnimatorEvent.boot","away3d/events/AnimatorEvent.hx",17,0x5206eef1)
HX_LOCAL_STACK_FRAME(_hx_pos_7a27c5e60f1e9fd5_22_boot,"away3d.events.AnimatorEvent","boot",0x2e7e1833,"away3d.events.AnimatorEvent.boot","away3d/events/AnimatorEvent.hx",22,0x5206eef1)
HX_LOCAL_STACK_FRAME(_hx_pos_7a27c5e60f1e9fd5_27_boot,"away3d.events.AnimatorEvent","boot",0x2e7e1833,"away3d.events.AnimatorEvent.boot","away3d/events/AnimatorEvent.hx",27,0x5206eef1)
namespace away3d{
namespace events{

void AnimatorEvent_obj::__construct(::String type, ::away3d::animators::AnimatorBase animator){
            	HX_STACKFRAME(&_hx_pos_7a27c5e60f1e9fd5_38_new)
HXLINE(  39)		super::__construct(type,false,false);
HXLINE(  40)		this->_animator = animator;
            	}

Dynamic AnimatorEvent_obj::__CreateEmpty() { return new AnimatorEvent_obj; }

void *AnimatorEvent_obj::_hx_vtable = 0;

Dynamic AnimatorEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimatorEvent_obj > _hx_result = new AnimatorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AnimatorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x59a54bfb;
	}
}

 ::away3d::animators::AnimatorBase AnimatorEvent_obj::get_animator(){
            	HX_STACKFRAME(&_hx_pos_7a27c5e60f1e9fd5_45_get_animator)
HXDLIN(  45)		return this->_animator;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorEvent_obj,get_animator,return )

 ::openfl::events::Event AnimatorEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7a27c5e60f1e9fd5_55_clone)
HXDLIN(  55)		return  ::away3d::events::AnimatorEvent_obj::__alloc( HX_CTX ,this->type,this->_animator);
            	}


::String AnimatorEvent_obj::START;

::String AnimatorEvent_obj::STOP;

::String AnimatorEvent_obj::CYCLE_COMPLETE;


::hx::ObjectPtr< AnimatorEvent_obj > AnimatorEvent_obj::__new(::String type, ::away3d::animators::AnimatorBase animator) {
	::hx::ObjectPtr< AnimatorEvent_obj > __this = new AnimatorEvent_obj();
	__this->__construct(type,animator);
	return __this;
}

::hx::ObjectPtr< AnimatorEvent_obj > AnimatorEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::animators::AnimatorBase animator) {
	AnimatorEvent_obj *__this = (AnimatorEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimatorEvent_obj), true, "away3d.events.AnimatorEvent"));
	*(void **)__this = AnimatorEvent_obj::_hx_vtable;
	__this->__construct(type,animator);
	return __this;
}

AnimatorEvent_obj::AnimatorEvent_obj()
{
}

void AnimatorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatorEvent);
	HX_MARK_MEMBER_NAME(_animator,"_animator");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimatorEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animator,"_animator");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimatorEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animator() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { return ::hx::Val( _animator ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_animator") ) { return ::hx::Val( get_animator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimatorEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_animator") ) { _animator=inValue.Cast<  ::away3d::animators::AnimatorBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animator",67,7b,f2,88));
	outFields->push(HX_("_animator",c6,72,88,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimatorEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::animators::AnimatorBase */ ,(int)offsetof(AnimatorEvent_obj,_animator),HX_("_animator",c6,72,88,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AnimatorEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AnimatorEvent_obj::START,HX_("START",42,ac,f9,01)},
	{::hx::fsString,(void *) &AnimatorEvent_obj::STOP,HX_("STOP",02,b8,1c,37)},
	{::hx::fsString,(void *) &AnimatorEvent_obj::CYCLE_COMPLETE,HX_("CYCLE_COMPLETE",d2,d2,5f,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AnimatorEvent_obj_sMemberFields[] = {
	HX_("_animator",c6,72,88,d0),
	HX_("get_animator",70,2f,0c,3e),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void AnimatorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimatorEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(AnimatorEvent_obj::STOP,"STOP");
	HX_MARK_MEMBER_NAME(AnimatorEvent_obj::CYCLE_COMPLETE,"CYCLE_COMPLETE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AnimatorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimatorEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(AnimatorEvent_obj::STOP,"STOP");
	HX_VISIT_MEMBER_NAME(AnimatorEvent_obj::CYCLE_COMPLETE,"CYCLE_COMPLETE");
};

#endif

::hx::Class AnimatorEvent_obj::__mClass;

static ::String AnimatorEvent_obj_sStaticFields[] = {
	HX_("START",42,ac,f9,01),
	HX_("STOP",02,b8,1c,37),
	HX_("CYCLE_COMPLETE",d2,d2,5f,9f),
	::String(null())
};

void AnimatorEvent_obj::__register()
{
	AnimatorEvent_obj _hx_dummy;
	AnimatorEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.AnimatorEvent",0d,4c,9c,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AnimatorEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AnimatorEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimatorEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimatorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AnimatorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimatorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimatorEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AnimatorEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7a27c5e60f1e9fd5_17_boot)
HXDLIN(  17)		START = HX_("start",62,74,0b,84);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7a27c5e60f1e9fd5_22_boot)
HXDLIN(  22)		STOP = HX_("stop",02,f0,5b,4c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7a27c5e60f1e9fd5_27_boot)
HXDLIN(  27)		CYCLE_COMPLETE = HX_("cycle_complete",b2,76,9e,b0);
            	}
}

} // end namespace away3d
} // end namespace events
