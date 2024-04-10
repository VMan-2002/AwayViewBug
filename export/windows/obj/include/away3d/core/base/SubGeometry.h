#ifndef INCLUDED_away3d_core_base_SubGeometry
#define INCLUDED_away3d_core_base_SubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES SubGeometry_obj : public  ::away3d::core::base::SubGeometryBase_obj
{
	public:
		typedef  ::away3d::core::base::SubGeometryBase_obj super;
		typedef SubGeometry_obj OBJ_;
		SubGeometry_obj();

	public:
		enum { _hx_ClassId = 0x5ccf8ae3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.base.SubGeometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.base.SubGeometry"); }
		static ::hx::ObjectPtr< SubGeometry_obj > __new();
		static ::hx::ObjectPtr< SubGeometry_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SubGeometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SubGeometry",32,80,ea,16); }

		 ::openfl::_Vector::FloatVector _uvs;
		 ::openfl::_Vector::FloatVector _secondaryUvs;
		 ::openfl::_Vector::FloatVector _vertexNormals;
		 ::openfl::_Vector::FloatVector _vertexTangents;
		 ::openfl::_Vector::BoolVector _verticesInvalid;
		 ::openfl::_Vector::BoolVector _uvsInvalid;
		 ::openfl::_Vector::BoolVector _secondaryUvsInvalid;
		 ::openfl::_Vector::BoolVector _normalsInvalid;
		 ::openfl::_Vector::BoolVector _tangentsInvalid;
		 ::openfl::_Vector::ObjectVector _vertexBuffer;
		 ::openfl::_Vector::ObjectVector _uvBuffer;
		 ::openfl::_Vector::ObjectVector _secondaryUvBuffer;
		 ::openfl::_Vector::ObjectVector _vertexNormalBuffer;
		 ::openfl::_Vector::ObjectVector _vertexTangentBuffer;
		 ::openfl::_Vector::ObjectVector _vertexBufferContext;
		 ::openfl::_Vector::ObjectVector _uvBufferContext;
		 ::openfl::_Vector::ObjectVector _secondaryUvBufferContext;
		 ::openfl::_Vector::ObjectVector _vertexNormalBufferContext;
		 ::openfl::_Vector::ObjectVector _vertexTangentBufferContext;
		int _numVertices;
		int get_numVertices();
		::Dynamic get_numVertices_dyn();

		void activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexBuffer_dyn();

		void activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateUVBuffer_dyn();

		void activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateSecondaryUVBuffer_dyn();

		void activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexNormalBuffer_dyn();

		void activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexTangentBuffer_dyn();

		void applyTransformation( ::openfl::geom::Matrix3D transform);

		::Dynamic clone();
		::Dynamic clone_dyn();

		void scale(Float scale);

		void scaleUV(::hx::Null< Float >  scaleU,::hx::Null< Float >  scaleV);

		void dispose();

		void disposeAllVertexBuffers();
		::Dynamic disposeAllVertexBuffers_dyn();

		 ::openfl::_Vector::FloatVector get_vertexData();

		 ::openfl::_Vector::FloatVector get_vertexPositionData();

		void updateVertexData( ::openfl::_Vector::FloatVector vertices);
		::Dynamic updateVertexData_dyn();

		 ::openfl::_Vector::FloatVector get_UVData();

		 ::openfl::_Vector::FloatVector get_secondaryUVData();
		::Dynamic get_secondaryUVData_dyn();

		void updateUVData( ::openfl::_Vector::FloatVector uvs);
		::Dynamic updateUVData_dyn();

		void updateSecondaryUVData( ::openfl::_Vector::FloatVector uvs);
		::Dynamic updateSecondaryUVData_dyn();

		 ::openfl::_Vector::FloatVector get_vertexNormalData();

		void updateVertexNormalData( ::openfl::_Vector::FloatVector vertexNormals);
		::Dynamic updateVertexNormalData_dyn();

		 ::openfl::_Vector::FloatVector get_vertexTangentData();

		void updateVertexTangentData( ::openfl::_Vector::FloatVector vertexTangents);
		::Dynamic updateVertexTangentData_dyn();

		void fromVectors( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents);
		::Dynamic fromVectors_dyn();

		 ::openfl::_Vector::FloatVector updateVertexNormals( ::openfl::_Vector::FloatVector target);

		 ::openfl::_Vector::FloatVector updateVertexTangents( ::openfl::_Vector::FloatVector target);

		 ::openfl::_Vector::FloatVector updateDummyUVs( ::openfl::_Vector::FloatVector target);

		void disposeForStage3D( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic disposeForStage3D_dyn();

		int get_vertexStride();

		int get_vertexTangentStride();

		int get_vertexNormalStride();

		int get_UVStride();

		int get_secondaryUVStride();
		::Dynamic get_secondaryUVStride_dyn();

		int get_vertexOffset();

		int get_vertexNormalOffset();

		int get_vertexTangentOffset();

		int get_UVOffset();

		int get_secondaryUVOffset();
		::Dynamic get_secondaryUVOffset_dyn();

		 ::away3d::core::base::SubGeometry cloneWithSeperateBuffers();
		::Dynamic cloneWithSeperateBuffers_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_SubGeometry */ 
