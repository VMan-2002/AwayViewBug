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
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_events_MouseEvent3D
#include <away3d/events/MouseEvent3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_53effbdb34de675f_17_new,"away3d.events.MouseEvent3D","new",0x35ce2afe,"away3d.events.MouseEvent3D.new","away3d/events/MouseEvent3D.hx",17,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_176_stopPropagation,"away3d.events.MouseEvent3D","stopPropagation",0xddd85188,"away3d.events.MouseEvent3D.stopPropagation","away3d/events/MouseEvent3D.hx",176,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_187_stopImmediatePropagation,"away3d.events.MouseEvent3D","stopImmediatePropagation",0x26240c1f,"away3d.events.MouseEvent3D.stopImmediatePropagation","away3d/events/MouseEvent3D.hx",187,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_198_clone,"away3d.events.MouseEvent3D","clone",0x951fd17b,"away3d.events.MouseEvent3D.clone","away3d/events/MouseEvent3D.hx",198,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_234_get_scenePosition,"away3d.events.MouseEvent3D","get_scenePosition",0x9f0ae08a,"away3d.events.MouseEvent3D.get_scenePosition","away3d/events/MouseEvent3D.hx",234,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_245_getScenePosition,"away3d.events.MouseEvent3D","getScenePosition",0xfed9e641,"away3d.events.MouseEvent3D.getScenePosition","away3d/events/MouseEvent3D.hx",245,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_262_get_sceneNormal,"away3d.events.MouseEvent3D","get_sceneNormal",0xd8e047c8,"away3d.events.MouseEvent3D.get_sceneNormal","away3d/events/MouseEvent3D.hx",262,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_275_getSceneNormal,"away3d.events.MouseEvent3D","getSceneNormal",0x6baba1bf,"away3d.events.MouseEvent3D.getSceneNormal","away3d/events/MouseEvent3D.hx",275,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_29_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",29,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_34_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",34,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_39_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",39,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_44_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",44,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_49_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",49,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_64_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",64,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_69_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",69,0x02bfb012)
HX_LOCAL_STACK_FRAME(_hx_pos_53effbdb34de675f_74_boot,"away3d.events.MouseEvent3D","boot",0xd6b073d4,"away3d.events.MouseEvent3D.boot","away3d/events/MouseEvent3D.hx",74,0x02bfb012)
namespace away3d{
namespace events{

void MouseEvent3D_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_17_new)
HXLINE(  23)		this->_allowedToPropagate = true;
HXLINE( 157)		super::__construct(type,true,true);
            	}

Dynamic MouseEvent3D_obj::__CreateEmpty() { return new MouseEvent3D_obj; }

void *MouseEvent3D_obj::_hx_vtable = 0;

Dynamic MouseEvent3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MouseEvent3D_obj > _hx_result = new MouseEvent3D_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MouseEvent3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x133d6bde;
	}
}

void MouseEvent3D_obj::stopPropagation(){
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_176_stopPropagation)
HXLINE( 177)		this->super::stopPropagation();
HXLINE( 178)		this->_allowedToPropagate = false;
HXLINE( 179)		if (::hx::IsNotNull( this->_parentEvent )) {
HXLINE( 180)			this->_parentEvent->stopPropagation();
            		}
            	}


void MouseEvent3D_obj::stopImmediatePropagation(){
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_187_stopImmediatePropagation)
HXLINE( 188)		this->super::stopImmediatePropagation();
HXLINE( 189)		this->_allowedToPropagate = false;
HXLINE( 190)		if (::hx::IsNotNull( this->_parentEvent )) {
HXLINE( 191)			this->_parentEvent->stopImmediatePropagation();
            		}
            	}


 ::openfl::events::Event MouseEvent3D_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_53effbdb34de675f_198_clone)
