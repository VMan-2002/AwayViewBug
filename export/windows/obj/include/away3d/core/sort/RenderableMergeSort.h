#ifndef INCLUDED_away3d_core_sort_RenderableMergeSort
#define INCLUDED_away3d_core_sort_RenderableMergeSort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_sort_IEntitySorter
#include <away3d/core/sort/IEntitySorter.h>
#endif
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,sort,IEntitySorter)
HX_DECLARE_CLASS3(away3d,core,sort,RenderableMergeSort)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)

namespace away3d{
namespace core{
namespace sort{


class HXCPP_CLASS_ATTRIBUTES RenderableMergeSort_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RenderableMergeSort_obj OBJ_;
		RenderableMergeSort_obj();

	public:
		enum { _hx_ClassId = 0x54af334a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.sort.RenderableMergeSort")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.sort.RenderableMergeSort"); }
		static ::hx::ObjectPtr< RenderableMergeSort_obj > __new();
		static ::hx::ObjectPtr< RenderableMergeSort_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderableMergeSort_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("RenderableMergeSort",06,d0,93,55); }

		void sort( ::away3d::core::traverse::EntityCollector collector);
		::Dynamic sort_dyn();

		 ::away3d::core::data::RenderableListItem mergeSortByDepth( ::away3d::core::data::RenderableListItem head);
		::Dynamic mergeSortByDepth_dyn();

		 ::away3d::core::data::RenderableListItem mergeSortByMaterial( ::away3d::core::data::RenderableListItem head);
		::Dynamic mergeSortByMaterial_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace sort

#endif /* INCLUDED_away3d_core_sort_RenderableMergeSort */ 
