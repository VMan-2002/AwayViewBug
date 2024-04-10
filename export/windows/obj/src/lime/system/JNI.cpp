#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_system_JNI
#include <lime/system/JNI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_52_transformClassName,"lime.system.JNI","transformClassName",0x67d7ebe6,"lime.system.JNI.transformClassName","lime/system/JNI.hx",52,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_66_callMember,"lime.system.JNI","callMember",0x6d0f06e7,"lime.system.JNI.callMember","lime/system/JNI.hx",66,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_71_callStatic,"lime.system.JNI","callStatic",0x6e55013b,"lime.system.JNI.callStatic","lime/system/JNI.hx",71,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_83_createMemberField,"lime.system.JNI","createMemberField",0xd212c0f5,"lime.system.JNI.createMemberField","lime/system/JNI.hx",83,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_106_createMemberMethod,"lime.system.JNI","createMemberMethod",0x87227e46,"lime.system.JNI.createMemberMethod","lime/system/JNI.hx",106,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_139_createStaticField,"lime.system.JNI","createStaticField",0xe4dcd621,"lime.system.JNI.createStaticField","lime/system/JNI.hx",139,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_164_createStaticMethod,"lime.system.JNI","createStaticMethod",0xe52aef9a,"lime.system.JNI.createStaticMethod","lime/system/JNI.hx",164,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_189_getEnv,"lime.system.JNI","getEnv",0x2402f6c6,"lime.system.JNI.getEnv","lime/system/JNI.hx",189,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_201_init,"lime.system.JNI","init",0x6490931f,"lime.system.JNI.init","lime/system/JNI.hx",201,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_213_onCallback,"lime.system.JNI","onCallback",0x99e6bb53,"lime.system.JNI.onCallback","lime/system/JNI.hx",213,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_234_postUICallback,"lime.system.JNI","postUICallback",0x8d567168,"lime.system.JNI.postUICallback","lime/system/JNI.hx",234,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_48_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",48,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_d83344e4dbfeb65c_49_boot,"lime.system.JNI","boot",0x5ff0dc41,"lime.system.JNI.boot","lime/system/JNI.hx",49,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNI_obj::__construct() { }

Dynamic JNI_obj::__CreateEmpty() { return new JNI_obj; }

void *JNI_obj::_hx_vtable = 0;

Dynamic JNI_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JNI_obj > _hx_result = new JNI_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JNI_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ecdb141;
}

 ::haxe::ds::StringMap JNI_obj::alreadyCreated;

bool JNI_obj::initialized;

::String JNI_obj::transformClassName(::String className){
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_52_transformClassName)
HXLINE(  53)		::Array< ::String > parts = className.split(HX_(".",2e,00,00,00));
HXLINE(  54)		if ((parts->length <= 1)) {
HXLINE(  55)			return className;
            		}
HXLINE(  57)		::String nestedClassName = HX_("",00,00,00,00);
HXLINE(  58)		 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^[A-Z]",4c,07,1c,26),HX_("",00,00,00,00));
HXDLIN(  58)		if (_hx_tmp->match(parts->__get((parts->length - 2)))) {
HXLINE(  59)			nestedClassName = (HX_("$",24,00,00,00) + parts->pop());
            		}
HXLINE(  61)		return (parts->join(HX_("/",2f,00,00,00)) + nestedClassName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,transformClassName,return )

 ::Dynamic JNI_obj::callMember( ::Dynamic method, ::Dynamic jobject,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_66_callMember)
HXDLIN(  66)		return ::Reflect_obj::callMethod(null(),method,::cpp::VirtualArray_obj::__new(1)->init(0,jobject)->concat(a));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

 ::Dynamic JNI_obj::callStatic( ::Dynamic method,::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_71_callStatic)
HXDLIN(  71)		return ::Reflect_obj::callMethod(null(),method,a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

 ::lime::_hx_system::JNIMemberField JNI_obj::createMemberField(::String className,::String memberName,::String signature){
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_83_createMemberField)
HXLINE(  84)		::lime::_hx_system::JNI_obj::init();
HXLINE(  90)		return  ::lime::_hx_system::JNIMemberField_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

 ::Dynamic JNI_obj::createMemberMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  __o_useArray,::hx::Null< bool >  __o_quietFail){
            		bool useArray = __o_useArray.Default(false);
            		bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_106_createMemberMethod)
