#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_EndFillView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/EndFillView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_572e3c225e42227a_775__new,"openfl.display._internal._DrawCommandReader.EndFillView_Impl_","_new",0xf87baa33,"openfl.display._internal._DrawCommandReader.EndFillView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",775,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void EndFillView_Impl__obj::__construct() { }

Dynamic EndFillView_Impl__obj::__CreateEmpty() { return new EndFillView_Impl__obj; }

void *EndFillView_Impl__obj::_hx_vtable = 0;

Dynamic EndFillView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EndFillView_Impl__obj > _hx_result = new EndFillView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EndFillView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x718fbe2a;
}

 ::openfl::display::_internal::DrawCommandReader EndFillView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_572e3c225e42227a_775__new)
HXDLIN( 775)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 775)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EndFillView_Impl__obj,_new,return )


EndFillView_Impl__obj::EndFillView_Impl__obj()
{
}

bool EndFillView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EndFillView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EndFillView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class EndFillView_Impl__obj::__mClass;

static ::String EndFillView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void EndFillView_Impl__obj::__register()
{
	EndFillView_Impl__obj _hx_dummy;
	EndFillView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.EndFillView_Impl_",dc,fc,a3,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EndFillView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EndFillView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EndFillView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EndFillView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EndFillView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
