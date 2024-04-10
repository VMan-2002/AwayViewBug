#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_63062586413d18c7_41_new,"away3d.materials.methods.MethodVO","new",0x37c7fd79,"away3d.materials.methods.MethodVO.new","away3d/materials/methods/MethodVO.hx",41,0xbef067b4)
HX_LOCAL_STACK_FRAME(_hx_pos_63062586413d18c7_55_reset,"away3d.materials.methods.MethodVO","reset",0x0574af28,"away3d.materials.methods.MethodVO.reset","away3d/materials/methods/MethodVO.hx",55,0xbef067b4)
namespace away3d{
namespace materials{
namespace methods{

void MethodVO_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_63062586413d18c7_41_new)
HXDLIN(  41)		this->useLightFallOff = true;
            	}

Dynamic MethodVO_obj::__CreateEmpty() { return new MethodVO_obj; }

void *MethodVO_obj::_hx_vtable = 0;

Dynamic MethodVO_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MethodVO_obj > _hx_result = new MethodVO_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MethodVO_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dbc1a7f;
}

void MethodVO_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_63062586413d18c7_55_reset)
HXLINE(  56)		this->texturesIndex = -1;
HXLINE(  57)		this->vertexConstantsIndex = -1;
HXLINE(  58)		this->fragmentConstantsIndex = -1;
HXLINE(  60)		this->useMipmapping = true;
HXLINE(  61)		this->anisotropy = 1;
HXLINE(  62)		this->useSmoothTextures = true;
HXLINE(  63)		this->repeatTextures = false;
HXLINE(  65)		this->needsProjection = false;
HXLINE(  66)		this->needsView = false;
HXLINE(  67)		this->needsNormals = false;
HXLINE(  68)		this->needsTangents = false;
HXLINE(  69)		this->needsUV = false;
HXLINE(  70)		this->needsSecondaryUV = false;
HXLINE(  71)		this->needsGlobalVertexPos = false;
HXLINE(  72)		this->needsGlobalFragmentPos = false;
HXLINE(  74)		this->numLights = 0;
HXLINE(  75)		this->useLightFallOff = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodVO_obj,reset,(void))


MethodVO_obj::MethodVO_obj()
{
}

void MethodVO_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodVO);
	HX_MARK_MEMBER_NAME(vertexData,"vertexData");
	HX_MARK_MEMBER_NAME(fragmentData,"fragmentData");
	HX_MARK_MEMBER_NAME(texturesIndex,"texturesIndex");
	HX_MARK_MEMBER_NAME(secondaryTexturesIndex,"secondaryTexturesIndex");
	HX_MARK_MEMBER_NAME(vertexConstantsIndex,"vertexConstantsIndex");
	HX_MARK_MEMBER_NAME(secondaryVertexConstantsIndex,"secondaryVertexConstantsIndex");
	HX_MARK_MEMBER_NAME(fragmentConstantsIndex,"fragmentConstantsIndex");
	HX_MARK_MEMBER_NAME(secondaryFragmentConstantsIndex,"secondaryFragmentConstantsIndex");
	HX_MARK_MEMBER_NAME(useMipmapping,"useMipmapping");
	HX_MARK_MEMBER_NAME(useSmoothTextures,"useSmoothTextures");
	HX_MARK_MEMBER_NAME(repeatTextures,"repeatTextures");
	HX_MARK_MEMBER_NAME(anisotropy,"anisotropy");
	HX_MARK_MEMBER_NAME(needsProjection,"needsProjection");
	HX_MARK_MEMBER_NAME(needsView,"needsView");
	HX_MARK_MEMBER_NAME(needsNormals,"needsNormals");
	HX_MARK_MEMBER_NAME(needsTangents,"needsTangents");
	HX_MARK_MEMBER_NAME(needsUV,"needsUV");
	HX_MARK_MEMBER_NAME(needsSecondaryUV,"needsSecondaryUV");
	HX_MARK_MEMBER_NAME(needsGlobalVertexPos,"needsGlobalVertexPos");
	HX_MARK_MEMBER_NAME(needsGlobalFragmentPos,"needsGlobalFragmentPos");
	HX_MARK_MEMBER_NAME(numLights,"numLights");
	HX_MARK_MEMBER_NAME(useLightFallOff,"useLightFallOff");
	HX_MARK_END_CLASS();
}

