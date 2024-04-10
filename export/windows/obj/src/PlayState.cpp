#include <hxcpp.h>

#ifndef INCLUDED_AwayViewBugState
#include <AwayViewBugState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StateBase
#include <StateBase.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_6_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",6,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_9_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",9,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_16_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",16,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_6_new)
HXDLIN(   6)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x37958dfe) {
			if (inClassId<=(int)0x0a05f89d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
			} else {
				return inClassId==(int)0x37958dfe;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_9_create)
HXLINE(  10)		this->super::create();
HXLINE(  11)		this->add( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,HX_("assets/images/simpleGraphic.png",c6,e0,cd,bc)));
HXLINE(  12)		this->addHintText();
            	}


void PlayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_16_update)
HXLINE(  17)		this->super::update(elapsed);
HXLINE(  19)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  19)		if (_this->keyManager->checkStatusUnsafe(67,_this->status)) {
HXLINE(  21)			::haxe::Log_obj::trace(HX_("Switching to 3D state",d5,c0,60,98),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),21,HX_("PlayState",5d,83,c2,46),HX_("update",09,86,05,87)));
HXLINE(  22)			{
HXLINE(  22)				 ::flixel::FlxState nextState =  ::AwayViewBugState_obj::__alloc( HX_CTX ,null());
HXDLIN(  22)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  22)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

