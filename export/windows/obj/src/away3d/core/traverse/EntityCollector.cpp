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
#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItemPool
#include <away3d/core/data/EntityListItemPool.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#include <away3d/core/data/RenderableListItemPool.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
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
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6921d6cefac21e6_71_new,"away3d.core.traverse.EntityCollector","new",0x956942c0,"away3d.core.traverse.EntityCollector.new","away3d/core/traverse/EntityCollector.hx",71,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_77_init,"away3d.core.traverse.EntityCollector","init",0x2369dcb0,"away3d.core.traverse.EntityCollector.init","away3d/core/traverse/EntityCollector.hx",77,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_99_get_camera,"away3d.core.traverse.EntityCollector","get_camera",0xf95b500e,"away3d.core.traverse.EntityCollector.get_camera","away3d/core/traverse/EntityCollector.hx",99,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_103_set_camera,"away3d.core.traverse.EntityCollector","set_camera",0xfcd8ee82,"away3d.core.traverse.EntityCollector.set_camera","away3d/core/traverse/EntityCollector.hx",103,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_113_get_cullPlanes,"away3d.core.traverse.EntityCollector","get_cullPlanes",0xc3570fd2,"away3d.core.traverse.EntityCollector.get_cullPlanes","away3d/core/traverse/EntityCollector.hx",113,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_117_set_cullPlanes,"away3d.core.traverse.EntityCollector","set_cullPlanes",0xe376f846,"away3d.core.traverse.EntityCollector.set_cullPlanes","away3d/core/traverse/EntityCollector.hx",117,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_127_get_numMouseEnableds,"away3d.core.traverse.EntityCollector","get_numMouseEnableds",0x3cb0b09a,"away3d.core.traverse.EntityCollector.get_numMouseEnableds","away3d/core/traverse/EntityCollector.hx",127,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_135_get_skyBox,"away3d.core.traverse.EntityCollector","get_skyBox",0x28e6e113,"away3d.core.traverse.EntityCollector.get_skyBox","away3d/core/traverse/EntityCollector.hx",135,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_144_get_opaqueRenderableHead,"away3d.core.traverse.EntityCollector","get_opaqueRenderableHead",0xb4bb711a,"away3d.core.traverse.EntityCollector.get_opaqueRenderableHead","away3d/core/traverse/EntityCollector.hx",144,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_148_set_opaqueRenderableHead,"away3d.core.traverse.EntityCollector","set_opaqueRenderableHead",0xc795f28e,"away3d.core.traverse.EntityCollector.set_opaqueRenderableHead","away3d/core/traverse/EntityCollector.hx",148,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_159_get_blendedRenderableHead,"away3d.core.traverse.EntityCollector","get_blendedRenderableHead",0xefb0ccf7,"away3d.core.traverse.EntityCollector.get_blendedRenderableHead","away3d/core/traverse/EntityCollector.hx",159,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_163_set_blendedRenderableHead,"away3d.core.traverse.EntityCollector","set_blendedRenderableHead",0x5c079103,"away3d.core.traverse.EntityCollector.set_blendedRenderableHead","away3d/core/traverse/EntityCollector.hx",163,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_170_get_entityHead,"away3d.core.traverse.EntityCollector","get_entityHead",0x9ca6a7cc,"away3d.core.traverse.EntityCollector.get_entityHead","away3d/core/traverse/EntityCollector.hx",170,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_178_get_lights,"away3d.core.traverse.EntityCollector","get_lights",0x29d13446,"away3d.core.traverse.EntityCollector.get_lights","away3d/core/traverse/EntityCollector.hx",178,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_183_get_directionalLights,"away3d.core.traverse.EntityCollector","get_directionalLights",0xac8cbc9e,"away3d.core.traverse.EntityCollector.get_directionalLights","away3d/core/traverse/EntityCollector.hx",183,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_188_get_pointLights,"away3d.core.traverse.EntityCollector","get_pointLights",0xd023a944,"away3d.core.traverse.EntityCollector.get_pointLights","away3d/core/traverse/EntityCollector.hx",188,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_193_get_lightProbes,"away3d.core.traverse.EntityCollector","get_lightProbes",0x1b2772b0,"away3d.core.traverse.EntityCollector.get_lightProbes","away3d/core/traverse/EntityCollector.hx",193,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_200_clear,"away3d.core.traverse.EntityCollector","clear",0x637a3bed,"away3d.core.traverse.EntityCollector.clear","away3d/core/traverse/EntityCollector.hx",200,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_230_enterNode,"away3d.core.traverse.EntityCollector","enterNode",0x1805899a,"away3d.core.traverse.EntityCollector.enterNode","away3d/core/traverse/EntityCollector.hx",230,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_242_applySkyBox,"away3d.core.traverse.EntityCollector","applySkyBox",0xf0716a18,"away3d.core.traverse.EntityCollector.applySkyBox","away3d/core/traverse/EntityCollector.hx",242,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_250_applyRenderable,"away3d.core.traverse.EntityCollector","applyRenderable",0xf3379d5e,"away3d.core.traverse.EntityCollector.applyRenderable","away3d/core/traverse/EntityCollector.hx",250,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_285_applyEntity,"away3d.core.traverse.EntityCollector","applyEntity",0x0e75a591,"away3d.core.traverse.EntityCollector.applyEntity","away3d/core/traverse/EntityCollector.hx",285,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_301_applyUnknownLight,"away3d.core.traverse.EntityCollector","applyUnknownLight",0xc1bbe1da,"away3d.core.traverse.EntityCollector.applyUnknownLight","away3d/core/traverse/EntityCollector.hx",301,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_305_applyDirectionalLight,"away3d.core.traverse.EntityCollector","applyDirectionalLight",0x9e87137a,"away3d.core.traverse.EntityCollector.applyDirectionalLight","away3d/core/traverse/EntityCollector.hx",305,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_311_applyPointLight,"away3d.core.traverse.EntityCollector","applyPointLight",0x55590bd4,"away3d.core.traverse.EntityCollector.applyPointLight","away3d/core/traverse/EntityCollector.hx",311,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_317_applyLightProbe,"away3d.core.traverse.EntityCollector","applyLightProbe",0x4a3453e8,"away3d.core.traverse.EntityCollector.applyLightProbe","away3d/core/traverse/EntityCollector.hx",317,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_327_get_numTriangles,"away3d.core.traverse.EntityCollector","get_numTriangles",0x7d3ab7ae,"away3d.core.traverse.EntityCollector.get_numTriangles","away3d/core/traverse/EntityCollector.hx",327,0x4016e891)
HX_LOCAL_STACK_FRAME(_hx_pos_b6921d6cefac21e6_334_cleanUp,"away3d.core.traverse.EntityCollector","cleanUp",0xe37012a4,"away3d.core.traverse.EntityCollector.cleanUp","away3d/core/traverse/EntityCollector.hx",334,0x4016e891)
namespace away3d{
namespace core{
namespace traverse{

void EntityCollector_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_71_new)
HXLINE(  72)		super::__construct();
HXLINE(  73)		this->init();
            	}

Dynamic EntityCollector_obj::__CreateEmpty() { return new EntityCollector_obj; }

void *EntityCollector_obj::_hx_vtable = 0;

Dynamic EntityCollector_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EntityCollector_obj > _hx_result = new EntityCollector_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EntityCollector_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23f97a4a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x23f97a4a;
	} else {
		return inClassId==(int)0x6a4dd616;
	}
}

