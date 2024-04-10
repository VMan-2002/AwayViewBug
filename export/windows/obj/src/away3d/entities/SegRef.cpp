#include <hxcpp.h>

#ifndef INCLUDED_away3d_entities_SegRef
#include <away3d/entities/SegRef.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea420eaa75b8b6f0_642_new,"away3d.entities.SegRef","new",0xf19107ae,"away3d.entities.SegRef.new","away3d/entities/SegmentSet.hx",642,0x98422451)
namespace away3d{
namespace entities{

void SegRef_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ea420eaa75b8b6f0_642_new)
            	}

Dynamic SegRef_obj::__CreateEmpty() { return new SegRef_obj; }

void *SegRef_obj::_hx_vtable = 0;

Dynamic SegRef_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SegRef_obj > _hx_result = new SegRef_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SegRef_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4973cfde;
}


SegRef_obj::SegRef_obj()
{
}

void SegRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegRef);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(subSetIndex,"subSetIndex");
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_END_CLASS();
}

void SegRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(subSetIndex,"subSetIndex");
	HX_VISIT_MEMBER_NAME(segment,"segment");
}

::hx::Val SegRef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"segment") ) { return ::hx::Val( segment ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { return ::hx::Val( subSetIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SegRef_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast<  ::away3d::primitives::data::Segment >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { subSetIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SegRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("subSetIndex",b0,e9,57,2c));
	outFields->push(HX_("segment",b3,cf,ce,a6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SegRef_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SegRef_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(SegRef_obj,subSetIndex),HX_("subSetIndex",b0,e9,57,2c)},
	{::hx::fsObject /*  ::away3d::primitives::data::Segment */ ,(int)offsetof(SegRef_obj,segment),HX_("segment",b3,cf,ce,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SegRef_obj_sStaticStorageInfo = 0;
#endif

static ::String SegRef_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("subSetIndex",b0,e9,57,2c),
	HX_("segment",b3,cf,ce,a6),
	::String(null()) };

::hx::Class SegRef_obj::__mClass;

void SegRef_obj::__register()
{
	SegRef_obj _hx_dummy;
	SegRef_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.entities.SegRef",bc,58,74,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SegRef_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SegRef_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SegRef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SegRef_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace entities
