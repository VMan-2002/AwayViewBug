#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_animators_AnimatorBase
#include <away3d/animators/AnimatorBase.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
#endif
#ifndef INCLUDED_away3d_animators_states_IAnimationState
#include <away3d/animators/states/IAnimationState.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_Mesh
#include <away3d/entities/Mesh.h>
#endif
#ifndef INCLUDED_away3d_events_AnimatorEvent
#include <away3d/events/AnimatorEvent.h>
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
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_774d7d57b4a99589_17_new,"away3d.animators.AnimatorBase","new",0x9dd6a9fb,"away3d.animators.AnimatorBase.new","away3d/animators/AnimatorBase.hx",17,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_54_getAnimationState,"away3d.animators.AnimatorBase","getAnimationState",0x02690a7e,"away3d.animators.AnimatorBase.getAnimationState","away3d/animators/AnimatorBase.hx",54,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_65_getAnimationStateByName,"away3d.animators.AnimatorBase","getAnimationStateByName",0xc83f9ce0,"away3d.animators.AnimatorBase.getAnimationStateByName","away3d/animators/AnimatorBase.hx",65,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_76_get_absoluteTime,"away3d.animators.AnimatorBase","get_absoluteTime",0x6293bc32,"away3d.animators.AnimatorBase.get_absoluteTime","away3d/animators/AnimatorBase.hx",76,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_84_get_animationSet,"away3d.animators.AnimatorBase","get_animationSet",0x12a88d0c,"away3d.animators.AnimatorBase.get_animationSet","away3d/animators/AnimatorBase.hx",84,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_92_get_activeState,"away3d.animators.AnimatorBase","get_activeState",0xdfa2841d,"away3d.animators.AnimatorBase.get_activeState","away3d/animators/AnimatorBase.hx",92,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_100_get_activeAnimation,"away3d.animators.AnimatorBase","get_activeAnimation",0x4339f310,"away3d.animators.AnimatorBase.get_activeAnimation","away3d/animators/AnimatorBase.hx",100,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_108_get_activeAnimationName,"away3d.animators.AnimatorBase","get_activeAnimationName",0x9cf1597b,"away3d.animators.AnimatorBase.get_activeAnimationName","away3d/animators/AnimatorBase.hx",108,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_121_get_autoUpdate,"away3d.animators.AnimatorBase","get_autoUpdate",0xa9574566,"away3d.animators.AnimatorBase.get_autoUpdate","away3d/animators/AnimatorBase.hx",121,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_125_set_autoUpdate,"away3d.animators.AnimatorBase","set_autoUpdate",0xc9772dda,"away3d.animators.AnimatorBase.set_autoUpdate","away3d/animators/AnimatorBase.hx",125,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_144_get_time,"away3d.animators.AnimatorBase","get_time",0x6292fc1b,"away3d.animators.AnimatorBase.get_time","away3d/animators/AnimatorBase.hx",144,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_148_set_time,"away3d.animators.AnimatorBase","set_time",0x10f0558f,"away3d.animators.AnimatorBase.set_time","away3d/animators/AnimatorBase.hx",148,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_163_phase,"away3d.animators.AnimatorBase","phase",0xe909de96,"away3d.animators.AnimatorBase.phase","away3d/animators/AnimatorBase.hx",163,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_182_get_playbackSpeed,"away3d.animators.AnimatorBase","get_playbackSpeed",0x58c3d19e,"away3d.animators.AnimatorBase.get_playbackSpeed","away3d/animators/AnimatorBase.hx",182,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_186_set_playbackSpeed,"away3d.animators.AnimatorBase","set_playbackSpeed",0x7c31a9aa,"away3d.animators.AnimatorBase.set_playbackSpeed","away3d/animators/AnimatorBase.hx",186,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_195_start,"away3d.animators.AnimatorBase","start",0xab2c2abd,"away3d.animators.AnimatorBase.start","away3d/animators/AnimatorBase.hx",195,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_223_stop,"away3d.animators.AnimatorBase","stop",0x81577e07,"away3d.animators.AnimatorBase.stop","away3d/animators/AnimatorBase.hx",223,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_249_update,"away3d.animators.AnimatorBase","update",0x9c845f4e,"away3d.animators.AnimatorBase.update","away3d/animators/AnimatorBase.hx",249,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_259_reset,"away3d.animators.AnimatorBase","reset",0x0de9002a,"away3d.animators.AnimatorBase.reset","away3d/animators/AnimatorBase.hx",259,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_269_addOwner,"away3d.animators.AnimatorBase","addOwner",0x47af32d7,"away3d.animators.AnimatorBase.addOwner","away3d/animators/AnimatorBase.hx",269,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_279_removeOwner,"away3d.animators.AnimatorBase","removeOwner",0x8058e1ea,"away3d.animators.AnimatorBase.removeOwner","away3d/animators/AnimatorBase.hx",279,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_288_updateDeltaTime,"away3d.animators.AnimatorBase","updateDeltaTime",0x835762f7,"away3d.animators.AnimatorBase.updateDeltaTime","away3d/animators/AnimatorBase.hx",288,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_302_onEnterFrame,"away3d.animators.AnimatorBase","onEnterFrame",0x098440f9,"away3d.animators.AnimatorBase.onEnterFrame","away3d/animators/AnimatorBase.hx",302,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_306_applyPositionDelta,"away3d.animators.AnimatorBase","applyPositionDelta",0x20875d06,"away3d.animators.AnimatorBase.applyPositionDelta","away3d/animators/AnimatorBase.hx",306,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_324_dispatchCycleEvent,"away3d.animators.AnimatorBase","dispatchCycleEvent",0x21f34db3,"away3d.animators.AnimatorBase.dispatchCycleEvent","away3d/animators/AnimatorBase.hx",324,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_336_dispose,"away3d.animators.AnimatorBase","dispose",0x74cbc3ba,"away3d.animators.AnimatorBase.dispose","away3d/animators/AnimatorBase.hx",336,0xd8da7cd3)
HX_LOCAL_STACK_FRAME(_hx_pos_774d7d57b4a99589_344_get_assetType,"away3d.animators.AnimatorBase","get_assetType",0x56aa1dfc,"away3d.animators.AnimatorBase.get_assetType","away3d/animators/AnimatorBase.hx",344,0xd8da7cd3)
namespace away3d{
namespace animators{

void AnimatorBase_obj::__construct(::Dynamic animationSet){
            	HX_GC_STACKFRAME(&_hx_pos_774d7d57b4a99589_17_new)
HXLINE(  51)		this->updatePosition = true;
HXLINE(  44)		this->_animationStates =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  43)		this->_absoluteTime = 0;
HXLINE(  39)		int length = null();
HXDLIN(  39)		bool fixed = null();
HXDLIN(  39)		::Array< ::Dynamic> array = null();
HXDLIN(  39)		this->_owners =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  36)		this->_playbackSpeed = ((Float)1);
HXLINE(  35)		this->_time = 0;
HXLINE(  31)		this->_autoUpdate = true;
HXLINE(  29)		this->_broadcaster =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 173)		this->_animationSet = animationSet;
HXLINE( 174)		super::__construct(null());
            	}

