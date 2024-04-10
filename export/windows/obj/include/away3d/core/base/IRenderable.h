#ifndef INCLUDED_away3d_core_base_IRenderable
#define INCLUDED_away3d_core_base_IRenderable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES IRenderable_obj {
	public:
		typedef  ::away3d::core::base::IMaterialOwner_obj super;
		HX_DO_INTERFACE_RTTI;

		 ::away3d::materials::MaterialBase (::hx::Object :: *_hx_get_material)(); 
		static inline  ::away3d::materials::MaterialBase get_material( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_material)();
		}
		 ::away3d::materials::MaterialBase (::hx::Object :: *_hx_set_material)( ::away3d::materials::MaterialBase value); 
		static inline  ::away3d::materials::MaterialBase set_material( ::Dynamic _hx_, ::away3d::materials::MaterialBase value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_set_material)(value);
		}
		::Dynamic (::hx::Object :: *_hx_get_animator)(); 
		static inline ::Dynamic get_animator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_animator)();
		}
		 ::openfl::geom::Matrix3D (::hx::Object :: *_hx_get_sceneTransform)(); 
		static inline  ::openfl::geom::Matrix3D get_sceneTransform( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_sceneTransform)();
		}
		 ::openfl::geom::Matrix3D (::hx::Object :: *_hx_get_inverseSceneTransform)(); 
		static inline  ::openfl::geom::Matrix3D get_inverseSceneTransform( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_inverseSceneTransform)();
		}
		bool (::hx::Object :: *_hx_get_mouseEnabled)(); 
		static inline bool get_mouseEnabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_mouseEnabled)();
		}
		 ::away3d::entities::Entity (::hx::Object :: *_hx_get_sourceEntity)(); 
		static inline  ::away3d::entities::Entity get_sourceEntity( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_sourceEntity)();
		}
		bool (::hx::Object :: *_hx_get_castsShadows)(); 
		static inline bool get_castsShadows( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_castsShadows)();
		}
		 ::openfl::geom::Matrix (::hx::Object :: *_hx_get_uvTransform)(); 
		static inline  ::openfl::geom::Matrix get_uvTransform( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_uvTransform)();
		}
		 ::openfl::geom::Matrix (::hx::Object :: *_hx_get_uvTransform2)(); 
		static inline  ::openfl::geom::Matrix get_uvTransform2( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_uvTransform2)();
		}
		bool (::hx::Object :: *_hx_get_shaderPickingDetails)(); 
		static inline bool get_shaderPickingDetails( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_shaderPickingDetails)();
		}
		int (::hx::Object :: *_hx_get_numVertices)(); 
		static inline int get_numVertices( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_numVertices)();
		}
		int (::hx::Object :: *_hx_get_numTriangles)(); 
		static inline int get_numTriangles( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_numTriangles)();
		}
		int (::hx::Object :: *_hx_get_vertexStride)(); 
		static inline int get_vertexStride( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_vertexStride)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_vertexData)(); 
		static inline  ::openfl::_Vector::FloatVector get_vertexData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_vertexData)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_vertexNormalData)(); 
		static inline  ::openfl::_Vector::FloatVector get_vertexNormalData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_vertexNormalData)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_vertexTangentData)(); 
		static inline  ::openfl::_Vector::FloatVector get_vertexTangentData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_vertexTangentData)();
		}
		 ::openfl::_Vector::IntVector (::hx::Object :: *_hx_get_indexData)(); 
		static inline  ::openfl::_Vector::IntVector get_indexData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_indexData)();
		}
		 ::openfl::_Vector::FloatVector (::hx::Object :: *_hx_get_UVData)(); 
		static inline  ::openfl::_Vector::FloatVector get_UVData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_get_UVData)();
		}
		 ::openfl::geom::Matrix3D (::hx::Object :: *_hx_getRenderSceneTransform)( ::away3d::cameras::Camera3D camera); 
		static inline  ::openfl::geom::Matrix3D getRenderSceneTransform( ::Dynamic _hx_, ::away3d::cameras::Camera3D camera) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_getRenderSceneTransform)(camera);
		}
		void (::hx::Object :: *_hx_activateVertexBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateVertexBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_activateVertexBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateUVBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateUVBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_activateUVBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateSecondaryUVBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateSecondaryUVBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_activateSecondaryUVBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateVertexNormalBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateVertexNormalBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_activateVertexNormalBuffer)(index,stage3DProxy);
		}
		void (::hx::Object :: *_hx_activateVertexTangentBuffer)(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline void activateVertexTangentBuffer( ::Dynamic _hx_,int index, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_activateVertexTangentBuffer)(index,stage3DProxy);
		}
		 ::openfl::display3D::IndexBuffer3D (::hx::Object :: *_hx_getIndexBuffer)( ::away3d::core::managers::Stage3DProxy stage3DProxy); 
		static inline  ::openfl::display3D::IndexBuffer3D getIndexBuffer( ::Dynamic _hx_, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::base::IRenderable_obj *>(_hx_.mPtr->_hx_getInterface(0x1ea67b0a)))->_hx_getIndexBuffer)(stage3DProxy);
		}
};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_IRenderable */ 
