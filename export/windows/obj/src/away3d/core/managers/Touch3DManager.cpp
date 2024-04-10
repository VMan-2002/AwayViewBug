#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_core_managers_Touch3DManager
#include <away3d/core/managers/Touch3DManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_TouchPoint
#include <away3d/core/managers/TouchPoint.h>
#endif
#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingCollisionVO
#include <away3d/core/pick/PickingCollisionVO.h>
#endif
#ifndef INCLUDED_away3d_core_pick_PickingType
#include <away3d/core/pick/PickingType.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e9aca344cc8734b_14_new,"away3d.core.managers.Touch3DManager","new",0x76d9b3b7,"away3d.core.managers.Touch3DManager.new","away3d/core/managers/Touch3DManager.hx",14,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_54_updateCollider,"away3d.core.managers.Touch3DManager","updateCollider",0x52dd1066,"away3d.core.managers.Touch3DManager.updateCollider","away3d/core/managers/Touch3DManager.hx",54,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_64_fireTouchEvents,"away3d.core.managers.Touch3DManager","fireTouchEvents",0x232351f9,"away3d.core.managers.Touch3DManager.fireTouchEvents","away3d/core/managers/Touch3DManager.hx",64,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_112_enableTouchListeners,"away3d.core.managers.Touch3DManager","enableTouchListeners",0xf0382a6c,"away3d.core.managers.Touch3DManager.enableTouchListeners","away3d/core/managers/Touch3DManager.hx",112,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_119_disableTouchListeners,"away3d.core.managers.Touch3DManager","disableTouchListeners",0x158bc6df,"away3d.core.managers.Touch3DManager.disableTouchListeners","away3d/core/managers/Touch3DManager.hx",119,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_126_dispose,"away3d.core.managers.Touch3DManager","dispose",0x65dc5b76,"away3d.core.managers.Touch3DManager.dispose","away3d/core/managers/Touch3DManager.hx",126,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_139_queueDispatch,"away3d.core.managers.Touch3DManager","queueDispatch",0x7507a782,"away3d.core.managers.Touch3DManager.queueDispatch","away3d/core/managers/Touch3DManager.hx",139,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_186_onTouchBegin,"away3d.core.managers.Touch3DManager","onTouchBegin",0xf49ee9b2,"away3d.core.managers.Touch3DManager.onTouchBegin","away3d/core/managers/Touch3DManager.hx",186,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_206_onTouchMove,"away3d.core.managers.Touch3DManager","onTouchMove",0xf3bbe7a8,"away3d.core.managers.Touch3DManager.onTouchMove","away3d/core/managers/Touch3DManager.hx",206,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_223_onTouchEnd,"away3d.core.managers.Touch3DManager","onTouchEnd",0x9d31df24,"away3d.core.managers.Touch3DManager.onTouchEnd","away3d/core/managers/Touch3DManager.hx",223,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_246_get_forceTouchMove,"away3d.core.managers.Touch3DManager","get_forceTouchMove",0x2252e257,"away3d.core.managers.Touch3DManager.get_forceTouchMove","away3d/core/managers/Touch3DManager.hx",246,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_250_set_forceTouchMove,"away3d.core.managers.Touch3DManager","set_forceTouchMove",0xff0214cb,"away3d.core.managers.Touch3DManager.set_forceTouchMove","away3d/core/managers/Touch3DManager.hx",250,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_257_get_touchPicker,"away3d.core.managers.Touch3DManager","get_touchPicker",0xb29e221b,"away3d.core.managers.Touch3DManager.get_touchPicker","away3d/core/managers/Touch3DManager.hx",257,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_261_set_touchPicker,"away3d.core.managers.Touch3DManager","set_touchPicker",0xae699f27,"away3d.core.managers.Touch3DManager.set_touchPicker","away3d/core/managers/Touch3DManager.hx",261,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_267_set_view,"away3d.core.managers.Touch3DManager","set_view",0x0fb6e8ab,"away3d.core.managers.Touch3DManager.set_view","away3d/core/managers/Touch3DManager.hx",267,0xfb55b2d8)
HX_LOCAL_STACK_FRAME(_hx_pos_1e9aca344cc8734b_28_boot,"away3d.core.managers.Touch3DManager","boot",0x7fbc8cfb,"away3d.core.managers.Touch3DManager.boot","away3d/core/managers/Touch3DManager.hx",28,0xfb55b2d8)
namespace away3d{
namespace core{
namespace managers{

void Touch3DManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1e9aca344cc8734b_14_new)
HXLINE(  36)		this->_touchPicker = ::away3d::core::pick::PickingType_obj::RAYCAST_FIRST_ENCOUNTERED;
HXLINE(  33)		this->_touchMoveEvent =  ::openfl::events::TouchEvent_obj::__alloc( HX_CTX ,HX_("touchMove",70,72,cd,0d),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  21)		this->_nullVector =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  20)		this->_updateDirty = true;
HXLINE(  41)		int length = null();
HXDLIN(  41)		bool fixed = null();
HXDLIN(  41)		::Array< ::Dynamic> array = null();
HXDLIN(  41)		this->_touchPoints =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  42)		this->_touchPointFromId =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  43)		::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  44)		::away3d::core::managers::Touch3DManager_obj::_previousCollidingObjectFromTouchId =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic Touch3DManager_obj::__CreateEmpty() { return new Touch3DManager_obj; }

