#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_TextureMaterial
#include <away3d/materials/TextureMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_utils_DefaultMaterialManager
#include <away3d/materials/utils/DefaultMaterialManager.h>
#endif
#ifndef INCLUDED_away3d_textures_BitmapTexture
#include <away3d/textures/BitmapTexture.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8533ea1877367623_17_getDefaultMaterial,"away3d.materials.utils.DefaultMaterialManager","getDefaultMaterial",0xe5905a0d,"away3d.materials.utils.DefaultMaterialManager.getDefaultMaterial","away3d/materials/utils/DefaultMaterialManager.hx",17,0xd35f6568)
HX_LOCAL_STACK_FRAME(_hx_pos_8533ea1877367623_30_getDefaultTexture,"away3d.materials.utils.DefaultMaterialManager","getDefaultTexture",0x8220fa35,"away3d.materials.utils.DefaultMaterialManager.getDefaultTexture","away3d/materials/utils/DefaultMaterialManager.hx",30,0xd35f6568)
HX_LOCAL_STACK_FRAME(_hx_pos_8533ea1877367623_40_createDefaultTexture,"away3d.materials.utils.DefaultMaterialManager","createDefaultTexture",0x7ff89271,"away3d.materials.utils.DefaultMaterialManager.createDefaultTexture","away3d/materials/utils/DefaultMaterialManager.hx",40,0xd35f6568)
HX_LOCAL_STACK_FRAME(_hx_pos_8533ea1877367623_56_createDefaultMaterial,"away3d.materials.utils.DefaultMaterialManager","createDefaultMaterial",0x045df651,"away3d.materials.utils.DefaultMaterialManager.createDefaultMaterial","away3d/materials/utils/DefaultMaterialManager.hx",56,0xd35f6568)
namespace away3d{
namespace materials{
namespace utils{

void DefaultMaterialManager_obj::__construct() { }

Dynamic DefaultMaterialManager_obj::__CreateEmpty() { return new DefaultMaterialManager_obj; }

void *DefaultMaterialManager_obj::_hx_vtable = 0;

Dynamic DefaultMaterialManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultMaterialManager_obj > _hx_result = new DefaultMaterialManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultMaterialManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3556bba9;
}

 ::openfl::display::BitmapData DefaultMaterialManager_obj::_defaultTextureBitmapData;

 ::away3d::materials::TextureMaterial DefaultMaterialManager_obj::_defaultMaterial;

 ::away3d::textures::BitmapTexture DefaultMaterialManager_obj::_defaultTexture;

 ::away3d::materials::TextureMaterial DefaultMaterialManager_obj::getDefaultMaterial(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_8533ea1877367623_17_getDefaultMaterial)
HXLINE(  18)		if (::hx::IsNull( ::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture )) {
HXLINE(  19)			::away3d::materials::utils::DefaultMaterialManager_obj::createDefaultTexture();
            		}
HXLINE(  21)		if (::hx::IsNull( ::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial )) {
HXLINE(  22)			::away3d::materials::utils::DefaultMaterialManager_obj::createDefaultMaterial();
            		}
HXLINE(  26)		return ::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DefaultMaterialManager_obj,getDefaultMaterial,return )

 ::away3d::textures::BitmapTexture DefaultMaterialManager_obj::getDefaultTexture(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_8533ea1877367623_30_getDefaultTexture)
HXLINE(  31)		if (::hx::IsNull( ::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture )) {
HXLINE(  32)			::away3d::materials::utils::DefaultMaterialManager_obj::createDefaultTexture();
            		}
HXLINE(  36)		return ::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DefaultMaterialManager_obj,getDefaultTexture,return )

