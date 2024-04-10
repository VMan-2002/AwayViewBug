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
#ifndef INCLUDED_away3d_events_ShadingMethodEvent
#include <away3d/events/ShadingMethodEvent.h>
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
#ifndef INCLUDED_away3d_materials_methods_MethodVO
#include <away3d/materials/methods/MethodVO.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_36_new,"away3d.materials.methods.ShadingMethodBase","new",0x8b80f981,"away3d.materials.methods.ShadingMethodBase.new","away3d/materials/methods/ShadingMethodBase.hx",36,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_44_initVO,"away3d.materials.methods.ShadingMethodBase","initVO",0xb5ceebc8,"away3d.materials.methods.ShadingMethodBase.initVO","away3d/materials/methods/ShadingMethodBase.hx",44,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_53_initConstants,"away3d.materials.methods.ShadingMethodBase","initConstants",0x20b175c0,"away3d.materials.methods.ShadingMethodBase.initConstants","away3d/materials/methods/ShadingMethodBase.hx",53,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_62_get_sharedRegisters,"away3d.materials.methods.ShadingMethodBase","get_sharedRegisters",0xf8a4ff83,"away3d.materials.methods.ShadingMethodBase.get_sharedRegisters","away3d/materials/methods/ShadingMethodBase.hx",62,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_66_set_sharedRegisters,"away3d.materials.methods.ShadingMethodBase","set_sharedRegisters",0x3541f28f,"away3d.materials.methods.ShadingMethodBase.set_sharedRegisters","away3d/materials/methods/ShadingMethodBase.hx",66,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_76_get_passes,"away3d.materials.methods.ShadingMethodBase","get_passes",0x36f3f047,"away3d.materials.methods.ShadingMethodBase.get_passes","away3d/materials/methods/ShadingMethodBase.hx",76,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_83_dispose,"away3d.materials.methods.ShadingMethodBase","dispose",0x4efb4e40,"away3d.materials.methods.ShadingMethodBase.dispose","away3d/materials/methods/ShadingMethodBase.hx",83,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_92_createMethodVO,"away3d.materials.methods.ShadingMethodBase","createMethodVO",0x5d9893f5,"away3d.materials.methods.ShadingMethodBase.createMethodVO","away3d/materials/methods/ShadingMethodBase.hx",92,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_100_reset,"away3d.materials.methods.ShadingMethodBase","reset",0x766abd30,"away3d.materials.methods.ShadingMethodBase.reset","away3d/materials/methods/ShadingMethodBase.hx",100,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_108_cleanCompilationData,"away3d.materials.methods.ShadingMethodBase","cleanCompilationData",0x4733b0c3,"away3d.materials.methods.ShadingMethodBase.cleanCompilationData","away3d/materials/methods/ShadingMethodBase.hx",108,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_119_getVertexCode,"away3d.materials.methods.ShadingMethodBase","getVertexCode",0x9039d348,"away3d.materials.methods.ShadingMethodBase.getVertexCode","away3d/materials/methods/ShadingMethodBase.hx",119,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_130_activate,"away3d.materials.methods.ShadingMethodBase","activate",0x8af13af2,"away3d.materials.methods.ShadingMethodBase.activate","away3d/materials/methods/ShadingMethodBase.hx",130,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_143_setRenderState,"away3d.materials.methods.ShadingMethodBase","setRenderState",0xb3a976d8,"away3d.materials.methods.ShadingMethodBase.setRenderState","away3d/materials/methods/ShadingMethodBase.hx",143,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_153_deactivate,"away3d.materials.methods.ShadingMethodBase","deactivate",0x943c0933,"away3d.materials.methods.ShadingMethodBase.deactivate","away3d/materials/methods/ShadingMethodBase.hx",153,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_168_getTex2DSampleCode,"away3d.materials.methods.ShadingMethodBase","getTex2DSampleCode",0x8f3a8559,"away3d.materials.methods.ShadingMethodBase.getTex2DSampleCode","away3d/materials/methods/ShadingMethodBase.hx",168,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_195_getTexCubeSampleCode,"away3d.materials.methods.ShadingMethodBase","getTexCubeSampleCode",0x87b6105c,"away3d.materials.methods.ShadingMethodBase.getTexCubeSampleCode","away3d/materials/methods/ShadingMethodBase.hx",195,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_215_getFormatStringForTexture,"away3d.materials.methods.ShadingMethodBase","getFormatStringForTexture",0x1c39f171,"away3d.materials.methods.ShadingMethodBase.getFormatStringForTexture","away3d/materials/methods/ShadingMethodBase.hx",215,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_230_invalidateShaderProgram,"away3d.materials.methods.ShadingMethodBase","invalidateShaderProgram",0xdebb9705,"away3d.materials.methods.ShadingMethodBase.invalidateShaderProgram","away3d/materials/methods/ShadingMethodBase.hx",230,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_237_copyFrom,"away3d.materials.methods.ShadingMethodBase","copyFrom",0x6da62afe,"away3d.materials.methods.ShadingMethodBase.copyFrom","away3d/materials/methods/ShadingMethodBase.hx",237,0x920d41d2)
HX_LOCAL_STACK_FRAME(_hx_pos_93edc1ec1b690dcc_248_getSmoothingFilter,"away3d.materials.methods.ShadingMethodBase","getSmoothingFilter",0xc7f6dc55,"away3d.materials.methods.ShadingMethodBase.getSmoothingFilter","away3d/materials/methods/ShadingMethodBase.hx",248,0x920d41d2)
namespace away3d{
namespace materials{
namespace methods{

void ShadingMethodBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_36_new)
HXDLIN(  36)		super::__construct(null());
            	}

Dynamic ShadingMethodBase_obj::__CreateEmpty() { return new ShadingMethodBase_obj; }

void *ShadingMethodBase_obj::_hx_vtable = 0;

Dynamic ShadingMethodBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShadingMethodBase_obj > _hx_result = new ShadingMethodBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShadingMethodBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12886923) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x12886923;
		}
	} else {
		return inClassId==(int)0x37f46043;
	}
}

