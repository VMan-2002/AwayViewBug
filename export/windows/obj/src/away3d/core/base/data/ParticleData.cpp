#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_data_ParticleData
#include <away3d/core/base/data/ParticleData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9357340cbd09bbd_13_new,"away3d.core.base.data.ParticleData","new",0x49867149,"away3d.core.base.data.ParticleData.new","away3d/core/base/data/ParticleData.hx",13,0xc309f187)
namespace away3d{
namespace core{
namespace base{
namespace data{

void ParticleData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d9357340cbd09bbd_13_new)
            	}

Dynamic ParticleData_obj::__CreateEmpty() { return new ParticleData_obj; }

void *ParticleData_obj::_hx_vtable = 0;

Dynamic ParticleData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ParticleData_obj > _hx_result = new ParticleData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ParticleData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04ec2389;
}


ParticleData_obj::ParticleData_obj()
{
}

void ParticleData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleData);
	HX_MARK_MEMBER_NAME(particleIndex,"particleIndex");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(startVertexIndex,"startVertexIndex");
	HX_MARK_MEMBER_NAME(subGeometry,"subGeometry");
	HX_MARK_END_CLASS();
}

void ParticleData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(particleIndex,"particleIndex");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(startVertexIndex,"startVertexIndex");
	HX_VISIT_MEMBER_NAME(subGeometry,"subGeometry");
}

::hx::Val ParticleData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return ::hx::Val( numVertices ); }
		if (HX_FIELD_EQ(inName,"subGeometry") ) { return ::hx::Val( subGeometry ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleIndex") ) { return ::hx::Val( particleIndex ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { return ::hx::Val( startVertexIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ParticleData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subGeometry") ) { subGeometry=inValue.Cast<  ::away3d::core::base::CompactSubGeometry >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleIndex") ) { particleIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { startVertexIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("particleIndex",ec,4e,6b,d4));
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("startVertexIndex",cc,ff,4b,51));
	outFields->push(HX_("subGeometry",52,e8,b7,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ParticleData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ParticleData_obj,particleIndex),HX_("particleIndex",ec,4e,6b,d4)},
	{::hx::fsInt,(int)offsetof(ParticleData_obj,numVertices),HX_("numVertices",5f,10,2c,56)},
	{::hx::fsInt,(int)offsetof(ParticleData_obj,startVertexIndex),HX_("startVertexIndex",cc,ff,4b,51)},
	{::hx::fsObject /*  ::away3d::core::base::CompactSubGeometry */ ,(int)offsetof(ParticleData_obj,subGeometry),HX_("subGeometry",52,e8,b7,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ParticleData_obj_sStaticStorageInfo = 0;
#endif

static ::String ParticleData_obj_sMemberFields[] = {
	HX_("particleIndex",ec,4e,6b,d4),
	HX_("numVertices",5f,10,2c,56),
	HX_("startVertexIndex",cc,ff,4b,51),
	HX_("subGeometry",52,e8,b7,32),
	::String(null()) };

::hx::Class ParticleData_obj::__mClass;

void ParticleData_obj::__register()
{
	ParticleData_obj _hx_dummy;
	ParticleData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.data.ParticleData",d7,18,b8,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ParticleData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ParticleData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ParticleData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ParticleData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
} // end namespace data
