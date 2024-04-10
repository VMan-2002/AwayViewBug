#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#define INCLUDED_away3d_core_base_CompactSubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES CompactSubGeometry_obj : public  ::away3d::core::base::SubGeometryBase_obj
{
	public:
		typedef  ::away3d::core::base::SubGeometryBase_obj super;
		typedef CompactSubGeometry_obj OBJ_;
		CompactSubGeometry_obj();

	public:
		enum { _hx_ClassId = 0x294d62fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.base.CompactSubGeometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.base.CompactSubGeometry"); }
		static ::hx::ObjectPtr< CompactSubGeometry_obj > __new();
		static ::hx::ObjectPtr< CompactSubGeometry_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompactSubGeometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("CompactSubGeometry",8f,45,3c,34); }

		 ::openfl::_Vector::BoolVector _vertexDataInvalid;
		 ::openfl::_Vector::ObjectVector _vertexBuffer;
		 ::openfl::_Vector::ObjectVector _bufferContext;
		int _numVertices;
		int _contextIndex;
		 ::openfl::display3D::VertexBuffer3D _activeBuffer;
		 ::openfl::display3D::Context3D _activeContext;
		bool _activeDataInvalid;
		 ::openfl::_Vector::FloatVector _isolatedVertexPositionData;
		bool _isolatedVertexPositionDataDirty;
		int get_numVertices();
		::Dynamic get_numVertices_dyn();

		void updateData( ::openfl::_Vector::FloatVector data);
		::Dynamic updateData_dyn();

		void activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexBuffer_dyn();

		void activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateUVBuffer_dyn();

		void activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateSecondaryUVBuffer_dyn();

		virtual void uploadData(int contextIndex);
		::Dynamic uploadData_dyn();

		void activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexNormalBuffer_dyn();

		void activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexTangentBuffer_dyn();

		void createBuffer(int contextIndex, ::openfl::display3D::Context3D context, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic createBuffer_dyn();

		void updateActiveBuffer(int contextIndex);
		::Dynamic updateActiveBuffer_dyn();

		 ::openfl::_Vector::FloatVector get_vertexData();

		 ::openfl::_Vector::FloatVector updateVertexNormals( ::openfl::_Vector::FloatVector target);

		 ::openfl::_Vector::FloatVector updateVertexTangents( ::openfl::_Vector::FloatVector target);

		 ::openfl::_Vector::FloatVector get_vertexNormalData();

		 ::openfl::_Vector::FloatVector get_vertexTangentData();

		 ::openfl::_Vector::FloatVector get_UVData();

		void applyTransformation( ::openfl::geom::Matrix3D transform);

		void scale(Float scale);

		virtual ::Dynamic clone();
		::Dynamic clone_dyn();

		void scaleUV(::hx::Null< Float >  scaleU,::hx::Null< Float >  scaleV);

		int get_vertexStride();

		int get_vertexNormalStride();

		int get_vertexTangentStride();

		int get_UVStride();

		int get_secondaryUVStride();
		::Dynamic get_secondaryUVStride_dyn();

		int get_vertexOffset();

		int get_vertexNormalOffset();

		int get_vertexTangentOffset();

		int get_UVOffset();

		int get_secondaryUVOffset();
		::Dynamic get_secondaryUVOffset_dyn();

		virtual void dispose();

		void disposeVertexBuffers( ::openfl::_Vector::ObjectVector buffers);

		void invalidateBuffers( ::openfl::_Vector::BoolVector invalid);

		 ::away3d::core::base::SubGeometry cloneWithSeperateBuffers();
		::Dynamic cloneWithSeperateBuffers_dyn();

		 ::openfl::_Vector::FloatVector get_vertexPositionData();

		 ::openfl::_Vector::FloatVector stripBuffer(int offset,int numEntries);
		::Dynamic stripBuffer_dyn();

		void fromVectors( ::openfl::_Vector::FloatVector verts, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents);
		::Dynamic fromVectors_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_CompactSubGeometry */ 