void ShadingMethodBase_obj::initVO( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_44_initVO)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,initVO,(void))

void ShadingMethodBase_obj::initConstants( ::away3d::materials::methods::MethodVO vo){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_53_initConstants)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,initConstants,(void))

 ::away3d::materials::compilation::ShaderRegisterData ShadingMethodBase_obj::get_sharedRegisters(){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_62_get_sharedRegisters)
HXDLIN(  62)		return this->_sharedRegisters;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,get_sharedRegisters,return )

 ::away3d::materials::compilation::ShaderRegisterData ShadingMethodBase_obj::set_sharedRegisters( ::away3d::materials::compilation::ShaderRegisterData value){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_66_set_sharedRegisters)
HXLINE(  67)		this->_sharedRegisters = value;
HXLINE(  68)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,set_sharedRegisters,return )

 ::openfl::_Vector::ObjectVector ShadingMethodBase_obj::get_passes(){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_76_get_passes)
HXDLIN(  76)		return this->_passes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,get_passes,return )

void ShadingMethodBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_83_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,dispose,(void))

 ::away3d::materials::methods::MethodVO ShadingMethodBase_obj::createMethodVO(){
            	HX_GC_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_92_createMethodVO)
HXDLIN(  92)		return  ::away3d::materials::methods::MethodVO_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,createMethodVO,return )

void ShadingMethodBase_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_100_reset)
HXDLIN( 100)		this->cleanCompilationData();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,reset,(void))

void ShadingMethodBase_obj::cleanCompilationData(){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_108_cleanCompilationData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,cleanCompilationData,(void))

::String ShadingMethodBase_obj::getVertexCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_119_getVertexCode)
HXDLIN( 119)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShadingMethodBase_obj,getVertexCode,return )

