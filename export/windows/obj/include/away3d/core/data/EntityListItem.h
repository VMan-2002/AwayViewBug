#ifndef INCLUDED_away3d_core_data_EntityListItem
#define INCLUDED_away3d_core_data_EntityListItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2e076dc4489de7bb_11_new)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,EntityListItem)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES EntityListItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EntityListItem_obj OBJ_;
		EntityListItem_obj();

	public:
		enum { _hx_ClassId = 0x012a61c4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.data.EntityListItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.data.EntityListItem"); }

		inline static ::hx::ObjectPtr< EntityListItem_obj > __new() {
			::hx::ObjectPtr< EntityListItem_obj > __this = new EntityListItem_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EntityListItem_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EntityListItem_obj *__this = (EntityListItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EntityListItem_obj), true, "away3d.core.data.EntityListItem"));
			*(void **)__this = EntityListItem_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2e076dc4489de7bb_11_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EntityListItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EntityListItem",f4,52,a4,ec); }

		 ::away3d::entities::Entity entity;
		 ::away3d::core::data::EntityListItem next;
};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_EntityListItem */ 
