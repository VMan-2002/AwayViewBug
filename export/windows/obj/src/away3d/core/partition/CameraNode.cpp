#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_CameraNode
#include <away3d/core/partition/CameraNode.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_471313c2088c3e1d_17_new,"away3d.core.partition.CameraNode","new",0xcd5501dd,"away3d.core.partition.CameraNode.new","away3d/core/partition/CameraNode.hx",17,0xd4142b32)
HX_LOCAL_STACK_FRAME(_hx_pos_471313c2088c3e1d_24_acceptTraverser,"away3d.core.partition.CameraNode","acceptTraverser",0xed7d2355,"away3d.core.partition.CameraNode.acceptTraverser","away3d/core/partition/CameraNode.hx",24,0xd4142b32)
namespace away3d{
namespace core{
namespace partition{

void CameraNode_obj::__construct( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_471313c2088c3e1d_17_new)
HXDLIN(  17)		super::__construct(camera);
            	}

Dynamic CameraNode_obj::__CreateEmpty() { return new CameraNode_obj; }

void *CameraNode_obj::_hx_vtable = 0;

Dynamic CameraNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CameraNode_obj > _hx_result = new CameraNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CameraNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5191154f) {
		if (inClassId<=(int)0x0f9d173b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
		} else {
			return inClassId==(int)0x5191154f;
		}
	} else {
		return inClassId==(int)0x5d73f8cd;
	}
}

void CameraNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_471313c2088c3e1d_24_acceptTraverser)
            	}



::hx::ObjectPtr< CameraNode_obj > CameraNode_obj::__new( ::away3d::cameras::Camera3D camera) {
	::hx::ObjectPtr< CameraNode_obj > __this = new CameraNode_obj();
	__this->__construct(camera);
	return __this;
}

::hx::ObjectPtr< CameraNode_obj > CameraNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::cameras::Camera3D camera) {
	CameraNode_obj *__this = (CameraNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CameraNode_obj), true, "away3d.core.partition.CameraNode"));
	*(void **)__this = CameraNode_obj::_hx_vtable;
	__this->__construct(camera);
	return __this;
}

CameraNode_obj::CameraNode_obj()
{
}

::hx::Val CameraNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return ::hx::Val( acceptTraverser_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CameraNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CameraNode_obj_sStaticStorageInfo = 0;
#endif

static ::String CameraNode_obj_sMemberFields[] = {
	HX_("acceptTraverser",58,2a,f9,3b),
	::String(null()) };

::hx::Class CameraNode_obj::__mClass;

void CameraNode_obj::__register()
{
	CameraNode_obj _hx_dummy;
	CameraNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.CameraNode",6b,cf,25,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CameraNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CameraNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
