#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_CoordinateSystem
#include <away3d/cameras/lenses/CoordinateSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ef2ad28af817b4b_13_boot,"away3d.cameras.lenses.CoordinateSystem","boot",0xf7783ca6,"away3d.cameras.lenses.CoordinateSystem.boot","away3d/cameras/lenses/CoordinateSystem.hx",13,0xcab116a5)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef2ad28af817b4b_18_boot,"away3d.cameras.lenses.CoordinateSystem","boot",0xf7783ca6,"away3d.cameras.lenses.CoordinateSystem.boot","away3d/cameras/lenses/CoordinateSystem.hx",18,0xcab116a5)
namespace away3d{
namespace cameras{
namespace lenses{

void CoordinateSystem_obj::__construct() { }

Dynamic CoordinateSystem_obj::__CreateEmpty() { return new CoordinateSystem_obj; }

void *CoordinateSystem_obj::_hx_vtable = 0;

Dynamic CoordinateSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoordinateSystem_obj > _hx_result = new CoordinateSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoordinateSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2000fee2;
}

int CoordinateSystem_obj::LEFT_HANDED;

int CoordinateSystem_obj::RIGHT_HANDED;


CoordinateSystem_obj::CoordinateSystem_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoordinateSystem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoordinateSystem_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CoordinateSystem_obj::LEFT_HANDED,HX_("LEFT_HANDED",06,8a,a1,61)},
	{::hx::fsInt,(void *) &CoordinateSystem_obj::RIGHT_HANDED,HX_("RIGHT_HANDED",f1,26,cf,14)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoordinateSystem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoordinateSystem_obj::LEFT_HANDED,"LEFT_HANDED");
	HX_MARK_MEMBER_NAME(CoordinateSystem_obj::RIGHT_HANDED,"RIGHT_HANDED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoordinateSystem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoordinateSystem_obj::LEFT_HANDED,"LEFT_HANDED");
	HX_VISIT_MEMBER_NAME(CoordinateSystem_obj::RIGHT_HANDED,"RIGHT_HANDED");
};

#endif

::hx::Class CoordinateSystem_obj::__mClass;

static ::String CoordinateSystem_obj_sStaticFields[] = {
	HX_("LEFT_HANDED",06,8a,a1,61),
	HX_("RIGHT_HANDED",f1,26,cf,14),
	::String(null())
};

void CoordinateSystem_obj::__register()
{
	CoordinateSystem_obj _hx_dummy;
	CoordinateSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.cameras.lenses.CoordinateSystem",7a,7c,1a,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CoordinateSystem_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoordinateSystem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoordinateSystem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoordinateSystem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoordinateSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoordinateSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoordinateSystem_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3ef2ad28af817b4b_13_boot)
HXDLIN(  13)		LEFT_HANDED = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ef2ad28af817b4b_18_boot)
HXDLIN(  18)		RIGHT_HANDED = 1;
            	}
}

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses
