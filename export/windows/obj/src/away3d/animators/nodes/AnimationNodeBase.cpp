#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
#endif
#ifndef INCLUDED_away3d_animators_states_IAnimationState
#include <away3d/animators/states/IAnimationState.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_72bbefc673a53581_27_new,"away3d.animators.nodes.AnimationNodeBase","new",0xe98b8e7b,"away3d.animators.nodes.AnimationNodeBase.new","away3d/animators/nodes/AnimationNodeBase.hx",27,0x611b7598)
HX_LOCAL_STACK_FRAME(_hx_pos_72bbefc673a53581_19_get_stateConstructor,"away3d.animators.nodes.AnimationNodeBase","get_stateConstructor",0x4b316ef7,"away3d.animators.nodes.AnimationNodeBase.get_stateConstructor","away3d/animators/nodes/AnimationNodeBase.hx",19,0x611b7598)
HX_LOCAL_STACK_FRAME(_hx_pos_72bbefc673a53581_34_dispose,"away3d.animators.nodes.AnimationNodeBase","dispose",0xba0ce83a,"away3d.animators.nodes.AnimationNodeBase.dispose","away3d/animators/nodes/AnimationNodeBase.hx",34,0x611b7598)
HX_LOCAL_STACK_FRAME(_hx_pos_72bbefc673a53581_42_get_assetType,"away3d.animators.nodes.AnimationNodeBase","get_assetType",0x5219a27c,"away3d.animators.nodes.AnimationNodeBase.get_assetType","away3d/animators/nodes/AnimationNodeBase.hx",42,0x611b7598)
namespace away3d{
namespace animators{
namespace nodes{

void AnimationNodeBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_72bbefc673a53581_27_new)
HXDLIN(  27)		super::__construct(null());
            	}

Dynamic AnimationNodeBase_obj::__CreateEmpty() { return new AnimationNodeBase_obj; }

void *AnimationNodeBase_obj::_hx_vtable = 0;

Dynamic AnimationNodeBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationNodeBase_obj > _hx_result = new AnimationNodeBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimationNodeBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x4b755133;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_animators_nodes_AnimationNodeBase__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::animators::nodes::AnimationNodeBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::animators::nodes::AnimationNodeBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::animators::nodes::AnimationNodeBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::animators::nodes::AnimationNodeBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::animators::nodes::AnimationNodeBase_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_animators_nodes_AnimationNodeBase__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::animators::nodes::AnimationNodeBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::animators::nodes::AnimationNodeBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::animators::nodes::AnimationNodeBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::animators::nodes::AnimationNodeBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::animators::nodes::AnimationNodeBase_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::animators::nodes::AnimationNodeBase_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::animators::nodes::AnimationNodeBase_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::animators::nodes::AnimationNodeBase_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::animators::nodes::AnimationNodeBase_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::animators::nodes::AnimationNodeBase_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::animators::nodes::AnimationNodeBase_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::animators::nodes::AnimationNodeBase_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::animators::nodes::AnimationNodeBase_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::animators::nodes::AnimationNodeBase_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::animators::nodes::AnimationNodeBase_obj::dispose,
};

void *AnimationNodeBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_animators_nodes_AnimationNodeBase__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_animators_nodes_AnimationNodeBase__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic AnimationNodeBase_obj::get_stateConstructor(){
            	HX_STACKFRAME(&_hx_pos_72bbefc673a53581_19_get_stateConstructor)
HXDLIN(  19)		return this->_stateConstructor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationNodeBase_obj,get_stateConstructor,return )

void AnimationNodeBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_72bbefc673a53581_34_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationNodeBase_obj,dispose,(void))

::String AnimationNodeBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_72bbefc673a53581_42_get_assetType)
HXDLIN(  42)		return HX_("animationNode",26,f7,55,3b);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationNodeBase_obj,get_assetType,return )


::hx::ObjectPtr< AnimationNodeBase_obj > AnimationNodeBase_obj::__new() {
	::hx::ObjectPtr< AnimationNodeBase_obj > __this = new AnimationNodeBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimationNodeBase_obj > AnimationNodeBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimationNodeBase_obj *__this = (AnimationNodeBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationNodeBase_obj), true, "away3d.animators.nodes.AnimationNodeBase"));
	*(void **)__this = AnimationNodeBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimationNodeBase_obj::AnimationNodeBase_obj()
{
}

void AnimationNodeBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationNodeBase);
	HX_MARK_MEMBER_NAME(_stateConstructor,"_stateConstructor");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimationNodeBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stateConstructor,"_stateConstructor");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimationNodeBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stateConstructor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stateConstructor() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_stateConstructor") ) { return ::hx::Val( _stateConstructor ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_stateConstructor") ) { return ::hx::Val( get_stateConstructor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationNodeBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_stateConstructor") ) { _stateConstructor=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationNodeBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("assetType",ca,40,af,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationNodeBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimationNodeBase_obj,_stateConstructor),HX_("_stateConstructor",c8,44,85,60)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimationNodeBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationNodeBase_obj_sMemberFields[] = {
	HX_("_stateConstructor",c8,44,85,60),
	HX_("get_stateConstructor",72,bb,74,e6),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_assetType",a1,14,13,73),
	::String(null()) };

::hx::Class AnimationNodeBase_obj::__mClass;

void AnimationNodeBase_obj::__register()
{
	AnimationNodeBase_obj _hx_dummy;
	AnimationNodeBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.animators.nodes.AnimationNodeBase",09,35,76,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationNodeBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationNodeBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationNodeBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationNodeBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace animators
} // end namespace nodes
