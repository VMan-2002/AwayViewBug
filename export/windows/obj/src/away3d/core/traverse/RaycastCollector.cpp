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
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_RaycastCollector
#include <away3d/core/traverse/RaycastCollector.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_16_new,"away3d.core.traverse.RaycastCollector","new",0xdca169b2,"away3d.core.traverse.RaycastCollector.new","away3d/core/traverse/RaycastCollector.hx",16,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_37_get_rayPosition,"away3d.core.traverse.RaycastCollector","get_rayPosition",0x5763309c,"away3d.core.traverse.RaycastCollector.get_rayPosition","away3d/core/traverse/RaycastCollector.hx",37,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_41_set_rayPosition,"away3d.core.traverse.RaycastCollector","set_rayPosition",0x532eada8,"away3d.core.traverse.RaycastCollector.set_rayPosition","away3d/core/traverse/RaycastCollector.hx",41,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_51_get_rayDirection,"away3d.core.traverse.RaycastCollector","get_rayDirection",0x5f55c6ec,"away3d.core.traverse.RaycastCollector.get_rayDirection","away3d/core/traverse/RaycastCollector.hx",51,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_55_set_rayDirection,"away3d.core.traverse.RaycastCollector","set_rayDirection",0xb597b460,"away3d.core.traverse.RaycastCollector.set_rayDirection","away3d/core/traverse/RaycastCollector.hx",55,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_67_enterNode,"away3d.core.traverse.RaycastCollector","enterNode",0x1828720c,"away3d.core.traverse.RaycastCollector.enterNode","away3d/core/traverse/RaycastCollector.hx",67,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_74_applySkyBox,"away3d.core.traverse.RaycastCollector","applySkyBox",0x6d74d30a,"away3d.core.traverse.RaycastCollector.applySkyBox","away3d/core/traverse/RaycastCollector.hx",74,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_82_applyRenderable,"away3d.core.traverse.RaycastCollector","applyRenderable",0xb1076750,"away3d.core.traverse.RaycastCollector.applyRenderable","away3d/core/traverse/RaycastCollector.hx",82,0xe16aa2fd)
HX_LOCAL_STACK_FRAME(_hx_pos_dd89e0e9652e92ba_89_applyUnknownLight,"away3d.core.traverse.RaycastCollector","applyUnknownLight",0x6a878c4c,"away3d.core.traverse.RaycastCollector.applyUnknownLight","away3d/core/traverse/RaycastCollector.hx",89,0xe16aa2fd)
namespace away3d{
namespace core{
namespace traverse{

void RaycastCollector_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_16_new)
HXLINE(  22)		this->_rayDirection =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  21)		this->_rayPosition =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  29)		super::__construct();
            	}

Dynamic RaycastCollector_obj::__CreateEmpty() { return new RaycastCollector_obj; }

void *RaycastCollector_obj::_hx_vtable = 0;

Dynamic RaycastCollector_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RaycastCollector_obj > _hx_result = new RaycastCollector_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RaycastCollector_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db89f14) {
		if (inClassId<=(int)0x23f97a4a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23f97a4a;
		} else {
			return inClassId==(int)0x3db89f14;
		}
	} else {
		return inClassId==(int)0x6a4dd616;
	}
}

 ::openfl::geom::Vector3D RaycastCollector_obj::get_rayPosition(){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_37_get_rayPosition)
HXDLIN(  37)		return this->_rayPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RaycastCollector_obj,get_rayPosition,return )

 ::openfl::geom::Vector3D RaycastCollector_obj::set_rayPosition( ::openfl::geom::Vector3D value){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_41_set_rayPosition)
HXLINE(  42)		this->_rayPosition = value;
HXLINE(  43)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RaycastCollector_obj,set_rayPosition,return )

 ::openfl::geom::Vector3D RaycastCollector_obj::get_rayDirection(){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_51_get_rayDirection)
HXDLIN(  51)		return this->_rayDirection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RaycastCollector_obj,get_rayDirection,return )

 ::openfl::geom::Vector3D RaycastCollector_obj::set_rayDirection( ::openfl::geom::Vector3D value){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_55_set_rayDirection)
HXLINE(  56)		this->_rayDirection = value;
HXLINE(  57)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RaycastCollector_obj,set_rayDirection,return )

