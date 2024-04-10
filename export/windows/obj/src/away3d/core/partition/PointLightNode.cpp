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
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_PointLightNode
#include <away3d/core/partition/PointLightNode.h>
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
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9a4cdd407db70c9_20_new,"away3d.core.partition.PointLightNode","new",0x37a2709e,"away3d.core.partition.PointLightNode.new","away3d/core/partition/PointLightNode.hx",20,0xa1f57b11)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a4cdd407db70c9_30_get_light,"away3d.core.partition.PointLightNode","get_light",0xdadf4feb,"away3d.core.partition.PointLightNode.get_light","away3d/core/partition/PointLightNode.hx",30,0xa1f57b11)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a4cdd407db70c9_38_acceptTraverser,"away3d.core.partition.PointLightNode","acceptTraverser",0x63562f96,"away3d.core.partition.PointLightNode.acceptTraverser","away3d/core/partition/PointLightNode.hx",38,0xa1f57b11)
namespace away3d{
namespace core{
namespace partition{

void PointLightNode_obj::__construct( ::away3d::lights::PointLight light){
            	HX_STACKFRAME(&_hx_pos_a9a4cdd407db70c9_20_new)
HXLINE(  21)		super::__construct(light);
HXLINE(  22)		this->_light = light;
            	}

Dynamic PointLightNode_obj::__CreateEmpty() { return new PointLightNode_obj; }

void *PointLightNode_obj::_hx_vtable = 0;

Dynamic PointLightNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PointLightNode_obj > _hx_result = new PointLightNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PointLightNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5d73f8cd) {
		if (inClassId<=(int)0x0f9d173b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
		} else {
			return inClassId==(int)0x5d73f8cd;
		}
	} else {
		return inClassId==(int)0x67d09190;
	}
}

 ::away3d::lights::PointLight PointLightNode_obj::get_light(){
            	HX_STACKFRAME(&_hx_pos_a9a4cdd407db70c9_30_get_light)
HXDLIN(  30)		return this->_light;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointLightNode_obj,get_light,return )

void PointLightNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_a9a4cdd407db70c9_38_acceptTraverser)
HXDLIN(  38)		if (traverser->enterNode(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  39)			this->super::acceptTraverser(traverser);
HXLINE(  40)			traverser->applyPointLight(this->_light);
            		}
            	}



::hx::ObjectPtr< PointLightNode_obj > PointLightNode_obj::__new( ::away3d::lights::PointLight light) {
	::hx::ObjectPtr< PointLightNode_obj > __this = new PointLightNode_obj();
	__this->__construct(light);
	return __this;
}

::hx::ObjectPtr< PointLightNode_obj > PointLightNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::lights::PointLight light) {
	PointLightNode_obj *__this = (PointLightNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PointLightNode_obj), true, "away3d.core.partition.PointLightNode"));
	*(void **)__this = PointLightNode_obj::_hx_vtable;
	__this->__construct(light);
	return __this;
}

PointLightNode_obj::PointLightNode_obj()
{
}

void PointLightNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PointLightNode);
	HX_MARK_MEMBER_NAME(_light,"_light");
	 ::away3d::core::partition::EntityNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PointLightNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_light,"_light");
	 ::away3d::core::partition::EntityNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PointLightNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val PointLightNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast<  ::away3d::lights::PointLight >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointLightNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("light",d6,90,fc,74));
	outFields->push(HX_("_light",17,d8,e3,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PointLightNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::lights::PointLight */ ,(int)offsetof(PointLightNode_obj,_light),HX_("_light",17,d8,e3,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PointLightNode_obj_sStaticStorageInfo = 0;
#endif

static ::String PointLightNode_obj_sMemberFields[] = {
	HX_("_light",17,d8,e3,70),
	HX_("get_light",2d,ed,a5,b8),
	HX_("acceptTraverser",58,2a,f9,3b),
	::String(null()) };

::hx::Class PointLightNode_obj::__mClass;

void PointLightNode_obj::__register()
{
	PointLightNode_obj _hx_dummy;
	PointLightNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.PointLightNode",ac,89,82,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PointLightNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PointLightNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PointLightNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PointLightNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
