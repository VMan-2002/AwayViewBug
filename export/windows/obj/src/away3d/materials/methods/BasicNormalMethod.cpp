#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterData
#include <away3d/materials/compilation/ShaderRegisterData.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicNormalMethod
#include <away3d/materials/methods/BasicNormalMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_30_new,"away3d.materials.methods.BasicNormalMethod","new",0xb7de335b,"away3d.materials.methods.BasicNormalMethod.new","away3d/materials/methods/BasicNormalMethod.hx",30,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_38_initVO,"away3d.materials.methods.BasicNormalMethod","initVO",0x1ed3d62e,"away3d.materials.methods.BasicNormalMethod.initVO","away3d/materials/methods/BasicNormalMethod.hx",38,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_46_get_tangentSpace,"away3d.materials.methods.BasicNormalMethod","get_tangentSpace",0x1beefe6f,"away3d.materials.methods.BasicNormalMethod.get_tangentSpace","away3d/materials/methods/BasicNormalMethod.hx",46,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_55_get_hasOutput,"away3d.materials.methods.BasicNormalMethod","get_hasOutput",0xd5f9a08d,"away3d.materials.methods.BasicNormalMethod.get_hasOutput","away3d/materials/methods/BasicNormalMethod.hx",55,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_63_copyFrom,"away3d.materials.methods.BasicNormalMethod","copyFrom",0xd186fae4,"away3d.materials.methods.BasicNormalMethod.copyFrom","away3d/materials/methods/BasicNormalMethod.hx",63,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_71_get_normalMap,"away3d.materials.methods.BasicNormalMethod","get_normalMap",0x341bc147,"away3d.materials.methods.BasicNormalMethod.get_normalMap","away3d/materials/methods/BasicNormalMethod.hx",71,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_75_set_normalMap,"away3d.materials.methods.BasicNormalMethod","set_normalMap",0x7921a353,"away3d.materials.methods.BasicNormalMethod.set_normalMap","away3d/materials/methods/BasicNormalMethod.hx",75,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_89_cleanCompilationData,"away3d.materials.methods.BasicNormalMethod","cleanCompilationData",0x4b7fc1a9,"away3d.materials.methods.BasicNormalMethod.cleanCompilationData","away3d/materials/methods/BasicNormalMethod.hx",89,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_99_dispose,"away3d.materials.methods.BasicNormalMethod","dispose",0xca437d1a,"away3d.materials.methods.BasicNormalMethod.dispose","away3d/materials/methods/BasicNormalMethod.hx",99,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_109_activate,"away3d.materials.methods.BasicNormalMethod","activate",0xeed20ad8,"away3d.materials.methods.BasicNormalMethod.activate","away3d/materials/methods/BasicNormalMethod.hx",109,0xaca78138)
HX_LOCAL_STACK_FRAME(_hx_pos_823e7fd8b1efbdef_124_getFragmentCode,"away3d.materials.methods.BasicNormalMethod","getFragmentCode",0x1ab22a4e,"away3d.materials.methods.BasicNormalMethod.getFragmentCode","away3d/materials/methods/BasicNormalMethod.hx",124,0xaca78138)
namespace away3d{
namespace materials{
namespace methods{

void BasicNormalMethod_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_30_new)
HXDLIN(  30)		super::__construct();
            	}

Dynamic BasicNormalMethod_obj::__CreateEmpty() { return new BasicNormalMethod_obj; }

void *BasicNormalMethod_obj::_hx_vtable = 0;

Dynamic BasicNormalMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicNormalMethod_obj > _hx_result = new BasicNormalMethod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BasicNormalMethod_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x06572da9) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x06572da9;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x12886923 || inClassId==(int)0x37f46043;
	}
}

void BasicNormalMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_38_initVO)
HXDLIN(  38)		vo->needsUV = ::hx::IsNotNull( this->_texture );
            	}


bool BasicNormalMethod_obj::get_tangentSpace(){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_46_get_tangentSpace)
HXDLIN(  46)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicNormalMethod_obj,get_tangentSpace,return )