HXLINE( 199)		 ::away3d::events::MouseEvent3D result =  ::away3d::events::MouseEvent3D_obj::__alloc( HX_CTX ,this->type);
HXLINE( 206)		result->screenX = this->screenX;
HXLINE( 207)		result->screenY = this->screenY;
HXLINE( 209)		result->view = this->view;
HXLINE( 210)		result->object = this->object;
HXLINE( 211)		result->renderable = this->renderable;
HXLINE( 212)		result->material = this->material;
HXLINE( 213)		result->uv = this->uv;
HXLINE( 214)		result->localPosition = this->localPosition;
HXLINE( 215)		result->localNormal = this->localNormal;
HXLINE( 216)		result->index = this->index;
HXLINE( 217)		result->subGeometryIndex = this->subGeometryIndex;
HXLINE( 218)		result->delta = this->delta;
HXLINE( 220)		result->ctrlKey = this->ctrlKey;
HXLINE( 221)		result->shiftKey = this->shiftKey;
HXLINE( 223)		result->_parentEvent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 224)		result->_allowedToPropagate = this->_allowedToPropagate;
HXLINE( 226)		return result;
            	}


 ::openfl::geom::Vector3D MouseEvent3D_obj::get_scenePosition(){
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_234_get_scenePosition)
HXDLIN( 234)		if (::Std_obj::isOfType(this->object,( ( ::Dynamic)(::hx::ClassOf< ::away3d::containers::ObjectContainer3D >()) ))) {
HXLINE( 235)			 ::openfl::geom::Matrix3D _hx_tmp = this->object->get_sceneTransform();
HXDLIN( 235)			return ::away3d::core::math::Matrix3DUtils_obj::transformVector(_hx_tmp,this->localPosition,null());
            		}
            		else {
HXLINE( 237)			return this->localPosition;
            		}
HXLINE( 234)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent3D_obj,get_scenePosition,return )

 ::openfl::geom::Vector3D MouseEvent3D_obj::getScenePosition( ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_53effbdb34de675f_245_getScenePosition)
HXLINE( 246)		if (::hx::IsNull( v )) {
HXLINE( 246)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 247)		if (::Std_obj::isOfType(this->object,( ( ::Dynamic)(::hx::ClassOf< ::away3d::containers::ObjectContainer3D >()) ))) {
HXLINE( 248)			 ::openfl::geom::Matrix3D _hx_tmp = this->object->get_sceneTransform();
HXDLIN( 248)			::away3d::core::math::Matrix3DUtils_obj::transformVector(_hx_tmp,this->localPosition,v);
            		}
            		else {
HXLINE( 250)			v->x = this->localPosition->x;
HXLINE( 251)			v->y = this->localPosition->y;
HXLINE( 252)			v->z = this->localPosition->z;
            		}
HXLINE( 254)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MouseEvent3D_obj,getScenePosition,return )

 ::openfl::geom::Vector3D MouseEvent3D_obj::get_sceneNormal(){
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_262_get_sceneNormal)
HXDLIN( 262)		if (::Std_obj::isOfType(this->object,( ( ::Dynamic)(::hx::ClassOf< ::away3d::containers::ObjectContainer3D >()) ))) {
HXLINE( 263)			 ::openfl::geom::Matrix3D sceneNormal = this->object->get_sceneTransform();
HXDLIN( 263)			 ::openfl::geom::Vector3D sceneNormal1 = ::away3d::core::math::Matrix3DUtils_obj::deltaTransformVector(sceneNormal,this->localNormal,null());
HXLINE( 264)			sceneNormal1->normalize();
HXLINE( 265)			return sceneNormal1;
            		}
            		else {
HXLINE( 267)			return this->localNormal;
            		}
HXLINE( 262)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent3D_obj,get_sceneNormal,return )

 ::openfl::geom::Vector3D MouseEvent3D_obj::getSceneNormal( ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_53effbdb34de675f_275_getSceneNormal)
HXLINE( 276)		if (::hx::IsNull( v )) {
HXLINE( 276)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 277)		if (::Std_obj::isOfType(this->object,( ( ::Dynamic)(::hx::ClassOf< ::away3d::containers::ObjectContainer3D >()) ))) {
HXLINE( 278)			 ::openfl::geom::Matrix3D _hx_tmp = this->object->get_sceneTransform();
HXDLIN( 278)			::away3d::core::math::Matrix3DUtils_obj::deltaTransformVector(_hx_tmp,this->localNormal,v);
HXLINE( 279)			v->normalize();
            		}
            		else {
HXLINE( 281)			v->x = this->localNormal->x;
HXLINE( 282)			v->y = this->localNormal->y;
HXLINE( 283)			v->z = this->localNormal->z;
            		}
HXLINE( 285)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MouseEvent3D_obj,getSceneNormal,return )

