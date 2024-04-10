#ifndef INCLUDED_away3d_core_data_EntityListItemPool
#define INCLUDED_away3d_core_data_EntityListItemPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,data,EntityListItem)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItemPool)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)

namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES EntityListItemPool_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EntityListItemPool_obj OBJ_;
		EntityListItemPool_obj();

	public:
		enum { _hx_ClassId = 0x685c17f8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.data.EntityListItemPool")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.data.EntityListItemPool"); }
		static ::hx::ObjectPtr< EntityListItemPool_obj > __new();
		static ::hx::ObjectPtr< EntityListItemPool_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EntityListItemPool_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EntityListItemPool",f0,89,30,9d); }

		 ::openfl::_Vector::ObjectVector _pool;
		int _index;
		int _poolSize;
		 ::away3d::core::data::EntityListItem getItem();
		::Dynamic getItem_dyn();

		void freeAll();
		::Dynamic freeAll_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_EntityListItemPool */ 
