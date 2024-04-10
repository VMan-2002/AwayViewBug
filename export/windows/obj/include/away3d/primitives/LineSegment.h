#ifndef INCLUDED_away3d_primitives_LineSegment
#define INCLUDED_away3d_primitives_LineSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
#endif
HX_DECLARE_CLASS2(away3d,primitives,LineSegment)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES LineSegment_obj : public  ::away3d::primitives::data::Segment_obj
{
	public:
		typedef  ::away3d::primitives::data::Segment_obj super;
		typedef LineSegment_obj OBJ_;
		LineSegment_obj();

	public:
		enum { _hx_ClassId = 0x56388ab4 };

		void __construct( ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1,::hx::Null< int >  __o_color0,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_thickness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.primitives.LineSegment")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.primitives.LineSegment"); }
		static ::hx::ObjectPtr< LineSegment_obj > __new( ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1,::hx::Null< int >  __o_color0,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_thickness);
		static ::hx::ObjectPtr< LineSegment_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1,::hx::Null< int >  __o_color0,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_thickness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineSegment_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineSegment",ff,1d,55,c9); }

		static void __boot();
		static ::String TYPE;
};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_LineSegment */ 
