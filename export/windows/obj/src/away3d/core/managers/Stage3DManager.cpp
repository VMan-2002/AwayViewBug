#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Stage3DManager
#include <away3d/core/managers/Stage3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_035c8c52e2429906_32_new,"away3d.core.managers.Stage3DManager","new",0x6f5c2d58,"away3d.core.managers.Stage3DManager.new","away3d/core/managers/Stage3DManager.hx",32,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_65_getStage3DProxy,"away3d.core.managers.Stage3DManager","getStage3DProxy",0xcc555fad,"away3d.core.managers.Stage3DManager.getStage3DProxy","away3d/core/managers/Stage3DManager.hx",65,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_80_removeStage3DProxy,"away3d.core.managers.Stage3DManager","removeStage3DProxy",0x5a6c516b,"away3d.core.managers.Stage3DManager.removeStage3DProxy","away3d/core/managers/Stage3DManager.hx",80,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_92_getFreeStage3DProxy,"away3d.core.managers.Stage3DManager","getFreeStage3DProxy",0x144c8979,"away3d.core.managers.Stage3DManager.getFreeStage3DProxy","away3d/core/managers/Stage3DManager.hx",92,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_116_get_hasFreeStage3DProxy,"away3d.core.managers.Stage3DManager","get_hasFreeStage3DProxy",0xb46192d4,"away3d.core.managers.Stage3DManager.get_hasFreeStage3DProxy","away3d/core/managers/Stage3DManager.hx",116,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_125_get_numProxySlotsFree,"away3d.core.managers.Stage3DManager","get_numProxySlotsFree",0xac5c7a68,"away3d.core.managers.Stage3DManager.get_numProxySlotsFree","away3d/core/managers/Stage3DManager.hx",125,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_134_get_numProxySlotsUsed,"away3d.core.managers.Stage3DManager","get_numProxySlotsUsed",0xb6476ff9,"away3d.core.managers.Stage3DManager.get_numProxySlotsUsed","away3d/core/managers/Stage3DManager.hx",134,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_143_get_numProxySlotsTotal,"away3d.core.managers.Stage3DManager","get_numProxySlotsTotal",0x323a7a88,"away3d.core.managers.Stage3DManager.get_numProxySlotsTotal","away3d/core/managers/Stage3DManager.hx",143,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_45_getInstance,"away3d.core.managers.Stage3DManager","getInstance",0x5276f743,"away3d.core.managers.Stage3DManager.getInstance","away3d/core/managers/Stage3DManager.hx",45,0xf21e0857)
HX_LOCAL_STACK_FRAME(_hx_pos_035c8c52e2429906_22_boot,"away3d.core.managers.Stage3DManager","boot",0xf964803a,"away3d.core.managers.Stage3DManager.boot","away3d/core/managers/Stage3DManager.hx",22,0xf21e0857)
namespace away3d{
namespace core{
namespace managers{

void Stage3DManager_obj::__construct( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_035c8c52e2429906_32_new)
HXLINE(  33)		this->_stage = stage;
HXLINE(  35)		if (::hx::IsNull( ::away3d::core::managers::Stage3DManager_obj::_stageProxies )) {
HXLINE(  36)			::Array< ::Dynamic> array = null();
HXDLIN(  36)			::away3d::core::managers::Stage3DManager_obj::_stageProxies =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,::openfl::_Vector::IVector_obj::get_length(this->_stage->stage3Ds),true,array,true);
            		}
            	}

Dynamic Stage3DManager_obj::__CreateEmpty() { return new Stage3DManager_obj; }

void *Stage3DManager_obj::_hx_vtable = 0;

Dynamic Stage3DManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stage3DManager_obj > _hx_result = new Stage3DManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Stage3DManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70b317a2;
}

 ::away3d::core::managers::Stage3DProxy Stage3DManager_obj::getStage3DProxy(int index,::hx::Null< bool >  __o_forceSoftware,::String __o_profile){
            		bool forceSoftware = __o_forceSoftware.Default(false);
            		::String profile = __o_profile;
            		if (::hx::IsNull(__o_profile)) profile = HX_("baseline",85,dc,27,11);
            	HX_GC_STACKFRAME(&_hx_pos_035c8c52e2429906_65_getStage3DProxy)
HXLINE(  66)		if (::hx::IsNull( ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get(index).StaticCast<  ::away3d::core::managers::Stage3DProxy >() )) {
HXLINE(  67)			::away3d::core::managers::Stage3DManager_obj::_numStageProxies++;
HXLINE(  68)			{
HXLINE(  68)				::Dynamic this1 = ::away3d::core::managers::Stage3DManager_obj::_stageProxies;
HXDLIN(  68)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(index, ::away3d::core::managers::Stage3DProxy_obj::__alloc( HX_CTX ,index,this->_stage->stage3Ds->get(index).StaticCast<  ::openfl::display::Stage3D >(),::hx::ObjectPtr<OBJ_>(this),forceSoftware,profile)).StaticCast<  ::away3d::core::managers::Stage3DProxy >();
            			}
            		}
HXLINE(  71)		return ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get(index).StaticCast<  ::away3d::core::managers::Stage3DProxy >();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Stage3DManager_obj,getStage3DProxy,return )

