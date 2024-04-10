#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
#endif
#ifndef INCLUDED_away3d_controllers_LookAtController
#include <away3d/controllers/LookAtController.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_Object3DEvent
#include <away3d/events/Object3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a58f2712d07978eb_16_new,"away3d.controllers.LookAtController","new",0x56f88d86,"away3d.controllers.LookAtController.new","away3d/controllers/LookAtController.hx",16,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_49_get_upAxis,"away3d.controllers.LookAtController","get_upAxis",0xa215bbff,"away3d.controllers.LookAtController.get_upAxis","away3d/controllers/LookAtController.hx",49,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_53_set_upAxis,"away3d.controllers.LookAtController","set_upAxis",0xa5935a73,"away3d.controllers.LookAtController.set_upAxis","away3d/controllers/LookAtController.hx",53,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_62_get_lookAtPosition,"away3d.controllers.LookAtController","get_lookAtPosition",0x487d325e,"away3d.controllers.LookAtController.get_lookAtPosition","away3d/controllers/LookAtController.hx",62,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_66_set_lookAtPosition,"away3d.controllers.LookAtController","set_lookAtPosition",0x252c64d2,"away3d.controllers.LookAtController.set_lookAtPosition","away3d/controllers/LookAtController.hx",66,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_83_get_lookAtObject,"away3d.controllers.LookAtController","get_lookAtObject",0x0382c934,"away3d.controllers.LookAtController.get_lookAtObject","away3d/controllers/LookAtController.hx",83,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_87_set_lookAtObject,"away3d.controllers.LookAtController","set_lookAtObject",0x59c4b6a8,"away3d.controllers.LookAtController.set_lookAtObject","away3d/controllers/LookAtController.hx",87,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_111_update,"away3d.controllers.LookAtController","update",0xf55304a3,"away3d.controllers.LookAtController.update","away3d/controllers/LookAtController.hx",111,0x4ccd4068)
HX_LOCAL_STACK_FRAME(_hx_pos_a58f2712d07978eb_138_onLookAtObjectChanged,"away3d.controllers.LookAtController","onLookAtObjectChanged",0x5013e82a,"away3d.controllers.LookAtController.onLookAtObjectChanged","away3d/controllers/LookAtController.hx",138,0x4ccd4068)
namespace away3d{
namespace controllers{

void LookAtController_obj::__construct( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject){
            	HX_GC_STACKFRAME(&_hx_pos_a58f2712d07978eb_16_new)
HXLINE(  33)		this->_pos =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  32)		this->_upAxis =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,0,1,0,null());
HXLINE(  31)		this->_origin =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,((Float)0.0),((Float)0.0),((Float)0.0),null());
HXLINE(  39)		super::__construct(targetObject);
HXLINE(  41)		if (::hx::IsNotNull( lookAtObject )) {
HXLINE(  42)			this->set_lookAtObject(lookAtObject);
            		}
            		else {
HXLINE(  44)			this->set_lookAtPosition( ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null()));
            		}
            	}

Dynamic LookAtController_obj::__CreateEmpty() { return new LookAtController_obj; }

void *LookAtController_obj::_hx_vtable = 0;

Dynamic LookAtController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LookAtController_obj > _hx_result = new LookAtController_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LookAtController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f727d22) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1f727d22;
	} else {
		return inClassId==(int)0x603e0965;
	}
}

 ::openfl::geom::Vector3D LookAtController_obj::get_upAxis(){
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_49_get_upAxis)
HXDLIN(  49)		return this->_upAxis;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LookAtController_obj,get_upAxis,return )

 ::openfl::geom::Vector3D LookAtController_obj::set_upAxis( ::openfl::geom::Vector3D upAxis){
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_53_set_upAxis)
HXLINE(  54)		this->_upAxis = upAxis;
HXLINE(  56)		this->notifyUpdate();
HXLINE(  57)		return upAxis;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LookAtController_obj,set_upAxis,return )

 ::openfl::geom::Vector3D LookAtController_obj::get_lookAtPosition(){
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_62_get_lookAtPosition)
HXDLIN(  62)		return this->_lookAtPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LookAtController_obj,get_lookAtPosition,return )

 ::openfl::geom::Vector3D LookAtController_obj::set_lookAtPosition( ::openfl::geom::Vector3D val){
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_66_set_lookAtPosition)
HXLINE(  67)		if (::hx::IsNotNull( this->_lookAtObject )) {
HXLINE(  68)			this->_lookAtObject->removeEventListener(HX_("scenetransformChanged",34,a2,78,f4),this->onLookAtObjectChanged_dyn(),null());
HXLINE(  69)			this->_lookAtObject = null();
            		}
