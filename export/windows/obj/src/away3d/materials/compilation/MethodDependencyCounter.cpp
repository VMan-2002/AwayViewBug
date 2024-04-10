#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_MethodDependencyCounter
#include <away3d/materials/compilation/MethodDependencyCounter.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b33da05846b4356_32_new,"away3d.materials.compilation.MethodDependencyCounter","new",0xadfad706,"away3d.materials.compilation.MethodDependencyCounter.new","away3d/materials/compilation/MethodDependencyCounter.hx",32,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_47_reset,"away3d.materials.compilation.MethodDependencyCounter","reset",0x913ac5f5,"away3d.materials.compilation.MethodDependencyCounter.reset","away3d/materials/compilation/MethodDependencyCounter.hx",47,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_64_setPositionedLights,"away3d.materials.compilation.MethodDependencyCounter","setPositionedLights",0xa74988ad,"away3d.materials.compilation.MethodDependencyCounter.setPositionedLights","away3d/materials/compilation/MethodDependencyCounter.hx",64,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_74_includeMethodVO,"away3d.materials.compilation.MethodDependencyCounter","includeMethodVO",0xa6a80648,"away3d.materials.compilation.MethodDependencyCounter.includeMethodVO","away3d/materials/compilation/MethodDependencyCounter.hx",74,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_102_get_tangentDependencies,"away3d.materials.compilation.MethodDependencyCounter","get_tangentDependencies",0x754b748b,"away3d.materials.compilation.MethodDependencyCounter.get_tangentDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",102,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_110_get_usesGlobalPosFragment,"away3d.materials.compilation.MethodDependencyCounter","get_usesGlobalPosFragment",0x420bde72,"away3d.materials.compilation.MethodDependencyCounter.get_usesGlobalPosFragment","away3d/materials/compilation/MethodDependencyCounter.hx",110,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_118_get_projectionDependencies,"away3d.materials.compilation.MethodDependencyCounter","get_projectionDependencies",0x129122fb,"away3d.materials.compilation.MethodDependencyCounter.get_projectionDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",118,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_126_get_normalDependencies,"away3d.materials.compilation.MethodDependencyCounter","get_normalDependencies",0x67e6a313,"away3d.materials.compilation.MethodDependencyCounter.get_normalDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",126,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_134_get_viewDirDependencies,"away3d.materials.compilation.MethodDependencyCounter","get_viewDirDependencies",0x5da2102e,"away3d.materials.compilation.MethodDependencyCounter.get_viewDirDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",134,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_142_get_uvDependencies,"away3d.materials.compilation.MethodDependencyCounter","get_uvDependencies",0x405058cd,"away3d.materials.compilation.MethodDependencyCounter.get_uvDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",142,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_150_get_secondaryUVDependencies,"away3d.materials.compilation.MethodDependencyCounter","get_secondaryUVDependencies",0xbff8711b,"away3d.materials.compilation.MethodDependencyCounter.get_secondaryUVDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",150,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_159_get_globalPosDependencies,"away3d.materials.compilation.MethodDependencyCounter","get_globalPosDependencies",0x8c30d6f7,"away3d.materials.compilation.MethodDependencyCounter.get_globalPosDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",159,0xa1cfb92d)
HX_LOCAL_STACK_FRAME(_hx_pos_0b33da05846b4356_166_addWorldSpaceDependencies,"away3d.materials.compilation.MethodDependencyCounter","addWorldSpaceDependencies",0x74fb6544,"away3d.materials.compilation.MethodDependencyCounter.addWorldSpaceDependencies","away3d/materials/compilation/MethodDependencyCounter.hx",166,0xa1cfb92d)
namespace away3d{
namespace materials{
namespace compilation{

void MethodDependencyCounter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_32_new)
HXDLIN(  32)		this->_usesGlobalPosFragment = false;
            	}

Dynamic MethodDependencyCounter_obj::__CreateEmpty() { return new MethodDependencyCounter_obj; }

void *MethodDependencyCounter_obj::_hx_vtable = 0;

Dynamic MethodDependencyCounter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MethodDependencyCounter_obj > _hx_result = new MethodDependencyCounter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MethodDependencyCounter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b678cda;
}

