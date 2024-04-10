#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_macro_Error
#include <haxe/macro/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3aabe5d3ff33afe4_1000_new,"haxe.macro.Error","new",0x73f79570,"haxe.macro.Error.new","C:\\HaxeToolkit\\haxe\\std/haxe/macro/Expr.hx",1000,0xd8e2ab76)
namespace haxe{
namespace macro{

void Error_obj::__construct(::String message, ::Dynamic pos, ::haxe::Exception previous){
            	HX_STACKFRAME(&_hx_pos_3aabe5d3ff33afe4_1000_new)
HXLINE(1001)		super::__construct(message,previous,null());
HXLINE(1002)		this->pos = pos;
            	}

Dynamic Error_obj::__CreateEmpty() { return new Error_obj; }

void *Error_obj::_hx_vtable = 0;

Dynamic Error_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Error_obj > _hx_result = new Error_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Error_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c561a82) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c561a82;
	} else {
		return inClassId==(int)0x677ddc49;
	}
}


Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(pos,"pos");
	 ::haxe::Exception_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	 ::haxe::Exception_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Error_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Error_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Error_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Error_obj,pos),HX_("pos",94,5d,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Error_obj_sStaticStorageInfo = 0;
#endif

static ::String Error_obj_sMemberFields[] = {
	HX_("pos",94,5d,55,00),
	::String(null()) };

::hx::Class Error_obj::__mClass;

void Error_obj::__register()
{
	Error_obj _hx_dummy;
	Error_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.Error",7e,5d,cc,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Error_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Error_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Error_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Error_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