void EntityCollector_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_b6921d6cefac21e6_77_init)
HXLINE(  78)		int length = null();
HXDLIN(  78)		bool fixed = null();
HXDLIN(  78)		::Array< ::Dynamic> array = null();
HXDLIN(  78)		this->_lights =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  79)		int length1 = null();
HXDLIN(  79)		bool fixed1 = null();
HXDLIN(  79)		::Array< ::Dynamic> array1 = null();
HXDLIN(  79)		this->_directionalLights =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  80)		int length2 = null();
HXDLIN(  80)		bool fixed2 = null();
HXDLIN(  80)		::Array< ::Dynamic> array2 = null();
HXDLIN(  80)		this->_pointLights =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length2,fixed2,array2,true);
HXLINE(  81)		int length3 = null();
HXDLIN(  81)		bool fixed3 = null();
HXDLIN(  81)		::Array< ::Dynamic> array3 = null();
HXDLIN(  81)		this->_lightProbes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE(  82)		this->_renderableListItemPool =  ::away3d::core::data::RenderableListItemPool_obj::__alloc( HX_CTX );
HXLINE(  83)		this->_entityListItemPool =  ::away3d::core::data::EntityListItemPool_obj::__alloc( HX_CTX );
HXLINE(  84)		this->_numEntities = 0;
HXLINE(  85)		this->_numLights = 0;
HXLINE(  86)		this->_numTriangles = 0;
HXLINE(  87)		this->_numMouseEnableds = 0;
HXLINE(  88)		this->_numDirectionalLights = 0;
HXLINE(  89)		this->_numPointLights = 0;
HXLINE(  90)		this->_numLightProbes = 0;
HXLINE(  91)		this->_numCullPlanes = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,init,(void))

 ::away3d::cameras::Camera3D EntityCollector_obj::get_camera(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_99_get_camera)
HXDLIN(  99)		return this->_camera;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_camera,return )

 ::away3d::cameras::Camera3D EntityCollector_obj::set_camera( ::away3d::cameras::Camera3D value){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_103_set_camera)
HXLINE( 104)		this->_camera = value;
HXLINE( 105)		this->_entryPoint = this->_camera->get_scenePosition();
HXLINE( 106)		 ::openfl::geom::Matrix3D _hx_tmp = this->_camera->get_transform();
HXDLIN( 106)		this->_cameraForward = ::away3d::core::math::Matrix3DUtils_obj::getForward(_hx_tmp,this->_cameraForward);
HXLINE( 107)		this->_cullPlanes = this->_camera->get_frustumPlanes();
HXLINE( 108)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_camera,return )

 ::openfl::_Vector::ObjectVector EntityCollector_obj::get_cullPlanes(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_113_get_cullPlanes)
