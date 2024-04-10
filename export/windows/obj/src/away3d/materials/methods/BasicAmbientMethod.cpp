#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
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
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
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
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#include <away3d/materials/methods/BasicAmbientMethod.h>
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
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_18_new,"away3d.materials.methods.BasicAmbientMethod","new",0x5330bd6a,"away3d.materials.methods.BasicAmbientMethod.new","away3d/materials/methods/BasicAmbientMethod.hx",18,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_51_initVO,"away3d.materials.methods.BasicAmbientMethod","initVO",0x241dbf7f,"away3d.materials.methods.BasicAmbientMethod.initVO","away3d/materials/methods/BasicAmbientMethod.hx",51,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_59_initConstants,"away3d.materials.methods.BasicAmbientMethod","initConstants",0xaf4296e9,"away3d.materials.methods.BasicAmbientMethod.initConstants","away3d/materials/methods/BasicAmbientMethod.hx",59,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_67_get_ambient,"away3d.materials.methods.BasicAmbientMethod","get_ambient",0xd9fbff39,"away3d.materials.methods.BasicAmbientMethod.get_ambient","away3d/materials/methods/BasicAmbientMethod.hx",67,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_71_set_ambient,"away3d.materials.methods.BasicAmbientMethod","set_ambient",0xe4690645,"away3d.materials.methods.BasicAmbientMethod.set_ambient","away3d/materials/methods/BasicAmbientMethod.hx",71,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_81_get_ambientColor,"away3d.materials.methods.BasicAmbientMethod","get_ambientColor",0xc109136a,"away3d.materials.methods.BasicAmbientMethod.get_ambientColor","away3d/materials/methods/BasicAmbientMethod.hx",81,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_85_set_ambientColor,"away3d.materials.methods.BasicAmbientMethod","set_ambientColor",0x174b00de,"away3d.materials.methods.BasicAmbientMethod.set_ambientColor","away3d/materials/methods/BasicAmbientMethod.hx",85,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_95_get_texture,"away3d.materials.methods.BasicAmbientMethod","get_texture",0x6f5b2ffc,"away3d.materials.methods.BasicAmbientMethod.get_texture","away3d/materials/methods/BasicAmbientMethod.hx",95,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_99_set_texture,"away3d.materials.methods.BasicAmbientMethod","set_texture",0x79c83708,"away3d.materials.methods.BasicAmbientMethod.set_texture","away3d/materials/methods/BasicAmbientMethod.hx",99,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_113_copyFrom,"away3d.materials.methods.BasicAmbientMethod","copyFrom",0x2c1a9a75,"away3d.materials.methods.BasicAmbientMethod.copyFrom","away3d/materials/methods/BasicAmbientMethod.hx",113,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_123_cleanCompilationData,"away3d.materials.methods.BasicAmbientMethod","cleanCompilationData",0xc68cf6ba,"away3d.materials.methods.BasicAmbientMethod.cleanCompilationData","away3d/materials/methods/BasicAmbientMethod.hx",123,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_132_getFragmentCode,"away3d.materials.methods.BasicAmbientMethod","getFragmentCode",0x42f30edd,"away3d.materials.methods.BasicAmbientMethod.getFragmentCode","away3d/materials/methods/BasicAmbientMethod.hx",132,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_155_activate,"away3d.materials.methods.BasicAmbientMethod","activate",0x4965aa69,"away3d.materials.methods.BasicAmbientMethod.activate","away3d/materials/methods/BasicAmbientMethod.hx",155,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_170_updateAmbient,"away3d.materials.methods.BasicAmbientMethod","updateAmbient",0xc4c75a99,"away3d.materials.methods.BasicAmbientMethod.updateAmbient","away3d/materials/methods/BasicAmbientMethod.hx",170,0xaf953723)
HX_LOCAL_STACK_FRAME(_hx_pos_0c002c8c2d3be2d5_180_setRenderState,"away3d.materials.methods.BasicAmbientMethod","setRenderState",0xe415598f,"away3d.materials.methods.BasicAmbientMethod.setRenderState","away3d/materials/methods/BasicAmbientMethod.hx",180,0xaf953723)
namespace away3d{
namespace materials{
namespace methods{

void BasicAmbientMethod_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_18_new)
HXLINE(  36)		this->_lightAmbientB = ((Float)0);
HXLINE(  35)		this->_lightAmbientG = ((Float)0);
HXLINE(  34)		this->_lightAmbientR = ((Float)0);
HXLINE(  33)		this->_ambient = ((Float)1);
HXLINE(  32)		this->_ambientB = ((Float)0);
HXLINE(  31)		this->_ambientG = ((Float)0);
HXLINE(  30)		this->_ambientR = ((Float)0);
HXLINE(  29)		this->_ambientColor = 16777215;
HXLINE(  43)		super::__construct();
            	}

Dynamic BasicAmbientMethod_obj::__CreateEmpty() { return new BasicAmbientMethod_obj; }

void *BasicAmbientMethod_obj::_hx_vtable = 0;

Dynamic BasicAmbientMethod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicAmbientMethod_obj > _hx_result = new BasicAmbientMethod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BasicAmbientMethod_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12886923) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x12886923;
		}
	} else {
		return inClassId==(int)0x37f46043 || inClassId==(int)0x3e0c53f0;
	}
}

