#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#define INCLUDED_away3d_animators_data_AnimationSubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,animators,data,AnimationSubGeometry)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace animators{
namespace data{


class HXCPP_CLASS_ATTRIBUTES AnimationSubGeometry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimationSubGeometry_obj OBJ_;
		AnimationSubGeometry_obj();

	public:
		enum { _hx_ClassId = 0x0c9294e1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.animators.data.AnimationSubGeometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.animators.data.AnimationSubGeometry"); }
		static ::hx::ObjectPtr< AnimationSubGeometry_obj > __new();
		static ::hx::ObjectPtr< AnimationSubGeometry_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationSubGeometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationSubGeometry",ce,13,f7,e1); }

		 ::openfl::_Vector::FloatVector _vertexData;
		 ::openfl::_Vector::ObjectVector _vertexBuffer;
		 ::openfl::_Vector::ObjectVector _bufferContext;
		 ::openfl::_Vector::BoolVector _bufferDirty;
		int _numVertices;
		int _totalLenOfOneVertex;
		int numProcessedVertices;
		Float previousTime;
		 ::openfl::_Vector::ObjectVector animationParticles;
		void createVertexData(int numVertices,int totalLenOfOneVertex);
		::Dynamic createVertexData_dyn();

		void activateVertexBuffer(int index,int bufferOffset, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::Dynamic format);
		::Dynamic activateVertexBuffer_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void invalidateBuffer();
		::Dynamic invalidateBuffer_dyn();

		 ::openfl::_Vector::FloatVector get_vertexData();
		::Dynamic get_vertexData_dyn();

		int get_numVertices();
		::Dynamic get_numVertices_dyn();

		int get_totalLenOfOneVertex();
		::Dynamic get_totalLenOfOneVertex_dyn();

};

} // end namespace away3d
} // end namespace animators
} // end namespace data

#endif /* INCLUDED_away3d_animators_data_AnimationSubGeometry */ 
