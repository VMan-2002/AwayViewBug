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
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_10af87f6ce8dae42_91_new,"away3d.core.pick.PickingCollisionVO","new",0x2a023f09,"away3d.core.pick.PickingCollisionVO.new","away3d/core/pick/PickingCollisionVO.hx",91,0x1963d346)
namespace away3d{
namespace core{
namespace pick{

void PickingCollisionVO_obj::__construct( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_10af87f6ce8dae42_91_new)
HXDLIN(  91)		this->entity = entity;
            	}

Dynamic PickingCollisionVO_obj::__CreateEmpty() { return new PickingCollisionVO_obj; }

void *PickingCollisionVO_obj::_hx_vtable = 0;

Dynamic PickingCollisionVO_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PickingCollisionVO_obj > _hx_result = new PickingCollisionVO_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PickingCollisionVO_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x50b32169;
}


::hx::ObjectPtr< PickingCollisionVO_obj > PickingCollisionVO_obj::__new( ::away3d::entities::Entity entity) {
	::hx::ObjectPtr< PickingCollisionVO_obj > __this = new PickingCollisionVO_obj();
	__this->__construct(entity);
	return __this;
}

::hx::ObjectPtr< PickingCollisionVO_obj > PickingCollisionVO_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity entity) {
	PickingCollisionVO_obj *__this = (PickingCollisionVO_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PickingCollisionVO_obj), true, "away3d.core.pick.PickingCollisionVO"));
	*(void **)__this = PickingCollisionVO_obj::_hx_vtable;
	__this->__construct(entity);
	return __this;
}

PickingCollisionVO_obj::PickingCollisionVO_obj()
{
}

void PickingCollisionVO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PickingCollisionVO);
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_MEMBER_NAME(localPosition,"localPosition");
	HX_MARK_MEMBER_NAME(localNormal,"localNormal");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_MARK_MEMBER_NAME(localRayPosition,"localRayPosition");
	HX_MARK_MEMBER_NAME(localRayDirection,"localRayDirection");
	HX_MARK_MEMBER_NAME(rayPosition,"rayPosition");
	HX_MARK_MEMBER_NAME(rayDirection,"rayDirection");
	HX_MARK_MEMBER_NAME(rayOriginIsInsideBounds,"rayOriginIsInsideBounds");
	HX_MARK_MEMBER_NAME(rayEntryDistance,"rayEntryDistance");
	HX_MARK_MEMBER_NAME(renderable,"renderable");
	HX_MARK_END_CLASS();
}

void PickingCollisionVO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entity,"entity");
	HX_VISIT_MEMBER_NAME(localPosition,"localPosition");
	HX_VISIT_MEMBER_NAME(localNormal,"localNormal");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_VISIT_MEMBER_NAME(localRayPosition,"localRayPosition");
	HX_VISIT_MEMBER_NAME(localRayDirection,"localRayDirection");
	HX_VISIT_MEMBER_NAME(rayPosition,"rayPosition");
	HX_VISIT_MEMBER_NAME(rayDirection,"rayDirection");
	HX_VISIT_MEMBER_NAME(rayOriginIsInsideBounds,"rayOriginIsInsideBounds");
	HX_VISIT_MEMBER_NAME(rayEntryDistance,"rayEntryDistance");
	HX_VISIT_MEMBER_NAME(renderable,"renderable");
}