HXDLIN( 113)		return this->_customCullPlanes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_cullPlanes,return )

 ::openfl::_Vector::ObjectVector EntityCollector_obj::set_cullPlanes( ::openfl::_Vector::ObjectVector value){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_117_set_cullPlanes)
HXLINE( 118)		this->_customCullPlanes = value;
HXLINE( 119)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_cullPlanes,return )

int EntityCollector_obj::get_numMouseEnableds(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_127_get_numMouseEnableds)
HXDLIN( 127)		return this->_numMouseEnableds;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_numMouseEnableds,return )

::Dynamic EntityCollector_obj::get_skyBox(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_135_get_skyBox)
HXDLIN( 135)		return this->_skyBox;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_skyBox,return )

 ::away3d::core::data::RenderableListItem EntityCollector_obj::get_opaqueRenderableHead(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_144_get_opaqueRenderableHead)
HXDLIN( 144)		return this->_opaqueRenderableHead;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_opaqueRenderableHead,return )

 ::away3d::core::data::RenderableListItem EntityCollector_obj::set_opaqueRenderableHead( ::away3d::core::data::RenderableListItem value){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_148_set_opaqueRenderableHead)
HXLINE( 149)		this->_opaqueRenderableHead = value;
HXLINE( 150)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_opaqueRenderableHead,return )

 ::away3d::core::data::RenderableListItem EntityCollector_obj::get_blendedRenderableHead(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_159_get_blendedRenderableHead)
HXDLIN( 159)		return this->_blendedRenderableHead;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_blendedRenderableHead,return )

 ::away3d::core::data::RenderableListItem EntityCollector_obj::set_blendedRenderableHead( ::away3d::core::data::RenderableListItem value){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_163_set_blendedRenderableHead)
HXLINE( 164)		this->_blendedRenderableHead = value;
HXLINE( 165)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EntityCollector_obj,set_blendedRenderableHead,return )

 ::away3d::core::data::EntityListItem EntityCollector_obj::get_entityHead(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_170_get_entityHead)
HXDLIN( 170)		return this->_entityHead;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_entityHead,return )

 ::openfl::_Vector::ObjectVector EntityCollector_obj::get_lights(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_178_get_lights)
HXDLIN( 178)		return this->_lights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_lights,return )

 ::openfl::_Vector::ObjectVector EntityCollector_obj::get_directionalLights(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_183_get_directionalLights)
HXDLIN( 183)		return this->_directionalLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_directionalLights,return )

 ::openfl::_Vector::ObjectVector EntityCollector_obj::get_pointLights(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_188_get_pointLights)
HXDLIN( 188)		return this->_pointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_pointLights,return )

 ::openfl::_Vector::ObjectVector EntityCollector_obj::get_lightProbes(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_193_get_lightProbes)
HXDLIN( 193)		return this->_lightProbes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_lightProbes,return )

void EntityCollector_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_200_clear)
HXLINE( 201)		if (::hx::IsNotNull( this->_camera )) {
HXLINE( 202)			this->_entryPoint = this->_camera->get_scenePosition();
HXLINE( 203)			 ::openfl::geom::Matrix3D _hx_tmp = this->_camera->get_transform();
HXDLIN( 203)			this->_cameraForward = ::away3d::core::math::Matrix3DUtils_obj::getForward(_hx_tmp,this->_cameraForward);
            		}
HXLINE( 205)		 ::openfl::_Vector::ObjectVector _hx_tmp;
HXDLIN( 205)		if (::hx::IsNotNull( this->_customCullPlanes )) {
HXLINE( 205)			_hx_tmp = this->_customCullPlanes;
            		}
            		else {
HXLINE( 205)			if (::hx::IsNotNull( this->_camera )) {
HXLINE( 205)				_hx_tmp = this->_camera->get_frustumPlanes();
            			}
            			else {
HXLINE( 205)				_hx_tmp = null();
            			}
            		}
HXDLIN( 205)		this->_cullPlanes = _hx_tmp;
HXLINE( 206)		int _hx_tmp1;
HXDLIN( 206)		if (::hx::IsNotNull( this->_cullPlanes )) {
HXLINE( 206)			_hx_tmp1 = this->_cullPlanes->get_length();
            		}
            		else {
HXLINE( 206)			_hx_tmp1 = 0;
            		}
