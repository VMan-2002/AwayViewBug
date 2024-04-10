#ifndef INCLUDED_away3d_core_base_ISubGeometry
#define INCLUDED_away3d_core_base_ISubGeometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES ISubGeometry_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_get_numVertices)(); 
		static inline int get_numVertices( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_numVertices)();
		}
		int (::hx::Object :: *_hx_get_numTriangles)(); 
		static inline int get_numTriangles( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_numTriangles)();
		}
		int (::hx::Object :: *_hx_get_vertexStride)(); 
		static inline int get_vertexStride( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexStride)();
		}
		int (::hx::Object :: *_hx_get_vertexNormalStride)(); 
		static inline int get_vertexNormalStride( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexNormalStride)();
		}
		int (::hx::Object :: *_hx_get_vertexTangentStride)(); 
		static inline int get_vertexTangentStride( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexTangentStride)();
		}
		int (::hx::Object :: *_hx_get_UVStride)(); 
		static inline int get_UVStride( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_UVStride)();
		}
		int (::hx::Object :: *_hx_get_secondaryUVStride)(); 
		static inline int get_secondaryUVStride( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_secondaryUVStride)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_vertexData)(); 
		static inline  ::openfl::_Vector::FloatVector get_vertexData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexData)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_vertexNormalData)(); 
		static inline  ::openfl::_Vector::FloatVector get_vertexNormalData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexNormalData)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_vertexTangentData)(); 
		static inline  ::openfl::_Vector::FloatVector get_vertexTangentData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexTangentData)();
		}
		int (::hx::Object :: *_hx_get_vertexOffset)(); 
		static inline int get_vertexOffset( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexOffset)();
		}
		int (::hx::Object :: *_hx_get_vertexNormalOffset)(); 
		static inline int get_vertexNormalOffset( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexNormalOffset)();
		}
		int (::hx::Object :: *_hx_get_vertexTangentOffset)(); 
		static inline int get_vertexTangentOffset( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexTangentOffset)();
		}
		int (::hx::Object :: *_hx_get_UVOffset)(); 
		static inline int get_UVOffset( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_UVOffset)();
		}
		int (::hx::Object :: *_hx_get_secondaryUVOffset)(); 
		static inline int get_secondaryUVOffset( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_secondaryUVOffset)();
		}
		 ::openfl::_Vector::IntVector (::hx::Object :: *_hx_get_indexData)(); 
		static inline  ::openfl::_Vector::IntVector get_indexData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_indexData)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_UVData)(); 
		static inline  ::openfl::_Vector::FloatVector get_UVData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_UVData)();
		}
		Float (::hx::Object :: *_hx_get_scaleU)(); 
		static inline Float get_scaleU( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_scaleU)();
		}
		Float (::hx::Object :: *_hx_get_scaleV)(); 
		static inline Float get_scaleV( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_scaleV)();
		}
		 ::away3d::core::base::Geometry (::hx::Object :: *_hx_get_parentGeometry)(); 
		static inline  ::away3d::core::base::Geometry get_parentGeometry( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_parentGeometry)();
		}
		 ::away3d::core::base::Geometry (::hx::Object :: *_hx_set_parentGeometry)( ::away3d::core::base::Geometry value); 
		static inline  ::away3d::core::base::Geometry set_parentGeometry( ::Dynamic _hx_, ::away3d::core::base::Geometry value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_set_parentGeometry)(value);
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_faceNormals)(); 
		static inline  ::openfl::_Vector::FloatVector get_faceNormals( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_faceNormals)();
		}
		bool (::hx::Object :: *_hx_get_autoDeriveVertexNormals)(); 
		static inline bool get_autoDeriveVertexNormals( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_autoDeriveVertexNormals)();
		}
		bool (::hx::Object :: *_hx_set_autoDeriveVertexNormals)(bool value); 
		static inline bool set_autoDeriveVertexNormals( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_set_autoDeriveVertexNormals)(value);
		}
		bool (::hx::Object :: *_hx_get_autoDeriveVertexTangents)(); 
		static inline bool get_autoDeriveVertexTangents( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_autoDeriveVertexTangents)();
		}
		bool (::hx::Object :: *_hx_set_autoDeriveVertexTangents)(bool value); 
		static inline bool set_autoDeriveVertexTangents( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_set_autoDeriveVertexTangents)(value);
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_vertexPositionData)(); 
		static inline  ::openfl::_Vector::FloatVector get_vertexPositionData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_get_vertexPositionData)();
		}
		void (::hx::Object :: *_hx_activateVertexBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateVertexBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_activateVertexBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateUVBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateUVBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_activateUVBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateSecondaryUVBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateSecondaryUVBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_activateSecondaryUVBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateVertexNormalBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateVertexNormalBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_activateVertexNormalBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateVertexTangentBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateVertexTangentBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_activateVertexTangentBuffer)(index,stage3DProxy);
		}
		 ::openfl::display3D::IndexBuffer3D (::hx::Object :: *_hx_getIndexBuffer)( ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline  ::openfl::display3D::IndexBuffer3D getIndexBuffer( ::Dynamic _hx_, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_getIndexBuffer)(stage3DProxy);
		}
		void (::hx::Object :: *_hx_applyTransformation)( ::openfl::geom::Matrix3D transform); 
		static inline void applyTransformation( ::Dynamic _hx_, ::openfl::geom::Matrix3D transform) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_applyTransformation)(transform);
		}
		void (::hx::Object :: *_hx_scale)(Float scale); 
		static inline void scale( ::Dynamic _hx_,Float scale) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_scale)(scale);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_dispose)();
		}
		::Dynamic (::hx::Object :: *_hx_clone)(); 
		static inline ::Dynamic clone( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_clone)();
		}
		void (::hx::Object :: *_hx_scaleUV)(::hx::Null< Float >  scaleU,::hx::Null< Float >  scaleV); 
		static inline void scaleUV( ::Dynamic _hx_,::hx::Null< Float >  scaleU,::hx::Null< Float >  scaleV) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_scaleUV)(scaleU,scaleV);
		}
		 ::away3d::core::base::SubGeometry (::hx::Object :: *_hx_cloneWithSeperateBuffers)(); 
		static inline  ::away3d::core::base::SubGeometry cloneWithSeperateBuffers( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_cloneWithSeperateBuffers)();
		}
		void (::hx::Object :: *_hx_fromVectors)( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents); 
		static inline void fromVectors( ::Dynamic _hx_, ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::ISubGeometry_obj *>(_hx_.mPtr->_hx_getInterface(0x9241dff8)))->_hx_fromVectors)(vertices,uvs,normals,tangents);
		}
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_ISubGeometry */ 
