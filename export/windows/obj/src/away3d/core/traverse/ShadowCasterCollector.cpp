#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#include <away3d/core/data/RenderableListItemPool.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_ShadowCasterCollector
#include <away3d/core/traverse/ShadowCasterCollector.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aaa2b6938ecb4f09_28_new,"away3d.core.traverse.ShadowCasterCollector","new",0xcba55657,"away3d.core.traverse.ShadowCasterCollector.new","away3d/core/traverse/ShadowCasterCollector.hx",28,0x537f339a)
HX_LOCAL_STACK_FRAME(_hx_pos_aaa2b6938ecb4f09_36_applyRenderable,"away3d.core.traverse.ShadowCasterCollector","applyRenderable",0x014e3775,"away3d.core.traverse.ShadowCasterCollector.applyRenderable","away3d/core/traverse/ShadowCasterCollector.hx",36,0x537f339a)
HX_LOCAL_STACK_FRAME(_hx_pos_aaa2b6938ecb4f09_57_applyUnknownLight,"away3d.core.traverse.ShadowCasterCollector","applyUnknownLight",0x763e6fb1,"away3d.core.traverse.ShadowCasterCollector.applyUnknownLight","away3d/core/traverse/ShadowCasterCollector.hx",57,0x537f339a)
HX_LOCAL_STACK_FRAME(_hx_pos_aaa2b6938ecb4f09_61_applyDirectionalLight,"away3d.core.traverse.ShadowCasterCollector","applyDirectionalLight",0x06fad8d1,"away3d.core.traverse.ShadowCasterCollector.applyDirectionalLight","away3d/core/traverse/ShadowCasterCollector.hx",61,0x537f339a)
HX_LOCAL_STACK_FRAME(_hx_pos_aaa2b6938ecb4f09_65_applyPointLight,"away3d.core.traverse.ShadowCasterCollector","applyPointLight",0x636fa5eb,"away3d.core.traverse.ShadowCasterCollector.applyPointLight","away3d/core/traverse/ShadowCasterCollector.hx",65,0x537f339a)
HX_LOCAL_STACK_FRAME(_hx_pos_aaa2b6938ecb4f09_69_applyLightProbe,"away3d.core.traverse.ShadowCasterCollector","applyLightProbe",0x584aedff,"away3d.core.traverse.ShadowCasterCollector.applyLightProbe","away3d/core/traverse/ShadowCasterCollector.hx",69,0x537f339a)
HX_LOCAL_STACK_FRAME(_hx_pos_aaa2b6938ecb4f09_73_applySkyBox,"away3d.core.traverse.ShadowCasterCollector","applySkyBox",0x19dd6caf,"away3d.core.traverse.ShadowCasterCollector.applySkyBox","away3d/core/traverse/ShadowCasterCollector.hx",73,0x537f339a)
namespace away3d{
namespace core{
namespace traverse{

void ShadowCasterCollector_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aaa2b6938ecb4f09_28_new)
HXDLIN(  28)		super::__construct();
            	}

Dynamic ShadowCasterCollector_obj::__CreateEmpty() { return new ShadowCasterCollector_obj; }

void *ShadowCasterCollector_obj::_hx_vtable = 0;

Dynamic ShadowCasterCollector_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShadowCasterCollector_obj > _hx_result = new ShadowCasterCollector_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShadowCasterCollector_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5b803811) {
		if (inClassId<=(int)0x23f97a4a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23f97a4a;
		} else {
			return inClassId==(int)0x5b803811;
		}
	} else {
		return inClassId==(int)0x6a4dd616;
	}
}

