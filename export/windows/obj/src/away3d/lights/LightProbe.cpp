#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_bounds_NullBounds
#include <away3d/bounds/NullBounds.h>
#endif
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
#ifndef INCLUDED_away3d_core_partition_EntityNode
#include <away3d/core/partition/EntityNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_LightProbeNode
#include <away3d/core/partition/LightProbeNode.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ae323733e2e8c77c_25_new,"away3d.lights.LightProbe","new",0x0eef530e,"away3d.lights.LightProbe.new","away3d/lights/LightProbe.hx",25,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_33_createEntityPartitionNode,"away3d.lights.LightProbe","createEntityPartitionNode",0x0c2b2b7b,"away3d.lights.LightProbe.createEntityPartitionNode","away3d/lights/LightProbe.hx",33,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_38_get_diffuseMap,"away3d.lights.LightProbe","get_diffuseMap",0xac96b2b5,"away3d.lights.LightProbe.get_diffuseMap","away3d/lights/LightProbe.hx",38,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_42_set_diffuseMap,"away3d.lights.LightProbe","set_diffuseMap",0xccb69b29,"away3d.lights.LightProbe.set_diffuseMap","away3d/lights/LightProbe.hx",42,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_49_get_specularMap,"away3d.lights.LightProbe","get_specularMap",0xa61a4ede,"away3d.lights.LightProbe.get_specularMap","away3d/lights/LightProbe.hx",49,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_53_set_specularMap,"away3d.lights.LightProbe","set_specularMap",0xa1e5cbea,"away3d.lights.LightProbe.set_specularMap","away3d/lights/LightProbe.hx",53,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_64_updateBounds,"away3d.lights.LightProbe","updateBounds",0xaf62e4f0,"away3d.lights.LightProbe.updateBounds","away3d/lights/LightProbe.hx",64,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_73_getDefaultBoundingVolume,"away3d.lights.LightProbe","getDefaultBoundingVolume",0x929cc31b,"away3d.lights.LightProbe.getDefaultBoundingVolume","away3d/lights/LightProbe.hx",73,0x5f2d0202)
HX_LOCAL_STACK_FRAME(_hx_pos_ae323733e2e8c77c_83_getObjectProjectionMatrix,"away3d.lights.LightProbe","getObjectProjectionMatrix",0x8db3db73,"away3d.lights.LightProbe.getObjectProjectionMatrix","away3d/lights/LightProbe.hx",83,0x5f2d0202)
namespace away3d{
namespace lights{

void LightProbe_obj::__construct( ::away3d::textures::CubeTextureBase diffuseMap, ::away3d::textures::CubeTextureBase specularMap){
            	HX_STACKFRAME(&_hx_pos_ae323733e2e8c77c_25_new)
HXLINE(  26)		super::__construct();
HXLINE(  27)		this->_diffuseMap = diffuseMap;
HXLINE(  28)		this->_specularMap = specularMap;
            	}

Dynamic LightProbe_obj::__CreateEmpty() { return new LightProbe_obj; }

void *LightProbe_obj::_hx_vtable = 0;

Dynamic LightProbe_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightProbe_obj > _hx_result = new LightProbe_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LightProbe_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e01c5a7) {
		if (inClassId<=(int)0x12b32fa7) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x12b32fa7;
			}
		} else {
			return inClassId==(int)0x13fff02b || inClassId==(int)0x1e01c5a7;
		}
	} else {
		if (inClassId<=(int)0x37f46043) {
			return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x37f46043;
		} else {
			return inClassId==(int)0x3e60e0da;
		}
	}
}

 ::away3d::core::partition::EntityNode LightProbe_obj::createEntityPartitionNode(){
            	HX_GC_STACKFRAME(&_hx_pos_ae323733e2e8c77c_33_createEntityPartitionNode)
HXDLIN(  33)		return  ::away3d::core::partition::LightProbeNode_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


 ::away3d::textures::CubeTextureBase LightProbe_obj::get_diffuseMap(){
            	HX_STACKFRAME(&_hx_pos_ae323733e2e8c77c_38_get_diffuseMap)
HXDLIN(  38)		return this->_diffuseMap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightProbe_obj,get_diffuseMap,return )

 ::away3d::textures::CubeTextureBase LightProbe_obj::set_diffuseMap( ::away3d::textures::CubeTextureBase value){
            	HX_STACKFRAME(&_hx_pos_ae323733e2e8c77c_42_set_diffuseMap)
HXLINE(  43)		this->_diffuseMap = value;
HXLINE(  44)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightProbe_obj,set_diffuseMap,return )

 ::away3d::textures::CubeTextureBase LightProbe_obj::get_specularMap(){
            	HX_STACKFRAME(&_hx_pos_ae323733e2e8c77c_49_get_specularMap)
HXDLIN(  49)		return this->_specularMap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightProbe_obj,get_specularMap,return )

 ::away3d::textures::CubeTextureBase LightProbe_obj::set_specularMap( ::away3d::textures::CubeTextureBase value){
            	HX_STACKFRAME(&_hx_pos_ae323733e2e8c77c_53_set_specularMap)
HXLINE(  54)		this->_specularMap = value;
HXLINE(  55)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightProbe_obj,set_specularMap,return )

void LightProbe_obj::updateBounds(){
            	HX_STACKFRAME(&_hx_pos_ae323733e2e8c77c_64_updateBounds)
HXDLIN(  64)		this->_boundsInvalid = false;
            	}


 ::away3d::bounds::BoundingVolumeBase LightProbe_obj::getDefaultBoundingVolume(){
            	HX_GC_STACKFRAME(&_hx_pos_ae323733e2e8c77c_73_getDefaultBoundingVolume)
HXDLIN(  73)		return  ::away3d::bounds::NullBounds_obj::__alloc( HX_CTX ,null(),null());
            	}


 ::openfl::geom::Matrix3D LightProbe_obj::getObjectProjectionMatrix(::Dynamic renderable, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D target){
            	HX_GC_STACKFRAME(&_hx_pos_ae323733e2e8c77c_83_getObjectProjectionMatrix)
HXDLIN(  83)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Object projection matrices are not supported for LightProbe objects!",5b,91,9f,e5),null()));
HXDLIN(  83)		return null();
            	}



::hx::ObjectPtr< LightProbe_obj > LightProbe_obj::__new( ::away3d::textures::CubeTextureBase diffuseMap, ::away3d::textures::CubeTextureBase specularMap) {
	::hx::ObjectPtr< LightProbe_obj > __this = new LightProbe_obj();
	__this->__construct(diffuseMap,specularMap);
	return __this;
}

::hx::ObjectPtr< LightProbe_obj > LightProbe_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::textures::CubeTextureBase diffuseMap, ::away3d::textures::CubeTextureBase specularMap) {
	LightProbe_obj *__this = (LightProbe_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightProbe_obj), true, "away3d.lights.LightProbe"));
	*(void **)__this = LightProbe_obj::_hx_vtable;
	__this->__construct(diffuseMap,specularMap);
	return __this;
}