bool RaycastCollector_obj::enterNode( ::away3d::core::partition::NodeBase node){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_67_enterNode)
HXDLIN(  67)		return node->isIntersectingRay(this->_rayPosition,this->_rayDirection);
            	}


void RaycastCollector_obj::applySkyBox(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_74_applySkyBox)
            	}


void RaycastCollector_obj::applyRenderable(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_82_applyRenderable)
            	}


void RaycastCollector_obj::applyUnknownLight( ::away3d::lights::LightBase light){
            	HX_STACKFRAME(&_hx_pos_dd89e0e9652e92ba_89_applyUnknownLight)
            	}



::hx::ObjectPtr< RaycastCollector_obj > RaycastCollector_obj::__new() {
	::hx::ObjectPtr< RaycastCollector_obj > __this = new RaycastCollector_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RaycastCollector_obj > RaycastCollector_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RaycastCollector_obj *__this = (RaycastCollector_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RaycastCollector_obj), true, "away3d.core.traverse.RaycastCollector"));
	*(void **)__this = RaycastCollector_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RaycastCollector_obj::RaycastCollector_obj()
{
}

void RaycastCollector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RaycastCollector);
	HX_MARK_MEMBER_NAME(_rayPosition,"_rayPosition");
	HX_MARK_MEMBER_NAME(_rayDirection,"_rayDirection");
	 ::away3d::core::traverse::EntityCollector_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RaycastCollector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rayPosition,"_rayPosition");
	HX_VISIT_MEMBER_NAME(_rayDirection,"_rayDirection");
	 ::away3d::core::traverse::EntityCollector_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RaycastCollector_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"enterNode") ) { return ::hx::Val( enterNode_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rayPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rayPosition() ); }
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return ::hx::Val( applySkyBox_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayDirection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rayDirection() ); }
		if (HX_FIELD_EQ(inName,"_rayPosition") ) { return ::hx::Val( _rayPosition ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_rayDirection") ) { return ::hx::Val( _rayDirection ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_rayPosition") ) { return ::hx::Val( get_rayPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rayPosition") ) { return ::hx::Val( set_rayPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return ::hx::Val( applyRenderable_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_rayDirection") ) { return ::hx::Val( get_rayDirection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rayDirection") ) { return ::hx::Val( set_rayDirection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return ::hx::Val( applyUnknownLight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RaycastCollector_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"rayPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rayPosition(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayDirection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rayDirection(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		if (HX_FIELD_EQ(inName,"_rayPosition") ) { _rayPosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_rayDirection") ) { _rayDirection=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RaycastCollector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rayPosition",b3,2c,0a,98));
	outFields->push(HX_("rayDirection",f5,5e,cb,b0));
	outFields->push(HX_("_rayPosition",b4,da,13,fe));
	outFields->push(HX_("_rayDirection",d4,f1,39,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RaycastCollector_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(RaycastCollector_obj,_rayPosition),HX_("_rayPosition",b4,da,13,fe)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(RaycastCollector_obj,_rayDirection),HX_("_rayDirection",d4,f1,39,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RaycastCollector_obj_sStaticStorageInfo = 0;
#endif

static ::String RaycastCollector_obj_sMemberFields[] = {
	HX_("_rayPosition",b4,da,13,fe),
	HX_("_rayDirection",d4,f1,39,93),
	HX_("get_rayPosition",4a,e4,eb,58),
	HX_("set_rayPosition",56,61,b7,54),
	HX_("get_rayDirection",7e,4b,6a,b5),
	HX_("set_rayDirection",f2,38,ac,0b),
	HX_("enterNode",3a,0f,42,de),
	HX_("applySkyBox",b8,97,12,23),
	HX_("applyRenderable",fe,1a,90,b2),
	HX_("applyUnknownLight",7a,07,67,66),
	::String(null()) };

::hx::Class RaycastCollector_obj::__mClass;

void RaycastCollector_obj::__register()
{
	RaycastCollector_obj _hx_dummy;
	RaycastCollector_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.traverse.RaycastCollector",c0,68,a2,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RaycastCollector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RaycastCollector_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RaycastCollector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RaycastCollector_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
