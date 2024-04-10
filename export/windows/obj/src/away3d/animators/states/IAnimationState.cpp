#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_states_IAnimationState
#include <away3d/animators/states/IAnimationState.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

namespace away3d{
namespace animators{
namespace states{


static ::String IAnimationState_obj_sMemberFields[] = {
	HX_("get_positionDelta",e6,bd,95,47),
	HX_("offset",93,97,3f,60),
	HX_("update",09,86,05,87),
	HX_("phase",3b,28,e9,c1),
	::String(null()) };

::hx::Class IAnimationState_obj::__mClass;

void IAnimationState_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.animators.states.IAnimationState",fb,2f,8a,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IAnimationState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x7435b6e7 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace animators
} // end namespace states
