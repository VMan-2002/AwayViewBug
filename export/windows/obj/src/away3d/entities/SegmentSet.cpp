#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingSphere
#include <away3d/bounds/BoundingSphere.h>
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
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
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_RenderableNode
#include <away3d/core/partition/RenderableNode.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegRef
#include <away3d/entities/SegRef.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_entities_SubSet
#include <away3d/entities/SubSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SegmentMaterial
#include <away3d/materials/SegmentMaterial.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_859440ed151b9aef_26_new,"away3d.entities.SegmentSet","new",0x6069a01f,"away3d.entities.SegmentSet.new","away3d/entities/SegmentSet.hx",26,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_83_addSegment,"away3d.entities.SegmentSet","addSegment",0x81ce31b3,"away3d.entities.SegmentSet.addSegment","away3d/entities/SegmentSet.hx",83,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_138_removeSegmentByIndex,"away3d.entities.SegmentSet","removeSegmentByIndex",0x5686570d,"away3d.entities.SegmentSet.removeSegmentByIndex","away3d/entities/SegmentSet.hx",138,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_204_removeSegment,"away3d.entities.SegmentSet","removeSegment",0xaa89c04e,"away3d.entities.SegmentSet.removeSegment","away3d/entities/SegmentSet.hx",204,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_214_removeAllSegments,"away3d.entities.SegmentSet","removeAllSegments",0xec7105bc,"away3d.entities.SegmentSet.removeAllSegments","away3d/entities/SegmentSet.hx",214,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_246_getSegment,"away3d.entities.SegmentSet","getSegment",0x69a58bde,"away3d.entities.SegmentSet.getSegment","away3d/entities/SegmentSet.hx",246,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_258_get_segmentCount,"away3d.entities.SegmentSet","get_segmentCount",0x1eba0d86,"away3d.entities.SegmentSet.get_segmentCount","away3d/entities/SegmentSet.hx",258,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_262_get_subSetCount,"away3d.entities.SegmentSet","get_subSetCount",0xd5363d43,"away3d.entities.SegmentSet.get_subSetCount","away3d/entities/SegmentSet.hx",262,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_266_updateSegment,"away3d.entities.SegmentSet","updateSegment",0x9d3dc929,"away3d.entities.SegmentSet.updateSegment","away3d/entities/SegmentSet.hx",266,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_335_get_hasData,"away3d.entities.SegmentSet","get_hasData",0x2abbfd7a,"away3d.entities.SegmentSet.get_hasData","away3d/entities/SegmentSet.hx",335,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_339_getIndexBuffer,"away3d.entities.SegmentSet","getIndexBuffer",0xf2c6135d,"away3d.entities.SegmentSet.getIndexBuffer","away3d/entities/SegmentSet.hx",339,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_351_activateVertexBuffer,"away3d.entities.SegmentSet","activateVertexBuffer",0xc23ce138,"away3d.entities.SegmentSet.activateVertexBuffer","away3d/entities/SegmentSet.hx",351,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_375_activateUVBuffer,"away3d.entities.SegmentSet","activateUVBuffer",0x3e3085d5,"away3d.entities.SegmentSet.activateUVBuffer","away3d/entities/SegmentSet.hx",375,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_379_activateVertexNormalBuffer,"away3d.entities.SegmentSet","activateVertexNormalBuffer",0x8c0658bf,"away3d.entities.SegmentSet.activateVertexNormalBuffer","away3d/entities/SegmentSet.hx",379,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_383_activateVertexTangentBuffer,"away3d.entities.SegmentSet","activateVertexTangentBuffer",0x9a85826d,"away3d.entities.SegmentSet.activateVertexTangentBuffer","away3d/entities/SegmentSet.hx",383,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_387_activateSecondaryUVBuffer,"away3d.entities.SegmentSet","activateSecondaryUVBuffer",0xca9bff81,"away3d.entities.SegmentSet.activateSecondaryUVBuffer","away3d/entities/SegmentSet.hx",387,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_391_reOrderIndices,"away3d.entities.SegmentSet","reOrderIndices",0xd832172d,"away3d.entities.SegmentSet.reOrderIndices","away3d/entities/SegmentSet.hx",391,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_405_addSubSet,"away3d.entities.SegmentSet","addSubSet",0x51757802,"away3d.entities.SegmentSet.addSubSet","away3d/entities/SegmentSet.hx",405,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_426_dispose,"away3d.entities.SegmentSet","dispose",0x357e9bde,"away3d.entities.SegmentSet.dispose","away3d/entities/SegmentSet.hx",426,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_442_get_mouseEnabled,"away3d.entities.SegmentSet","get_mouseEnabled",0x40fb4646,"away3d.entities.SegmentSet.get_mouseEnabled","away3d/entities/SegmentSet.hx",442,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_450_getDefaultBoundingVolume,"away3d.entities.SegmentSet","getDefaultBoundingVolume",0x2874466a,"away3d.entities.SegmentSet.getDefaultBoundingVolume","away3d/entities/SegmentSet.hx",450,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_457_updateBounds,"away3d.entities.SegmentSet","updateBounds",0x89a8edbf,"away3d.entities.SegmentSet.updateBounds","away3d/entities/SegmentSet.hx",457,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_524_createEntityPartitionNode,"away3d.entities.SegmentSet","createEntityPartitionNode",0x92e68d4c,"away3d.entities.SegmentSet.createEntityPartitionNode","away3d/entities/SegmentSet.hx",524,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_529_get_numTriangles,"away3d.entities.SegmentSet","get_numTriangles",0x07d62aef,"away3d.entities.SegmentSet.get_numTriangles","away3d/entities/SegmentSet.hx",529,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_534_get_sourceEntity,"away3d.entities.SegmentSet","get_sourceEntity",0xdc47bfc8,"away3d.entities.SegmentSet.get_sourceEntity","away3d/entities/SegmentSet.hx",534,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_539_get_castsShadows,"away3d.entities.SegmentSet","get_castsShadows",0xf7d2ef89,"away3d.entities.SegmentSet.get_castsShadows","away3d/entities/SegmentSet.hx",539,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_544_get_material,"away3d.entities.SegmentSet","get_material",0xc986d111,"away3d.entities.SegmentSet.get_material","away3d/entities/SegmentSet.hx",544,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_549_get_animator,"away3d.entities.SegmentSet","get_animator",0x61d3efd1,"away3d.entities.SegmentSet.get_animator","away3d/entities/SegmentSet.hx",549,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_553_set_material,"away3d.entities.SegmentSet","set_material",0xde7ff485,"away3d.entities.SegmentSet.set_material","away3d/entities/SegmentSet.hx",553,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_566_get_uvTransform,"away3d.entities.SegmentSet","get_uvTransform",0x8beffca1,"away3d.entities.SegmentSet.get_uvTransform","away3d/entities/SegmentSet.hx",566,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_571_get_uvTransform2,"away3d.entities.SegmentSet","get_uvTransform2",0xe60d1071,"away3d.entities.SegmentSet.get_uvTransform2","away3d/entities/SegmentSet.hx",571,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_576_get_vertexData,"away3d.entities.SegmentSet","get_vertexData",0xbe96c298,"away3d.entities.SegmentSet.get_vertexData","away3d/entities/SegmentSet.hx",576,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_581_get_indexData,"away3d.entities.SegmentSet","get_indexData",0xead576b2,"away3d.entities.SegmentSet.get_indexData","away3d/entities/SegmentSet.hx",581,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_586_get_UVData,"away3d.entities.SegmentSet","get_UVData",0x1204b715,"away3d.entities.SegmentSet.get_UVData","away3d/entities/SegmentSet.hx",586,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_591_get_numVertices,"away3d.entities.SegmentSet","get_numVertices",0x72bbba35,"away3d.entities.SegmentSet.get_numVertices","away3d/entities/SegmentSet.hx",591,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_596_get_vertexStride,"away3d.entities.SegmentSet","get_vertexStride",0x926a0407,"away3d.entities.SegmentSet.get_vertexStride","away3d/entities/SegmentSet.hx",596,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_601_get_vertexNormalData,"away3d.entities.SegmentSet","get_vertexNormalData",0x79ad06df,"away3d.entities.SegmentSet.get_vertexNormalData","away3d/entities/SegmentSet.hx",601,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_606_get_vertexTangentData,"away3d.entities.SegmentSet","get_vertexTangentData",0xdef782e1,"away3d.entities.SegmentSet.get_vertexTangentData","away3d/entities/SegmentSet.hx",606,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_611_get_vertexOffset,"away3d.entities.SegmentSet","get_vertexOffset",0xe1797b81,"away3d.entities.SegmentSet.get_vertexOffset","away3d/entities/SegmentSet.hx",611,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_616_get_vertexNormalOffset,"away3d.entities.SegmentSet","get_vertexNormalOffset",0x41de9f88,"away3d.entities.SegmentSet.get_vertexNormalOffset","away3d/entities/SegmentSet.hx",616,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_621_get_vertexTangentOffset,"away3d.entities.SegmentSet","get_vertexTangentOffset",0x6bc1a00a,"away3d.entities.SegmentSet.get_vertexTangentOffset","away3d/entities/SegmentSet.hx",621,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_626_get_assetType,"away3d.entities.SegmentSet","get_assetType",0x9e13a920,"away3d.entities.SegmentSet.get_assetType","away3d/entities/SegmentSet.hx",626,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_631_getRenderSceneTransform,"away3d.entities.SegmentSet","getRenderSceneTransform",0x6b79596b,"away3d.entities.SegmentSet.getRenderSceneTransform","away3d/entities/SegmentSet.hx",631,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_859440ed151b9aef_28_boot,"away3d.entities.SegmentSet","boot",0xf41b7b93,"away3d.entities.SegmentSet.boot","away3d/entities/SegmentSet.hx",28,0x98422451)
namespace away3d{
namespace entities{

void SegmentSet_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_859440ed151b9aef_26_new)
HXLINE(  60)		this->_indexSegments = 0;
HXLINE(  54)		this->_numIndices = 0;
HXLINE(  53)		this->_subSetCount = 0;
HXLINE(  67)		super::__construct();
HXLINE(  69)		this->_subSetCount = 0;
HXLINE(  70)		int length = null();
HXDLIN(  70)		bool fixed = null();
HXDLIN(  70)		::Array< ::Dynamic> array = null();
HXDLIN(  70)		this->_subSets =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  71)		this->addSubSet();
HXLINE(  73)		this->_segments =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  74)		this->set_material( ::away3d::materials::SegmentMaterial_obj::__alloc( HX_CTX ,null()));
            	}

