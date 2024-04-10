#ifndef INCLUDED_away3d_primitives_PrimitiveBase
#define INCLUDED_away3d_primitives_PrimitiveBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,PrimitiveBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES PrimitiveBase_obj : public  ::away3d::core::base::Geometry_obj
{
	public:
		typedef  ::away3d::core::base::Geometry_obj super;
		typedef PrimitiveBase_obj OBJ_;
		PrimitiveBase_obj();

	public:
		enum { _hx_ClassId = 0x2818d649 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.primitives.PrimitiveBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.primitives.PrimitiveBase"); }
		static ::hx::ObjectPtr< PrimitiveBase_obj > __new();
		static ::hx::ObjectPtr< PrimitiveBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PrimitiveBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PrimitiveBase",38,cc,01,ce); }

		bool _geomDirty;
		bool _uvDirty;
		 ::away3d::core::base::CompactSubGeometry _subGeometry;
		 ::openfl::_Vector::ObjectVector get_subGeometries();

		 ::away3d::core::base::Geometry clone();

		void scale(Float scale);

		void scaleUV(::hx::Null< Float >  scaleU,::hx::Null< Float >  scaleV);

		void applyTransformation( ::openfl::geom::Matrix3D transform);

		virtual void buildGeometry( ::away3d::core::base::CompactSubGeometry target);
		::Dynamic buildGeometry_dyn();

		virtual void buildUVs( ::away3d::core::base::CompactSubGeometry target);
		::Dynamic buildUVs_dyn();

		void invalidateGeometry();
		::Dynamic invalidateGeometry_dyn();

		void invalidateUVs();
		::Dynamic invalidateUVs_dyn();

		void updateGeometry();
		::Dynamic updateGeometry_dyn();

		void updateUVs();
		::Dynamic updateUVs_dyn();

		void validate();

};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_PrimitiveBase */ 