void BasicAmbientMethod_obj::initVO( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_51_initVO)
HXDLIN(  51)		vo->needsUV = this->_useTexture;
            	}


void BasicAmbientMethod_obj::initConstants( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_59_initConstants)
HXDLIN(  59)		vo->fragmentData->set((vo->fragmentConstantsIndex + 3),( (Float)(1) ));
            	}


Float BasicAmbientMethod_obj::get_ambient(){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_67_get_ambient)
HXDLIN(  67)		return this->_ambient;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,get_ambient,return )

Float BasicAmbientMethod_obj::set_ambient(Float value){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_71_set_ambient)
HXLINE(  72)		this->_ambient = value;
HXLINE(  73)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicAmbientMethod_obj,set_ambient,return )

int BasicAmbientMethod_obj::get_ambientColor(){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_81_get_ambientColor)
HXDLIN(  81)		return this->_ambientColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,get_ambientColor,return )

int BasicAmbientMethod_obj::set_ambientColor(int value){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_85_set_ambientColor)
HXLINE(  86)		this->_ambientColor = value;
HXLINE(  87)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicAmbientMethod_obj,set_ambientColor,return )

 ::away3d::textures::Texture2DBase BasicAmbientMethod_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_95_get_texture)
HXDLIN(  95)		return this->_texture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,get_texture,return )

 ::away3d::textures::Texture2DBase BasicAmbientMethod_obj::set_texture( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_99_set_texture)
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		if ((::hx::IsNotNull( value ) == this->_useTexture)) {
HXLINE( 101)			bool _hx_tmp1;
HXDLIN( 101)			if (::hx::IsNotNull( value )) {
HXLINE( 101)				_hx_tmp1 = ::hx::IsNotNull( this->_texture );
            			}
            			else {
HXLINE( 101)				_hx_tmp1 = false;
            			}
HXDLIN( 101)			if (_hx_tmp1) {
HXLINE( 101)				bool _hx_tmp1 = value->get_hasMipMaps();
HXDLIN( 101)				if ((_hx_tmp1 == this->_texture->get_hasMipMaps())) {
HXLINE( 101)					 ::Dynamic _hx_tmp1 = value->get_format();
HXLINE( 100)					_hx_tmp = ::hx::IsNotEq( _hx_tmp1,this->_texture->get_format() );
            				}
            				else {
HXLINE( 100)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 100)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 100)			_hx_tmp = true;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 102)			this->invalidateShaderProgram();
            		}
HXLINE( 104)		this->_useTexture = ::hx::IsNotNull( value );
HXLINE( 105)		this->_texture = value;
HXLINE( 106)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicAmbientMethod_obj,set_texture,return )

void BasicAmbientMethod_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_113_copyFrom)
HXLINE( 114)		 ::away3d::materials::methods::BasicAmbientMethod diff = ::hx::TCast<  ::away3d::materials::methods::BasicAmbientMethod >::cast(method);
HXLINE( 115)		this->set_ambient(diff->get_ambient());
HXLINE( 116)		this->set_ambientColor(diff->get_ambientColor());
            	}


void BasicAmbientMethod_obj::cleanCompilationData(){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_123_cleanCompilationData)
HXLINE( 124)		this->super::cleanCompilationData();
HXLINE( 125)		this->_ambientInputRegister = null();
            	}