HXDLIN( 206)		this->_numCullPlanes = _hx_tmp1;
HXLINE( 207)		this->_numTriangles = (this->_numMouseEnableds = 0);
HXLINE( 208)		this->_blendedRenderableHead = null();
HXLINE( 209)		this->_opaqueRenderableHead = null();
HXLINE( 210)		this->_entityHead = null();
HXLINE( 211)		this->_renderableListItemPool->freeAll();
HXLINE( 212)		this->_entityListItemPool->freeAll();
HXLINE( 213)		this->_skyBox = null();
HXLINE( 214)		if ((this->_numLights > 0)) {
HXLINE( 215)			this->_lights->set_length((this->_numLights = 0));
            		}
HXLINE( 216)		if ((this->_numDirectionalLights > 0)) {
HXLINE( 217)			this->_directionalLights->set_length((this->_numDirectionalLights = 0));
            		}
HXLINE( 218)		if ((this->_numPointLights > 0)) {
HXLINE( 219)			this->_pointLights->set_length((this->_numPointLights = 0));
            		}
HXLINE( 220)		if ((this->_numLightProbes > 0)) {
HXLINE( 221)			this->_lightProbes->set_length((this->_numLightProbes = 0));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,clear,(void))

bool EntityCollector_obj::enterNode( ::away3d::core::partition::NodeBase node){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_230_enterNode)
HXLINE( 231)		bool enter;
HXDLIN( 231)		if ((::away3d::core::traverse::PartitionTraverser_obj::_collectionMark != node->_collectionMark)) {
HXLINE( 231)			enter = node->isInFrustum(this->_cullPlanes,this->_numCullPlanes);
            		}
            		else {
HXLINE( 231)			enter = false;
            		}
HXLINE( 232)		node->_collectionMark = ::away3d::core::traverse::PartitionTraverser_obj::_collectionMark;
HXLINE( 233)		return enter;
            	}


void EntityCollector_obj::applySkyBox(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_242_applySkyBox)
HXDLIN( 242)		this->_skyBox = renderable;
            	}


void EntityCollector_obj::applyRenderable(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_250_applyRenderable)
HXLINE( 252)		 ::away3d::entities::Entity entity = ::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable);
HXLINE( 253)		if (::away3d::core::base::IRenderable_obj::get_mouseEnabled(renderable)) {
HXLINE( 254)			++this->_numMouseEnableds;
            		}
HXLINE( 255)		 ::away3d::core::traverse::EntityCollector _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)		int _hx_tmp1 = _hx_tmp->_numTriangles;
HXDLIN( 255)		_hx_tmp->_numTriangles = (_hx_tmp1 + ::away3d::core::base::IRenderable_obj::get_numTriangles(renderable));
HXLINE( 251)		 ::away3d::materials::MaterialBase material = ::away3d::core::base::IMaterialOwner_obj::get_material(renderable);
HXLINE( 258)		if (::hx::IsNotNull( material )) {
HXLINE( 259)			 ::away3d::core::data::RenderableListItem item = this->_renderableListItemPool->getItem();
HXLINE( 260)			item->renderable = renderable;
HXLINE( 261)			item->materialId = material->_uniqueId;
HXLINE( 262)			item->renderOrderId = material->_renderOrderId;
HXLINE( 263)			item->cascaded = false;
HXLINE( 264)			 ::openfl::geom::Vector3D entityScenePos = entity->get_scenePosition();
HXLINE( 265)			Float dx = (this->_entryPoint->x - entityScenePos->x);
HXLINE( 266)			Float dy = (this->_entryPoint->y - entityScenePos->y);
HXLINE( 267)			Float dz = (this->_entryPoint->z - entityScenePos->z);
HXLINE( 269)			Float _hx_tmp = (((dx * this->_cameraForward->x) + (dy * this->_cameraForward->y)) + (dz * this->_cameraForward->z));
HXDLIN( 269)			item->zIndex = (_hx_tmp + entity->get_zOffset());
HXLINE( 270)			item->renderSceneTransform = ::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,this->_camera);
HXLINE( 271)			if (material->get_requiresBlending()) {
HXLINE( 272)				item->next = this->_blendedRenderableHead;
HXLINE( 273)				this->_blendedRenderableHead = item;
            			}
            			else {
HXLINE( 275)				item->next = this->_opaqueRenderableHead;
HXLINE( 276)				this->_opaqueRenderableHead = item;
            			}
            		}
            	}


void EntityCollector_obj::applyEntity( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_285_applyEntity)
HXLINE( 286)		++this->_numEntities;
HXLINE( 288)		 ::away3d::core::data::EntityListItem item = this->_entityListItemPool->getItem();
HXLINE( 289)		item->entity = entity;
HXLINE( 291)		item->next = this->_entityHead;
HXLINE( 292)		this->_entityHead = item;
            	}


void EntityCollector_obj::applyUnknownLight( ::away3d::lights::LightBase light){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_301_applyUnknownLight)
HXDLIN( 301)		this->_lights->set(this->_numLights++,light).StaticCast<  ::away3d::lights::LightBase >();
            	}


