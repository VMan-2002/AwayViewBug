#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
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
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
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
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29ad17dafd40bc02_37_new,"away3d.core.traverse.PartitionTraverser","new",0x99894284,"away3d.core.traverse.PartitionTraverser.new","away3d/core/traverse/PartitionTraverser.hx",37,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_48_enterNode,"away3d.core.traverse.PartitionTraverser","enterNode",0x351db45e,"away3d.core.traverse.PartitionTraverser.enterNode","away3d/core/traverse/PartitionTraverser.hx",48,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_56_applySkyBox,"away3d.core.traverse.PartitionTraverser","applySkyBox",0xa3fccddc,"away3d.core.traverse.PartitionTraverser.applySkyBox","away3d/core/traverse/PartitionTraverser.hx",56,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_64_applyRenderable,"away3d.core.traverse.PartitionTraverser","applyRenderable",0x4e3a3322,"away3d.core.traverse.PartitionTraverser.applyRenderable","away3d/core/traverse/PartitionTraverser.hx",64,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_72_applyUnknownLight,"away3d.core.traverse.PartitionTraverser","applyUnknownLight",0xd2e2709e,"away3d.core.traverse.PartitionTraverser.applyUnknownLight","away3d/core/traverse/PartitionTraverser.hx",72,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_77_applyDirectionalLight,"away3d.core.traverse.PartitionTraverser","applyDirectionalLight",0xfb96543e,"away3d.core.traverse.PartitionTraverser.applyDirectionalLight","away3d/core/traverse/PartitionTraverser.hx",77,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_82_applyPointLight,"away3d.core.traverse.PartitionTraverser","applyPointLight",0xb05ba198,"away3d.core.traverse.PartitionTraverser.applyPointLight","away3d/core/traverse/PartitionTraverser.hx",82,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_87_applyLightProbe,"away3d.core.traverse.PartitionTraverser","applyLightProbe",0xa536e9ac,"away3d.core.traverse.PartitionTraverser.applyLightProbe","away3d/core/traverse/PartitionTraverser.hx",87,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_95_applyEntity,"away3d.core.traverse.PartitionTraverser","applyEntity",0xc2010955,"away3d.core.traverse.PartitionTraverser.applyEntity","away3d/core/traverse/PartitionTraverser.hx",95,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_105_get_entryPoint,"away3d.core.traverse.PartitionTraverser","get_entryPoint",0x580f8f23,"away3d.core.traverse.PartitionTraverser.get_entryPoint","away3d/core/traverse/PartitionTraverser.hx",105,0x222ac82b)
HX_LOCAL_STACK_FRAME(_hx_pos_29ad17dafd40bc02_34_boot,"away3d.core.traverse.PartitionTraverser","boot",0xb6a9f18e,"away3d.core.traverse.PartitionTraverser.boot","away3d/core/traverse/PartitionTraverser.hx",34,0x222ac82b)
namespace away3d{
namespace core{
namespace traverse{

void PartitionTraverser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_29ad17dafd40bc02_37_new)
            	}

Dynamic PartitionTraverser_obj::__CreateEmpty() { return new PartitionTraverser_obj; }

void *PartitionTraverser_obj::_hx_vtable = 0;

Dynamic PartitionTraverser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PartitionTraverser_obj > _hx_result = new PartitionTraverser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PartitionTraverser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23f97a4a;
}

bool PartitionTraverser_obj::enterNode( ::away3d::core::partition::NodeBase node){
            	HX_STACKFRAME(&_hx_pos_29ad17dafd40bc02_48_enterNode)
HXDLIN(  48)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,enterNode,return )

void PartitionTraverser_obj::applySkyBox(::Dynamic renderable){
            	HX_GC_STACKFRAME(&_hx_pos_29ad17dafd40bc02_56_applySkyBox)
HXDLIN(  56)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applySkyBox,(void))

void PartitionTraverser_obj::applyRenderable(::Dynamic renderable){
            	HX_GC_STACKFRAME(&_hx_pos_29ad17dafd40bc02_64_applyRenderable)
HXDLIN(  64)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyRenderable,(void))

void PartitionTraverser_obj::applyUnknownLight( ::away3d::lights::LightBase light){
            	HX_GC_STACKFRAME(&_hx_pos_29ad17dafd40bc02_72_applyUnknownLight)
HXDLIN(  72)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyUnknownLight,(void))

void PartitionTraverser_obj::applyDirectionalLight( ::away3d::lights::DirectionalLight light){
            	HX_GC_STACKFRAME(&_hx_pos_29ad17dafd40bc02_77_applyDirectionalLight)
HXDLIN(  77)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyDirectionalLight,(void))

void PartitionTraverser_obj::applyPointLight( ::away3d::lights::PointLight light){
            	HX_GC_STACKFRAME(&_hx_pos_29ad17dafd40bc02_82_applyPointLight)
HXDLIN(  82)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyPointLight,(void))

