#ifndef INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_
#define INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_GraphicsPathWinding,GraphicsPathWinding_Impl_)

namespace openfl{
namespace display{
namespace _GraphicsPathWinding{


class HXCPP_CLASS_ATTRIBUTES GraphicsPathWinding_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GraphicsPathWinding_Impl__obj OBJ_;
		GraphicsPathWinding_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7571e039 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_"); }

		inline static ::hx::ObjectPtr< GraphicsPathWinding_Impl__obj > __new() {
			::hx::ObjectPtr< GraphicsPathWinding_Impl__obj > __this = new GraphicsPathWinding_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GraphicsPathWinding_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GraphicsPathWinding_Impl__obj *__this = (GraphicsPathWinding_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsPathWinding_Impl__obj), false, "openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_"));
			*(void **)__this = GraphicsPathWinding_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicsPathWinding_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicsPathWinding_Impl_",ea,2e,4c,54); }

		static void __boot();
		static  ::Dynamic EVEN_ODD;
		static  ::Dynamic NON_ZERO;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _GraphicsPathWinding

#endif /* INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_ */ 
