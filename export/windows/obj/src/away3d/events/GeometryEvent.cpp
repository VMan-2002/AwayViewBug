#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_events_GeometryEvent
#include <away3d/events/GeometryEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb64a8d2b5f008ff_36_new,"away3d.events.GeometryEvent","new",0xc3352ed4,"away3d.events.GeometryEvent.new","away3d/events/GeometryEvent.hx",36,0x5cd6393c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb64a8d2b5f008ff_46_get_subGeometry,"away3d.events.GeometryEvent","get_subGeometry",0x4d48dc5d,"away3d.events.GeometryEvent.get_subGeometry","away3d/events/GeometryEvent.hx",46,0x5cd6393c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb64a8d2b5f008ff_55_clone,"away3d.events.GeometryEvent","clone",0x8d2ff6d1,"away3d.events.GeometryEvent.clone","away3d/events/GeometryEvent.hx",55,0x5cd6393c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb64a8d2b5f008ff_19_boot,"away3d.events.GeometryEvent","boot",0x036ccb3e,"away3d.events.GeometryEvent.boot","away3d/events/GeometryEvent.hx",19,0x5cd6393c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb64a8d2b5f008ff_24_boot,"away3d.events.GeometryEvent","boot",0x036ccb3e,"away3d.events.GeometryEvent.boot","away3d/events/GeometryEvent.hx",24,0x5cd6393c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb64a8d2b5f008ff_26_boot,"away3d.events.GeometryEvent","boot",0x036ccb3e,"away3d.events.GeometryEvent.boot","away3d/events/GeometryEvent.hx",26,0x5cd6393c)
namespace away3d{
namespace events{

void GeometryEvent_obj::__construct(::String type,::Dynamic subGeometry){
            	HX_STACKFRAME(&_hx_pos_eb64a8d2b5f008ff_36_new)
HXLINE(  37)		super::__construct(type,false,false);
HXLINE(  38)		this->_subGeometry = subGeometry;
            	}

Dynamic GeometryEvent_obj::__CreateEmpty() { return new GeometryEvent_obj; }

void *GeometryEvent_obj::_hx_vtable = 0;

Dynamic GeometryEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GeometryEvent_obj > _hx_result = new GeometryEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GeometryEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x46a974d0;
	}
}

::Dynamic GeometryEvent_obj::get_subGeometry(){
            	HX_STACKFRAME(&_hx_pos_eb64a8d2b5f008ff_46_get_subGeometry)
HXDLIN(  46)		return this->_subGeometry;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GeometryEvent_obj,get_subGeometry,return )

 ::openfl::events::Event GeometryEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_eb64a8d2b5f008ff_55_clone)
HXDLIN(  55)		return  ::away3d::events::GeometryEvent_obj::__alloc( HX_CTX ,this->type,this->_subGeometry);
            	}


::String GeometryEvent_obj::SUB_GEOMETRY_ADDED;

::String GeometryEvent_obj::SUB_GEOMETRY_REMOVED;

::String GeometryEvent_obj::BOUNDS_INVALID;


::hx::ObjectPtr< GeometryEvent_obj > GeometryEvent_obj::__new(::String type,::Dynamic subGeometry) {
	::hx::ObjectPtr< GeometryEvent_obj > __this = new GeometryEvent_obj();
	__this->__construct(type,subGeometry);
	return __this;
}

::hx::ObjectPtr< GeometryEvent_obj > GeometryEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::Dynamic subGeometry) {
	GeometryEvent_obj *__this = (GeometryEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GeometryEvent_obj), true, "away3d.events.GeometryEvent"));
	*(void **)__this = GeometryEvent_obj::_hx_vtable;
	__this->__construct(type,subGeometry);
	return __this;
}

GeometryEvent_obj::GeometryEvent_obj()
{
}

void GeometryEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryEvent);
	HX_MARK_MEMBER_NAME(_subGeometry,"_subGeometry");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GeometryEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_subGeometry,"_subGeometry");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GeometryEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subGeometry") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subGeometry() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { return ::hx::Val( _subGeometry ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_subGeometry") ) { return ::hx::Val( get_subGeometry_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GeometryEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_subGeometry") ) { _subGeometry=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("subGeometry",52,e8,b7,32));
	outFields->push(HX_("_subGeometry",53,96,c1,98));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GeometryEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(GeometryEvent_obj,_subGeometry),HX_("_subGeometry",53,96,c1,98)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GeometryEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GeometryEvent_obj::SUB_GEOMETRY_ADDED,HX_("SUB_GEOMETRY_ADDED",52,07,94,55)},
	{::hx::fsString,(void *) &GeometryEvent_obj::SUB_GEOMETRY_REMOVED,HX_("SUB_GEOMETRY_REMOVED",b2,7e,af,46)},
	{::hx::fsString,(void *) &GeometryEvent_obj::BOUNDS_INVALID,HX_("BOUNDS_INVALID",cd,37,4b,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GeometryEvent_obj_sMemberFields[] = {
	HX_("_subGeometry",53,96,c1,98),
	HX_("get_subGeometry",e9,9f,99,f3),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void GeometryEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_ADDED,"SUB_GEOMETRY_ADDED");
	HX_MARK_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_REMOVED,"SUB_GEOMETRY_REMOVED");
	HX_MARK_MEMBER_NAME(GeometryEvent_obj::BOUNDS_INVALID,"BOUNDS_INVALID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GeometryEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_ADDED,"SUB_GEOMETRY_ADDED");
	HX_VISIT_MEMBER_NAME(GeometryEvent_obj::SUB_GEOMETRY_REMOVED,"SUB_GEOMETRY_REMOVED");
	HX_VISIT_MEMBER_NAME(GeometryEvent_obj::BOUNDS_INVALID,"BOUNDS_INVALID");
};

#endif

::hx::Class GeometryEvent_obj::__mClass;

static ::String GeometryEvent_obj_sStaticFields[] = {
	HX_("SUB_GEOMETRY_ADDED",52,07,94,55),
	HX_("SUB_GEOMETRY_REMOVED",b2,7e,af,46),
	HX_("BOUNDS_INVALID",cd,37,4b,3c),
	::String(null())
};

void GeometryEvent_obj::__register()
{
	GeometryEvent_obj _hx_dummy;
	GeometryEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.GeometryEvent",e2,74,a0,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GeometryEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GeometryEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GeometryEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GeometryEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GeometryEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeometryEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeometryEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GeometryEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb64a8d2b5f008ff_19_boot)
HXDLIN(  19)		SUB_GEOMETRY_ADDED = HX_("SubGeometryAdded",2e,cf,4e,f4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb64a8d2b5f008ff_24_boot)
HXDLIN(  24)		SUB_GEOMETRY_REMOVED = HX_("SubGeometryRemoved",8e,11,91,1f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_eb64a8d2b5f008ff_26_boot)
HXDLIN(  26)		BOUNDS_INVALID = HX_("BoundsInvalid",e2,b4,d6,23);
            	}
}

} // end namespace away3d
} // end namespace events
