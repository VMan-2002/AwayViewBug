#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#define INCLUDED_away3d_tools_utils_TextureUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,tools,utils,TextureUtils)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace away3d{
namespace tools{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES TextureUtils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextureUtils_obj OBJ_;
		TextureUtils_obj();

	public:
		enum { _hx_ClassId = 0x17e9cd2b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.tools.utils.TextureUtils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.tools.utils.TextureUtils"); }

		inline static ::hx::ObjectPtr< TextureUtils_obj > __new() {
			::hx::ObjectPtr< TextureUtils_obj > __this = new TextureUtils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextureUtils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextureUtils_obj *__this = (TextureUtils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureUtils_obj), false, "away3d.tools.utils.TextureUtils"));
			*(void **)__this = TextureUtils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextureUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextureUtils",76,a3,90,6b); }

		static void __boot();
		static int MAX_SIZE;
		static bool isBitmapDataValid( ::openfl::display::BitmapData bitmapData);
		static ::Dynamic isBitmapDataValid_dyn();

		static bool isDimensionValid(int d);
		static ::Dynamic isDimensionValid_dyn();

		static bool isPowerOfTwo(int value);
		static ::Dynamic isPowerOfTwo_dyn();

		static int getBestPowerOf2(int value);
		static ::Dynamic getBestPowerOf2_dyn();

};

} // end namespace away3d
} // end namespace tools
} // end namespace utils

#endif /* INCLUDED_away3d_tools_utils_TextureUtils */ 
