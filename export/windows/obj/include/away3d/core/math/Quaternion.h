#ifndef INCLUDED_away3d_core_math_Quaternion
#define INCLUDED_away3d_core_math_Quaternion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,Quaternion)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Quaternion_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Quaternion_obj OBJ_;
		Quaternion_obj();

	public:
		enum { _hx_ClassId = 0x325a37e4 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.math.Quaternion")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.math.Quaternion"); }
		static ::hx::ObjectPtr< Quaternion_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static ::hx::ObjectPtr< Quaternion_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Quaternion_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Quaternion",3e,11,7b,12); }

		Float x;
		Float y;
		Float z;
		Float w;
		Float get_magnitude();
		::Dynamic get_magnitude_dyn();

		void multiply( ::away3d::core::math::Quaternion qa, ::away3d::core::math::Quaternion qb);
		::Dynamic multiply_dyn();

		 ::away3d::core::math::Quaternion multiplyVector( ::openfl::geom::Vector3D vector, ::away3d::core::math::Quaternion target);
		::Dynamic multiplyVector_dyn();

		void fromAxisAngle( ::openfl::geom::Vector3D axis,Float angle);
		::Dynamic fromAxisAngle_dyn();

		void slerp( ::away3d::core::math::Quaternion qa, ::away3d::core::math::Quaternion qb,Float t);
		::Dynamic slerp_dyn();

		void lerp( ::away3d::core::math::Quaternion qa, ::away3d::core::math::Quaternion qb,Float t);
		::Dynamic lerp_dyn();

		void fromEulerAngles(Float ax,Float ay,Float az);
		::Dynamic fromEulerAngles_dyn();

		 ::openfl::geom::Vector3D toEulerAngles( ::openfl::geom::Vector3D target);
		::Dynamic toEulerAngles_dyn();

		void normalize(::hx::Null< Float >  val);
		::Dynamic normalize_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::openfl::geom::Matrix3D toMatrix3D( ::openfl::geom::Matrix3D target);
		::Dynamic toMatrix3D_dyn();

		void fromMatrix( ::openfl::geom::Matrix3D matrix);
		::Dynamic fromMatrix_dyn();

		void toRawData( ::openfl::_Vector::FloatVector target,::hx::Null< bool >  exclude4thRow);
		::Dynamic toRawData_dyn();

		 ::away3d::core::math::Quaternion clone();
		::Dynamic clone_dyn();

		 ::openfl::geom::Vector3D rotatePoint( ::openfl::geom::Vector3D vector, ::openfl::geom::Vector3D target);
		::Dynamic rotatePoint_dyn();

		void copyFrom( ::away3d::core::math::Quaternion q);
		::Dynamic copyFrom_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_Quaternion */ 
