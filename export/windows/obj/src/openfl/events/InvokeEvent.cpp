#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl_events_InvokeEvent
#include <openfl/events/InvokeEvent.h>
#endif
#ifndef INCLUDED_openfl_filesystem_File
#include <openfl/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfb5fdf2d9e4c469_41_new,"openfl.events.InvokeEvent","new",0x6db4951d,"openfl.events.InvokeEvent.new","openfl/events/InvokeEvent.hx",41,0xf42f2713)
HX_LOCAL_STACK_FRAME(_hx_pos_bfb5fdf2d9e4c469_55_clone,"openfl.events.InvokeEvent","clone",0x630c415a,"openfl.events.InvokeEvent.clone","openfl/events/InvokeEvent.hx",55,0xf42f2713)
HX_LOCAL_STACK_FRAME(_hx_pos_bfb5fdf2d9e4c469_19_boot,"openfl.events.InvokeEvent","boot",0x8866e4d5,"openfl.events.InvokeEvent.boot","openfl/events/InvokeEvent.hx",19,0xf42f2713)
namespace openfl{
namespace events{

void InvokeEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::filesystem::File dir,::cpp::VirtualArray argv, ::Dynamic __o_reason){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		 ::Dynamic reason = __o_reason;
            		if (::hx::IsNull(__o_reason)) reason = 3;
            	HX_STACKFRAME(&_hx_pos_bfb5fdf2d9e4c469_41_new)
HXLINE(  42)		super::__construct(type,bubbles,cancelable);
HXLINE(  43)		this->currentDirectory = dir;
HXLINE(  44)		::Array< ::String > stringArgs = ::Array_obj< ::String >::__new(0);
HXLINE(  45)		{
HXLINE(  45)			int _g = 0;
HXDLIN(  45)			while((_g < argv->get_length())){
HXLINE(  45)				 ::Dynamic arg = argv->__get(_g);
HXDLIN(  45)				_g = (_g + 1);
HXLINE(  47)				stringArgs->push(::Std_obj::string(arg));
            			}
            		}
HXLINE(  49)		this->arguments = stringArgs;
HXLINE(  50)		this->reason = reason;
            	}

Dynamic InvokeEvent_obj::__CreateEmpty() { return new InvokeEvent_obj; }

void *InvokeEvent_obj::_hx_vtable = 0;

Dynamic InvokeEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InvokeEvent_obj > _hx_result = new InvokeEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool InvokeEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x07e5dcd9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x07e5dcd9;
	} else {
		return inClassId==(int)0x08ec4c31;
	}
}

 ::openfl::events::Event InvokeEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_bfb5fdf2d9e4c469_55_clone)
HXDLIN(  55)		return  ::openfl::events::InvokeEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->currentDirectory,this->arguments,this->reason);
            	}


::String InvokeEvent_obj::INVOKE;


::hx::ObjectPtr< InvokeEvent_obj > InvokeEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::filesystem::File dir,::cpp::VirtualArray argv, ::Dynamic __o_reason) {
	::hx::ObjectPtr< InvokeEvent_obj > __this = new InvokeEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,dir,argv,__o_reason);
	return __this;
}

::hx::ObjectPtr< InvokeEvent_obj > InvokeEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::filesystem::File dir,::cpp::VirtualArray argv, ::Dynamic __o_reason) {
	InvokeEvent_obj *__this = (InvokeEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InvokeEvent_obj), true, "openfl.events.InvokeEvent"));
	*(void **)__this = InvokeEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,dir,argv,__o_reason);
	return __this;
}

InvokeEvent_obj::InvokeEvent_obj()
{
}

void InvokeEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InvokeEvent);
	HX_MARK_MEMBER_NAME(arguments,"arguments");
	HX_MARK_MEMBER_NAME(currentDirectory,"currentDirectory");
	HX_MARK_MEMBER_NAME(reason,"reason");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InvokeEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(arguments,"arguments");
	HX_VISIT_MEMBER_NAME(currentDirectory,"currentDirectory");
	HX_VISIT_MEMBER_NAME(reason,"reason");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val InvokeEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reason") ) { return ::hx::Val( reason ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arguments") ) { return ::hx::Val( arguments ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentDirectory") ) { return ::hx::Val( currentDirectory ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InvokeEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"reason") ) { reason=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arguments") ) { arguments=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentDirectory") ) { currentDirectory=inValue.Cast<  ::openfl::filesystem::File >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InvokeEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("arguments",56,3f,97,ee));
	outFields->push(HX_("currentDirectory",f4,66,75,03));
	outFields->push(HX_("reason",c4,0f,9d,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InvokeEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(InvokeEvent_obj,arguments),HX_("arguments",56,3f,97,ee)},
	{::hx::fsObject /*  ::openfl::filesystem::File */ ,(int)offsetof(InvokeEvent_obj,currentDirectory),HX_("currentDirectory",f4,66,75,03)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(InvokeEvent_obj,reason),HX_("reason",c4,0f,9d,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo InvokeEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &InvokeEvent_obj::INVOKE,HX_("INVOKE",78,23,63,52)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String InvokeEvent_obj_sMemberFields[] = {
	HX_("arguments",56,3f,97,ee),
	HX_("currentDirectory",f4,66,75,03),
	HX_("reason",c4,0f,9d,fc),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void InvokeEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvokeEvent_obj::INVOKE,"INVOKE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InvokeEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvokeEvent_obj::INVOKE,"INVOKE");
};

#endif

::hx::Class InvokeEvent_obj::__mClass;

static ::String InvokeEvent_obj_sStaticFields[] = {
	HX_("INVOKE",78,23,63,52),
	::String(null())
};

void InvokeEvent_obj::__register()
{
	InvokeEvent_obj _hx_dummy;
	InvokeEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.InvokeEvent",ab,c2,ea,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InvokeEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InvokeEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InvokeEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InvokeEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InvokeEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvokeEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvokeEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InvokeEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bfb5fdf2d9e4c469_19_boot)
HXDLIN(  19)		INVOKE = HX_("invoke",78,77,e0,9f);
            	}
}

} // end namespace openfl
} // end namespace events
