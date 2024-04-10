#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_LightProbeNode
#include <away3d/core/partition/LightProbeNode.h>
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
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_61358cd5631e1179_20_new,"away3d.core.partition.LightProbeNode","new",0x5fe1ecb2,"away3d.core.partition.LightProbeNode.new","away3d/core/partition/LightProbeNode.hx",20,0x76841d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_61358cd5631e1179_30_get_light,"away3d.core.partition.LightProbeNode","get_light",0xe19112ff,"away3d.core.partition.LightProbeNode.get_light","away3d/core/partition/LightProbeNode.hx",30,0x76841d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_61358cd5631e1179_38_acceptTraverser,"away3d.core.partition.LightProbeNode","acceptTraverser",0x1de979aa,"away3d.core.partition.LightProbeNode.acceptTraverser","away3d/core/partition/LightProbeNode.hx",38,0x76841d7d)
namespace away3d{
namespace core{
namespace partition{

void LightProbeNode_obj::__construct( ::away3d::lights::LightProbe light){
            	HX_STACKFRAME(&_hx_pos_61358cd5631e1179_20_new)
HXLINE(  21)		super::__construct(light);
HXLINE(  22)		this->_light = light;
            	}

Dynamic LightProbeNode_obj::__CreateEmpty() { return new LightProbeNode_obj; }

void *LightProbeNode_obj::_hx_vtable = 0;

Dynamic LightProbeNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightProbeNode_obj > _hx_result = new LightProbeNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LightProbeNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49eab088) {
		if (inClassId<=(int)0x0f9d173b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
		} else {
			return inClassId==(int)0x49eab088;
		}
	} else {
		return inClassId==(int)0x5d73f8cd;
	}
}

 ::away3d::lights::LightProbe LightProbeNode_obj::get_light(){
            	HX_STACKFRAME(&_hx_pos_61358cd5631e1179_30_get_light)
HXDLIN(  30)		return this->_light;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightProbeNode_obj,get_light,return )

void LightProbeNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_61358cd5631e1179_38_acceptTraverser)
HXDLIN(  38)		if (traverser->enterNode(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  39)			this->super::acceptTraverser(traverser);
HXLINE(  40)			traverser->applyLightProbe(this->_light);
            		}
            	}



::hx::ObjectPtr< LightProbeNode_obj > LightProbeNode_obj::__new( ::away3d::lights::LightProbe light) {
	::hx::ObjectPtr< LightProbeNode_obj > __this = new LightProbeNode_obj();
	__this->__construct(light);
	return __this;
}

::hx::ObjectPtr< LightProbeNode_obj > LightProbeNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::lights::LightProbe light) {
	LightProbeNode_obj *__this = (LightProbeNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightProbeNode_obj), true, "away3d.core.partition.LightProbeNode"));
	*(void **)__this = LightProbeNode_obj::_hx_vtable;
	__this->__construct(light);
	return __this;
}

LightProbeNode_obj::LightProbeNode_obj()
{
}

void LightProbeNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightProbeNode);
	HX_MARK_MEMBER_NAME(_light,"_light");
	 ::away3d::core::partition::EntityNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightProbeNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_light,"_light");
	 ::away3d::core::partition::EntityNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LightProbeNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val LightProbeNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast<  ::away3d::lights::LightProbe >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightProbeNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("light",d6,90,fc,74));
	outFields->push(HX_("_light",17,d8,e3,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightProbeNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::lights::LightProbe */ ,(int)offsetof(LightProbeNode_obj,_light),HX_("_light",17,d8,e3,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LightProbeNode_obj_sStaticStorageInfo = 0;
#endif

static ::String LightProbeNode_obj_sMemberFields[] = {
	HX_("_light",17,d8,e3,70),
	HX_("get_light",2d,ed,a5,b8),
	HX_("acceptTraverser",58,2a,f9,3b),
	::String(null()) };

::hx::Class LightProbeNode_obj::__mClass;

void LightProbeNode_obj::__register()
{
	LightProbeNode_obj _hx_dummy;
	LightProbeNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.LightProbeNode",c0,6b,a5,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightProbeNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightProbeNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightProbeNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightProbeNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