void ShadowCasterCollector_obj::applyRenderable(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_aaa2b6938ecb4f09_36_applyRenderable)
HXLINE(  38)		 ::away3d::materials::MaterialBase material = ::away3d::core::base::IMaterialOwner_obj::get_material(renderable);
HXLINE(  39)		 ::away3d::entities::Entity entity = ::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable);
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (::away3d::core::base::IRenderable_obj::get_castsShadows(renderable)) {
HXLINE(  40)			_hx_tmp = ::hx::IsNotNull( material );
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			 ::away3d::core::data::RenderableListItem item = this->_renderableListItemPool->getItem();
HXLINE(  42)			item->renderable = renderable;
HXLINE(  43)			item->next = this->_opaqueRenderableHead;
HXLINE(  44)			item->cascaded = false;
HXLINE(  45)			 ::openfl::geom::Vector3D entityScenePos = entity->get_scenePosition();
HXLINE(  46)			Float dx = (this->_entryPoint->x - entityScenePos->x);
HXLINE(  47)			Float dy = (this->_entryPoint->y - entityScenePos->y);
HXLINE(  48)			Float dz = (this->_entryPoint->z - entityScenePos->z);
HXLINE(  49)			item->zIndex = (((dx * this->_cameraForward->x) + (dy * this->_cameraForward->y)) + (dz * this->_cameraForward->z));
HXLINE(  50)			item->renderSceneTransform = ::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,this->_camera);
HXLINE(  51)			item->renderOrderId = material->_depthPassId;
HXLINE(  52)			this->_opaqueRenderableHead = item;
            		}
            	}


void ShadowCasterCollector_obj::applyUnknownLight( ::away3d::lights::LightBase light){
            	HX_STACKFRAME(&_hx_pos_aaa2b6938ecb4f09_57_applyUnknownLight)
            	}


void ShadowCasterCollector_obj::applyDirectionalLight( ::away3d::lights::DirectionalLight light){
            	HX_STACKFRAME(&_hx_pos_aaa2b6938ecb4f09_61_applyDirectionalLight)
            	}


void ShadowCasterCollector_obj::applyPointLight( ::away3d::lights::PointLight light){
            	HX_STACKFRAME(&_hx_pos_aaa2b6938ecb4f09_65_applyPointLight)
            	}


void ShadowCasterCollector_obj::applyLightProbe( ::away3d::lights::LightProbe light){
            	HX_STACKFRAME(&_hx_pos_aaa2b6938ecb4f09_69_applyLightProbe)
            	}


void ShadowCasterCollector_obj::applySkyBox(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_aaa2b6938ecb4f09_73_applySkyBox)
            	}



::hx::ObjectPtr< ShadowCasterCollector_obj > ShadowCasterCollector_obj::__new() {
	::hx::ObjectPtr< ShadowCasterCollector_obj > __this = new ShadowCasterCollector_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShadowCasterCollector_obj > ShadowCasterCollector_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShadowCasterCollector_obj *__this = (ShadowCasterCollector_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShadowCasterCollector_obj), true, "away3d.core.traverse.ShadowCasterCollector"));
	*(void **)__this = ShadowCasterCollector_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShadowCasterCollector_obj::ShadowCasterCollector_obj()
{
}

::hx::Val ShadowCasterCollector_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"applySkyBox") ) { return ::hx::Val( applySkyBox_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyRenderable") ) { return ::hx::Val( applyRenderable_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPointLight") ) { return ::hx::Val( applyPointLight_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyLightProbe") ) { return ::hx::Val( applyLightProbe_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyUnknownLight") ) { return ::hx::Val( applyUnknownLight_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"applyDirectionalLight") ) { return ::hx::Val( applyDirectionalLight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShadowCasterCollector_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShadowCasterCollector_obj_sStaticStorageInfo = 0;
#endif

static ::String ShadowCasterCollector_obj_sMemberFields[] = {
	HX_("applyRenderable",fe,1a,90,b2),
	HX_("applyUnknownLight",7a,07,67,66),
	HX_("applyDirectionalLight",1a,89,45,68),
	HX_("applyPointLight",74,89,b1,14),
	HX_("applyLightProbe",88,d1,8c,09),
	HX_("applySkyBox",b8,97,12,23),
	::String(null()) };

::hx::Class ShadowCasterCollector_obj::__mClass;

void ShadowCasterCollector_obj::__register()
{
	ShadowCasterCollector_obj _hx_dummy;
	ShadowCasterCollector_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.traverse.ShadowCasterCollector",e5,de,df,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShadowCasterCollector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShadowCasterCollector_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShadowCasterCollector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShadowCasterCollector_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace traverse
