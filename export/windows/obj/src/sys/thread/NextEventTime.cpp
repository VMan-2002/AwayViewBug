#include <hxcpp.h>

#ifndef INCLUDED_sys_thread_NextEventTime
#include <sys/thread/NextEventTime.h>
#endif
namespace sys{
namespace thread{

::sys::thread::NextEventTime NextEventTime_obj::AnyTime( ::Dynamic time)
{
	return ::hx::CreateEnum< NextEventTime_obj >(HX_("AnyTime",f9,00,87,6d),2,1)->_hx_init(0,time);
}

::sys::thread::NextEventTime NextEventTime_obj::At(Float time)
{
	return ::hx::CreateEnum< NextEventTime_obj >(HX_("At",13,39,00,00),3,1)->_hx_init(0,time);
}

::sys::thread::NextEventTime NextEventTime_obj::Never;

::sys::thread::NextEventTime NextEventTime_obj::Now;

bool NextEventTime_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AnyTime",f9,00,87,6d)) { outValue = NextEventTime_obj::AnyTime_dyn(); return true; }
	if (inName==HX_("At",13,39,00,00)) { outValue = NextEventTime_obj::At_dyn(); return true; }
	if (inName==HX_("Never",6c,ae,5d,2c)) { outValue = NextEventTime_obj::Never; return true; }
	if (inName==HX_("Now",f6,90,3b,00)) { outValue = NextEventTime_obj::Now; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(NextEventTime_obj)

int NextEventTime_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AnyTime",f9,00,87,6d)) return 2;
	if (inName==HX_("At",13,39,00,00)) return 3;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 1;
	if (inName==HX_("Now",f6,90,3b,00)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextEventTime_obj,AnyTime,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(NextEventTime_obj,At,return)

int NextEventTime_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AnyTime",f9,00,87,6d)) return 1;
	if (inName==HX_("At",13,39,00,00)) return 1;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 0;
	if (inName==HX_("Now",f6,90,3b,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val NextEventTime_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AnyTime",f9,00,87,6d)) return AnyTime_dyn();
	if (inName==HX_("At",13,39,00,00)) return At_dyn();
	if (inName==HX_("Never",6c,ae,5d,2c)) return Never;
	if (inName==HX_("Now",f6,90,3b,00)) return Now;
	return super::__Field(inName,inCallProp);
}

static ::String NextEventTime_obj_sStaticFields[] = {
	HX_("Now",f6,90,3b,00),
	HX_("Never",6c,ae,5d,2c),
	HX_("AnyTime",f9,00,87,6d),
	HX_("At",13,39,00,00),
	::String(null())
};

::hx::Class NextEventTime_obj::__mClass;

Dynamic __Create_NextEventTime_obj() { return new NextEventTime_obj; }

void NextEventTime_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("sys.thread.NextEventTime",11,32,a7,e0), ::hx::TCanCast< NextEventTime_obj >,NextEventTime_obj_sStaticFields,0,
	&__Create_NextEventTime_obj, &__Create,
	&super::__SGetClass(), &CreateNextEventTime_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &NextEventTime_obj::__GetStatic;
}

void NextEventTime_obj::__boot()
{
Never = ::hx::CreateConstEnum< NextEventTime_obj >(HX_("Never",6c,ae,5d,2c),1);
Now = ::hx::CreateConstEnum< NextEventTime_obj >(HX_("Now",f6,90,3b,00),0);
}


} // end namespace sys
} // end namespace thread
