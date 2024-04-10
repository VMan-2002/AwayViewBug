#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
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
#ifndef INCLUDED_away3d_events_TouchEvent3D
#include <away3d/events/TouchEvent3D.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7b6c37b26c18640_12_new,"away3d.events.TouchEvent3D","new",0x1155bba4,"away3d.events.TouchEvent3D.new","away3d/events/TouchEvent3D.hx",12,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_123_stopPropagation,"away3d.events.TouchEvent3D","stopPropagation",0xe949432e,"away3d.events.TouchEvent3D.stopPropagation","away3d/events/TouchEvent3D.hx",123,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_134_stopImmediatePropagation,"away3d.events.TouchEvent3D","stopImmediatePropagation",0xf7d6b5b9,"away3d.events.TouchEvent3D.stopImmediatePropagation","away3d/events/TouchEvent3D.hx",134,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_145_clone,"away3d.events.TouchEvent3D","clone",0x0e2957a1,"away3d.events.TouchEvent3D.clone","away3d/events/TouchEvent3D.hx",145,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_179_get_scenePosition,"away3d.events.TouchEvent3D","get_scenePosition",0x1dd807b0,"away3d.events.TouchEvent3D.get_scenePosition","away3d/events/TouchEvent3D.hx",179,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_190_get_sceneNormal,"away3d.events.TouchEvent3D","get_sceneNormal",0xe451396e,"away3d.events.TouchEvent3D.get_sceneNormal","away3d/events/TouchEvent3D.hx",190,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_21_boot,"away3d.events.TouchEvent3D","boot",0x11c7746e,"away3d.events.TouchEvent3D.boot","away3d/events/TouchEvent3D.hx",21,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_22_boot,"away3d.events.TouchEvent3D","boot",0x11c7746e,"away3d.events.TouchEvent3D.boot","away3d/events/TouchEvent3D.hx",22,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_23_boot,"away3d.events.TouchEvent3D","boot",0x11c7746e,"away3d.events.TouchEvent3D.boot","away3d/events/TouchEvent3D.hx",23,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_24_boot,"away3d.events.TouchEvent3D","boot",0x11c7746e,"away3d.events.TouchEvent3D.boot","away3d/events/TouchEvent3D.hx",24,0x7c45762c)
HX_LOCAL_STACK_FRAME(_hx_pos_b7b6c37b26c18640_25_boot,"away3d.events.TouchEvent3D","boot",0x11c7746e,"away3d.events.TouchEvent3D.boot","away3d/events/TouchEvent3D.hx",25,0x7c45762c)
namespace away3d{
namespace events{

void TouchEvent3D_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_12_new)
HXLINE(  18)		this->_allowedToPropagate = true;
HXLINE( 105)		super::__construct(type,true,true);
            	}

Dynamic TouchEvent3D_obj::__CreateEmpty() { return new TouchEvent3D_obj; }

void *TouchEvent3D_obj::_hx_vtable = 0;

Dynamic TouchEvent3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TouchEvent3D_obj > _hx_result = new TouchEvent3D_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TouchEvent3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x5bfa3184;
	}
}

void TouchEvent3D_obj::stopPropagation(){
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_123_stopPropagation)
HXLINE( 124)		this->super::stopPropagation();
HXLINE( 125)		this->_allowedToPropagate = false;
HXLINE( 126)		if (::hx::IsNotNull( this->_parentEvent )) {
HXLINE( 127)			this->_parentEvent->_allowedToPropagate = false;
            		}
            	}


void TouchEvent3D_obj::stopImmediatePropagation(){
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_134_stopImmediatePropagation)
HXLINE( 135)		this->super::stopImmediatePropagation();
HXLINE( 136)		this->_allowedToPropagate = false;
HXLINE( 137)		if (::hx::IsNotNull( this->_parentEvent )) {
HXLINE( 138)			this->_parentEvent->_allowedToPropagate = false;
            		}
            	}


 ::openfl::events::Event TouchEvent3D_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b7b6c37b26c18640_145_clone)