LightProbe_obj::LightProbe_obj()
{
}

void LightProbe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightProbe);
	HX_MARK_MEMBER_NAME(_diffuseMap,"_diffuseMap");
	HX_MARK_MEMBER_NAME(_specularMap,"_specularMap");
	 ::away3d::lights::LightBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightProbe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_diffuseMap,"_diffuseMap");
	HX_VISIT_MEMBER_NAME(_specularMap,"_specularMap");
	 ::away3d::lights::LightBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LightProbe_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"diffuseMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_diffuseMap() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"specularMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_specularMap() ); }
		if (HX_FIELD_EQ(inName,"_diffuseMap") ) { return ::hx::Val( _diffuseMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_specularMap") ) { return ::hx::Val( _specularMap ); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_diffuseMap") ) { return ::hx::Val( get_diffuseMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_diffuseMap") ) { return ::hx::Val( set_diffuseMap_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_specularMap") ) { return ::hx::Val( get_specularMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_specularMap") ) { return ::hx::Val( set_specularMap_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultBoundingVolume") ) { return ::hx::Val( getDefaultBoundingVolume_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"createEntityPartitionNode") ) { return ::hx::Val( createEntityPartitionNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getObjectProjectionMatrix") ) { return ::hx::Val( getObjectProjectionMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LightProbe_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"diffuseMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_diffuseMap(inValue.Cast<  ::away3d::textures::CubeTextureBase >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"specularMap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_specularMap(inValue.Cast<  ::away3d::textures::CubeTextureBase >()) ); }
		if (HX_FIELD_EQ(inName,"_diffuseMap") ) { _diffuseMap=inValue.Cast<  ::away3d::textures::CubeTextureBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_specularMap") ) { _specularMap=inValue.Cast<  ::away3d::textures::CubeTextureBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightProbe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("diffuseMap",5a,ea,94,3f));
	outFields->push(HX_("specularMap",99,c7,8c,b1));
	outFields->push(HX_("_diffuseMap",79,b7,1e,12));
	outFields->push(HX_("_specularMap",9a,75,96,17));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightProbe_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::textures::CubeTextureBase */ ,(int)offsetof(LightProbe_obj,_diffuseMap),HX_("_diffuseMap",79,b7,1e,12)},
	{::hx::fsObject /*  ::away3d::textures::CubeTextureBase */ ,(int)offsetof(LightProbe_obj,_specularMap),HX_("_specularMap",9a,75,96,17)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LightProbe_obj_sStaticStorageInfo = 0;
#endif

static ::String LightProbe_obj_sMemberFields[] = {
	HX_("_diffuseMap",79,b7,1e,12),
	HX_("_specularMap",9a,75,96,17),
	HX_("createEntityPartitionNode",4d,b6,d9,04),
	HX_("get_diffuseMap",a3,72,8a,b5),
	HX_("set_diffuseMap",17,5b,aa,d5),
	HX_("get_specularMap",30,7f,6e,72),
	HX_("set_specularMap",3c,fc,39,6e),
	HX_("updateBounds",5e,2d,e1,65),
	HX_("getDefaultBoundingVolume",89,f8,1c,2a),
	HX_("getObjectProjectionMatrix",45,66,62,86),
	::String(null()) };

::hx::Class LightProbe_obj::__mClass;

void LightProbe_obj::__register()
{
	LightProbe_obj _hx_dummy;
	LightProbe_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.lights.LightProbe",1c,74,31,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightProbe_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightProbe_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightProbe_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightProbe_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace lights