void EntityCollector_obj::applyDirectionalLight( ::away3d::lights::DirectionalLight light){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_305_applyDirectionalLight)
HXLINE( 306)		this->_lights->set(this->_numLights++,( ( ::away3d::lights::LightBase)(light) )).StaticCast<  ::away3d::lights::LightBase >();
HXLINE( 307)		this->_directionalLights->set(this->_numDirectionalLights++,light).StaticCast<  ::away3d::lights::DirectionalLight >();
            	}


void EntityCollector_obj::applyPointLight( ::away3d::lights::PointLight light){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_311_applyPointLight)
HXLINE( 312)		this->_lights->set(this->_numLights++,( ( ::away3d::lights::LightBase)(light) )).StaticCast<  ::away3d::lights::LightBase >();
HXLINE( 313)		this->_pointLights->set(this->_numPointLights++,light).StaticCast<  ::away3d::lights::PointLight >();
            	}


void EntityCollector_obj::applyLightProbe( ::away3d::lights::LightProbe light){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_317_applyLightProbe)
HXLINE( 318)		this->_lights->set(this->_numLights++,( ( ::away3d::lights::LightBase)(light) )).StaticCast<  ::away3d::lights::LightBase >();
HXLINE( 319)		this->_lightProbes->set(this->_numLightProbes++,light).StaticCast<  ::away3d::lights::LightProbe >();
            	}


int EntityCollector_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_327_get_numTriangles)
HXDLIN( 327)		return this->_numTriangles;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,get_numTriangles,return )

void EntityCollector_obj::cleanUp(){
            	HX_STACKFRAME(&_hx_pos_b6921d6cefac21e6_334_cleanUp)
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityCollector_obj,cleanUp,(void))


::hx::ObjectPtr< EntityCollector_obj > EntityCollector_obj::__new() {
	::hx::ObjectPtr< EntityCollector_obj > __this = new EntityCollector_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EntityCollector_obj > EntityCollector_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EntityCollector_obj *__this = (EntityCollector_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EntityCollector_obj), true, "away3d.core.traverse.EntityCollector"));
	*(void **)__this = EntityCollector_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EntityCollector_obj::EntityCollector_obj()
{
}

