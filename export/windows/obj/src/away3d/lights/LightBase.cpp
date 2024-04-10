#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_LightNode
#include <away3d/core/partition/LightNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_events_LightEvent
#include <away3d/events/LightEvent.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_18_new,"away3d.lights.LightBase","new",0xb69c2817,"away3d.lights.LightBase.new","away3d/lights/LightBase.hx",18,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_64_get_castsShadows,"away3d.lights.LightBase","get_castsShadows",0x2940cc91,"away3d.lights.LightBase.get_castsShadows","away3d/lights/LightBase.hx",64,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_68_set_castsShadows,"away3d.lights.LightBase","set_castsShadows",0x7f82ba05,"away3d.lights.LightBase.set_castsShadows","away3d/lights/LightBase.hx",68,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_90_createShadowMapper,"away3d.lights.LightBase","createShadowMapper",0x8b2b6306,"away3d.lights.LightBase.createShadowMapper","away3d/lights/LightBase.hx",90,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_99_get_specular,"away3d.lights.LightBase","get_specular",0x4d368435,"away3d.lights.LightBase.get_specular","away3d/lights/LightBase.hx",99,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_103_set_specular,"away3d.lights.LightBase","set_specular",0x622fa7a9,"away3d.lights.LightBase.set_specular","away3d/lights/LightBase.hx",103,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_116_get_diffuse,"away3d.lights.LightBase","get_diffuse",0xd2032830,"away3d.lights.LightBase.get_diffuse","away3d/lights/LightBase.hx",116,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_120_set_diffuse,"away3d.lights.LightBase","set_diffuse",0xdc702f3c,"away3d.lights.LightBase.set_diffuse","away3d/lights/LightBase.hx",120,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_134_get_color,"away3d.lights.LightBase","get_color",0xaf8148b1,"away3d.lights.LightBase.get_color","away3d/lights/LightBase.hx",134,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_138_set_color,"away3d.lights.LightBase","set_color",0x92d234bd,"away3d.lights.LightBase.set_color","away3d/lights/LightBase.hx",138,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_153_get_ambient,"away3d.lights.LightBase","get_ambient",0xa3055ee6,"away3d.lights.LightBase.get_ambient","away3d/lights/LightBase.hx",153,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_157_set_ambient,"away3d.lights.LightBase","set_ambient",0xad7265f2,"away3d.lights.LightBase.set_ambient","away3d/lights/LightBase.hx",157,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_172_get_ambientColor,"away3d.lights.LightBase","get_ambientColor",0xaa64c09d,"away3d.lights.LightBase.get_ambientColor","away3d/lights/LightBase.hx",172,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_175_set_ambientColor,"away3d.lights.LightBase","set_ambientColor",0x00a6ae11,"away3d.lights.LightBase.set_ambientColor","away3d/lights/LightBase.hx",175,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_182_updateAmbient,"away3d.lights.LightBase","updateAmbient",0xeaa9bf86,"away3d.lights.LightBase.updateAmbient","away3d/lights/LightBase.hx",182,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_197_getObjectProjectionMatrix,"away3d.lights.LightBase","getObjectProjectionMatrix",0x19317f3c,"away3d.lights.LightBase.getObjectProjectionMatrix","away3d/lights/LightBase.hx",197,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_206_createEntityPartitionNode,"away3d.lights.LightBase","createEntityPartitionNode",0x97a8cf44,"away3d.lights.LightBase.createEntityPartitionNode","away3d/lights/LightBase.hx",206,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_214_get_assetType,"away3d.lights.LightBase","get_assetType",0x88ccd718,"away3d.lights.LightBase.get_assetType","away3d/lights/LightBase.hx",214,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_221_updateSpecular,"away3d.lights.LightBase","updateSpecular",0xb566af95,"away3d.lights.LightBase.updateSpecular","away3d/lights/LightBase.hx",221,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_231_updateDiffuse,"away3d.lights.LightBase","updateDiffuse",0x19a788d0,"away3d.lights.LightBase.updateDiffuse","away3d/lights/LightBase.hx",231,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_239_get_shadowMapper,"away3d.lights.LightBase","get_shadowMapper",0x47810633,"away3d.lights.LightBase.get_shadowMapper","away3d/lights/LightBase.hx",239,0x18dfc959)
HX_LOCAL_STACK_FRAME(_hx_pos_d6d7cb7d9251e691_243_set_shadowMapper,"away3d.lights.LightBase","set_shadowMapper",0x9dc2f3a7,"away3d.lights.LightBase.set_shadowMapper","away3d/lights/LightBase.hx",243,0x18dfc959)
namespace away3d{
namespace lights{

void LightBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_18_new)
HXLINE(  47)		this->_diffuseB = ((Float)1);
HXLINE(  46)		this->_diffuseG = ((Float)1);
HXLINE(  45)		this->_diffuseR = ((Float)1);
HXLINE(  44)		this->_diffuse = ((Float)1);
HXLINE(  42)		this->_specularB = ((Float)1);
HXLINE(  41)		this->_specularG = ((Float)1);
HXLINE(  40)		this->_specularR = ((Float)1);
HXLINE(  39)		this->_specular = ((Float)1);
HXLINE(  37)		this->_ambientB = ((Float)0);
HXLINE(  36)		this->_ambientG = ((Float)0);
HXLINE(  35)		this->_ambientR = ((Float)0);
HXLINE(  34)		this->_ambient = ((Float)0);
HXLINE(  33)		this->_ambientColor = 16777215;
HXLINE(  31)		this->_colorB = ((Float)1);
HXLINE(  30)		this->_colorG = ((Float)1);
HXLINE(  29)		this->_colorR = ((Float)1);
HXLINE(  28)		this->_color = 16777215;
HXLINE(  59)		super::__construct();
            	}

Dynamic LightBase_obj::__CreateEmpty() { return new LightBase_obj; }

void *LightBase_obj::_hx_vtable = 0;

Dynamic LightBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightBase_obj > _hx_result = new LightBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LightBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x12b32fa7) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x12b32fa7;
			}
		} else {
			return inClassId==(int)0x13fff02b;
		}
	} else {
		if (inClassId<=(int)0x1e6a8fa2) {
			return inClassId==(int)0x1e01c5a7 || inClassId==(int)0x1e6a8fa2;
		} else {
			return inClassId==(int)0x37f46043;
		}
	}
}

bool LightBase_obj::get_castsShadows(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_64_get_castsShadows)
HXDLIN(  64)		return this->_castsShadows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_castsShadows,return )

bool LightBase_obj::set_castsShadows(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_68_set_castsShadows)
HXLINE(  69)		if ((this->_castsShadows == value)) {
HXLINE(  70)			return value;
            		}
HXLINE(  72)		this->_castsShadows = value;
HXLINE(  74)		if (value) {
HXLINE(  75)			if (::hx::IsNull( this->_shadowMapper )) {
HXLINE(  76)				this->_shadowMapper = this->createShadowMapper();
            			}
HXLINE(  77)			this->_shadowMapper->set_light(::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE(  79)			if (::hx::IsNotNull( this->_shadowMapper )) {
HXLINE(  80)				this->_shadowMapper->dispose();
            			}
HXLINE(  81)			this->_shadowMapper = null();
            		}
HXLINE(  84)		this->dispatchEvent( ::away3d::events::LightEvent_obj::__alloc( HX_CTX ,HX_("castsShadowChange",64,f8,e5,91)));
HXLINE(  85)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_castsShadows,return )

 ::away3d::lights::shadowmaps::ShadowMapperBase LightBase_obj::createShadowMapper(){
            	HX_GC_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_90_createShadowMapper)
HXDLIN(  90)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  90)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,createShadowMapper,return )

Float LightBase_obj::get_specular(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_99_get_specular)
HXDLIN(  99)		return this->_specular;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_specular,return )

Float LightBase_obj::set_specular(Float value){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_103_set_specular)
HXLINE( 104)		if ((value < 0)) {
HXLINE( 105)			value = ( (Float)(0) );
            		}
HXLINE( 106)		this->_specular = value;
HXLINE( 107)		this->updateSpecular();
HXLINE( 108)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_specular,return )

Float LightBase_obj::get_diffuse(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_116_get_diffuse)
HXDLIN( 116)		return this->_diffuse;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_diffuse,return )

Float LightBase_obj::set_diffuse(Float value){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_120_set_diffuse)
HXLINE( 121)		if ((value < 0)) {
HXLINE( 122)			value = ( (Float)(0) );
            		}
