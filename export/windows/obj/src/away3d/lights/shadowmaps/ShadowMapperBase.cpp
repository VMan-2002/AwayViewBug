#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_core_render_DepthRenderer
#include <away3d/core/render/DepthRenderer.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_ShadowCasterCollector
#include <away3d/core/traverse/ShadowCasterCollector.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_shadowmaps_ShadowMapperBase
#include <away3d/lights/shadowmaps/ShadowMapperBase.h>
#endif
#ifndef INCLUDED_away3d_textures_RenderTexture
#include <away3d/textures/RenderTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0708db8752306cf7_17_new,"away3d.lights.shadowmaps.ShadowMapperBase","new",0x3cf14559,"away3d.lights.shadowmaps.ShadowMapperBase.new","away3d/lights/shadowmaps/ShadowMapperBase.hx",17,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_39_createCasterCollector,"away3d.lights.shadowmaps.ShadowMapperBase","createCasterCollector",0xaeee465e,"away3d.lights.shadowmaps.ShadowMapperBase.createCasterCollector","away3d/lights/shadowmaps/ShadowMapperBase.hx",39,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_44_get_autoUpdateShadows,"away3d.lights.shadowmaps.ShadowMapperBase","get_autoUpdateShadows",0x02eee2ab,"away3d.lights.shadowmaps.ShadowMapperBase.get_autoUpdateShadows","away3d/lights/shadowmaps/ShadowMapperBase.hx",44,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_48_set_autoUpdateShadows,"away3d.lights.shadowmaps.ShadowMapperBase","set_autoUpdateShadows",0x56f7b0b7,"away3d.lights.shadowmaps.ShadowMapperBase.set_autoUpdateShadows","away3d/lights/shadowmaps/ShadowMapperBase.hx",48,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_55_updateShadows,"away3d.lights.shadowmaps.ShadowMapperBase","updateShadows",0x4ec947c3,"away3d.lights.shadowmaps.ShadowMapperBase.updateShadows","away3d/lights/shadowmaps/ShadowMapperBase.hx",55,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_63_setDepthMap,"away3d.lights.shadowmaps.ShadowMapperBase","setDepthMap",0xf97a7514,"away3d.lights.shadowmaps.ShadowMapperBase.setDepthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",63,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_78_get_light,"away3d.lights.shadowmaps.ShadowMapperBase","get_light",0xf532e2e6,"away3d.lights.shadowmaps.ShadowMapperBase.get_light","away3d/lights/shadowmaps/ShadowMapperBase.hx",78,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_82_set_light,"away3d.lights.shadowmaps.ShadowMapperBase","set_light",0xd883cef2,"away3d.lights.shadowmaps.ShadowMapperBase.set_light","away3d/lights/shadowmaps/ShadowMapperBase.hx",82,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_88_get_depthMap,"away3d.lights.shadowmaps.ShadowMapperBase","get_depthMap",0xdab56d49,"away3d.lights.shadowmaps.ShadowMapperBase.get_depthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",88,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_97_get_depthMapSize,"away3d.lights.shadowmaps.ShadowMapperBase","get_depthMapSize",0xc5dd12aa,"away3d.lights.shadowmaps.ShadowMapperBase.get_depthMapSize","away3d/lights/shadowmaps/ShadowMapperBase.hx",97,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_101_set_depthMapSize,"away3d.lights.shadowmaps.ShadowMapperBase","set_depthMapSize",0x1c1f001e,"away3d.lights.shadowmaps.ShadowMapperBase.set_depthMapSize","away3d/lights/shadowmaps/ShadowMapperBase.hx",101,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_116_dispose,"away3d.lights.shadowmaps.ShadowMapperBase","dispose",0xe47a6618,"away3d.lights.shadowmaps.ShadowMapperBase.dispose","away3d/lights/shadowmaps/ShadowMapperBase.hx",116,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_125_createDepthTexture,"away3d.lights.shadowmaps.ShadowMapperBase","createDepthTexture",0xebcabe5b,"away3d.lights.shadowmaps.ShadowMapperBase.createDepthTexture","away3d/lights/shadowmaps/ShadowMapperBase.hx",125,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_134_renderDepthMap,"away3d.lights.shadowmaps.ShadowMapperBase","renderDepthMap",0x3a512e76,"away3d.lights.shadowmaps.ShadowMapperBase.renderDepthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",134,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_144_updateDepthProjection,"away3d.lights.shadowmaps.ShadowMapperBase","updateDepthProjection",0xa15adaa2,"away3d.lights.shadowmaps.ShadowMapperBase.updateDepthProjection","away3d/lights/shadowmaps/ShadowMapperBase.hx",144,0x59cb36f6)
HX_LOCAL_STACK_FRAME(_hx_pos_0708db8752306cf7_149_drawDepthMap,"away3d.lights.shadowmaps.ShadowMapperBase","drawDepthMap",0xfb8f4564,"away3d.lights.shadowmaps.ShadowMapperBase.drawDepthMap","away3d/lights/shadowmaps/ShadowMapperBase.hx",149,0x59cb36f6)
namespace away3d{
namespace lights{
namespace shadowmaps{

void ShadowMapperBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_17_new)
HXLINE(  29)		this->_autoUpdateShadows = true;
HXLINE(  26)		this->_depthMapSize = 2048;
HXLINE(  34)		this->_casterCollector = this->createCasterCollector();
            	}

Dynamic ShadowMapperBase_obj::__CreateEmpty() { return new ShadowMapperBase_obj; }

void *ShadowMapperBase_obj::_hx_vtable = 0;

Dynamic ShadowMapperBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShadowMapperBase_obj > _hx_result = new ShadowMapperBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShadowMapperBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bcfe5e1;
}

 ::away3d::core::traverse::ShadowCasterCollector ShadowMapperBase_obj::createCasterCollector(){
            	HX_GC_STACKFRAME(&_hx_pos_0708db8752306cf7_39_createCasterCollector)
HXDLIN(  39)		return  ::away3d::core::traverse::ShadowCasterCollector_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,createCasterCollector,return )