void EntityCollector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityCollector);
	HX_MARK_MEMBER_NAME(_skyBox,"_skyBox");
	HX_MARK_MEMBER_NAME(_opaqueRenderableHead,"_opaqueRenderableHead");
	HX_MARK_MEMBER_NAME(_blendedRenderableHead,"_blendedRenderableHead");
	HX_MARK_MEMBER_NAME(_entityHead,"_entityHead");
	HX_MARK_MEMBER_NAME(_renderableListItemPool,"_renderableListItemPool");
	HX_MARK_MEMBER_NAME(_entityListItemPool,"_entityListItemPool");
	HX_MARK_MEMBER_NAME(_lights,"_lights");
	HX_MARK_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_MARK_MEMBER_NAME(_pointLights,"_pointLights");
	HX_MARK_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_MARK_MEMBER_NAME(_numEntities,"_numEntities");
	HX_MARK_MEMBER_NAME(_numLights,"_numLights");
	HX_MARK_MEMBER_NAME(_numTriangles,"_numTriangles");
	HX_MARK_MEMBER_NAME(_numMouseEnableds,"_numMouseEnableds");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_cameraForward,"_cameraForward");
	HX_MARK_MEMBER_NAME(_customCullPlanes,"_customCullPlanes");
	HX_MARK_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_MARK_MEMBER_NAME(_numCullPlanes,"_numCullPlanes");
	 ::away3d::core::traverse::PartitionTraverser_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EntityCollector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_skyBox,"_skyBox");
	HX_VISIT_MEMBER_NAME(_opaqueRenderableHead,"_opaqueRenderableHead");
	HX_VISIT_MEMBER_NAME(_blendedRenderableHead,"_blendedRenderableHead");
	HX_VISIT_MEMBER_NAME(_entityHead,"_entityHead");
	HX_VISIT_MEMBER_NAME(_renderableListItemPool,"_renderableListItemPool");
	HX_VISIT_MEMBER_NAME(_entityListItemPool,"_entityListItemPool");
	HX_VISIT_MEMBER_NAME(_lights,"_lights");
	HX_VISIT_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_VISIT_MEMBER_NAME(_pointLights,"_pointLights");
	HX_VISIT_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_VISIT_MEMBER_NAME(_numEntities,"_numEntities");
	HX_VISIT_MEMBER_NAME(_numLights,"_numLights");
	HX_VISIT_MEMBER_NAME(_numTriangles,"_numTriangles");
	HX_VISIT_MEMBER_NAME(_numMouseEnableds,"_numMouseEnableds");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_cameraForward,"_cameraForward");
	HX_VISIT_MEMBER_NAME(_customCullPlanes,"_customCullPlanes");
	HX_VISIT_MEMBER_NAME(_cullPlanes,"_cullPlanes");
	HX_VISIT_MEMBER_NAME(_numCullPlanes,"_numCullPlanes");
	 ::away3d::core::traverse::PartitionTraverser_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val EntityCollector_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_camera() ); }
		if (HX_FIELD_EQ(inName,"skyBox") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_skyBox() ); }
		if (HX_FIELD_EQ(inName,"lights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lights() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_skyBox") ) { return ::hx::Val( _skyBox ); }
		if (HX_FIELD_EQ(inName,"_lights") ) { return ::hx::Val( _lights ); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return ::hx::Val( _camera ); }
		if (HX_FIELD_EQ(inName,"cleanUp") ) { return ::hx::Val( cleanUp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"enterNode") ) { return ::hx::Val( enterNode_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cullPlanes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cullPlanes() ); }
		if (HX_FIELD_EQ(inName,"entityHead") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_entityHead() ); }
		if (HX_FIELD_EQ(inName,"_numLights") ) { return ::hx::Val( _numLights ); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return ::hx::Val( get_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return ::hx::Val( set_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_skyBox") ) { return ::hx::Val( get_skyBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_lights") ) { return ::hx::Val( get_lights_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pointLights() ); }
		if (HX_FIELD_EQ(inName,"lightProbes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightProbes() ); }
		if (HX_FIELD_EQ(inName,"_entityHead") ) { return ::hx::Val( _entityHead ); }
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { return ::hx::Val( _cullPlanes ); }
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return ::hx::Val( applySkyBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyEntity") ) { return ::hx::Val( applyEntity_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numTriangles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numTriangles() ); }
		if (HX_FIELD_EQ(inName,"_pointLights") ) { return ::hx::Val( _pointLights ); }
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { return ::hx::Val( _lightProbes ); }
		if (HX_FIELD_EQ(inName,"_numEntities") ) { return ::hx::Val( _numEntities ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_numTriangles") ) { return ::hx::Val( _numTriangles ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cameraForward") ) { return ::hx::Val( _cameraForward ); }
		if (HX_FIELD_EQ(inName,"_numCullPlanes") ) { return ::hx::Val( _numCullPlanes ); }
		if (HX_FIELD_EQ(inName,"get_cullPlanes") ) { return ::hx::Val( get_cullPlanes_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cullPlanes") ) { return ::hx::Val( set_cullPlanes_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_entityHead") ) { return ::hx::Val( get_entityHead_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return ::hx::Val( _numPointLights ); }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return ::hx::Val( _numLightProbes ); }
		if (HX_FIELD_EQ(inName,"get_pointLights") ) { return ::hx::Val( get_pointLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_lightProbes") ) { return ::hx::Val( get_lightProbes_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return ::hx::Val( applyRenderable_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPointLight") ) { return ::hx::Val( applyPointLight_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyLightProbe") ) { return ::hx::Val( applyLightProbe_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"numMouseEnableds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numMouseEnableds() ); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return ::hx::Val( get_numTriangles_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"directionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_directionalLights() ); }
		if (HX_FIELD_EQ(inName,"_numMouseEnableds") ) { return ::hx::Val( _numMouseEnableds ); }
		if (HX_FIELD_EQ(inName,"_customCullPlanes") ) { return ::hx::Val( _customCullPlanes ); }
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return ::hx::Val( applyUnknownLight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { return ::hx::Val( _directionalLights ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_entityListItemPool") ) { return ::hx::Val( _entityListItemPool ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"opaqueRenderableHead") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_opaqueRenderableHead() ); }
		if (HX_FIELD_EQ(inName,"get_numMouseEnableds") ) { return ::hx::Val( get_numMouseEnableds_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"blendedRenderableHead") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blendedRenderableHead() ); }
		if (HX_FIELD_EQ(inName,"_opaqueRenderableHead") ) { return ::hx::Val( _opaqueRenderableHead ); }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return ::hx::Val( _numDirectionalLights ); }
		if (HX_FIELD_EQ(inName,"get_directionalLights") ) { return ::hx::Val( get_directionalLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyDirectionalLight") ) { return ::hx::Val( applyDirectionalLight_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_blendedRenderableHead") ) { return ::hx::Val( _blendedRenderableHead ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_renderableListItemPool") ) { return ::hx::Val( _renderableListItemPool ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_opaqueRenderableHead") ) { return ::hx::Val( get_opaqueRenderableHead_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_opaqueRenderableHead") ) { return ::hx::Val( set_opaqueRenderableHead_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_blendedRenderableHead") ) { return ::hx::Val( get_blendedRenderableHead_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blendedRenderableHead") ) { return ::hx::Val( set_blendedRenderableHead_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EntityCollector_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_camera(inValue.Cast<  ::away3d::cameras::Camera3D >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_skyBox") ) { _skyBox=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lights") ) { _lights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast<  ::away3d::cameras::Camera3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cullPlanes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cullPlanes(inValue.Cast<  ::openfl::_Vector::ObjectVector >()) ); }
		if (HX_FIELD_EQ(inName,"_numLights") ) { _numLights=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_entityHead") ) { _entityHead=inValue.Cast<  ::away3d::core::data::EntityListItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cullPlanes") ) { _cullPlanes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_pointLights") ) { _pointLights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { _lightProbes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numEntities") ) { _numEntities=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_numTriangles") ) { _numTriangles=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cameraForward") ) { _cameraForward=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numCullPlanes") ) { _numCullPlanes=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_numMouseEnableds") ) { _numMouseEnableds=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customCullPlanes") ) { _customCullPlanes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { _directionalLights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_entityListItemPool") ) { _entityListItemPool=inValue.Cast<  ::away3d::core::data::EntityListItemPool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"opaqueRenderableHead") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_opaqueRenderableHead(inValue.Cast<  ::away3d::core::data::RenderableListItem >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"blendedRenderableHead") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blendedRenderableHead(inValue.Cast<  ::away3d::core::data::RenderableListItem >()) ); }
		if (HX_FIELD_EQ(inName,"_opaqueRenderableHead") ) { _opaqueRenderableHead=inValue.Cast<  ::away3d::core::data::RenderableListItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_blendedRenderableHead") ) { _blendedRenderableHead=inValue.Cast<  ::away3d::core::data::RenderableListItem >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_renderableListItemPool") ) { _renderableListItemPool=inValue.Cast<  ::away3d::core::data::RenderableListItemPool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityCollector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("camera",a5,46,8c,b7));
	outFields->push(HX_("cullPlanes",e9,9d,bc,dd));
	outFields->push(HX_("numMouseEnableds",f1,69,22,55));
	outFields->push(HX_("skyBox",aa,d7,17,e7));
	outFields->push(HX_("opaqueRenderableHead",f1,21,da,92));
	outFields->push(HX_("blendedRenderableHead",40,d8,6c,6c));
	outFields->push(HX_("entityHead",e3,35,0c,b7));
	outFields->push(HX_("lights",dd,2a,02,e8));
	outFields->push(HX_("directionalLights",67,2f,9d,f7));
	outFields->push(HX_("pointLights",4d,6f,9a,ce));
	outFields->push(HX_("lightProbes",b9,38,9e,19));
	outFields->push(HX_("numTriangles",85,39,b1,26));
	outFields->push(HX_("_skyBox",49,e9,8e,55));
	outFields->push(HX_("_opaqueRenderableHead",d0,2b,75,01));
	outFields->push(HX_("_blendedRenderableHead",81,71,7a,c5));
	outFields->push(HX_("_entityHead",02,03,96,89));
	outFields->push(HX_("_renderableListItemPool",bc,8d,44,20));
	outFields->push(HX_("_entityListItemPool",ef,e9,88,c9));
	outFields->push(HX_("_lights",7c,3c,79,56));
	outFields->push(HX_("_directionalLights",28,d4,b2,ca));
	outFields->push(HX_("_pointLights",4e,1d,a4,34));
	outFields->push(HX_("_lightProbes",ba,e6,a7,7f));
	outFields->push(HX_("_numEntities",a8,94,b5,e4));
	outFields->push(HX_("_numLights",84,f1,a5,f4));
	outFields->push(HX_("_numTriangles",64,cc,1f,09));
	outFields->push(HX_("_numMouseEnableds",50,58,9d,ed));
	outFields->push(HX_("_camera",44,58,03,26));
	outFields->push(HX_("_numDirectionalLights",20,ac,83,2a));
	outFields->push(HX_("_numPointLights",46,2b,22,82));
	outFields->push(HX_("_numLightProbes",b2,f4,25,cd));
	outFields->push(HX_("_cameraForward",e1,01,1a,2c));
	outFields->push(HX_("_customCullPlanes",59,ff,51,fb));
	outFields->push(HX_("_cullPlanes",08,6b,46,b0));
	outFields->push(HX_("_numCullPlanes",10,44,a6,f6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EntityCollector_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(EntityCollector_obj,_skyBox),HX_("_skyBox",49,e9,8e,55)},
	{::hx::fsObject /*  ::away3d::core::data::RenderableListItem */ ,(int)offsetof(EntityCollector_obj,_opaqueRenderableHead),HX_("_opaqueRenderableHead",d0,2b,75,01)},
	{::hx::fsObject /*  ::away3d::core::data::RenderableListItem */ ,(int)offsetof(EntityCollector_obj,_blendedRenderableHead),HX_("_blendedRenderableHead",81,71,7a,c5)},
	{::hx::fsObject /*  ::away3d::core::data::EntityListItem */ ,(int)offsetof(EntityCollector_obj,_entityHead),HX_("_entityHead",02,03,96,89)},
	{::hx::fsObject /*  ::away3d::core::data::RenderableListItemPool */ ,(int)offsetof(EntityCollector_obj,_renderableListItemPool),HX_("_renderableListItemPool",bc,8d,44,20)},
	{::hx::fsObject /*  ::away3d::core::data::EntityListItemPool */ ,(int)offsetof(EntityCollector_obj,_entityListItemPool),HX_("_entityListItemPool",ef,e9,88,c9)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(EntityCollector_obj,_lights),HX_("_lights",7c,3c,79,56)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(EntityCollector_obj,_directionalLights),HX_("_directionalLights",28,d4,b2,ca)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(EntityCollector_obj,_pointLights),HX_("_pointLights",4e,1d,a4,34)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(EntityCollector_obj,_lightProbes),HX_("_lightProbes",ba,e6,a7,7f)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numEntities),HX_("_numEntities",a8,94,b5,e4)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numLights),HX_("_numLights",84,f1,a5,f4)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numTriangles),HX_("_numTriangles",64,cc,1f,09)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numMouseEnableds),HX_("_numMouseEnableds",50,58,9d,ed)},
	{::hx::fsObject /*  ::away3d::cameras::Camera3D */ ,(int)offsetof(EntityCollector_obj,_camera),HX_("_camera",44,58,03,26)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numDirectionalLights),HX_("_numDirectionalLights",20,ac,83,2a)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numPointLights),HX_("_numPointLights",46,2b,22,82)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numLightProbes),HX_("_numLightProbes",b2,f4,25,cd)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(EntityCollector_obj,_cameraForward),HX_("_cameraForward",e1,01,1a,2c)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(EntityCollector_obj,_customCullPlanes),HX_("_customCullPlanes",59,ff,51,fb)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(EntityCollector_obj,_cullPlanes),HX_("_cullPlanes",08,6b,46,b0)},
	{::hx::fsInt,(int)offsetof(EntityCollector_obj,_numCullPlanes),HX_("_numCullPlanes",10,44,a6,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EntityCollector_obj_sStaticStorageInfo = 0;
#endif

static ::String EntityCollector_obj_sMemberFields[] = {
	HX_("_skyBox",49,e9,8e,55),
	HX_("_opaqueRenderableHead",d0,2b,75,01),
	HX_("_blendedRenderableHead",81,71,7a,c5),
	HX_("_entityHead",02,03,96,89),
	HX_("_renderableListItemPool",bc,8d,44,20),
	HX_("_entityListItemPool",ef,e9,88,c9),
	HX_("_lights",7c,3c,79,56),
	HX_("_directionalLights",28,d4,b2,ca),
	HX_("_pointLights",4e,1d,a4,34),
	HX_("_lightProbes",ba,e6,a7,7f),
	HX_("_numEntities",a8,94,b5,e4),
	HX_("_numLights",84,f1,a5,f4),
	HX_("_numTriangles",64,cc,1f,09),
	HX_("_numMouseEnableds",50,58,9d,ed),
	HX_("_camera",44,58,03,26),
	HX_("_numDirectionalLights",20,ac,83,2a),
	HX_("_numPointLights",46,2b,22,82),
	HX_("_numLightProbes",b2,f4,25,cd),
	HX_("_cameraForward",e1,01,1a,2c),
	HX_("_customCullPlanes",59,ff,51,fb),
	HX_("_cullPlanes",08,6b,46,b0),
	HX_("_numCullPlanes",10,44,a6,f6),
	HX_("init",10,3b,bb,45),
	HX_("get_camera",6e,b6,13,a8),
	HX_("set_camera",e2,54,91,ab),
	HX_("get_cullPlanes",32,26,b2,53),
	HX_("set_cullPlanes",a6,0e,d2,73),
	HX_("get_numMouseEnableds",fa,ce,8c,73),
	HX_("get_skyBox",73,47,9f,d7),
	HX_("get_opaqueRenderableHead",7a,3f,76,d5),
	HX_("set_opaqueRenderableHead",ee,c0,50,e8),
	HX_("get_blendedRenderableHead",97,92,6a,72),
	HX_("set_blendedRenderableHead",a3,56,c1,de),
	HX_("get_entityHead",2c,be,01,2d),
	HX_("get_lights",a6,9a,89,d8),
	HX_("get_directionalLights",3e,32,4b,76),
	HX_("get_pointLights",e4,26,7c,8f),
	HX_("get_lightProbes",50,f0,7f,da),
	HX_("clear",8d,71,5b,48),
	HX_("enterNode",3a,0f,42,de),
	HX_("applySkyBox",b8,97,12,23),
	HX_("applyRenderable",fe,1a,90,b2),
	HX_("applyEntity",31,d3,16,41),
	HX_("applyUnknownLight",7a,07,67,66),
	HX_("applyDirectionalLight",1a,89,45,68),
	HX_("applyPointLight",74,89,b1,14),
	HX_("applyLightProbe",88,d1,8c,09),
	HX_("get_numTriangles",0e,26,50,2b),
	HX_("cleanUp",44,f0,41,ab),
	::String(null()) };

::hx::Class EntityCollector_obj::__mClass;

void EntityCollector_obj::__register()
{
	EntityCollector_obj _hx_dummy;
	EntityCollector_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.traverse.EntityCollector",ce,22,e9,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EntityCollector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EntityCollector_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EntityCollector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EntityCollector_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
