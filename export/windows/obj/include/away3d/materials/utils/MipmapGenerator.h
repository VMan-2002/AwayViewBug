#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#define INCLUDED_away3d_materials_utils_MipmapGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,utils,MipmapGenerator)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace away3d{
namespace materials{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES MipmapGenerator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MipmapGenerator_obj OBJ_;
		MipmapGenerator_obj();

	public:
		enum { _hx_ClassId = 0x73c60a47 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.materials.utils.MipmapGenerator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.materials.utils.MipmapGenerator"); }

		inline static ::hx::ObjectPtr< MipmapGenerator_obj > __new() {
			::hx::ObjectPtr< MipmapGenerator_obj > __this = new MipmapGenerator_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MipmapGenerator_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MipmapGenerator_obj *__this = (MipmapGenerator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MipmapGenerator_obj), false, "away3d.materials.utils.MipmapGenerator"));
			*(void **)__this = MipmapGenerator_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MipmapGenerator_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MipmapGenerator",8b,c1,9d,56); }

		static void __boot();
		static  ::openfl::geom::Matrix _matrix;
		static  ::openfl::geom::Rectangle _rect;
		static void generateMipMaps( ::openfl::display::BitmapData source, ::openfl::display3D::textures::TextureBase target, ::openfl::display::BitmapData mipmap,::hx::Null< bool >  alpha,::hx::Null< int >  side);
		static ::Dynamic generateMipMaps_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace utils

#endif /* INCLUDED_away3d_materials_utils_MipmapGenerator */ 
