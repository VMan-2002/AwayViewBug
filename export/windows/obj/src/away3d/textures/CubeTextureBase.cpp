#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_177bae27cac4829e_13_new,"away3d.textures.CubeTextureBase","new",0x4c4b4bc2,"away3d.textures.CubeTextureBase.new","away3d/textures/CubeTextureBase.hx",13,0x3564d1ce)
HX_LOCAL_STACK_FRAME(_hx_pos_177bae27cac4829e_18_get_size,"away3d.textures.CubeTextureBase","get_size",0xd5125da8,"away3d.textures.CubeTextureBase.get_size","away3d/textures/CubeTextureBase.hx",18,0x3564d1ce)
HX_LOCAL_STACK_FRAME(_hx_pos_177bae27cac4829e_23_createTexture,"away3d.textures.CubeTextureBase","createTexture",0x4087eb21,"away3d.textures.CubeTextureBase.createTexture","away3d/textures/CubeTextureBase.hx",23,0x3564d1ce)
namespace away3d{
namespace textures{

void CubeTextureBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_177bae27cac4829e_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic CubeTextureBase_obj::__CreateEmpty() { return new CubeTextureBase_obj; }

void *CubeTextureBase_obj::_hx_vtable = 0;

Dynamic CubeTextureBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeTextureBase_obj > _hx_result = new CubeTextureBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CubeTextureBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x6238b1a0 || inClassId==(int)0x6775b71b;
	}
}

int CubeTextureBase_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_177bae27cac4829e_18_get_size)
HXDLIN(  18)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeTextureBase_obj,get_size,return )

 ::openfl::display3D::textures::TextureBase CubeTextureBase_obj::createTexture( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_177bae27cac4829e_23_createTexture)
HXDLIN(  23)		return context->createCubeTexture(this->get_width(),1,false,null());
            	}



::hx::ObjectPtr< CubeTextureBase_obj > CubeTextureBase_obj::__new() {
	::hx::ObjectPtr< CubeTextureBase_obj > __this = new CubeTextureBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CubeTextureBase_obj > CubeTextureBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CubeTextureBase_obj *__this = (CubeTextureBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeTextureBase_obj), true, "away3d.textures.CubeTextureBase"));
	*(void **)__this = CubeTextureBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CubeTextureBase_obj::CubeTextureBase_obj()
{
}

::hx::Val CubeTextureBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return ::hx::Val( createTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void CubeTextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("size",c1,a0,53,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CubeTextureBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CubeTextureBase_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeTextureBase_obj_sMemberFields[] = {
	HX_("get_size",4a,5c,0e,cc),
	HX_("createTexture",3f,a1,23,87),
	::String(null()) };

::hx::Class CubeTextureBase_obj::__mClass;

void CubeTextureBase_obj::__register()
{
	CubeTextureBase_obj _hx_dummy;
	CubeTextureBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.textures.CubeTextureBase",d0,02,0e,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeTextureBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeTextureBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeTextureBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeTextureBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace textures