void ShadingMethodBase_obj::activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_130_activate)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShadingMethodBase_obj,activate,(void))

void ShadingMethodBase_obj::setRenderState( ::away3d::materials::methods::MethodVO vo,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_143_setRenderState)
            	}


HX_DEFINE_DYNAMIC_FUNC4(ShadingMethodBase_obj,setRenderState,(void))

void ShadingMethodBase_obj::deactivate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_153_deactivate)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShadingMethodBase_obj,deactivate,(void))

::String ShadingMethodBase_obj::getTex2DSampleCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement targetReg, ::away3d::materials::compilation::ShaderRegisterElement inputReg, ::away3d::textures::TextureProxyBase texture, ::away3d::materials::compilation::ShaderRegisterElement uvReg,::String forceWrap){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_168_getTex2DSampleCode)
HXLINE( 169)		::String wrap;
HXDLIN( 169)		if (vo->repeatTextures) {
HXLINE( 169)			wrap = HX_("wrap",ca,39,ff,4e);
            		}
            		else {
HXLINE( 169)			wrap = HX_("clamp",fb,72,58,48);
            		}
HXLINE( 170)		if (::hx::IsNotNull( forceWrap )) {
HXLINE( 170)			wrap = forceWrap;
            		}
HXLINE( 171)		::String filter;
HXLINE( 172)		::String format = this->getFormatStringForTexture(texture);
HXLINE( 173)		bool enableMipMaps;
HXDLIN( 173)		if (vo->useMipmapping) {
HXLINE( 173)			enableMipMaps = texture->get_hasMipMaps();
            		}
            		else {
HXLINE( 173)			enableMipMaps = false;
            		}
HXLINE( 175)		if (vo->useSmoothTextures) {
HXLINE( 176)			if (enableMipMaps) {
HXLINE( 176)				filter = HX_("linear,miplinear",f2,e6,d0,0c);
            			}
            			else {
HXLINE( 176)				filter = HX_("linear",e5,51,a0,ec);
            			}
            		}
            		else {
HXLINE( 178)			if (enableMipMaps) {
HXLINE( 178)				filter = HX_("nearest,mipnearest",d8,b8,d6,47);
            			}
            			else {
HXLINE( 178)				filter = HX_("nearest",5e,18,ca,65);
            			}
            		}
HXLINE( 180)		if (::hx::IsNull( uvReg )) {
HXLINE( 181)			uvReg = this->_sharedRegisters->uvVarying;
            		}
