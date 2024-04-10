#ifndef INCLUDED_away3d_animators_states_IAnimationState
#define INCLUDED_away3d_animators_states_IAnimationState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,animators,states,IAnimationState)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace animators{
namespace states{


class HXCPP_CLASS_ATTRIBUTES IAnimationState_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::openfl::geom::Vector3D (::hx::Object :: *_hx_get_positionDelta)(); 
		static inline  ::openfl::geom::Vector3D get_positionDelta( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::states::IAnimationState_obj *>(_hx_.mPtr->_hx_getInterface(0x7435b6e7)))->_hx_get_positionDelta)();
		}
		void (::hx::Object :: *_hx_offset)(int startTime); 
		static inline void offset( ::Dynamic _hx_,int startTime) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::states::IAnimationState_obj *>(_hx_.mPtr->_hx_getInterface(0x7435b6e7)))->_hx_offset)(startTime);
		}
		void (::hx::Object :: *_hx_update)(int time); 
		static inline void update( ::Dynamic _hx_,int time) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::states::IAnimationState_obj *>(_hx_.mPtr->_hx_getInterface(0x7435b6e7)))->_hx_update)(time);
		}
		void (::hx::Object :: *_hx_phase)(Float value); 
		static inline void phase( ::Dynamic _hx_,Float value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::states::IAnimationState_obj *>(_hx_.mPtr->_hx_getInterface(0x7435b6e7)))->_hx_phase)(value);
		}
};

} // end namespace away3d
} // end namespace animators
} // end namespace states

#endif /* INCLUDED_away3d_animators_states_IAnimationState */ 
