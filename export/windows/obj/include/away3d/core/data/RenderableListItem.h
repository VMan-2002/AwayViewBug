#ifndef INCLUDED_away3d_core_data_RenderableListItem
#define INCLUDED_away3d_core_data_RenderableListItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_119bc058c173c585_21_new)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace core{
namespace data{


class HXCPP_CLASS_ATTRIBUTES RenderableListItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RenderableListItem_obj OBJ_;
		RenderableListItem_obj();

	public:
		enum { _hx_ClassId = 0x2cedebf5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.data.RenderableListItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.data.RenderableListItem"); }

		inline static ::hx::ObjectPtr< RenderableListItem_obj > __new() {
			::hx::ObjectPtr< RenderableListItem_obj > __this = new RenderableListItem_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RenderableListItem_obj > __alloc(::hx::Ctx *_hx_ctx) {
			RenderableListItem_obj *__this = (RenderableListItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderableListItem_obj), true, "away3d.core.data.RenderableListItem"));
			*(void **)__this = RenderableListItem_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_119bc058c173c585_21_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderableListItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderableListItem",c1,20,07,cc); }

		 ::away3d::core::data::RenderableListItem next;
		::Dynamic renderable;
		int materialId;
		int renderOrderId;
		Float zIndex;
		 ::openfl::geom::Matrix3D renderSceneTransform;
		bool cascaded;
};

} // end namespace away3d
} // end namespace core
} // end namespace data

#endif /* INCLUDED_away3d_core_data_RenderableListItem */ 