Dynamic AnimatorBase_obj::__CreateEmpty() { return new AnimatorBase_obj; }

void *AnimatorBase_obj::_hx_vtable = 0;

Dynamic AnimatorBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimatorBase_obj > _hx_result = new AnimatorBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnimatorBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x22989705) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x22989705;
		}
	} else {
		return inClassId==(int)0x37f46043;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_animators_AnimatorBase__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::animators::AnimatorBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::animators::AnimatorBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::animators::AnimatorBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::animators::AnimatorBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::animators::AnimatorBase_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_animators_AnimatorBase__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::animators::AnimatorBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::animators::AnimatorBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::animators::AnimatorBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::animators::AnimatorBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::animators::AnimatorBase_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::animators::AnimatorBase_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::animators::AnimatorBase_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::animators::AnimatorBase_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::animators::AnimatorBase_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::animators::AnimatorBase_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::animators::AnimatorBase_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::animators::AnimatorBase_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::animators::AnimatorBase_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::animators::AnimatorBase_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::animators::AnimatorBase_obj::dispose,
};

void *AnimatorBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_animators_AnimatorBase__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_animators_AnimatorBase__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

::Dynamic AnimatorBase_obj::getAnimationState( ::away3d::animators::nodes::AnimationNodeBase node){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_54_getAnimationState)
HXLINE(  55)		 ::Dynamic stateConstructor = node->get_stateConstructor();
HXLINE(  57)		if (!(this->_animationStates->exists(node))) {
HXLINE(  58)			::Dynamic this1 = this->_animationStates;
HXDLIN(  58)			( ( ::haxe::ds::ObjectMap)(this1) )->set(node,stateConstructor(::hx::ObjectPtr<OBJ_>(this),node));
            		}