void PartitionTraverser_obj::applyLightProbe( ::away3d::lights::LightProbe light){
            	HX_GC_STACKFRAME(&_hx_pos_29ad17dafd40bc02_87_applyLightProbe)
HXDLIN(  87)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyLightProbe,(void))

void PartitionTraverser_obj::applyEntity( ::away3d::entities::Entity entity){
            	HX_GC_STACKFRAME(&_hx_pos_29ad17dafd40bc02_95_applyEntity)
HXDLIN(  95)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PartitionTraverser_obj,applyEntity,(void))

 ::openfl::geom::Vector3D PartitionTraverser_obj::get_entryPoint(){
            	HX_STACKFRAME(&_hx_pos_29ad17dafd40bc02_105_get_entryPoint)
HXDLIN( 105)		return this->_entryPoint;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PartitionTraverser_obj,get_entryPoint,return )

int PartitionTraverser_obj::_collectionMark;


::hx::ObjectPtr< PartitionTraverser_obj > PartitionTraverser_obj::__new() {
	::hx::ObjectPtr< PartitionTraverser_obj > __this = new PartitionTraverser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PartitionTraverser_obj > PartitionTraverser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PartitionTraverser_obj *__this = (PartitionTraverser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PartitionTraverser_obj), true, "away3d.core.traverse.PartitionTraverser"));
	*(void **)__this = PartitionTraverser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PartitionTraverser_obj::PartitionTraverser_obj()
{
}

void PartitionTraverser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PartitionTraverser);
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(_entryPoint,"_entryPoint");
	HX_MARK_END_CLASS();
}

void PartitionTraverser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(_entryPoint,"_entryPoint");
}

::hx::Val PartitionTraverser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return ::hx::Val( scene ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"enterNode") ) { return ::hx::Val( enterNode_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"entryPoint") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_entryPoint() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_entryPoint") ) { return ::hx::Val( _entryPoint ); }
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return ::hx::Val( applySkyBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyEntity") ) { return ::hx::Val( applyEntity_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_entryPoint") ) { return ::hx::Val( get_entryPoint_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return ::hx::Val( applyRenderable_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPointLight") ) { return ::hx::Val( applyPointLight_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyLightProbe") ) { return ::hx::Val( applyLightProbe_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return ::hx::Val( applyUnknownLight_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"applyDirectionalLight") ) { return ::hx::Val( applyDirectionalLight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PartitionTraverser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { outValue = ( _collectionMark ); return true; }
	}
	return false;
}

::hx::Val PartitionTraverser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast<  ::away3d::containers::Scene3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_entryPoint") ) { _entryPoint=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PartitionTraverser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { _collectionMark=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void PartitionTraverser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("entryPoint",7e,ce,72,ab));
	outFields->push(HX_("scene",4c,d9,d1,78));
	outFields->push(HX_("_entryPoint",9d,9b,fc,7d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PartitionTraverser_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::containers::Scene3D */ ,(int)offsetof(PartitionTraverser_obj,scene),HX_("scene",4c,d9,d1,78)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(PartitionTraverser_obj,_entryPoint),HX_("_entryPoint",9d,9b,fc,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PartitionTraverser_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PartitionTraverser_obj::_collectionMark,HX_("_collectionMark",2a,0a,3c,40)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PartitionTraverser_obj_sMemberFields[] = {
	HX_("scene",4c,d9,d1,78),
	HX_("_entryPoint",9d,9b,fc,7d),
	HX_("enterNode",3a,0f,42,de),
	HX_("applySkyBox",b8,97,12,23),
	HX_("applyRenderable",fe,1a,90,b2),
	HX_("applyUnknownLight",7a,07,67,66),
	HX_("applyDirectionalLight",1a,89,45,68),
	HX_("applyPointLight",74,89,b1,14),
	HX_("applyLightProbe",88,d1,8c,09),
	HX_("applyEntity",31,d3,16,41),
	HX_("get_entryPoint",c7,56,68,21),
	::String(null()) };

static void PartitionTraverser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PartitionTraverser_obj::_collectionMark,"_collectionMark");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PartitionTraverser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PartitionTraverser_obj::_collectionMark,"_collectionMark");
};

#endif

::hx::Class PartitionTraverser_obj::__mClass;

static ::String PartitionTraverser_obj_sStaticFields[] = {
	HX_("_collectionMark",2a,0a,3c,40),
	::String(null())
};

void PartitionTraverser_obj::__register()
{
	PartitionTraverser_obj _hx_dummy;
	PartitionTraverser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.traverse.PartitionTraverser",92,f0,14,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PartitionTraverser_obj::__GetStatic;
	__mClass->mSetStaticField = &PartitionTraverser_obj::__SetStatic;
	__mClass->mMarkFunc = PartitionTraverser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PartitionTraverser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PartitionTraverser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PartitionTraverser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PartitionTraverser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PartitionTraverser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PartitionTraverser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PartitionTraverser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_29ad17dafd40bc02_34_boot)
HXDLIN(  34)		_collectionMark = 0;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