::hx::Val PickingCollisionVO_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return ::hx::Val( uv ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return ::hx::Val( entity ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { return ::hx::Val( renderable ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"localNormal") ) { return ::hx::Val( localNormal ); }
		if (HX_FIELD_EQ(inName,"rayPosition") ) { return ::hx::Val( rayPosition ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayDirection") ) { return ::hx::Val( rayDirection ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { return ::hx::Val( localPosition ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { return ::hx::Val( subGeometryIndex ); }
		if (HX_FIELD_EQ(inName,"localRayPosition") ) { return ::hx::Val( localRayPosition ); }
		if (HX_FIELD_EQ(inName,"rayEntryDistance") ) { return ::hx::Val( rayEntryDistance ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"localRayDirection") ) { return ::hx::Val( localRayDirection ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"rayOriginIsInsideBounds") ) { return ::hx::Val( rayOriginIsInsideBounds ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PickingCollisionVO_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast<  ::away3d::entities::Entity >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"localNormal") ) { localNormal=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rayPosition") ) { rayPosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayDirection") ) { rayDirection=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { localPosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { subGeometryIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localRayPosition") ) { localRayPosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rayEntryDistance") ) { rayEntryDistance=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"localRayDirection") ) { localRayDirection=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"rayOriginIsInsideBounds") ) { rayOriginIsInsideBounds=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PickingCollisionVO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("entity",23,13,1c,05));
	outFields->push(HX_("localPosition",34,09,f5,43));
	outFields->push(HX_("localNormal",f2,11,a4,ed));
	outFields->push(HX_("uv",61,66,00,00));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("subGeometryIndex",60,b9,24,7c));
	outFields->push(HX_("localRayPosition",08,6d,61,91));
	outFields->push(HX_("localRayDirection",00,69,cc,e3));
	outFields->push(HX_("rayPosition",b3,2c,0a,98));
	outFields->push(HX_("rayDirection",f5,5e,cb,b0));
	outFields->push(HX_("rayOriginIsInsideBounds",2b,a6,06,76));
	outFields->push(HX_("rayEntryDistance",7d,19,91,37));
	outFields->push(HX_("renderable",f0,3b,99,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PickingCollisionVO_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::entities::Entity */ ,(int)offsetof(PickingCollisionVO_obj,entity),HX_("entity",23,13,1c,05)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(PickingCollisionVO_obj,localPosition),HX_("localPosition",34,09,f5,43)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(PickingCollisionVO_obj,localNormal),HX_("localNormal",f2,11,a4,ed)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PickingCollisionVO_obj,uv),HX_("uv",61,66,00,00)},
	{::hx::fsInt,(int)offsetof(PickingCollisionVO_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(PickingCollisionVO_obj,subGeometryIndex),HX_("subGeometryIndex",60,b9,24,7c)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(PickingCollisionVO_obj,localRayPosition),HX_("localRayPosition",08,6d,61,91)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(PickingCollisionVO_obj,localRayDirection),HX_("localRayDirection",00,69,cc,e3)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(PickingCollisionVO_obj,rayPosition),HX_("rayPosition",b3,2c,0a,98)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(PickingCollisionVO_obj,rayDirection),HX_("rayDirection",f5,5e,cb,b0)},
	{::hx::fsBool,(int)offsetof(PickingCollisionVO_obj,rayOriginIsInsideBounds),HX_("rayOriginIsInsideBounds",2b,a6,06,76)},
	{::hx::fsFloat,(int)offsetof(PickingCollisionVO_obj,rayEntryDistance),HX_("rayEntryDistance",7d,19,91,37)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(PickingCollisionVO_obj,renderable),HX_("renderable",f0,3b,99,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PickingCollisionVO_obj_sStaticStorageInfo = 0;
#endif

static ::String PickingCollisionVO_obj_sMemberFields[] = {
	HX_("entity",23,13,1c,05),
	HX_("localPosition",34,09,f5,43),
	HX_("localNormal",f2,11,a4,ed),
	HX_("uv",61,66,00,00),
	HX_("index",12,9b,14,be),
	HX_("subGeometryIndex",60,b9,24,7c),
	HX_("localRayPosition",08,6d,61,91),
	HX_("localRayDirection",00,69,cc,e3),
	HX_("rayPosition",b3,2c,0a,98),
	HX_("rayDirection",f5,5e,cb,b0),
	HX_("rayOriginIsInsideBounds",2b,a6,06,76),
	HX_("rayEntryDistance",7d,19,91,37),
	HX_("renderable",f0,3b,99,f2),
	::String(null()) };

::hx::Class PickingCollisionVO_obj::__mClass;

void PickingCollisionVO_obj::__register()
{
	PickingCollisionVO_obj _hx_dummy;
	PickingCollisionVO_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.pick.PickingCollisionVO",97,06,4a,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PickingCollisionVO_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PickingCollisionVO_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PickingCollisionVO_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PickingCollisionVO_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
