#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
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
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
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

namespace away3d{
namespace animators{


static ::String IAnimationSet_obj_sMemberFields[] = {
	HX_("get_usesCPU",53,62,03,f6),
	HX_("hasAnimation",4a,d4,86,d8),
	HX_("getAnimation",8e,8b,8b,5a),
	HX_("resetGPUCompatibility",53,2e,66,66),
	HX_("cancelGPUCompatibility",fe,17,65,b5),
	HX_("getAGALVertexCode",78,00,58,4b),
	HX_("getAGALFragmentCode",a4,6a,e0,75),
	HX_("getAGALUVCode",55,8e,35,45),
	HX_("doneAGALCode",a0,93,fc,62),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	::String(null()) };

::hx::Class IAnimationSet_obj::__mClass;

void IAnimationSet_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.animators.IAnimationSet",76,e6,0b,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IAnimationSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xeb8359ba >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace animators
