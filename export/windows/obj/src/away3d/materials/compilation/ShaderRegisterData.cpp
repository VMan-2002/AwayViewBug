#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a80f26377d8af4ae_29_new,"away3d.materials.compilation.ShaderRegisterData","new",0x31edeaa0,"away3d.materials.compilation.ShaderRegisterData.new","away3d/materials/compilation/ShaderRegisterData.hx",29,0x2d96b9ad)
namespace away3d{
namespace materials{
namespace compilation{

void ShaderRegisterData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a80f26377d8af4ae_29_new)
            	}

Dynamic ShaderRegisterData_obj::__CreateEmpty() { return new ShaderRegisterData_obj; }

void *ShaderRegisterData_obj::_hx_vtable = 0;

Dynamic ShaderRegisterData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderRegisterData_obj > _hx_result = new ShaderRegisterData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderRegisterData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x077c5470;
}


ShaderRegisterData_obj::ShaderRegisterData_obj()
{
}

void ShaderRegisterData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderRegisterData);
	HX_MARK_MEMBER_NAME(normalVarying,"normalVarying");
	HX_MARK_MEMBER_NAME(tangentVarying,"tangentVarying");
	HX_MARK_MEMBER_NAME(bitangentVarying,"bitangentVarying");
	HX_MARK_MEMBER_NAME(uvVarying,"uvVarying");
	HX_MARK_MEMBER_NAME(secondaryUVVarying,"secondaryUVVarying");
	HX_MARK_MEMBER_NAME(viewDirVarying,"viewDirVarying");
	HX_MARK_MEMBER_NAME(shadedTarget,"shadedTarget");
	HX_MARK_MEMBER_NAME(globalPositionVertex,"globalPositionVertex");
	HX_MARK_MEMBER_NAME(globalPositionVarying,"globalPositionVarying");
	HX_MARK_MEMBER_NAME(localPosition,"localPosition");
	HX_MARK_MEMBER_NAME(normalInput,"normalInput");
	HX_MARK_MEMBER_NAME(tangentInput,"tangentInput");
	HX_MARK_MEMBER_NAME(animatedNormal,"animatedNormal");
	HX_MARK_MEMBER_NAME(animatedTangent,"animatedTangent");
	HX_MARK_MEMBER_NAME(commons,"commons");
	HX_MARK_MEMBER_NAME(projectionFragment,"projectionFragment");
	HX_MARK_MEMBER_NAME(normalFragment,"normalFragment");
	HX_MARK_MEMBER_NAME(viewDirFragment,"viewDirFragment");
	HX_MARK_MEMBER_NAME(bitangent,"bitangent");
	HX_MARK_END_CLASS();
}

void ShaderRegisterData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(normalVarying,"normalVarying");
	HX_VISIT_MEMBER_NAME(tangentVarying,"tangentVarying");
	HX_VISIT_MEMBER_NAME(bitangentVarying,"bitangentVarying");
	HX_VISIT_MEMBER_NAME(uvVarying,"uvVarying");
	HX_VISIT_MEMBER_NAME(secondaryUVVarying,"secondaryUVVarying");
	HX_VISIT_MEMBER_NAME(viewDirVarying,"viewDirVarying");
	HX_VISIT_MEMBER_NAME(shadedTarget,"shadedTarget");
	HX_VISIT_MEMBER_NAME(globalPositionVertex,"globalPositionVertex");
	HX_VISIT_MEMBER_NAME(globalPositionVarying,"globalPositionVarying");
	HX_VISIT_MEMBER_NAME(localPosition,"localPosition");
	HX_VISIT_MEMBER_NAME(normalInput,"normalInput");
	HX_VISIT_MEMBER_NAME(tangentInput,"tangentInput");
	HX_VISIT_MEMBER_NAME(animatedNormal,"animatedNormal");
	HX_VISIT_MEMBER_NAME(animatedTangent,"animatedTangent");
	HX_VISIT_MEMBER_NAME(commons,"commons");
	HX_VISIT_MEMBER_NAME(projectionFragment,"projectionFragment");
	HX_VISIT_MEMBER_NAME(normalFragment,"normalFragment");
	HX_VISIT_MEMBER_NAME(viewDirFragment,"viewDirFragment");
	HX_VISIT_MEMBER_NAME(bitangent,"bitangent");
}

