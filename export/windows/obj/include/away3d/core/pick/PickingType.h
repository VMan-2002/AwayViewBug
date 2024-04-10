#ifndef INCLUDED_away3d_core_pick_PickingType
#define INCLUDED_away3d_core_pick_PickingType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingType)

namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES PickingType_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PickingType_obj OBJ_;
		PickingType_obj();

	public:
		enum { _hx_ClassId = 0x184709bc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.pick.PickingType")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.pick.PickingType"); }

		inline static ::hx::ObjectPtr< PickingType_obj > __new() {
			::hx::ObjectPtr< PickingType_obj > __this = new PickingType_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PickingType_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PickingType_obj *__this = (PickingType_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PickingType_obj), false, "away3d.core.pick.PickingType"));
			*(void **)__this = PickingType_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PickingType_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PickingType",db,41,35,2f); }

		static void __boot();
		static ::Dynamic SHADER;
		static ::Dynamic RAYCAST_FIRST_ENCOUNTERED;
		static ::Dynamic RAYCAST_BEST_HIT;
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_PickingType */ 
