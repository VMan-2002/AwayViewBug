#ifndef INCLUDED_away3d_core_pick_IPickingCollider
#define INCLUDED_away3d_core_pick_IPickingCollider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,core,pick,IPickingCollider)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES IPickingCollider_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_setLocalRay)( ::openfl::geom::Vector3D localPosition, ::openfl::geom::Vector3D localDirection); 
		static inline void setLocalRay( ::Dynamic _hx_, ::openfl::geom::Vector3D localPosition, ::openfl::geom::Vector3D localDirection) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::pick::IPickingCollider_obj *>(_hx_.mPtr->_hx_getInterface(0x6100026b)))->_hx_setLocalRay)(localPosition,localDirection);
		}
		bool (::hx::Object :: *_hx_testSubMeshCollision)( ::away3d::core::base::SubMesh subMesh, ::away3d::core::pick::PickingCollisionVO pickingCollisionVO,Float shortestCollisionDistance); 
		static inline bool testSubMeshCollision( ::Dynamic _hx_, ::away3d::core::base::SubMesh subMesh, ::away3d::core::pick::PickingCollisionVO pickingCollisionVO,Float shortestCollisionDistance) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::away3d::core::pick::IPickingCollider_obj *>(_hx_.mPtr->_hx_getInterface(0x6100026b)))->_hx_testSubMeshCollision)(subMesh,pickingCollisionVO,shortestCollisionDistance);
		}
};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_IPickingCollider */ 