void *Touch3DManager_obj::_hx_vtable = 0;

Dynamic Touch3DManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Touch3DManager_obj > _hx_result = new Touch3DManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Touch3DManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36f84281;
}

void Touch3DManager_obj::updateCollider(){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_54_updateCollider)
HXDLIN(  54)		bool _hx_tmp;
HXDLIN(  54)		if (!(this->_forceTouchMove)) {
HXDLIN(  54)			_hx_tmp = this->_updateDirty;
            		}
            		else {
HXDLIN(  54)			_hx_tmp = true;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  55)			int _g = 0;
HXDLIN(  55)			int _g1 = this->_numTouchPoints;
HXDLIN(  55)			while((_g < _g1)){
HXLINE(  55)				_g = (_g + 1);
HXDLIN(  55)				int i = (_g - 1);
HXLINE(  56)				this->_touchPoint = this->_touchPoints->get(i).StaticCast<  ::away3d::core::managers::TouchPoint >();
HXLINE(  57)				this->_collidingObject = ::away3d::core::pick::IPicker_obj::getViewCollision(this->_touchPicker,this->_touchPoint->x,this->_touchPoint->y,this->_view);
HXLINE(  58)				{
HXLINE(  58)					 ::away3d::core::pick::PickingCollisionVO v = this->_collidingObject;
HXDLIN(  58)					::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->set(this->_touchPoint->id,v);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,updateCollider,(void))

void Touch3DManager_obj::fireTouchEvents(){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_64_fireTouchEvents)
HXLINE(  66)		int i;
HXLINE(  68)		 ::away3d::events::TouchEvent3D event;
HXLINE(  69)		 ::away3d::containers::ObjectContainer3D dispatcher;
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			int _g1 = this->_numTouchPoints;
HXDLIN(  71)			while((_g < _g1)){
HXLINE(  71)				_g = (_g + 1);
HXDLIN(  71)				int i = (_g - 1);
HXLINE(  72)				this->_touchPoint = this->_touchPoints->get(i).StaticCast<  ::away3d::core::managers::TouchPoint >();
HXLINE(  74)				this->_collidingObject = ( ( ::away3d::core::pick::PickingCollisionVO)(::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(this->_touchPoint->id)) );
HXLINE(  75)				this->_previousCollidingObject = ( ( ::away3d::core::pick::PickingCollisionVO)(::away3d::core::managers::Touch3DManager_obj::_previousCollidingObjectFromTouchId->get(this->_touchPoint->id)) );
HXLINE(  76)				if (::hx::IsInstanceNotEq( this->_collidingObject,this->_previousCollidingObject )) {
HXLINE(  77)					if (::hx::IsNotNull( this->_previousCollidingObject )) {
HXLINE(  78)						this->queueDispatch(HX_("touchOut3d",a0,70,b9,30),this->_touchMoveEvent,this->_previousCollidingObject,this->_touchPoint);
            					}
HXLINE(  79)					if (::hx::IsNotNull( this->_collidingObject )) {
HXLINE(  80)						this->queueDispatch(HX_("touchOver3d",44,20,35,fb),this->_touchMoveEvent,this->_collidingObject,this->_touchPoint);
            					}
            				}
HXLINE(  83)				bool _hx_tmp;
HXDLIN(  83)				if (this->_forceTouchMove) {
HXLINE(  83)					_hx_tmp = ::hx::IsNotNull( this->_collidingObject );
            				}
            				else {
HXLINE(  83)					_hx_tmp = false;
            				}
HXDLIN(  83)				if (_hx_tmp) {
HXLINE(  84)					this->queueDispatch(HX_("touchMove3d",41,1b,e3,31),this->_touchMoveEvent,this->_collidingObject,this->_touchPoint);
            				}
            			}
            		}
