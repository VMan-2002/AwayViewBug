#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_MipmapGenerator
#include <away3d/materials/utils/MipmapGenerator.h>
#endif
#ifndef INCLUDED_away3d_textures_CubeTextureBase
#include <away3d/textures/CubeTextureBase.h>
#endif
#ifndef INCLUDED_away3d_textures_RenderCubeTexture
#include <away3d/textures/RenderCubeTexture.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d4de14582b8191c1_16_new,"away3d.textures.RenderCubeTexture","new",0xb0a30d9b,"away3d.textures.RenderCubeTexture.new","away3d/textures/RenderCubeTexture.hx",16,0x3ead8615)
HX_LOCAL_STACK_FRAME(_hx_pos_d4de14582b8191c1_22_set_size,"away3d.textures.RenderCubeTexture","set_size",0xa7cda2a3,"away3d.textures.RenderCubeTexture.set_size","away3d/textures/RenderCubeTexture.hx",22,0x3ead8615)
HX_LOCAL_STACK_FRAME(_hx_pos_d4de14582b8191c1_35_uploadContent,"away3d.textures.RenderCubeTexture","uploadContent",0x0aaed233,"away3d.textures.RenderCubeTexture.uploadContent","away3d/textures/RenderCubeTexture.hx",35,0x3ead8615)
HX_LOCAL_STACK_FRAME(_hx_pos_d4de14582b8191c1_45_createTexture,"away3d.textures.RenderCubeTexture","createTexture",0x0303d63a,"away3d.textures.RenderCubeTexture.createTexture","away3d/textures/RenderCubeTexture.hx",45,0x3ead8615)
namespace away3d{
namespace textures{

void RenderCubeTexture_obj::__construct(int size){
            	HX_STACKFRAME(&_hx_pos_d4de14582b8191c1_16_new)
HXLINE(  17)		super::__construct();
HXLINE(  18)		this->setSize(size,size);
            	}

Dynamic RenderCubeTexture_obj::__CreateEmpty() { return new RenderCubeTexture_obj; }

void *RenderCubeTexture_obj::_hx_vtable = 0;

Dynamic RenderCubeTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderCubeTexture_obj > _hx_result = new RenderCubeTexture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RenderCubeTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f27a6f9) {
		if (inClassId<=(int)0x37f46043) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x37f46043;
			}
		} else {
			return inClassId==(int)0x4f27a6f9;
		}
	} else {
		return inClassId==(int)0x6238b1a0 || inClassId==(int)0x6775b71b;
	}
}

int RenderCubeTexture_obj::set_size(int value){
            	HX_GC_STACKFRAME(&_hx_pos_d4de14582b8191c1_22_set_size)
HXLINE(  23)		if ((value == this->_width)) {
HXLINE(  24)			return value;
            		}
HXLINE(  26)		if (!(::away3d::tools::utils::TextureUtils_obj::isDimensionValid(value))) {
HXLINE(  27)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Invalid size: Width and height must be power of 2 and cannot exceed 2048",ca,7f,98,7d),null()));
            		}
HXLINE(  29)		this->invalidateContent();
HXLINE(  30)		this->setSize(value,value);
HXLINE(  31)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderCubeTexture_obj,set_size,return )

void RenderCubeTexture_obj::uploadContent( ::openfl::display3D::textures::TextureBase texture){
            	HX_GC_STACKFRAME(&_hx_pos_d4de14582b8191c1_35_uploadContent)
HXLINE(  37)		 ::openfl::display::BitmapData bmd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->_width,this->_height,false,0);
HXLINE(  38)		{
HXLINE(  39)			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmd,texture,null(),false,0);
HXDLIN(  39)			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmd,texture,null(),false,1);
HXDLIN(  39)			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmd,texture,null(),false,2);
HXDLIN(  39)			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmd,texture,null(),false,3);
HXDLIN(  39)			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmd,texture,null(),false,4);
HXDLIN(  39)			::away3d::materials::utils::MipmapGenerator_obj::generateMipMaps(bmd,texture,null(),false,5);
            		}
HXLINE(  40)		bmd->dispose();
            	}


 ::openfl::display3D::textures::TextureBase RenderCubeTexture_obj::createTexture( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_d4de14582b8191c1_45_createTexture)
HXDLIN(  45)		return context->createCubeTexture(this->_width,1,true,null());
            	}



::hx::ObjectPtr< RenderCubeTexture_obj > RenderCubeTexture_obj::__new(int size) {
	::hx::ObjectPtr< RenderCubeTexture_obj > __this = new RenderCubeTexture_obj();
	__this->__construct(size);
	return __this;
}

::hx::ObjectPtr< RenderCubeTexture_obj > RenderCubeTexture_obj::__alloc(::hx::Ctx *_hx_ctx,int size) {
	RenderCubeTexture_obj *__this = (RenderCubeTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderCubeTexture_obj), true, "away3d.textures.RenderCubeTexture"));
	*(void **)__this = RenderCubeTexture_obj::_hx_vtable;
	__this->__construct(size);
	return __this;
}

RenderCubeTexture_obj::RenderCubeTexture_obj()
{
}

::hx::Val RenderCubeTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"uploadContent") ) { return ::hx::Val( uploadContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return ::hx::Val( createTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RenderCubeTexture_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RenderCubeTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderCubeTexture_obj_sMemberFields[] = {
	HX_("set_size",be,b5,6b,7a),
	HX_("uploadContent",38,9d,ce,8e),
	HX_("createTexture",3f,a1,23,87),
	::String(null()) };

::hx::Class RenderCubeTexture_obj::__mClass;

void RenderCubeTexture_obj::__register()
{
	RenderCubeTexture_obj _hx_dummy;
	RenderCubeTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.textures.RenderCubeTexture",29,a4,d7,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderCubeTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderCubeTexture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderCubeTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderCubeTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace textures
