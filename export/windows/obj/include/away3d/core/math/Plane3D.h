#ifndef INCLUDED_away3d_core_math_Plane3D
#define INCLUDED_away3d_core_math_Plane3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Plane3D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Plane3D_obj OBJ_;
		Plane3D_obj();

	public:
		enum { _hx_ClassId = 0x273f7787 };

		void __construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.math.Plane3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.math.Plane3D"); }
		static ::hx::ObjectPtr< Plane3D_obj > __new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d);
		static ::hx::ObjectPtr< Plane3D_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Plane3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Plane3D",ed,a1,20,50); }

		static void __boot();
		static int ALIGN_ANY;
		static int ALIGN_XY_AXIS;
		static int ALIGN_YZ_AXIS;
		static int ALIGN_XZ_AXIS;
		Float a;
		Float b;
		Float c;
		Float d;
		int _alignment;
		void fromPoints( ::openfl::geom::Vector3D p0, ::openfl::geom::Vector3D p1, ::openfl::geom::Vector3D p2);
		::Dynamic fromPoints_dyn();

		void fromNormalAndPoint( ::openfl::geom::Vector3D normal, ::openfl::geom::Vector3D point);
		::Dynamic fromNormalAndPoint_dyn();

		 ::away3d::core::math::Plane3D normalize();
		::Dynamic normalize_dyn();

		Float distance( ::openfl::geom::Vector3D p);
		::Dynamic distance_dyn();

		int classifyPoint( ::openfl::geom::Vector3D p,::hx::Null< Float >  epsilon);
		::Dynamic classifyPoint_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_Plane3D */ 
