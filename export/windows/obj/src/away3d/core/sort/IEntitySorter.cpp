#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif

namespace away3d{
namespace core{
namespace sort{


static ::String IEntitySorter_obj_sMemberFields[] = {
	HX_("sort",5e,27,58,4c),
	::String(null()) };

::hx::Class IEntitySorter_obj::__mClass;

void IEntitySorter_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.sort.IEntitySorter",a7,d7,96,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IEntitySorter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa78a4fbb >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace sort
