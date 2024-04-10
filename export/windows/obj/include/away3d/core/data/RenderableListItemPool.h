#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#define INCLUDED_away3d_core_data_RenderableListItemPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItemPool)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)

namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES RenderableListItemPool_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RenderableListItemPool_obj OBJ_;
		RenderableListItemPool_obj();

	public:
		enum { _hx_ClassId = 0x33f70aa9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.data.RenderableListItemPool")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.data.RenderableListItemPool"); }
		static ::hx::ObjectPtr< RenderableListItemPool_obj > __new();
		static ::hx::ObjectPtr< RenderableListItemPool_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderableListItemPool_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderableListItemPool",3d,c2,a2,03); }

		 ::openfl::_Vector::ObjectVector _pool;
		int _index;
		int _poolSize;
		 ::away3d::core::data::RenderableListItem getItem();
		::Dynamic getItem_dyn();

		void freeAll();
		::Dynamic freeAll_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_RenderableListItemPool */ 