Dynamic SegmentSet_obj::__CreateEmpty() { return new SegmentSet_obj; }

void *SegmentSet_obj::_hx_vtable = 0;

Dynamic SegmentSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SegmentSet_obj > _hx_result = new SegmentSet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SegmentSet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12b32fa7) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x03f3a2fb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x03f3a2fb;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x12b32fa7;
		}
	} else {
		if (inClassId<=(int)0x1e6a8fa2) {
			return inClassId==(int)0x13fff02b || inClassId==(int)0x1e6a8fa2;
		} else {
			return inClassId==(int)0x37f46043;
		}
	}
}

static ::away3d::core::base::IMaterialOwner_obj _hx_away3d_entities_SegmentSet__hx_away3d_core_base_IMaterialOwner= {
	(  ::away3d::materials::MaterialBase (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_material,
	(  ::away3d::materials::MaterialBase (::hx::Object::*)( ::away3d::materials::MaterialBase))&::away3d::entities::SegmentSet_obj::set_material,
	( ::Dynamic (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_animator,
};

static ::away3d::core::base::IRenderable_obj _hx_away3d_entities_SegmentSet__hx_away3d_core_base_IRenderable= {
	(  ::away3d::materials::MaterialBase (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_material,
	(  ::away3d::materials::MaterialBase (::hx::Object::*)( ::away3d::materials::MaterialBase))&::away3d::entities::SegmentSet_obj::set_material,
	( ::Dynamic (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_animator,
	(  ::openfl::geom::Matrix3D (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_sceneTransform,
	(  ::openfl::geom::Matrix3D (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_inverseSceneTransform,
	( bool (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_mouseEnabled,
	(  ::away3d::entities::Entity (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_sourceEntity,
	( bool (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_castsShadows,
	(  ::openfl::geom::Matrix (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_uvTransform,
	(  ::openfl::geom::Matrix (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_uvTransform2,
	( bool (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_shaderPickingDetails,
	( int (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_numVertices,
	( int (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_numTriangles,
	( int (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_vertexStride,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_vertexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_vertexNormalData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_vertexTangentData,
	(  ::openfl::_Vector::IntVector (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_indexData,
	(  ::openfl::_Vector::FloatVector (::hx::Object::*)())&::away3d::entities::SegmentSet_obj::get_UVData,
	(  ::openfl::geom::Matrix3D (::hx::Object::*)( ::away3d::cameras::Camera3D))&::away3d::entities::SegmentSet_obj::getRenderSceneTransform,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::entities::SegmentSet_obj::activateVertexBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::entities::SegmentSet_obj::activateUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::entities::SegmentSet_obj::activateSecondaryUVBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::entities::SegmentSet_obj::activateVertexNormalBuffer,
	( void (::hx::Object::*)(int, ::away3d::core::managers::Stage3DProxy))&::away3d::entities::SegmentSet_obj::activateVertexTangentBuffer,
	(  ::openfl::display3D::IndexBuffer3D (::hx::Object::*)( ::away3d::core::managers::Stage3DProxy))&::away3d::entities::SegmentSet_obj::getIndexBuffer,
};

void *SegmentSet_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcf5e1b32: return &_hx_away3d_entities_SegmentSet__hx_away3d_core_base_IMaterialOwner;
		case (int)0x1ea67b0a: return &_hx_away3d_entities_SegmentSet__hx_away3d_core_base_IRenderable;
	}
	return super::_hx_getInterface(inHash);
}

void SegmentSet_obj::addSegment( ::away3d::primitives::data::Segment segment){
            	HX_GC_STACKFRAME(&_hx_pos_859440ed151b9aef_83_addSegment)
HXLINE(  84)		segment->set_segmentsBase(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  86)		this->_hasData = true;
HXLINE(  88)		int subSetIndex = (this->_subSets->get_length() - 1);
HXLINE(  89)		 ::away3d::entities::SubSet subSet = this->_subSets->get(subSetIndex).StaticCast<  ::away3d::entities::SubSet >();
HXLINE(  91)		int _hx_tmp = (subSet->vertices->get_length() + 44);
HXDLIN(  91)		if ((_hx_tmp > ::away3d::entities::SegmentSet_obj::LIMIT)) {
HXLINE(  92)			subSet = this->addSubSet();
HXLINE(  93)			subSetIndex = (subSetIndex + 1);
            		}
HXLINE(  96)		segment->set_index(subSet->vertices->get_length());
HXLINE(  97)		segment->set_subSetIndex(subSetIndex);
HXLINE(  99)		this->updateSegment(segment);
HXLINE( 101)		int index = (subSet->lineCount << 2);
HXLINE( 103)		subSet->indices->push(index);
HXLINE( 104)		subSet->indices->push((index + 1));
HXLINE( 105)		subSet->indices->push((index + 2));
HXLINE( 106)		subSet->indices->push((index + 3));
HXLINE( 107)		subSet->indices->push((index + 2));
HXLINE( 108)		subSet->indices->push((index + 1));
HXLINE( 109)		subSet->numVertices = ::Std_obj::_hx_int((( (Float)(subSet->vertices->get_length()) ) / ( (Float)(11) )));
HXLINE( 110)		subSet->numIndices = subSet->indices->get_length();
HXLINE( 111)		subSet->lineCount++;
HXLINE( 112)		subSet->indexBufferDirty = true;
HXLINE( 114)		 ::away3d::entities::SegRef segRef =  ::away3d::entities::SegRef_obj::__alloc( HX_CTX );
HXLINE( 115)		segRef->index = index;
HXLINE( 116)		segRef->subSetIndex = subSetIndex;
HXLINE( 117)		segRef->segment = segment;
HXLINE( 119)		this->_segments->set(this->_indexSegments,segRef);
HXLINE( 121)		this->_indexSegments++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,addSegment,(void))

void SegmentSet_obj::removeSegmentByIndex(int index,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(false);
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_138_removeSegmentByIndex)
HXLINE( 139)		 ::away3d::entities::SegRef segRef;
HXLINE( 140)		if ((index >= this->_indexSegments)) {
HXLINE( 141)			return;
            		}
HXLINE( 143)		if (this->_segments->exists(index)) {
HXLINE( 144)			segRef = ( ( ::away3d::entities::SegRef)(this->_segments->get(index)) );
            		}
            		else {
HXLINE( 146)			return;
            		}
HXLINE( 149)		if (::hx::IsNull( this->_subSets->get(segRef->subSetIndex).StaticCast<  ::away3d::entities::SubSet >() )) {
HXLINE( 150)			return;
            		}
HXLINE( 151)		int subSetIndex = segRef->subSetIndex;
HXLINE( 148)		 ::away3d::entities::SubSet subSet = this->_subSets->get(segRef->subSetIndex).StaticCast<  ::away3d::entities::SubSet >();
HXLINE( 154)		 ::away3d::primitives::data::Segment segment = segRef->segment;
HXLINE( 155)		 ::openfl::_Vector::IntVector indices = subSet->indices;
HXLINE( 157)		int ind = (index * 6);
HXLINE( 158)		{
HXLINE( 158)			int _g = ind;
HXDLIN( 158)			int _g1 = indices->get_length();
HXDLIN( 158)			while((_g < _g1)){
HXLINE( 158)				_g = (_g + 1);
HXDLIN( 158)				int i = (_g - 1);
HXLINE( 159)				{
HXLINE( 159)					int _g1 = i;
HXDLIN( 159)					 ::openfl::_Vector::IntVector _g2 = indices;
HXDLIN( 159)					_g2->set(_g1,(_g2->get(_g1) - 4));
            				}
            			}
            		}
HXLINE( 161)		{
HXLINE( 161)			::Dynamic this1 = subSet->indices;
HXDLIN( 161)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 161)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),(index * 6),::hx::paccDynamic);
HXDLIN( 161)			{
HXLINE( 161)				int _g_current = 0;
HXDLIN( 161)				::cpp::VirtualArray _g_args = this2;
HXDLIN( 161)				while((_g_current < _g_args->get_length())){
HXLINE( 161)					_g_current = (_g_current + 1);
HXDLIN( 161)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 161)					( ( ::openfl::_Vector::IntVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (int)(item) ));
HXDLIN( 161)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 161)			( ( ::openfl::_Vector::IntVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),6);
            		}
HXLINE( 162)		{
HXLINE( 162)			::Dynamic this3 = subSet->vertices;
HXDLIN( 162)			::cpp::VirtualArray this4 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 162)			this3->__SetField(HX_("__tempIndex",3e,e8,54,22),(index * 44),::hx::paccDynamic);
HXDLIN( 162)			{
HXLINE( 162)				int _g_current1 = 0;
HXDLIN( 162)				::cpp::VirtualArray _g_args1 = this4;
HXDLIN( 162)				while((_g_current1 < _g_args1->get_length())){
HXLINE( 162)					_g_current1 = (_g_current1 + 1);
HXDLIN( 162)					 ::Dynamic item = _g_args1->__get((_g_current1 - 1));
HXDLIN( 162)					( ( ::openfl::_Vector::FloatVector)(this3) )->insertAt(( (int)(this3->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN( 162)					::hx::FieldRef((this3).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 162)			( ( ::openfl::_Vector::FloatVector)(this3) )->splice(( (int)(this3->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),44);
            		}
HXLINE( 163)		subSet->numVertices = ::Std_obj::_hx_int((( (Float)(subSet->vertices->get_length()) ) / ( (Float)(11) )));
HXLINE( 164)		subSet->numIndices = indices->get_length();
HXLINE( 165)		subSet->vertexBufferDirty = true;
HXLINE( 166)		subSet->indexBufferDirty = true;
HXLINE( 167)		subSet->lineCount--;
HXLINE( 169)		if (dispose) {
HXLINE( 170)			segment->dispose();
HXLINE( 171)			segment = null();
            		}
            		else {
HXLINE( 174)			segment->set_index(-1);
HXLINE( 175)			segment->set_segmentsBase(null());
            		}
HXLINE( 178)		if ((subSet->lineCount == 0)) {
HXLINE( 180)			if ((subSetIndex == 0)) {
HXLINE( 181)				this->_hasData = false;
            			}
            			else {
HXLINE( 184)				subSet->dispose();
HXLINE( 185)				{
HXLINE( 185)					 ::away3d::entities::SubSet value = null();
HXDLIN( 185)					this->_subSets->set(subSetIndex,value).StaticCast<  ::away3d::entities::SubSet >();
            				}
HXLINE( 186)				{
HXLINE( 186)					::Dynamic this1 = this->_subSets;
HXDLIN( 186)					::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 186)					this1->__SetField(HX_("__tempIndex",3e,e8,54,22),subSetIndex,::hx::paccDynamic);
HXDLIN( 186)					{
HXLINE( 186)						int _g_current = 0;
HXDLIN( 186)						::cpp::VirtualArray _g_args = this2;
HXDLIN( 186)						while((_g_current < _g_args->get_length())){
HXLINE( 186)							_g_current = (_g_current + 1);
HXDLIN( 186)							 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 186)							( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::away3d::entities::SubSet)(item) ));
HXDLIN( 186)							::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            						}
            					}
HXDLIN( 186)					( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            				}
            			}
            		}
HXLINE( 190)		this->reOrderIndices(subSetIndex,index);
HXLINE( 192)		segRef = null();
HXLINE( 193)		this->_segments->remove(this->_indexSegments);
HXLINE( 194)		this->_indexSegments--;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,removeSegmentByIndex,(void))

void SegmentSet_obj::removeSegment( ::away3d::primitives::data::Segment segment,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(false);
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_204_removeSegment)
HXLINE( 205)		if ((segment->get_index() == -1)) {
HXLINE( 206)			return;
            		}
HXLINE( 207)		this->removeSegmentByIndex(::Std_obj::_hx_int((( (Float)(segment->get_index()) ) / ( (Float)(44) ))),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,removeSegment,(void))

void SegmentSet_obj::removeAllSegments(){
            	HX_GC_STACKFRAME(&_hx_pos_859440ed151b9aef_214_removeAllSegments)
HXLINE( 215)		 ::away3d::entities::SubSet subSet;
HXLINE( 216)		{
HXLINE( 216)			int _g = 0;
HXDLIN( 216)			int _g1 = this->_subSetCount;
HXDLIN( 216)			while((_g < _g1)){
HXLINE( 216)				_g = (_g + 1);
HXDLIN( 216)				int i = (_g - 1);
HXLINE( 217)				subSet = this->_subSets->get(i).StaticCast<  ::away3d::entities::SubSet >();
HXLINE( 218)				subSet->vertices = null();
HXLINE( 219)				subSet->indices = null();
HXLINE( 220)				if (::hx::IsNotNull( subSet->vertexBuffer )) {
HXLINE( 221)					::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(subSet->vertexBuffer);
            				}
HXLINE( 222)				if (::hx::IsNotNull( subSet->indexBuffer )) {
HXLINE( 223)					::away3d::core::managers::Stage3DProxy_obj::disposeIndexBuffer(subSet->indexBuffer);
            				}
HXLINE( 224)				subSet = null();
            			}
            		}
HXLINE( 227)		{
HXLINE( 227)			 ::Dynamic segReg = this->_segments->iterator();
HXDLIN( 227)			while(( (bool)(segReg->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 227)				 ::away3d::entities::SegRef segReg1 = ( ( ::away3d::entities::SegRef)(segReg->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 228)				segReg1 = null();
            			}
            		}
HXLINE( 229)		this->_segments = null();
HXLINE( 231)		this->_subSetCount = 0;
HXLINE( 232)		this->_activeSubSet = null();
HXLINE( 233)		this->_indexSegments = 0;
HXLINE( 234)		int length = null();
HXDLIN( 234)		bool fixed = null();
HXDLIN( 234)		::Array< ::Dynamic> array = null();
HXDLIN( 234)		this->_subSets =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 235)		this->_segments =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 237)		this->addSubSet();
HXLINE( 239)		this->_hasData = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,removeAllSegments,(void))

 ::away3d::primitives::data::Segment SegmentSet_obj::getSegment(int index){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_246_getSegment)
HXLINE( 247)		if ((index > (this->_indexSegments - 1))) {
HXLINE( 248)			return null();
            		}
HXLINE( 250)		return ( ( ::away3d::entities::SegRef)(this->_segments->get(index)) )->segment;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,getSegment,return )

int SegmentSet_obj::get_segmentCount(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_258_get_segmentCount)
HXDLIN( 258)		return this->_indexSegments;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_segmentCount,return )

int SegmentSet_obj::get_subSetCount(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_262_get_subSetCount)
HXDLIN( 262)		return this->_subSetCount;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_subSetCount,return )

void SegmentSet_obj::updateSegment( ::away3d::primitives::data::Segment segment){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_266_updateSegment)
HXLINE( 268)		 ::openfl::geom::Vector3D start = segment->_start;
HXLINE( 269)		 ::openfl::geom::Vector3D end = segment->_end;
HXLINE( 270)		Float startX = start->x;
HXDLIN( 270)		Float startY = start->y;
HXDLIN( 270)		Float startZ = start->z;
HXLINE( 271)		Float endX = end->x;
HXDLIN( 271)		Float endY = end->y;
HXDLIN( 271)		Float endZ = end->z;
HXLINE( 272)		Float startR = segment->_startR;
HXDLIN( 272)		Float startG = segment->_startG;
HXDLIN( 272)		Float startB = segment->_startB;
HXLINE( 273)		Float endR = segment->_endR;
HXDLIN( 273)		Float endG = segment->_endG;
HXDLIN( 273)		Float endB = segment->_endB;
HXLINE( 274)		int index = segment->get_index();
HXLINE( 275)		Float t = segment->get_thickness();
HXLINE( 277)		::Dynamic this1 = this->_subSets;
HXDLIN( 277)		 ::away3d::entities::SubSet subSet = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get(segment->get_subSetIndex()).StaticCast<  ::away3d::entities::SubSet >();
HXLINE( 278)		 ::openfl::_Vector::FloatVector vertices = subSet->vertices;
HXLINE( 280)		{
HXLINE( 280)			index = (index + 1);
HXDLIN( 280)			vertices->set((index - 1),startX);
            		}
HXLINE( 281)		{
HXLINE( 281)			index = (index + 1);
HXDLIN( 281)			vertices->set((index - 1),startY);
            		}
HXLINE( 282)		{
HXLINE( 282)			index = (index + 1);
HXDLIN( 282)			vertices->set((index - 1),startZ);
            		}
HXLINE( 283)		{
HXLINE( 283)			index = (index + 1);
HXDLIN( 283)			vertices->set((index - 1),endX);
            		}
HXLINE( 284)		{
HXLINE( 284)			index = (index + 1);
HXDLIN( 284)			vertices->set((index - 1),endY);
            		}
HXLINE( 285)		{
HXLINE( 285)			index = (index + 1);
HXDLIN( 285)			vertices->set((index - 1),endZ);
            		}
HXLINE( 286)		{
HXLINE( 286)			index = (index + 1);
HXDLIN( 286)			vertices->set((index - 1),t);
            		}
HXLINE( 287)		{
HXLINE( 287)			index = (index + 1);
HXDLIN( 287)			vertices->set((index - 1),startR);
            		}
HXLINE( 288)		{
HXLINE( 288)			index = (index + 1);
HXDLIN( 288)			vertices->set((index - 1),startG);
            		}
HXLINE( 289)		{
HXLINE( 289)			index = (index + 1);
HXDLIN( 289)			vertices->set((index - 1),startB);
            		}
HXLINE( 290)		{
HXLINE( 290)			index = (index + 1);
HXDLIN( 290)			vertices->set((index - 1),( (Float)(1) ));
            		}
HXLINE( 292)		{
HXLINE( 292)			index = (index + 1);
HXDLIN( 292)			vertices->set((index - 1),endX);
            		}
HXLINE( 293)		{
HXLINE( 293)			index = (index + 1);
HXDLIN( 293)			vertices->set((index - 1),endY);
            		}
HXLINE( 294)		{
HXLINE( 294)			index = (index + 1);
HXDLIN( 294)			vertices->set((index - 1),endZ);
            		}
HXLINE( 295)		{
HXLINE( 295)			index = (index + 1);
HXDLIN( 295)			vertices->set((index - 1),startX);
            		}
HXLINE( 296)		{
HXLINE( 296)			index = (index + 1);
HXDLIN( 296)			vertices->set((index - 1),startY);
            		}
HXLINE( 297)		{
HXLINE( 297)			index = (index + 1);
HXDLIN( 297)			vertices->set((index - 1),startZ);
            		}
HXLINE( 298)		{
HXLINE( 298)			index = (index + 1);
HXDLIN( 298)			vertices->set((index - 1),-(t));
            		}
HXLINE( 299)		{
HXLINE( 299)			index = (index + 1);
HXDLIN( 299)			vertices->set((index - 1),endR);
            		}
HXLINE( 300)		{
HXLINE( 300)			index = (index + 1);
HXDLIN( 300)			vertices->set((index - 1),endG);
            		}
HXLINE( 301)		{
HXLINE( 301)			index = (index + 1);
HXDLIN( 301)			vertices->set((index - 1),endB);
            		}
HXLINE( 302)		{
HXLINE( 302)			index = (index + 1);
HXDLIN( 302)			vertices->set((index - 1),( (Float)(1) ));
            		}
HXLINE( 304)		{
HXLINE( 304)			index = (index + 1);
HXDLIN( 304)			vertices->set((index - 1),startX);
            		}
HXLINE( 305)		{
HXLINE( 305)			index = (index + 1);
HXDLIN( 305)			vertices->set((index - 1),startY);
            		}
HXLINE( 306)		{
HXLINE( 306)			index = (index + 1);
HXDLIN( 306)			vertices->set((index - 1),startZ);
            		}
HXLINE( 307)		{
HXLINE( 307)			index = (index + 1);
HXDLIN( 307)			vertices->set((index - 1),endX);
            		}
HXLINE( 308)		{
HXLINE( 308)			index = (index + 1);
HXDLIN( 308)			vertices->set((index - 1),endY);
            		}
HXLINE( 309)		{
HXLINE( 309)			index = (index + 1);
HXDLIN( 309)			vertices->set((index - 1),endZ);
            		}
HXLINE( 310)		{
HXLINE( 310)			index = (index + 1);
HXDLIN( 310)			vertices->set((index - 1),-(t));
            		}
HXLINE( 311)		{
HXLINE( 311)			index = (index + 1);
HXDLIN( 311)			vertices->set((index - 1),startR);
            		}
HXLINE( 312)		{
HXLINE( 312)			index = (index + 1);
HXDLIN( 312)			vertices->set((index - 1),startG);
            		}
HXLINE( 313)		{
HXLINE( 313)			index = (index + 1);
HXDLIN( 313)			vertices->set((index - 1),startB);
            		}
HXLINE( 314)		{
HXLINE( 314)			index = (index + 1);
HXDLIN( 314)			vertices->set((index - 1),( (Float)(1) ));
            		}
HXLINE( 316)		{
HXLINE( 316)			index = (index + 1);
HXDLIN( 316)			vertices->set((index - 1),endX);
            		}
HXLINE( 317)		{
HXLINE( 317)			index = (index + 1);
HXDLIN( 317)			vertices->set((index - 1),endY);
            		}
HXLINE( 318)		{
HXLINE( 318)			index = (index + 1);
HXDLIN( 318)			vertices->set((index - 1),endZ);
            		}
HXLINE( 319)		{
HXLINE( 319)			index = (index + 1);
HXDLIN( 319)			vertices->set((index - 1),startX);
            		}
HXLINE( 320)		{
HXLINE( 320)			index = (index + 1);
HXDLIN( 320)			vertices->set((index - 1),startY);
            		}
HXLINE( 321)		{
HXLINE( 321)			index = (index + 1);
HXDLIN( 321)			vertices->set((index - 1),startZ);
            		}
HXLINE( 322)		{
HXLINE( 322)			index = (index + 1);
HXDLIN( 322)			vertices->set((index - 1),t);
            		}
HXLINE( 323)		{
HXLINE( 323)			index = (index + 1);
HXDLIN( 323)			vertices->set((index - 1),endR);
            		}
HXLINE( 324)		{
HXLINE( 324)			index = (index + 1);
HXDLIN( 324)			vertices->set((index - 1),endG);
            		}
HXLINE( 325)		{
HXLINE( 325)			index = (index + 1);
HXDLIN( 325)			vertices->set((index - 1),endB);
            		}
HXLINE( 326)		{
HXLINE( 326)			index = (index + 1);
HXDLIN( 326)			vertices->set((index - 1),( (Float)(1) ));
            		}
HXLINE( 328)		subSet->vertexBufferDirty = true;
HXLINE( 330)		this->invalidateBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,updateSegment,(void))

bool SegmentSet_obj::get_hasData(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_335_get_hasData)
HXDLIN( 335)		return this->_hasData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_hasData,return )

 ::openfl::display3D::IndexBuffer3D SegmentSet_obj::getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_339_getIndexBuffer)
HXLINE( 340)		bool _hx_tmp;
HXDLIN( 340)		 ::openfl::display3D::Context3D _hx_tmp1 = this->_activeSubSet->indexContext3D;
HXDLIN( 340)		if (::hx::IsInstanceEq( _hx_tmp1,stage3DProxy->get_context3D() )) {
HXLINE( 340)			_hx_tmp = this->_activeSubSet->indexBufferDirty;
            		}
            		else {
HXLINE( 340)			_hx_tmp = true;
            		}
HXDLIN( 340)		if (_hx_tmp) {
HXLINE( 341)			this->_activeSubSet->indexBuffer = stage3DProxy->createIndexBuffer(this->_activeSubSet->numIndices);
HXLINE( 342)			this->_activeSubSet->indexBuffer->uploadFromVector(this->_activeSubSet->indices,0,this->_activeSubSet->numIndices);
HXLINE( 343)			this->_activeSubSet->indexBufferDirty = false;
HXLINE( 344)			this->_activeSubSet->indexContext3D = stage3DProxy->get_context3D();
            		}
HXLINE( 347)		return this->_activeSubSet->indexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,getIndexBuffer,return )

void SegmentSet_obj::activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_351_activateVertexBuffer)
HXLINE( 352)		 ::away3d::entities::SubSet subSet = this->_subSets->get(index).StaticCast<  ::away3d::entities::SubSet >();
HXLINE( 354)		this->_activeSubSet = subSet;
HXLINE( 355)		this->_numIndices = subSet->numIndices;
HXLINE( 357)		bool _hx_tmp;
HXDLIN( 357)		 ::openfl::display3D::Context3D subSet1 = subSet->vertexContext3D;
HXDLIN( 357)		if (::hx::IsInstanceEq( subSet1,stage3DProxy->get_context3D() )) {
HXLINE( 357)			_hx_tmp = subSet->vertexBufferDirty;
            		}
            		else {
HXLINE( 357)			_hx_tmp = true;
            		}
HXDLIN( 357)		if (_hx_tmp) {
HXLINE( 358)			if (::hx::IsNotNull( subSet->vertexBuffer )) {
HXLINE( 358)				::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(subSet->vertexBuffer);
            			}
HXLINE( 359)			subSet->vertexBuffer = stage3DProxy->createVertexBuffer(subSet->numVertices,11);
HXLINE( 360)			subSet->vertexBuffer->uploadFromVector(subSet->vertices,0,subSet->numVertices);
HXLINE( 361)			subSet->vertexBufferDirty = false;
HXLINE( 362)			subSet->vertexContext3D = stage3DProxy->get_context3D();
            		}
HXLINE( 365)		 ::openfl::display3D::VertexBuffer3D vertexBuffer = subSet->vertexBuffer;
HXLINE( 366)		 ::openfl::display3D::Context3D context3d = stage3DProxy->_context3D;
HXLINE( 368)		context3d->setVertexBufferAt(0,vertexBuffer,0,3);
HXLINE( 369)		context3d->setVertexBufferAt(1,vertexBuffer,3,3);
HXLINE( 370)		context3d->setVertexBufferAt(2,vertexBuffer,6,1);
HXLINE( 371)		context3d->setVertexBufferAt(3,vertexBuffer,7,4);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateVertexBuffer,(void))

void SegmentSet_obj::activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_375_activateUVBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateUVBuffer,(void))

void SegmentSet_obj::activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_379_activateVertexNormalBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateVertexNormalBuffer,(void))

void SegmentSet_obj::activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_383_activateVertexTangentBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateVertexTangentBuffer,(void))

void SegmentSet_obj::activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_387_activateSecondaryUVBuffer)
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,activateSecondaryUVBuffer,(void))

void SegmentSet_obj::reOrderIndices(int subSetIndex,int index){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_391_reOrderIndices)
HXLINE( 392)		 ::away3d::entities::SegRef segRef;
HXLINE( 394)		{
HXLINE( 394)			int _g = index;
HXDLIN( 394)			int _g1 = (this->_indexSegments - 1);
HXDLIN( 394)			while((_g < _g1)){
HXLINE( 394)				_g = (_g + 1);
HXDLIN( 394)				int i = (_g - 1);
HXLINE( 395)				segRef = ( ( ::away3d::entities::SegRef)(this->_segments->get((i + 1))) );
HXLINE( 396)				segRef->index = i;
HXLINE( 397)				if ((segRef->subSetIndex == subSetIndex)) {
HXLINE( 398)					 ::away3d::primitives::data::Segment fh = segRef->segment;
HXDLIN( 398)					fh->set_index((fh->get_index() - 44));
            				}
HXLINE( 399)				this->_segments->set(i,segRef);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(SegmentSet_obj,reOrderIndices,(void))

 ::away3d::entities::SubSet SegmentSet_obj::addSubSet(){
            	HX_GC_STACKFRAME(&_hx_pos_859440ed151b9aef_405_addSubSet)
HXLINE( 406)		 ::away3d::entities::SubSet subSet =  ::away3d::entities::SubSet_obj::__alloc( HX_CTX );
HXLINE( 407)		this->_subSets->push(subSet);
HXLINE( 409)		int length = null();
HXDLIN( 409)		bool fixed = null();
HXDLIN( 409)		::Array< Float > array = null();
HXDLIN( 409)		subSet->vertices =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 410)		subSet->numVertices = 0;
HXLINE( 411)		int length1 = null();
HXDLIN( 411)		bool fixed1 = null();
HXDLIN( 411)		::Array< int > array1 = null();
HXDLIN( 411)		subSet->indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE( 412)		subSet->numIndices = 0;
HXLINE( 413)		subSet->vertexBufferDirty = true;
HXLINE( 414)		subSet->indexBufferDirty = true;
HXLINE( 415)		subSet->lineCount = 0;
HXLINE( 417)		this->_subSetCount++;
HXLINE( 419)		return subSet;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,addSubSet,return )

void SegmentSet_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_426_dispose)
HXLINE( 427)		this->super::dispose();
HXLINE( 428)		this->removeAllSegments();
HXLINE( 429)		this->_segments = null();
HXLINE( 430)		this->_material = null();
HXLINE( 431)		 ::away3d::entities::SubSet subSet = this->_subSets->get(0).StaticCast<  ::away3d::entities::SubSet >();
HXLINE( 432)		subSet->vertices = null();
HXLINE( 433)		subSet->indices = null();
HXLINE( 434)		this->_subSets = null();
            	}


bool SegmentSet_obj::get_mouseEnabled(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_442_get_mouseEnabled)
HXDLIN( 442)		return false;
            	}


 ::away3d::bounds::BoundingVolumeBase SegmentSet_obj::getDefaultBoundingVolume(){
            	HX_GC_STACKFRAME(&_hx_pos_859440ed151b9aef_450_getDefaultBoundingVolume)
HXDLIN( 450)		return  ::away3d::bounds::BoundingSphere_obj::__alloc( HX_CTX );
            	}


void SegmentSet_obj::updateBounds(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_457_updateBounds)
HXLINE( 458)		 ::away3d::entities::SubSet subSet;
HXLINE( 459)		int len;
HXLINE( 460)		Float v;
HXLINE( 461)		int index;
HXLINE( 463)		Float minX = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 464)		Float minY = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 465)		Float minZ = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 466)		Float maxX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 467)		Float maxY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 468)		Float maxZ = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 469)		 ::openfl::_Vector::FloatVector vertices;
HXLINE( 471)		int i = 0;
HXLINE( 472)		while((i < this->_subSetCount)){
HXLINE( 473)			subSet = this->_subSets->get(i).StaticCast<  ::away3d::entities::SubSet >();
HXLINE( 474)			index = 0;
HXLINE( 475)			vertices = subSet->vertices;
HXLINE( 476)			len = vertices->get_length();
HXLINE( 478)			if ((len == 0)) {
HXLINE( 479)				i = (i + 1);
HXLINE( 480)				continue;
            			}
HXLINE( 483)			while((index < len)){
HXLINE( 485)				index = (index + 1);
HXDLIN( 485)				v = vertices->get((index - 1));
HXLINE( 486)				if ((v < minX)) {
HXLINE( 487)					minX = v;
            				}
            				else {
HXLINE( 488)					if ((v > maxX)) {
HXLINE( 489)						maxX = v;
            					}
            				}
HXLINE( 491)				index = (index + 1);
HXDLIN( 491)				v = vertices->get((index - 1));
HXLINE( 492)				if ((v < minY)) {
HXLINE( 493)					minY = v;
            				}
            				else {
HXLINE( 494)					if ((v > maxY)) {
HXLINE( 495)						maxY = v;
            					}
            				}
HXLINE( 497)				index = (index + 1);
HXDLIN( 497)				v = vertices->get((index - 1));
HXLINE( 498)				if ((v < minZ)) {
HXLINE( 499)					minZ = v;
            				}
            				else {
HXLINE( 500)					if ((v > maxZ)) {
HXLINE( 501)						maxZ = v;
            					}
            				}
HXLINE( 503)				index = (index + 8);
            			}
HXLINE( 505)			i = (i + 1);
            		}
HXLINE( 508)		if ((minX != ::Math_obj::POSITIVE_INFINITY)) {
HXLINE( 509)			this->_bounds->fromExtremes(minX,minY,minZ,maxX,maxY,maxZ);
            		}
            		else {
HXLINE( 512)			Float min = ((Float).5);
HXLINE( 513)			this->_bounds->fromExtremes(-(min),-(min),-(min),min,min,min);
            		}
HXLINE( 516)		this->_boundsInvalid = false;
            	}


 ::away3d::core::partition::EntityNode SegmentSet_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_859440ed151b9aef_524_createEntityPartitionNode)
HXDLIN( 524)		return  ::away3d::core::partition::RenderableNode_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


int SegmentSet_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_529_get_numTriangles)
HXDLIN( 529)		return ::Std_obj::_hx_int((( (Float)(this->_numIndices) ) / ( (Float)(3) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_numTriangles,return )

 ::away3d::entities::Entity SegmentSet_obj::get_sourceEntity(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_534_get_sourceEntity)
HXDLIN( 534)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_sourceEntity,return )

bool SegmentSet_obj::get_castsShadows(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_539_get_castsShadows)
HXDLIN( 539)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_castsShadows,return )

 ::away3d::materials::MaterialBase SegmentSet_obj::get_material(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_544_get_material)
HXDLIN( 544)		return this->_material;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_material,return )

::Dynamic SegmentSet_obj::get_animator(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_549_get_animator)
HXDLIN( 549)		return this->_animator;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_animator,return )

 ::away3d::materials::MaterialBase SegmentSet_obj::set_material( ::away3d::materials::MaterialBase value){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_553_set_material)
HXLINE( 554)		if (::hx::IsInstanceEq( value,this->_material )) {
HXLINE( 555)			return value;
            		}
HXLINE( 556)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 557)			this->_material->removeOwner(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 558)		this->_material = value;
HXLINE( 559)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 560)			this->_material->addOwner(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 561)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,set_material,return )

 ::openfl::geom::Matrix SegmentSet_obj::get_uvTransform(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_566_get_uvTransform)