HXLINE(  67)		int len = ::away3d::core::managers::Touch3DManager_obj::_queuedEvents->get_length();
HXLINE(  89)		{
HXLINE(  89)			int _g2 = 0;
HXDLIN(  89)			int _g3 = len;
HXDLIN(  89)			while((_g2 < _g3)){
HXLINE(  89)				_g2 = (_g2 + 1);
HXDLIN(  89)				int i = (_g2 - 1);
HXLINE(  92)				event = ::away3d::core::managers::Touch3DManager_obj::_queuedEvents->get(i).StaticCast<  ::away3d::events::TouchEvent3D >();
HXLINE(  93)				dispatcher = event->object;
HXLINE(  95)				while(true){
HXLINE(  95)					bool _hx_tmp;
HXDLIN(  95)					if (::hx::IsNotNull( dispatcher )) {
HXLINE(  95)						_hx_tmp = !(dispatcher->_ancestorsAllowMouseEnabled);
            					}
            					else {
HXLINE(  95)						_hx_tmp = false;
            					}
HXDLIN(  95)					if (!(_hx_tmp)) {
HXLINE(  95)						goto _hx_goto_5;
            					}
HXLINE(  96)					dispatcher = dispatcher->get_parent();
            				}
            				_hx_goto_5:;
HXLINE(  98)				if (::hx::IsNotNull( dispatcher )) {
HXLINE(  99)					dispatcher->dispatchEvent(event);
            				}
            			}
            		}
HXLINE( 101)		::away3d::core::managers::Touch3DManager_obj::_queuedEvents->set_length(0);
HXLINE( 103)		this->_updateDirty = false;
HXLINE( 105)		{
HXLINE( 105)			int _g4 = 0;
HXDLIN( 105)			int _g5 = this->_numTouchPoints;
HXDLIN( 105)			while((_g4 < _g5)){
HXLINE( 105)				_g4 = (_g4 + 1);
HXDLIN( 105)				int i = (_g4 - 1);
HXLINE( 106)				this->_touchPoint = this->_touchPoints->get(i).StaticCast<  ::away3d::core::managers::TouchPoint >();
HXLINE( 107)				{
HXLINE( 107)					::Dynamic this1 = ::away3d::core::managers::Touch3DManager_obj::_previousCollidingObjectFromTouchId;
HXDLIN( 107)					int k = this->_touchPoint->id;
HXDLIN( 107)					 ::away3d::core::pick::PickingCollisionVO v = ( ( ::away3d::core::pick::PickingCollisionVO)(::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(this->_touchPoint->id)) );
HXDLIN( 107)					( ( ::haxe::ds::IntMap)(this1) )->set(k,v);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,fireTouchEvents,(void))

void Touch3DManager_obj::enableTouchListeners( ::away3d::containers::View3D view){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_112_enableTouchListeners)
HXLINE( 113)		view->addEventListener(HX_("touchBegin",ea,cd,e6,a9),this->onTouchBegin_dyn(),null(),null(),null());
HXLINE( 114)		view->addEventListener(HX_("touchMove",70,72,cd,0d),this->onTouchMove_dyn(),null(),null(),null());
HXLINE( 115)		view->addEventListener(HX_("touchEnd",5c,c5,09,00),this->onTouchEnd_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,enableTouchListeners,(void))

void Touch3DManager_obj::disableTouchListeners( ::away3d::containers::View3D view){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_119_disableTouchListeners)
HXLINE( 120)		view->removeEventListener(HX_("touchBegin",ea,cd,e6,a9),this->onTouchBegin_dyn(),null());
HXLINE( 121)		view->removeEventListener(HX_("touchMove",70,72,cd,0d),this->onTouchMove_dyn(),null());
HXLINE( 122)		view->removeEventListener(HX_("touchEnd",5c,c5,09,00),this->onTouchEnd_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,disableTouchListeners,(void))

void Touch3DManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_126_dispose)
HXLINE( 127)		::away3d::core::pick::IPicker_obj::dispose(this->_touchPicker);
HXLINE( 128)		this->_touchPoints = null();
HXLINE( 129)		this->_touchPointFromId = null();
HXLINE( 130)		::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId = null();
HXLINE( 131)		::away3d::core::managers::Touch3DManager_obj::_previousCollidingObjectFromTouchId = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,dispose,(void))

