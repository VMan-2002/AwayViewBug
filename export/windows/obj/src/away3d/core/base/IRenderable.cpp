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
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
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

namespace away3d{
namespace core{
namespace base{


static ::String IRenderable_obj_sMemberFields[] = {
	HX_("get_sceneTransform",49,8b,c6,1d),
	HX_("get_inverseSceneTransform",a7,58,fc,b8),
	HX_("get_mouseEnabled",65,41,75,64),
	HX_("get_sourceEntity",e7,ba,c1,ff),
	HX_("get_castsShadows",a8,ea,4c,1b),
	HX_("get_uvTransform",62,0a,42,30),
	HX_("get_uvTransform2",90,0b,87,09),
	HX_("get_shaderPickingDetails",af,2b,a1,16),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_numTriangles",0e,26,50,2b),
	HX_("get_vertexStride",26,ff,e3,b5),
	HX_("get_vertexData",f7,67,15,49),
	HX_("get_vertexNormalData",7e,7d,ac,ba),
	HX_("get_vertexTangentData",62,d7,7f,7d),
	HX_("get_indexData",33,e2,d4,bf),
	HX_("get_UVData",f4,80,8f,9e),
	HX_("getRenderSceneTransform",2c,90,20,fc),
	HX_("activateVertexBuffer",d7,57,3c,03),
	HX_("activateUVBuffer",f4,80,aa,61),
	HX_("activateSecondaryUVBuffer",82,28,8f,3c),
	HX_("activateVertexNormalBuffer",9e,10,d7,ce),
	HX_("activateVertexTangentBuffer",ae,ad,55,ce),
	HX_("getIndexBuffer",bc,b8,44,7d),
	::String(null()) };

::hx::Class IRenderable_obj::__mClass;

void IRenderable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.IRenderable",bc,e5,6a,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IRenderable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x1ea67b0a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
