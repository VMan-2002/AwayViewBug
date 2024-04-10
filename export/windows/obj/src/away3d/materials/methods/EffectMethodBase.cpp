#include <hxcpp.h>

#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_EffectMethodBase
#include <away3d/materials/methods/EffectMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_febeb6bd200a7ab5_18_new,"away3d.materials.methods.EffectMethodBase","new",0x19296c22,"away3d.materials.methods.EffectMethodBase.new","away3d/materials/methods/EffectMethodBase.hx",18,0x93e5a62b)
HX_LOCAL_STACK_FRAME(_hx_pos_febeb6bd200a7ab5_26_get_assetType,"away3d.materials.methods.EffectMethodBase","get_assetType",0x1ba5b6e3,"away3d.materials.methods.EffectMethodBase.get_assetType","away3d/materials/methods/EffectMethodBase.hx",26,0x93e5a62b)
HX_LOCAL_STACK_FRAME(_hx_pos_febeb6bd200a7ab5_38_getFragmentCode,"away3d.materials.methods.EffectMethodBase","getFragmentCode",0x1492f195,"away3d.materials.methods.EffectMethodBase.getFragmentCode","away3d/materials/methods/EffectMethodBase.hx",38,0x93e5a62b)
namespace away3d{
namespace materials{
namespace methods{

void EffectMethodBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_febeb6bd200a7ab5_18_new)
HXDLIN(  18)		super::__construct();
            	}

Dynamic EffectMethodBase_obj::__CreateEmpty() { return new EffectMethodBase_obj; }

void *EffectMethodBase_obj::_hx_vtable = 0;

Dynamic EffectMethodBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EffectMethodBase_obj > _hx_result = new EffectMethodBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EffectMethodBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12886923) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x12886923;
		}
	} else {
		return inClassId==(int)0x37f46043 || inClassId==(int)0x781a5ed4;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_materials_methods_EffectMethodBase__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::methods::EffectMethodBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::methods::EffectMethodBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::EffectMethodBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::methods::EffectMethodBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::EffectMethodBase_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_materials_methods_EffectMethodBase__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::methods::EffectMethodBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::methods::EffectMethodBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::EffectMethodBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::methods::EffectMethodBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::EffectMethodBase_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::EffectMethodBase_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::methods::EffectMethodBase_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::EffectMethodBase_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::methods::EffectMethodBase_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::EffectMethodBase_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::EffectMethodBase_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::materials::methods::EffectMethodBase_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::materials::methods::EffectMethodBase_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::materials::methods::EffectMethodBase_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::materials::methods::EffectMethodBase_obj::dispose,
};

void *EffectMethodBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_materials_methods_EffectMethodBase__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_materials_methods_EffectMethodBase__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

::String EffectMethodBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_febeb6bd200a7ab5_26_get_assetType)
HXDLIN(  26)		return HX_("effectsMethod",43,4d,82,57);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EffectMethodBase_obj,get_assetType,return )

::String EffectMethodBase_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_GC_STACKFRAME(&_hx_pos_febeb6bd200a7ab5_38_getFragmentCode)
HXDLIN(  38)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  38)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(EffectMethodBase_obj,getFragmentCode,return )


::hx::ObjectPtr< EffectMethodBase_obj > EffectMethodBase_obj::__new() {
	::hx::ObjectPtr< EffectMethodBase_obj > __this = new EffectMethodBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EffectMethodBase_obj > EffectMethodBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EffectMethodBase_obj *__this = (EffectMethodBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EffectMethodBase_obj), true, "away3d.materials.methods.EffectMethodBase"));
	*(void **)__this = EffectMethodBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EffectMethodBase_obj::EffectMethodBase_obj()
{
}

::hx::Val EffectMethodBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void EffectMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("assetType",ca,40,af,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EffectMethodBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EffectMethodBase_obj_sStaticStorageInfo = 0;
#endif

static ::String EffectMethodBase_obj_sMemberFields[] = {
	HX_("get_assetType",a1,14,13,73),
	HX_("getFragmentCode",d3,ba,61,28),
	::String(null()) };

::hx::Class EffectMethodBase_obj::__mClass;

void EffectMethodBase_obj::__register()
{
	EffectMethodBase_obj _hx_dummy;
	EffectMethodBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.EffectMethodBase",30,73,7c,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EffectMethodBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EffectMethodBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EffectMethodBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EffectMethodBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