void Stage3DManager_obj::removeStage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_035c8c52e2429906_80_removeStage3DProxy)
HXLINE(  81)		::away3d::core::managers::Stage3DManager_obj::_numStageProxies--;
HXLINE(  82)		{
HXLINE(  82)			::Dynamic this1 = ::away3d::core::managers::Stage3DManager_obj::_stageProxies;
HXDLIN(  82)			 ::away3d::core::managers::Stage3DProxy value = null();
HXDLIN(  82)			( ( ::openfl::_Vector::ObjectVector)(this1) )->set(stage3DProxy->get_stage3DIndex(),value).StaticCast<  ::away3d::core::managers::Stage3DProxy >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3DManager_obj,removeStage3DProxy,(void))

 ::away3d::core::managers::Stage3DProxy Stage3DManager_obj::getFreeStage3DProxy(::hx::Null< bool >  __o_forceSoftware,::String __o_profile){
            		bool forceSoftware = __o_forceSoftware.Default(false);
            		::String profile = __o_profile;
            		if (::hx::IsNull(__o_profile)) profile = HX_("baseline",85,dc,27,11);
            	HX_GC_STACKFRAME(&_hx_pos_035c8c52e2429906_92_getFreeStage3DProxy)
HXLINE(  93)		int i = 0;
HXLINE(  94)		int len = ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get_length();
HXLINE(  96)		while((i < len)){
HXLINE(  97)			if (::hx::IsNull( ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get(i).StaticCast<  ::away3d::core::managers::Stage3DProxy >() )) {
HXLINE(  98)				this->getStage3DProxy(i,forceSoftware,profile);
HXLINE(  99)				 ::away3d::core::managers::Stage3DProxy _hx_tmp = ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get(i).StaticCast<  ::away3d::core::managers::Stage3DProxy >();
HXDLIN(  99)				_hx_tmp->set_width(this->_stage->stageWidth);
HXLINE( 100)				 ::away3d::core::managers::Stage3DProxy _hx_tmp1 = ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get(i).StaticCast<  ::away3d::core::managers::Stage3DProxy >();
HXDLIN( 100)				_hx_tmp1->set_height(this->_stage->stageHeight);
HXLINE( 101)				return ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get(i).StaticCast<  ::away3d::core::managers::Stage3DProxy >();
            			}
HXLINE( 103)			i = (i + 1);
            		}
HXLINE( 106)		HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Too many Stage3D instances used!",3c,68,37,59),null()));
HXDLIN( 106)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3DManager_obj,getFreeStage3DProxy,return )