::hx::Val ShaderRegisterData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"commons") ) { return ::hx::Val( commons ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uvVarying") ) { return ::hx::Val( uvVarying ); }
		if (HX_FIELD_EQ(inName,"bitangent") ) { return ::hx::Val( bitangent ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"normalInput") ) { return ::hx::Val( normalInput ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadedTarget") ) { return ::hx::Val( shadedTarget ); }
		if (HX_FIELD_EQ(inName,"tangentInput") ) { return ::hx::Val( tangentInput ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalVarying") ) { return ::hx::Val( normalVarying ); }
		if (HX_FIELD_EQ(inName,"localPosition") ) { return ::hx::Val( localPosition ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tangentVarying") ) { return ::hx::Val( tangentVarying ); }
		if (HX_FIELD_EQ(inName,"viewDirVarying") ) { return ::hx::Val( viewDirVarying ); }
		if (HX_FIELD_EQ(inName,"animatedNormal") ) { return ::hx::Val( animatedNormal ); }
		if (HX_FIELD_EQ(inName,"normalFragment") ) { return ::hx::Val( normalFragment ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animatedTangent") ) { return ::hx::Val( animatedTangent ); }
		if (HX_FIELD_EQ(inName,"viewDirFragment") ) { return ::hx::Val( viewDirFragment ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bitangentVarying") ) { return ::hx::Val( bitangentVarying ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"secondaryUVVarying") ) { return ::hx::Val( secondaryUVVarying ); }
		if (HX_FIELD_EQ(inName,"projectionFragment") ) { return ::hx::Val( projectionFragment ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"globalPositionVertex") ) { return ::hx::Val( globalPositionVertex ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"globalPositionVarying") ) { return ::hx::Val( globalPositionVarying ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderRegisterData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"commons") ) { commons=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uvVarying") ) { uvVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitangent") ) { bitangent=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"normalInput") ) { normalInput=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadedTarget") ) { shadedTarget=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tangentInput") ) { tangentInput=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalVarying") ) { normalVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localPosition") ) { localPosition=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tangentVarying") ) { tangentVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewDirVarying") ) { viewDirVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animatedNormal") ) { animatedNormal=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalFragment") ) { normalFragment=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animatedTangent") ) { animatedTangent=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewDirFragment") ) { viewDirFragment=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bitangentVarying") ) { bitangentVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"secondaryUVVarying") ) { secondaryUVVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projectionFragment") ) { projectionFragment=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"globalPositionVertex") ) { globalPositionVertex=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"globalPositionVarying") ) { globalPositionVarying=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderRegisterData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("normalVarying",09,15,05,81));
	outFields->push(HX_("tangentVarying",2b,9a,fc,de));
	outFields->push(HX_("bitangentVarying",32,de,a0,3a));
	outFields->push(HX_("uvVarying",0f,7c,62,7a));
	outFields->push(HX_("secondaryUVVarying",1b,3a,29,99));
	outFields->push(HX_("viewDirVarying",68,a1,d1,f5));
	outFields->push(HX_("shadedTarget",c8,11,a9,b0));
	outFields->push(HX_("globalPositionVertex",b0,a1,a4,62));
	outFields->push(HX_("globalPositionVarying",a4,78,4c,57));
	outFields->push(HX_("localPosition",34,09,f5,43));
	outFields->push(HX_("normalInput",63,94,4f,4b));
	outFields->push(HX_("tangentInput",05,2d,f6,3f));
	outFields->push(HX_("animatedNormal",2a,75,7c,38));
	outFields->push(HX_("animatedTangent",62,3c,5d,43));
	outFields->push(HX_("commons",e8,10,78,81));
	outFields->push(HX_("projectionFragment",7f,4b,c4,63));
	outFields->push(HX_("normalFragment",17,8d,89,6c));
	outFields->push(HX_("viewDirFragment",d8,d3,b7,2a));
	outFields->push(HX_("bitangent",de,9d,e8,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderRegisterData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,normalVarying),HX_("normalVarying",09,15,05,81)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,tangentVarying),HX_("tangentVarying",2b,9a,fc,de)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,bitangentVarying),HX_("bitangentVarying",32,de,a0,3a)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,uvVarying),HX_("uvVarying",0f,7c,62,7a)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,secondaryUVVarying),HX_("secondaryUVVarying",1b,3a,29,99)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,viewDirVarying),HX_("viewDirVarying",68,a1,d1,f5)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,shadedTarget),HX_("shadedTarget",c8,11,a9,b0)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,globalPositionVertex),HX_("globalPositionVertex",b0,a1,a4,62)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,globalPositionVarying),HX_("globalPositionVarying",a4,78,4c,57)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,localPosition),HX_("localPosition",34,09,f5,43)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,normalInput),HX_("normalInput",63,94,4f,4b)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,tangentInput),HX_("tangentInput",05,2d,f6,3f)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,animatedNormal),HX_("animatedNormal",2a,75,7c,38)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,animatedTangent),HX_("animatedTangent",62,3c,5d,43)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,commons),HX_("commons",e8,10,78,81)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,projectionFragment),HX_("projectionFragment",7f,4b,c4,63)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,normalFragment),HX_("normalFragment",17,8d,89,6c)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,viewDirFragment),HX_("viewDirFragment",d8,d3,b7,2a)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(ShaderRegisterData_obj,bitangent),HX_("bitangent",de,9d,e8,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderRegisterData_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderRegisterData_obj_sMemberFields[] = {
	HX_("normalVarying",09,15,05,81),
	HX_("tangentVarying",2b,9a,fc,de),
	HX_("bitangentVarying",32,de,a0,3a),
	HX_("uvVarying",0f,7c,62,7a),
	HX_("secondaryUVVarying",1b,3a,29,99),
	HX_("viewDirVarying",68,a1,d1,f5),
	HX_("shadedTarget",c8,11,a9,b0),
	HX_("globalPositionVertex",b0,a1,a4,62),
	HX_("globalPositionVarying",a4,78,4c,57),
	HX_("localPosition",34,09,f5,43),
	HX_("normalInput",63,94,4f,4b),
	HX_("tangentInput",05,2d,f6,3f),
	HX_("animatedNormal",2a,75,7c,38),
	HX_("animatedTangent",62,3c,5d,43),
	HX_("commons",e8,10,78,81),
	HX_("projectionFragment",7f,4b,c4,63),
	HX_("normalFragment",17,8d,89,6c),
	HX_("viewDirFragment",d8,d3,b7,2a),
	HX_("bitangent",de,9d,e8,70),
	::String(null()) };

::hx::Class ShaderRegisterData_obj::__mClass;

void ShaderRegisterData_obj::__register()
{
	ShaderRegisterData_obj _hx_dummy;
	ShaderRegisterData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.compilation.ShaderRegisterData",ae,5a,44,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderRegisterData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderRegisterData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderRegisterData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderRegisterData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
