#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVOSet
#include <away3d/materials/methods/MethodVOSet.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c46b37f7735daef5_24_new,"away3d.materials.methods.MethodVOSet","new",0x0608cf4d,"away3d.materials.methods.MethodVOSet.new","away3d/materials/methods/MethodVOSet.hx",24,0xd1836546)
namespace away3d{
namespace materials{
namespace methods{

void MethodVOSet_obj::__construct( ::away3d::materials::methods::EffectMethodBase method){
            	HX_STACKFRAME(&_hx_pos_c46b37f7735daef5_24_new)
HXLINE(  25)		this->method = method;
HXLINE(  26)		this->data = method->createMethodVO();
            	}

Dynamic MethodVOSet_obj::__CreateEmpty() { return new MethodVOSet_obj; }

void *MethodVOSet_obj::_hx_vtable = 0;

Dynamic MethodVOSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MethodVOSet_obj > _hx_result = new MethodVOSet_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MethodVOSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d8a557f;
}


::hx::ObjectPtr< MethodVOSet_obj > MethodVOSet_obj::__new( ::away3d::materials::methods::EffectMethodBase method) {
	::hx::ObjectPtr< MethodVOSet_obj > __this = new MethodVOSet_obj();
	__this->__construct(method);
	return __this;
}

::hx::ObjectPtr< MethodVOSet_obj > MethodVOSet_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::materials::methods::EffectMethodBase method) {
	MethodVOSet_obj *__this = (MethodVOSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MethodVOSet_obj), true, "away3d.materials.methods.MethodVOSet"));
	*(void **)__this = MethodVOSet_obj::_hx_vtable;
	__this->__construct(method);
	return __this;
}

MethodVOSet_obj::MethodVOSet_obj()
{
}

void MethodVOSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodVOSet);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void MethodVOSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val MethodVOSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return ::hx::Val( method ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MethodVOSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::away3d::materials::methods::MethodVO >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast<  ::away3d::materials::methods::EffectMethodBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodVOSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("method",e1,f6,5a,09));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MethodVOSet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::methods::EffectMethodBase */ ,(int)offsetof(MethodVOSet_obj,method),HX_("method",e1,f6,5a,09)},
	{::hx::fsObject /*  ::away3d::materials::methods::MethodVO */ ,(int)offsetof(MethodVOSet_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MethodVOSet_obj_sStaticStorageInfo = 0;
#endif

static ::String MethodVOSet_obj_sMemberFields[] = {
	HX_("method",e1,f6,5a,09),
	HX_("data",2a,56,63,42),
	::String(null()) };

::hx::Class MethodVOSet_obj::__mClass;

void MethodVOSet_obj::__register()
{
	MethodVOSet_obj _hx_dummy;
	MethodVOSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.MethodVOSet",db,24,aa,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MethodVOSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MethodVOSet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MethodVOSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MethodVOSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
