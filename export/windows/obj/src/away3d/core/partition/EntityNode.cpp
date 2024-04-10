#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
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
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f6cb8da8b47843fd_35_new,"away3d.core.partition.EntityNode","new",0xf4627c5b,"away3d.core.partition.EntityNode.new","away3d/core/partition/EntityNode.hx",35,0x402a0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_f6cb8da8b47843fd_46_get_entity,"away3d.core.partition.EntityNode","get_entity",0x86061c51,"away3d.core.partition.EntityNode.get_entity","away3d/core/partition/EntityNode.hx",46,0x402a0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_f6cb8da8b47843fd_54_acceptTraverser,"away3d.core.partition.EntityNode","acceptTraverser",0x049762d3,"away3d.core.partition.EntityNode.acceptTraverser","away3d/core/partition/EntityNode.hx",54,0x402a0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_f6cb8da8b47843fd_61_removeFromParent,"away3d.core.partition.EntityNode","removeFromParent",0xac3e5abd,"away3d.core.partition.EntityNode.removeFromParent","away3d/core/partition/EntityNode.hx",61,0x402a0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_f6cb8da8b47843fd_69_isInFrustum,"away3d.core.partition.EntityNode","isInFrustum",0x5ae0dfae,"away3d.core.partition.EntityNode.isInFrustum","away3d/core/partition/EntityNode.hx",69,0x402a0a74)
HX_LOCAL_STACK_FRAME(_hx_pos_f6cb8da8b47843fd_80_isIntersectingRay,"away3d.core.partition.EntityNode","isIntersectingRay",0x3f70dcb8,"away3d.core.partition.EntityNode.isIntersectingRay","away3d/core/partition/EntityNode.hx",80,0x402a0a74)
namespace away3d{
namespace core{
namespace partition{

void EntityNode_obj::__construct( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_f6cb8da8b47843fd_35_new)
HXLINE(  36)		super::__construct();
HXLINE(  37)		this->_entity = entity;
HXLINE(  38)		this->_numEntities = 1;
            	}

Dynamic EntityNode_obj::__CreateEmpty() { return new EntityNode_obj; }

void *EntityNode_obj::_hx_vtable = 0;

Dynamic EntityNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EntityNode_obj > _hx_result = new EntityNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EntityNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0f9d173b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
	} else {
		return inClassId==(int)0x5d73f8cd;
	}
}

 ::away3d::entities::Entity EntityNode_obj::get_entity(){
            	HX_STACKFRAME(&_hx_pos_f6cb8da8b47843fd_46_get_entity)
HXDLIN(  46)		return this->_entity;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityNode_obj,get_entity,return )

void EntityNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_f6cb8da8b47843fd_54_acceptTraverser)
HXDLIN(  54)		traverser->applyEntity(this->_entity);
            	}


void EntityNode_obj::removeFromParent(){
            	HX_STACKFRAME(&_hx_pos_f6cb8da8b47843fd_61_removeFromParent)
HXLINE(  62)		if (::hx::IsNotNull( this->_parent )) {
HXLINE(  63)			this->_parent->removeNode(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  65)		this->_parent = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityNode_obj,removeFromParent,(void))

bool EntityNode_obj::isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes){
            	HX_STACKFRAME(&_hx_pos_f6cb8da8b47843fd_69_isInFrustum)
HXLINE(  70)		if (!(this->_entity->get_isVisible())) {
HXLINE(  71)			return false;
            		}
HXLINE(  73)		return this->_entity->get_worldBounds()->isInFrustum(planes,numPlanes);
            	}


bool EntityNode_obj::isIntersectingRay( ::openfl::geom::Vector3D rayPosition, ::openfl::geom::Vector3D rayDirection){
            	HX_STACKFRAME(&_hx_pos_f6cb8da8b47843fd_80_isIntersectingRay)
HXLINE(  81)		if (!(this->_entity->get_isVisible())) {
HXLINE(  82)			return false;
            		}
HXLINE(  84)		return this->_entity->isIntersectingRay(rayPosition,rayDirection);
            	}



::hx::ObjectPtr< EntityNode_obj > EntityNode_obj::__new( ::away3d::entities::Entity entity) {
	::hx::ObjectPtr< EntityNode_obj > __this = new EntityNode_obj();
	__this->__construct(entity);
	return __this;
}

::hx::ObjectPtr< EntityNode_obj > EntityNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity entity) {
	EntityNode_obj *__this = (EntityNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EntityNode_obj), true, "away3d.core.partition.EntityNode"));
	*(void **)__this = EntityNode_obj::_hx_vtable;
	__this->__construct(entity);
	return __this;
}

EntityNode_obj::EntityNode_obj()
{
}

void EntityNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityNode);
	HX_MARK_MEMBER_NAME(_entity,"_entity");
	HX_MARK_MEMBER_NAME(_updateQueueNext,"_updateQueueNext");
	 ::away3d::core::partition::NodeBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EntityNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_entity,"_entity");
	HX_VISIT_MEMBER_NAME(_updateQueueNext,"_updateQueueNext");
	 ::away3d::core::partition::NodeBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val EntityNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_entity() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_entity") ) { return ::hx::Val( _entity ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_entity") ) { return ::hx::Val( get_entity_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return ::hx::Val( isInFrustum_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return ::hx::Val( acceptTraverser_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_updateQueueNext") ) { return ::hx::Val( _updateQueueNext ); }
		if (HX_FIELD_EQ(inName,"removeFromParent") ) { return ::hx::Val( removeFromParent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isIntersectingRay") ) { return ::hx::Val( isIntersectingRay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EntityNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_entity") ) { _entity=inValue.Cast<  ::away3d::entities::Entity >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_updateQueueNext") ) { _updateQueueNext=inValue.Cast<  ::away3d::core::partition::EntityNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("entity",23,13,1c,05));
	outFields->push(HX_("_entity",c2,24,93,73));
	outFields->push(HX_("_updateQueueNext",5c,ee,14,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EntityNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::entities::Entity */ ,(int)offsetof(EntityNode_obj,_entity),HX_("_entity",c2,24,93,73)},
	{::hx::fsObject /*  ::away3d::core::partition::EntityNode */ ,(int)offsetof(EntityNode_obj,_updateQueueNext),HX_("_updateQueueNext",5c,ee,14,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EntityNode_obj_sStaticStorageInfo = 0;
#endif

static ::String EntityNode_obj_sMemberFields[] = {
	HX_("_entity",c2,24,93,73),
	HX_("_updateQueueNext",5c,ee,14,06),
	HX_("get_entity",ec,82,a3,f5),
	HX_("acceptTraverser",58,2a,f9,3b),
	HX_("removeFromParent",98,27,6b,ea),
	HX_("isInFrustum",b3,40,fd,94),
	HX_("isIntersectingRay",7d,4f,77,68),
	::String(null()) };

::hx::Class EntityNode_obj::__mClass;

void EntityNode_obj::__register()
{
	EntityNode_obj _hx_dummy;
	EntityNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.EntityNode",e9,b2,08,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EntityNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EntityNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EntityNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EntityNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