HXLINE( 124)		this->_diffuse = value;
HXLINE( 125)		this->updateDiffuse();
HXLINE( 126)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_diffuse,return )

int LightBase_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_134_get_color)
HXDLIN( 134)		return this->_color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_color,return )

int LightBase_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_138_set_color)
HXLINE( 139)		this->_color = value;
HXLINE( 140)		this->_colorR = (( (Float)(((this->_color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 141)		this->_colorG = (( (Float)(((this->_color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 142)		this->_colorB = (( (Float)((this->_color & 255)) ) / ( (Float)(255) ));
HXLINE( 143)		this->updateDiffuse();
HXLINE( 144)		this->updateSpecular();
HXLINE( 145)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_color,return )

Float LightBase_obj::get_ambient(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_153_get_ambient)
HXDLIN( 153)		return this->_ambient;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_ambient,return )

Float LightBase_obj::set_ambient(Float value){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_157_set_ambient)
HXLINE( 158)		if ((value < 0)) {
HXLINE( 159)			value = ( (Float)(0) );
            		}
            		else {
HXLINE( 160)			if ((value > 1)) {
HXLINE( 161)				value = ( (Float)(1) );
            			}
            		}
HXLINE( 162)		this->_ambient = value;
HXLINE( 163)		this->updateAmbient();
HXLINE( 164)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_ambient,return )

int LightBase_obj::get_ambientColor(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_172_get_ambientColor)
HXDLIN( 172)		return this->_ambientColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_ambientColor,return )

int LightBase_obj::set_ambientColor(int value){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_175_set_ambientColor)
HXLINE( 176)		this->_ambientColor = value;
HXLINE( 177)		this->updateAmbient();
HXLINE( 178)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_ambientColor,return )

void LightBase_obj::updateAmbient(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_182_updateAmbient)
HXLINE( 183)		this->_ambientR = ((( (Float)(((this->_ambientColor >> 16) & 255)) ) / ( (Float)(255) )) * this->_ambient);
HXLINE( 184)		this->_ambientG = ((( (Float)(((this->_ambientColor >> 8) & 255)) ) / ( (Float)(255) )) * this->_ambient);
HXLINE( 185)		this->_ambientB = ((( (Float)((this->_ambientColor & 255)) ) / ( (Float)(255) )) * this->_ambient);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,updateAmbient,(void))

 ::openfl::geom::Matrix3D LightBase_obj::getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target){
            	HX_GC_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_197_getObjectProjectionMatrix)
HXDLIN( 197)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 197)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(LightBase_obj,getObjectProjectionMatrix,return )

 ::away3d::core::partition::EntityNode LightBase_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_206_createEntityPartitionNode)
HXDLIN( 206)		return  ::away3d::core::partition::LightNode_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


::String LightBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_214_get_assetType)
HXDLIN( 214)		return HX_("light",d6,90,fc,74);
            	}


void LightBase_obj::updateSpecular(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_221_updateSpecular)
HXLINE( 222)		this->_specularR = (this->_colorR * this->_specular);
HXLINE( 223)		this->_specularG = (this->_colorG * this->_specular);
HXLINE( 224)		this->_specularB = (this->_colorB * this->_specular);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,updateSpecular,(void))

void LightBase_obj::updateDiffuse(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_231_updateDiffuse)
HXLINE( 232)		this->_diffuseR = (this->_colorR * this->_diffuse);
HXLINE( 233)		this->_diffuseG = (this->_colorG * this->_diffuse);
HXLINE( 234)		this->_diffuseB = (this->_colorB * this->_diffuse);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,updateDiffuse,(void))

 ::away3d::lights::shadowmaps::ShadowMapperBase LightBase_obj::get_shadowMapper(){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_239_get_shadowMapper)
HXDLIN( 239)		return this->_shadowMapper;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightBase_obj,get_shadowMapper,return )

 ::away3d::lights::shadowmaps::ShadowMapperBase LightBase_obj::set_shadowMapper( ::away3d::lights::shadowmaps::ShadowMapperBase value){
            	HX_STACKFRAME(&_hx_pos_d6d7cb7d9251e691_243_set_shadowMapper)
HXLINE( 244)		this->_shadowMapper = value;
HXLINE( 245)		this->_shadowMapper->set_light(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 246)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightBase_obj,set_shadowMapper,return )


