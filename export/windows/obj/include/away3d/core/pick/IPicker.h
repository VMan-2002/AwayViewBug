#ifndef INCLUDED_away3d_core_pick_IPicker
#define INCLUDED_away3d_core_pick_IPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES IPicker_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_onlyMouseEnabled)(); 
		static inline bool get_onlyMouseEnabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::pick::IPicker_obj *>(_hx_.mPtr->_hx_getInterface(0xe9ec8ad8)))->_hx_get_onlyMouseEnabled)();
		}
		bool (::hx::Object :: *_hx_set_onlyMouseEnabled)(bool value); 
		static inline bool set_onlyMouseEnabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::pick::IPicker_obj *>(_hx_.mPtr->_hx_getInterface(0xe9ec8ad8)))->_hx_set_onlyMouseEnabled)(value);
		}
		 ::away3d::core::pick::PickingCollisionVO (::hx::Object :: *_hx_getViewCollision)(Float x,Float y, ::away3d::containers::View3D view); 
		static inline  ::away3d::core::pick::PickingCollisionVO getViewCollision( ::Dynamic _hx_,Float x,Float y, ::away3d::containers::View3D view) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::pick::IPicker_obj *>(_hx_.mPtr->_hx_getInterface(0xe9ec8ad8)))->_hx_getViewCollision)(x,y,view);
		}
		 ::away3d::core::pick::PickingCollisionVO (::hx::Object :: *_hx_getSceneCollision)( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::away3d::containers::Scene3D scene); 
		static inline  ::away3d::core::pick::PickingCollisionVO getSceneCollision( ::Dynamic _hx_, ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::away3d::containers::Scene3D scene) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::pick::IPicker_obj *>(_hx_.mPtr->_hx_getInterface(0xe9ec8ad8)))->_hx_getSceneCollision)(position,direction,scene);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::pick::IPicker_obj *>(_hx_.mPtr->_hx_getInterface(0xe9ec8ad8)))->_hx_dispose)();
		}
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_IPicker */ 
