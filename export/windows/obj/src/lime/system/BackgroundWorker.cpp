#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_system_BackgroundWorker
#include <lime/system/BackgroundWorker.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c68e02a08e78766b_21_new,"lime.system.BackgroundWorker","new",0x36e47924,"lime.system.BackgroundWorker.new","lime/system/BackgroundWorker.hx",21,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_42_cancel,"lime.system.BackgroundWorker","cancel",0x890a1736,"lime.system.BackgroundWorker.cancel","lime/system/BackgroundWorker.hx",42,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_51_run,"lime.system.BackgroundWorker","run",0x36e7900f,"lime.system.BackgroundWorker.run","lime/system/BackgroundWorker.hx",51,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_72_sendComplete,"lime.system.BackgroundWorker","sendComplete",0x4fa2f0dd,"lime.system.BackgroundWorker.sendComplete","lime/system/BackgroundWorker.hx",72,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_88_sendError,"lime.system.BackgroundWorker","sendError",0xa2871d24,"lime.system.BackgroundWorker.sendError","lime/system/BackgroundWorker.hx",88,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_104_sendProgress,"lime.system.BackgroundWorker","sendProgress",0x5605e7d1,"lime.system.BackgroundWorker.sendProgress","lime/system/BackgroundWorker.hx",104,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_115___doWork,"lime.system.BackgroundWorker","__doWork",0x193122d8,"lime.system.BackgroundWorker.__doWork","lime/system/BackgroundWorker.hx",115,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_134___update,"lime.system.BackgroundWorker","__update",0x813601e5,"lime.system.BackgroundWorker.__update","lime/system/BackgroundWorker.hx",134,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_23_boot,"lime.system.BackgroundWorker","boot",0xc91e86ee,"lime.system.BackgroundWorker.boot","lime/system/BackgroundWorker.hx",23,0x4a0958ac)
HX_LOCAL_STACK_FRAME(_hx_pos_c68e02a08e78766b_24_boot,"lime.system.BackgroundWorker","boot",0xc91e86ee,"lime.system.BackgroundWorker.boot","lime/system/BackgroundWorker.hx",24,0x4a0958ac)
namespace lime{
namespace _hx_system{

void BackgroundWorker_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c68e02a08e78766b_21_new)
HXLINE(  31)		this->onProgress =  ::lime::app::_Event_Dynamic_Void_obj::__alloc( HX_CTX );
HXLINE(  30)		this->onError =  ::lime::app::_Event_Dynamic_Void_obj::__alloc( HX_CTX );
HXLINE(  29)		this->onComplete =  ::lime::app::_Event_Dynamic_Void_obj::__alloc( HX_CTX );
HXLINE(  28)		this->doWork =  ::lime::app::_Event_Dynamic_Void_obj::__alloc( HX_CTX );
            	}

Dynamic BackgroundWorker_obj::__CreateEmpty() { return new BackgroundWorker_obj; }

void *BackgroundWorker_obj::_hx_vtable = 0;

Dynamic BackgroundWorker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackgroundWorker_obj > _hx_result = new BackgroundWorker_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackgroundWorker_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4be63f70;
}

void BackgroundWorker_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_42_cancel)
HXLINE(  43)		this->canceled = true;
HXLINE(  46)		this->_hx___workerThread = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundWorker_obj,cancel,(void))

void BackgroundWorker_obj::run( ::Dynamic message){
            	HX_GC_STACKFRAME(&_hx_pos_c68e02a08e78766b_51_run)
HXLINE(  52)		this->canceled = false;
HXLINE(  53)		this->completed = false;
HXLINE(  54)		this->_hx___runMessage = message;
HXLINE(  57)		this->_hx___messageQueue =  ::sys::thread::Deque_obj::__alloc( HX_CTX );
HXLINE(  58)		this->_hx___workerThread = ::sys::thread::_Thread::HaxeThread_obj::create(this->_hx___doWork_dyn(),false);
HXLINE(  62)		if (::hx::IsNotNull( ::lime::app::Application_obj::current )) {
HXLINE(  64)			::lime::app::Application_obj::current->onUpdate->add(this->_hx___update_dyn(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,run,(void))

void BackgroundWorker_obj::sendComplete( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_72_sendComplete)
HXLINE(  73)		this->completed = true;
HXLINE(  76)		this->_hx___messageQueue->add(::lime::_hx_system::BackgroundWorker_obj::MESSAGE_COMPLETE);
HXLINE(  77)		this->_hx___messageQueue->add(message);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,sendComplete,(void))

void BackgroundWorker_obj::sendError( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_88_sendError)
HXLINE(  90)		this->_hx___messageQueue->add(::lime::_hx_system::BackgroundWorker_obj::MESSAGE_ERROR);
HXLINE(  91)		this->_hx___messageQueue->add(message);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,sendError,(void))

void BackgroundWorker_obj::sendProgress( ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_104_sendProgress)
HXDLIN( 104)		this->_hx___messageQueue->add(message);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,sendProgress,(void))