bool BasicNormalMethod_obj::get_hasOutput(){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_55_get_hasOutput)
HXDLIN(  55)		return this->_useTexture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicNormalMethod_obj,get_hasOutput,return )

void BasicNormalMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_63_copyFrom)
HXDLIN(  63)		this->set_normalMap(::hx::TCast<  ::away3d::materials::methods::BasicNormalMethod >::cast(method)->get_normalMap());
            	}


 ::away3d::textures::Texture2DBase BasicNormalMethod_obj::get_normalMap(){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_71_get_normalMap)
HXDLIN(  71)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicNormalMethod_obj,get_normalMap,return )

 ::away3d::textures::Texture2DBase BasicNormalMethod_obj::set_normalMap( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_75_set_normalMap)
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if ((::hx::IsNotNull( value ) == this->_useTexture)) {
HXLINE(  77)			bool _hx_tmp1;
HXDLIN(  77)			if (::hx::IsNotNull( value )) {
HXLINE(  77)				_hx_tmp1 = ::hx::IsNotNull( this->_texture );
            			}
            			else {
HXLINE(  77)				_hx_tmp1 = false;
            			}
HXDLIN(  77)			if (_hx_tmp1) {
HXLINE(  77)				bool _hx_tmp1 = value->get_hasMipMaps();
HXDLIN(  77)				if ((_hx_tmp1 == this->_texture->get_hasMipMaps())) {
HXLINE(  77)					 ::Dynamic _hx_tmp1 = value->get_format();
HXLINE(  76)					_hx_tmp = ::hx::IsNotEq( _hx_tmp1,this->_texture->get_format() );
            				}
            				else {
HXLINE(  76)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  76)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  76)			_hx_tmp = true;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  78)			this->invalidateShaderProgram();
            		}
HXLINE(  80)		this->_useTexture = ::hx::IsNotNull( value );
HXLINE(  81)		this->_texture = value;
HXLINE(  82)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicNormalMethod_obj,set_normalMap,return )

void BasicNormalMethod_obj::cleanCompilationData(){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_89_cleanCompilationData)
HXLINE(  90)		this->super::cleanCompilationData();
HXLINE(  91)		this->_normalTextureRegister = null();
            	}


void BasicNormalMethod_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_99_dispose)
HXDLIN(  99)		if (::hx::IsNotNull( this->_texture )) {
HXLINE( 100)			this->_texture = null();
            		}
            	}


void BasicNormalMethod_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_109_activate)
HXDLIN( 109)		if ((vo->texturesIndex >= 0)) {
HXLINE( 111)			 ::openfl::display3D::Context3D stage3DProxy1 = stage3DProxy->_context3D;
HXLINE( 112)			int vo1 = vo->texturesIndex;
HXDLIN( 112)			 ::Dynamic _hx_tmp;
HXDLIN( 112)			if (vo->repeatTextures) {
HXLINE( 112)				_hx_tmp = 2;
            			}
            			else {
HXLINE( 112)				_hx_tmp = 0;
            			}
HXLINE( 113)			 ::Dynamic _hx_tmp1 = this->getSmoothingFilter(vo->useSmoothTextures,vo->anisotropy);
HXLINE( 114)			 ::Dynamic _hx_tmp2;
HXDLIN( 114)			if (vo->useMipmapping) {
HXLINE( 114)				_hx_tmp2 = 0;
            			}
            			else {
HXLINE( 114)				_hx_tmp2 = 2;
            			}
HXLINE( 111)			stage3DProxy1->setSamplerStateAt(vo1,_hx_tmp,_hx_tmp1,_hx_tmp2);
HXLINE( 116)			 ::openfl::display3D::Context3D stage3DProxy2 = stage3DProxy->_context3D;
HXDLIN( 116)			int vo2 = vo->texturesIndex;
HXDLIN( 116)			stage3DProxy2->setTextureAt(vo2,this->_texture->getTextureForStage3D(stage3DProxy));
            		}
            	}


