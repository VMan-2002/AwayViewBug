#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_81dedc833aa83cf2_56_new,"away3d.controllers.ControllerBase","new",0x90e4d9e5,"away3d.controllers.ControllerBase.new","away3d/controllers/ControllerBase.hx",56,0x1cf5d969)
HX_LOCAL_STACK_FRAME(_hx_pos_81dedc833aa83cf2_15_notifyUpdate,"away3d.controllers.ControllerBase","notifyUpdate",0xcf02af8d,"away3d.controllers.ControllerBase.notifyUpdate","away3d/controllers/ControllerBase.hx",15,0x1cf5d969)
HX_LOCAL_STACK_FRAME(_hx_pos_81dedc833aa83cf2_22_get_targetObject,"away3d.controllers.ControllerBase","get_targetObject",0xbb2c4cd4,"away3d.controllers.ControllerBase.get_targetObject","away3d/controllers/ControllerBase.hx",22,0x1cf5d969)
HX_LOCAL_STACK_FRAME(_hx_pos_81dedc833aa83cf2_25_set_targetObject,"away3d.controllers.ControllerBase","set_targetObject",0x116e3a48,"away3d.controllers.ControllerBase.set_targetObject","away3d/controllers/ControllerBase.hx",25,0x1cf5d969)
HX_LOCAL_STACK_FRAME(_hx_pos_81dedc833aa83cf2_38_get_autoUpdate,"away3d.controllers.ControllerBase","get_autoUpdate",0xd323a9bc,"away3d.controllers.ControllerBase.get_autoUpdate","away3d/controllers/ControllerBase.hx",38,0x1cf5d969)
HX_LOCAL_STACK_FRAME(_hx_pos_81dedc833aa83cf2_41_set_autoUpdate,"away3d.controllers.ControllerBase","set_autoUpdate",0xf3439230,"away3d.controllers.ControllerBase.set_autoUpdate","away3d/controllers/ControllerBase.hx",41,0x1cf5d969)
HX_LOCAL_STACK_FRAME(_hx_pos_81dedc833aa83cf2_66_update,"away3d.controllers.ControllerBase","update",0x31e97da4,"away3d.controllers.ControllerBase.update","away3d/controllers/ControllerBase.hx",66,0x1cf5d969)
namespace away3d{
namespace controllers{

void ControllerBase_obj::__construct( ::away3d::entities::Entity targetObject){
            	HX_STACKFRAME(&_hx_pos_81dedc833aa83cf2_56_new)
HXLINE(  57)		this->_autoUpdate = true;
HXLINE(  58)		this->set_targetObject(targetObject);
            	}

Dynamic ControllerBase_obj::__CreateEmpty() { return new ControllerBase_obj; }

void *ControllerBase_obj::_hx_vtable = 0;

Dynamic ControllerBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControllerBase_obj > _hx_result = new ControllerBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControllerBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x603e0965;
}

void ControllerBase_obj::notifyUpdate(){
            	HX_STACKFRAME(&_hx_pos_81dedc833aa83cf2_15_notifyUpdate)
HXDLIN(  15)		bool _hx_tmp;
HXDLIN(  15)		bool _hx_tmp1;
HXDLIN(  15)		if (::hx::IsNotNull( this->_targetObject )) {
HXDLIN(  15)			_hx_tmp1 = ::hx::IsNotNull( this->_targetObject->get_implicitPartition() );
            		}
            		else {
HXDLIN(  15)			_hx_tmp1 = false;
            		}
HXDLIN(  15)		if (_hx_tmp1) {
HXDLIN(  15)			_hx_tmp = this->_autoUpdate;
            		}
            		else {
HXDLIN(  15)			_hx_tmp = false;
            		}
HXDLIN(  15)		if (_hx_tmp) {
HXDLIN(  15)			this->_targetObject->get_implicitPartition()->markForUpdate(this->_targetObject);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControllerBase_obj,notifyUpdate,(void))

 ::away3d::entities::Entity ControllerBase_obj::get_targetObject(){
            	HX_STACKFRAME(&_hx_pos_81dedc833aa83cf2_22_get_targetObject)
HXDLIN(  22)		return this->_targetObject;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControllerBase_obj,get_targetObject,return )

 ::away3d::entities::Entity ControllerBase_obj::set_targetObject( ::away3d::entities::Entity val){
            	HX_STACKFRAME(&_hx_pos_81dedc833aa83cf2_25_set_targetObject)
HXLINE(  26)		if (::hx::IsInstanceEq( this->_targetObject,val )) {
HXLINE(  26)			return val;
            		}
HXLINE(  27)		bool _hx_tmp;
HXDLIN(  27)		if (::hx::IsNotNull( this->_targetObject )) {
HXLINE(  27)			_hx_tmp = this->_autoUpdate;
            		}
            		else {
HXLINE(  27)			_hx_tmp = false;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  27)			this->_targetObject->_controller = null();
            		}
HXLINE(  28)		this->_targetObject = val;
HXLINE(  29)		bool _hx_tmp1;
HXDLIN(  29)		if (::hx::IsNotNull( this->_targetObject )) {
HXLINE(  29)			_hx_tmp1 = this->_autoUpdate;
            		}
            		else {
HXLINE(  29)			_hx_tmp1 = false;
            		}
HXDLIN(  29)		if (_hx_tmp1) {
HXLINE(  29)			this->_targetObject->_controller = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  30)		this->notifyUpdate();
HXLINE(  31)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControllerBase_obj,set_targetObject,return )

bool ControllerBase_obj::get_autoUpdate(){
            	HX_STACKFRAME(&_hx_pos_81dedc833aa83cf2_38_get_autoUpdate)
HXDLIN(  38)		return this->_autoUpdate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControllerBase_obj,get_autoUpdate,return )

bool ControllerBase_obj::set_autoUpdate(bool val){
            	HX_STACKFRAME(&_hx_pos_81dedc833aa83cf2_41_set_autoUpdate)
HXLINE(  42)		if ((this->_autoUpdate == val)) {
HXLINE(  42)			return val;
            		}
HXLINE(  43)		this->_autoUpdate = val;
HXLINE(  44)		if (::hx::IsNotNull( this->_targetObject )) {
HXLINE(  45)			if (this->_autoUpdate) {
HXLINE(  45)				this->_targetObject->_controller = ::hx::ObjectPtr<OBJ_>(this);
            			}
            			else {
HXLINE(  46)				this->_targetObject->_controller = null();
            			}
            		}
HXLINE(  48)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControllerBase_obj,set_autoUpdate,return )

void ControllerBase_obj::update(::hx::Null< bool >  __o_interpolate){
            		bool interpolate = __o_interpolate.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_81dedc833aa83cf2_66_update)
HXDLIN(  66)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControllerBase_obj,update,(void))