void BackgroundWorker_obj::_hx___doWork(){
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_115___doWork)
HXDLIN( 115)		this->doWork->dispatch(this->_hx___runMessage);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundWorker_obj,_hx___doWork,(void))

void BackgroundWorker_obj::_hx___update(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_134___update)
HXLINE( 136)		 ::Dynamic message = this->_hx___messageQueue->pop(false);
HXLINE( 138)		if (::hx::IsNotNull( message )) {
HXLINE( 140)			if (::hx::IsEq( message,::lime::_hx_system::BackgroundWorker_obj::MESSAGE_ERROR )) {
HXLINE( 142)				::lime::app::Application_obj::current->onUpdate->remove(this->_hx___update_dyn());
HXLINE( 144)				if (!(this->canceled)) {
HXLINE( 146)					this->canceled = true;
HXLINE( 147)					 ::lime::app::_Event_Dynamic_Void _hx_tmp = this->onError;
HXDLIN( 147)					_hx_tmp->dispatch(this->_hx___messageQueue->pop(false));
            				}
            			}
            			else {
HXLINE( 150)				if (::hx::IsEq( message,::lime::_hx_system::BackgroundWorker_obj::MESSAGE_COMPLETE )) {
HXLINE( 152)					::lime::app::Application_obj::current->onUpdate->remove(this->_hx___update_dyn());
HXLINE( 154)					if (!(this->canceled)) {
HXLINE( 156)						this->canceled = true;
HXLINE( 157)						 ::lime::app::_Event_Dynamic_Void _hx_tmp = this->onComplete;
HXDLIN( 157)						_hx_tmp->dispatch(this->_hx___messageQueue->pop(false));
            					}
            				}
            				else {
HXLINE( 162)					if (!(this->canceled)) {
HXLINE( 164)						this->onProgress->dispatch(message);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,_hx___update,(void))

::String BackgroundWorker_obj::MESSAGE_COMPLETE;

::String BackgroundWorker_obj::MESSAGE_ERROR;


::hx::ObjectPtr< BackgroundWorker_obj > BackgroundWorker_obj::__new() {
	::hx::ObjectPtr< BackgroundWorker_obj > __this = new BackgroundWorker_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BackgroundWorker_obj > BackgroundWorker_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BackgroundWorker_obj *__this = (BackgroundWorker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackgroundWorker_obj), true, "lime.system.BackgroundWorker"));
	*(void **)__this = BackgroundWorker_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BackgroundWorker_obj::BackgroundWorker_obj()
{
}

void BackgroundWorker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundWorker);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(doWork,"doWork");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(_hx___runMessage,"__runMessage");
	HX_MARK_MEMBER_NAME(_hx___messageQueue,"__messageQueue");
	HX_MARK_MEMBER_NAME(_hx___workerThread,"__workerThread");
	HX_MARK_END_CLASS();
}

void BackgroundWorker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(doWork,"doWork");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(_hx___runMessage,"__runMessage");
	HX_VISIT_MEMBER_NAME(_hx___messageQueue,"__messageQueue");
	HX_VISIT_MEMBER_NAME(_hx___workerThread,"__workerThread");
}