bool Stage3DManager_obj::get_hasFreeStage3DProxy(){
            	HX_STACKFRAME(&_hx_pos_035c8c52e2429906_116_get_hasFreeStage3DProxy)
HXDLIN( 116)		int _hx_tmp = ::away3d::core::managers::Stage3DManager_obj::_numStageProxies;
HXDLIN( 116)		if ((_hx_tmp < ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get_length())) {
HXDLIN( 116)			return true;
            		}
            		else {
HXDLIN( 116)			return false;
            		}
HXDLIN( 116)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_hasFreeStage3DProxy,return )

int Stage3DManager_obj::get_numProxySlotsFree(){
            	HX_STACKFRAME(&_hx_pos_035c8c52e2429906_125_get_numProxySlotsFree)
HXDLIN( 125)		int _hx_tmp = ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get_length();
HXDLIN( 125)		return (_hx_tmp - ::away3d::core::managers::Stage3DManager_obj::_numStageProxies);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_numProxySlotsFree,return )

int Stage3DManager_obj::get_numProxySlotsUsed(){
            	HX_STACKFRAME(&_hx_pos_035c8c52e2429906_134_get_numProxySlotsUsed)
HXDLIN( 134)		return ::away3d::core::managers::Stage3DManager_obj::_numStageProxies;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_numProxySlotsUsed,return )

int Stage3DManager_obj::get_numProxySlotsTotal(){
            	HX_STACKFRAME(&_hx_pos_035c8c52e2429906_143_get_numProxySlotsTotal)
HXDLIN( 143)		return ::away3d::core::managers::Stage3DManager_obj::_stageProxies->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3DManager_obj,get_numProxySlotsTotal,return )

 ::haxe::ds::ObjectMap Stage3DManager_obj::_instances;

 ::openfl::_Vector::ObjectVector Stage3DManager_obj::_stageProxies;

int Stage3DManager_obj::_numStageProxies;

 ::away3d::core::managers::Stage3DManager Stage3DManager_obj::getInstance( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_035c8c52e2429906_45_getInstance)
HXLINE(  46)		if (::hx::IsNull( ::away3d::core::managers::Stage3DManager_obj::_instances )) {
HXLINE(  47)			::away3d::core::managers::Stage3DManager_obj::_instances =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  49)		 ::away3d::core::managers::Stage3DManager manager = ( ( ::away3d::core::managers::Stage3DManager)(::away3d::core::managers::Stage3DManager_obj::_instances->get(stage)) );
HXLINE(  50)		if (::hx::IsNull( manager )) {
HXLINE(  51)			manager =  ::away3d::core::managers::Stage3DManager_obj::__alloc( HX_CTX ,stage);
HXLINE(  52)			::away3d::core::managers::Stage3DManager_obj::_instances->set(stage,manager);
            		}
HXLINE(  54)		return manager;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stage3DManager_obj,getInstance,return )


::hx::ObjectPtr< Stage3DManager_obj > Stage3DManager_obj::__new( ::openfl::display::Stage stage) {
	::hx::ObjectPtr< Stage3DManager_obj > __this = new Stage3DManager_obj();
	__this->__construct(stage);
	return __this;
}

::hx::ObjectPtr< Stage3DManager_obj > Stage3DManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage) {
	Stage3DManager_obj *__this = (Stage3DManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stage3DManager_obj), true, "away3d.core.managers.Stage3DManager"));
	*(void **)__this = Stage3DManager_obj::_hx_vtable;
	__this->__construct(stage);
	return __this;
}

Stage3DManager_obj::Stage3DManager_obj()
{
}

void Stage3DManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3DManager);
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_END_CLASS();
}

void Stage3DManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
}