bool ShadowMapperBase_obj::get_autoUpdateShadows(){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_44_get_autoUpdateShadows)
HXDLIN(  44)		return this->_autoUpdateShadows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_autoUpdateShadows,return )

bool ShadowMapperBase_obj::set_autoUpdateShadows(bool value){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_48_set_autoUpdateShadows)
HXLINE(  49)		this->_autoUpdateShadows = value;
HXLINE(  50)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,set_autoUpdateShadows,return )

void ShadowMapperBase_obj::updateShadows(){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_55_updateShadows)
HXDLIN(  55)		this->_shadowsInvalid = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,updateShadows,(void))

void ShadowMapperBase_obj::setDepthMap( ::away3d::textures::TextureProxyBase depthMap){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_63_setDepthMap)
HXLINE(  64)		if (::hx::IsInstanceEq( this->_depthMap,depthMap )) {
HXLINE(  65)			return;
            		}
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (::hx::IsNotNull( this->_depthMap )) {
HXLINE(  66)			_hx_tmp = !(this->_explicitDepthMap);
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			this->_depthMap->dispose();
            		}
HXLINE(  68)		this->_depthMap = depthMap;
HXLINE(  69)		if (::hx::IsNotNull( this->_depthMap )) {
HXLINE(  70)			this->_explicitDepthMap = true;
HXLINE(  71)			this->_depthMapSize = this->_depthMap->get_width();
            		}
            		else {
HXLINE(  73)			this->_explicitDepthMap = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,setDepthMap,(void))

 ::away3d::lights::LightBase ShadowMapperBase_obj::get_light(){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_78_get_light)
HXDLIN(  78)		return this->_light;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_light,return )

 ::away3d::lights::LightBase ShadowMapperBase_obj::set_light( ::away3d::lights::LightBase value){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_82_set_light)
HXLINE(  83)		this->_light = value;
HXLINE(  84)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,set_light,return )

 ::away3d::textures::TextureProxyBase ShadowMapperBase_obj::get_depthMap(){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_88_get_depthMap)
