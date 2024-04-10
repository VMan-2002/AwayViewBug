#ifndef INCLUDED_away3d_primitives_CubeGeometry
#define INCLUDED_away3d_primitives_CubeGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_primitives_PrimitiveBase
#include <away3d/primitives/PrimitiveBase.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,CubeGeometry)
HX_DECLARE_CLASS2(away3d,primitives,PrimitiveBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES CubeGeometry_obj : public  ::away3d::primitives::PrimitiveBase_obj
{
	public:
		typedef  ::away3d::primitives::PrimitiveBase_obj super;
		typedef CubeGeometry_obj OBJ_;
		CubeGeometry_obj();

	public:
		enum { _hx_ClassId = 0x56f77692 };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_segmentsD,::hx::Null< bool >  __o_tile6);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.primitives.CubeGeometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.primitives.CubeGeometry"); }
		static ::hx::ObjectPtr< CubeGeometry_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_segmentsD,::hx::Null< bool >  __o_tile6);
		static ::hx::ObjectPtr< CubeGeometry_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_segmentsD,::hx::Null< bool >  __o_tile6);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CubeGeometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CubeGeometry",e7,c4,db,9c); }

		Float _width;
		Float _height;
		Float _depth;
		bool _tile6;
		int _segmentsW;
		int _segmentsH;
		int _segmentsD;
		Float get_width();
		::Dynamic get_width_dyn();

		Float set_width(Float value);
		::Dynamic set_width_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float set_height(Float value);
		::Dynamic set_height_dyn();

		Float get_depth();
		::Dynamic get_depth_dyn();

		Float set_depth(Float value);
		::Dynamic set_depth_dyn();

		bool get_tile6();
		::Dynamic get_tile6_dyn();

		bool set_tile6(bool value);
		::Dynamic set_tile6_dyn();

		int get_segmentsW();
		::Dynamic get_segmentsW_dyn();

		int set_segmentsW(int value);
		::Dynamic set_segmentsW_dyn();

		int get_segmentsH();
		::Dynamic get_segmentsH_dyn();

		int set_segmentsH(int value);
		::Dynamic set_segmentsH_dyn();

		int get_segmentsD();
		::Dynamic get_segmentsD_dyn();

		int set_segmentsD(int value);
		::Dynamic set_segmentsD_dyn();

		void buildGeometry( ::away3d::core::base::CompactSubGeometry target);

		void buildUVs( ::away3d::core::base::CompactSubGeometry target);

};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_CubeGeometry */ 
