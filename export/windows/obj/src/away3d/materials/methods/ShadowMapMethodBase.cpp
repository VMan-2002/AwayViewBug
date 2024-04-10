#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadowMapMethodBase
#include <away3d/materials/methods/ShadowMapMethodBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b247e377b6be466e_13_new,"away3d.materials.methods.ShadowMapMethodBase","new",0x59936f33,"away3d.materials.methods.ShadowMapMethodBase.new","away3d/materials/methods/ShadowMapMethodBase.hx",13,0xf9c07f20)
HX_LOCAL_STACK_FRAME(_hx_pos_b247e377b6be466e_43_get_assetType,"away3d.materials.methods.ShadowMapMethodBase","get_assetType",0xee969934,"away3d.materials.methods.ShadowMapMethodBase.get_assetType","away3d/materials/methods/ShadowMapMethodBase.hx",43,0xf9c07f20)
HX_LOCAL_STACK_FRAME(_hx_pos_b247e377b6be466e_51_get_alpha,"away3d.materials.methods.ShadowMapMethodBase","get_alpha",0x3d3b02c8,"away3d.materials.methods.ShadowMapMethodBase.get_alpha","away3d/materials/methods/ShadowMapMethodBase.hx",51,0xf9c07f20)
HX_LOCAL_STACK_FRAME(_hx_pos_b247e377b6be466e_55_set_alpha,"away3d.materials.methods.ShadowMapMethodBase","set_alpha",0x208beed4,"away3d.materials.methods.ShadowMapMethodBase.set_alpha","away3d/materials/methods/ShadowMapMethodBase.hx",55,0xf9c07f20)
HX_LOCAL_STACK_FRAME(_hx_pos_b247e377b6be466e_65_get_castingLight,"away3d.materials.methods.ShadowMapMethodBase","get_castingLight",0xc14bbc29,"away3d.materials.methods.ShadowMapMethodBase.get_castingLight","away3d/materials/methods/ShadowMapMethodBase.hx",65,0xf9c07f20)
HX_LOCAL_STACK_FRAME(_hx_pos_b247e377b6be466e_74_get_epsilon,"away3d.materials.methods.ShadowMapMethodBase","get_epsilon",0x3ec03f54,"away3d.materials.methods.ShadowMapMethodBase.get_epsilon","away3d/materials/methods/ShadowMapMethodBase.hx",74,0xf9c07f20)
HX_LOCAL_STACK_FRAME(_hx_pos_b247e377b6be466e_78_set_epsilon,"away3d.materials.methods.ShadowMapMethodBase","set_epsilon",0x492d4660,"away3d.materials.methods.ShadowMapMethodBase.set_epsilon","away3d/materials/methods/ShadowMapMethodBase.hx",78,0xf9c07f20)
HX_LOCAL_STACK_FRAME(_hx_pos_b247e377b6be466e_88_getFragmentCode,"away3d.materials.methods.ShadowMapMethodBase","getFragmentCode",0x2f3dca26,"away3d.materials.methods.ShadowMapMethodBase.getFragmentCode","away3d/materials/methods/ShadowMapMethodBase.hx",88,0xf9c07f20)
namespace away3d{
namespace materials{
namespace methods{

void ShadowMapMethodBase_obj::__construct( ::away3d::lights::LightBase castingLight){
            	HX_STACKFRAME(&_hx_pos_b247e377b6be466e_13_new)
HXLINE(  24)		this->_alpha = ((Float)1);
HXLINE(  23)		this->_epsilon = ((Float).02);
HXLINE(  32)		super::__construct();
HXLINE(  33)		this->_castingLight = castingLight;
HXLINE(  34)		castingLight->set_castsShadows(true);
HXLINE(  35)		this->_shadowMapper = castingLight->get_shadowMapper();
            	}

Dynamic ShadowMapMethodBase_obj::__CreateEmpty() { return new ShadowMapMethodBase_obj; }

void *ShadowMapMethodBase_obj::_hx_vtable = 0;

Dynamic ShadowMapMethodBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShadowMapMethodBase_obj > _hx_result = new ShadowMapMethodBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShadowMapMethodBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x042d8f49) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x042d8f49;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x12886923 || inClassId==(int)0x37f46043;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_materials_methods_ShadowMapMethodBase__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::methods::ShadowMapMethodBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::methods::ShadowMapMethodBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::ShadowMapMethodBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::methods::ShadowMapMethodBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::ShadowMapMethodBase_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_materials_methods_ShadowMapMethodBase__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::methods::ShadowMapMethodBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::methods::ShadowMapMethodBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::ShadowMapMethodBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::methods::ShadowMapMethodBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::methods::ShadowMapMethodBase_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::ShadowMapMethodBase_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::methods::ShadowMapMethodBase_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::ShadowMapMethodBase_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::methods::ShadowMapMethodBase_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::ShadowMapMethodBase_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::materials::methods::ShadowMapMethodBase_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::materials::methods::ShadowMapMethodBase_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::materials::methods::ShadowMapMethodBase_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::materials::methods::ShadowMapMethodBase_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::materials::methods::ShadowMapMethodBase_obj::dispose,
};

void *ShadowMapMethodBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_materials_methods_ShadowMapMethodBase__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_materials_methods_ShadowMapMethodBase__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

::String ShadowMapMethodBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_b247e377b6be466e_43_get_assetType)
HXDLIN(  43)		return HX_("shadowMapMethod",9d,6e,44,f1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_assetType,return )

Float ShadowMapMethodBase_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_b247e377b6be466e_51_get_alpha)
HXDLIN(  51)		return this->_alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_alpha,return )

