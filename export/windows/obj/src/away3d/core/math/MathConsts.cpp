#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_core_math_MathConsts
#include <away3d/core/math/MathConsts.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c860354f3e8d6139_11_boot,"away3d.core.math.MathConsts","boot",0xcd20d002,"away3d.core.math.MathConsts.boot","away3d/core/math/MathConsts.hx",11,0xabc35a9f)
HX_LOCAL_STACK_FRAME(_hx_pos_c860354f3e8d6139_16_boot,"away3d.core.math.MathConsts","boot",0xcd20d002,"away3d.core.math.MathConsts.boot","away3d/core/math/MathConsts.hx",16,0xabc35a9f)
namespace away3d{
namespace core{
namespace math{

void MathConsts_obj::__construct() { }

Dynamic MathConsts_obj::__CreateEmpty() { return new MathConsts_obj; }

void *MathConsts_obj::_hx_vtable = 0;

Dynamic MathConsts_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MathConsts_obj > _hx_result = new MathConsts_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MathConsts_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78ceb4c2;
}

Float MathConsts_obj::RADIANS_TO_DEGREES;

Float MathConsts_obj::DEGREES_TO_RADIANS;


MathConsts_obj::MathConsts_obj()
{
}

bool MathConsts_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RADIANS_TO_DEGREES") ) { outValue = ( RADIANS_TO_DEGREES ); return true; }
		if (HX_FIELD_EQ(inName,"DEGREES_TO_RADIANS") ) { outValue = ( DEGREES_TO_RADIANS ); return true; }
	}
	return false;
}

bool MathConsts_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RADIANS_TO_DEGREES") ) { RADIANS_TO_DEGREES=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"DEGREES_TO_RADIANS") ) { DEGREES_TO_RADIANS=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MathConsts_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MathConsts_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &MathConsts_obj::RADIANS_TO_DEGREES,HX_("RADIANS_TO_DEGREES",90,dd,8e,7f)},
	{::hx::fsFloat,(void *) &MathConsts_obj::DEGREES_TO_RADIANS,HX_("DEGREES_TO_RADIANS",46,75,d6,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MathConsts_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathConsts_obj::RADIANS_TO_DEGREES,"RADIANS_TO_DEGREES");
	HX_MARK_MEMBER_NAME(MathConsts_obj::DEGREES_TO_RADIANS,"DEGREES_TO_RADIANS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MathConsts_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathConsts_obj::RADIANS_TO_DEGREES,"RADIANS_TO_DEGREES");
	HX_VISIT_MEMBER_NAME(MathConsts_obj::DEGREES_TO_RADIANS,"DEGREES_TO_RADIANS");
};

#endif

::hx::Class MathConsts_obj::__mClass;

static ::String MathConsts_obj_sStaticFields[] = {
	HX_("RADIANS_TO_DEGREES",90,dd,8e,7f),
	HX_("DEGREES_TO_RADIANS",46,75,d6,9f),
	::String(null())
};

void MathConsts_obj::__register()
{
	MathConsts_obj _hx_dummy;
	MathConsts_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.math.MathConsts",9e,a6,72,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathConsts_obj::__GetStatic;
	__mClass->mSetStaticField = &MathConsts_obj::__SetStatic;
	__mClass->mMarkFunc = MathConsts_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MathConsts_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MathConsts_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MathConsts_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MathConsts_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MathConsts_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MathConsts_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c860354f3e8d6139_11_boot)
HXDLIN(  11)		RADIANS_TO_DEGREES = (( (Float)(180) ) / ::Math_obj::PI);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c860354f3e8d6139_16_boot)
HXDLIN(  16)		DEGREES_TO_RADIANS = (::Math_obj::PI / ( (Float)(180) ));
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace math
