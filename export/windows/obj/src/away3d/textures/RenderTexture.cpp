#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_textures_RenderTexture
#include <away3d/textures/RenderTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6c49e32f6fb7c63c_16_new,"away3d.textures.RenderTexture","new",0x7ca9ab10,"away3d.textures.RenderTexture.new","away3d/textures/RenderTexture.hx",16,0xf1749e40)
HX_LOCAL_STACK_FRAME(_hx_pos_6c49e32f6fb7c63c_22_set_width,"away3d.textures.RenderTexture","set_width",0xb953fd19,"away3d.textures.RenderTexture.set_width","away3d/textures/RenderTexture.hx",22,0xf1749e40)
HX_LOCAL_STACK_FRAME(_hx_pos_6c49e32f6fb7c63c_35_set_height,"away3d.textures.RenderTexture","set_height",0x2678f174,"away3d.textures.RenderTexture.set_height","away3d/textures/RenderTexture.hx",35,0xf1749e40)
HX_LOCAL_STACK_FRAME(_hx_pos_6c49e32f6fb7c63c_48_uploadContent,"away3d.textures.RenderTexture","uploadContent",0xa7a2b3e8,"away3d.textures.RenderTexture.uploadContent","away3d/textures/RenderTexture.hx",48,0xf1749e40)
HX_LOCAL_STACK_FRAME(_hx_pos_6c49e32f6fb7c63c_59_createTexture,"away3d.textures.RenderTexture","createTexture",0x9ff7b7ef,"away3d.textures.RenderTexture.createTexture","away3d/textures/RenderTexture.hx",59,0xf1749e40)
namespace away3d{
namespace textures{

void RenderTexture_obj::__construct(int width,int height){
            	HX_STACKFRAME(&_hx_pos_6c49e32f6fb7c63c_16_new)
HXLINE(  17)		super::__construct();
HXLINE(  18)		this->setSize(width,height);
            	}

Dynamic RenderTexture_obj::__CreateEmpty() { return new RenderTexture_obj; }

void *RenderTexture_obj::_hx_vtable = 0;

Dynamic RenderTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderTexture_obj > _hx_result = new RenderTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RenderTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x52dd7dee) {
		if (inClassId<=(int)0x37f46043) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x37f46043;
			}
		} else {
			return inClassId==(int)0x52dd7dee;
		}
	} else {
		return inClassId==(int)0x6775b71b || inClassId==(int)0x679431e7;
	}
}

int RenderTexture_obj::set_width(int value){
            	HX_GC_STACKFRAME(&_hx_pos_6c49e32f6fb7c63c_22_set_width)
HXLINE(  23)		if ((value == this->_width)) {
HXLINE(  24)			return value;
            		}
HXLINE(  26)		if (!(::away3d::tools::utils::TextureUtils_obj::isDimensionValid(value))) {
HXLINE(  27)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Invalid size: Width and height must be power of 2 and cannot exceed 2048",ca,7f,98,7d),null()));
            		}
HXLINE(  29)		this->invalidateContent();
HXLINE(  30)		this->setSize(value,this->_height);
HXLINE(  31)		return value;
            	}


int RenderTexture_obj::set_height(int value){
            	HX_GC_STACKFRAME(&_hx_pos_6c49e32f6fb7c63c_35_set_height)
HXLINE(  36)		if ((value == this->_height)) {
HXLINE(  37)			return value;
            		}
HXLINE(  39)		if (!(::away3d::tools::utils::TextureUtils_obj::isDimensionValid(value))) {
HXLINE(  40)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Invalid size: Width and height must be power of 2 and cannot exceed 2048",ca,7f,98,7d),null()));
            		}
HXLINE(  42)		this->invalidateContent();
HXLINE(  43)		this->setSize(this->_width,value);
HXLINE(  44)		return value;
            	}


void RenderTexture_obj::uploadContent( ::openfl::display3D::textures::TextureBase texture){
            	HX_STACKFRAME(&_hx_pos_6c49e32f6fb7c63c_48_uploadContent)
            	}


 ::openfl::display3D::textures::TextureBase RenderTexture_obj::createTexture( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_6c49e32f6fb7c63c_59_createTexture)
HXDLIN(  59)		int _hx_tmp = this->get_width();
HXDLIN(  59)		return context->createTexture(_hx_tmp,this->get_height(),1,true,null());
            	}



::hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(int width,int height) {
	::hx::ObjectPtr< RenderTexture_obj > __this = new RenderTexture_obj();
	__this->__construct(width,height);
	return __this;
}

::hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height) {
	RenderTexture_obj *__this = (RenderTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderTexture_obj), true, "away3d.textures.RenderTexture"));
	*(void **)__this = RenderTexture_obj::_hx_vtable;
	__this->__construct(width,height);
	return __this;
}

RenderTexture_obj::RenderTexture_obj()
{
}

::hx::Val RenderTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return ::hx::Val( uploadContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return ::hx::Val( createTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RenderTexture_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RenderTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderTexture_obj_sMemberFields[] = {
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("uploadContent",38,9d,ce,8e),
	HX_("createTexture",3f,a1,23,87),
	::String(null()) };

::hx::Class RenderTexture_obj::__mClass;

void RenderTexture_obj::__register()
{
	RenderTexture_obj _hx_dummy;
	RenderTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.textures.RenderTexture",1e,23,1b,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderTexture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace textures
