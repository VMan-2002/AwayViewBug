#ifndef INCLUDED_away3d_core_base_SkinnedSubGeometry
#define INCLUDED_away3d_core_base_SkinnedSubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SkinnedSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES SkinnedSubGeometry_obj : public  ::away3d::core::base::CompactSubGeometry_obj
{
	public:
		typedef  ::away3d::core::base::CompactSubGeometry_obj super;
		typedef SkinnedSubGeometry_obj OBJ_;
		SkinnedSubGeometry_obj();

	public:
		enum { _hx_ClassId = 0x4f5c81d1 };

		void __construct(int jointsPerVertex);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.base.SkinnedSubGeometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.base.SkinnedSubGeometry"); }
		static ::hx::ObjectPtr< SkinnedSubGeometry_obj > __new(int jointsPerVertex);
		static ::hx::ObjectPtr< SkinnedSubGeometry_obj > __alloc(::hx::Ctx *_hx_ctx,int jointsPerVertex);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SkinnedSubGeometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SkinnedSubGeometry",62,64,4b,5a); }

		 ::Dynamic _bufferFormat;
		 ::openfl::_Vector::FloatVector _jointWeightsData;
		 ::openfl::_Vector::FloatVector _jointIndexData;
		 ::openfl::_Vector::FloatVector _animatedData;
		 ::openfl::_Vector::ObjectVector _jointWeightsBuffer;
		 ::openfl::_Vector::ObjectVector _jointIndexBuffer;
		 ::openfl::_Vector::BoolVector _jointWeightsInvalid;
		 ::openfl::_Vector::BoolVector _jointIndicesInvalid;
		 ::openfl::_Vector::ObjectVector _jointWeightContext;
		 ::openfl::_Vector::ObjectVector _jointIndexContext;
		int _jointsPerVertex;
		 ::openfl::_Vector::FloatVector _condensedJointIndexData;
		 ::openfl::_Vector::IntVector _condensedIndexLookUp;
		int _numCondensedJoints;
		 ::Dynamic getVertexBufferFormat(int size);
		::Dynamic getVertexBufferFormat_dyn();

		 ::openfl::_Vector::IntVector get_condensedIndexLookUp();
		::Dynamic get_condensedIndexLookUp_dyn();

		int get_numCondensedJoints();
		::Dynamic get_numCondensedJoints_dyn();

		 ::openfl::_Vector::FloatVector get_animatedData();
		::Dynamic get_animatedData_dyn();

		void updateAnimatedData( ::openfl::_Vector::FloatVector value);
		::Dynamic updateAnimatedData_dyn();

		void activateJointWeightsBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateJointWeightsBuffer_dyn();

		void activateJointIndexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateJointIndexBuffer_dyn();

		void uploadData(int contextIndex);

		::Dynamic clone();

		void dispose();

		void condenseIndexData();
		::Dynamic condenseIndexData_dyn();

		 ::openfl::_Vector::FloatVector get_jointWeightsData();
		::Dynamic get_jointWeightsData_dyn();

		void updateJointWeightsData( ::openfl::_Vector::FloatVector value);
		::Dynamic updateJointWeightsData_dyn();

		 ::openfl::_Vector::FloatVector get_jointIndexData();
		::Dynamic get_jointIndexData_dyn();

		void updateJointIndexData( ::openfl::_Vector::FloatVector value);
		::Dynamic updateJointIndexData_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_SkinnedSubGeometry */ 
