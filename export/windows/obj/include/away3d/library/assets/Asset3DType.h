#ifndef INCLUDED_away3d_library_assets_Asset3DType
#define INCLUDED_away3d_library_assets_Asset3DType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,library,assets,Asset3DType)

namespace away3d{
namespace library{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES Asset3DType_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Asset3DType_obj OBJ_;
		Asset3DType_obj();

	public:
		enum { _hx_ClassId = 0x358de164 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.library.assets.Asset3DType")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.library.assets.Asset3DType"); }

		inline static ::hx::ObjectPtr< Asset3DType_obj > __new() {
			::hx::ObjectPtr< Asset3DType_obj > __this = new Asset3DType_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Asset3DType_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Asset3DType_obj *__this = (Asset3DType_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Asset3DType_obj), false, "away3d.library.assets.Asset3DType"));
			*(void **)__this = Asset3DType_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Asset3DType_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Asset3DType",db,0d,55,08); }

		static void __boot();
		static ::String ENTITY;
		static ::String SKYBOX;
		static ::String CAMERA;
		static ::String SEGMENT_SET;
		static ::String MESH;
		static ::String GEOMETRY;
		static ::String SKELETON;
		static ::String SKELETON_POSE;
		static ::String CONTAINER;
		static ::String TEXTURE;
		static ::String TEXTURE_PROJECTOR;
		static ::String MATERIAL;
		static ::String ANIMATION_SET;
		static ::String ANIMATION_STATE;
		static ::String ANIMATION_NODE;
		static ::String ANIMATOR;
		static ::String STATE_TRANSITION;
		static ::String LIGHT;
		static ::String LIGHT_PICKER;
		static ::String SHADOW_MAP_METHOD;
		static ::String EFFECTS_METHOD;
};

} // end namespace away3d
} // end namespace library
} // end namespace assets

#endif /* INCLUDED_away3d_library_assets_Asset3DType */ 