::String BasicNormalMethod_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_823e7fd8b1efbdef_124_getFragmentCode)
HXLINE( 125)		this->_normalTextureRegister = regCache->getFreeTextureReg();
HXLINE( 126)		vo->texturesIndex = this->_normalTextureRegister->get_index();
HXLINE( 127)		::String _hx_tmp = (this->getTex2DSampleCode(vo,targetReg,this->_normalTextureRegister,this->_texture,null(),null()) + HX_("sub ",a0,a6,5c,4c));
HXDLIN( 127)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 127)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 127)		::String _hx_tmp3 = (((_hx_tmp2 + ::Std_obj::string(this->_sharedRegisters->commons)) + HX_(".xxx\t\n",6b,e6,2c,cc)) + HX_("nrm ",57,58,0c,49));
HXDLIN( 127)		::String _hx_tmp4 = ((_hx_tmp3 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 127)		return ((_hx_tmp4 + ::Std_obj::string(targetReg)) + HX_(".xyz\t\t\t\t\t\t\t\n",6c,1b,b9,e9));
            	}


HX_DEFINE_DYNAMIC_FUNC3(BasicNormalMethod_obj,getFragmentCode,return )


::hx::ObjectPtr< BasicNormalMethod_obj > BasicNormalMethod_obj::__new() {
	::hx::ObjectPtr< BasicNormalMethod_obj > __this = new BasicNormalMethod_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BasicNormalMethod_obj > BasicNormalMethod_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BasicNormalMethod_obj *__this = (BasicNormalMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicNormalMethod_obj), true, "away3d.materials.methods.BasicNormalMethod"));
	*(void **)__this = BasicNormalMethod_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BasicNormalMethod_obj::BasicNormalMethod_obj()
{
}

void BasicNormalMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicNormalMethod);
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	HX_MARK_MEMBER_NAME(_normalTextureRegister,"_normalTextureRegister");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicNormalMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	HX_VISIT_MEMBER_NAME(_normalTextureRegister,"_normalTextureRegister");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicNormalMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return ::hx::Val( initVO_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasOutput") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasOutput() ); }
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_normalMap() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return ::hx::Val( _useTexture ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tangentSpace") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tangentSpace() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_hasOutput") ) { return ::hx::Val( get_hasOutput_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_normalMap") ) { return ::hx::Val( get_normalMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_normalMap") ) { return ::hx::Val( set_normalMap_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_tangentSpace") ) { return ::hx::Val( get_tangentSpace_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return ::hx::Val( cleanCompilationData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_normalTextureRegister") ) { return ::hx::Val( _normalTextureRegister ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicNormalMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_normalMap(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_normalTextureRegister") ) { _normalTextureRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicNormalMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tangentSpace",c1,f5,3e,03));
	outFields->push(HX_("hasOutput",fb,c1,69,4d));
	outFields->push(HX_("normalMap",b5,e2,8b,ab));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("_useTexture",73,b8,1d,74));
	outFields->push(HX_("_normalTextureRegister",38,b1,b5,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicNormalMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(BasicNormalMethod_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsBool,(int)offsetof(BasicNormalMethod_obj,_useTexture),HX_("_useTexture",73,b8,1d,74)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicNormalMethod_obj,_normalTextureRegister),HX_("_normalTextureRegister",38,b1,b5,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicNormalMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicNormalMethod_obj_sMemberFields[] = {
	HX_("_texture",5c,22,99,d8),
	HX_("_useTexture",73,b8,1d,74),
	HX_("_normalTextureRegister",38,b1,b5,69),
	HX_("initVO",49,6a,4c,97),
	HX_("get_tangentSpace",4a,e2,dd,07),
	HX_("get_hasOutput",d2,95,cd,0e),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("get_normalMap",8c,b6,ef,6c),
	HX_("set_normalMap",98,98,f5,b1),
	HX_("cleanCompilationData",04,2f,dd,d4),
	HX_("dispose",9f,80,4c,bb),
	HX_("activate",b3,1b,ac,e5),
	HX_("getFragmentCode",d3,ba,61,28),
	::String(null()) };

::hx::Class BasicNormalMethod_obj::__mClass;

void BasicNormalMethod_obj::__register()
{
	BasicNormalMethod_obj _hx_dummy;
	BasicNormalMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.BasicNormalMethod",e9,e9,9c,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicNormalMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicNormalMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicNormalMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicNormalMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