HXLINE(  72)		this->_lookAtPosition = val;
HXLINE(  74)		this->notifyUpdate();
HXLINE(  75)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LookAtController_obj,set_lookAtPosition,return )

 ::away3d::containers::ObjectContainer3D LookAtController_obj::get_lookAtObject(){
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_83_get_lookAtObject)
HXDLIN(  83)		return this->_lookAtObject;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LookAtController_obj,get_lookAtObject,return )

 ::away3d::containers::ObjectContainer3D LookAtController_obj::set_lookAtObject( ::away3d::containers::ObjectContainer3D val){
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_87_set_lookAtObject)
HXLINE(  88)		if (::hx::IsNotNull( this->_lookAtPosition )) {
HXLINE(  89)			this->_lookAtPosition = null();
            		}
HXLINE(  91)		if (::hx::IsInstanceEq( this->_lookAtObject,val )) {
HXLINE(  92)			return val;
            		}
HXLINE(  94)		if (::hx::IsNotNull( this->_lookAtObject )) {
HXLINE(  95)			this->_lookAtObject->removeEventListener(HX_("scenetransformChanged",34,a2,78,f4),this->onLookAtObjectChanged_dyn(),null());
            		}
HXLINE(  97)		this->_lookAtObject = val;
HXLINE(  99)		if (::hx::IsNotNull( this->_lookAtObject )) {
HXLINE( 100)			this->_lookAtObject->addEventListener(HX_("scenetransformChanged",34,a2,78,f4),this->onLookAtObjectChanged_dyn(),null(),null(),null());
            		}
HXLINE( 102)		this->notifyUpdate();
HXLINE( 103)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LookAtController_obj,set_lookAtObject,return )

void LookAtController_obj::update(::hx::Null< bool >  __o_interpolate){
            		bool interpolate = __o_interpolate.Default(true);
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_111_update)
HXDLIN( 111)		if (::hx::IsNotNull( this->_targetObject )) {
HXLINE( 112)			if (::hx::IsNotNull( this->_lookAtPosition )) {
HXLINE( 113)				this->_targetObject->lookAt(this->_lookAtPosition,this->_upAxis);
            			}
            			else {
HXLINE( 114)				if (::hx::IsNotNull( this->_lookAtObject )) {
HXLINE( 115)					bool _hx_tmp;
HXDLIN( 115)					if (::hx::IsNotNull( this->_targetObject->get_parent() )) {
HXLINE( 115)						_hx_tmp = ::hx::IsNotNull( this->_lookAtObject->get_parent() );
            					}
            					else {
HXLINE( 115)						_hx_tmp = false;
            					}
HXDLIN( 115)					if (_hx_tmp) {
HXLINE( 116)						 ::away3d::containers::ObjectContainer3D _hx_tmp = this->_targetObject->get_parent();
HXDLIN( 116)						if (::hx::IsInstanceNotEq( _hx_tmp,this->_lookAtObject->get_parent() )) {
HXLINE( 117)							this->_pos->x = this->_lookAtObject->get_scenePosition()->x;
HXLINE( 118)							this->_pos->y = this->_lookAtObject->get_scenePosition()->y;
HXLINE( 119)							this->_pos->z = this->_lookAtObject->get_scenePosition()->z;
HXLINE( 120)							 ::openfl::geom::Matrix3D _hx_tmp = this->_targetObject->get_parent()->get_inverseSceneTransform();
HXDLIN( 120)							::away3d::core::math::Matrix3DUtils_obj::transformVector(_hx_tmp,this->_pos,this->_pos);
            						}
            						else {
HXLINE( 122)							 ::openfl::geom::Matrix3D _hx_tmp = this->_lookAtObject->get_transform();
HXDLIN( 122)							::away3d::core::math::Matrix3DUtils_obj::getTranslation(_hx_tmp,this->_pos);
            						}
            					}
            					else {
HXLINE( 124)						if (::hx::IsNotNull( this->_lookAtObject->get_scene() )) {
HXLINE( 125)							this->_pos->x = this->_lookAtObject->get_scenePosition()->x;
HXLINE( 126)							this->_pos->y = this->_lookAtObject->get_scenePosition()->y;
HXLINE( 127)							this->_pos->z = this->_lookAtObject->get_scenePosition()->z;
            						}
            						else {
HXLINE( 129)							 ::openfl::geom::Matrix3D _hx_tmp = this->_lookAtObject->get_transform();
HXDLIN( 129)							::away3d::core::math::Matrix3DUtils_obj::getTranslation(_hx_tmp,this->_pos);
            						}
            					}
HXLINE( 131)					this->_targetObject->lookAt(this->_pos,this->_upAxis);
            				}
            			}
            		}
            	}


void LookAtController_obj::onLookAtObjectChanged( ::away3d::events::Object3DEvent event){
            	HX_STACKFRAME(&_hx_pos_a58f2712d07978eb_138_onLookAtObjectChanged)
HXDLIN( 138)		this->notifyUpdate();
            	}


HX_DEFINE_DYNAMIC_FUNC1(LookAtController_obj,onLookAtObjectChanged,(void))


::hx::ObjectPtr< LookAtController_obj > LookAtController_obj::__new( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject) {
	::hx::ObjectPtr< LookAtController_obj > __this = new LookAtController_obj();
	__this->__construct(targetObject,lookAtObject);
	return __this;
}

