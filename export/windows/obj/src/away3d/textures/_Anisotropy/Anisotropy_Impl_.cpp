#include <hxcpp.h>

#ifndef INCLUDED_away3d_textures__Anisotropy_Anisotropy_Impl_
#include <away3d/textures/_Anisotropy/Anisotropy_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a40ae1e3655d2b21_13_fromString,"away3d.textures._Anisotropy.Anisotropy_Impl_","fromString",0x97063a33,"away3d.textures._Anisotropy.Anisotropy_Impl_.fromString","away3d/textures/Anisotropy.hx",13,0x0fbebb15)
HX_LOCAL_STACK_FRAME(_hx_pos_a40ae1e3655d2b21_27_toString,"away3d.textures._Anisotropy.Anisotropy_Impl_","toString",0x0e409704,"away3d.textures._Anisotropy.Anisotropy_Impl_.toString","away3d/textures/Anisotropy.hx",27,0x0fbebb15)
HX_LOCAL_STACK_FRAME(_hx_pos_a40ae1e3655d2b21_5_boot,"away3d.textures._Anisotropy.Anisotropy_Impl_","boot",0x1b453e8a,"away3d.textures._Anisotropy.Anisotropy_Impl_.boot","away3d/textures/Anisotropy.hx",5,0x0fbebb15)
HX_LOCAL_STACK_FRAME(_hx_pos_a40ae1e3655d2b21_6_boot,"away3d.textures._Anisotropy.Anisotropy_Impl_","boot",0x1b453e8a,"away3d.textures._Anisotropy.Anisotropy_Impl_.boot","away3d/textures/Anisotropy.hx",6,0x0fbebb15)
HX_LOCAL_STACK_FRAME(_hx_pos_a40ae1e3655d2b21_7_boot,"away3d.textures._Anisotropy.Anisotropy_Impl_","boot",0x1b453e8a,"away3d.textures._Anisotropy.Anisotropy_Impl_.boot","away3d/textures/Anisotropy.hx",7,0x0fbebb15)
HX_LOCAL_STACK_FRAME(_hx_pos_a40ae1e3655d2b21_8_boot,"away3d.textures._Anisotropy.Anisotropy_Impl_","boot",0x1b453e8a,"away3d.textures._Anisotropy.Anisotropy_Impl_.boot","away3d/textures/Anisotropy.hx",8,0x0fbebb15)
HX_LOCAL_STACK_FRAME(_hx_pos_a40ae1e3655d2b21_9_boot,"away3d.textures._Anisotropy.Anisotropy_Impl_","boot",0x1b453e8a,"away3d.textures._Anisotropy.Anisotropy_Impl_.boot","away3d/textures/Anisotropy.hx",9,0x0fbebb15)
namespace away3d{
namespace textures{
namespace _Anisotropy{

void Anisotropy_Impl__obj::__construct() { }

Dynamic Anisotropy_Impl__obj::__CreateEmpty() { return new Anisotropy_Impl__obj; }

void *Anisotropy_Impl__obj::_hx_vtable = 0;

Dynamic Anisotropy_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Anisotropy_Impl__obj > _hx_result = new Anisotropy_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Anisotropy_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69123188;
}

 ::Dynamic Anisotropy_Impl__obj::NONE;

 ::Dynamic Anisotropy_Impl__obj::ANISOTROPIC2X;

 ::Dynamic Anisotropy_Impl__obj::ANISOTROPIC4X;

 ::Dynamic Anisotropy_Impl__obj::ANISOTROPIC8X;

 ::Dynamic Anisotropy_Impl__obj::ANISOTROPIC16X;

 ::Dynamic Anisotropy_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_a40ae1e3655d2b21_13_fromString)
HXDLIN(  13)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("anisotropic16x",62,56,64,8c)) ){
HXLINE(  18)			return 4;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic2x",77,56,26,f5)) ){
HXLINE(  15)			return 1;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic4x",35,58,26,f5)) ){
HXLINE(  16)			return 2;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("anisotropic8x",b1,5b,26,f5)) ){
HXLINE(  17)			return 3;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  14)			return 0;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  19)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  13)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Anisotropy_Impl__obj,fromString,return )

::String Anisotropy_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_a40ae1e3655d2b21_27_toString)
HXDLIN(  27)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  28)			return HX_("bool",2a,84,1b,41);
HXDLIN(  28)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  29)			return HX_("anisotropic2x",77,56,26,f5);
HXDLIN(  29)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  30)			return HX_("anisotropic4x",35,58,26,f5);
HXDLIN(  30)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  31)			return HX_("anisotropic8x",b1,5b,26,f5);
HXDLIN(  31)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(  32)			return HX_("anisotropic16x",62,56,64,8c);
HXDLIN(  32)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  33)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  27)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Anisotropy_Impl__obj,toString,return )


Anisotropy_Impl__obj::Anisotropy_Impl__obj()
{
}

bool Anisotropy_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Anisotropy_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Anisotropy_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Anisotropy_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Anisotropy_Impl__obj::ANISOTROPIC2X,HX_("ANISOTROPIC2X",37,1a,65,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Anisotropy_Impl__obj::ANISOTROPIC4X,HX_("ANISOTROPIC4X",f5,1b,65,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Anisotropy_Impl__obj::ANISOTROPIC8X,HX_("ANISOTROPIC8X",71,1f,65,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Anisotropy_Impl__obj::ANISOTROPIC16X,HX_("ANISOTROPIC16X",62,f6,10,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Anisotropy_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Anisotropy_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_MARK_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_MARK_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_MARK_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Anisotropy_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Anisotropy_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_VISIT_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_VISIT_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_VISIT_MEMBER_NAME(Anisotropy_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
};

#endif

::hx::Class Anisotropy_Impl__obj::__mClass;

static ::String Anisotropy_Impl__obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("ANISOTROPIC2X",37,1a,65,db),
	HX_("ANISOTROPIC4X",f5,1b,65,db),
	HX_("ANISOTROPIC8X",71,1f,65,db),
	HX_("ANISOTROPIC16X",62,f6,10,1d),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Anisotropy_Impl__obj::__register()
{
	Anisotropy_Impl__obj _hx_dummy;
	Anisotropy_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.textures._Anisotropy.Anisotropy_Impl_",16,c5,b4,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Anisotropy_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Anisotropy_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Anisotropy_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Anisotropy_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Anisotropy_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Anisotropy_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Anisotropy_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Anisotropy_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a40ae1e3655d2b21_5_boot)
HXDLIN(   5)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a40ae1e3655d2b21_6_boot)
HXDLIN(   6)		ANISOTROPIC2X = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a40ae1e3655d2b21_7_boot)
HXDLIN(   7)		ANISOTROPIC4X = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a40ae1e3655d2b21_8_boot)
HXDLIN(   8)		ANISOTROPIC8X = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a40ae1e3655d2b21_9_boot)
HXDLIN(   9)		ANISOTROPIC16X = 4;
            	}
}

} // end namespace away3d
} // end namespace textures
} // end namespace _Anisotropy