HXLINE( 146)		 ::away3d::events::TouchEvent3D result =  ::away3d::events::TouchEvent3D_obj::__alloc( HX_CTX ,this->type);
HXLINE( 153)		result->screenX = this->screenX;
HXLINE( 154)		result->screenY = this->screenY;
HXLINE( 156)		result->view = this->view;
HXLINE( 157)		result->object = this->object;
HXLINE( 158)		result->renderable = this->renderable;
HXLINE( 159)		result->material = this->material;
HXLINE( 160)		result->uv = this->uv;
HXLINE( 161)		result->localPosition = this->localPosition;
HXLINE( 162)		result->localNormal = this->localNormal;
HXLINE( 163)		result->index = this->index;
HXLINE( 164)		result->subGeometryIndex = this->subGeometryIndex;
HXLINE( 166)		result->ctrlKey = this->ctrlKey;
HXLINE( 167)		result->shiftKey = this->shiftKey;
HXLINE( 169)		result->_parentEvent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 171)		return result;
            	}


 ::openfl::geom::Vector3D TouchEvent3D_obj::get_scenePosition(){
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_179_get_scenePosition)
HXDLIN( 179)		if (::Std_obj::isOfType(this->object,( ( ::Dynamic)(::hx::ClassOf< ::away3d::containers::ObjectContainer3D >()) ))) {
HXLINE( 180)			return this->object->get_sceneTransform()->transformVector(this->localPosition);
            		}
            		else {
HXLINE( 182)			return this->localPosition;
            		}
HXLINE( 179)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent3D_obj,get_scenePosition,return )

 ::openfl::geom::Vector3D TouchEvent3D_obj::get_sceneNormal(){
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_190_get_sceneNormal)
HXDLIN( 190)		if (::Std_obj::isOfType(this->object,( ( ::Dynamic)(::hx::ClassOf< ::away3d::containers::ObjectContainer3D >()) ))) {
HXLINE( 191)			 ::openfl::geom::Vector3D sceneNormal = this->object->get_sceneTransform()->deltaTransformVector(this->localNormal);
HXLINE( 192)			sceneNormal->normalize();
HXLINE( 193)			return sceneNormal;
            		}
            		else {
HXLINE( 195)			return this->localNormal;
            		}
HXLINE( 190)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent3D_obj,get_sceneNormal,return )

::String TouchEvent3D_obj::TOUCH_END;

::String TouchEvent3D_obj::TOUCH_BEGIN;

::String TouchEvent3D_obj::TOUCH_MOVE;

::String TouchEvent3D_obj::TOUCH_OUT;

::String TouchEvent3D_obj::TOUCH_OVER;


::hx::ObjectPtr< TouchEvent3D_obj > TouchEvent3D_obj::__new(::String type) {
	::hx::ObjectPtr< TouchEvent3D_obj > __this = new TouchEvent3D_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< TouchEvent3D_obj > TouchEvent3D_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	TouchEvent3D_obj *__this = (TouchEvent3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TouchEvent3D_obj), true, "away3d.events.TouchEvent3D"));
	*(void **)__this = TouchEvent3D_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

TouchEvent3D_obj::TouchEvent3D_obj()
{
}

