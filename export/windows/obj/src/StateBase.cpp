#include <hxcpp.h>

#ifndef INCLUDED_StateBase
#include <StateBase.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e6ba6172e9c7c02e_6_new,"StateBase","new",0x594be094,"StateBase.new","StateBase.hx",6,0xb37c4d5c)
HX_LOCAL_STACK_FRAME(_hx_pos_e6ba6172e9c7c02e_9_addHintText,"StateBase","addHintText",0x7a49a149,"StateBase.addHintText","StateBase.hx",9,0xb37c4d5c)

void StateBase_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_e6ba6172e9c7c02e_6_new)
HXDLIN(   6)		super::__construct(MaxSize);
            	}

Dynamic StateBase_obj::__CreateEmpty() { return new StateBase_obj; }

void *StateBase_obj::_hx_vtable = 0;

Dynamic StateBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StateBase_obj > _hx_result = new StateBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StateBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x37958dfe) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37958dfe;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void StateBase_obj::addHintText(){
            	HX_GC_STACKFRAME(&_hx_pos_e6ba6172e9c7c02e_9_addHintText)
HXLINE(  10)		 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Press X: 2D State\nPress C: 3D State\n\nDispose is called when attempting to move from the 3D state to the 2D state.",55,23,5c,fa),null(),null());
HXLINE(  11)		this->add(text);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StateBase_obj,addHintText,(void))


::hx::ObjectPtr< StateBase_obj > StateBase_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< StateBase_obj > __this = new StateBase_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< StateBase_obj > StateBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	StateBase_obj *__this = (StateBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StateBase_obj), true, "StateBase"));
	*(void **)__this = StateBase_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

StateBase_obj::StateBase_obj()
{
}

::hx::Val StateBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"addHintText") ) { return ::hx::Val( addHintText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StateBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StateBase_obj_sStaticStorageInfo = 0;
#endif

static ::String StateBase_obj_sMemberFields[] = {
	HX_("addHintText",15,3d,b8,79),
	::String(null()) };

::hx::Class StateBase_obj::__mClass;

void StateBase_obj::__register()
{
	StateBase_obj _hx_dummy;
	StateBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StateBase",a2,46,8b,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StateBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StateBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StateBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StateBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