HXLINE( 107)		::lime::_hx_system::JNI_obj::init();
HXLINE( 126)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

 ::lime::_hx_system::JNIStaticField JNI_obj::createStaticField(::String className,::String memberName,::String signature){
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_139_createStaticField)
HXLINE( 140)		::lime::_hx_system::JNI_obj::init();
HXLINE( 146)		return  ::lime::_hx_system::JNIStaticField_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

 ::Dynamic JNI_obj::createStaticMethod(::String className,::String memberName,::String signature,::hx::Null< bool >  __o_useArray,::hx::Null< bool >  __o_quietFail){
            		bool useArray = __o_useArray.Default(false);
            		bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_164_createStaticMethod)
HXLINE( 165)		::lime::_hx_system::JNI_obj::init();
HXLINE( 184)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

 ::Dynamic JNI_obj::getEnv(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_189_getEnv)
HXLINE( 190)		::lime::_hx_system::JNI_obj::init();
HXLINE( 195)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

void JNI_obj::init(){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_201_init)
HXDLIN( 201)		if (!(::lime::_hx_system::JNI_obj::initialized)) {
HXLINE( 203)			::lime::_hx_system::JNI_obj::initialized = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

 ::Dynamic JNI_obj::onCallback( ::Dynamic object,::String method,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_213_onCallback)
HXLINE( 214)		 ::Dynamic field = ::Reflect_obj::field(object,method);
HXLINE( 216)		if (::hx::IsNotNull( field )) {
HXLINE( 218)			if (::hx::IsNull( args )) {
HXLINE( 218)				args = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE( 220)			return ::Reflect_obj::callMethod(object,field,args);
            		}
HXLINE( 223)		::haxe::Log_obj::trace((HX_("onCallback - unknown field ",2b,28,2a,3c) + method),::hx::SourceInfo(HX_("lime/system/JNI.hx",7f,0b,97,21),223,HX_("lime.system.JNI",bf,02,fc,60),HX_("onCallback",04,6e,bd,5c)));
HXLINE( 224)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

void JNI_obj::postUICallback( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_234_postUICallback)
HXDLIN( 234)		callback();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,postUICallback,(void))


JNI_obj::JNI_obj()
{
}

bool JNI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { outValue = callMember_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callStatic") ) { outValue = callStatic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onCallback") ) { outValue = onCallback_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { outValue = ( alreadyCreated ); return true; }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { outValue = createMemberField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { outValue = createStaticField_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"transformClassName") ) { outValue = transformClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { outValue = createMemberMethod_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { outValue = createStaticMethod_dyn(); return true; }
	}
	return false;
}

bool JNI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { alreadyCreated=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JNI_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo JNI_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &JNI_obj::alreadyCreated,HX_("alreadyCreated",30,e9,f8,79)},
	{::hx::fsBool,(void *) &JNI_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void JNI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
};

#endif

::hx::Class JNI_obj::__mClass;

static ::String JNI_obj_sStaticFields[] = {
	HX_("alreadyCreated",30,e9,f8,79),
	HX_("initialized",14,f5,0f,37),
	HX_("transformClassName",97,37,9a,a4),
	HX_("callMember",98,b9,e5,2f),
	HX_("callStatic",ec,b3,2b,31),
	HX_("createMemberField",64,36,37,55),
	HX_("createMemberMethod",f7,c9,e4,c3),
	HX_("createStaticField",90,4b,01,68),
	HX_("createStaticMethod",4b,3b,ed,21),
	HX_("getEnv",f7,3c,1c,a3),
	HX_("init",10,3b,bb,45),
	HX_("onCallback",04,6e,bd,5c),
	HX_("postUICallback",99,d0,5a,b0),
	::String(null())
};

void JNI_obj::__register()
{
	JNI_obj _hx_dummy;
	JNI_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JNI",bf,02,fc,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNI_obj::__GetStatic;
	__mClass->mSetStaticField = &JNI_obj::__SetStatic;
	__mClass->mMarkFunc = JNI_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JNI_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JNI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNI_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JNI_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_48_boot)
HXDLIN(  48)		alreadyCreated =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_d83344e4dbfeb65c_49_boot)
HXDLIN(  49)		initialized = false;
            	}
}

} // end namespace lime
} // end namespace system