HXLINE(  60)		return this->_animationStates->get(node);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,getAnimationState,return )

::Dynamic AnimatorBase_obj::getAnimationStateByName(::String name){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_65_getAnimationStateByName)
HXDLIN(  65)		return this->getAnimationState(::away3d::animators::IAnimationSet_obj::getAnimation(this->_animationSet,name));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,getAnimationStateByName,return )

int AnimatorBase_obj::get_absoluteTime(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_76_get_absoluteTime)
HXDLIN(  76)		return this->_absoluteTime;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_absoluteTime,return )

::Dynamic AnimatorBase_obj::get_animationSet(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_84_get_animationSet)
HXDLIN(  84)		return this->_animationSet;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_animationSet,return )

::Dynamic AnimatorBase_obj::get_activeState(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_92_get_activeState)
HXDLIN(  92)		return this->_activeState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_activeState,return )

 ::away3d::animators::nodes::AnimationNodeBase AnimatorBase_obj::get_activeAnimation(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_100_get_activeAnimation)
HXDLIN( 100)		return ::away3d::animators::IAnimationSet_obj::getAnimation(this->_animationSet,this->_activeAnimationName);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_activeAnimation,return )

::String AnimatorBase_obj::get_activeAnimationName(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_108_get_activeAnimationName)
HXDLIN( 108)		return this->_activeAnimationName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_activeAnimationName,return )

bool AnimatorBase_obj::get_autoUpdate(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_121_get_autoUpdate)
HXDLIN( 121)		return this->_autoUpdate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_autoUpdate,return )

bool AnimatorBase_obj::set_autoUpdate(bool value){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_125_set_autoUpdate)
HXLINE( 126)		if ((this->_autoUpdate == value)) {
HXLINE( 127)			return value;
            		}
HXLINE( 129)		this->_autoUpdate = value;
HXLINE( 131)		if (this->_autoUpdate) {
HXLINE( 132)			this->start();
            		}
            		else {
HXLINE( 134)			this->stop();
            		}
HXLINE( 136)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,set_autoUpdate,return )

int AnimatorBase_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_144_get_time)
HXDLIN( 144)		return this->_time;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_time,return )

int AnimatorBase_obj::set_time(int value){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_148_set_time)
HXLINE( 149)		if ((this->_time == value)) {
HXLINE( 150)			return value;
            		}
HXLINE( 152)		this->update(value);
HXLINE( 153)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,set_time,return )

void AnimatorBase_obj::phase(Float value){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_163_phase)
HXDLIN( 163)		::away3d::animators::states::IAnimationState_obj::phase(this->_activeState,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,phase,(void))

Float AnimatorBase_obj::get_playbackSpeed(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_182_get_playbackSpeed)
HXDLIN( 182)		return this->_playbackSpeed;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_playbackSpeed,return )

Float AnimatorBase_obj::set_playbackSpeed(Float value){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_186_set_playbackSpeed)
HXLINE( 187)		this->_playbackSpeed = value;
HXLINE( 188)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,set_playbackSpeed,return )

void AnimatorBase_obj::start(){
            	HX_GC_STACKFRAME(&_hx_pos_774d7d57b4a99589_195_start)
HXLINE( 196)		bool _hx_tmp;
HXDLIN( 196)		if (!(this->_isPlaying)) {
HXLINE( 196)			_hx_tmp = !(this->_autoUpdate);
            		}
            		else {
HXLINE( 196)			_hx_tmp = true;
            		}
HXDLIN( 196)		if (_hx_tmp) {
HXLINE( 197)			return;
            		}
HXLINE( 199)		this->_time = (this->_absoluteTime = ::openfl::Lib_obj::getTimer());
HXLINE( 201)		this->_isPlaying = true;
HXLINE( 203)		if (!(this->_broadcaster->hasEventListener(HX_("enterFrame",f5,03,50,02)))) {
HXLINE( 204)			this->_broadcaster->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null(),null(),null());
            		}
