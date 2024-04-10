#include <hxcpp.h>

#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4af216d82dcd5cfb_17_new,"away3d.errors.AbstractMethodError","new",0xa5077ec3,"away3d.errors.AbstractMethodError.new","away3d/errors/AbstractMethodError.hx",17,0x597ed42d)
namespace away3d{
namespace errors{

void AbstractMethodError_obj::__construct(::String message,::hx::Null< int >  __o_id){
            		int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_4af216d82dcd5cfb_17_new)
HXLINE(  18)		if (::hx::IsNull( message )) {
HXLINE(  18)			message = HX_("An abstract method was called! Either an instance of an abstract class was created, or an abstract method was not overridden by the subclass.",ba,c6,14,33);
            		}
HXLINE(  19)		super::__construct(message,id);
            	}

Dynamic AbstractMethodError_obj::__CreateEmpty() { return new AbstractMethodError_obj; }

void *AbstractMethodError_obj::_hx_vtable = 0;

Dynamic AbstractMethodError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbstractMethodError_obj > _hx_result = new AbstractMethodError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AbstractMethodError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x58361977) {
		if (inClassId<=(int)0x3495c9c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3495c9c5;
		} else {
			return inClassId==(int)0x58361977;
		}
	} else {
		return inClassId==(int)0x677ddc49;
	}
}


::hx::ObjectPtr< AbstractMethodError_obj > AbstractMethodError_obj::__new(::String message,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< AbstractMethodError_obj > __this = new AbstractMethodError_obj();
	__this->__construct(message,__o_id);
	return __this;
}

::hx::ObjectPtr< AbstractMethodError_obj > AbstractMethodError_obj::__alloc(::hx::Ctx *_hx_ctx,::String message,::hx::Null< int >  __o_id) {
	AbstractMethodError_obj *__this = (AbstractMethodError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbstractMethodError_obj), true, "away3d.errors.AbstractMethodError"));
	*(void **)__this = AbstractMethodError_obj::_hx_vtable;
	__this->__construct(message,__o_id);
	return __this;
}

AbstractMethodError_obj::AbstractMethodError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AbstractMethodError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AbstractMethodError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AbstractMethodError_obj::__mClass;

void AbstractMethodError_obj::__register()
{
	AbstractMethodError_obj _hx_dummy;
	AbstractMethodError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.errors.AbstractMethodError",51,61,92,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AbstractMethodError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractMethodError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractMethodError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace errors
