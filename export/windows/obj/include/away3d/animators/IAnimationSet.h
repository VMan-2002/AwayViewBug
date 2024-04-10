#ifndef INCLUDED_away3d_animators_IAnimationSet
#define INCLUDED_away3d_animators_IAnimationSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace animators{


class HXCPP_CLASS_ATTRIBUTES IAnimationSet_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_usesCPU)(); 
		static inline bool get_usesCPU( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_get_usesCPU)();
		}
		bool (::hx::Object :: *_hx_hasAnimation)(::String name); 
		static inline bool hasAnimation( ::Dynamic _hx_,::String name) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_hasAnimation)(name);
		}
		 ::away3d::animators::nodes::AnimationNodeBase (::hx::Object :: *_hx_getAnimation)(::String name); 
		static inline  ::away3d::animators::nodes::AnimationNodeBase getAnimation( ::Dynamic _hx_,::String name) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_getAnimation)(name);
		}
		void (::hx::Object :: *_hx_resetGPUCompatibility)(); 
		static inline void resetGPUCompatibility( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_resetGPUCompatibility)();
		}
		void (::hx::Object :: *_hx_cancelGPUCompatibility)(); 
		static inline void cancelGPUCompatibility( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_cancelGPUCompatibility)();
		}
		::String (::hx::Object :: *_hx_getAGALVertexCode)( ::away3d::materials::passes::MaterialPassBase pass, ::openfl::_Vector::ObjectVector sourceRegisters, ::openfl::_Vector::ObjectVector targetRegisters,::String profile); 
		static inline ::String getAGALVertexCode( ::Dynamic _hx_, ::away3d::materials::passes::MaterialPassBase pass, ::openfl::_Vector::ObjectVector sourceRegisters, ::openfl::_Vector::ObjectVector targetRegisters,::String profile) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_getAGALVertexCode)(pass,sourceRegisters,targetRegisters,profile);
		}
		::String (::hx::Object :: *_hx_getAGALFragmentCode)( ::away3d::materials::passes::MaterialPassBase pass,::String shadedTarget,::String profile); 
		static inline ::String getAGALFragmentCode( ::Dynamic _hx_, ::away3d::materials::passes::MaterialPassBase pass,::String shadedTarget,::String profile) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_getAGALFragmentCode)(pass,shadedTarget,profile);
		}
		::String (::hx::Object :: *_hx_getAGALUVCode)( ::away3d::materials::passes::MaterialPassBase pass,::String UVSource,::String UVTarget); 
		static inline ::String getAGALUVCode( ::Dynamic _hx_, ::away3d::materials::passes::MaterialPassBase pass,::String UVSource,::String UVTarget) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_getAGALUVCode)(pass,UVSource,UVTarget);
		}
		void (::hx::Object :: *_hx_doneAGALCode)( ::away3d::materials::passes::MaterialPassBase pass); 
		static inline void doneAGALCode( ::Dynamic _hx_, ::away3d::materials::passes::MaterialPassBase pass) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_doneAGALCode)(pass);
		}
		void (::hx::Object :: *_hx_activate)( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::materials::passes::MaterialPassBase pass); 
		static inline void activate( ::Dynamic _hx_, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::materials::passes::MaterialPassBase pass) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_activate)(stage3DProxy,pass);
		}
		void (::hx::Object :: *_hx_deactivate)( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::materials::passes::MaterialPassBase pass); 
		static inline void deactivate( ::Dynamic _hx_, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::materials::passes::MaterialPassBase pass) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::animators::IAnimationSet_obj *>(_hx_.mPtr->_hx_getInterface(0xeb8359ba)))->_hx_deactivate)(stage3DProxy,pass);
		}
};

} // end namespace away3d
} // end namespace animators

#endif /* INCLUDED_away3d_animators_IAnimationSet */ 
