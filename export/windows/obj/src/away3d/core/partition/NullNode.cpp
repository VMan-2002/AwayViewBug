#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NullNode
#include <away3d/core/partition/NullNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb4c5b955213bb96_15_new,"away3d.core.partition.NullNode","new",0xe4f47abf,"away3d.core.partition.NullNode.new","away3d/core/partition/NullNode.hx",15,0x335fd6d0)
namespace away3d{
namespace core{
namespace partition{

void NullNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_eb4c5b955213bb96_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic NullNode_obj::__CreateEmpty() { return new NullNode_obj; }

void *NullNode_obj::_hx_vtable = 0;

Dynamic NullNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NullNode_obj > _hx_result = new NullNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NullNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0f9d173b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
	} else {
		return inClassId==(int)0x0fc8ae15;
	}
}


::hx::ObjectPtr< NullNode_obj > NullNode_obj::__new() {
	::hx::ObjectPtr< NullNode_obj > __this = new NullNode_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NullNode_obj > NullNode_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NullNode_obj *__this = (NullNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NullNode_obj), true, "away3d.core.partition.NullNode"));
	*(void **)__this = NullNode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NullNode_obj::NullNode_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NullNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NullNode_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NullNode_obj::__mClass;

void NullNode_obj::__register()
{
	NullNode_obj _hx_dummy;
	NullNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.NullNode",4d,af,da,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NullNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NullNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NullNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