void Touch3DManager_obj::queueDispatch(::String emitType, ::openfl::events::TouchEvent sourceEvent, ::away3d::core::pick::PickingCollisionVO collider, ::away3d::core::managers::TouchPoint touch){
            	HX_GC_STACKFRAME(&_hx_pos_1e9aca344cc8734b_139_queueDispatch)
HXLINE( 141)		 ::away3d::events::TouchEvent3D event =  ::away3d::events::TouchEvent3D_obj::__alloc( HX_CTX ,emitType);
HXLINE( 144)		event->ctrlKey = sourceEvent->ctrlKey;
HXLINE( 145)		event->altKey = sourceEvent->altKey;
HXLINE( 146)		event->shiftKey = sourceEvent->shiftKey;
HXLINE( 147)		event->screenX = touch->x;
HXLINE( 148)		event->screenY = touch->y;
HXLINE( 149)		event->touchPointID = touch->id;
HXLINE( 152)		if (::hx::IsNotNull( collider )) {
HXLINE( 154)			event->object = collider->entity;
HXLINE( 155)			event->renderable = collider->renderable;
HXLINE( 157)			event->uv = collider->uv;
HXLINE( 159)			 ::openfl::geom::Vector3D _hx_tmp;
HXDLIN( 159)			if (::hx::IsNotNull( collider->localPosition )) {
HXLINE( 159)				_hx_tmp = collider->localPosition->clone();
            			}
            			else {
HXLINE( 159)				_hx_tmp = null();
            			}
HXDLIN( 159)			event->localPosition = _hx_tmp;
HXLINE( 161)			 ::openfl::geom::Vector3D _hx_tmp1;
HXDLIN( 161)			if (::hx::IsNotNull( collider->localNormal )) {
HXLINE( 161)				_hx_tmp1 = collider->localNormal->clone();
            			}
            			else {
HXLINE( 161)				_hx_tmp1 = null();
            			}
HXDLIN( 161)			event->localNormal = _hx_tmp1;
HXLINE( 163)			event->index = collider->index;
HXLINE( 165)			event->subGeometryIndex = collider->subGeometryIndex;
            		}
            		else {
HXLINE( 169)			event->uv = null();
HXLINE( 170)			event->object = null();
HXLINE( 171)			event->localPosition = this->_nullVector;
HXLINE( 172)			event->localNormal = this->_nullVector;
HXLINE( 173)			event->index = 0;
HXLINE( 174)			event->subGeometryIndex = 0;
            		}
HXLINE( 178)		::away3d::core::managers::Touch3DManager_obj::_queuedEvents->push(event);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Touch3DManager_obj,queueDispatch,(void))

void Touch3DManager_obj::onTouchBegin( ::openfl::events::TouchEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_1e9aca344cc8734b_186_onTouchBegin)
HXLINE( 188)		 ::away3d::core::managers::TouchPoint touch =  ::away3d::core::managers::TouchPoint_obj::__alloc( HX_CTX );
HXLINE( 189)		touch->id = event->touchPointID;
HXLINE( 190)		touch->x = event->stageX;
HXLINE( 191)		touch->y = event->stageY;
HXLINE( 192)		this->_numTouchPoints++;
HXLINE( 193)		this->_touchPoints->push(touch);
HXLINE( 194)		this->_touchPointFromId->set(touch->id,touch);
HXLINE( 196)		this->updateCollider();
HXLINE( 198)		this->_collidingObject = ( ( ::away3d::core::pick::PickingCollisionVO)(::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(touch->id)) );
HXLINE( 199)		if (::hx::IsNotNull( this->_collidingObject )) {
HXLINE( 200)			this->queueDispatch(HX_("touchBegin3d",3b,c9,a5,0b),event,this->_collidingObject,touch);
            		}
HXLINE( 202)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,onTouchBegin,(void))