::String BasicAmbientMethod_obj::getFragmentCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache, ::away3d::materials::compilation::ShaderRegisterElement targetReg){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_132_getFragmentCode)
HXLINE( 133)		::String code = HX_("",00,00,00,00);
HXLINE( 135)		if (this->_useTexture) {
HXLINE( 136)			this->_ambientInputRegister = regCache->getFreeTextureReg();
HXLINE( 137)			vo->texturesIndex = this->_ambientInputRegister->get_index();
HXLINE( 138)			::String code1 = (this->getTex2DSampleCode(vo,targetReg,this->_ambientInputRegister,this->_texture,null(),null()) + HX_("div ",af,69,69,42));
HXDLIN( 138)			::String code2 = ((code1 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 138)			::String code3 = ((code2 + ::Std_obj::string(targetReg)) + HX_(".xyz, ",1f,c0,d7,cc));
HXDLIN( 138)			code = (code + ((code3 + ::Std_obj::string(targetReg)) + HX_(".w\n",61,4f,23,00)));
            		}
            		else {
HXLINE( 142)			this->_ambientInputRegister = regCache->getFreeFragmentConstant();
HXLINE( 143)			vo->fragmentConstantsIndex = (this->_ambientInputRegister->get_index() * 4);
HXLINE( 144)			::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN( 144)			code = (code + ((code1 + ::Std_obj::string(this->_ambientInputRegister)) + HX_("\n",0a,00,00,00)));
            		}
HXLINE( 147)		return code;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BasicAmbientMethod_obj,getFragmentCode,return )

void BasicAmbientMethod_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_155_activate)
HXDLIN( 155)		if (this->_useTexture) {
HXLINE( 157)			 ::openfl::display3D::Context3D _hx_tmp = stage3DProxy->get_context3D();
HXLINE( 158)			int vo1 = vo->texturesIndex;
HXDLIN( 158)			 ::Dynamic _hx_tmp1;
HXDLIN( 158)			if (vo->repeatTextures) {
HXLINE( 158)				_hx_tmp1 = 2;
            			}
            			else {
HXLINE( 158)				_hx_tmp1 = 0;
            			}
HXLINE( 159)			 ::Dynamic _hx_tmp2 = this->getSmoothingFilter(vo->useSmoothTextures,vo->anisotropy);
HXLINE( 160)			 ::Dynamic _hx_tmp3;
HXDLIN( 160)			if (vo->useMipmapping) {
HXLINE( 160)				_hx_tmp3 = 0;
            			}
            			else {
HXLINE( 160)				_hx_tmp3 = 2;
            			}
HXLINE( 157)			_hx_tmp->setSamplerStateAt(vo1,_hx_tmp1,_hx_tmp2,_hx_tmp3);
HXLINE( 162)			 ::openfl::display3D::Context3D stage3DProxy1 = stage3DProxy->_context3D;
HXDLIN( 162)			int vo2 = vo->texturesIndex;
HXDLIN( 162)			stage3DProxy1->setTextureAt(vo2,this->_texture->getTextureForStage3D(stage3DProxy));
            		}
            	}


void BasicAmbientMethod_obj::updateAmbient(){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_170_updateAmbient)
HXLINE( 171)		this->_ambientR = (((( (Float)(((this->_ambientColor >> 16) & 255)) ) / ( (Float)(255) )) * this->_ambient) * this->_lightAmbientR);
HXLINE( 172)		this->_ambientG = (((( (Float)(((this->_ambientColor >> 8) & 255)) ) / ( (Float)(255) )) * this->_ambient) * this->_lightAmbientG);
HXLINE( 173)		this->_ambientB = (((( (Float)((this->_ambientColor & 255)) ) / ( (Float)(255) )) * this->_ambient) * this->_lightAmbientB);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicAmbientMethod_obj,updateAmbient,(void))

void BasicAmbientMethod_obj::setRenderState( ::away3d::materials::methods::MethodVO vo,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_0c002c8c2d3be2d5_180_setRenderState)
HXLINE( 181)		this->updateAmbient();
HXLINE( 183)		if (!(this->_useTexture)) {
HXLINE( 184)			int index = vo->fragmentConstantsIndex;
HXLINE( 185)			 ::openfl::_Vector::FloatVector data = vo->fragmentData;
HXLINE( 186)			data->set(index,this->_ambientR);
HXLINE( 187)			data->set((index + 1),this->_ambientG);
HXLINE( 188)			data->set((index + 2),this->_ambientB);
            		}
            	}