HXLINE(  89)		if (::hx::IsNull( this->_depthMap )) {
HXLINE(  90)			this->_depthMap = this->createDepthTexture();
            		}
HXLINE(  92)		return this->_depthMap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_depthMap,return )

int ShadowMapperBase_obj::get_depthMapSize(){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_97_get_depthMapSize)
HXDLIN(  97)		return this->_depthMapSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,get_depthMapSize,return )

int ShadowMapperBase_obj::set_depthMapSize(int value){
            	HX_GC_STACKFRAME(&_hx_pos_0708db8752306cf7_101_set_depthMapSize)
HXLINE( 102)		if ((value == this->_depthMapSize)) {
HXLINE( 103)			return value;
            		}
HXLINE( 104)		this->_depthMapSize = value;
HXLINE( 106)		if (this->_explicitDepthMap) {
HXLINE( 107)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Cannot set depth map size for the current renderer.",5b,da,83,48),null()));
            		}
            		else {
HXLINE( 108)			if (::hx::IsNotNull( this->_depthMap )) {
HXLINE( 109)				this->_depthMap->dispose();
HXLINE( 110)				this->_depthMap = null();
            			}
            		}
HXLINE( 112)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,set_depthMapSize,return )

void ShadowMapperBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_116_dispose)
HXLINE( 117)		this->_casterCollector = null();
HXLINE( 118)		bool _hx_tmp;
HXDLIN( 118)		if (::hx::IsNotNull( this->_depthMap )) {
HXLINE( 118)			_hx_tmp = !(this->_explicitDepthMap);
            		}
            		else {
HXLINE( 118)			_hx_tmp = false;
            		}
HXDLIN( 118)		if (_hx_tmp) {
HXLINE( 119)			this->_depthMap->dispose();
            		}
HXLINE( 120)		this->_depthMap = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,dispose,(void))

 ::away3d::textures::TextureProxyBase ShadowMapperBase_obj::createDepthTexture(){
            	HX_GC_STACKFRAME(&_hx_pos_0708db8752306cf7_125_createDepthTexture)
HXDLIN( 125)		return  ::away3d::textures::RenderTexture_obj::__alloc( HX_CTX ,this->_depthMapSize,this->_depthMapSize);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShadowMapperBase_obj,createDepthTexture,return )

void ShadowMapperBase_obj::renderDepthMap( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::core::traverse::EntityCollector entityCollector, ::away3d::core::render::DepthRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_0708db8752306cf7_134_renderDepthMap)
HXLINE( 135)		this->_shadowsInvalid = false;
HXLINE( 136)		this->updateDepthProjection(entityCollector->get_camera());
HXLINE( 137)		if (::hx::IsNull( this->_depthMap )) {
HXLINE( 138)			this->_depthMap = this->createDepthTexture();
            		}
HXLINE( 139)		 ::openfl::display3D::textures::TextureBase _hx_tmp = this->_depthMap->getTextureForStage3D(stage3DProxy);
HXDLIN( 139)		this->drawDepthMap(_hx_tmp,entityCollector->scene,renderer);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShadowMapperBase_obj,renderDepthMap,(void))

void ShadowMapperBase_obj::updateDepthProjection( ::away3d::cameras::Camera3D viewCamera){
            	HX_GC_STACKFRAME(&_hx_pos_0708db8752306cf7_144_updateDepthProjection)
HXDLIN( 144)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShadowMapperBase_obj,updateDepthProjection,(void))

void ShadowMapperBase_obj::drawDepthMap( ::openfl::display3D::textures::TextureBase target, ::away3d::containers::Scene3D scene, ::away3d::core::render::DepthRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_0708db8752306cf7_149_drawDepthMap)
HXDLIN( 149)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ShadowMapperBase_obj,drawDepthMap,(void))


::hx::ObjectPtr< ShadowMapperBase_obj > ShadowMapperBase_obj::__new() {
	::hx::ObjectPtr< ShadowMapperBase_obj > __this = new ShadowMapperBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShadowMapperBase_obj > ShadowMapperBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShadowMapperBase_obj *__this = (ShadowMapperBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShadowMapperBase_obj), true, "away3d.lights.shadowmaps.ShadowMapperBase"));
	*(void **)__this = ShadowMapperBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShadowMapperBase_obj::ShadowMapperBase_obj()
{
}

void ShadowMapperBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShadowMapperBase);
	HX_MARK_MEMBER_NAME(_casterCollector,"_casterCollector");
	HX_MARK_MEMBER_NAME(_depthMap,"_depthMap");
	HX_MARK_MEMBER_NAME(_depthMapSize,"_depthMapSize");
	HX_MARK_MEMBER_NAME(_light,"_light");
	HX_MARK_MEMBER_NAME(_explicitDepthMap,"_explicitDepthMap");
	HX_MARK_MEMBER_NAME(_autoUpdateShadows,"_autoUpdateShadows");
	HX_MARK_MEMBER_NAME(_shadowsInvalid,"_shadowsInvalid");
	HX_MARK_END_CLASS();
}

void ShadowMapperBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_casterCollector,"_casterCollector");
	HX_VISIT_MEMBER_NAME(_depthMap,"_depthMap");
	HX_VISIT_MEMBER_NAME(_depthMapSize,"_depthMapSize");
	HX_VISIT_MEMBER_NAME(_light,"_light");
	HX_VISIT_MEMBER_NAME(_explicitDepthMap,"_explicitDepthMap");
	HX_VISIT_MEMBER_NAME(_autoUpdateShadows,"_autoUpdateShadows");
	HX_VISIT_MEMBER_NAME(_shadowsInvalid,"_shadowsInvalid");
}

