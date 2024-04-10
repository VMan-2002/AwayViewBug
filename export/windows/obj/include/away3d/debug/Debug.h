#ifndef INCLUDED_away3d_debug_Debug
#define INCLUDED_away3d_debug_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,debug,Debug)

namespace away3d{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES Debug_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();

	public:
		enum { _hx_ClassId = 0x1c2f12ff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.debug.Debug")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.debug.Debug"); }

		inline static ::hx::ObjectPtr< Debug_obj > __new() {
			::hx::ObjectPtr< Debug_obj > __this = new Debug_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Debug_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Debug_obj *__this = (Debug_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Debug_obj), false, "away3d.debug.Debug"));
			*(void **)__this = Debug_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Debug",33,c2,4c,6a); }

		static void __boot();
		static bool active;
		static bool warningsAsErrors;
		static void clear();
		static ::Dynamic clear_dyn();

		static void delimiter();
		static ::Dynamic delimiter_dyn();

		static void trace( ::Dynamic message);
		static ::Dynamic trace_dyn();

		static void warning( ::Dynamic message);
		static ::Dynamic warning_dyn();

		static void error( ::Dynamic message);
		static ::Dynamic error_dyn();

};

} // end namespace away3d
} // end namespace debug

#endif /* INCLUDED_away3d_debug_Debug */ 