HXLINE( 206)		if (!(this->hasEventListener(HX_("start",62,74,0b,84)))) {
HXLINE( 207)			return;
            		}
HXLINE( 209)		if (::hx::IsNull( this->_startEvent )) {
HXLINE( 210)			this->_startEvent =  ::away3d::events::AnimatorEvent_obj::__alloc( HX_CTX ,HX_("start",62,74,0b,84),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 212)		this->dispatchEvent(this->_startEvent);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,start,(void))

void AnimatorBase_obj::stop(){
            	HX_GC_STACKFRAME(&_hx_pos_774d7d57b4a99589_223_stop)
HXLINE( 224)		if (!(this->_isPlaying)) {
HXLINE( 225)			return;
            		}
HXLINE( 227)		this->_isPlaying = false;
HXLINE( 229)		if (this->_broadcaster->hasEventListener(HX_("enterFrame",f5,03,50,02))) {
HXLINE( 230)			this->_broadcaster->removeEventListener(HX_("enterFrame",f5,03,50,02),this->onEnterFrame_dyn(),null());
            		}
HXLINE( 232)		if (!(this->hasEventListener(HX_("stop",02,f0,5b,4c)))) {
HXLINE( 233)			return;
            		}
HXLINE( 235)		if (::hx::IsNull( this->_stopEvent )) {
HXLINE( 236)			this->_startEvent = (this->_stopEvent =  ::away3d::events::AnimatorEvent_obj::__alloc( HX_CTX ,HX_("stop",02,f0,5b,4c),::hx::ObjectPtr<OBJ_>(this)));
            		}
HXLINE( 238)		this->dispatchEvent(this->_stopEvent);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,stop,(void))

void AnimatorBase_obj::update(int time){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_249_update)
HXLINE( 250)		int dt = (time - this->_time);
HXDLIN( 250)		int dt1 = ::Std_obj::_hx_int((( (Float)(dt) ) * this->get_playbackSpeed()));
HXLINE( 252)		this->updateDeltaTime(dt1);
HXLINE( 254)		this->_time = time;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,update,(void))

void AnimatorBase_obj::reset(::String name,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_259_reset)
HXDLIN( 259)		::Dynamic _hx_tmp = this->getAnimationState(::away3d::animators::IAnimationSet_obj::getAnimation(this->_animationSet,name));
HXDLIN( 259)		::away3d::animators::states::IAnimationState_obj::offset(_hx_tmp,(offset + this->_absoluteTime));
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimatorBase_obj,reset,(void))

void AnimatorBase_obj::addOwner( ::away3d::entities::Mesh mesh){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_269_addOwner)
HXDLIN( 269)		this->_owners->push(mesh);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,addOwner,(void))

void AnimatorBase_obj::removeOwner( ::away3d::entities::Mesh mesh){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_279_removeOwner)
HXDLIN( 279)		::Dynamic this1 = this->_owners;
HXDLIN( 279)		::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 279)		this1->__SetField(HX_("__tempIndex",3e,e8,54,22),this->_owners->indexOf(mesh,0),::hx::paccDynamic);
HXDLIN( 279)		{
HXDLIN( 279)			int _g_current = 0;
HXDLIN( 279)			::cpp::VirtualArray _g_args = this2;
HXDLIN( 279)			while((_g_current < _g_args->get_length())){
HXDLIN( 279)				_g_current = (_g_current + 1);
HXDLIN( 279)				 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 279)				( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::away3d::entities::Mesh)(item) ));
HXDLIN( 279)				::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            			}
            		}
HXDLIN( 279)		( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,removeOwner,(void))