void Touch3DManager_obj::onTouchMove( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_206_onTouchMove)
HXLINE( 208)		 ::away3d::core::managers::TouchPoint touch = ( ( ::away3d::core::managers::TouchPoint)(this->_touchPointFromId->get(event->touchPointID)) );
HXLINE( 210)		if (::hx::IsNull( touch )) {
HXLINE( 210)			return;
            		}
HXLINE( 212)		touch->x = event->stageX;
HXLINE( 213)		touch->y = event->stageY;
HXLINE( 215)		this->_collidingObject = ( ( ::away3d::core::pick::PickingCollisionVO)(::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(touch->id)) );
HXLINE( 216)		if (::hx::IsNotNull( this->_collidingObject )) {
HXLINE( 217)			this->queueDispatch(HX_("touchMove3d",41,1b,e3,31),(this->_touchMoveEvent = event),this->_collidingObject,touch);
            		}
HXLINE( 219)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,onTouchMove,(void))

void Touch3DManager_obj::onTouchEnd( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_223_onTouchEnd)
HXLINE( 225)		 ::away3d::core::managers::TouchPoint touch = ( ( ::away3d::core::managers::TouchPoint)(this->_touchPointFromId->get(event->touchPointID)) );
HXLINE( 227)		if (::hx::IsNull( touch )) {
HXLINE( 227)			return;
            		}
HXLINE( 229)		this->_collidingObject = ( ( ::away3d::core::pick::PickingCollisionVO)(::away3d::core::managers::Touch3DManager_obj::_collidingObjectFromTouchId->get(touch->id)) );
HXLINE( 230)		if (::hx::IsNotNull( this->_collidingObject )) {
HXLINE( 231)			this->queueDispatch(HX_("touchEnd3d",2d,01,0b,6a),event,this->_collidingObject,touch);
            		}
HXLINE( 233)		this->_touchPointFromId->remove(touch->id);
HXLINE( 234)		this->_numTouchPoints--;
HXLINE( 235)		{
HXLINE( 235)			::Dynamic this1 = this->_touchPoints;
HXDLIN( 235)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 235)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),this->_touchPoints->indexOf(touch,0),::hx::paccDynamic);
HXDLIN( 235)			{
HXLINE( 235)				int _g_current = 0;
HXDLIN( 235)				::cpp::VirtualArray _g_args = this2;
HXDLIN( 235)				while((_g_current < _g_args->get_length())){
HXLINE( 235)					_g_current = (_g_current + 1);
HXDLIN( 235)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 235)					( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::away3d::core::managers::TouchPoint)(item) ));
HXDLIN( 235)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 235)			( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            		}
HXLINE( 237)		this->_updateDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,onTouchEnd,(void))

bool Touch3DManager_obj::get_forceTouchMove(){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_246_get_forceTouchMove)
HXDLIN( 246)		return this->_forceTouchMove;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,get_forceTouchMove,return )

bool Touch3DManager_obj::set_forceTouchMove(bool value){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_250_set_forceTouchMove)
HXLINE( 251)		this->_forceTouchMove = value;
HXLINE( 252)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,set_forceTouchMove,return )

::Dynamic Touch3DManager_obj::get_touchPicker(){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_257_get_touchPicker)
HXDLIN( 257)		return this->_touchPicker;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Touch3DManager_obj,get_touchPicker,return )

::Dynamic Touch3DManager_obj::set_touchPicker(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_261_set_touchPicker)
HXLINE( 262)		this->_touchPicker = value;
HXLINE( 263)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,set_touchPicker,return )

 ::away3d::containers::View3D Touch3DManager_obj::set_view( ::away3d::containers::View3D value){
            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_267_set_view)
HXLINE( 268)		this->_view = value;
HXLINE( 269)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Touch3DManager_obj,set_view,return )

 ::haxe::ds::IntMap Touch3DManager_obj::_collidingObjectFromTouchId;

 ::haxe::ds::IntMap Touch3DManager_obj::_previousCollidingObjectFromTouchId;

 ::openfl::_Vector::ObjectVector Touch3DManager_obj::_queuedEvents;


::hx::ObjectPtr< Touch3DManager_obj > Touch3DManager_obj::__new() {
	::hx::ObjectPtr< Touch3DManager_obj > __this = new Touch3DManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Touch3DManager_obj > Touch3DManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Touch3DManager_obj *__this = (Touch3DManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Touch3DManager_obj), true, "away3d.core.managers.Touch3DManager"));
	*(void **)__this = Touch3DManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Touch3DManager_obj::Touch3DManager_obj()
{
}