void MethodVO_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertexData,"vertexData");
	HX_VISIT_MEMBER_NAME(fragmentData,"fragmentData");
	HX_VISIT_MEMBER_NAME(texturesIndex,"texturesIndex");
	HX_VISIT_MEMBER_NAME(secondaryTexturesIndex,"secondaryTexturesIndex");
	HX_VISIT_MEMBER_NAME(vertexConstantsIndex,"vertexConstantsIndex");
	HX_VISIT_MEMBER_NAME(secondaryVertexConstantsIndex,"secondaryVertexConstantsIndex");
	HX_VISIT_MEMBER_NAME(fragmentConstantsIndex,"fragmentConstantsIndex");
	HX_VISIT_MEMBER_NAME(secondaryFragmentConstantsIndex,"secondaryFragmentConstantsIndex");
	HX_VISIT_MEMBER_NAME(useMipmapping,"useMipmapping");
	HX_VISIT_MEMBER_NAME(useSmoothTextures,"useSmoothTextures");
	HX_VISIT_MEMBER_NAME(repeatTextures,"repeatTextures");
	HX_VISIT_MEMBER_NAME(anisotropy,"anisotropy");
	HX_VISIT_MEMBER_NAME(needsProjection,"needsProjection");
	HX_VISIT_MEMBER_NAME(needsView,"needsView");
	HX_VISIT_MEMBER_NAME(needsNormals,"needsNormals");
	HX_VISIT_MEMBER_NAME(needsTangents,"needsTangents");
	HX_VISIT_MEMBER_NAME(needsUV,"needsUV");
	HX_VISIT_MEMBER_NAME(needsSecondaryUV,"needsSecondaryUV");
	HX_VISIT_MEMBER_NAME(needsGlobalVertexPos,"needsGlobalVertexPos");
	HX_VISIT_MEMBER_NAME(needsGlobalFragmentPos,"needsGlobalFragmentPos");
	HX_VISIT_MEMBER_NAME(numLights,"numLights");
	HX_VISIT_MEMBER_NAME(useLightFallOff,"useLightFallOff");
}