::hx::Val BackgroundWorker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { return ::hx::Val( doWork ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return ::hx::Val( canceled ); }
		if (HX_FIELD_EQ(inName,"__doWork") ) { return ::hx::Val( _hx___doWork_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return ::hx::Val( completed ); }
		if (HX_FIELD_EQ(inName,"sendError") ) { return ::hx::Val( sendError_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return ::hx::Val( onProgress ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__runMessage") ) { return ::hx::Val( _hx___runMessage ); }
		if (HX_FIELD_EQ(inName,"sendComplete") ) { return ::hx::Val( sendComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"sendProgress") ) { return ::hx::Val( sendProgress_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__messageQueue") ) { return ::hx::Val( _hx___messageQueue ); }
		if (HX_FIELD_EQ(inName,"__workerThread") ) { return ::hx::Val( _hx___workerThread ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BackgroundWorker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MESSAGE_ERROR") ) { outValue = ( MESSAGE_ERROR ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MESSAGE_COMPLETE") ) { outValue = ( MESSAGE_COMPLETE ); return true; }
	}
	return false;
}

::hx::Val BackgroundWorker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { doWork=inValue.Cast<  ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast<  ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast<  ::lime::app::_Event_Dynamic_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__runMessage") ) { _hx___runMessage=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__messageQueue") ) { _hx___messageQueue=inValue.Cast<  ::sys::thread::Deque >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__workerThread") ) { _hx___workerThread=inValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BackgroundWorker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MESSAGE_ERROR") ) { MESSAGE_ERROR=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MESSAGE_COMPLETE") ) { MESSAGE_COMPLETE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void BackgroundWorker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("canceled",59,18,26,1f));
	outFields->push(HX_("completed",8b,a1,38,4f));
	outFields->push(HX_("doWork",fc,a6,00,1f));
	outFields->push(HX_("onComplete",f8,d4,7e,5d));
	outFields->push(HX_("onError",29,6a,67,09));
	outFields->push(HX_("onProgress",ec,cb,e1,63));
	outFields->push(HX_("__runMessage",dc,40,21,3d));
	outFields->push(HX_("__messageQueue",6a,f9,4b,d5));
	outFields->push(HX_("__workerThread",08,15,01,36));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackgroundWorker_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BackgroundWorker_obj,canceled),HX_("canceled",59,18,26,1f)},
	{::hx::fsBool,(int)offsetof(BackgroundWorker_obj,completed),HX_("completed",8b,a1,38,4f)},
	{::hx::fsObject /*  ::lime::app::_Event_Dynamic_Void */ ,(int)offsetof(BackgroundWorker_obj,doWork),HX_("doWork",fc,a6,00,1f)},
	{::hx::fsObject /*  ::lime::app::_Event_Dynamic_Void */ ,(int)offsetof(BackgroundWorker_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::lime::app::_Event_Dynamic_Void */ ,(int)offsetof(BackgroundWorker_obj,onError),HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::lime::app::_Event_Dynamic_Void */ ,(int)offsetof(BackgroundWorker_obj,onProgress),HX_("onProgress",ec,cb,e1,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BackgroundWorker_obj,_hx___runMessage),HX_("__runMessage",dc,40,21,3d)},
	{::hx::fsObject /*  ::sys::thread::Deque */ ,(int)offsetof(BackgroundWorker_obj,_hx___messageQueue),HX_("__messageQueue",6a,f9,4b,d5)},
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(int)offsetof(BackgroundWorker_obj,_hx___workerThread),HX_("__workerThread",08,15,01,36)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo BackgroundWorker_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &BackgroundWorker_obj::MESSAGE_COMPLETE,HX_("MESSAGE_COMPLETE",91,91,29,31)},
	{::hx::fsString,(void *) &BackgroundWorker_obj::MESSAGE_ERROR,HX_("MESSAGE_ERROR",d0,8b,51,62)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String BackgroundWorker_obj_sMemberFields[] = {
	HX_("canceled",59,18,26,1f),
	HX_("completed",8b,a1,38,4f),
	HX_("doWork",fc,a6,00,1f),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onError",29,6a,67,09),
	HX_("onProgress",ec,cb,e1,63),
	HX_("__runMessage",dc,40,21,3d),
	HX_("__messageQueue",6a,f9,4b,d5),
	HX_("__workerThread",08,15,01,36),
	HX_("cancel",7a,ed,33,b8),
	HX_("run",4b,e7,56,00),
	HX_("sendComplete",21,d2,84,c0),
	HX_("sendError",60,89,99,33),
	HX_("sendProgress",15,c9,e7,c6),
	HX_("__doWork",1c,12,30,c7),
	HX_("__update",29,f1,34,2f),
	::String(null()) };

static void BackgroundWorker_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_COMPLETE,"MESSAGE_COMPLETE");
	HX_MARK_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_ERROR,"MESSAGE_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BackgroundWorker_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_COMPLETE,"MESSAGE_COMPLETE");
	HX_VISIT_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_ERROR,"MESSAGE_ERROR");
};

#endif

::hx::Class BackgroundWorker_obj::__mClass;

static ::String BackgroundWorker_obj_sStaticFields[] = {
	HX_("MESSAGE_COMPLETE",91,91,29,31),
	HX_("MESSAGE_ERROR",d0,8b,51,62),
	::String(null())
};

void BackgroundWorker_obj::__register()
{
	BackgroundWorker_obj _hx_dummy;
	BackgroundWorker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.BackgroundWorker",32,57,a8,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BackgroundWorker_obj::__GetStatic;
	__mClass->mSetStaticField = &BackgroundWorker_obj::__SetStatic;
	__mClass->mMarkFunc = BackgroundWorker_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BackgroundWorker_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackgroundWorker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackgroundWorker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BackgroundWorker_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackgroundWorker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackgroundWorker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BackgroundWorker_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_23_boot)
HXDLIN(  23)		MESSAGE_COMPLETE = HX_("__COMPLETE__",39,bf,f1,2c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c68e02a08e78766b_24_boot)
HXDLIN(  24)		MESSAGE_ERROR = HX_("__ERROR__",a8,e1,2c,eb);
            	}
}

} // end namespace lime
} // end namespace system
