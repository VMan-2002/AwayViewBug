#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_events_LensEvent
#include <away3d/events/LensEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c69f4ae908fca3bb_19_new,"away3d.events.LensEvent","new",0x083bc408,"away3d.events.LensEvent.new","away3d/events/LensEvent.hx",19,0x8d2fb688)
HX_LOCAL_STACK_FRAME(_hx_pos_c69f4ae908fca3bb_26_get_lens,"away3d.events.LensEvent","get_lens",0x9ec695df,"away3d.events.LensEvent.get_lens","away3d/events/LensEvent.hx",26,0x8d2fb688)
HX_LOCAL_STACK_FRAME(_hx_pos_c69f4ae908fca3bb_31_clone,"away3d.events.LensEvent","clone",0x10ed4105,"away3d.events.LensEvent.clone","away3d/events/LensEvent.hx",31,0x8d2fb688)
HX_LOCAL_STACK_FRAME(_hx_pos_c69f4ae908fca3bb_14_boot,"away3d.events.LensEvent","boot",0x2428c38a,"away3d.events.LensEvent.boot","away3d/events/LensEvent.hx",14,0x8d2fb688)
namespace away3d{
namespace events{

void LensEvent_obj::__construct(::String type, ::away3d::cameras::lenses::LensBase lens,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_c69f4ae908fca3bb_19_new)
HXLINE(  20)		super::__construct(type,bubbles,cancelable);
HXLINE(  21)		this->_lens = lens;
            	}

Dynamic LensEvent_obj::__CreateEmpty() { return new LensEvent_obj; }

void *LensEvent_obj::_hx_vtable = 0;

Dynamic LensEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LensEvent_obj > _hx_result = new LensEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool LensEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x53f25104;
	}
}

 ::away3d::cameras::lenses::LensBase LensEvent_obj::get_lens(){
            	HX_STACKFRAME(&_hx_pos_c69f4ae908fca3bb_26_get_lens)
HXDLIN(  26)		return this->_lens;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensEvent_obj,get_lens,return )

 ::openfl::events::Event LensEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c69f4ae908fca3bb_31_clone)
HXDLIN(  31)		return  ::away3d::events::LensEvent_obj::__alloc( HX_CTX ,this->type,this->_lens,this->bubbles,this->cancelable);
            	}


::String LensEvent_obj::MATRIX_CHANGED;


::hx::ObjectPtr< LensEvent_obj > LensEvent_obj::__new(::String type, ::away3d::cameras::lenses::LensBase lens,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< LensEvent_obj > __this = new LensEvent_obj();
	__this->__construct(type,lens,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< LensEvent_obj > LensEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::away3d::cameras::lenses::LensBase lens,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	LensEvent_obj *__this = (LensEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LensEvent_obj), true, "away3d.events.LensEvent"));
	*(void **)__this = LensEvent_obj::_hx_vtable;
	__this->__construct(type,lens,__o_bubbles,__o_cancelable);
	return __this;
}

LensEvent_obj::LensEvent_obj()
{
}

void LensEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LensEvent);
	HX_MARK_MEMBER_NAME(_lens,"_lens");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LensEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lens,"_lens");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LensEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lens") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lens() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lens") ) { return ::hx::Val( _lens ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_lens") ) { return ::hx::Val( get_lens_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LensEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_lens") ) { _lens=inValue.Cast<  ::away3d::cameras::lenses::LensBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LensEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lens",fe,0e,b0,47));
	outFields->push(HX_("_lens",dd,2a,c1,fa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LensEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::cameras::lenses::LensBase */ ,(int)offsetof(LensEvent_obj,_lens),HX_("_lens",dd,2a,c1,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LensEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LensEvent_obj::MATRIX_CHANGED,HX_("MATRIX_CHANGED",96,69,a1,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LensEvent_obj_sMemberFields[] = {
	HX_("_lens",dd,2a,c1,fa),
	HX_("get_lens",87,ca,6a,c7),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void LensEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LensEvent_obj::MATRIX_CHANGED,"MATRIX_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LensEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LensEvent_obj::MATRIX_CHANGED,"MATRIX_CHANGED");
};

#endif

::hx::Class LensEvent_obj::__mClass;

static ::String LensEvent_obj_sStaticFields[] = {
	HX_("MATRIX_CHANGED",96,69,a1,fc),
	::String(null())
};

void LensEvent_obj::__register()
{
	LensEvent_obj _hx_dummy;
	LensEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.LensEvent",16,60,7f,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LensEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LensEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LensEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LensEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LensEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LensEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LensEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LensEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c69f4ae908fca3bb_14_boot)
HXDLIN(  14)		MATRIX_CHANGED = HX_("matrixChanged",b3,5c,37,91);
            	}
}

} // end namespace away3d
} // end namespace events