HXLINE( 183)		::String _hx_tmp = ((HX_("tex ",59,cc,f9,4c) + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN( 183)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(uvReg)) + HX_(", ",74,26,00,00));
HXDLIN( 183)		return (((((((_hx_tmp1 + ::Std_obj::string(inputReg)) + HX_(" <2d,",5e,a5,a1,94)) + filter) + HX_(",",2c,00,00,00)) + format) + wrap) + HX_(">\n",0c,36,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC6(ShadingMethodBase_obj,getTex2DSampleCode,return )

::String ShadingMethodBase_obj::getTexCubeSampleCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement targetReg, ::away3d::materials::compilation::ShaderRegisterElement inputReg, ::away3d::textures::TextureProxyBase texture, ::away3d::materials::compilation::ShaderRegisterElement uvReg){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_195_getTexCubeSampleCode)
HXLINE( 196)		::String filter;
HXLINE( 197)		::String format = this->getFormatStringForTexture(texture);
HXLINE( 198)		bool enableMipMaps;
HXDLIN( 198)		if (vo->useMipmapping) {
HXLINE( 198)			enableMipMaps = texture->get_hasMipMaps();
            		}
            		else {
HXLINE( 198)			enableMipMaps = false;
            		}
HXLINE( 200)		if (vo->useSmoothTextures) {
HXLINE( 201)			if (enableMipMaps) {
HXLINE( 201)				filter = HX_("linear,miplinear",f2,e6,d0,0c);
            			}
            			else {
HXLINE( 201)				filter = HX_("linear",e5,51,a0,ec);
            			}
            		}
            		else {
HXLINE( 203)			if (enableMipMaps) {
HXLINE( 203)				filter = HX_("nearest,mipnearest",d8,b8,d6,47);
            			}
            			else {
HXLINE( 203)				filter = HX_("nearest",5e,18,ca,65);
            			}
            		}
HXLINE( 205)		::String _hx_tmp = ((HX_("tex ",59,cc,f9,4c) + ::Std_obj::string(targetReg)) + HX_(", ",74,26,00,00));
HXDLIN( 205)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(uvReg)) + HX_(", ",74,26,00,00));
HXDLIN( 205)		return (((((_hx_tmp1 + ::Std_obj::string(inputReg)) + HX_(" <cube,",fb,97,64,7e)) + format) + filter) + HX_(">\n",0c,36,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC5(ShadingMethodBase_obj,getTexCubeSampleCode,return )

::String ShadingMethodBase_obj::getFormatStringForTexture( ::away3d::textures::TextureProxyBase texture){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_215_getFormatStringForTexture)
HXDLIN( 215)		 ::Dynamic _hx_switch_0 = texture->get_format();
            		if (  (_hx_switch_0==3) ){
HXLINE( 217)			return HX_("dxt1,",3b,cd,bb,e3);
HXDLIN( 217)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE( 219)			return HX_("dxt5,",b7,d0,bb,e3);
HXDLIN( 219)			goto _hx_goto_16;
            		}
            		/* default */{
HXLINE( 221)			return HX_("",00,00,00,00);
            		}
            		_hx_goto_16:;
HXLINE( 215)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,getFormatStringForTexture,return )

void ShadingMethodBase_obj::invalidateShaderProgram(){
            	HX_GC_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_230_invalidateShaderProgram)
HXDLIN( 230)		this->dispatchEvent( ::away3d::events::ShadingMethodEvent_obj::__alloc( HX_CTX ,HX_("ShaderInvalidated",44,03,b9,4d),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadingMethodBase_obj,invalidateShaderProgram,(void))

void ShadingMethodBase_obj::copyFrom( ::away3d::materials::methods::ShadingMethodBase method){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_237_copyFrom)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadingMethodBase_obj,copyFrom,(void))

 ::Dynamic ShadingMethodBase_obj::getSmoothingFilter(bool smooth, ::Dynamic anisotropy){
            	HX_STACKFRAME(&_hx_pos_93edc1ec1b690dcc_248_getSmoothingFilter)
HXDLIN( 248)		if (smooth) {
HXLINE( 249)			 ::Dynamic _hx_switch_0 = anisotropy;
            			if (  (_hx_switch_0==0) ){
HXLINE( 254)				return 4;
HXDLIN( 254)				goto _hx_goto_20;
            			}
            			if (  (_hx_switch_0==1) ){
HXLINE( 250)				return 1;
HXDLIN( 250)				goto _hx_goto_20;
            			}
            			if (  (_hx_switch_0==2) ){
HXLINE( 251)				return 2;
HXDLIN( 251)				goto _hx_goto_20;
            			}
            			if (  (_hx_switch_0==3) ){
HXLINE( 252)				return 3;
HXDLIN( 252)				goto _hx_goto_20;
            			}
            			if (  (_hx_switch_0==4) ){
HXLINE( 253)				return 0;
HXDLIN( 253)				goto _hx_goto_20;
            			}
            			_hx_goto_20:;
            		}
            		else {
HXLINE( 257)			return 5;
            		}
HXLINE( 248)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShadingMethodBase_obj,getSmoothingFilter,return )


::hx::ObjectPtr< ShadingMethodBase_obj > ShadingMethodBase_obj::__new() {
	::hx::ObjectPtr< ShadingMethodBase_obj > __this = new ShadingMethodBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShadingMethodBase_obj > ShadingMethodBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShadingMethodBase_obj *__this = (ShadingMethodBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShadingMethodBase_obj), true, "away3d.materials.methods.ShadingMethodBase"));
	*(void **)__this = ShadingMethodBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShadingMethodBase_obj::ShadingMethodBase_obj()
{
}

void ShadingMethodBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadingMethodBase);
	HX_MARK_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
	HX_MARK_MEMBER_NAME(_passes,"_passes");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShadingMethodBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sharedRegisters,"_sharedRegisters");
	HX_VISIT_MEMBER_NAME(_passes,"_passes");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ShadingMethodBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_passes() ); }
		if (HX_FIELD_EQ(inName,"initVO") ) { return ::hx::Val( initVO_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_passes") ) { return ::hx::Val( _passes ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_passes") ) { return ::hx::Val( get_passes_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initConstants") ) { return ::hx::Val( initConstants_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createMethodVO") ) { return ::hx::Val( createMethodVO_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderState") ) { return ::hx::Val( setRenderState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sharedRegisters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sharedRegisters() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { return ::hx::Val( _sharedRegisters ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getTex2DSampleCode") ) { return ::hx::Val( getTex2DSampleCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSmoothingFilter") ) { return ::hx::Val( getSmoothingFilter_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_sharedRegisters") ) { return ::hx::Val( get_sharedRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sharedRegisters") ) { return ::hx::Val( set_sharedRegisters_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cleanCompilationData") ) { return ::hx::Val( cleanCompilationData_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTexCubeSampleCode") ) { return ::hx::Val( getTexCubeSampleCode_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return ::hx::Val( invalidateShaderProgram_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getFormatStringForTexture") ) { return ::hx::Val( getFormatStringForTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShadingMethodBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_passes") ) { _passes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sharedRegisters") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sharedRegisters(inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterData >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_sharedRegisters") ) { _sharedRegisters=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadingMethodBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sharedRegisters",4b,f5,5c,0a));
	outFields->push(HX_("passes",7f,d3,31,ee));
	outFields->push(HX_("_sharedRegisters",cc,37,3c,f5));
	outFields->push(HX_("_passes",1e,e5,a8,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShadingMethodBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterData */ ,(int)offsetof(ShadingMethodBase_obj,_sharedRegisters),HX_("_sharedRegisters",cc,37,3c,f5)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(ShadingMethodBase_obj,_passes),HX_("_passes",1e,e5,a8,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShadingMethodBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ShadingMethodBase_obj_sMemberFields[] = {
	HX_("_sharedRegisters",cc,37,3c,f5),
	HX_("_passes",1e,e5,a8,5c),
	HX_("initVO",49,6a,4c,97),
	HX_("initConstants",5f,39,6b,bf),
	HX_("get_sharedRegisters",62,c4,67,95),
	HX_("set_sharedRegisters",6e,b7,04,d2),
	HX_("get_passes",48,43,b9,de),
	HX_("dispose",9f,80,4c,bb),
	HX_("createMethodVO",76,fb,69,a1),
	HX_("reset",cf,49,c8,e6),
	HX_("cleanCompilationData",04,2f,dd,d4),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("activate",b3,1b,ac,e5),
	HX_("setRenderState",59,de,7a,f7),
	HX_("deactivate",34,5c,01,3c),
	HX_("getTex2DSampleCode",5a,41,fc,1b),
	HX_("getTexCubeSampleCode",9d,8e,5f,15),
	HX_("getFormatStringForTexture",90,27,9a,5e),
	HX_("invalidateShaderProgram",64,b7,8b,f4),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("getSmoothingFilter",56,98,b8,54),
	::String(null()) };

::hx::Class ShadingMethodBase_obj::__mClass;

void ShadingMethodBase_obj::__register()
{
	ShadingMethodBase_obj _hx_dummy;
	ShadingMethodBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.methods.ShadingMethodBase",0f,25,4c,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShadingMethodBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShadingMethodBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShadingMethodBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShadingMethodBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace methods
