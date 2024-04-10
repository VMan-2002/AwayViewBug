#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#define INCLUDED_away3d_core_sort_IEntitySorter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,sort,IEntitySorter)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)

namespace away3d{
namespace core{
namespace sort{


class HXCPP_CLASS_ATTRIBUTES IEntitySorter_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_sort)( ::away3d::core::traverse::EntityCollector collector); 
		static inline void sort( ::Dynamic _hx_, ::away3d::core::traverse::EntityCollector collector) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::sort::IEntitySorter_obj *>(_hx_.mPtr->_hx_getInterface(0xa78a4fbb)))->_hx_sort)(collector);
		}
};

} // end namespace away3d
} // end namespace core
} // end namespace sort

#endif /* INCLUDED_away3d_core_sort_IEntitySorter */ 
