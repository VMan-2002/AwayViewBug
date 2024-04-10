#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace away3d{
namespace library{
namespace assets{


static ::String IAsset_obj_sMemberFields[] = {
	HX_("get_name",d4,2d,ba,c8),
	HX_("set_name",48,87,17,77),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("get_assetNamespace",54,83,fc,c0),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_assetFullPath",3b,10,24,8c),
	HX_("assetPathEquals",d4,cb,d4,5a),
	HX_("resetAssetPath",e6,97,68,09),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class IAsset_obj::__mClass;

void IAsset_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.library.assets.IAsset",d0,04,54,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IAsset_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa8241686 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace library
} // end namespace assets
