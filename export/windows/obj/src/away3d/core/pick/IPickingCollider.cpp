#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubMesh
#include <away3d/core/base/SubMesh.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#include <away3d/core/pick/IPickingCollider.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

namespace away3d{
namespace core{
namespace pick{


static ::String IPickingCollider_obj_sMemberFields[] = {
	HX_("setLocalRay",01,03,4c,10),
	HX_("testSubMeshCollision",97,b7,be,99),
	::String(null()) };

::hx::Class IPickingCollider_obj::__mClass;

void IPickingCollider_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.pick.IPickingCollider",d9,32,e5,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IPickingCollider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x6100026b >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace pick
