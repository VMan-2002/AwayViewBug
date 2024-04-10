#ifndef INCLUDED_away3d_errors_AbstractMethodError
#define INCLUDED_away3d_errors_AbstractMethodError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(away3d,errors,AbstractMethodError)
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(openfl,errors,Error)

namespace away3d{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES AbstractMethodError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef AbstractMethodError_obj OBJ_;
		AbstractMethodError_obj();

	public:
		enum { _hx_ClassId = 0x58361977 };

		void __construct(::String message,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.errors.AbstractMethodError")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.errors.AbstractMethodError"); }
		static ::hx::ObjectPtr< AbstractMethodError_obj > __new(::String message,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< AbstractMethodError_obj > __alloc(::hx::Ctx *_hx_ctx,::String message,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AbstractMethodError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AbstractMethodError",45,cb,d4,c3); }

};

} // end namespace away3d
} // end namespace errors

#endif /* INCLUDED_away3d_errors_AbstractMethodError */ 