::String MouseEvent3D_obj::MOUSE_OVER;

::String MouseEvent3D_obj::MOUSE_OUT;

::String MouseEvent3D_obj::MOUSE_UP;

::String MouseEvent3D_obj::MOUSE_DOWN;

::String MouseEvent3D_obj::MOUSE_MOVE;

::String MouseEvent3D_obj::CLICK;

::String MouseEvent3D_obj::DOUBLE_CLICK;

::String MouseEvent3D_obj::MOUSE_WHEEL;


::hx::ObjectPtr< MouseEvent3D_obj > MouseEvent3D_obj::__new(::String type) {
	::hx::ObjectPtr< MouseEvent3D_obj > __this = new MouseEvent3D_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< MouseEvent3D_obj > MouseEvent3D_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	MouseEvent3D_obj *__this = (MouseEvent3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent3D_obj), true, "away3d.events.MouseEvent3D"));
	*(void **)__this = MouseEvent3D_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

MouseEvent3D_obj::MouseEvent3D_obj()
{
}

void MouseEvent3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent3D);
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
	HX_MARK_MEMBER_NAME(delta,"delta");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent3D_obj::__Visit(HX_VISIT_PARAMS)
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
	HX_VISIT_MEMBER_NAME(delta,"delta");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MouseEvent3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"delta") ) { return ::hx::Val( delta ); }
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
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scenePosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scenePosition() ); }
		if (HX_FIELD_EQ(inName,"localPosition") ) { return ::hx::Val( localPosition ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getSceneNormal") ) { return ::hx::Val( getSceneNormal_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return ::hx::Val( stopPropagation_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sceneNormal") ) { return ::hx::Val( get_sceneNormal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subGeometryIndex") ) { return ::hx::Val( subGeometryIndex ); }
		if (HX_FIELD_EQ(inName,"getScenePosition") ) { return ::hx::Val( getScenePosition_dyn() ); }
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

::hx::Val MouseEvent3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"_parentEvent") ) { _parentEvent=inValue.Cast<  ::away3d::events::MouseEvent3D >(); return inValue; }
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

