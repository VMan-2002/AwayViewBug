#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2e076dc4489de7bb_11_new,"away3d.core.data.EntityListItem","new",0xea086daa,"away3d.core.data.EntityListItem.new","away3d/core/data/EntityListItem.hx",11,0x5c520845)
namespace away3d{
namespace core{
namespace data{

void EntityListItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2e076dc4489de7bb_11_new)
            	}

Dynamic EntityListItem_obj::__CreateEmpty() { return new EntityListItem_obj; }

void *EntityListItem_obj::_hx_vtable = 0;

Dynamic EntityListItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EntityListItem_obj > _hx_result = new EntityListItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EntityListItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x012a61c4;
}


EntityListItem_obj::EntityListItem_obj()
{
}

void EntityListItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityListItem);
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void EntityListItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entity,"entity");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val EntityListItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return ::hx::Val( entity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EntityListItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::away3d::core::data::EntityListItem >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast<  ::away3d::entities::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityListItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("entity",23,13,1c,05));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EntityListItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::entities::Entity */ ,(int)offsetof(EntityListItem_obj,entity),HX_("entity",23,13,1c,05)},
	{::hx::fsObject /*  ::away3d::core::data::EntityListItem */ ,(int)offsetof(EntityListItem_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EntityListItem_obj_sStaticStorageInfo = 0;
#endif

static ::String EntityListItem_obj_sMemberFields[] = {
	HX_("entity",23,13,1c,05),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class EntityListItem_obj::__mClass;

void EntityListItem_obj::__register()
{
	EntityListItem_obj _hx_dummy;
	EntityListItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.data.EntityListItem",b8,10,4a,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EntityListItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EntityListItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EntityListItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EntityListItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace data