void Touch3DManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Touch3DManager);
	HX_MARK_MEMBER_NAME(_updateDirty,"_updateDirty");
	HX_MARK_MEMBER_NAME(_nullVector,"_nullVector");
	HX_MARK_MEMBER_NAME(_numTouchPoints,"_numTouchPoints");
	HX_MARK_MEMBER_NAME(_touchPoint,"_touchPoint");
	HX_MARK_MEMBER_NAME(_collidingObject,"_collidingObject");
	HX_MARK_MEMBER_NAME(_previousCollidingObject,"_previousCollidingObject");
	HX_MARK_MEMBER_NAME(_touchPoints,"_touchPoints");
	HX_MARK_MEMBER_NAME(_touchPointFromId,"_touchPointFromId");
	HX_MARK_MEMBER_NAME(_touchMoveEvent,"_touchMoveEvent");
	HX_MARK_MEMBER_NAME(_forceTouchMove,"_forceTouchMove");
	HX_MARK_MEMBER_NAME(_touchPicker,"_touchPicker");
	HX_MARK_MEMBER_NAME(_view,"_view");
	HX_MARK_END_CLASS();
}

void Touch3DManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_updateDirty,"_updateDirty");
	HX_VISIT_MEMBER_NAME(_nullVector,"_nullVector");
	HX_VISIT_MEMBER_NAME(_numTouchPoints,"_numTouchPoints");
	HX_VISIT_MEMBER_NAME(_touchPoint,"_touchPoint");
	HX_VISIT_MEMBER_NAME(_collidingObject,"_collidingObject");
	HX_VISIT_MEMBER_NAME(_previousCollidingObject,"_previousCollidingObject");
	HX_VISIT_MEMBER_NAME(_touchPoints,"_touchPoints");
	HX_VISIT_MEMBER_NAME(_touchPointFromId,"_touchPointFromId");
	HX_VISIT_MEMBER_NAME(_touchMoveEvent,"_touchMoveEvent");
	HX_VISIT_MEMBER_NAME(_forceTouchMove,"_forceTouchMove");
	HX_VISIT_MEMBER_NAME(_touchPicker,"_touchPicker");
	HX_VISIT_MEMBER_NAME(_view,"_view");
}

