#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_DirectionalLightNode
#include <away3d/core/partition/DirectionalLightNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5eb0e21fd038c4f_20_new,"away3d.core.partition.DirectionalLightNode","new",0xd623fac4,"away3d.core.partition.DirectionalLightNode.new","away3d/core/partition/DirectionalLightNode.hx",20,0x05ad60eb)
HX_LOCAL_STACK_FRAME(_hx_pos_d5eb0e21fd038c4f_30_get_light,"away3d.core.partition.DirectionalLightNode","get_light",0x8e53fa91,"away3d.core.partition.DirectionalLightNode.get_light","away3d/core/partition/DirectionalLightNode.hx",30,0x05ad60eb)
HX_LOCAL_STACK_FRAME(_hx_pos_d5eb0e21fd038c4f_38_acceptTraverser,"away3d.core.partition.DirectionalLightNode","acceptTraverser",0x5d915abc,"away3d.core.partition.DirectionalLightNode.acceptTraverser","away3d/core/partition/DirectionalLightNode.hx",38,0x05ad60eb)
namespace away3d{
namespace core{
namespace partition{

void DirectionalLightNode_obj::__construct( ::away3d::lights::DirectionalLight light){
            	HX_STACKFRAME(&_hx_pos_d5eb0e21fd038c4f_20_new)
HXLINE(  21)		super::__construct(light);
HXLINE(  22)		this->_light = light;
            	}

Dynamic DirectionalLightNode_obj::__CreateEmpty() { return new DirectionalLightNode_obj; }

void *DirectionalLightNode_obj::_hx_vtable = 0;

Dynamic DirectionalLightNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DirectionalLightNode_obj > _hx_result = new DirectionalLightNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DirectionalLightNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25b3939a) {
		if (inClassId<=(int)0x0f9d173b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
		} else {
			return inClassId==(int)0x25b3939a;
		}
	} else {
		return inClassId==(int)0x5d73f8cd;
	}
}

 ::away3d::lights::DirectionalLight DirectionalLightNode_obj::get_light(){
            	HX_STACKFRAME(&_hx_pos_d5eb0e21fd038c4f_30_get_light)
HXDLIN(  30)		return this->_light;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DirectionalLightNode_obj,get_light,return )

void DirectionalLightNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_d5eb0e21fd038c4f_38_acceptTraverser)
HXDLIN(  38)		if (traverser->enterNode(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  39)			this->super::acceptTraverser(traverser);
HXLINE(  40)			traverser->applyDirectionalLight(this->_light);
            		}
            	}



::hx::ObjectPtr< DirectionalLightNode_obj > DirectionalLightNode_obj::__new( ::away3d::lights::DirectionalLight light) {
	::hx::ObjectPtr< DirectionalLightNode_obj > __this = new DirectionalLightNode_obj();
	__this->__construct(light);
	return __this;
}

::hx::ObjectPtr< DirectionalLightNode_obj > DirectionalLightNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::lights::DirectionalLight light) {
	DirectionalLightNode_obj *__this = (DirectionalLightNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DirectionalLightNode_obj), true, "away3d.core.partition.DirectionalLightNode"));
	*(void **)__this = DirectionalLightNode_obj::_hx_vtable;
	__this->__construct(light);
	return __this;
}

DirectionalLightNode_obj::DirectionalLightNode_obj()
{
}

void DirectionalLightNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectionalLightNode);
	HX_MARK_MEMBER_NAME(_light,"_light");
	 ::away3d::core::partition::EntityNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectionalLightNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_light,"_light");
	 ::away3d::core::partition::EntityNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DirectionalLightNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_light() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { return ::hx::Val( _light ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_light") ) { return ::hx::Val( get_light_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return ::hx::Val( acceptTraverser_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DirectionalLightNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast<  ::away3d::lights::DirectionalLight >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectionalLightNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("light",d6,90,fc,74));
	outFields->push(HX_("_light",17,d8,e3,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DirectionalLightNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::lights::DirectionalLight */ ,(int)offsetof(DirectionalLightNode_obj,_light),HX_("_light",17,d8,e3,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DirectionalLightNode_obj_sStaticStorageInfo = 0;
#endif

static ::String DirectionalLightNode_obj_sMemberFields[] = {
	HX_("_light",17,d8,e3,70),
	HX_("get_light",2d,ed,a5,b8),
	HX_("acceptTraverser",58,2a,f9,3b),
	::String(null()) };

::hx::Class DirectionalLightNode_obj::__mClass;

void DirectionalLightNode_obj::__register()
{
	DirectionalLightNode_obj _hx_dummy;
	DirectionalLightNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.DirectionalLightNode",d2,88,5e,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DirectionalLightNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DirectionalLightNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DirectionalLightNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DirectionalLightNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
