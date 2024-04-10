#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
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
#ifndef INCLUDED_away3d_core_partition_RenderableNode
#include <away3d/core/partition/RenderableNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6999a8ee9a9867d4_20_new,"away3d.core.partition.RenderableNode","new",0x561c9c28,"away3d.core.partition.RenderableNode.new","away3d/core/partition/RenderableNode.hx",20,0x03ac8ec7)
HX_LOCAL_STACK_FRAME(_hx_pos_6999a8ee9a9867d4_30_acceptTraverser,"away3d.core.partition.RenderableNode","acceptTraverser",0x3fa88220,"away3d.core.partition.RenderableNode.acceptTraverser","away3d/core/partition/RenderableNode.hx",30,0x03ac8ec7)
namespace away3d{
namespace core{
namespace partition{

void RenderableNode_obj::__construct(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_6999a8ee9a9867d4_20_new)
HXLINE(  21)		super::__construct(renderable);
HXLINE(  22)		this->_renderable = renderable;
            	}

Dynamic RenderableNode_obj::__CreateEmpty() { return new RenderableNode_obj; }

void *RenderableNode_obj::_hx_vtable = 0;

Dynamic RenderableNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderableNode_obj > _hx_result = new RenderableNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RenderableNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5d73f8cd) {
		if (inClassId<=(int)0x0f9d173b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
		} else {
			return inClassId==(int)0x5d73f8cd;
		}
	} else {
		return inClassId==(int)0x620eecfe;
	}
}

void RenderableNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_6999a8ee9a9867d4_30_acceptTraverser)
HXDLIN(  30)		if (traverser->enterNode(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  31)			this->super::acceptTraverser(traverser);
HXLINE(  32)			traverser->applyRenderable(this->_renderable);
            		}
            	}



::hx::ObjectPtr< RenderableNode_obj > RenderableNode_obj::__new(::Dynamic renderable) {
	::hx::ObjectPtr< RenderableNode_obj > __this = new RenderableNode_obj();
	__this->__construct(renderable);
	return __this;
}

::hx::ObjectPtr< RenderableNode_obj > RenderableNode_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic renderable) {
	RenderableNode_obj *__this = (RenderableNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderableNode_obj), true, "away3d.core.partition.RenderableNode"));
	*(void **)__this = RenderableNode_obj::_hx_vtable;
	__this->__construct(renderable);
	return __this;
}

RenderableNode_obj::RenderableNode_obj()
{
}

void RenderableNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderableNode);
	HX_MARK_MEMBER_NAME(_renderable,"_renderable");
	 ::away3d::core::partition::EntityNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderableNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_renderable,"_renderable");
	 ::away3d::core::partition::EntityNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RenderableNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_renderable") ) { return ::hx::Val( _renderable ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return ::hx::Val( acceptTraverser_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderableNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_renderable") ) { _renderable=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderableNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_renderable",0f,09,23,c5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderableNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(RenderableNode_obj,_renderable),HX_("_renderable",0f,09,23,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RenderableNode_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderableNode_obj_sMemberFields[] = {
	HX_("_renderable",0f,09,23,c5),
	HX_("acceptTraverser",58,2a,f9,3b),
	::String(null()) };

::hx::Class RenderableNode_obj::__mClass;

void RenderableNode_obj::__register()
{
	RenderableNode_obj _hx_dummy;
	RenderableNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.RenderableNode",36,a8,c9,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderableNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderableNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderableNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderableNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