void DefaultMaterialManager_obj::createDefaultTexture(){
            	HX_GC_STACKFRAME(&_hx_pos_8533ea1877367623_40_createDefaultTexture)
HXLINE(  41)		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,8,8,false,0);
HXLINE(  44)		{
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(0,1,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(0,3,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(0,5,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(0,7,16777215);
            			}
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(1,0,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(1,2,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(1,4,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(1,6,16777215);
            			}
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(2,1,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(2,3,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(2,5,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(2,7,16777215);
            			}
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(3,0,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(3,2,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(3,4,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(3,6,16777215);
            			}
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(4,1,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(4,3,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(4,5,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(4,7,16777215);
            			}
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(5,0,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(5,2,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(5,4,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(5,6,16777215);
            			}
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(6,1,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(6,3,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(6,5,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(6,7,16777215);
            			}
HXLINE(  45)			{
HXLINE(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(7,0,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(7,2,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(7,4,16777215);
HXDLIN(  47)				::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData->setPixel(7,6,16777215);
            			}
            		}
HXLINE(  51)		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture =  ::away3d::textures::BitmapTexture_obj::__alloc( HX_CTX ,::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTextureBitmapData,null());
HXLINE(  52)		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture->set_name(HX_("defaultTexture",1a,22,21,ce));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultMaterialManager_obj,createDefaultTexture,(void))

void DefaultMaterialManager_obj::createDefaultMaterial(){
            	HX_GC_STACKFRAME(&_hx_pos_8533ea1877367623_56_createDefaultMaterial)
HXLINE(  57)		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial =  ::away3d::materials::TextureMaterial_obj::__alloc( HX_CTX ,::away3d::materials::utils::DefaultMaterialManager_obj::_defaultTexture,null(),null(),null(),null());
HXLINE(  58)		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial->set_mipmap(false);
HXLINE(  59)		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial->set_smooth(false);
HXLINE(  60)		::away3d::materials::utils::DefaultMaterialManager_obj::_defaultMaterial->set_name(HX_("defaultMaterial",88,1a,b3,19));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultMaterialManager_obj,createDefaultMaterial,(void))


DefaultMaterialManager_obj::DefaultMaterialManager_obj()
{
}

bool DefaultMaterialManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultTexture") ) { outValue = ( _defaultTexture ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_defaultMaterial") ) { outValue = ( _defaultMaterial ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getDefaultTexture") ) { outValue = getDefaultTexture_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDefaultMaterial") ) { outValue = getDefaultMaterial_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createDefaultTexture") ) { outValue = createDefaultTexture_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createDefaultMaterial") ) { outValue = createDefaultMaterial_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_defaultTextureBitmapData") ) { outValue = ( _defaultTextureBitmapData ); return true; }
	}
	return false;
}

bool DefaultMaterialManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultTexture") ) { _defaultTexture=ioValue.Cast<  ::away3d::textures::BitmapTexture >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_defaultMaterial") ) { _defaultMaterial=ioValue.Cast<  ::away3d::materials::TextureMaterial >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_defaultTextureBitmapData") ) { _defaultTextureBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DefaultMaterialManager_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DefaultMaterialManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &DefaultMaterialManager_obj::_defaultTextureBitmapData,HX_("_defaultTextureBitmapData",d2,25,57,46)},
	{::hx::fsObject /*  ::away3d::materials::TextureMaterial */ ,(void *) &DefaultMaterialManager_obj::_defaultMaterial,HX_("_defaultMaterial",09,5d,92,04)},
	{::hx::fsObject /*  ::away3d::textures::BitmapTexture */ ,(void *) &DefaultMaterialManager_obj::_defaultTexture,HX_("_defaultTexture",b9,6a,81,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DefaultMaterialManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTextureBitmapData,"_defaultTextureBitmapData");
	HX_MARK_MEMBER_NAME(DefaultMaterialManager_obj::_defaultMaterial,"_defaultMaterial");
	HX_MARK_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTexture,"_defaultTexture");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultMaterialManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTextureBitmapData,"_defaultTextureBitmapData");
	HX_VISIT_MEMBER_NAME(DefaultMaterialManager_obj::_defaultMaterial,"_defaultMaterial");
	HX_VISIT_MEMBER_NAME(DefaultMaterialManager_obj::_defaultTexture,"_defaultTexture");
};

#endif

::hx::Class DefaultMaterialManager_obj::__mClass;

static ::String DefaultMaterialManager_obj_sStaticFields[] = {
	HX_("_defaultTextureBitmapData",d2,25,57,46),
	HX_("_defaultMaterial",09,5d,92,04),
	HX_("_defaultTexture",b9,6a,81,17),
	HX_("getDefaultMaterial",92,ba,78,cc),
	HX_("getDefaultTexture",50,d1,94,40),
	HX_("createDefaultTexture",36,de,1d,3a),
	HX_("createDefaultMaterial",ec,f6,da,2a),
	::String(null())
};

void DefaultMaterialManager_obj::__register()
{
	DefaultMaterialManager_obj _hx_dummy;
	DefaultMaterialManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.utils.DefaultMaterialManager",13,bc,ff,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultMaterialManager_obj::__GetStatic;
	__mClass->mSetStaticField = &DefaultMaterialManager_obj::__SetStatic;
	__mClass->mMarkFunc = DefaultMaterialManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DefaultMaterialManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DefaultMaterialManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultMaterialManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultMaterialManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultMaterialManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace utils