::hx::ObjectPtr< LightBase_obj > LightBase_obj::__new() {
	::hx::ObjectPtr< LightBase_obj > __this = new LightBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LightBase_obj > LightBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LightBase_obj *__this = (LightBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightBase_obj), true, "away3d.lights.LightBase"));
	*(void **)__this = LightBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LightBase_obj::LightBase_obj()
{
}

void LightBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightBase);
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_colorR,"_colorR");
	HX_MARK_MEMBER_NAME(_colorG,"_colorG");
	HX_MARK_MEMBER_NAME(_colorB,"_colorB");
	HX_MARK_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_MARK_MEMBER_NAME(_ambient,"_ambient");
	HX_MARK_MEMBER_NAME(_ambientR,"_ambientR");
	HX_MARK_MEMBER_NAME(_ambientG,"_ambientG");
	HX_MARK_MEMBER_NAME(_ambientB,"_ambientB");
	HX_MARK_MEMBER_NAME(_specular,"_specular");
	HX_MARK_MEMBER_NAME(_specularR,"_specularR");
	HX_MARK_MEMBER_NAME(_specularG,"_specularG");
	HX_MARK_MEMBER_NAME(_specularB,"_specularB");
	HX_MARK_MEMBER_NAME(_diffuse,"_diffuse");
	HX_MARK_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_MARK_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_MARK_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_MARK_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_MARK_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	 ::away3d::entities::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_colorR,"_colorR");
	HX_VISIT_MEMBER_NAME(_colorG,"_colorG");
	HX_VISIT_MEMBER_NAME(_colorB,"_colorB");
	HX_VISIT_MEMBER_NAME(_ambientColor,"_ambientColor");
	HX_VISIT_MEMBER_NAME(_ambient,"_ambient");
	HX_VISIT_MEMBER_NAME(_ambientR,"_ambientR");
	HX_VISIT_MEMBER_NAME(_ambientG,"_ambientG");
	HX_VISIT_MEMBER_NAME(_ambientB,"_ambientB");
	HX_VISIT_MEMBER_NAME(_specular,"_specular");
	HX_VISIT_MEMBER_NAME(_specularR,"_specularR");
	HX_VISIT_MEMBER_NAME(_specularG,"_specularG");
	HX_VISIT_MEMBER_NAME(_specularB,"_specularB");
	HX_VISIT_MEMBER_NAME(_diffuse,"_diffuse");
	HX_VISIT_MEMBER_NAME(_diffuseR,"_diffuseR");
	HX_VISIT_MEMBER_NAME(_diffuseG,"_diffuseG");
	HX_VISIT_MEMBER_NAME(_diffuseB,"_diffuseB");
	HX_VISIT_MEMBER_NAME(_castsShadows,"_castsShadows");
	HX_VISIT_MEMBER_NAME(_shadowMapper,"_shadowMapper");
	 ::away3d::entities::Entity_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LightBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return ::hx::Val( _color ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"diffuse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuse() ); }
		if (HX_FIELD_EQ(inName,"ambient") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambient() ); }
		if (HX_FIELD_EQ(inName,"_colorR") ) { return ::hx::Val( _colorR ); }
		if (HX_FIELD_EQ(inName,"_colorG") ) { return ::hx::Val( _colorG ); }
		if (HX_FIELD_EQ(inName,"_colorB") ) { return ::hx::Val( _colorB ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specular() ); }
		if (HX_FIELD_EQ(inName,"_ambient") ) { return ::hx::Val( _ambient ); }
		if (HX_FIELD_EQ(inName,"_diffuse") ) { return ::hx::Val( _diffuse ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ambientR") ) { return ::hx::Val( _ambientR ); }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { return ::hx::Val( _ambientG ); }
		if (HX_FIELD_EQ(inName,"_ambientB") ) { return ::hx::Val( _ambientB ); }
		if (HX_FIELD_EQ(inName,"_specular") ) { return ::hx::Val( _specular ); }
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { return ::hx::Val( _diffuseR ); }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { return ::hx::Val( _diffuseG ); }
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { return ::hx::Val( _diffuseB ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularR") ) { return ::hx::Val( _specularR ); }
		if (HX_FIELD_EQ(inName,"_specularG") ) { return ::hx::Val( _specularG ); }
		if (HX_FIELD_EQ(inName,"_specularB") ) { return ::hx::Val( _specularB ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_diffuse") ) { return ::hx::Val( get_diffuse_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuse") ) { return ::hx::Val( set_diffuse_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ambient") ) { return ::hx::Val( get_ambient_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambient") ) { return ::hx::Val( set_ambient_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castsShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_castsShadows() ); }
		if (HX_FIELD_EQ(inName,"ambientColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambientColor() ); }
		if (HX_FIELD_EQ(inName,"shadowMapper") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_shadowMapper() ); }
		if (HX_FIELD_EQ(inName,"get_specular") ) { return ::hx::Val( get_specular_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specular") ) { return ::hx::Val( set_specular_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { return ::hx::Val( _ambientColor ); }
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { return ::hx::Val( _castsShadows ); }
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { return ::hx::Val( _shadowMapper ); }
		if (HX_FIELD_EQ(inName,"updateAmbient") ) { return ::hx::Val( updateAmbient_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDiffuse") ) { return ::hx::Val( updateDiffuse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateSpecular") ) { return ::hx::Val( updateSpecular_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return ::hx::Val( get_castsShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_castsShadows") ) { return ::hx::Val( set_castsShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ambientColor") ) { return ::hx::Val( get_ambientColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambientColor") ) { return ::hx::Val( set_ambientColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_shadowMapper") ) { return ::hx::Val( get_shadowMapper_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shadowMapper") ) { return ::hx::Val( set_shadowMapper_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createShadowMapper") ) { return ::hx::Val( createShadowMapper_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getObjectProjectionMatrix") ) { return ::hx::Val( getObjectProjectionMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return ::hx::Val( createEntityPartitionNode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LightBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"diffuse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuse(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"ambient") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambient(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_colorR") ) { _colorR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colorG") ) { _colorG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colorB") ) { _colorB=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"specular") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specular(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_ambient") ) { _ambient=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuse") ) { _diffuse=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_ambientR") ) { _ambientR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientG") ) { _ambientG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ambientB") ) { _ambientB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specular") ) { _specular=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseR") ) { _diffuseR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseG") ) { _diffuseG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_diffuseB") ) { _diffuseB=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_specularR") ) { _specularR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularG") ) { _specularG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_specularB") ) { _specularB=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castsShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_castsShadows(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"ambientColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambientColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"shadowMapper") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shadowMapper(inValue.Cast<  ::away3d::lights::shadowmaps::ShadowMapperBase >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ambientColor") ) { _ambientColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_castsShadows") ) { _castsShadows=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowMapper") ) { _shadowMapper=inValue.Cast<  ::away3d::lights::shadowmaps::ShadowMapperBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("castsShadows",1f,fe,ad,16));
	outFields->push(HX_("specular",c3,56,6c,93));
	outFields->push(HX_("diffuse",62,61,7f,38));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("ambient",18,98,81,09));
	outFields->push(HX_("ambientColor",2b,f2,d1,97));
	outFields->push(HX_("shadowMapper",c1,37,ee,34));
	outFields->push(HX_("_color",a4,b8,43,46));
	outFields->push(HX_("_colorR",2e,d7,fd,34));
	outFields->push(HX_("_colorG",23,d7,fd,34));
	outFields->push(HX_("_colorB",1e,d7,fd,34));
	outFields->push(HX_("_ambientColor",0a,85,40,7a));
	outFields->push(HX_("_ambient",99,f1,39,43));
	outFields->push(HX_("_ambientR",99,74,79,8f));
	outFields->push(HX_("_ambientG",8e,74,79,8f));
	outFields->push(HX_("_ambientB",89,74,79,8f));
	outFields->push(HX_("_specular",22,4e,02,db));
	outFields->push(HX_("_specularR",f0,0f,02,c7));
	outFields->push(HX_("_specularG",e5,0f,02,c7));
	outFields->push(HX_("_specularB",e0,0f,02,c7));
	outFields->push(HX_("_diffuse",e3,ba,37,72));
	outFields->push(HX_("_diffuseR",0f,cc,8b,7e));
	outFields->push(HX_("_diffuseG",04,cc,8b,7e));
	outFields->push(HX_("_diffuseB",ff,cb,8b,7e));
	outFields->push(HX_("_castsShadows",fe,90,1c,f9));
	outFields->push(HX_("_shadowMapper",a0,ca,5c,17));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightBase_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(LightBase_obj,_color),HX_("_color",a4,b8,43,46)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_colorR),HX_("_colorR",2e,d7,fd,34)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_colorG),HX_("_colorG",23,d7,fd,34)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_colorB),HX_("_colorB",1e,d7,fd,34)},
	{::hx::fsInt,(int)offsetof(LightBase_obj,_ambientColor),HX_("_ambientColor",0a,85,40,7a)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_ambient),HX_("_ambient",99,f1,39,43)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_ambientR),HX_("_ambientR",99,74,79,8f)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_ambientG),HX_("_ambientG",8e,74,79,8f)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_ambientB),HX_("_ambientB",89,74,79,8f)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_specular),HX_("_specular",22,4e,02,db)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_specularR),HX_("_specularR",f0,0f,02,c7)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_specularG),HX_("_specularG",e5,0f,02,c7)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_specularB),HX_("_specularB",e0,0f,02,c7)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_diffuse),HX_("_diffuse",e3,ba,37,72)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_diffuseR),HX_("_diffuseR",0f,cc,8b,7e)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_diffuseG),HX_("_diffuseG",04,cc,8b,7e)},
	{::hx::fsFloat,(int)offsetof(LightBase_obj,_diffuseB),HX_("_diffuseB",ff,cb,8b,7e)},
	{::hx::fsBool,(int)offsetof(LightBase_obj,_castsShadows),HX_("_castsShadows",fe,90,1c,f9)},
	{::hx::fsObject /*  ::away3d::lights::shadowmaps::ShadowMapperBase */ ,(int)offsetof(LightBase_obj,_shadowMapper),HX_("_shadowMapper",a0,ca,5c,17)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LightBase_obj_sStaticStorageInfo = 0;
#endif

static ::String LightBase_obj_sMemberFields[] = {
	HX_("_color",a4,b8,43,46),
	HX_("_colorR",2e,d7,fd,34),
	HX_("_colorG",23,d7,fd,34),
	HX_("_colorB",1e,d7,fd,34),
	HX_("_ambientColor",0a,85,40,7a),
	HX_("_ambient",99,f1,39,43),
	HX_("_ambientR",99,74,79,8f),
	HX_("_ambientG",8e,74,79,8f),
	HX_("_ambientB",89,74,79,8f),
	HX_("_specular",22,4e,02,db),
	HX_("_specularR",f0,0f,02,c7),
	HX_("_specularG",e5,0f,02,c7),
	HX_("_specularB",e0,0f,02,c7),
	HX_("_diffuse",e3,ba,37,72),
	HX_("_diffuseR",0f,cc,8b,7e),
	HX_("_diffuseG",04,cc,8b,7e),
	HX_("_diffuseB",ff,cb,8b,7e),
	HX_("_castsShadows",fe,90,1c,f9),
	HX_("_shadowMapper",a0,ca,5c,17),
	HX_("get_castsShadows",a8,ea,4c,1b),
	HX_("set_castsShadows",1c,d8,8e,71),
	HX_("createShadowMapper",dd,74,0c,2f),
	HX_("get_specular",cc,0a,86,48),
	HX_("set_specular",40,2e,7f,5d),
	HX_("get_diffuse",79,c1,79,be),
	HX_("set_diffuse",85,c8,e6,c8),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_ambient",2f,f8,7b,8f),
	HX_("set_ambient",3b,ff,e8,99),
	HX_("get_ambientColor",b4,de,70,9c),
	HX_("set_ambientColor",28,cc,b2,f2),
	HX_("updateAmbient",0f,fd,ef,d4),
	HX_("getObjectProjectionMatrix",45,66,62,86),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("get_assetType",a1,14,13,73),
	HX_("updateSpecular",ec,49,96,c8),
	HX_("updateDiffuse",59,c6,ed,03),
	HX_("get_shadowMapper",4a,24,8d,39),
	HX_("set_shadowMapper",be,11,cf,8f),
	::String(null()) };

::hx::Class LightBase_obj::__mClass;

void LightBase_obj::__register()
{
	LightBase_obj _hx_dummy;
	LightBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.lights.LightBase",a5,d0,1a,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace lights
