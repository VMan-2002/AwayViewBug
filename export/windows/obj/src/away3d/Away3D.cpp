#include <hxcpp.h>

#ifndef INCLUDED_away3d_Away3D
#include <away3d/Away3D.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_680872c501bb2228_8_boot,"away3d.Away3D","boot",0xdb7da012,"away3d.Away3D.boot","away3d/Away3D.hx",8,0x06a436cf)
HX_LOCAL_STACK_FRAME(_hx_pos_680872c501bb2228_10_boot,"away3d.Away3D","boot",0xdb7da012,"away3d.Away3D.boot","away3d/Away3D.hx",10,0x06a436cf)
HX_LOCAL_STACK_FRAME(_hx_pos_680872c501bb2228_12_boot,"away3d.Away3D","boot",0xdb7da012,"away3d.Away3D.boot","away3d/Away3D.hx",12,0x06a436cf)
HX_LOCAL_STACK_FRAME(_hx_pos_680872c501bb2228_14_boot,"away3d.Away3D","boot",0xdb7da012,"away3d.Away3D.boot","away3d/Away3D.hx",14,0x06a436cf)
namespace away3d{

void Away3D_obj::__construct() { }

Dynamic Away3D_obj::__CreateEmpty() { return new Away3D_obj; }

void *Away3D_obj::_hx_vtable = 0;

Dynamic Away3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Away3D_obj > _hx_result = new Away3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Away3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c0090c6;
}

::String Away3D_obj::WEBSITE_URL;

int Away3D_obj::MAJOR_VERSION;

int Away3D_obj::MINOR_VERSION;

int Away3D_obj::REVISION;


Away3D_obj::Away3D_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Away3D_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Away3D_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Away3D_obj::WEBSITE_URL,HX_("WEBSITE_URL",cb,13,8c,f8)},
	{::hx::fsInt,(void *) &Away3D_obj::MAJOR_VERSION,HX_("MAJOR_VERSION",92,4a,98,0b)},
	{::hx::fsInt,(void *) &Away3D_obj::MINOR_VERSION,HX_("MINOR_VERSION",8e,64,0d,1d)},
	{::hx::fsInt,(void *) &Away3D_obj::REVISION,HX_("REVISION",db,4f,77,29)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Away3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Away3D_obj::WEBSITE_URL,"WEBSITE_URL");
	HX_MARK_MEMBER_NAME(Away3D_obj::MAJOR_VERSION,"MAJOR_VERSION");
	HX_MARK_MEMBER_NAME(Away3D_obj::MINOR_VERSION,"MINOR_VERSION");
	HX_MARK_MEMBER_NAME(Away3D_obj::REVISION,"REVISION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Away3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Away3D_obj::WEBSITE_URL,"WEBSITE_URL");
	HX_VISIT_MEMBER_NAME(Away3D_obj::MAJOR_VERSION,"MAJOR_VERSION");
	HX_VISIT_MEMBER_NAME(Away3D_obj::MINOR_VERSION,"MINOR_VERSION");
	HX_VISIT_MEMBER_NAME(Away3D_obj::REVISION,"REVISION");
};

#endif

::hx::Class Away3D_obj::__mClass;

static ::String Away3D_obj_sStaticFields[] = {
	HX_("WEBSITE_URL",cb,13,8c,f8),
	HX_("MAJOR_VERSION",92,4a,98,0b),
	HX_("MINOR_VERSION",8e,64,0d,1d),
	HX_("REVISION",db,4f,77,29),
	::String(null())
};

void Away3D_obj::__register()
{
	Away3D_obj _hx_dummy;
	Away3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.Away3D",8e,d0,67,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Away3D_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Away3D_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Away3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Away3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Away3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Away3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Away3D_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_680872c501bb2228_8_boot)
HXDLIN(   8)		WEBSITE_URL = HX_("http://www.away3d.com",9b,07,53,78);
            	}
{
            	HX_STACKFRAME(&_hx_pos_680872c501bb2228_10_boot)
HXDLIN(  10)		MAJOR_VERSION = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_680872c501bb2228_12_boot)
HXDLIN(  12)		MINOR_VERSION = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_680872c501bb2228_14_boot)
HXDLIN(  14)		REVISION = 6;
            	}
}

} // end namespace away3d