HXDLIN( 566)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_uvTransform,return )

 ::openfl::geom::Matrix SegmentSet_obj::get_uvTransform2(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_571_get_uvTransform2)
HXDLIN( 571)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_uvTransform2,return )

 ::openfl::_Vector::FloatVector SegmentSet_obj::get_vertexData(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_576_get_vertexData)
HXDLIN( 576)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexData,return )

 ::openfl::_Vector::IntVector SegmentSet_obj::get_indexData(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_581_get_indexData)
HXDLIN( 581)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_indexData,return )

 ::openfl::_Vector::FloatVector SegmentSet_obj::get_UVData(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_586_get_UVData)
HXDLIN( 586)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_UVData,return )

int SegmentSet_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_591_get_numVertices)
HXDLIN( 591)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_numVertices,return )

int SegmentSet_obj::get_vertexStride(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_596_get_vertexStride)
HXDLIN( 596)		return 11;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexStride,return )

 ::openfl::_Vector::FloatVector SegmentSet_obj::get_vertexNormalData(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_601_get_vertexNormalData)
HXDLIN( 601)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexNormalData,return )

 ::openfl::_Vector::FloatVector SegmentSet_obj::get_vertexTangentData(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_606_get_vertexTangentData)
HXDLIN( 606)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexTangentData,return )