::hx::Val ShadowMapperBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_light() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { return ::hx::Val( _light ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"depthMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depthMap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_depthMap") ) { return ::hx::Val( _depthMap ); }
		if (HX_FIELD_EQ(inName,"get_light") ) { return ::hx::Val( get_light_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_light") ) { return ::hx::Val( set_light_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setDepthMap") ) { return ::hx::Val( setDepthMap_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"depthMapSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depthMapSize() ); }
		if (HX_FIELD_EQ(inName,"get_depthMap") ) { return ::hx::Val( get_depthMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawDepthMap") ) { return ::hx::Val( drawDepthMap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthMapSize") ) { return ::hx::Val( _depthMapSize ); }
		if (HX_FIELD_EQ(inName,"updateShadows") ) { return ::hx::Val( updateShadows_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDepthMap") ) { return ::hx::Val( renderDepthMap_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowsInvalid") ) { return ::hx::Val( _shadowsInvalid ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_casterCollector") ) { return ::hx::Val( _casterCollector ); }
		if (HX_FIELD_EQ(inName,"get_depthMapSize") ) { return ::hx::Val( get_depthMapSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depthMapSize") ) { return ::hx::Val( set_depthMapSize_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"autoUpdateShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoUpdateShadows() ); }
		if (HX_FIELD_EQ(inName,"_explicitDepthMap") ) { return ::hx::Val( _explicitDepthMap ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_autoUpdateShadows") ) { return ::hx::Val( _autoUpdateShadows ); }
		if (HX_FIELD_EQ(inName,"createDepthTexture") ) { return ::hx::Val( createDepthTexture_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createCasterCollector") ) { return ::hx::Val( createCasterCollector_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoUpdateShadows") ) { return ::hx::Val( get_autoUpdateShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoUpdateShadows") ) { return ::hx::Val( set_autoUpdateShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDepthProjection") ) { return ::hx::Val( updateDepthProjection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShadowMapperBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"light") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_light(inValue.Cast<  ::away3d::lights::LightBase >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_light") ) { _light=inValue.Cast<  ::away3d::lights::LightBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_depthMap") ) { _depthMap=inValue.Cast<  ::away3d::textures::TextureProxyBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"depthMapSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depthMapSize(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_depthMapSize") ) { _depthMapSize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shadowsInvalid") ) { _shadowsInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_casterCollector") ) { _casterCollector=inValue.Cast<  ::away3d::core::traverse::ShadowCasterCollector >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"autoUpdateShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoUpdateShadows(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_explicitDepthMap") ) { _explicitDepthMap=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_autoUpdateShadows") ) { _autoUpdateShadows=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShadowMapperBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoUpdateShadows",9b,b8,7d,05));
	outFields->push(HX_("light",d6,90,fc,74));
	outFields->push(HX_("depthMap",59,15,19,97));
	outFields->push(HX_("depthMapSize",ba,02,9e,77));
	outFields->push(HX_("_casterCollector",42,85,e2,09));
	outFields->push(HX_("_depthMap",b8,0c,af,de));
	outFields->push(HX_("_depthMapSize",99,95,0c,5a));
	outFields->push(HX_("_light",17,d8,e3,70));
	outFields->push(HX_("_explicitDepthMap",cc,76,b8,4f));
	outFields->push(HX_("_autoUpdateShadows",5c,5d,93,d8));
	outFields->push(HX_("_shadowsInvalid",43,37,9e,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShadowMapperBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::core::traverse::ShadowCasterCollector */ ,(int)offsetof(ShadowMapperBase_obj,_casterCollector),HX_("_casterCollector",42,85,e2,09)},
	{::hx::fsObject /*  ::away3d::textures::TextureProxyBase */ ,(int)offsetof(ShadowMapperBase_obj,_depthMap),HX_("_depthMap",b8,0c,af,de)},
	{::hx::fsInt,(int)offsetof(ShadowMapperBase_obj,_depthMapSize),HX_("_depthMapSize",99,95,0c,5a)},
	{::hx::fsObject /*  ::away3d::lights::LightBase */ ,(int)offsetof(ShadowMapperBase_obj,_light),HX_("_light",17,d8,e3,70)},
	{::hx::fsBool,(int)offsetof(ShadowMapperBase_obj,_explicitDepthMap),HX_("_explicitDepthMap",cc,76,b8,4f)},
	{::hx::fsBool,(int)offsetof(ShadowMapperBase_obj,_autoUpdateShadows),HX_("_autoUpdateShadows",5c,5d,93,d8)},
	{::hx::fsBool,(int)offsetof(ShadowMapperBase_obj,_shadowsInvalid),HX_("_shadowsInvalid",43,37,9e,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShadowMapperBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ShadowMapperBase_obj_sMemberFields[] = {
	HX_("_casterCollector",42,85,e2,09),
	HX_("_depthMap",b8,0c,af,de),
	HX_("_depthMapSize",99,95,0c,5a),
	HX_("_light",17,d8,e3,70),
	HX_("_explicitDepthMap",cc,76,b8,4f),
	HX_("_autoUpdateShadows",5c,5d,93,d8),
	HX_("_shadowsInvalid",43,37,9e,7c),
	HX_("createCasterCollector",25,1f,2b,30),
	HX_("get_autoUpdateShadows",72,bb,2b,84),
	HX_("set_autoUpdateShadows",7e,89,34,d8),
	HX_("updateShadows",8a,81,fc,2a),
	HX_("setDepthMap",1b,df,79,c7),
	HX_("get_light",2d,ed,a5,b8),
	HX_("set_light",39,d9,f6,9b),
	HX_("get_depthMap",62,c9,32,4c),
	HX_("get_depthMapSize",43,ef,3c,7c),
	HX_("set_depthMapSize",b7,dc,7e,d2),
	HX_("dispose",9f,80,4c,bb),
	HX_("createDepthTexture",34,b3,4d,df),
	HX_("renderDepthMap",cf,82,f0,0a),
	HX_("updateDepthProjection",69,b3,97,22),
	HX_("drawDepthMap",7d,a1,0c,6d),
	::String(null()) };

::hx::Class ShadowMapperBase_obj::__mClass;

void ShadowMapperBase_obj::__register()
{
	ShadowMapperBase_obj _hx_dummy;
	ShadowMapperBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.lights.shadowmaps.ShadowMapperBase",e7,a4,03,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShadowMapperBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShadowMapperBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShadowMapperBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShadowMapperBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace lights
} // end namespace shadowmaps