void AnimatorBase_obj::updateDeltaTime(int dt){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_288_updateDeltaTime)
HXLINE( 289)		 ::away3d::animators::AnimatorBase _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)		_hx_tmp->_absoluteTime = (_hx_tmp->_absoluteTime + dt);
HXLINE( 291)		::away3d::animators::states::IAnimationState_obj::update(this->_activeState,this->_absoluteTime);
HXLINE( 293)		if (this->updatePosition) {
HXLINE( 294)			this->applyPositionDelta();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,updateDeltaTime,(void))

void AnimatorBase_obj::onEnterFrame( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_302_onEnterFrame)
HXDLIN( 302)		this->update(::openfl::Lib_obj::getTimer());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimatorBase_obj,onEnterFrame,(void))

void AnimatorBase_obj::applyPositionDelta(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_306_applyPositionDelta)
HXLINE( 307)		 ::openfl::geom::Vector3D delta = ::away3d::animators::states::IAnimationState_obj::get_positionDelta(this->_activeState);
HXLINE( 308)		Float dist = delta->get_length();
HXLINE( 309)		int len;
HXLINE( 310)		if ((dist > 0)) {
HXLINE( 311)			len = this->_owners->get_length();
HXLINE( 312)			{
HXLINE( 312)				int _g = 0;
HXDLIN( 312)				int _g1 = len;
HXDLIN( 312)				while((_g < _g1)){
HXLINE( 312)					_g = (_g + 1);
HXDLIN( 312)					int i = (_g - 1);
HXLINE( 313)					this->_owners->get(i).StaticCast<  ::away3d::entities::Mesh >()->translateLocal(delta,dist);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,applyPositionDelta,(void))

void AnimatorBase_obj::dispatchCycleEvent(){
            	HX_GC_STACKFRAME(&_hx_pos_774d7d57b4a99589_324_dispatchCycleEvent)
HXDLIN( 324)		if (this->hasEventListener(HX_("cycle_complete",b2,76,9e,b0))) {
HXLINE( 326)			if (::hx::IsNull( this->_cycleEvent )) {
HXLINE( 327)				this->_cycleEvent =  ::away3d::events::AnimatorEvent_obj::__alloc( HX_CTX ,HX_("cycle_complete",b2,76,9e,b0),::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 328)			this->dispatchEvent(this->_cycleEvent);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,dispatchCycleEvent,(void))

void AnimatorBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_336_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,dispose,(void))

::String AnimatorBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_774d7d57b4a99589_344_get_assetType)
HXDLIN( 344)		return HX_("animator",67,7b,f2,88);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimatorBase_obj,get_assetType,return )


::hx::ObjectPtr< AnimatorBase_obj > AnimatorBase_obj::__new(::Dynamic animationSet) {
	::hx::ObjectPtr< AnimatorBase_obj > __this = new AnimatorBase_obj();
	__this->__construct(animationSet);
	return __this;
}

::hx::ObjectPtr< AnimatorBase_obj > AnimatorBase_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic animationSet) {
	AnimatorBase_obj *__this = (AnimatorBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimatorBase_obj), true, "away3d.animators.AnimatorBase"));
	*(void **)__this = AnimatorBase_obj::_hx_vtable;
	__this->__construct(animationSet);
	return __this;
}

AnimatorBase_obj::AnimatorBase_obj()
{
}

void AnimatorBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatorBase);
	HX_MARK_MEMBER_NAME(_broadcaster,"_broadcaster");
	HX_MARK_MEMBER_NAME(_isPlaying,"_isPlaying");
	HX_MARK_MEMBER_NAME(_autoUpdate,"_autoUpdate");
	HX_MARK_MEMBER_NAME(_startEvent,"_startEvent");
	HX_MARK_MEMBER_NAME(_stopEvent,"_stopEvent");
	HX_MARK_MEMBER_NAME(_cycleEvent,"_cycleEvent");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_playbackSpeed,"_playbackSpeed");
	HX_MARK_MEMBER_NAME(_animationSet,"_animationSet");
	HX_MARK_MEMBER_NAME(_owners,"_owners");
	HX_MARK_MEMBER_NAME(_activeNode,"_activeNode");
	HX_MARK_MEMBER_NAME(_activeState,"_activeState");
	HX_MARK_MEMBER_NAME(_activeAnimationName,"_activeAnimationName");
	HX_MARK_MEMBER_NAME(_absoluteTime,"_absoluteTime");
	HX_MARK_MEMBER_NAME(_animationStates,"_animationStates");
	HX_MARK_MEMBER_NAME(updatePosition,"updatePosition");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimatorBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_broadcaster,"_broadcaster");
	HX_VISIT_MEMBER_NAME(_isPlaying,"_isPlaying");
	HX_VISIT_MEMBER_NAME(_autoUpdate,"_autoUpdate");
	HX_VISIT_MEMBER_NAME(_startEvent,"_startEvent");
	HX_VISIT_MEMBER_NAME(_stopEvent,"_stopEvent");
	HX_VISIT_MEMBER_NAME(_cycleEvent,"_cycleEvent");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_playbackSpeed,"_playbackSpeed");
	HX_VISIT_MEMBER_NAME(_animationSet,"_animationSet");
	HX_VISIT_MEMBER_NAME(_owners,"_owners");
	HX_VISIT_MEMBER_NAME(_activeNode,"_activeNode");
	HX_VISIT_MEMBER_NAME(_activeState,"_activeState");
	HX_VISIT_MEMBER_NAME(_activeAnimationName,"_activeAnimationName");
	HX_VISIT_MEMBER_NAME(_absoluteTime,"_absoluteTime");
	HX_VISIT_MEMBER_NAME(_animationStates,"_animationStates");
	HX_VISIT_MEMBER_NAME(updatePosition,"updatePosition");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimatorBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_time() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"phase") ) { return ::hx::Val( phase_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_owners") ) { return ::hx::Val( _owners ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"addOwner") ) { return ::hx::Val( addOwner_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoUpdate() ); }
		if (HX_FIELD_EQ(inName,"_isPlaying") ) { return ::hx::Val( _isPlaying ); }
		if (HX_FIELD_EQ(inName,"_stopEvent") ) { return ::hx::Val( _stopEvent ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeState() ); }
		if (HX_FIELD_EQ(inName,"_autoUpdate") ) { return ::hx::Val( _autoUpdate ); }
		if (HX_FIELD_EQ(inName,"_startEvent") ) { return ::hx::Val( _startEvent ); }
		if (HX_FIELD_EQ(inName,"_cycleEvent") ) { return ::hx::Val( _cycleEvent ); }
		if (HX_FIELD_EQ(inName,"_activeNode") ) { return ::hx::Val( _activeNode ); }
		if (HX_FIELD_EQ(inName,"removeOwner") ) { return ::hx::Val( removeOwner_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"absoluteTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_absoluteTime() ); }
		if (HX_FIELD_EQ(inName,"animationSet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animationSet() ); }
		if (HX_FIELD_EQ(inName,"_broadcaster") ) { return ::hx::Val( _broadcaster ); }
		if (HX_FIELD_EQ(inName,"_activeState") ) { return ::hx::Val( _activeState ); }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return ::hx::Val( onEnterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playbackSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_playbackSpeed() ); }
		if (HX_FIELD_EQ(inName,"_animationSet") ) { return ::hx::Val( _animationSet ); }
		if (HX_FIELD_EQ(inName,"_absoluteTime") ) { return ::hx::Val( _absoluteTime ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_playbackSpeed") ) { return ::hx::Val( _playbackSpeed ); }
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return ::hx::Val( updatePosition ); }
		if (HX_FIELD_EQ(inName,"get_autoUpdate") ) { return ::hx::Val( get_autoUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoUpdate") ) { return ::hx::Val( set_autoUpdate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeAnimation() ); }
		if (HX_FIELD_EQ(inName,"get_activeState") ) { return ::hx::Val( get_activeState_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDeltaTime") ) { return ::hx::Val( updateDeltaTime_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_animationStates") ) { return ::hx::Val( _animationStates ); }
		if (HX_FIELD_EQ(inName,"get_absoluteTime") ) { return ::hx::Val( get_absoluteTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_animationSet") ) { return ::hx::Val( get_animationSet_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAnimationState") ) { return ::hx::Val( getAnimationState_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_playbackSpeed") ) { return ::hx::Val( get_playbackSpeed_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_playbackSpeed") ) { return ::hx::Val( set_playbackSpeed_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"applyPositionDelta") ) { return ::hx::Val( applyPositionDelta_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchCycleEvent") ) { return ::hx::Val( dispatchCycleEvent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"activeAnimationName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeAnimationName() ); }
		if (HX_FIELD_EQ(inName,"get_activeAnimation") ) { return ::hx::Val( get_activeAnimation_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_activeAnimationName") ) { return ::hx::Val( _activeAnimationName ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getAnimationStateByName") ) { return ::hx::Val( getAnimationStateByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_activeAnimationName") ) { return ::hx::Val( get_activeAnimationName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimatorBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_owners") ) { _owners=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoUpdate(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_isPlaying") ) { _isPlaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stopEvent") ) { _stopEvent=inValue.Cast<  ::away3d::events::AnimatorEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoUpdate") ) { _autoUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startEvent") ) { _startEvent=inValue.Cast<  ::away3d::events::AnimatorEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cycleEvent") ) { _cycleEvent=inValue.Cast<  ::away3d::events::AnimatorEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeNode") ) { _activeNode=inValue.Cast<  ::away3d::animators::nodes::AnimationNodeBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_broadcaster") ) { _broadcaster=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeState") ) { _activeState=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playbackSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_playbackSpeed(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_animationSet") ) { _animationSet=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_absoluteTime") ) { _absoluteTime=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_playbackSpeed") ) { _playbackSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updatePosition") ) { updatePosition=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_animationStates") ) { _animationStates=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_activeAnimationName") ) { _activeAnimationName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatorBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("absoluteTime",24,ce,19,fa));
	outFields->push(HX_("animationSet",fe,9e,2e,aa));
	outFields->push(HX_("activeState",6b,76,50,e0));
	outFields->push(HX_("activeAnimation",5e,24,0a,80));
	outFields->push(HX_("activeAnimationName",c9,49,6f,0d));
	outFields->push(HX_("autoUpdate",d8,96,d0,f2));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("playbackSpeed",6c,73,8d,56));
	outFields->push(HX_("assetType",ca,40,af,b1));
	outFields->push(HX_("_broadcaster",af,2b,13,79));
	outFields->push(HX_("_isPlaying",65,08,b9,e9));
	outFields->push(HX_("_autoUpdate",f7,63,5a,c5));
	outFields->push(HX_("_startEvent",77,6d,65,64));
	outFields->push(HX_("_stopEvent",79,7c,a9,e1));
	outFields->push(HX_("_cycleEvent",b3,ae,fe,f7));
	outFields->push(HX_("_time",ec,e7,0d,00));
	outFields->push(HX_("_playbackSpeed",ad,63,df,94));
	outFields->push(HX_("_animationSet",dd,31,9d,8c));
	outFields->push(HX_("_owners",7f,a6,c5,9d));
	outFields->push(HX_("_activeNode",07,a0,be,c4));
	outFields->push(HX_("_activeState",6c,24,5a,46));
	outFields->push(HX_("_activeAnimationName",ca,60,c8,0c));
	outFields->push(HX_("_absoluteTime",03,61,88,dc));
	outFields->push(HX_("_animationStates",e7,99,d7,ff));
	outFields->push(HX_("updatePosition",d2,93,24,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimatorBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(AnimatorBase_obj,_broadcaster),HX_("_broadcaster",af,2b,13,79)},
	{::hx::fsBool,(int)offsetof(AnimatorBase_obj,_isPlaying),HX_("_isPlaying",65,08,b9,e9)},
	{::hx::fsBool,(int)offsetof(AnimatorBase_obj,_autoUpdate),HX_("_autoUpdate",f7,63,5a,c5)},
	{::hx::fsObject /*  ::away3d::events::AnimatorEvent */ ,(int)offsetof(AnimatorBase_obj,_startEvent),HX_("_startEvent",77,6d,65,64)},
	{::hx::fsObject /*  ::away3d::events::AnimatorEvent */ ,(int)offsetof(AnimatorBase_obj,_stopEvent),HX_("_stopEvent",79,7c,a9,e1)},
	{::hx::fsObject /*  ::away3d::events::AnimatorEvent */ ,(int)offsetof(AnimatorBase_obj,_cycleEvent),HX_("_cycleEvent",b3,ae,fe,f7)},
	{::hx::fsInt,(int)offsetof(AnimatorBase_obj,_time),HX_("_time",ec,e7,0d,00)},
	{::hx::fsFloat,(int)offsetof(AnimatorBase_obj,_playbackSpeed),HX_("_playbackSpeed",ad,63,df,94)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(AnimatorBase_obj,_animationSet),HX_("_animationSet",dd,31,9d,8c)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(AnimatorBase_obj,_owners),HX_("_owners",7f,a6,c5,9d)},
	{::hx::fsObject /*  ::away3d::animators::nodes::AnimationNodeBase */ ,(int)offsetof(AnimatorBase_obj,_activeNode),HX_("_activeNode",07,a0,be,c4)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(AnimatorBase_obj,_activeState),HX_("_activeState",6c,24,5a,46)},
	{::hx::fsString,(int)offsetof(AnimatorBase_obj,_activeAnimationName),HX_("_activeAnimationName",ca,60,c8,0c)},
	{::hx::fsInt,(int)offsetof(AnimatorBase_obj,_absoluteTime),HX_("_absoluteTime",03,61,88,dc)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(AnimatorBase_obj,_animationStates),HX_("_animationStates",e7,99,d7,ff)},
	{::hx::fsBool,(int)offsetof(AnimatorBase_obj,updatePosition),HX_("updatePosition",d2,93,24,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimatorBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimatorBase_obj_sMemberFields[] = {
	HX_("_broadcaster",af,2b,13,79),
	HX_("_isPlaying",65,08,b9,e9),
	HX_("_autoUpdate",f7,63,5a,c5),
	HX_("_startEvent",77,6d,65,64),
	HX_("_stopEvent",79,7c,a9,e1),
	HX_("_cycleEvent",b3,ae,fe,f7),
	HX_("_time",ec,e7,0d,00),
	HX_("_playbackSpeed",ad,63,df,94),
	HX_("_animationSet",dd,31,9d,8c),
	HX_("_owners",7f,a6,c5,9d),
	HX_("_activeNode",07,a0,be,c4),
	HX_("_activeState",6c,24,5a,46),
	HX_("_activeAnimationName",ca,60,c8,0c),
	HX_("_absoluteTime",03,61,88,dc),
	HX_("_animationStates",e7,99,d7,ff),
	HX_("updatePosition",d2,93,24,00),
	HX_("getAnimationState",a3,b7,a2,06),
	HX_("getAnimationStateByName",c5,33,13,41),
	HX_("get_absoluteTime",ad,ba,b8,fe),
	HX_("get_animationSet",87,8b,cd,ae),
	HX_("get_activeState",02,2e,32,a1),
	HX_("get_activeAnimation",75,f3,14,0b),
	HX_("get_activeAnimationName",60,f0,c4,15),
	HX_("get_autoUpdate",21,1f,c6,68),
	HX_("set_autoUpdate",95,07,e6,88),
	HX_("get_time",96,87,b7,cc),
	HX_("set_time",0a,e1,14,7b),
	HX_("phase",3b,28,e9,c1),
	HX_("get_playbackSpeed",c3,7e,fd,5c),
	HX_("set_playbackSpeed",cf,56,6b,80),
	HX_("start",62,74,0b,84),
	HX_("stop",02,f0,5b,4c),
	HX_("update",09,86,05,87),
	HX_("reset",cf,49,c8,e6),
	HX_("addOwner",52,be,d3,b1),
	HX_("removeOwner",4f,75,aa,36),
	HX_("updateDeltaTime",dc,0c,e7,44),
	HX_("onEnterFrame",f4,a5,93,da),
	HX_("applyPositionDelta",41,30,c5,ce),
	HX_("dispatchCycleEvent",ee,20,31,d0),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_assetType",a1,14,13,73),
	::String(null()) };

::hx::Class AnimatorBase_obj::__mClass;

void AnimatorBase_obj::__register()
{
	AnimatorBase_obj _hx_dummy;
	AnimatorBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.animators.AnimatorBase",89,90,2d,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimatorBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimatorBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimatorBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimatorBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace animators