::hx::ObjectPtr< BasicAmbientMethod_obj > BasicAmbientMethod_obj::__new() {
	::hx::ObjectPtr< BasicAmbientMethod_obj > __this = new BasicAmbientMethod_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BasicAmbientMethod_obj > BasicAmbientMethod_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BasicAmbientMethod_obj *__this = (BasicAmbientMethod_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicAmbientMethod_obj), true, "away3d.materials.methods.BasicAmbientMethod"));
	*(void **)__this = BasicAmbientMethod_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BasicAmbientMethod_obj::BasicAmbientMethod_obj()
{
}

void BasicAmbientMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicAmbientMethod);
	HX_MARK_MEMBER_NAME(_useTexture,"_useTexture");
	HX_MARK_MEMBER_NAME(_texture,"_texture");
	HX_MARK_MEMBER_NAME(_ambientInputRegister,"_ambientInputRegister");
	HX_MARK_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_MARK_MEMBER_NAME(_ambientR,"_ambientR");
	HX_MARK_MEMBER_NAME(_ambientG,"_ambientG");
	HX_MARK_MEMBER_NAME(_ambientB,"_ambientB");
	HX_MARK_MEMBER_NAME(_ambient,"_ambient");
	HX_MARK_MEMBER_NAME(_lightAmbientR,"_lightAmbientR");
	HX_MARK_MEMBER_NAME(_lightAmbientG,"_lightAmbientG");
	HX_MARK_MEMBER_NAME(_lightAmbientB,"_lightAmbientB");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicAmbientMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_useTexture,"_useTexture");
	HX_VISIT_MEMBER_NAME(_texture,"_texture");
	HX_VISIT_MEMBER_NAME(_ambientInputRegister,"_ambientInputRegister");
	HX_VISIT_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_VISIT_MEMBER_NAME(_ambientR,"_ambientR");
	HX_VISIT_MEMBER_NAME(_ambientG,"_ambientG");
	HX_VISIT_MEMBER_NAME(_ambientB,"_ambientB");
	HX_VISIT_MEMBER_NAME(_ambient,"_ambient");
	HX_VISIT_MEMBER_NAME(_lightAmbientR,"_lightAmbientR");
	HX_VISIT_MEMBER_NAME(_lightAmbientG,"_lightAmbientG");
	HX_VISIT_MEMBER_NAME(_lightAmbientB,"_lightAmbientB");
	 ::away3d::materials::methods::ShadingMethodBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicAmbientMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"initVO") ) { return ::hx::Val( initVO_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambient() ); }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { return ::hx::Val( _texture ); }
		if (HX_FIELD_EQ(inName,"_ambient") ) { return ::hx::Val( _ambient ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ambientR") ) { return ::hx::Val( _ambientR ); }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { return ::hx::Val( _ambientG ); }
		if (HX_FIELD_EQ(inName,"_ambientB") ) { return ::hx::Val( _ambientB ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { return ::hx::Val( _useTexture ); }
		if (HX_FIELD_EQ(inName,"get_ambient") ) { return ::hx::Val( get_ambient_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambient") ) { return ::hx::Val( set_ambient_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambientColor() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { return ::hx::Val( _ambientColor ); }
		if (HX_FIELD_EQ(inName,"initConstants") ) { return ::hx::Val( initConstants_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateAmbient") ) { return ::hx::Val( updateAmbient_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_lightAmbientR") ) { return ::hx::Val( _lightAmbientR ); }
		if (HX_FIELD_EQ(inName,"_lightAmbientG") ) { return ::hx::Val( _lightAmbientG ); }
		if (HX_FIELD_EQ(inName,"_lightAmbientB") ) { return ::hx::Val( _lightAmbientB ); }
		if (HX_FIELD_EQ(inName,"setRenderState") ) { return ::hx::Val( setRenderState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_ambientColor") ) { return ::hx::Val( get_ambientColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambientColor") ) { return ::hx::Val( set_ambientColor_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return ::hx::Val( cleanCompilationData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ambientInputRegister") ) { return ::hx::Val( _ambientInputRegister ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicAmbientMethod_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"ambient") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambient(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_texture") ) { _texture=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambient") ) { _ambient=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ambientR") ) { _ambientR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { _ambientG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientB") ) { _ambientB=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_useTexture") ) { _useTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ambientColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambientColor(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { _ambientColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_lightAmbientR") ) { _lightAmbientR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightAmbientG") ) { _lightAmbientG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightAmbientB") ) { _lightAmbientB=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_ambientInputRegister") ) { _ambientInputRegister=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicAmbientMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ambient",18,98,81,09));
	outFields->push(HX_("ambientColor",2b,f2,d1,97));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("_useTexture",73,b8,1d,74));
	outFields->push(HX_("_texture",5c,22,99,d8));
	outFields->push(HX_("_ambientInputRegister",34,d3,6b,99));
	outFields->push(HX_("_ambientColor",0a,85,40,7a));
	outFields->push(HX_("_ambientR",99,74,79,8f));
	outFields->push(HX_("_ambientG",8e,74,79,8f));
	outFields->push(HX_("_ambientB",89,74,79,8f));
	outFields->push(HX_("_ambient",99,f1,39,43));
	outFields->push(HX_("_lightAmbientR",71,80,c1,51));
	outFields->push(HX_("_lightAmbientG",66,80,c1,51));
	outFields->push(HX_("_lightAmbientB",61,80,c1,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicAmbientMethod_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BasicAmbientMethod_obj,_useTexture),HX_("_useTexture",73,b8,1d,74)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(BasicAmbientMethod_obj,_texture),HX_("_texture",5c,22,99,d8)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(BasicAmbientMethod_obj,_ambientInputRegister),HX_("_ambientInputRegister",34,d3,6b,99)},
	{::hx::fsInt,(int)offsetof(BasicAmbientMethod_obj,_ambientColor),HX_("_ambientColor",0a,85,40,7a)},
	{::hx::fsFloat,(int)offsetof(BasicAmbientMethod_obj,_ambientR),HX_("_ambientR",99,74,79,8f)},
	{::hx::fsFloat,(int)offsetof(BasicAmbientMethod_obj,_ambientG),HX_("_ambientG",8e,74,79,8f)},
	{::hx::fsFloat,(int)offsetof(BasicAmbientMethod_obj,_ambientB),HX_("_ambientB",89,74,79,8f)},
	{::hx::fsFloat,(int)offsetof(BasicAmbientMethod_obj,_ambient),HX_("_ambient",99,f1,39,43)},
	{::hx::fsFloat,(int)offsetof(BasicAmbientMethod_obj,_lightAmbientR),HX_("_lightAmbientR",71,80,c1,51)},
	{::hx::fsFloat,(int)offsetof(BasicAmbientMethod_obj,_lightAmbientG),HX_("_lightAmbientG",66,80,c1,51)},
	{::hx::fsFloat,(int)offsetof(BasicAmbientMethod_obj,_lightAmbientB),HX_("_lightAmbientB",61,80,c1,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicAmbientMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicAmbientMethod_obj_sMemberFields[] = {
	HX_("_useTexture",73,b8,1d,74),
	HX_("_texture",5c,22,99,d8),
	HX_("_ambientInputRegister",34,d3,6b,99),
	HX_("_ambientColor",0a,85,40,7a),
	HX_("_ambientR",99,74,79,8f),
	HX_("_ambientG",8e,74,79,8f),
	HX_("_ambientB",89,74,79,8f),
	HX_("_ambient",99,f1,39,43),
	HX_("_lightAmbientR",71,80,c1,51),
	HX_("_lightAmbientG",66,80,c1,51),
	HX_("_lightAmbientB",61,80,c1,51),
	HX_("initVO",49,6a,4c,97),
	HX_("initConstants",5f,39,6b,bf),
	HX_("get_ambient",2f,f8,7b,8f),
	HX_("set_ambient",3b,ff,e8,99),
	HX_("get_ambientColor",b4,de,70,9c),
	HX_("set_ambientColor",28,cc,b2,f2),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("cleanCompilationData",04,2f,dd,d4),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("activate",b3,1b,ac,e5),
	HX_("updateAmbient",0f,fd,ef,d4),
	HX_("setRenderState",59,de,7a,f7),
	::String(null()) };

::hx::Class BasicAmbientMethod_obj::__mClass;

void BasicAmbientMethod_obj::__register()
{
	BasicAmbientMethod_obj _hx_dummy;
	BasicAmbientMethod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.BasicAmbientMethod",78,80,9f,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicAmbientMethod_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicAmbientMethod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicAmbientMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicAmbientMethod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