::hx::Val MethodVO_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"needsUV") ) { return ::hx::Val( needsUV ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"needsView") ) { return ::hx::Val( needsView ); }
		if (HX_FIELD_EQ(inName,"numLights") ) { return ::hx::Val( numLights ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexData") ) { return ::hx::Val( vertexData ); }
		if (HX_FIELD_EQ(inName,"anisotropy") ) { return ::hx::Val( anisotropy ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fragmentData") ) { return ::hx::Val( fragmentData ); }
		if (HX_FIELD_EQ(inName,"needsNormals") ) { return ::hx::Val( needsNormals ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"texturesIndex") ) { return ::hx::Val( texturesIndex ); }
		if (HX_FIELD_EQ(inName,"useMipmapping") ) { return ::hx::Val( useMipmapping ); }
		if (HX_FIELD_EQ(inName,"needsTangents") ) { return ::hx::Val( needsTangents ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatTextures") ) { return ::hx::Val( repeatTextures ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"needsProjection") ) { return ::hx::Val( needsProjection ); }
		if (HX_FIELD_EQ(inName,"useLightFallOff") ) { return ::hx::Val( useLightFallOff ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"needsSecondaryUV") ) { return ::hx::Val( needsSecondaryUV ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useSmoothTextures") ) { return ::hx::Val( useSmoothTextures ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexConstantsIndex") ) { return ::hx::Val( vertexConstantsIndex ); }
		if (HX_FIELD_EQ(inName,"needsGlobalVertexPos") ) { return ::hx::Val( needsGlobalVertexPos ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"secondaryTexturesIndex") ) { return ::hx::Val( secondaryTexturesIndex ); }
		if (HX_FIELD_EQ(inName,"fragmentConstantsIndex") ) { return ::hx::Val( fragmentConstantsIndex ); }
		if (HX_FIELD_EQ(inName,"needsGlobalFragmentPos") ) { return ::hx::Val( needsGlobalFragmentPos ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"secondaryVertexConstantsIndex") ) { return ::hx::Val( secondaryVertexConstantsIndex ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"secondaryFragmentConstantsIndex") ) { return ::hx::Val( secondaryFragmentConstantsIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MethodVO_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needsUV") ) { needsUV=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"needsView") ) { needsView=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLights") ) { numLights=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexData") ) { vertexData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"anisotropy") ) { anisotropy=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fragmentData") ) { fragmentData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needsNormals") ) { needsNormals=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"texturesIndex") ) { texturesIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useMipmapping") ) { useMipmapping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needsTangents") ) { needsTangents=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatTextures") ) { repeatTextures=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"needsProjection") ) { needsProjection=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useLightFallOff") ) { useLightFallOff=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"needsSecondaryUV") ) { needsSecondaryUV=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useSmoothTextures") ) { useSmoothTextures=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexConstantsIndex") ) { vertexConstantsIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needsGlobalVertexPos") ) { needsGlobalVertexPos=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"secondaryTexturesIndex") ) { secondaryTexturesIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentConstantsIndex") ) { fragmentConstantsIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needsGlobalFragmentPos") ) { needsGlobalFragmentPos=inValue.Cast< bool >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"secondaryVertexConstantsIndex") ) { secondaryVertexConstantsIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"secondaryFragmentConstantsIndex") ) { secondaryFragmentConstantsIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodVO_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertexData",ae,df,1f,d3));
	outFields->push(HX_("fragmentData",1a,0a,16,06));
	outFields->push(HX_("texturesIndex",ba,e8,cf,aa));
	outFields->push(HX_("secondaryTexturesIndex",a6,50,8a,e7));
	outFields->push(HX_("vertexConstantsIndex",87,84,64,40));
	outFields->push(HX_("secondaryVertexConstantsIndex",1b,32,56,75));
	outFields->push(HX_("fragmentConstantsIndex",f3,6d,48,de));
	outFields->push(HX_("secondaryFragmentConstantsIndex",87,a8,2f,75));
	outFields->push(HX_("useMipmapping",21,73,ae,e7));
	outFields->push(HX_("useSmoothTextures",2d,a8,41,62));
	outFields->push(HX_("repeatTextures",b3,9d,bc,82));
	outFields->push(HX_("anisotropy",02,f8,8e,1b));
	outFields->push(HX_("needsProjection",4c,9a,5f,a5));
	outFields->push(HX_("needsView",62,28,87,08));
	outFields->push(HX_("needsNormals",8f,96,84,06));
	outFields->push(HX_("needsTangents",8b,c8,52,b3));
	outFields->push(HX_("needsUV",fe,f2,2d,aa));
	outFields->push(HX_("needsSecondaryUV",78,d2,bf,f9));
	outFields->push(HX_("needsGlobalVertexPos",d0,db,09,7c));
	outFields->push(HX_("needsGlobalFragmentPos",e4,32,7b,c0));
	outFields->push(HX_("numLights",c3,75,03,99));
	outFields->push(HX_("useLightFallOff",65,92,23,09));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MethodVO_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(MethodVO_obj,vertexData),HX_("vertexData",ae,df,1f,d3)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(MethodVO_obj,fragmentData),HX_("fragmentData",1a,0a,16,06)},
	{::hx::fsInt,(int)offsetof(MethodVO_obj,texturesIndex),HX_("texturesIndex",ba,e8,cf,aa)},
	{::hx::fsInt,(int)offsetof(MethodVO_obj,secondaryTexturesIndex),HX_("secondaryTexturesIndex",a6,50,8a,e7)},
	{::hx::fsInt,(int)offsetof(MethodVO_obj,vertexConstantsIndex),HX_("vertexConstantsIndex",87,84,64,40)},
	{::hx::fsInt,(int)offsetof(MethodVO_obj,secondaryVertexConstantsIndex),HX_("secondaryVertexConstantsIndex",1b,32,56,75)},
	{::hx::fsInt,(int)offsetof(MethodVO_obj,fragmentConstantsIndex),HX_("fragmentConstantsIndex",f3,6d,48,de)},
	{::hx::fsInt,(int)offsetof(MethodVO_obj,secondaryFragmentConstantsIndex),HX_("secondaryFragmentConstantsIndex",87,a8,2f,75)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,useMipmapping),HX_("useMipmapping",21,73,ae,e7)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,useSmoothTextures),HX_("useSmoothTextures",2d,a8,41,62)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,repeatTextures),HX_("repeatTextures",b3,9d,bc,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MethodVO_obj,anisotropy),HX_("anisotropy",02,f8,8e,1b)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsProjection),HX_("needsProjection",4c,9a,5f,a5)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsView),HX_("needsView",62,28,87,08)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsNormals),HX_("needsNormals",8f,96,84,06)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsTangents),HX_("needsTangents",8b,c8,52,b3)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsUV),HX_("needsUV",fe,f2,2d,aa)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsSecondaryUV),HX_("needsSecondaryUV",78,d2,bf,f9)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsGlobalVertexPos),HX_("needsGlobalVertexPos",d0,db,09,7c)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,needsGlobalFragmentPos),HX_("needsGlobalFragmentPos",e4,32,7b,c0)},
	{::hx::fsInt,(int)offsetof(MethodVO_obj,numLights),HX_("numLights",c3,75,03,99)},
	{::hx::fsBool,(int)offsetof(MethodVO_obj,useLightFallOff),HX_("useLightFallOff",65,92,23,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MethodVO_obj_sStaticStorageInfo = 0;
#endif

static ::String MethodVO_obj_sMemberFields[] = {
	HX_("vertexData",ae,df,1f,d3),
	HX_("fragmentData",1a,0a,16,06),
	HX_("texturesIndex",ba,e8,cf,aa),
	HX_("secondaryTexturesIndex",a6,50,8a,e7),
	HX_("vertexConstantsIndex",87,84,64,40),
	HX_("secondaryVertexConstantsIndex",1b,32,56,75),
	HX_("fragmentConstantsIndex",f3,6d,48,de),
	HX_("secondaryFragmentConstantsIndex",87,a8,2f,75),
	HX_("useMipmapping",21,73,ae,e7),
	HX_("useSmoothTextures",2d,a8,41,62),
	HX_("repeatTextures",b3,9d,bc,82),
	HX_("anisotropy",02,f8,8e,1b),
	HX_("needsProjection",4c,9a,5f,a5),
	HX_("needsView",62,28,87,08),
	HX_("needsNormals",8f,96,84,06),
	HX_("needsTangents",8b,c8,52,b3),
	HX_("needsUV",fe,f2,2d,aa),
	HX_("needsSecondaryUV",78,d2,bf,f9),
	HX_("needsGlobalVertexPos",d0,db,09,7c),
	HX_("needsGlobalFragmentPos",e4,32,7b,c0),
	HX_("numLights",c3,75,03,99),
	HX_("useLightFallOff",65,92,23,09),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

::hx::Class MethodVO_obj::__mClass;

void MethodVO_obj::__register()
{
	MethodVO_obj _hx_dummy;
	MethodVO_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.MethodVO",07,cd,d3,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MethodVO_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MethodVO_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MethodVO_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MethodVO_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
