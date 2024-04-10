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
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_MeshNode
#include <away3d/core/partition/MeshNode.h>
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
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9d7540c00caf8347_23_new,"away3d.core.partition.MeshNode","new",0x8b91fc25,"away3d.core.partition.MeshNode.new","away3d/core/partition/MeshNode.hx",23,0x8daa042a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d7540c00caf8347_33_get_mesh,"away3d.core.partition.MeshNode","get_mesh",0xd8e80f91,"away3d.core.partition.MeshNode.get_mesh","away3d/core/partition/MeshNode.hx",33,0x8daa042a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d7540c00caf8347_41_acceptTraverser,"away3d.core.partition.MeshNode","acceptTraverser",0xae6c699d,"away3d.core.partition.MeshNode.acceptTraverser","away3d/core/partition/MeshNode.hx",41,0x8daa042a)
namespace away3d{
namespace core{
namespace partition{

void MeshNode_obj::__construct( ::away3d::entities::Mesh mesh){
            	HX_STACKFRAME(&_hx_pos_9d7540c00caf8347_23_new)
HXLINE(  24)		super::__construct(mesh);
HXLINE(  25)		this->_mesh = mesh;
            	}

Dynamic MeshNode_obj::__CreateEmpty() { return new MeshNode_obj; }

void *MeshNode_obj::_hx_vtable = 0;

Dynamic MeshNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeshNode_obj > _hx_result = new MeshNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MeshNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x341290b3) {
		if (inClassId<=(int)0x0f9d173b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
		} else {
			return inClassId==(int)0x341290b3;
		}
	} else {
		return inClassId==(int)0x5d73f8cd;
	}
}

 ::away3d::entities::Mesh MeshNode_obj::get_mesh(){
            	HX_STACKFRAME(&_hx_pos_9d7540c00caf8347_33_get_mesh)
HXDLIN(  33)		return this->_mesh;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeshNode_obj,get_mesh,return )

void MeshNode_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_9d7540c00caf8347_41_acceptTraverser)
HXDLIN(  41)		if (traverser->enterNode(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  42)			this->super::acceptTraverser(traverser);
HXLINE(  43)			 ::openfl::_Vector::ObjectVector subs = this->_mesh->get_subMeshes();
HXLINE(  44)			int i = 0;
HXLINE(  45)			int len = subs->get_length();
HXLINE(  46)			while((i < len)){
HXLINE(  47)				i = (i + 1);
HXDLIN(  47)				traverser->applyRenderable(subs->get((i - 1)).StaticCast<  ::away3d::core::base::SubMesh >());
            			}
            		}
            	}



::hx::ObjectPtr< MeshNode_obj > MeshNode_obj::__new( ::away3d::entities::Mesh mesh) {
	::hx::ObjectPtr< MeshNode_obj > __this = new MeshNode_obj();
	__this->__construct(mesh);
	return __this;
}

::hx::ObjectPtr< MeshNode_obj > MeshNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Mesh mesh) {
	MeshNode_obj *__this = (MeshNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MeshNode_obj), true, "away3d.core.partition.MeshNode"));
	*(void **)__this = MeshNode_obj::_hx_vtable;
	__this->__construct(mesh);
	return __this;
}

MeshNode_obj::MeshNode_obj()
{
}

void MeshNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshNode);
	HX_MARK_MEMBER_NAME(_mesh,"_mesh");
	 ::away3d::core::partition::EntityNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeshNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mesh,"_mesh");
	 ::away3d::core::partition::EntityNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MeshNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mesh") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mesh() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { return ::hx::Val( _mesh ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_mesh") ) { return ::hx::Val( get_mesh_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return ::hx::Val( acceptTraverser_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MeshNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_mesh") ) { _mesh=inValue.Cast<  ::away3d::entities::Mesh >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mesh",ed,49,59,48));
	outFields->push(HX_("_mesh",cc,65,6a,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MeshNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::entities::Mesh */ ,(int)offsetof(MeshNode_obj,_mesh),HX_("_mesh",cc,65,6a,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MeshNode_obj_sStaticStorageInfo = 0;
#endif

static ::String MeshNode_obj_sMemberFields[] = {
	HX_("_mesh",cc,65,6a,fb),
	HX_("get_mesh",76,05,14,c8),
	HX_("acceptTraverser",58,2a,f9,3b),
	::String(null()) };

::hx::Class MeshNode_obj::__mClass;

void MeshNode_obj::__register()
{
	MeshNode_obj _hx_dummy;
	MeshNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.MeshNode",b3,05,36,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MeshNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MeshNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeshNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeshNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
