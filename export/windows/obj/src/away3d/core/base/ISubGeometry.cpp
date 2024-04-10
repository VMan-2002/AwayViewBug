#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

namespace away3d{
namespace core{
namespace base{


static ::String ISubGeometry_obj_sMemberFields[] = {
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_numTriangles",0e,26,50,2b),
	HX_("get_vertexStride",26,ff,e3,b5),
	HX_("get_vertexNormalStride",6d,c4,90,0b),
	HX_("get_vertexTangentStride",51,5f,59,ad),
	HX_("get_UVStride",63,11,d4,f0),
	HX_("get_secondaryUVStride",a5,43,6d,fb),
	HX_("get_vertexData",f7,67,15,49),
	HX_("get_vertexNormalData",7e,7d,ac,ba),
	HX_("get_vertexTangentData",62,d7,7f,7d),
	HX_("get_vertexOffset",a0,76,f3,04),
	HX_("get_vertexNormalOffset",e7,3b,a0,5a),
	HX_("get_vertexTangentOffset",cb,d6,68,fc),
	HX_("get_UVOffset",dd,88,e3,3f),
	HX_("get_secondaryUVOffset",1f,bb,7c,4a),
	HX_("get_indexData",33,e2,d4,bf),
	HX_("get_UVData",f4,80,8f,9e),
	HX_("get_scaleU",54,5a,ad,2c),
	HX_("get_scaleV",55,5a,ad,2c),
	HX_("get_parentGeometry",c5,de,1a,36),
	HX_("set_parentGeometry",39,11,ca,12),
	HX_("get_faceNormals",e6,18,26,13),
	HX_("get_autoDeriveVertexNormals",29,aa,98,7b),
	HX_("set_autoDeriveVertexNormals",35,89,31,be),
	HX_("get_autoDeriveVertexTangents",b1,db,cf,af),
	HX_("set_autoDeriveVertexTangents",25,27,fa,b2),
	HX_("get_vertexPositionData",40,52,bb,64),
	HX_("activateVertexBuffer",d7,57,3c,03),
	HX_("activateUVBuffer",f4,80,aa,61),
	HX_("activateSecondaryUVBuffer",82,28,8f,3c),
	HX_("activateVertexNormalBuffer",9e,10,d7,ce),
	HX_("activateVertexTangentBuffer",ae,ad,55,ce),
	HX_("getIndexBuffer",bc,b8,44,7d),
	HX_("applyTransformation",d7,3b,1e,68),
	HX_("scale",8a,ce,ce,78),
	HX_("dispose",9f,80,4c,bb),
	HX_("clone",5d,13,63,48),
	HX_("scaleUV",6b,4f,07,65),
	HX_("cloneWithSeperateBuffers",09,c0,e2,05),
	HX_("fromVectors",06,5e,dd,72),
	::String(null()) };

::hx::Class ISubGeometry_obj::__mClass;

void ISubGeometry_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.ISubGeometry",06,d1,5a,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ISubGeometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x9241dff8 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
