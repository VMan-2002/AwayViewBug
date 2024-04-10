#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e461ab3099d38dbe_22_new,"away3d.materials.methods.LightingMethodBase","new",0xe29c6ddd,"away3d.materials.methods.LightingMethodBase.new","away3d/materials/methods/LightingMethodBase.hx",22,0x469c9610)
HX_LOCAL_STACK_FRAME(_hx_pos_e461ab3099d38dbe_33_getFragmentPreLightingCode,"away3d.materials.methods.LightingMethodBase","getFragmentPreLightingCode",0x8affcc19,"away3d.materials.methods.LightingMethodBase.getFragmentPreLightingCode","away3d/materials/methods/LightingMethodBase.hx",33,0x469c9610)
HX_LOCAL_STACK_FRAME(_hx_pos_e461ab3099d38dbe_46_getFragmentCodePerLight,"away3d.materials.methods.LightingMethodBase","getFragmentCodePerLight",0x2e1016a9,"away3d.materials.methods.LightingMethodBase.getFragmentCodePerLight","away3d/materials/methods/LightingMethodBase.hx",46,0x469c9610)
HX_LOCAL_STACK_FRAME(_hx_pos_e461ab3099d38dbe_59_getFragmentCodePerProbe,"away3d.materials.methods.LightingMethodBase","getFragmentCodePerProbe",0x81a36103,"away3d.materials.methods.LightingMethodBase.getFragmentCodePerProbe","away3d/materials/methods/LightingMethodBase.hx",59,0x469c9610)
HX_LOCAL_STACK_FRAME(_hx_pos_e461ab3099d38dbe_72_getFragmentPostLightingCode,"away3d.materials.methods.LightingMethodBase","getFragmentPostLightingCode",0xdbff10bc,"away3d.materials.methods.LightingMethodBase.getFragmentPostLightingCode","away3d/materials/methods/LightingMethodBase.hx",72,0x469c9610)
namespace away3d{
namespace materials{
namespace methods{

void LightingMethodBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e461ab3099d38dbe_22_new)
HXDLIN(  22)		super::__construct();
            	}

Dynamic LightingMethodBase_obj::__CreateEmpty() { return new LightingMethodBase_obj; }

void *LightingMethodBase_obj::_hx_vtable = 0;

Dynamic LightingMethodBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightingMethodBase_obj > _hx_result = new LightingMethodBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LightingMethodBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x011e2747) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x011e2747;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x12886923 || inClassId==(int)0x37f46043;
	}
}

::String LightingMethodBase_obj::getFragmentPreLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_e461ab3099d38dbe_33_getFragmentPreLightingCode)
HXDLIN(  33)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LightingMethodBase_obj,getFragmentPreLightingCode,return )

::String LightingMethodBase_obj::getFragmentCodePerLight( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement lightDirReg, ::away3d::materials::compilation::ShaderRegisterElement lightColReg, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_e461ab3099d38dbe_46_getFragmentCodePerLight)
HXDLIN(  46)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC4(LightingMethodBase_obj,getFragmentCodePerLight,return )

::String LightingMethodBase_obj::getFragmentCodePerProbe( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement cubeMapReg,::String weightRegister, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_e461ab3099d38dbe_59_getFragmentCodePerProbe)
HXDLIN(  59)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC4(LightingMethodBase_obj,getFragmentCodePerProbe,return )

::String LightingMethodBase_obj::getFragmentPostLightingCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_e461ab3099d38dbe_72_getFragmentPostLightingCode)
HXDLIN(  72)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC3(LightingMethodBase_obj,getFragmentPostLightingCode,return )


::hx::ObjectPtr< LightingMethodBase_obj > LightingMethodBase_obj::__new() {
	::hx::ObjectPtr< LightingMethodBase_obj > __this = new LightingMethodBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LightingMethodBase_obj > LightingMethodBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LightingMethodBase_obj *__this = (LightingMethodBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightingMethodBase_obj), true, "away3d.materials.methods.LightingMethodBase"));
	*(void **)__this = LightingMethodBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LightingMethodBase_obj::LightingMethodBase_obj()
{
}

void LightingMethodBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightingMethodBase);
	HX_MARK_MEMBER_NAME(_modulateMethod,"_modulateMethod");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightingMethodBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_modulateMethod,"_modulateMethod");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LightingMethodBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_modulateMethod") ) { return ::hx::Val( _modulateMethod ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFragmentCodePerLight") ) { return ::hx::Val( getFragmentCodePerLight_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFragmentCodePerProbe") ) { return ::hx::Val( getFragmentCodePerProbe_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getFragmentPreLightingCode") ) { return ::hx::Val( getFragmentPreLightingCode_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getFragmentPostLightingCode") ) { return ::hx::Val( getFragmentPostLightingCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LightingMethodBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_modulateMethod") ) { _modulateMethod=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightingMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_modulateMethod",79,60,b7,9d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightingMethodBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LightingMethodBase_obj,_modulateMethod),HX_("_modulateMethod",79,60,b7,9d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LightingMethodBase_obj_sStaticStorageInfo = 0;
#endif

static ::String LightingMethodBase_obj_sMemberFields[] = {
	HX_("_modulateMethod",79,60,b7,9d),
	HX_("getFragmentPreLightingCode",f6,59,1b,b5),
	HX_("getFragmentCodePerLight",ac,ec,39,19),
	HX_("getFragmentCodePerProbe",06,37,cd,6c),
	HX_("getFragmentPostLightingCode",3f,a4,ff,89),
	::String(null()) };

::hx::Class LightingMethodBase_obj::__mClass;

void LightingMethodBase_obj::__register()
{
	LightingMethodBase_obj _hx_dummy;
	LightingMethodBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.LightingMethodBase",6b,3b,47,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightingMethodBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightingMethodBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightingMethodBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightingMethodBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
