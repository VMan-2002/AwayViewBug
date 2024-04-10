#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_TouchPoint
#include <away3d/core/managers/TouchPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eeb5fa3a2de877ab_280_new,"away3d.core.managers.TouchPoint","new",0x7807b3ab,"away3d.core.managers.TouchPoint.new","away3d/core/managers/Touch3DManager.hx",280,0xfb55b2d8)
namespace away3d{
namespace core{
namespace managers{

void TouchPoint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_eeb5fa3a2de877ab_280_new)
            	}

Dynamic TouchPoint_obj::__CreateEmpty() { return new TouchPoint_obj; }

void *TouchPoint_obj::_hx_vtable = 0;

Dynamic TouchPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TouchPoint_obj > _hx_result = new TouchPoint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TouchPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1eaf8f3d;
}


TouchPoint_obj::TouchPoint_obj()
{
}

::hx::Val TouchPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TouchPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TouchPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TouchPoint_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(TouchPoint_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TouchPoint_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TouchPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String TouchPoint_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	::String(null()) };

::hx::Class TouchPoint_obj::__mClass;

void TouchPoint_obj::__register()
{
	TouchPoint_obj _hx_dummy;
	TouchPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.managers.TouchPoint",39,02,4c,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TouchPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TouchPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