int SegmentSet_obj::get_vertexOffset(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_611_get_vertexOffset)
HXDLIN( 611)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexOffset,return )

int SegmentSet_obj::get_vertexNormalOffset(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_616_get_vertexNormalOffset)
HXDLIN( 616)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexNormalOffset,return )

int SegmentSet_obj::get_vertexTangentOffset(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_621_get_vertexTangentOffset)
HXDLIN( 621)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SegmentSet_obj,get_vertexTangentOffset,return )

::String SegmentSet_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_626_get_assetType)
HXDLIN( 626)		return HX_("segmentSet",af,15,ad,57);
            	}


 ::openfl::geom::Matrix3D SegmentSet_obj::getRenderSceneTransform( ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_631_getRenderSceneTransform)
HXDLIN( 631)		return this->_sceneTransform;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SegmentSet_obj,getRenderSceneTransform,return )

int SegmentSet_obj::LIMIT;


::hx::ObjectPtr< SegmentSet_obj > SegmentSet_obj::__new() {
	::hx::ObjectPtr< SegmentSet_obj > __this = new SegmentSet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SegmentSet_obj > SegmentSet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SegmentSet_obj *__this = (SegmentSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SegmentSet_obj), true, "away3d.entities.SegmentSet"));
	*(void **)__this = SegmentSet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SegmentSet_obj::SegmentSet_obj()
{
}

void SegmentSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegmentSet);
	HX_MARK_MEMBER_NAME(_activeSubSet,"_activeSubSet");
	HX_MARK_MEMBER_NAME(_subSets,"_subSets");
	HX_MARK_MEMBER_NAME(_subSetCount,"_subSetCount");
	HX_MARK_MEMBER_NAME(_numIndices,"_numIndices");
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_MEMBER_NAME(_animator,"_animator");
	HX_MARK_MEMBER_NAME(_hasData,"_hasData");
	HX_MARK_MEMBER_NAME(_segments,"_segments");
	HX_MARK_MEMBER_NAME(_indexSegments,"_indexSegments");
	 ::away3d::entities::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SegmentSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeSubSet,"_activeSubSet");
	HX_VISIT_MEMBER_NAME(_subSets,"_subSets");
	HX_VISIT_MEMBER_NAME(_subSetCount,"_subSetCount");
	HX_VISIT_MEMBER_NAME(_numIndices,"_numIndices");
	HX_VISIT_MEMBER_NAME(_material,"_material");
	HX_VISIT_MEMBER_NAME(_animator,"_animator");
	HX_VISIT_MEMBER_NAME(_hasData,"_hasData");
	HX_VISIT_MEMBER_NAME(_segments,"_segments");
	HX_VISIT_MEMBER_NAME(_indexSegments,"_indexSegments");
	 ::away3d::entities::Entity_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SegmentSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"UVData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UVData() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasData() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_material() ); }
		if (HX_FIELD_EQ(inName,"animator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animator() ); }
		if (HX_FIELD_EQ(inName,"_subSets") ) { return ::hx::Val( _subSets ); }
		if (HX_FIELD_EQ(inName,"_hasData") ) { return ::hx::Val( _hasData ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"indexData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_indexData() ); }
		if (HX_FIELD_EQ(inName,"_material") ) { return ::hx::Val( _material ); }
		if (HX_FIELD_EQ(inName,"_animator") ) { return ::hx::Val( _animator ); }
		if (HX_FIELD_EQ(inName,"_segments") ) { return ::hx::Val( _segments ); }
		if (HX_FIELD_EQ(inName,"addSubSet") ) { return ::hx::Val( addSubSet_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexData() ); }
		if (HX_FIELD_EQ(inName,"addSegment") ) { return ::hx::Val( addSegment_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSegment") ) { return ::hx::Val( getSegment_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UVData") ) { return ::hx::Val( get_UVData_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subSetCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subSetCount() ); }
		if (HX_FIELD_EQ(inName,"uvTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvTransform() ); }
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numVertices() ); }
		if (HX_FIELD_EQ(inName,"_numIndices") ) { return ::hx::Val( _numIndices ); }
		if (HX_FIELD_EQ(inName,"get_hasData") ) { return ::hx::Val( get_hasData_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"segmentCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_segmentCount() ); }
		if (HX_FIELD_EQ(inName,"numTriangles") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numTriangles() ); }
		if (HX_FIELD_EQ(inName,"sourceEntity") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sourceEntity() ); }
		if (HX_FIELD_EQ(inName,"castsShadows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_castsShadows() ); }
		if (HX_FIELD_EQ(inName,"uvTransform2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uvTransform2() ); }
		if (HX_FIELD_EQ(inName,"vertexStride") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexStride() ); }
		if (HX_FIELD_EQ(inName,"vertexOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexOffset() ); }
		if (HX_FIELD_EQ(inName,"_subSetCount") ) { return ::hx::Val( _subSetCount ); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return ::hx::Val( get_material_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animator") ) { return ::hx::Val( get_animator_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return ::hx::Val( set_material_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeSubSet") ) { return ::hx::Val( _activeSubSet ); }
		if (HX_FIELD_EQ(inName,"removeSegment") ) { return ::hx::Val( removeSegment_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSegment") ) { return ::hx::Val( updateSegment_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_indexData") ) { return ::hx::Val( get_indexData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_indexSegments") ) { return ::hx::Val( _indexSegments ); }
		if (HX_FIELD_EQ(inName,"getIndexBuffer") ) { return ::hx::Val( getIndexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"reOrderIndices") ) { return ::hx::Val( reOrderIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return ::hx::Val( get_vertexData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_subSetCount") ) { return ::hx::Val( get_subSetCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvTransform") ) { return ::hx::Val( get_uvTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"vertexNormalData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexNormalData() ); }
		if (HX_FIELD_EQ(inName,"get_segmentCount") ) { return ::hx::Val( get_segmentCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"activateUVBuffer") ) { return ::hx::Val( activateUVBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return ::hx::Val( get_mouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return ::hx::Val( get_numTriangles_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sourceEntity") ) { return ::hx::Val( get_sourceEntity_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_castsShadows") ) { return ::hx::Val( get_castsShadows_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_uvTransform2") ) { return ::hx::Val( get_uvTransform2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexStride") ) { return ::hx::Val( get_vertexStride_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexOffset") ) { return ::hx::Val( get_vertexOffset_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"vertexTangentData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexTangentData() ); }
		if (HX_FIELD_EQ(inName,"removeAllSegments") ) { return ::hx::Val( removeAllSegments_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertexNormalOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexNormalOffset() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"vertexTangentOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexTangentOffset() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeSegmentByIndex") ) { return ::hx::Val( removeSegmentByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return ::hx::Val( activateVertexBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vertexNormalData") ) { return ::hx::Val( get_vertexNormalData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_vertexTangentData") ) { return ::hx::Val( get_vertexTangentData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_vertexNormalOffset") ) { return ::hx::Val( get_vertexNormalOffset_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_vertexTangentOffset") ) { return ::hx::Val( get_vertexTangentOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRenderSceneTransform") ) { return ::hx::Val( getRenderSceneTransform_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return ::hx::Val( getDefaultBoundingVolume_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"activateSecondaryUVBuffer") ) { return ::hx::Val( activateSecondaryUVBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return ::hx::Val( createEntityPartitionNode_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateVertexNormalBuffer") ) { return ::hx::Val( activateVertexNormalBuffer_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"activateVertexTangentBuffer") ) { return ::hx::Val( activateVertexTangentBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SegmentSet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"LIMIT") ) { outValue = ( LIMIT ); return true; }
	}
	return false;
}

::hx::Val SegmentSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_material(inValue.Cast<  ::away3d::materials::MaterialBase >()) ); }
		if (HX_FIELD_EQ(inName,"_subSets") ) { _subSets=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasData") ) { _hasData=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast<  ::away3d::materials::MaterialBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animator") ) { _animator=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_segments") ) { _segments=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_numIndices") ) { _numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_subSetCount") ) { _subSetCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeSubSet") ) { _activeSubSet=inValue.Cast<  ::away3d::entities::SubSet >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_indexSegments") ) { _indexSegments=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SegmentSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"LIMIT") ) { LIMIT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void SegmentSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("segmentCount",1c,1c,95,3d));
	outFields->push(HX_("subSetCount",6d,93,a6,b8));
	outFields->push(HX_("hasData",a4,76,a7,11));
	outFields->push(HX_("numTriangles",85,39,b1,26));
	outFields->push(HX_("sourceEntity",5e,ce,22,fb));
	outFields->push(HX_("castsShadows",1f,fe,ad,16));
	outFields->push(HX_("material",a7,5c,a5,f0));
	outFields->push(HX_("animator",67,7b,f2,88));
	outFields->push(HX_("uvTransform",cb,52,60,6f));
	outFields->push(HX_("uvTransform2",07,1f,e8,04));
	outFields->push(HX_("vertexData",ae,df,1f,d3));
	outFields->push(HX_("indexData",5c,0e,71,fe));
	outFields->push(HX_("UVData",2b,11,08,ae));
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("vertexStride",9d,12,45,b1));
	outFields->push(HX_("vertexNormalData",75,18,42,9c));
	outFields->push(HX_("vertexTangentData",8b,d4,d1,fe));
	outFields->push(HX_("vertexOffset",17,8a,54,00));
	outFields->push(HX_("vertexNormalOffset",9e,c2,0b,01));
	outFields->push(HX_("vertexTangentOffset",34,30,13,f4));
	outFields->push(HX_("_activeSubSet",47,7b,7c,dc));
	outFields->push(HX_("_subSets",b2,81,0c,54));
	outFields->push(HX_("_subSetCount",6e,41,b0,1e));
	outFields->push(HX_("_numIndices",a0,52,fe,e5));
	outFields->push(HX_("_material",06,54,3b,38));
	outFields->push(HX_("_animator",c6,72,88,d0));
	outFields->push(HX_("_hasData",25,d0,5f,4b));
	outFields->push(HX_("_segments",bf,e4,bc,95));
	outFields->push(HX_("_indexSegments",d3,96,cb,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SegmentSet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::entities::SubSet */ ,(int)offsetof(SegmentSet_obj,_activeSubSet),HX_("_activeSubSet",47,7b,7c,dc)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SegmentSet_obj,_subSets),HX_("_subSets",b2,81,0c,54)},
	{::hx::fsInt,(int)offsetof(SegmentSet_obj,_subSetCount),HX_("_subSetCount",6e,41,b0,1e)},
	{::hx::fsInt,(int)offsetof(SegmentSet_obj,_numIndices),HX_("_numIndices",a0,52,fe,e5)},
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(SegmentSet_obj,_material),HX_("_material",06,54,3b,38)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SegmentSet_obj,_animator),HX_("_animator",c6,72,88,d0)},
	{::hx::fsBool,(int)offsetof(SegmentSet_obj,_hasData),HX_("_hasData",25,d0,5f,4b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(SegmentSet_obj,_segments),HX_("_segments",bf,e4,bc,95)},
	{::hx::fsInt,(int)offsetof(SegmentSet_obj,_indexSegments),HX_("_indexSegments",d3,96,cb,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SegmentSet_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &SegmentSet_obj::LIMIT,HX_("LIMIT",1b,57,ef,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SegmentSet_obj_sMemberFields[] = {
	HX_("_activeSubSet",47,7b,7c,dc),
	HX_("_subSets",b2,81,0c,54),
	HX_("_subSetCount",6e,41,b0,1e),
	HX_("_numIndices",a0,52,fe,e5),
	HX_("_material",06,54,3b,38),
	HX_("_animator",c6,72,88,d0),
	HX_("_hasData",25,d0,5f,4b),
	HX_("_segments",bf,e4,bc,95),
	HX_("_indexSegments",d3,96,cb,57),
	HX_("addSegment",92,fb,58,0e),
	HX_("removeSegmentByIndex",ac,cd,85,97),
	HX_("removeSegment",cf,2b,89,7f),
	HX_("removeAllSegments",bd,c5,b2,d3),
	HX_("getSegment",bd,55,30,f6),
	HX_("get_segmentCount",a5,08,34,42),
	HX_("get_subSetCount",04,4b,88,79),
	HX_("updateSegment",aa,34,3d,72),
	HX_("get_hasData",bb,d6,a1,97),
	HX_("getIndexBuffer",bc,b8,44,7d),
	HX_("activateVertexBuffer",d7,57,3c,03),
	HX_("activateUVBuffer",f4,80,aa,61),
	HX_("activateVertexNormalBuffer",9e,10,d7,ce),
	HX_("activateVertexTangentBuffer",ae,ad,55,ce),
	HX_("activateSecondaryUVBuffer",82,28,8f,3c),
	HX_("reOrderIndices",8c,bc,b0,62),
	HX_("addSubSet",03,cf,16,52),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_mouseEnabled",65,41,75,64),
	HX_("getDefaultBoundingVolume",89,f8,1c,2a),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("get_numTriangles",0e,26,50,2b),
	HX_("get_sourceEntity",e7,ba,c1,ff),
	HX_("get_castsShadows",a8,ea,4c,1b),
	HX_("get_material",b0,10,bf,a5),
	HX_("get_animator",70,2f,0c,3e),
	HX_("set_material",24,34,b8,ba),
	HX_("get_uvTransform",62,0a,42,30),
	HX_("get_uvTransform2",90,0b,87,09),
	HX_("get_vertexData",f7,67,15,49),
	HX_("get_indexData",33,e2,d4,bf),
	HX_("get_UVData",f4,80,8f,9e),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_vertexStride",26,ff,e3,b5),
	HX_("get_vertexNormalData",7e,7d,ac,ba),
	HX_("get_vertexTangentData",62,d7,7f,7d),
	HX_("get_vertexOffset",a0,76,f3,04),
	HX_("get_vertexNormalOffset",e7,3b,a0,5a),
	HX_("get_vertexTangentOffset",cb,d6,68,fc),
	HX_("get_assetType",a1,14,13,73),
	HX_("getRenderSceneTransform",2c,90,20,fc),
	::String(null()) };

static void SegmentSet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SegmentSet_obj::LIMIT,"LIMIT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SegmentSet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SegmentSet_obj::LIMIT,"LIMIT");
};

#endif

::hx::Class SegmentSet_obj::__mClass;

static ::String SegmentSet_obj_sStaticFields[] = {
	HX_("LIMIT",1b,57,ef,f2),
	::String(null())
};

void SegmentSet_obj::__register()
{
	SegmentSet_obj _hx_dummy;
	SegmentSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.entities.SegmentSet",ad,a4,b9,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SegmentSet_obj::__GetStatic;
	__mClass->mSetStaticField = &SegmentSet_obj::__SetStatic;
	__mClass->mMarkFunc = SegmentSet_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SegmentSet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SegmentSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SegmentSet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SegmentSet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SegmentSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SegmentSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SegmentSet_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_859440ed151b9aef_28_boot)
HXDLIN(  28)		LIMIT = 196605;
            	}
}

} // end namespace away3d
} // end namespace entities