void MethodDependencyCounter_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_47_reset)
HXLINE(  48)		this->_projectionDependencies = 0;
HXLINE(  49)		this->_normalDependencies = 0;
HXLINE(  50)		this->_viewDirDependencies = 0;
HXLINE(  51)		this->_uvDependencies = 0;
HXLINE(  52)		this->_secondaryUVDependencies = 0;
HXLINE(  53)		this->_globalPosDependencies = 0;
HXLINE(  54)		this->_tangentDependencies = 0;
HXLINE(  55)		this->_usesGlobalPosFragment = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,reset,(void))

void MethodDependencyCounter_obj::setPositionedLights(int numPointLights,int lightSourceMask){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_64_setPositionedLights)
HXLINE(  65)		this->_numPointLights = numPointLights;
HXLINE(  66)		this->_lightSourceMask = lightSourceMask;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MethodDependencyCounter_obj,setPositionedLights,(void))

void MethodDependencyCounter_obj::includeMethodVO( ::away3d::materials::methods::MethodVO methodVO){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_74_includeMethodVO)
HXLINE(  75)		if (methodVO->needsProjection) {
HXLINE(  76)			++this->_projectionDependencies;
            		}
HXLINE(  77)		if (methodVO->needsGlobalVertexPos) {
HXLINE(  78)			++this->_globalPosDependencies;
HXLINE(  79)			if (methodVO->needsGlobalFragmentPos) {
HXLINE(  80)				this->_usesGlobalPosFragment = true;
            			}
            		}
            		else {
HXLINE(  81)			if (methodVO->needsGlobalFragmentPos) {
HXLINE(  82)				++this->_globalPosDependencies;
HXLINE(  83)				this->_usesGlobalPosFragment = true;
            			}
            		}
HXLINE(  85)		if (methodVO->needsNormals) {
HXLINE(  86)			++this->_normalDependencies;
            		}
HXLINE(  87)		if (methodVO->needsTangents) {
HXLINE(  88)			++this->_tangentDependencies;
            		}
HXLINE(  89)		if (methodVO->needsView) {
HXLINE(  90)			++this->_viewDirDependencies;
            		}
HXLINE(  91)		if (methodVO->needsUV) {
HXLINE(  92)			++this->_uvDependencies;
            		}
HXLINE(  93)		if (methodVO->needsSecondaryUV) {
HXLINE(  94)			++this->_secondaryUVDependencies;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MethodDependencyCounter_obj,includeMethodVO,(void))

int MethodDependencyCounter_obj::get_tangentDependencies(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_102_get_tangentDependencies)
HXDLIN( 102)		return this->_tangentDependencies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_tangentDependencies,return )

bool MethodDependencyCounter_obj::get_usesGlobalPosFragment(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_110_get_usesGlobalPosFragment)
HXDLIN( 110)		return this->_usesGlobalPosFragment;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_usesGlobalPosFragment,return )

int MethodDependencyCounter_obj::get_projectionDependencies(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_118_get_projectionDependencies)
HXDLIN( 118)		return this->_projectionDependencies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_projectionDependencies,return )

int MethodDependencyCounter_obj::get_normalDependencies(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_126_get_normalDependencies)
HXDLIN( 126)		return this->_normalDependencies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_normalDependencies,return )

int MethodDependencyCounter_obj::get_viewDirDependencies(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_134_get_viewDirDependencies)
HXDLIN( 134)		return this->_viewDirDependencies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_viewDirDependencies,return )

int MethodDependencyCounter_obj::get_uvDependencies(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_142_get_uvDependencies)
HXDLIN( 142)		return this->_uvDependencies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_uvDependencies,return )

int MethodDependencyCounter_obj::get_secondaryUVDependencies(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_150_get_secondaryUVDependencies)
HXDLIN( 150)		return this->_secondaryUVDependencies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_secondaryUVDependencies,return )

int MethodDependencyCounter_obj::get_globalPosDependencies(){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_159_get_globalPosDependencies)
HXDLIN( 159)		return this->_globalPosDependencies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MethodDependencyCounter_obj,get_globalPosDependencies,return )