void MouseEvent3D_obj::__GetFields(Array< ::String> &outFields)
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
	outFields->push(HX_("delta",f8,e7,26,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MouseEvent3D_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(MouseEvent3D_obj,_allowedToPropagate),HX_("_allowedToPropagate",45,47,7b,65)},
	{::hx::fsObject /*  ::away3d::events::MouseEvent3D */ ,(int)offsetof(MouseEvent3D_obj,_parentEvent),HX_("_parentEvent",91,e8,88,6c)},
	{::hx::fsFloat,(int)offsetof(MouseEvent3D_obj,screenX),HX_("screenX",6c,c3,36,2a)},
	{::hx::fsFloat,(int)offsetof(MouseEvent3D_obj,screenY),HX_("screenY",6d,c3,36,2a)},
	{::hx::fsObject /*  ::away3d::containers::View3D */ ,(int)offsetof(MouseEvent3D_obj,view),HX_("view",65,32,4f,4e)},
	{::hx::fsObject /*  ::away3d::containers::ObjectContainer3D */ ,(int)offsetof(MouseEvent3D_obj,object),HX_("object",bf,7e,3f,15)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(MouseEvent3D_obj,renderable),HX_("renderable",f0,3b,99,f2)},
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(MouseEvent3D_obj,material),HX_("material",a7,5c,a5,f0)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(MouseEvent3D_obj,uv),HX_("uv",61,66,00,00)},
	{::hx::fsInt,(int)offsetof(MouseEvent3D_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(MouseEvent3D_obj,subGeometryIndex),HX_("subGeometryIndex",60,b9,24,7c)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(MouseEvent3D_obj,localPosition),HX_("localPosition",34,09,f5,43)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(MouseEvent3D_obj,localNormal),HX_("localNormal",f2,11,a4,ed)},
	{::hx::fsBool,(int)offsetof(MouseEvent3D_obj,ctrlKey),HX_("ctrlKey",b4,35,7d,61)},
	{::hx::fsBool,(int)offsetof(MouseEvent3D_obj,altKey),HX_("altKey",f6,a7,ca,44)},
	{::hx::fsBool,(int)offsetof(MouseEvent3D_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{::hx::fsInt,(int)offsetof(MouseEvent3D_obj,delta),HX_("delta",f8,e7,26,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MouseEvent3D_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MouseEvent3D_obj::MOUSE_OVER,HX_("MOUSE_OVER",0e,35,45,e6)},
	{::hx::fsString,(void *) &MouseEvent3D_obj::MOUSE_OUT,HX_("MOUSE_OUT",f4,b5,1a,11)},
	{::hx::fsString,(void *) &MouseEvent3D_obj::MOUSE_UP,HX_("MOUSE_UP",95,e3,c7,fd)},
	{::hx::fsString,(void *) &MouseEvent3D_obj::MOUSE_DOWN,HX_("MOUSE_DOWN",1c,9c,fa,de)},
	{::hx::fsString,(void *) &MouseEvent3D_obj::MOUSE_MOVE,HX_("MOUSE_MOVE",cb,86,ed,e4)},
	{::hx::fsString,(void *) &MouseEvent3D_obj::CLICK,HX_("CLICK",28,b4,4c,c6)},
	{::hx::fsString,(void *) &MouseEvent3D_obj::DOUBLE_CLICK,HX_("DOUBLE_CLICK",3a,f5,e9,68)},
	{::hx::fsString,(void *) &MouseEvent3D_obj::MOUSE_WHEEL,HX_("MOUSE_WHEEL",81,d3,3c,28)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MouseEvent3D_obj_sMemberFields[] = {
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
	HX_("delta",f8,e7,26,d7),
	HX_("stopPropagation",ea,81,71,a0),
	HX_("stopImmediatePropagation",7d,bf,66,5b),
	HX_("clone",5d,13,63,48),
	HX_("get_scenePosition",6c,6d,9a,1e),
	HX_("getScenePosition",9f,0b,4b,82),
	HX_("get_sceneNormal",2a,78,79,9b),
	HX_("getSceneNormal",9d,13,36,62),
	::String(null()) };

static void MouseEvent3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent3D_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEvent3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent3D_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
};

#endif

::hx::Class MouseEvent3D_obj::__mClass;

static ::String MouseEvent3D_obj_sStaticFields[] = {
	HX_("MOUSE_OVER",0e,35,45,e6),
	HX_("MOUSE_OUT",f4,b5,1a,11),
	HX_("MOUSE_UP",95,e3,c7,fd),
	HX_("MOUSE_DOWN",1c,9c,fa,de),
	HX_("MOUSE_MOVE",cb,86,ed,e4),
	HX_("CLICK",28,b4,4c,c6),
	HX_("DOUBLE_CLICK",3a,f5,e9,68),
	HX_("MOUSE_WHEEL",81,d3,3c,28),
	::String(null())
};

void MouseEvent3D_obj::__register()
{
	MouseEvent3D_obj _hx_dummy;
	MouseEvent3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.events.MouseEvent3D",0c,94,e9,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MouseEvent3D_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MouseEvent3D_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MouseEvent3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MouseEvent3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEvent3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEvent3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEvent3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MouseEvent3D_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_29_boot)
HXDLIN(  29)		MOUSE_OVER = HX_("mouseOver3d",2a,ef,86,8b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_34_boot)
HXDLIN(  34)		MOUSE_OUT = HX_("mouseOut3d",7a,80,f5,54);
            	}
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_39_boot)
HXDLIN(  39)		MOUSE_UP = HX_("mouseUp3d",b1,d8,ff,f9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_44_boot)
HXDLIN(  44)		MOUSE_DOWN = HX_("mouseDown3d",b8,b5,ae,29);
            	}
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_49_boot)
HXDLIN(  49)		MOUSE_MOVE = HX_("mouseMove3d",27,ea,34,c2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_64_boot)
HXDLIN(  64)		CLICK = HX_("click3d",19,4b,2c,fa);
            	}
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_69_boot)
HXDLIN(  69)		DOUBLE_CLICK = HX_("doubleClick3d",08,3c,97,99);
            	}
{
            	HX_STACKFRAME(&_hx_pos_53effbdb34de675f_74_boot)
HXDLIN(  74)		MOUSE_WHEEL = HX_("mouseWheel3d",87,4e,ca,35);
            	}
}

} // end namespace away3d
} // end namespace events
