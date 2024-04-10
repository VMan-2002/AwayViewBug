#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_019020de32825c42_11_new,"away3d.textures.Texture2DBase","new",0x3cfc4f89,"away3d.textures.Texture2DBase.new","away3d/textures/Texture2DBase.hx",11,0x2845ebe7)
HX_LOCAL_STACK_FRAME(_hx_pos_019020de32825c42_16_createTexture,"away3d.textures.Texture2DBase","createTexture",0x20a00da8,"away3d.textures.Texture2DBase.createTexture","away3d/textures/Texture2DBase.hx",16,0x2845ebe7)
namespace away3d{
namespace textures{

void Texture2DBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_019020de32825c42_11_new)
HXDLIN(  11)		super::__construct();
            	}

Dynamic Texture2DBase_obj::__CreateEmpty() { return new Texture2DBase_obj; }

void *Texture2DBase_obj::_hx_vtable = 0;

Dynamic Texture2DBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Texture2DBase_obj > _hx_result = new Texture2DBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Texture2DBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x6775b71b || inClassId==(int)0x679431e7;
	}
}

 ::openfl::display3D::textures::TextureBase Texture2DBase_obj::createTexture( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_019020de32825c42_16_createTexture)
HXDLIN(  16)		return context->createTexture(this->_width,this->_height,1,false,null());
            	}



::hx::ObjectPtr< Texture2DBase_obj > Texture2DBase_obj::__new() {
	::hx::ObjectPtr< Texture2DBase_obj > __this = new Texture2DBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Texture2DBase_obj > Texture2DBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Texture2DBase_obj *__this = (Texture2DBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Texture2DBase_obj), true, "away3d.textures.Texture2DBase"));
	*(void **)__this = Texture2DBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Texture2DBase_obj::Texture2DBase_obj()
{
}

::hx::Val Texture2DBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return ::hx::Val( createTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Texture2DBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Texture2DBase_obj_sStaticStorageInfo = 0;
#endif

static ::String Texture2DBase_obj_sMemberFields[] = {
	HX_("createTexture",3f,a1,23,87),
	::String(null()) };

::hx::Class Texture2DBase_obj::__mClass;

void Texture2DBase_obj::__register()
{
	Texture2DBase_obj _hx_dummy;
	Texture2DBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.textures.Texture2DBase",17,d7,d1,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Texture2DBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Texture2DBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture2DBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture2DBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace textures