void MethodDependencyCounter_obj::addWorldSpaceDependencies(bool fragmentLights){
            	HX_STACKFRAME(&_hx_pos_0b33da05846b4356_166_addWorldSpaceDependencies)
HXLINE( 167)		if ((this->_viewDirDependencies > 0)) {
HXLINE( 168)			++this->_globalPosDependencies;
            		}
HXLINE( 170)		bool _hx_tmp;
HXDLIN( 170)		if ((this->_numPointLights > 0)) {
HXLINE( 170)			_hx_tmp = ((this->_lightSourceMask & 1) != 0);
            		}
            		else {
HXLINE( 170)			_hx_tmp = false;
            		}
HXDLIN( 170)		if (_hx_tmp) {
HXLINE( 171)			++this->_globalPosDependencies;
HXLINE( 172)			if (fragmentLights) {
HXLINE( 173)				this->_usesGlobalPosFragment = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MethodDependencyCounter_obj,addWorldSpaceDependencies,(void))


::hx::ObjectPtr< MethodDependencyCounter_obj > MethodDependencyCounter_obj::__new() {
	::hx::ObjectPtr< MethodDependencyCounter_obj > __this = new MethodDependencyCounter_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MethodDependencyCounter_obj > MethodDependencyCounter_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MethodDependencyCounter_obj *__this = (MethodDependencyCounter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MethodDependencyCounter_obj), false, "away3d.materials.compilation.MethodDependencyCounter"));
	*(void **)__this = MethodDependencyCounter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MethodDependencyCounter_obj::MethodDependencyCounter_obj()
{
}

::hx::Val MethodDependencyCounter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"uvDependencies") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvDependencies() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_uvDependencies") ) { return ::hx::Val( _uvDependencies ); }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return ::hx::Val( _numPointLights ); }
		if (HX_FIELD_EQ(inName,"includeMethodVO") ) { return ::hx::Val( includeMethodVO_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lightSourceMask") ) { return ::hx::Val( _lightSourceMask ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"normalDependencies") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalDependencies() ); }
		if (HX_FIELD_EQ(inName,"get_uvDependencies") ) { return ::hx::Val( get_uvDependencies_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tangentDependencies") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tangentDependencies() ); }
		if (HX_FIELD_EQ(inName,"viewDirDependencies") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewDirDependencies() ); }
		if (HX_FIELD_EQ(inName,"_normalDependencies") ) { return ::hx::Val( _normalDependencies ); }
		if (HX_FIELD_EQ(inName,"setPositionedLights") ) { return ::hx::Val( setPositionedLights_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_viewDirDependencies") ) { return ::hx::Val( _viewDirDependencies ); }
		if (HX_FIELD_EQ(inName,"_tangentDependencies") ) { return ::hx::Val( _tangentDependencies ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"usesGlobalPosFragment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_usesGlobalPosFragment() ); }
		if (HX_FIELD_EQ(inName,"globalPosDependencies") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_globalPosDependencies() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"projectionDependencies") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_projectionDependencies() ); }
		if (HX_FIELD_EQ(inName,"_globalPosDependencies") ) { return ::hx::Val( _globalPosDependencies ); }
		if (HX_FIELD_EQ(inName,"_usesGlobalPosFragment") ) { return ::hx::Val( _usesGlobalPosFragment ); }
		if (HX_FIELD_EQ(inName,"get_normalDependencies") ) { return ::hx::Val( get_normalDependencies_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"secondaryUVDependencies") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryUVDependencies() ); }
		if (HX_FIELD_EQ(inName,"_projectionDependencies") ) { return ::hx::Val( _projectionDependencies ); }
		if (HX_FIELD_EQ(inName,"get_tangentDependencies") ) { return ::hx::Val( get_tangentDependencies_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_viewDirDependencies") ) { return ::hx::Val( get_viewDirDependencies_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_secondaryUVDependencies") ) { return ::hx::Val( _secondaryUVDependencies ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_usesGlobalPosFragment") ) { return ::hx::Val( get_usesGlobalPosFragment_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_globalPosDependencies") ) { return ::hx::Val( get_globalPosDependencies_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWorldSpaceDependencies") ) { return ::hx::Val( addWorldSpaceDependencies_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_projectionDependencies") ) { return ::hx::Val( get_projectionDependencies_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"get_secondaryUVDependencies") ) { return ::hx::Val( get_secondaryUVDependencies_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MethodDependencyCounter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_uvDependencies") ) { _uvDependencies=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lightSourceMask") ) { _lightSourceMask=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_normalDependencies") ) { _normalDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_viewDirDependencies") ) { _viewDirDependencies=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tangentDependencies") ) { _tangentDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_globalPosDependencies") ) { _globalPosDependencies=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_usesGlobalPosFragment") ) { _usesGlobalPosFragment=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_projectionDependencies") ) { _projectionDependencies=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_secondaryUVDependencies") ) { _secondaryUVDependencies=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodDependencyCounter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tangentDependencies",4e,50,43,28));
	outFields->push(HX_("usesGlobalPosFragment",f5,70,84,87));
	outFields->push(HX_("projectionDependencies",18,c3,98,96));
	outFields->push(HX_("normalDependencies",b0,b0,7a,76));
	outFields->push(HX_("viewDirDependencies",f1,eb,99,10));
	outFields->push(HX_("uvDependencies",ea,13,4c,94));
	outFields->push(HX_("secondaryUVDependencies",5e,ea,9c,c2));
	outFields->push(HX_("globalPosDependencies",7a,69,a9,d1));
	outFields->push(HX_("_projectionDependencies",b7,42,71,29));
	outFields->push(HX_("_normalDependencies",cf,34,55,56));
	outFields->push(HX_("_viewDirDependencies",f2,02,f3,0f));
	outFields->push(HX_("_uvDependencies",89,5c,ac,dd));
	outFields->push(HX_("_secondaryUVDependencies",df,15,34,ad));
	outFields->push(HX_("_globalPosDependencies",bb,02,b7,2a));
	outFields->push(HX_("_tangentDependencies",4f,67,9c,27));
	outFields->push(HX_("_usesGlobalPosFragment",36,0a,92,e0));
	outFields->push(HX_("_numPointLights",46,2b,22,82));
	outFields->push(HX_("_lightSourceMask",5e,a6,88,30));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MethodDependencyCounter_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_projectionDependencies),HX_("_projectionDependencies",b7,42,71,29)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_normalDependencies),HX_("_normalDependencies",cf,34,55,56)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_viewDirDependencies),HX_("_viewDirDependencies",f2,02,f3,0f)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_uvDependencies),HX_("_uvDependencies",89,5c,ac,dd)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_secondaryUVDependencies),HX_("_secondaryUVDependencies",df,15,34,ad)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_globalPosDependencies),HX_("_globalPosDependencies",bb,02,b7,2a)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_tangentDependencies),HX_("_tangentDependencies",4f,67,9c,27)},
	{::hx::fsBool,(int)offsetof(MethodDependencyCounter_obj,_usesGlobalPosFragment),HX_("_usesGlobalPosFragment",36,0a,92,e0)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_numPointLights),HX_("_numPointLights",46,2b,22,82)},
	{::hx::fsInt,(int)offsetof(MethodDependencyCounter_obj,_lightSourceMask),HX_("_lightSourceMask",5e,a6,88,30)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MethodDependencyCounter_obj_sStaticStorageInfo = 0;
#endif

static ::String MethodDependencyCounter_obj_sMemberFields[] = {
	HX_("_projectionDependencies",b7,42,71,29),
	HX_("_normalDependencies",cf,34,55,56),
	HX_("_viewDirDependencies",f2,02,f3,0f),
	HX_("_uvDependencies",89,5c,ac,dd),
	HX_("_secondaryUVDependencies",df,15,34,ad),
	HX_("_globalPosDependencies",bb,02,b7,2a),
	HX_("_tangentDependencies",4f,67,9c,27),
	HX_("_usesGlobalPosFragment",36,0a,92,e0),
	HX_("_numPointLights",46,2b,22,82),
	HX_("_lightSourceMask",5e,a6,88,30),
	HX_("reset",cf,49,c8,e6),
	HX_("setPositionedLights",07,56,9c,5a),
	HX_("includeMethodVO",a2,9e,be,dc),
	HX_("get_tangentDependencies",e5,f6,98,30),
	HX_("get_usesGlobalPosFragment",4c,2b,82,8d),
	HX_("get_projectionDependencies",e1,14,9e,ce),
	HX_("get_normalDependencies",f9,29,0f,d0),
	HX_("get_viewDirDependencies",88,92,ef,18),
	HX_("get_uvDependencies",b3,f4,e5,2f),
	HX_("get_secondaryUVDependencies",75,28,3f,8f),
	HX_("get_globalPosDependencies",d1,23,a7,d7),
	HX_("addWorldSpaceDependencies",1e,b2,71,c0),
	::String(null()) };

::hx::Class MethodDependencyCounter_obj::__mClass;

void MethodDependencyCounter_obj::__register()
{
	MethodDependencyCounter_obj _hx_dummy;
	MethodDependencyCounter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.compilation.MethodDependencyCounter",14,9c,3d,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MethodDependencyCounter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MethodDependencyCounter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MethodDependencyCounter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MethodDependencyCounter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
