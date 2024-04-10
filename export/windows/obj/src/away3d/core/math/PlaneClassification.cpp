#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_math_PlaneClassification
#include <away3d/core/math/PlaneClassification.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_495e37e2cdf7eda8_6_boot,"away3d.core.math.PlaneClassification","boot",0xb0284d04,"away3d.core.math.PlaneClassification.boot","away3d/core/math/PlaneClassification.hx",6,0x9f0233c3)
HX_LOCAL_STACK_FRAME(_hx_pos_495e37e2cdf7eda8_7_boot,"away3d.core.math.PlaneClassification","boot",0xb0284d04,"away3d.core.math.PlaneClassification.boot","away3d/core/math/PlaneClassification.hx",7,0x9f0233c3)
HX_LOCAL_STACK_FRAME(_hx_pos_495e37e2cdf7eda8_9_boot,"away3d.core.math.PlaneClassification","boot",0xb0284d04,"away3d.core.math.PlaneClassification.boot","away3d/core/math/PlaneClassification.hx",9,0x9f0233c3)
HX_LOCAL_STACK_FRAME(_hx_pos_495e37e2cdf7eda8_10_boot,"away3d.core.math.PlaneClassification","boot",0xb0284d04,"away3d.core.math.PlaneClassification.boot","away3d/core/math/PlaneClassification.hx",10,0x9f0233c3)
HX_LOCAL_STACK_FRAME(_hx_pos_495e37e2cdf7eda8_11_boot,"away3d.core.math.PlaneClassification","boot",0xb0284d04,"away3d.core.math.PlaneClassification.boot","away3d/core/math/PlaneClassification.hx",11,0x9f0233c3)
namespace away3d{
namespace core{
namespace math{

void PlaneClassification_obj::__construct() { }

Dynamic PlaneClassification_obj::__CreateEmpty() { return new PlaneClassification_obj; }

void *PlaneClassification_obj::_hx_vtable = 0;

Dynamic PlaneClassification_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlaneClassification_obj > _hx_result = new PlaneClassification_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlaneClassification_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2602931c;
}

int PlaneClassification_obj::BACK;

int PlaneClassification_obj::FRONT;

int PlaneClassification_obj::IN;

int PlaneClassification_obj::OUT;

int PlaneClassification_obj::INTERSECT;


PlaneClassification_obj::PlaneClassification_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlaneClassification_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PlaneClassification_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PlaneClassification_obj::BACK,HX_("BACK",27,a2,d1,2b)},
	{::hx::fsInt,(void *) &PlaneClassification_obj::FRONT,HX_("FRONT",89,50,7c,84)},
	{::hx::fsInt,(void *) &PlaneClassification_obj::IN,HX_("IN",e5,3f,00,00)},
	{::hx::fsInt,(void *) &PlaneClassification_obj::OUT,HX_("OUT",6e,3c,3c,00)},
	{::hx::fsInt,(void *) &PlaneClassification_obj::INTERSECT,HX_("INTERSECT",bf,70,cd,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PlaneClassification_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::IN,"IN");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::OUT,"OUT");
	HX_MARK_MEMBER_NAME(PlaneClassification_obj::INTERSECT,"INTERSECT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlaneClassification_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::IN,"IN");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::OUT,"OUT");
	HX_VISIT_MEMBER_NAME(PlaneClassification_obj::INTERSECT,"INTERSECT");
};

#endif

::hx::Class PlaneClassification_obj::__mClass;

static ::String PlaneClassification_obj_sStaticFields[] = {
	HX_("BACK",27,a2,d1,2b),
	HX_("FRONT",89,50,7c,84),
	HX_("IN",e5,3f,00,00),
	HX_("OUT",6e,3c,3c,00),
	HX_("INTERSECT",bf,70,cd,3d),
	::String(null())
};

void PlaneClassification_obj::__register()
{
	PlaneClassification_obj _hx_dummy;
	PlaneClassification_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.math.PlaneClassification",dc,48,e0,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlaneClassification_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlaneClassification_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PlaneClassification_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlaneClassification_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlaneClassification_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlaneClassification_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlaneClassification_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_495e37e2cdf7eda8_6_boot)
HXDLIN(   6)		BACK = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_495e37e2cdf7eda8_7_boot)
HXDLIN(   7)		FRONT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_495e37e2cdf7eda8_9_boot)
HXDLIN(   9)		IN = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_495e37e2cdf7eda8_10_boot)
HXDLIN(  10)		OUT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_495e37e2cdf7eda8_11_boot)
HXDLIN(  11)		INTERSECT = 2;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace math
