#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ddc02dfd7eb7801_14_clear,"away3d.debug.Debug","clear",0xe7ef2a08,"away3d.debug.Debug.clear","away3d/debug/Debug.hx",14,0x69cf6077)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc02dfd7eb7801_18_delimiter,"away3d.debug.Debug","delimiter",0x78411902,"away3d.debug.Debug.delimiter","away3d/debug/Debug.hx",18,0x69cf6077)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc02dfd7eb7801_23_trace,"away3d.debug.Debug","trace",0xb5b34700,"away3d.debug.Debug.trace","away3d/debug/Debug.hx",23,0x69cf6077)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc02dfd7eb7801_28_warning,"away3d.debug.Debug","warning",0x801ae797,"away3d.debug.Debug.warning","away3d/debug/Debug.hx",28,0x69cf6077)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc02dfd7eb7801_37_error,"away3d.debug.Debug","error",0x12bd8443,"away3d.debug.Debug.error","away3d/debug/Debug.hx",37,0x69cf6077)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc02dfd7eb7801_10_boot,"away3d.debug.Debug","boot",0xfcf1b417,"away3d.debug.Debug.boot","away3d/debug/Debug.hx",10,0x69cf6077)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc02dfd7eb7801_11_boot,"away3d.debug.Debug","boot",0xfcf1b417,"away3d.debug.Debug.boot","away3d/debug/Debug.hx",11,0x69cf6077)
namespace away3d{
namespace debug{

void Debug_obj::__construct() { }

Dynamic Debug_obj::__CreateEmpty() { return new Debug_obj; }

void *Debug_obj::_hx_vtable = 0;

Dynamic Debug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Debug_obj > _hx_result = new Debug_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Debug_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c2f12ff;
}

bool Debug_obj::active;

bool Debug_obj::warningsAsErrors;

void Debug_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_3ddc02dfd7eb7801_14_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clear,(void))

void Debug_obj::delimiter(){
            	HX_STACKFRAME(&_hx_pos_3ddc02dfd7eb7801_18_delimiter)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,delimiter,(void))

void Debug_obj::trace( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_3ddc02dfd7eb7801_23_trace)
HXDLIN(  23)		if (::away3d::debug::Debug_obj::active) {
HXLINE(  24)			::haxe::Log_obj::trace(message,::hx::SourceInfo(HX_("away3d/debug/Debug.hx",77,60,cf,69),24,HX_("away3d.debug.Debug",a9,3a,16,36),HX_("trace",85,8e,1f,16)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,trace,(void))

void Debug_obj::warning( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_3ddc02dfd7eb7801_28_warning)
HXLINE(  29)		if (::away3d::debug::Debug_obj::warningsAsErrors) {
HXLINE(  30)			::away3d::debug::Debug_obj::error(message);
HXLINE(  31)			return;
            		}
HXLINE(  33)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  33)		::String _hx_tmp1 = (HX_("WARNING: ",e2,e7,94,f3) + ::Std_obj::string(message));
HXDLIN(  33)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("away3d/debug/Debug.hx",77,60,cf,69),33,HX_("away3d.debug.Debug",a9,3a,16,36),HX_("warning",5c,da,cb,09)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,warning,(void))

void Debug_obj::error( ::Dynamic message){
            	HX_GC_STACKFRAME(&_hx_pos_3ddc02dfd7eb7801_37_error)
HXLINE(  38)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  38)		::String _hx_tmp1 = (HX_("ERROR: ",4e,70,de,69) + ::Std_obj::string(message));
HXDLIN(  38)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("away3d/debug/Debug.hx",77,60,cf,69),38,HX_("away3d.debug.Debug",a9,3a,16,36),HX_("error",c8,cb,29,73)));
HXLINE(  39)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,( (::String)(message) ),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,error,(void))


Debug_obj::Debug_obj()
{
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { outValue = ( active ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"warning") ) { outValue = warning_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"delimiter") ) { outValue = delimiter_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"warningsAsErrors") ) { outValue = ( warningsAsErrors ); return true; }
	}
	return false;
}

bool Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"warningsAsErrors") ) { warningsAsErrors=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Debug_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Debug_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Debug_obj::active,HX_("active",c6,41,46,16)},
	{::hx::fsBool,(void *) &Debug_obj::warningsAsErrors,HX_("warningsAsErrors",f4,6f,0e,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Debug_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::active,"active");
	HX_MARK_MEMBER_NAME(Debug_obj::warningsAsErrors,"warningsAsErrors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Debug_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::active,"active");
	HX_VISIT_MEMBER_NAME(Debug_obj::warningsAsErrors,"warningsAsErrors");
};

#endif

::hx::Class Debug_obj::__mClass;

static ::String Debug_obj_sStaticFields[] = {
	HX_("active",c6,41,46,16),
	HX_("warningsAsErrors",f4,6f,0e,e6),
	HX_("clear",8d,71,5b,48),
	HX_("delimiter",07,07,28,86),
	HX_("trace",85,8e,1f,16),
	HX_("warning",5c,da,cb,09),
	HX_("error",c8,cb,29,73),
	::String(null())
};

void Debug_obj::__register()
{
	Debug_obj _hx_dummy;
	Debug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.debug.Debug",a9,3a,16,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &Debug_obj::__SetStatic;
	__mClass->mMarkFunc = Debug_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Debug_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Debug_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Debug_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Debug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Debug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Debug_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3ddc02dfd7eb7801_10_boot)
HXDLIN(  10)		active = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ddc02dfd7eb7801_11_boot)
HXDLIN(  11)		warningsAsErrors = false;
            	}
}

} // end namespace away3d
} // end namespace debug
