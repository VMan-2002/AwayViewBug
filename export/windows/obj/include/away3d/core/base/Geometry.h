#ifndef INCLUDED_away3d_core_base_Geometry
#define INCLUDED_away3d_core_base_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES Geometry_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef Geometry_obj OBJ_;
		Geometry_obj();

	public:
		enum { _hx_ClassId = 0x156ffae5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.base.Geometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.base.Geometry"); }
		static ::hx::ObjectPtr< Geometry_obj > __new();
		static ::hx::ObjectPtr< Geometry_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Geometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Geometry",d2,be,5a,ac); }

		 ::openfl::_Vector::ObjectVector _subGeometries;
		::String get_assetType();
		::Dynamic get_assetType_dyn();

		virtual  ::openfl::_Vector::ObjectVector get_subGeometries();
		::Dynamic get_subGeometries_dyn();

		virtual void applyTransformation( ::openfl::geom::Matrix3D transform);
		::Dynamic applyTransformation_dyn();

		void addSubGeometry(::Dynamic subGeometry);
		::Dynamic addSubGeometry_dyn();

		void removeSubGeometry(::Dynamic subGeometry);
		::Dynamic removeSubGeometry_dyn();

		virtual  ::away3d::core::base::Geometry clone();
		::Dynamic clone_dyn();

		virtual void scale(Float scale);
		::Dynamic scale_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		virtual void scaleUV(::hx::Null< Float >  scaleU,::hx::Null< Float >  scaleV);
		::Dynamic scaleUV_dyn();

		void convertToSeparateBuffers();
		::Dynamic convertToSeparateBuffers_dyn();

		virtual void validate();
		::Dynamic validate_dyn();

		void invalidateBounds(::Dynamic subGeom);
		::Dynamic invalidateBounds_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_Geometry */ 
