#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#define INCLUDED_away3d_core_math_Matrix3DUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,math,Matrix3DUtils)
HX_DECLARE_CLASS3(away3d,core,math,Plane3D)
HX_DECLARE_CLASS3(away3d,core,math,Quaternion)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Matrix3DUtils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix3DUtils_obj OBJ_;
		Matrix3DUtils_obj();

	public:
		enum { _hx_ClassId = 0x57772499 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.core.math.Matrix3DUtils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.core.math.Matrix3DUtils"); }

		inline static ::hx::ObjectPtr< Matrix3DUtils_obj > __new() {
			::hx::ObjectPtr< Matrix3DUtils_obj > __this = new Matrix3DUtils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Matrix3DUtils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Matrix3DUtils_obj *__this = (Matrix3DUtils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Matrix3DUtils_obj), false, "away3d.core.math.Matrix3DUtils"));
			*(void **)__this = Matrix3DUtils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Matrix3DUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Matrix3DUtils",7f,1f,21,f6); }

		static void __boot();
		static  ::openfl::_Vector::FloatVector RAW_DATA_CONTAINER;
		static  ::openfl::geom::Matrix3D CALCULATION_MATRIX;
		static  ::openfl::geom::Vector3D CALCULATION_VECTOR3D;
		static  ::openfl::_Vector::ObjectVector CALCULATION_DECOMPOSE;
		static  ::openfl::geom::Matrix3D quaternion2matrix( ::away3d::core::math::Quaternion quarternion, ::openfl::geom::Matrix3D m);
		static ::Dynamic quaternion2matrix_dyn();

		static  ::openfl::geom::Vector3D getForward( ::openfl::geom::Matrix3D m, ::openfl::geom::Vector3D v);
		static ::Dynamic getForward_dyn();

		static  ::openfl::geom::Vector3D getUp( ::openfl::geom::Matrix3D m, ::openfl::geom::Vector3D v);
		static ::Dynamic getUp_dyn();

		static  ::openfl::geom::Vector3D getRight( ::openfl::geom::Matrix3D m, ::openfl::geom::Vector3D v);
		static ::Dynamic getRight_dyn();

		static bool compare( ::openfl::geom::Matrix3D m1, ::openfl::geom::Matrix3D m2);
		static ::Dynamic compare_dyn();

		static void lookAt( ::openfl::geom::Matrix3D matrix, ::openfl::geom::Vector3D pos, ::openfl::geom::Vector3D dir, ::openfl::geom::Vector3D up);
		static ::Dynamic lookAt_dyn();

		static  ::openfl::geom::Matrix3D reflection( ::away3d::core::math::Plane3D plane, ::openfl::geom::Matrix3D target);
		static ::Dynamic reflection_dyn();

		static  ::openfl::_Vector::ObjectVector decompose( ::openfl::geom::Matrix3D sourceMatrix, ::Dynamic orientationStyle);
		static ::Dynamic decompose_dyn();

		static  ::openfl::geom::Vector3D transformVector( ::openfl::geom::Matrix3D matrix, ::openfl::geom::Vector3D vector, ::openfl::geom::Vector3D result);
		static ::Dynamic transformVector_dyn();

		static  ::openfl::geom::Vector3D deltaTransformVector( ::openfl::geom::Matrix3D matrix, ::openfl::geom::Vector3D vector, ::openfl::geom::Vector3D result);
		static ::Dynamic deltaTransformVector_dyn();

		static  ::openfl::geom::Vector3D getTranslation( ::openfl::geom::Matrix3D transform, ::openfl::geom::Vector3D result);
		static ::Dynamic getTranslation_dyn();

		static void deltaTransformVectors( ::openfl::geom::Matrix3D matrix, ::openfl::_Vector::FloatVector vin, ::openfl::_Vector::FloatVector vout);
		static ::Dynamic deltaTransformVectors_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace math

#endif /* INCLUDED_away3d_core_math_Matrix3DUtils */ 