Float ShadowMapMethodBase_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_b247e377b6be466e_55_set_alpha)
HXLINE(  56)		this->_alpha = value;
HXLINE(  57)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapMethodBase_obj,set_alpha,return )

 ::away3d::lights::LightBase ShadowMapMethodBase_obj::get_castingLight(){
            	HX_STACKFRAME(&_hx_pos_b247e377b6be466e_65_get_castingLight)
HXDLIN(  65)		return this->_castingLight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_castingLight,return )

Float ShadowMapMethodBase_obj::get_epsilon(){
            	HX_STACKFRAME(&_hx_pos_b247e377b6be466e_74_get_epsilon)
HXDLIN(  74)		return this->_epsilon;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapMethodBase_obj,get_epsilon,return )

Float ShadowMapMethodBase_obj::set_epsilon(Float value){
            	HX_STACKFRAME(&_hx_pos_b247e377b6be466e_78_set_epsilon)
HXLINE(  79)		this->_epsilon = value;
HXLINE(  80)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapMethodBase_obj,set_epsilon,return )

::String ShadowMapMethodBase_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_GC_STACKFRAME(&_hx_pos_b247e377b6be466e_88_getFragmentCode)
HXDLIN(  88)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  88)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShadowMapMethodBase_obj,getFragmentCode,return )


::hx::ObjectPtr< ShadowMapMethodBase_obj > ShadowMapMethodBase_obj::__new( ::away3d::lights::LightBase castingLight) {
	::hx::ObjectPtr< ShadowMapMethodBase_obj > __this = new ShadowMapMethodBase_obj();
	__this->__construct(castingLight);
	return __this;
}

::hx::ObjectPtr< ShadowMapMethodBase_obj > ShadowMapMethodBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::lights::LightBase castingLight) {
	ShadowMapMethodBase_obj *__this = (ShadowMapMethodBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShadowMapMethodBase_obj), true, "away3d.materials.methods.ShadowMapMethodBase"));
	*(void **)__this = ShadowMapMethodBase_obj::_hx_vtable;
	__this->__construct(castingLight);
	return __this;
}

ShadowMapMethodBase_obj::ShadowMapMethodBase_obj()
{
}

void ShadowMapMethodBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadowMapMethodBase);
	HX_MARK_MEMBER_NAME(_castingLight,"_castingLight");
	HX_MARK_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	HX_MARK_MEMBER_NAME(_epsilon,"_epsilon");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShadowMapMethodBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_castingLight,"_castingLight");
	HX_VISIT_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	HX_VISIT_MEMBER_NAME(_epsilon,"_epsilon");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ShadowMapMethodBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { return ::hx::Val( _alpha ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_epsilon() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_epsilon") ) { return ::hx::Val( _epsilon ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_epsilon") ) { return ::hx::Val( get_epsilon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_epsilon") ) { return ::hx::Val( set_epsilon_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castingLight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_castingLight() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_castingLight") ) { return ::hx::Val( _castingLight ); }
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { return ::hx::Val( _shadowMapper ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_castingLight") ) { return ::hx::Val( get_castingLight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShadowMapMethodBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_epsilon(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_epsilon") ) { _epsilon=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_castingLight") ) { _castingLight=inValue.Cast<  ::away3d::lights::LightBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { _shadowMapper=inValue.Cast<  ::away3d::lights::shadowmaps::ShadowMapperBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadowMapMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("assetType",ca,40,af,b1));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("castingLight",53,76,fb,c2));
	outFields->push(HX_("epsilon",6a,b5,be,ac));
	outFields->push(HX_("_castingLight",32,09,6a,a5));
	outFields->push(HX_("_shadowMapper",a0,ca,5c,17));
	outFields->push(HX_("_epsilon",eb,0e,77,e6));
	outFields->push(HX_("_alpha",9f,ee,7d,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShadowMapMethodBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::lights::LightBase */ ,(int)offsetof(ShadowMapMethodBase_obj,_castingLight),HX_("_castingLight",32,09,6a,a5)},
	{::hx::fsObject /*  ::away3d::lights::shadowmaps::ShadowMapperBase */ ,(int)offsetof(ShadowMapMethodBase_obj,_shadowMapper),HX_("_shadowMapper",a0,ca,5c,17)},
	{::hx::fsFloat,(int)offsetof(ShadowMapMethodBase_obj,_epsilon),HX_("_epsilon",eb,0e,77,e6)},
	{::hx::fsFloat,(int)offsetof(ShadowMapMethodBase_obj,_alpha),HX_("_alpha",9f,ee,7d,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShadowMapMethodBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ShadowMapMethodBase_obj_sMemberFields[] = {
	HX_("_castingLight",32,09,6a,a5),
	HX_("_shadowMapper",a0,ca,5c,17),
	HX_("_epsilon",eb,0e,77,e6),
	HX_("_alpha",9f,ee,7d,1d),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_castingLight",dc,62,9a,c7),
	HX_("get_epsilon",81,15,b9,32),
	HX_("set_epsilon",8d,1c,26,3d),
	HX_("getFragmentCode",d3,ba,61,28),
	::String(null()) };

::hx::Class ShadowMapMethodBase_obj::__mClass;

void ShadowMapMethodBase_obj::__register()
{
	ShadowMapMethodBase_obj _hx_dummy;
	ShadowMapMethodBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.ShadowMapMethodBase",c1,59,61,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShadowMapMethodBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShadowMapMethodBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShadowMapMethodBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShadowMapMethodBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
