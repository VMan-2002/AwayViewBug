#ifndef INCLUDED_away3d_animators_IAnimator
#define INCLUDED_away3d_animators_IAnimator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,animators,states,IAnimationState)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace animators{


class HXCPP_CLASS_ATTRIBUTES IAnimator_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_get_animationSet)(); 
		static inline ::Dynamic get_animationSet( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_get_animationSet)();
		}
		void (::hx::Object :: *_hx_setRenderState)( ::away3d::core::managers::Stage3DProxy stage3DProxy,::Dynamic renderable,int vertexConstantOffset,int vertexStreamOffset, ::away3d::cameras::Camera3D camera); 
		static inline void setRenderState( ::Dynamic _hx_, ::away3d::core::managers::Stage3DProxy stage3DProxy,::Dynamic renderable,int vertexConstantOffset,int vertexStreamOffset, ::away3d::cameras::Camera3D camera) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_setRenderState)(stage3DProxy,renderable,vertexConstantOffset,vertexStreamOffset,camera);
		}
		void (::hx::Object :: *_hx_testGPUCompatibility)( ::away3d::materials::passes::MaterialPassBase pass); 
		static inline void testGPUCompatibility( ::Dynamic _hx_, ::away3d::materials::passes::MaterialPassBase pass) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_testGPUCompatibility)(pass);
		}
		void (::hx::Object :: *_hx_addOwner)( ::away3d::entities::Mesh mesh); 
		static inline void addOwner( ::Dynamic _hx_, ::away3d::entities::Mesh mesh) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_addOwner)(mesh);
		}
		void (::hx::Object :: *_hx_removeOwner)( ::away3d::entities::Mesh mesh); 
		static inline void removeOwner( ::Dynamic _hx_, ::away3d::entities::Mesh mesh) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_removeOwner)(mesh);
		}
		::Dynamic (::hx::Object :: *_hx_getAnimationState)( ::away3d::animators::nodes::AnimationNodeBase node); 
		static inline ::Dynamic getAnimationState( ::Dynamic _hx_, ::away3d::animators::nodes::AnimationNodeBase node) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_getAnimationState)(node);
		}
		::Dynamic (::hx::Object :: *_hx_getAnimationStateByName)(::String name); 
		static inline ::Dynamic getAnimationStateByName( ::Dynamic _hx_,::String name) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_getAnimationStateByName)(name);
		}
		::Dynamic (::hx::Object :: *_hx_clone)(); 
		static inline ::Dynamic clone( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_clone)();
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimator_obj *>(_hx_.mPtr->_hx_getInterface(0xceac2823)))->_hx_dispose)();
		}
};

} // end namespace away3d
} // end namespace animators

#endif /* INCLUDED_away3d_animators_IAnimator */ 