::hx::Val Touch3DManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { return ::hx::Val( _view ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_view") ) { return ::hx::Val( set_view_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return ::hx::Val( onTouchEnd_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touchPicker() ); }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { return ::hx::Val( _nullVector ); }
		if (HX_FIELD_EQ(inName,"_touchPoint") ) { return ::hx::Val( _touchPoint ); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return ::hx::Val( onTouchMove_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { return ::hx::Val( _updateDirty ); }
		if (HX_FIELD_EQ(inName,"_touchPoints") ) { return ::hx::Val( _touchPoints ); }
		if (HX_FIELD_EQ(inName,"_touchPicker") ) { return ::hx::Val( _touchPicker ); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return ::hx::Val( onTouchBegin_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"queueDispatch") ) { return ::hx::Val( queueDispatch_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forceTouchMove") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_forceTouchMove() ); }
		if (HX_FIELD_EQ(inName,"updateCollider") ) { return ::hx::Val( updateCollider_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numTouchPoints") ) { return ::hx::Val( _numTouchPoints ); }
		if (HX_FIELD_EQ(inName,"_touchMoveEvent") ) { return ::hx::Val( _touchMoveEvent ); }
		if (HX_FIELD_EQ(inName,"_forceTouchMove") ) { return ::hx::Val( _forceTouchMove ); }
		if (HX_FIELD_EQ(inName,"fireTouchEvents") ) { return ::hx::Val( fireTouchEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_touchPicker") ) { return ::hx::Val( get_touchPicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_touchPicker") ) { return ::hx::Val( set_touchPicker_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { return ::hx::Val( _collidingObject ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_touchPointFromId") ) { return ::hx::Val( _touchPointFromId ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_forceTouchMove") ) { return ::hx::Val( get_forceTouchMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceTouchMove") ) { return ::hx::Val( set_forceTouchMove_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"enableTouchListeners") ) { return ::hx::Val( enableTouchListeners_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"disableTouchListeners") ) { return ::hx::Val( disableTouchListeners_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { return ::hx::Val( _previousCollidingObject ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Touch3DManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { outValue = ( _queuedEvents ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_collidingObjectFromTouchId") ) { outValue = ( _collidingObjectFromTouchId ); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_previousCollidingObjectFromTouchId") ) { outValue = ( _previousCollidingObjectFromTouchId ); return true; }
	}
	return false;
}

::hx::Val Touch3DManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_view(inValue.Cast<  ::away3d::containers::View3D >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { _view=inValue.Cast<  ::away3d::containers::View3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"touchPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_touchPicker(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_nullVector") ) { _nullVector=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchPoint") ) { _touchPoint=inValue.Cast<  ::away3d::core::managers::TouchPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateDirty") ) { _updateDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchPoints") ) { _touchPoints=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchPicker") ) { _touchPicker=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forceTouchMove") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceTouchMove(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numTouchPoints") ) { _numTouchPoints=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchMoveEvent") ) { _touchMoveEvent=inValue.Cast<  ::openfl::events::TouchEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_forceTouchMove") ) { _forceTouchMove=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_collidingObject") ) { _collidingObject=inValue.Cast<  ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_touchPointFromId") ) { _touchPointFromId=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_previousCollidingObject") ) { _previousCollidingObject=inValue.Cast<  ::away3d::core::pick::PickingCollisionVO >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Touch3DManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_queuedEvents") ) { _queuedEvents=ioValue.Cast<  ::openfl::_Vector::ObjectVector >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_collidingObjectFromTouchId") ) { _collidingObjectFromTouchId=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"_previousCollidingObjectFromTouchId") ) { _previousCollidingObjectFromTouchId=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

void Touch3DManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("forceTouchMove",05,8b,c9,79));
	outFields->push(HX_("touchPicker",ad,60,03,e4));
	outFields->push(HX_("view",65,32,4f,4e));
	outFields->push(HX_("_updateDirty",4a,67,72,25));
	outFields->push(HX_("_nullVector",c9,af,26,53));
	outFields->push(HX_("_numTouchPoints",3b,33,ec,0f));
	outFields->push(HX_("_touchPoint",30,65,aa,92));
	outFields->push(HX_("_collidingObject",db,07,45,31));
	outFields->push(HX_("_previousCollidingObject",64,92,64,3d));
	outFields->push(HX_("_touchPoints",43,25,6e,c2));
	outFields->push(HX_("_touchPointFromId",35,71,65,9c));
	outFields->push(HX_("_touchMoveEvent",29,38,80,94));
	outFields->push(HX_("_forceTouchMove",a4,d3,29,c3));
	outFields->push(HX_("_touchPicker",ae,0e,0d,4a));
	outFields->push(HX_("_view",44,4e,60,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Touch3DManager_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Touch3DManager_obj,_updateDirty),HX_("_updateDirty",4a,67,72,25)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Touch3DManager_obj,_nullVector),HX_("_nullVector",c9,af,26,53)},
	{::hx::fsInt,(int)offsetof(Touch3DManager_obj,_numTouchPoints),HX_("_numTouchPoints",3b,33,ec,0f)},
	{::hx::fsObject /*  ::away3d::core::managers::TouchPoint */ ,(int)offsetof(Touch3DManager_obj,_touchPoint),HX_("_touchPoint",30,65,aa,92)},
	{::hx::fsObject /*  ::away3d::core::pick::PickingCollisionVO */ ,(int)offsetof(Touch3DManager_obj,_collidingObject),HX_("_collidingObject",db,07,45,31)},
	{::hx::fsObject /*  ::away3d::core::pick::PickingCollisionVO */ ,(int)offsetof(Touch3DManager_obj,_previousCollidingObject),HX_("_previousCollidingObject",64,92,64,3d)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Touch3DManager_obj,_touchPoints),HX_("_touchPoints",43,25,6e,c2)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Touch3DManager_obj,_touchPointFromId),HX_("_touchPointFromId",35,71,65,9c)},
	{::hx::fsObject /*  ::openfl::events::TouchEvent */ ,(int)offsetof(Touch3DManager_obj,_touchMoveEvent),HX_("_touchMoveEvent",29,38,80,94)},
	{::hx::fsBool,(int)offsetof(Touch3DManager_obj,_forceTouchMove),HX_("_forceTouchMove",a4,d3,29,c3)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Touch3DManager_obj,_touchPicker),HX_("_touchPicker",ae,0e,0d,4a)},
	{::hx::fsObject /*  ::away3d::containers::View3D */ ,(int)offsetof(Touch3DManager_obj,_view),HX_("_view",44,4e,60,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Touch3DManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Touch3DManager_obj::_collidingObjectFromTouchId,HX_("_collidingObjectFromTouchId",15,21,08,cb)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Touch3DManager_obj::_previousCollidingObjectFromTouchId,HX_("_previousCollidingObjectFromTouchId",2c,81,d2,e5)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(void *) &Touch3DManager_obj::_queuedEvents,HX_("_queuedEvents",0b,70,93,ad)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Touch3DManager_obj_sMemberFields[] = {
	HX_("_updateDirty",4a,67,72,25),
	HX_("_nullVector",c9,af,26,53),
	HX_("_numTouchPoints",3b,33,ec,0f),
	HX_("_touchPoint",30,65,aa,92),
	HX_("_collidingObject",db,07,45,31),
	HX_("_previousCollidingObject",64,92,64,3d),
	HX_("_touchPoints",43,25,6e,c2),
	HX_("_touchPointFromId",35,71,65,9c),
	HX_("_touchMoveEvent",29,38,80,94),
	HX_("_forceTouchMove",a4,d3,29,c3),
	HX_("_touchPicker",ae,0e,0d,4a),
	HX_("_view",44,4e,60,01),
	HX_("updateCollider",5d,d2,ff,fe),
	HX_("fireTouchEvents",22,48,6a,15),
	HX_("enableTouchListeners",a3,3f,97,2f),
	HX_("disableTouchListeners",c8,41,5f,49),
	HX_("dispose",9f,80,4c,bb),
	HX_("queueDispatch",6b,91,91,c1),
	HX_("onTouchBegin",e9,6f,2a,82),
	HX_("onTouchMove",51,55,10,30),
	HX_("onTouchEnd",9b,99,c0,dd),
	HX_("get_forceTouchMove",ce,6b,63,15),
	HX_("set_forceTouchMove",42,9e,12,f2),
	HX_("get_touchPicker",44,18,e5,a4),
	HX_("set_touchPicker",50,95,b0,a0),
	HX_("set_view",62,47,67,7c),
	::String(null()) };

static void Touch3DManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch3DManager_obj::_collidingObjectFromTouchId,"_collidingObjectFromTouchId");
	HX_MARK_MEMBER_NAME(Touch3DManager_obj::_previousCollidingObjectFromTouchId,"_previousCollidingObjectFromTouchId");
	HX_MARK_MEMBER_NAME(Touch3DManager_obj::_queuedEvents,"_queuedEvents");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Touch3DManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch3DManager_obj::_collidingObjectFromTouchId,"_collidingObjectFromTouchId");
	HX_VISIT_MEMBER_NAME(Touch3DManager_obj::_previousCollidingObjectFromTouchId,"_previousCollidingObjectFromTouchId");
	HX_VISIT_MEMBER_NAME(Touch3DManager_obj::_queuedEvents,"_queuedEvents");
};

#endif

::hx::Class Touch3DManager_obj::__mClass;

static ::String Touch3DManager_obj_sStaticFields[] = {
	HX_("_collidingObjectFromTouchId",15,21,08,cb),
	HX_("_previousCollidingObjectFromTouchId",2c,81,d2,e5),
	HX_("_queuedEvents",0b,70,93,ad),
	::String(null())
};

void Touch3DManager_obj::__register()
{
	Touch3DManager_obj _hx_dummy;
	Touch3DManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.managers.Touch3DManager",45,0c,82,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Touch3DManager_obj::__GetStatic;
	__mClass->mSetStaticField = &Touch3DManager_obj::__SetStatic;
	__mClass->mMarkFunc = Touch3DManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Touch3DManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Touch3DManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Touch3DManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Touch3DManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Touch3DManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Touch3DManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Touch3DManager_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::ObjectVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1e9aca344cc8734b_28_boot)
HXDLIN(  28)			int length = null();
HXDLIN(  28)			bool fixed = null();
HXDLIN(  28)			::Array< ::Dynamic> array = null();
HXDLIN(  28)			return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1e9aca344cc8734b_28_boot)
HXDLIN(  28)		_queuedEvents = ( ( ::openfl::_Vector::ObjectVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