::hx::ObjectPtr< ControllerBase_obj > ControllerBase_obj::__new( ::away3d::entities::Entity targetObject) {
	::hx::ObjectPtr< ControllerBase_obj > __this = new ControllerBase_obj();
	__this->__construct(targetObject);
	return __this;
}

::hx::ObjectPtr< ControllerBase_obj > ControllerBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity targetObject) {
	ControllerBase_obj *__this = (ControllerBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControllerBase_obj), true, "away3d.controllers.ControllerBase"));
	*(void **)__this = ControllerBase_obj::_hx_vtable;
	__this->__construct(targetObject);
	return __this;
}

ControllerBase_obj::ControllerBase_obj()
{
}

void ControllerBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControllerBase);
	HX_MARK_MEMBER_NAME(_autoUpdate,"_autoUpdate");
	HX_MARK_MEMBER_NAME(_targetObject,"_targetObject");
	HX_MARK_END_CLASS();
}

void ControllerBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_autoUpdate,"_autoUpdate");
	HX_VISIT_MEMBER_NAME(_targetObject,"_targetObject");
}

::hx::Val ControllerBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoUpdate() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoUpdate") ) { return ::hx::Val( _autoUpdate ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_targetObject() ); }
		if (HX_FIELD_EQ(inName,"notifyUpdate") ) { return ::hx::Val( notifyUpdate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_targetObject") ) { return ::hx::Val( _targetObject ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_autoUpdate") ) { return ::hx::Val( get_autoUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoUpdate") ) { return ::hx::Val( set_autoUpdate_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_targetObject") ) { return ::hx::Val( get_targetObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_targetObject") ) { return ::hx::Val( set_targetObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ControllerBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"autoUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoUpdate(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoUpdate") ) { _autoUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetObject") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_targetObject(inValue.Cast<  ::away3d::entities::Entity >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_targetObject") ) { _targetObject=inValue.Cast<  ::away3d::entities::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ControllerBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("targetObject",f0,b8,c3,d1));
	outFields->push(HX_("autoUpdate",d8,96,d0,f2));
	outFields->push(HX_("_autoUpdate",f7,63,5a,c5));
	outFields->push(HX_("_targetObject",cf,4b,32,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControllerBase_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ControllerBase_obj,_autoUpdate),HX_("_autoUpdate",f7,63,5a,c5)},
	{::hx::fsObject /*  ::away3d::entities::Entity */ ,(int)offsetof(ControllerBase_obj,_targetObject),HX_("_targetObject",cf,4b,32,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ControllerBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ControllerBase_obj_sMemberFields[] = {
	HX_("_autoUpdate",f7,63,5a,c5),
	HX_("_targetObject",cf,4b,32,b4),
	HX_("notifyUpdate",b2,91,cc,f4),
	HX_("get_targetObject",79,a5,62,d6),
	HX_("set_targetObject",ed,92,a4,2c),
	HX_("get_autoUpdate",21,1f,c6,68),
	HX_("set_autoUpdate",95,07,e6,88),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ControllerBase_obj::__mClass;

void ControllerBase_obj::__register()
{
	ControllerBase_obj _hx_dummy;
	ControllerBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.controllers.ControllerBase",73,03,d7,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControllerBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControllerBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControllerBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControllerBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace controllers