void TouchEvent3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEvent3D);
	HX_MARK_MEMBER_NAME(_allowedToPropagate,"_allowedToPropagate");
	HX_MARK_MEMBER_NAME(_parentEvent,"_parentEvent");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(renderable,"renderable");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_MARK_MEMBER_NAME(localPosition,"localPosition");
	HX_MARK_MEMBER_NAME(localNormal,"localNormal");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TouchEvent3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_allowedToPropagate,"_allowedToPropagate");
	HX_VISIT_MEMBER_NAME(_parentEvent,"_parentEvent");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(renderable,"renderable");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(subGeometryIndex,"subGeometryIndex");
	HX_VISIT_MEMBER_NAME(localPosition,"localPosition");
	HX_VISIT_MEMBER_NAME(localNormal,"localNormal");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TouchEvent3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return ::hx::Val( uv ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return ::hx::Val( view ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"altKey") ) { return ::hx::Val( altKey ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return ::hx::Val( screenX ); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return ::hx::Val( screenY ); }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ::hx::Val( ctrlKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return ::hx::Val( material ); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return ::hx::Val( shiftKey ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { return ::hx::Val( renderable ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sceneNormal") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sceneNormal() ); }
		if (HX_FIELD_EQ(inName,"localNormal") ) { return ::hx::Val( localNormal ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentEvent") ) { return ::hx::Val( _parentEvent ); }
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return ::hx::Val( touchPointID ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scenePosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scenePosition() ); }
		if (HX_FIELD_EQ(inName,"localPosition") ) { return ::hx::Val( localPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return ::hx::Val( stopPropagation_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sceneNormal") ) { return ::hx::Val( get_sceneNormal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { return ::hx::Val( subGeometryIndex ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_scenePosition") ) { return ::hx::Val( get_scenePosition_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_allowedToPropagate") ) { return ::hx::Val( _allowedToPropagate ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return ::hx::Val( stopImmediatePropagation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TouchEvent3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast<  ::away3d::containers::View3D >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::away3d::containers::ObjectContainer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast<  ::away3d::materials::MaterialBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"localNormal") ) { localNormal=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentEvent") ) { _parentEvent=inValue.Cast<  ::away3d::events::TouchEvent3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localPosition") ) { localPosition=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { subGeometryIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_allowedToPropagate") ) { _allowedToPropagate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scenePosition",15,62,2a,18));
	outFields->push(HX_("sceneNormal",93,c0,97,da));
	outFields->push(HX_("_allowedToPropagate",45,47,7b,65));
	outFields->push(HX_("_parentEvent",91,e8,88,6c));
	outFields->push(HX_("screenX",6c,c3,36,2a));
	outFields->push(HX_("screenY",6d,c3,36,2a));
	outFields->push(HX_("view",65,32,4f,4e));
	outFields->push(HX_("object",bf,7e,3f,15));
	outFields->push(HX_("renderable",f0,3b,99,f2));
	outFields->push(HX_("material",a7,5c,a5,f0));
	outFields->push(HX_("uv",61,66,00,00));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("subGeometryIndex",60,b9,24,7c));
	outFields->push(HX_("localPosition",34,09,f5,43));
	outFields->push(HX_("localNormal",f2,11,a4,ed));
	outFields->push(HX_("ctrlKey",b4,35,7d,61));
	outFields->push(HX_("altKey",f6,a7,ca,44));
	outFields->push(HX_("shiftKey",3d,92,9f,99));
	outFields->push(HX_("touchPointID",2c,be,83,7b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TouchEvent3D_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TouchEvent3D_obj,_allowedToPropagate),HX_("_allowedToPropagate",45,47,7b,65)},
	{::hx::fsObject /*  ::away3d::events::TouchEvent3D */ ,(int)offsetof(TouchEvent3D_obj,_parentEvent),HX_("_parentEvent",91,e8,88,6c)},
	{::hx::fsFloat,(int)offsetof(TouchEvent3D_obj,screenX),HX_("screenX",6c,c3,36,2a)},
	{::hx::fsFloat,(int)offsetof(TouchEvent3D_obj,screenY),HX_("screenY",6d,c3,36,2a)},
	{::hx::fsObject /*  ::away3d::containers::View3D */ ,(int)offsetof(TouchEvent3D_obj,view),HX_("view",65,32,4f,4e)},
	{::hx::fsObject /*  ::away3d::containers::ObjectContainer3D */ ,(int)offsetof(TouchEvent3D_obj,object),HX_("object",bf,7e,3f,15)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(TouchEvent3D_obj,renderable),HX_("renderable",f0,3b,99,f2)},
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(TouchEvent3D_obj,material),HX_("material",a7,5c,a5,f0)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(TouchEvent3D_obj,uv),HX_("uv",61,66,00,00)},
	{::hx::fsInt,(int)offsetof(TouchEvent3D_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(TouchEvent3D_obj,subGeometryIndex),HX_("subGeometryIndex",60,b9,24,7c)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(TouchEvent3D_obj,localPosition),HX_("localPosition",34,09,f5,43)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(TouchEvent3D_obj,localNormal),HX_("localNormal",f2,11,a4,ed)},
	{::hx::fsBool,(int)offsetof(TouchEvent3D_obj,ctrlKey),HX_("ctrlKey",b4,35,7d,61)},
	{::hx::fsBool,(int)offsetof(TouchEvent3D_obj,altKey),HX_("altKey",f6,a7,ca,44)},
	{::hx::fsBool,(int)offsetof(TouchEvent3D_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{::hx::fsInt,(int)offsetof(TouchEvent3D_obj,touchPointID),HX_("touchPointID",2c,be,83,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TouchEvent3D_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TouchEvent3D_obj::TOUCH_END,HX_("TOUCH_END",db,ef,2a,2a)},
	{::hx::fsString,(void *) &TouchEvent3D_obj::TOUCH_BEGIN,HX_("TOUCH_BEGIN",29,ba,86,7e)},
	{::hx::fsString,(void *) &TouchEvent3D_obj::TOUCH_MOVE,HX_("TOUCH_MOVE",f1,76,b1,c0)},
	{::hx::fsString,(void *) &TouchEvent3D_obj::TOUCH_OUT,HX_("TOUCH_OUT",8e,8c,32,2a)},
	{::hx::fsString,(void *) &TouchEvent3D_obj::TOUCH_OVER,HX_("TOUCH_OVER",34,25,09,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TouchEvent3D_obj_sMemberFields[] = {
	HX_("_allowedToPropagate",45,47,7b,65),
	HX_("_parentEvent",91,e8,88,6c),
	HX_("screenX",6c,c3,36,2a),
	HX_("screenY",6d,c3,36,2a),
	HX_("view",65,32,4f,4e),
	HX_("object",bf,7e,3f,15),
	HX_("renderable",f0,3b,99,f2),
	HX_("material",a7,5c,a5,f0),
	HX_("uv",61,66,00,00),
	HX_("index",12,9b,14,be),
	HX_("subGeometryIndex",60,b9,24,7c),
	HX_("localPosition",34,09,f5,43),
	HX_("localNormal",f2,11,a4,ed),
	HX_("ctrlKey",b4,35,7d,61),
	HX_("altKey",f6,a7,ca,44),
	HX_("shiftKey",3d,92,9f,99),
	HX_("touchPointID",2c,be,83,7b),
	HX_("stopPropagation",ea,81,71,a0),
	HX_("stopImmediatePropagation",7d,bf,66,5b),
	HX_("clone",5d,13,63,48),
	HX_("get_scenePosition",6c,6d,9a,1e),
	HX_("get_sceneNormal",2a,78,79,9b),
	::String(null()) };

static void TouchEvent3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OVER,"TOUCH_OVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TouchEvent3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent3D_obj::TOUCH_OVER,"TOUCH_OVER");
};

#endif

::hx::Class TouchEvent3D_obj::__mClass;

static ::String TouchEvent3D_obj_sStaticFields[] = {
	HX_("TOUCH_END",db,ef,2a,2a),
	HX_("TOUCH_BEGIN",29,ba,86,7e),
	HX_("TOUCH_MOVE",f1,76,b1,c0),
	HX_("TOUCH_OUT",8e,8c,32,2a),
	HX_("TOUCH_OVER",34,25,09,c2),
	::String(null())
};

void TouchEvent3D_obj::__register()
{
	TouchEvent3D_obj _hx_dummy;
	TouchEvent3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.TouchEvent3D",b2,59,a6,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TouchEvent3D_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TouchEvent3D_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TouchEvent3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TouchEvent3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TouchEvent3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchEvent3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchEvent3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TouchEvent3D_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_21_boot)
HXDLIN(  21)		TOUCH_END = HX_("touchEnd3d",2d,01,0b,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_22_boot)
HXDLIN(  22)		TOUCH_BEGIN = HX_("touchBegin3d",3b,c9,a5,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_23_boot)
HXDLIN(  23)		TOUCH_MOVE = HX_("touchMove3d",41,1b,e3,31);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_24_boot)
HXDLIN(  24)		TOUCH_OUT = HX_("touchOut3d",a0,70,b9,30);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b7b6c37b26c18640_25_boot)
HXDLIN(  25)		TOUCH_OVER = HX_("touchOver3d",44,20,35,fb);
            	}
}

} // end namespace away3d
} // end namespace events