::hx::Val Stage3DManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { return ::hx::Val( _stage ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getStage3DProxy") ) { return ::hx::Val( getStage3DProxy_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numProxySlotsFree") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numProxySlotsFree() ); }
		if (HX_FIELD_EQ(inName,"numProxySlotsUsed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numProxySlotsUsed() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"numProxySlotsTotal") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numProxySlotsTotal() ); }
		if (HX_FIELD_EQ(inName,"removeStage3DProxy") ) { return ::hx::Val( removeStage3DProxy_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hasFreeStage3DProxy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hasFreeStage3DProxy() ); }
		if (HX_FIELD_EQ(inName,"getFreeStage3DProxy") ) { return ::hx::Val( getFreeStage3DProxy_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_numProxySlotsFree") ) { return ::hx::Val( get_numProxySlotsFree_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numProxySlotsUsed") ) { return ::hx::Val( get_numProxySlotsUsed_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_numProxySlotsTotal") ) { return ::hx::Val( get_numProxySlotsTotal_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_hasFreeStage3DProxy") ) { return ::hx::Val( get_hasFreeStage3DProxy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage3DManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { outValue = ( _instances ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stageProxies") ) { outValue = ( _stageProxies ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numStageProxies") ) { outValue = ( _numStageProxies ); return true; }
	}
	return false;
}

::hx::Val Stage3DManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage3DManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stageProxies") ) { _stageProxies=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_numStageProxies") ) { _numStageProxies=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Stage3DManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("hasFreeStage3DProxy",45,43,22,d2));
	outFields->push(HX_("numProxySlotsFree",99,7c,b3,c4));
	outFields->push(HX_("numProxySlotsUsed",2a,72,9e,ce));
	outFields->push(HX_("numProxySlotsTotal",37,63,05,66));
	outFields->push(HX_("_stage",ff,b1,f2,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stage3DManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(Stage3DManager_obj,_stage),HX_("_stage",ff,b1,f2,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Stage3DManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &Stage3DManager_obj::_instances,HX_("_instances",ff,fe,bc,a6)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &Stage3DManager_obj::_stageProxies,HX_("_stageProxies",0d,5e,f5,e8)},
	{::hx::fsInt,(void *) &Stage3DManager_obj::_numStageProxies,HX_("_numStageProxies",15,89,c3,69)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Stage3DManager_obj_sMemberFields[] = {
	HX_("_stage",ff,b1,f2,7f),
	HX_("getStage3DProxy",b5,6e,b9,31),
	HX_("removeStage3DProxy",63,57,05,5b),
	HX_("getFreeStage3DProxy",81,bc,98,99),
	HX_("get_hasFreeStage3DProxy",dc,e9,77,da),
	HX_("get_numProxySlotsFree",70,7f,61,43),
	HX_("get_numProxySlotsUsed",01,75,4c,4d),
	HX_("get_numProxySlotsTotal",80,dc,99,bf),
	::String(null()) };

static void Stage3DManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3DManager_obj::_instances,"_instances");
	HX_MARK_MEMBER_NAME(Stage3DManager_obj::_stageProxies,"_stageProxies");
	HX_MARK_MEMBER_NAME(Stage3DManager_obj::_numStageProxies,"_numStageProxies");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stage3DManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3DManager_obj::_instances,"_instances");
	HX_VISIT_MEMBER_NAME(Stage3DManager_obj::_stageProxies,"_stageProxies");
	HX_VISIT_MEMBER_NAME(Stage3DManager_obj::_numStageProxies,"_numStageProxies");
};

#endif

::hx::Class Stage3DManager_obj::__mClass;

static ::String Stage3DManager_obj_sStaticFields[] = {
	HX_("_instances",ff,fe,bc,a6),
	HX_("_stageProxies",0d,5e,f5,e8),
	HX_("_numStageProxies",15,89,c3,69),
	HX_("getInstance",4b,e2,d4,7f),
	::String(null())
};

void Stage3DManager_obj::__register()
{
	Stage3DManager_obj _hx_dummy;
	Stage3DManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.managers.Stage3DManager",66,e1,3c,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage3DManager_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage3DManager_obj::__SetStatic;
	__mClass->mMarkFunc = Stage3DManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stage3DManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stage3DManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stage3DManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stage3DManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stage3DManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stage3DManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Stage3DManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_035c8c52e2429906_22_boot)
HXDLIN(  22)		_numStageProxies = 0;
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