::hx::ObjectPtr< LookAtController_obj > LookAtController_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject) {
	LookAtController_obj *__this = (LookAtController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LookAtController_obj), true, "away3d.controllers.LookAtController"));
	*(void **)__this = LookAtController_obj::_hx_vtable;
	__this->__construct(targetObject,lookAtObject);
	return __this;
}

LookAtController_obj::LookAtController_obj()
{
}

void LookAtController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LookAtController);
	HX_MARK_MEMBER_NAME(_lookAtPosition,"_lookAtPosition");
	HX_MARK_MEMBER_NAME(_lookAtObject,"_lookAtObject");
	HX_MARK_MEMBER_NAME(_origin,"_origin");
	HX_MARK_MEMBER_NAME(_upAxis,"_upAxis");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	 ::away3d::controllers::ControllerBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LookAtController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lookAtPosition,"_lookAtPosition");
	HX_VISIT_MEMBER_NAME(_lookAtObject,"_lookAtObject");
	HX_VISIT_MEMBER_NAME(_origin,"_origin");
	HX_VISIT_MEMBER_NAME(_upAxis,"_upAxis");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	 ::away3d::controllers::ControllerBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LookAtController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { return ::hx::Val( _pos ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upAxis") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_upAxis() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_origin") ) { return ::hx::Val( _origin ); }
		if (HX_FIELD_EQ(inName,"_upAxis") ) { return ::hx::Val( _upAxis ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_upAxis") ) { return ::hx::Val( get_upAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_upAxis") ) { return ::hx::Val( set_upAxis_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lookAtObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lookAtObject() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lookAtObject") ) { return ::hx::Val( _lookAtObject ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lookAtPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lookAtPosition() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lookAtPosition") ) { return ::hx::Val( _lookAtPosition ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_lookAtObject") ) { return ::hx::Val( get_lookAtObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lookAtObject") ) { return ::hx::Val( set_lookAtObject_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_lookAtPosition") ) { return ::hx::Val( get_lookAtPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lookAtPosition") ) { return ::hx::Val( set_lookAtPosition_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"onLookAtObjectChanged") ) { return ::hx::Val( onLookAtObjectChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LookAtController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upAxis") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_upAxis(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_origin") ) { _origin=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_upAxis") ) { _upAxis=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lookAtObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lookAtObject(inValue.Cast<  ::away3d::containers::ObjectContainer3D >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lookAtObject") ) { _lookAtObject=inValue.Cast<  ::away3d::containers::ObjectContainer3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lookAtPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lookAtPosition(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lookAtPosition") ) { _lookAtPosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LookAtController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("upAxis",9c,78,f4,6f));
	outFields->push(HX_("lookAtPosition",fb,53,85,cb));
	outFields->push(HX_("lookAtObject",91,59,c0,cf));
	outFields->push(HX_("_lookAtPosition",9a,9c,e5,14));
	outFields->push(HX_("_lookAtObject",70,ec,2e,b2));
	outFields->push(HX_("_origin",85,2b,78,b9));
	outFields->push(HX_("_upAxis",3b,8a,6b,de));
	outFields->push(HX_("_pos",95,a2,20,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LookAtController_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(LookAtController_obj,_lookAtPosition),HX_("_lookAtPosition",9a,9c,e5,14)},
	{::hx::fsObject /*  ::away3d::containers::ObjectContainer3D */ ,(int)offsetof(LookAtController_obj,_lookAtObject),HX_("_lookAtObject",70,ec,2e,b2)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(LookAtController_obj,_origin),HX_("_origin",85,2b,78,b9)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(LookAtController_obj,_upAxis),HX_("_upAxis",3b,8a,6b,de)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(LookAtController_obj,_pos),HX_("_pos",95,a2,20,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LookAtController_obj_sStaticStorageInfo = 0;
#endif

static ::String LookAtController_obj_sMemberFields[] = {
	HX_("_lookAtPosition",9a,9c,e5,14),
	HX_("_lookAtObject",70,ec,2e,b2),
	HX_("_origin",85,2b,78,b9),
	HX_("_upAxis",3b,8a,6b,de),
	HX_("_pos",95,a2,20,3f),
	HX_("get_upAxis",65,e8,7b,60),
	HX_("set_upAxis",d9,86,f9,63),
	HX_("get_lookAtPosition",c4,34,1f,67),
	HX_("set_lookAtPosition",38,67,ce,43),
	HX_("get_lookAtObject",1a,46,5f,d4),
	HX_("set_lookAtObject",8e,33,a1,2a),
	HX_("update",09,86,05,87),
	HX_("onLookAtObjectChanged",84,e9,8a,18),
	::String(null()) };

::hx::Class LookAtController_obj::__mClass;

void LookAtController_obj::__register()
{
	LookAtController_obj _hx_dummy;
	LookAtController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.controllers.LookAtController",94,12,7e,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LookAtController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LookAtController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LookAtController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LookAtController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace controllers
