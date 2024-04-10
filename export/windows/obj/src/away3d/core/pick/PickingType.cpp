#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingType
#include <away3d/core/pick/PickingType.h>
#endif
#ifndef INCLUDED_away3d_core_pick_RaycastPicker
#include <away3d/core/pick/RaycastPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_ShaderPicker
#include <away3d/core/pick/ShaderPicker.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2936f5b983453ff1_14_boot,"away3d.core.pick.PickingType","boot",0x53ebfdd2,"away3d.core.pick.PickingType.boot","away3d/core/pick/PickingType.hx",14,0x0828ac11)
HX_LOCAL_STACK_FRAME(_hx_pos_2936f5b983453ff1_19_boot,"away3d.core.pick.PickingType","boot",0x53ebfdd2,"away3d.core.pick.PickingType.boot","away3d/core/pick/PickingType.hx",19,0x0828ac11)
HX_LOCAL_STACK_FRAME(_hx_pos_2936f5b983453ff1_24_boot,"away3d.core.pick.PickingType","boot",0x53ebfdd2,"away3d.core.pick.PickingType.boot","away3d/core/pick/PickingType.hx",24,0x0828ac11)
namespace away3d{
namespace core{
namespace pick{

void PickingType_obj::__construct() { }

Dynamic PickingType_obj::__CreateEmpty() { return new PickingType_obj; }

void *PickingType_obj::_hx_vtable = 0;

Dynamic PickingType_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PickingType_obj > _hx_result = new PickingType_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PickingType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x184709bc;
}

::Dynamic PickingType_obj::SHADER;

::Dynamic PickingType_obj::RAYCAST_FIRST_ENCOUNTERED;

::Dynamic PickingType_obj::RAYCAST_BEST_HIT;


PickingType_obj::PickingType_obj()
{
}

bool PickingType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SHADER") ) { outValue = ( SHADER ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RAYCAST_BEST_HIT") ) { outValue = ( RAYCAST_BEST_HIT ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"RAYCAST_FIRST_ENCOUNTERED") ) { outValue = ( RAYCAST_FIRST_ENCOUNTERED ); return true; }
	}
	return false;
}

bool PickingType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SHADER") ) { SHADER=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RAYCAST_BEST_HIT") ) { RAYCAST_BEST_HIT=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"RAYCAST_FIRST_ENCOUNTERED") ) { RAYCAST_FIRST_ENCOUNTERED=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PickingType_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PickingType_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &PickingType_obj::SHADER,HX_("SHADER",25,6b,a3,cf)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &PickingType_obj::RAYCAST_FIRST_ENCOUNTERED,HX_("RAYCAST_FIRST_ENCOUNTERED",4d,93,33,d0)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &PickingType_obj::RAYCAST_BEST_HIT,HX_("RAYCAST_BEST_HIT",0e,bb,44,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PickingType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PickingType_obj::SHADER,"SHADER");
	HX_MARK_MEMBER_NAME(PickingType_obj::RAYCAST_FIRST_ENCOUNTERED,"RAYCAST_FIRST_ENCOUNTERED");
	HX_MARK_MEMBER_NAME(PickingType_obj::RAYCAST_BEST_HIT,"RAYCAST_BEST_HIT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PickingType_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PickingType_obj::SHADER,"SHADER");
	HX_VISIT_MEMBER_NAME(PickingType_obj::RAYCAST_FIRST_ENCOUNTERED,"RAYCAST_FIRST_ENCOUNTERED");
	HX_VISIT_MEMBER_NAME(PickingType_obj::RAYCAST_BEST_HIT,"RAYCAST_BEST_HIT");
};

#endif

::hx::Class PickingType_obj::__mClass;

static ::String PickingType_obj_sStaticFields[] = {
	HX_("SHADER",25,6b,a3,cf),
	HX_("RAYCAST_FIRST_ENCOUNTERED",4d,93,33,d0),
	HX_("RAYCAST_BEST_HIT",0e,bb,44,2b),
	::String(null())
};

void PickingType_obj::__register()
{
	PickingType_obj _hx_dummy;
	PickingType_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.pick.PickingType",ce,4a,16,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PickingType_obj::__GetStatic;
	__mClass->mSetStaticField = &PickingType_obj::__SetStatic;
	__mClass->mMarkFunc = PickingType_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PickingType_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PickingType_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PickingType_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PickingType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PickingType_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PickingType_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2936f5b983453ff1_14_boot)
HXDLIN(  14)		SHADER =  ::away3d::core::pick::ShaderPicker_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2936f5b983453ff1_19_boot)
HXDLIN(  19)		RAYCAST_FIRST_ENCOUNTERED =  ::away3d::core::pick::RaycastPicker_obj::__alloc( HX_CTX ,false);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_2936f5b983453ff1_24_boot)
HXDLIN(  24)		RAYCAST_BEST_HIT =  ::away3d::core::pick::RaycastPicker_obj::__alloc( HX_CTX ,true);
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
