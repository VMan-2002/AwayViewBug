#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetBundle
#include <lime/utils/AssetBundle.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_302b88cc6233d9fb_23_new,"lime.utils.AssetLibrary","new",0x53ac9a93,"lime.utils.AssetLibrary.new","lime/utils/AssetLibrary.hx",23,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_53_exists,"lime.utils.AssetLibrary","exists",0xba577589,"lime.utils.AssetLibrary.exists","lime/utils/AssetLibrary.hx",53,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_172_getAsset,"lime.utils.AssetLibrary","getAsset",0x8eced667,"lime.utils.AssetLibrary.getAsset","lime/utils/AssetLibrary.hx",172,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_187_getAudioBuffer,"lime.utils.AssetLibrary","getAudioBuffer",0x882d8e2d,"lime.utils.AssetLibrary.getAudioBuffer","lime/utils/AssetLibrary.hx",187,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_209_getBytes,"lime.utils.AssetLibrary","getBytes",0x262d74e2,"lime.utils.AssetLibrary.getBytes","lime/utils/AssetLibrary.hx",209,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_248_getFont,"lime.utils.AssetLibrary","getFont",0x44386d38,"lime.utils.AssetLibrary.getFont","lime/utils/AssetLibrary.hx",248,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_272_getImage,"lime.utils.AssetLibrary","getImage",0x25fe8bd2,"lime.utils.AssetLibrary.getImage","lime/utils/AssetLibrary.hx",272,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_292_getPath,"lime.utils.AssetLibrary","getPath",0x4ac9f50e,"lime.utils.AssetLibrary.getPath","lime/utils/AssetLibrary.hx",292,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_308_getText,"lime.utils.AssetLibrary","getText",0x4d71dc16,"lime.utils.AssetLibrary.getText","lime/utils/AssetLibrary.hx",308,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_330_isLocal,"lime.utils.AssetLibrary","isLocal",0x436bccd4,"lime.utils.AssetLibrary.isLocal","lime/utils/AssetLibrary.hx",330,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_359_list,"lime.utils.AssetLibrary","list",0xe20b3ecb,"lime.utils.AssetLibrary.list","lime/utils/AssetLibrary.hx",359,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_376_loadAsset,"lime.utils.AssetLibrary","loadAsset",0xdf43a85d,"lime.utils.AssetLibrary.loadAsset","lime/utils/AssetLibrary.hx",376,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_390_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",390,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_416_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",416,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_417_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",417,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_418_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",418,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_424_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",424,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_425_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",425,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_426_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",426,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_432_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",432,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_433_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",433,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_434_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",434,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_440_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",440,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_441_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",441,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_442_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",442,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_448_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",448,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_449_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",449,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_450_load,"lime.utils.AssetLibrary","load",0xe20fbc93,"lime.utils.AssetLibrary.load","lime/utils/AssetLibrary.hx",450,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_464_loadAudioBuffer,"lime.utils.AssetLibrary","loadAudioBuffer",0xa3353ca3,"lime.utils.AssetLibrary.loadAudioBuffer","lime/utils/AssetLibrary.hx",464,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_487_loadBytes,"lime.utils.AssetLibrary","loadBytes",0x76a246d8,"lime.utils.AssetLibrary.loadBytes","lime/utils/AssetLibrary.hx",487,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_507_loadFont,"lime.utils.AssetLibrary","loadFont",0xbd1e8c02,"lime.utils.AssetLibrary.loadFont","lime/utils/AssetLibrary.hx",507,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_562_loadImage,"lime.utils.AssetLibrary","loadImage",0x76735dc8,"lime.utils.AssetLibrary.loadImage","lime/utils/AssetLibrary.hx",562,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_574_loadImage,"lime.utils.AssetLibrary","loadImage",0x76735dc8,"lime.utils.AssetLibrary.loadImage","lime/utils/AssetLibrary.hx",574,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_588_loadText,"lime.utils.AssetLibrary","loadText",0xc657fae0,"lime.utils.AssetLibrary.loadText","lime/utils/AssetLibrary.hx",588,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_615_unload,"lime.utils.AssetLibrary","unload",0x6003f8ac,"lime.utils.AssetLibrary.unload","lime/utils/AssetLibrary.hx",615,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_632___assetLoaded,"lime.utils.AssetLibrary","__assetLoaded",0x549222e8,"lime.utils.AssetLibrary.__assetLoaded","lime/utils/AssetLibrary.hx",632,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_675___cacheBreak,"lime.utils.AssetLibrary","__cacheBreak",0xc74bddaa,"lime.utils.AssetLibrary.__cacheBreak","lime/utils/AssetLibrary.hx",675,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_680___fromBundle,"lime.utils.AssetLibrary","__fromBundle",0xe4c84b19,"lime.utils.AssetLibrary.__fromBundle","lime/utils/AssetLibrary.hx",680,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_726___fromManifest,"lime.utils.AssetLibrary","__fromManifest",0xf24ba706,"lime.utils.AssetLibrary.__fromManifest","lime/utils/AssetLibrary.hx",726,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_793___resolvePath,"lime.utils.AssetLibrary","__resolvePath",0x4c4df384,"lime.utils.AssetLibrary.__resolvePath","lime/utils/AssetLibrary.hx",793,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_853_loadAudioBuffer_onComplete,"lime.utils.AssetLibrary","loadAudioBuffer_onComplete",0xd987b254,"lime.utils.AssetLibrary.loadAudioBuffer_onComplete","lime/utils/AssetLibrary.hx",853,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_892_loadAudioBuffer_onError,"lime.utils.AssetLibrary","loadAudioBuffer_onError",0x87a6db4d,"lime.utils.AssetLibrary.loadAudioBuffer_onError","lime/utils/AssetLibrary.hx",892,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_897_loadBytes_onComplete,"lime.utils.AssetLibrary","loadBytes_onComplete",0xaa249a3f,"lime.utils.AssetLibrary.loadBytes_onComplete","lime/utils/AssetLibrary.hx",897,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_903_loadFont_onComplete,"lime.utils.AssetLibrary","loadFont_onComplete",0x9f1c7155,"lime.utils.AssetLibrary.loadFont_onComplete","lime/utils/AssetLibrary.hx",903,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_909_loadImage_onComplete,"lime.utils.AssetLibrary","loadImage_onComplete",0xa0d6094f,"lime.utils.AssetLibrary.loadImage_onComplete","lime/utils/AssetLibrary.hx",909,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_915_loadText_onComplete,"lime.utils.AssetLibrary","loadText_onComplete",0xe39ed337,"lime.utils.AssetLibrary.loadText_onComplete","lime/utils/AssetLibrary.hx",915,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_922_load_onError,"lime.utils.AssetLibrary","load_onError",0xb5eacb3d,"lime.utils.AssetLibrary.load_onError","lime/utils/AssetLibrary.hx",922,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_934_load_onProgress,"lime.utils.AssetLibrary","load_onProgress",0x56294f58,"lime.utils.AssetLibrary.load_onProgress","lime/utils/AssetLibrary.hx",934,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_91_fromBytes,"lime.utils.AssetLibrary","fromBytes",0x0ff3e514,"lime.utils.AssetLibrary.fromBytes","lime/utils/AssetLibrary.hx",91,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_96_fromFile,"lime.utils.AssetLibrary","fromFile",0xaa45f9f3,"lime.utils.AssetLibrary.fromFile","lime/utils/AssetLibrary.hx",96,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_100_fromBundle,"lime.utils.AssetLibrary","fromBundle",0x93e22ab9,"lime.utils.AssetLibrary.fromBundle","lime/utils/AssetLibrary.hx",100,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_141_fromManifest,"lime.utils.AssetLibrary","fromManifest",0x0354aea6,"lime.utils.AssetLibrary.fromManifest","lime/utils/AssetLibrary.hx",141,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_535_loadFromBytes,"lime.utils.AssetLibrary","loadFromBytes",0x12cf6b8e,"lime.utils.AssetLibrary.loadFromBytes","lime/utils/AssetLibrary.hx",535,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_533_loadFromBytes,"lime.utils.AssetLibrary","loadFromBytes",0x12cf6b8e,"lime.utils.AssetLibrary.loadFromBytes","lime/utils/AssetLibrary.hx",533,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_543_loadFromFile,"lime.utils.AssetLibrary","loadFromFile",0xee0460b9,"lime.utils.AssetLibrary.loadFromFile","lime/utils/AssetLibrary.hx",543,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_541_loadFromFile,"lime.utils.AssetLibrary","loadFromFile",0xee0460b9,"lime.utils.AssetLibrary.loadFromFile","lime/utils/AssetLibrary.hx",541,0x8b4b8bbb)
HX_LOCAL_STACK_FRAME(_hx_pos_302b88cc6233d9fb_548_loadFromManifest,"lime.utils.AssetLibrary","loadFromManifest",0xde94f06c,"lime.utils.AssetLibrary.loadFromManifest","lime/utils/AssetLibrary.hx",548,0x8b4b8bbb)
namespace lime{
namespace utils{

void AssetLibrary_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_23_new)
HXLINE(  44)		this->types =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  43)		this->sizes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  41)		this->preload =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  40)		this->paths =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		this->pathGroups =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  37)		this->classTypes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  36)		this->cachedText =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  35)		this->cachedImages =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  34)		this->cachedFonts =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  33)		this->cachedBytes =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  32)		this->cachedAudioBuffers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  25)		this->onChange =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  48)		this->bytesLoaded = 0;
HXLINE(  49)		this->bytesTotal = 0;
            	}

Dynamic AssetLibrary_obj::__CreateEmpty() { return new AssetLibrary_obj; }

void *AssetLibrary_obj::_hx_vtable = 0;

Dynamic AssetLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetLibrary_obj > _hx_result = new AssetLibrary_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetLibrary_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25654723;
}

bool AssetLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_53_exists)
HXLINE(  54)		::String requestedType;
HXDLIN(  54)		if (::hx::IsNotNull( type )) {
HXLINE(  54)			requestedType = type;
            		}
            		else {
HXLINE(  54)			requestedType = null();
            		}
HXLINE(  55)		::String assetType = this->types->get_string(id);
HXLINE(  57)		if (::hx::IsNotNull( assetType )) {
HXLINE(  59)			bool _hx_tmp;
HXDLIN(  59)			if ((assetType != requestedType)) {
HXLINE(  60)				bool _hx_tmp1;
HXDLIN(  60)				if ((requestedType != HX_("SOUND",af,c4,ba,fe))) {
HXLINE(  60)					_hx_tmp1 = (requestedType == HX_("MUSIC",85,08,49,8e));
            				}
            				else {
HXLINE(  60)					_hx_tmp1 = true;
            				}
HXDLIN(  60)				if (_hx_tmp1) {
HXLINE(  60)					if ((assetType != HX_("MUSIC",85,08,49,8e))) {
HXLINE(  59)						_hx_tmp = (assetType == HX_("SOUND",af,c4,ba,fe));
            					}
            					else {
HXLINE(  59)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  59)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(  59)				_hx_tmp = true;
            			}
HXDLIN(  59)			if (_hx_tmp) {
HXLINE(  62)				return true;
            			}
HXLINE(  79)			bool _hx_tmp1;
HXDLIN(  79)			bool _hx_tmp2;
HXDLIN(  79)			if ((requestedType != HX_("BINARY",01,68,8e,9f))) {
HXLINE(  79)				_hx_tmp2 = ::hx::IsNull( requestedType );
            			}
            			else {
HXLINE(  79)				_hx_tmp2 = true;
            			}
HXDLIN(  79)			if (!(_hx_tmp2)) {
HXLINE(  79)				if ((assetType == HX_("BINARY",01,68,8e,9f))) {
HXLINE(  79)					_hx_tmp1 = (requestedType == HX_("TEXT",ad,94,ba,37));
            				}
            				else {
HXLINE(  79)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE(  79)				_hx_tmp1 = true;
            			}
HXDLIN(  79)			if (_hx_tmp1) {
HXLINE(  81)				return true;
            			}
            		}
HXLINE(  86)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,exists,return )

 ::Dynamic AssetLibrary_obj::getAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_172_getAsset)
HXDLIN( 172)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ){
HXLINE( 174)			return this->getBytes(id);
HXDLIN( 174)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 175)			return this->getFont(id);
HXDLIN( 175)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 176)			return this->getImage(id);
HXDLIN( 176)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 177)			return this->getAudioBuffer(id);
HXDLIN( 177)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 180)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Not sure how to get template: ",a1,19,8c,ad) + id)));
HXDLIN( 180)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 178)			return this->getText(id);
HXDLIN( 178)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE( 181)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown asset type: ",86,5e,db,f9) + type)));
            		}
            		_hx_goto_2:;
HXLINE( 172)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,getAsset,return )

 ::lime::media::AudioBuffer AssetLibrary_obj::getAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_187_getAudioBuffer)
HXDLIN( 187)		if (this->cachedAudioBuffers->exists(id)) {
HXLINE( 189)			return ( ( ::lime::media::AudioBuffer)(this->cachedAudioBuffers->get(id)) );
            		}
            		else {
HXLINE( 191)			if (this->classTypes->exists(id)) {
HXLINE( 198)				return ::lime::media::AudioBuffer_obj::fromBytes(::hx::TCast<  ::haxe::io::Bytes >::cast(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0))));
            			}
            			else {
HXLINE( 203)				return ::lime::media::AudioBuffer_obj::fromFile(this->getPath(id));
            			}
            		}
HXLINE( 187)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getAudioBuffer,return )

 ::haxe::io::Bytes AssetLibrary_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_209_getBytes)
HXDLIN( 209)		if (this->cachedBytes->exists(id)) {
HXLINE( 211)			return ( ( ::haxe::io::Bytes)(this->cachedBytes->get(id)) );
            		}
            		else {
HXLINE( 213)			if (this->cachedText->exists(id)) {
HXLINE( 215)				 ::haxe::io::Bytes bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::ofString(this->cachedText->get_string(id));
HXLINE( 216)				this->cachedBytes->set(id,bytes);
HXLINE( 217)				return bytes;
            			}
            			else {
HXLINE( 219)				if (this->classTypes->exists(id)) {
HXLINE( 237)					return ::hx::TCast<  ::haxe::io::Bytes >::cast(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0)));
            				}
            				else {
HXLINE( 242)					return ::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(this->getPath(id));
            				}
            			}
            		}
HXLINE( 209)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getBytes,return )

 ::lime::text::Font AssetLibrary_obj::getFont(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_248_getFont)
HXDLIN( 248)		if (this->cachedFonts->exists(id)) {
HXLINE( 250)			return ( ( ::lime::text::Font)(this->cachedFonts->get(id)) );
            		}
            		else {
HXLINE( 252)			if (this->classTypes->exists(id)) {
HXLINE( 261)				return ::hx::TCast<  ::lime::text::Font >::cast(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0)));
            			}
            			else {
HXLINE( 266)				return ::lime::text::Font_obj::fromFile(this->getPath(id));
            			}
            		}
HXLINE( 248)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getFont,return )

 ::lime::graphics::Image AssetLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_272_getImage)
HXDLIN( 272)		if (this->cachedImages->exists(id)) {
HXLINE( 274)			return ( ( ::lime::graphics::Image)(this->cachedImages->get(id)) );
            		}
            		else {
HXLINE( 276)			if (this->classTypes->exists(id)) {
HXLINE( 281)				return ::hx::TCast<  ::lime::graphics::Image >::cast(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0)));
            			}
            			else {
HXLINE( 286)				return ::lime::graphics::Image_obj::fromFile(this->getPath(id));
            			}
            		}
HXLINE( 272)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getImage,return )

::String AssetLibrary_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_292_getPath)
HXDLIN( 292)		if (this->paths->exists(id)) {
HXLINE( 294)			return this->paths->get_string(id);
            		}
            		else {
HXLINE( 296)			if (this->pathGroups->exists(id)) {
HXLINE( 298)				return ( (::String)(this->pathGroups->get(id)->__GetItem(0)) );
            			}
            			else {
HXLINE( 302)				return null();
            			}
            		}
HXLINE( 292)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getPath,return )

::String AssetLibrary_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_308_getText)
HXDLIN( 308)		if (this->cachedText->exists(id)) {
HXLINE( 310)			return this->cachedText->get_string(id);
            		}
            		else {
HXLINE( 314)			 ::haxe::io::Bytes bytes = this->getBytes(id);
HXLINE( 316)			if (::hx::IsNull( bytes )) {
HXLINE( 318)				return null();
            			}
            			else {
HXLINE( 322)				return bytes->getString(0,bytes->length,null());
            			}
            		}
HXLINE( 308)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getText,return )

bool AssetLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_330_isLocal)
HXDLIN( 330)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,isLocal,return )

::Array< ::String > AssetLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_359_list)
HXLINE( 360)		::String requestedType;
HXDLIN( 360)		if (::hx::IsNotNull( type )) {
HXLINE( 360)			requestedType = type;
            		}
            		else {
HXLINE( 360)			requestedType = null();
            		}
HXLINE( 361)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 363)		{
HXLINE( 363)			 ::Dynamic id = this->types->keys();
HXDLIN( 363)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 363)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 365)				bool _hx_tmp;
HXDLIN( 365)				if (::hx::IsNotNull( requestedType )) {
HXLINE( 365)					_hx_tmp = this->exists(id1,type);
            				}
            				else {
HXLINE( 365)					_hx_tmp = true;
            				}
HXDLIN( 365)				if (_hx_tmp) {
HXLINE( 367)					items->push(id1);
            				}
            			}
            		}
HXLINE( 371)		return items;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,list,return )

 ::lime::app::Future AssetLibrary_obj::loadAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_376_loadAsset)
HXDLIN( 376)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ){
HXLINE( 378)			return this->loadBytes(id);
HXDLIN( 378)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 379)			return this->loadFont(id);
HXDLIN( 379)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 380)			return this->loadImage(id);
HXDLIN( 380)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 381)			return this->loadAudioBuffer(id);
HXDLIN( 381)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 384)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Not sure how to load template: ",43,70,39,d8) + id)));
HXDLIN( 384)			goto _hx_goto_13;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 382)			return this->loadText(id);
HXDLIN( 382)			goto _hx_goto_13;
            		}
            		/* default */{
HXLINE( 385)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Unknown asset type: ",86,5e,db,f9) + type)));
            		}
            		_hx_goto_13:;
HXLINE( 376)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadAsset,return )

 ::lime::app::Future AssetLibrary_obj::load(){
            	HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_390_load)
HXLINE( 391)		if (this->loaded) {
HXLINE( 393)			return ::lime::app::Future_obj::withValue(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 396)		if (::hx::IsNull( this->promise )) {
HXLINE( 398)			this->promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 399)			this->bytesLoadedCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 401)			this->assetsLoaded = 0;
HXLINE( 402)			this->assetsTotal = 1;
HXLINE( 404)			{
HXLINE( 404)				 ::Dynamic id = this->preload->keys();
HXDLIN( 404)				while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 404)					::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 406)					if (!(this->preload->get_bool(id1))) {
HXLINE( 406)						continue;
            					}
HXLINE( 408)					::String _hx_tmp = ((((HX_("Preloading asset: ",4f,4a,58,bd) + id1) + HX_(" [",3b,1c,00,00)) + this->types->get(id1)) + HX_("]",5d,00,00,00));
HXDLIN( 408)					::lime::utils::Log_obj::verbose(_hx_tmp,::hx::SourceInfo(HX_("lime/utils/AssetLibrary.hx",bb,8b,4b,8b),408,HX_("lime.utils.AssetLibrary",21,55,e9,fc),HX_("load",26,9a,b7,47)));
HXLINE( 410)					{
HXLINE( 410)						::String _g = this->types->get_string(id1);
HXDLIN( 410)						if (::hx::IsNotNull( _g )) {
HXLINE( 410)							::String _hx_switch_0 = _g;
            							if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ){
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::Dynamic,_g) HXARGC(2)
            								void _hx_run(int bytesLoaded,int bytesTotal){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_416_load)
HXLINE( 416)									_g(id,bytesLoaded,bytesTotal);
            								}
            								HX_END_LOCAL_FUNC2((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id2, ::Dynamic,_g1) HXARGC(1)
            								void _hx_run( ::Dynamic message){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_417_load)
HXLINE( 417)									_g1(id2,message);
            								}
            								HX_END_LOCAL_FUNC1((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,_g2,::String,id3) HXARGC(1)
            								void _hx_run( ::haxe::io::Bytes bytes){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_418_load)
HXLINE( 418)									_g2(id3,bytes);
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 413)								this->assetsTotal++;
HXLINE( 415)								 ::lime::app::Future future = this->loadBytes(id1);
HXLINE( 416)								 ::Dynamic _g = this->load_onProgress_dyn();
HXDLIN( 416)								::String id = id1;
HXDLIN( 416)								future->onProgress( ::Dynamic(new _hx_Closure_0(id,_g)));
HXLINE( 417)								 ::Dynamic _g1 = this->load_onError_dyn();
HXDLIN( 417)								::String id2 = id1;
HXDLIN( 417)								future->onError( ::Dynamic(new _hx_Closure_1(id2,_g1)));
HXLINE( 418)								 ::Dynamic _g2 = this->loadBytes_onComplete_dyn();
HXDLIN( 418)								::String id3 = id1;
HXDLIN( 418)								future->onComplete( ::Dynamic(new _hx_Closure_2(_g2,id3)));
HXLINE( 412)								goto _hx_goto_16;
            							}
            							if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3,::String,id, ::Dynamic,_g) HXARGC(2)
            								void _hx_run(int bytesLoaded,int bytesTotal){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_424_load)
HXLINE( 424)									_g(id,bytesLoaded,bytesTotal);
            								}
            								HX_END_LOCAL_FUNC2((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4,::String,id2, ::Dynamic,_g1) HXARGC(1)
            								void _hx_run( ::Dynamic message){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_425_load)
HXLINE( 425)									_g1(id2,message);
            								}
            								HX_END_LOCAL_FUNC1((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_5, ::Dynamic,_g2,::String,id3) HXARGC(1)
            								void _hx_run( ::lime::text::Font font){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_426_load)
HXLINE( 426)									_g2(id3,font);
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 421)								this->assetsTotal++;
HXLINE( 423)								 ::lime::app::Future future = this->loadFont(id1);
HXLINE( 424)								 ::Dynamic _g = this->load_onProgress_dyn();
HXDLIN( 424)								::String id = id1;
HXDLIN( 424)								future->onProgress( ::Dynamic(new _hx_Closure_3(id,_g)));
HXLINE( 425)								 ::Dynamic _g1 = this->load_onError_dyn();
HXDLIN( 425)								::String id2 = id1;
HXDLIN( 425)								future->onError( ::Dynamic(new _hx_Closure_4(id2,_g1)));
HXLINE( 426)								 ::Dynamic _g2 = this->loadFont_onComplete_dyn();
HXDLIN( 426)								::String id3 = id1;
HXDLIN( 426)								future->onComplete( ::Dynamic(new _hx_Closure_5(_g2,id3)));
HXLINE( 420)								goto _hx_goto_16;
            							}
            							if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_6,::String,id, ::Dynamic,_g) HXARGC(2)
            								void _hx_run(int bytesLoaded,int bytesTotal){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_432_load)
HXLINE( 432)									_g(id,bytesLoaded,bytesTotal);
            								}
            								HX_END_LOCAL_FUNC2((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_7,::String,id2, ::Dynamic,_g1) HXARGC(1)
            								void _hx_run( ::Dynamic message){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_433_load)
HXLINE( 433)									_g1(id2,message);
            								}
            								HX_END_LOCAL_FUNC1((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_8, ::Dynamic,_g2,::String,id3) HXARGC(1)
            								void _hx_run( ::lime::graphics::Image image){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_434_load)
HXLINE( 434)									_g2(id3,image);
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 429)								this->assetsTotal++;
HXLINE( 431)								 ::lime::app::Future future = this->loadImage(id1);
HXLINE( 432)								 ::Dynamic _g = this->load_onProgress_dyn();
HXDLIN( 432)								::String id = id1;
HXDLIN( 432)								future->onProgress( ::Dynamic(new _hx_Closure_6(id,_g)));
HXLINE( 433)								 ::Dynamic _g1 = this->load_onError_dyn();
HXDLIN( 433)								::String id2 = id1;
HXDLIN( 433)								future->onError( ::Dynamic(new _hx_Closure_7(id2,_g1)));
HXLINE( 434)								 ::Dynamic _g2 = this->loadImage_onComplete_dyn();
HXDLIN( 434)								::String id3 = id1;
HXDLIN( 434)								future->onComplete( ::Dynamic(new _hx_Closure_8(_g2,id3)));
HXLINE( 428)								goto _hx_goto_16;
            							}
            							if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_9,::String,id, ::Dynamic,_g) HXARGC(2)
            								void _hx_run(int bytesLoaded,int bytesTotal){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_440_load)
HXLINE( 440)									_g(id,bytesLoaded,bytesTotal);
            								}
            								HX_END_LOCAL_FUNC2((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_10,::String,id2, ::Dynamic,_g1) HXARGC(1)
            								void _hx_run( ::Dynamic message){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_441_load)
HXLINE( 441)									_g1(id2,message);
            								}
            								HX_END_LOCAL_FUNC1((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_11, ::Dynamic,_g2,::String,id3) HXARGC(1)
            								void _hx_run( ::lime::media::AudioBuffer audioBuffer){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_442_load)
HXLINE( 442)									_g2(id3,audioBuffer);
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 437)								this->assetsTotal++;
HXLINE( 439)								 ::lime::app::Future future = this->loadAudioBuffer(id1);
HXLINE( 440)								 ::Dynamic _g = this->load_onProgress_dyn();
HXDLIN( 440)								::String id = id1;
HXDLIN( 440)								future->onProgress( ::Dynamic(new _hx_Closure_9(id,_g)));
HXLINE( 441)								 ::Dynamic _g1 = this->loadAudioBuffer_onError_dyn();
HXDLIN( 441)								::String id2 = id1;
HXDLIN( 441)								future->onError( ::Dynamic(new _hx_Closure_10(id2,_g1)));
HXLINE( 442)								 ::Dynamic _g2 = this->loadAudioBuffer_onComplete_dyn();
HXDLIN( 442)								::String id3 = id1;
HXDLIN( 442)								future->onComplete( ::Dynamic(new _hx_Closure_11(_g2,id3)));
HXLINE( 436)								goto _hx_goto_16;
            							}
            							if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_12,::String,id, ::Dynamic,_g) HXARGC(2)
            								void _hx_run(int bytesLoaded,int bytesTotal){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_448_load)
HXLINE( 448)									_g(id,bytesLoaded,bytesTotal);
            								}
            								HX_END_LOCAL_FUNC2((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_13,::String,id2, ::Dynamic,_g1) HXARGC(1)
            								void _hx_run( ::Dynamic message){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_449_load)
HXLINE( 449)									_g1(id2,message);
            								}
            								HX_END_LOCAL_FUNC1((void))

            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_14, ::Dynamic,_g2,::String,id3) HXARGC(1)
            								void _hx_run(::String text){
            									HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_450_load)
HXLINE( 450)									_g2(id3,text);
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 445)								this->assetsTotal++;
HXLINE( 447)								 ::lime::app::Future future = this->loadText(id1);
HXLINE( 448)								 ::Dynamic _g = this->load_onProgress_dyn();
HXDLIN( 448)								::String id = id1;
HXDLIN( 448)								future->onProgress( ::Dynamic(new _hx_Closure_12(id,_g)));
HXLINE( 449)								 ::Dynamic _g1 = this->load_onError_dyn();
HXDLIN( 449)								::String id2 = id1;
HXDLIN( 449)								future->onError( ::Dynamic(new _hx_Closure_13(id2,_g1)));
HXLINE( 450)								 ::Dynamic _g2 = this->loadText_onComplete_dyn();
HXDLIN( 450)								::String id3 = id1;
HXDLIN( 450)								future->onComplete( ::Dynamic(new _hx_Closure_14(_g2,id3)));
HXLINE( 444)								goto _hx_goto_16;
            							}
            							/* default */{
            							}
            							_hx_goto_16:;
            						}
            					}
            				}
            			}
HXLINE( 456)			this->_hx___assetLoaded(null());
            		}
HXLINE( 459)		return this->promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AssetLibrary_obj,load,return )

 ::lime::app::Future AssetLibrary_obj::loadAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_464_loadAudioBuffer)
HXDLIN( 464)		if (this->cachedAudioBuffers->exists(id)) {
HXLINE( 466)			return ::lime::app::Future_obj::withValue(this->cachedAudioBuffers->get(id));
            		}
            		else {
HXLINE( 468)			if (this->classTypes->exists(id)) {
HXLINE( 470)				return ::lime::app::Future_obj::withValue(::lime::media::AudioBuffer_obj::fromBytes(::hx::TCast<  ::haxe::io::Bytes >::cast(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0)))));
            			}
            			else {
HXLINE( 474)				if (this->pathGroups->exists(id)) {
HXLINE( 476)					return ::lime::media::AudioBuffer_obj::loadFromFiles(( (::Array< ::String >)(this->pathGroups->get(id)) ));
            				}
            				else {
HXLINE( 480)					return ::lime::media::AudioBuffer_obj::loadFromFile(this->paths->get_string(id));
            				}
            			}
            		}
HXLINE( 464)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadAudioBuffer,return )

 ::lime::app::Future AssetLibrary_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_487_loadBytes)
HXDLIN( 487)		if (this->cachedBytes->exists(id)) {
HXLINE( 489)			return ::lime::app::Future_obj::withValue(this->cachedBytes->get(id));
            		}
            		else {
HXLINE( 491)			if (this->classTypes->exists(id)) {
HXLINE( 496)				return ::lime::app::Future_obj::withValue(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0)));
            			}
            			else {
HXLINE( 501)				return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(this->getPath(id));
            			}
            		}
HXLINE( 487)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadBytes,return )

 ::lime::app::Future AssetLibrary_obj::loadFont(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_507_loadFont)
HXDLIN( 507)		if (this->cachedFonts->exists(id)) {
HXLINE( 509)			return ::lime::app::Future_obj::withValue(this->cachedFonts->get(id));
            		}
            		else {
HXLINE( 511)			if (this->classTypes->exists(id)) {
HXLINE( 513)				 ::lime::text::Font font = ( ( ::lime::text::Font)(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 518)				return ::lime::app::Future_obj::withValue(font);
            			}
            			else {
HXLINE( 526)				return ::lime::text::Font_obj::loadFromFile(this->getPath(id));
            			}
            		}
HXLINE( 507)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadFont,return )

 ::lime::app::Future AssetLibrary_obj::loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_562_loadImage)
HXDLIN( 562)		 ::lime::utils::AssetLibrary _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 563)		if (this->cachedImages->exists(id)) {
HXLINE( 565)			return ::lime::app::Future_obj::withValue(this->cachedImages->get(id));
            		}
            		else {
HXLINE( 567)			if (this->classTypes->exists(id)) {
HXLINE( 569)				return ::lime::app::Future_obj::withValue(::Type_obj::createInstance(this->classTypes->get(id),::cpp::VirtualArray_obj::__new(0)));
            			}
            			else {
HXLINE( 571)				if (this->cachedBytes->exists(id)) {
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::utils::AssetLibrary,_gthis) HXARGC(1)
            					 ::lime::app::Future _hx_run( ::lime::graphics::Image image){
            						HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_574_loadImage)
HXLINE( 575)						_gthis->cachedBytes->remove(id);
HXLINE( 576)						_gthis->cachedImages->set(id,image);
HXLINE( 577)						return ::lime::app::Future_obj::withValue(image);
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 573)					return ::lime::graphics::Image_obj::loadFromBytes(( ( ::haxe::io::Bytes)(this->cachedBytes->get(id)) ))->then( ::Dynamic(new _hx_Closure_0(id,_gthis)));
            				}
            				else {
HXLINE( 582)					return ::lime::graphics::Image_obj::loadFromFile(this->getPath(id));
            				}
            			}
            		}
HXLINE( 563)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadImage,return )

 ::lime::app::Future AssetLibrary_obj::loadText(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_588_loadText)
HXDLIN( 588)		if (this->cachedText->exists(id)) {
HXLINE( 590)			return ::lime::app::Future_obj::withValue(this->cachedText->get(id));
            		}
            		else {
HXLINE( 592)			bool _hx_tmp;
HXDLIN( 592)			if (!(this->cachedBytes->exists(id))) {
HXLINE( 592)				_hx_tmp = this->classTypes->exists(id);
            			}
            			else {
HXLINE( 592)				_hx_tmp = true;
            			}
HXDLIN( 592)			if (_hx_tmp) {
HXLINE( 594)				 ::haxe::io::Bytes bytes = this->getBytes(id);
HXLINE( 596)				if (::hx::IsNull( bytes )) {
HXLINE( 598)					return ::lime::app::Future_obj::withValue(null());
            				}
            				else {
HXLINE( 602)					::String text = bytes->getString(0,bytes->length,null());
HXLINE( 603)					this->cachedText->set(id,text);
HXLINE( 604)					return ::lime::app::Future_obj::withValue(text);
            				}
            			}
            			else {
HXLINE( 609)				 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 610)				return request->load(this->getPath(id));
            			}
            		}
HXLINE( 588)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadText,return )

void AssetLibrary_obj::unload(){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_615_unload)
HXLINE( 617)		this->cachedBytes->clear();
HXLINE( 618)		this->cachedFonts->clear();
HXLINE( 619)		this->cachedImages->clear();
HXLINE( 620)		this->cachedAudioBuffers->clear();
HXLINE( 621)		this->cachedText->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AssetLibrary_obj,unload,(void))

void AssetLibrary_obj::_hx___assetLoaded(::String id){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_632___assetLoaded)
HXLINE( 633)		this->assetsLoaded++;
HXLINE( 635)		if (::hx::IsNotNull( id )) {
HXLINE( 637)			::String _hx_tmp = ((((HX_("Loaded asset: ",9b,25,2e,eb) + id) + HX_(" [",3b,1c,00,00)) + this->types->get(id)) + HX_("] (",a5,ad,46,00));
HXDLIN( 637)			::lime::utils::Log_obj::verbose(((((_hx_tmp + (this->assetsLoaded - 1)) + HX_("/",2f,00,00,00)) + (this->assetsTotal - 1)) + HX_(")",29,00,00,00)),::hx::SourceInfo(HX_("lime/utils/AssetLibrary.hx",bb,8b,4b,8b),637,HX_("lime.utils.AssetLibrary",21,55,e9,fc),HX_("__assetLoaded",f5,7a,49,36)));
            		}
HXLINE( 640)		if (::hx::IsNotNull( id )) {
HXLINE( 642)			 ::Dynamic size;
HXDLIN( 642)			if (this->sizes->exists(id)) {
HXLINE( 642)				size = this->sizes->get(id);
            			}
            			else {
HXLINE( 642)				size = 0;
            			}
HXLINE( 644)			if (!(this->bytesLoadedCache->exists(id))) {
HXLINE( 646)				 ::lime::utils::AssetLibrary _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 646)				_hx_tmp->bytesLoaded = (_hx_tmp->bytesLoaded + size);
            			}
            			else {
HXLINE( 650)				 ::Dynamic cache = this->bytesLoadedCache->get(id);
HXLINE( 652)				if (::hx::IsLess( cache,size )) {
HXLINE( 654)					 ::lime::utils::AssetLibrary _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 654)					_hx_tmp->bytesLoaded = (_hx_tmp->bytesLoaded + (( (int)(size) ) - ( (int)(cache) )));
            				}
            			}
HXLINE( 658)			this->bytesLoadedCache->set(id,size);
            		}
HXLINE( 661)		if ((this->assetsLoaded < this->assetsTotal)) {
HXLINE( 663)			this->promise->progress(this->bytesLoaded,this->bytesTotal);
            		}
            		else {
HXLINE( 667)			this->loaded = true;
HXLINE( 668)			this->promise->progress(this->bytesTotal,this->bytesTotal);
HXLINE( 669)			this->promise->complete(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,_hx___assetLoaded,(void))

::String AssetLibrary_obj::_hx___cacheBreak(::String path){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_675___cacheBreak)
HXDLIN( 675)		return ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,_hx___cacheBreak,return )

void AssetLibrary_obj::_hx___fromBundle( ::lime::utils::AssetBundle bundle, ::lime::utils::AssetManifest manifest){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_680___fromBundle)
HXDLIN( 680)		if (::hx::IsNotNull( manifest )) {
HXLINE( 682)			::String id;
HXDLIN( 682)			 ::haxe::io::Bytes data;
HXDLIN( 682)			::String type;
HXLINE( 683)			{
HXLINE( 683)				int _g = 0;
HXDLIN( 683)				::cpp::VirtualArray _g1 = manifest->assets;
HXDLIN( 683)				while((_g < _g1->get_length())){
HXLINE( 683)					 ::Dynamic asset = _g1->__get(_g);
HXDLIN( 683)					_g = (_g + 1);
HXLINE( 685)					if (::Reflect_obj::hasField(asset,HX_("id",db,5b,00,00))) {
HXLINE( 685)						id = ( (::String)(asset->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
            					}
            					else {
HXLINE( 685)						id = ( (::String)(asset->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            					}
HXLINE( 686)					data = ( ( ::haxe::io::Bytes)(bundle->data->get(( (::String)(asset->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) ))) );
HXLINE( 688)					if (::Reflect_obj::hasField(asset,HX_("type",ba,f2,08,4d))) {
HXLINE( 690)						type = ( (::String)(asset->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) );
HXLINE( 691)						::String _hx_switch_0 = type;
            						if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 699)							::Dynamic this1 = this->cachedFonts;
HXDLIN( 699)							( ( ::haxe::ds::StringMap)(this1) )->set(id,::lime::text::Font_obj::fromBytes(data));
HXDLIN( 699)							goto _hx_goto_43;
            						}
            						if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 695)							::Dynamic this1 = this->cachedImages;
HXDLIN( 695)							( ( ::haxe::ds::StringMap)(this1) )->set(id,::lime::graphics::Image_obj::fromBytes(data));
HXDLIN( 695)							goto _hx_goto_43;
            						}
            						if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 697)							::Dynamic this1 = this->cachedAudioBuffers;
HXDLIN( 697)							( ( ::haxe::ds::StringMap)(this1) )->set(id,::lime::media::AudioBuffer_obj::fromBytes(data));
HXDLIN( 697)							goto _hx_goto_43;
            						}
            						if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 702)							::Dynamic this1 = this->cachedText;
HXDLIN( 702)							::String value;
HXDLIN( 702)							if (::hx::IsNotNull( data )) {
HXLINE( 702)								value = ::Std_obj::string(data);
            							}
            							else {
HXLINE( 702)								value = null();
            							}
HXDLIN( 702)							( ( ::haxe::ds::StringMap)(this1) )->set(id,value);
HXDLIN( 702)							goto _hx_goto_43;
            						}
            						/* default */{
HXLINE( 704)							this->cachedBytes->set(id,data);
            						}
            						_hx_goto_43:;
HXLINE( 706)						this->types->set(id,( (::String)(asset->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) ));
            					}
            					else {
HXLINE( 710)						this->cachedBytes->set(id,data);
HXLINE( 711)						this->types->set(id,HX_("BINARY",01,68,8e,9f));
            					}
            				}
            			}
            		}
            		else {
HXLINE( 717)			int _g = 0;
HXDLIN( 717)			::Array< ::String > _g1 = bundle->paths;
HXDLIN( 717)			while((_g < _g1->length)){
HXLINE( 717)				::String path = _g1->__get(_g);
HXDLIN( 717)				_g = (_g + 1);
HXLINE( 719)				{
HXLINE( 719)					::Dynamic this1 = this->cachedBytes;
HXDLIN( 719)					( ( ::haxe::ds::StringMap)(this1) )->set(path,( ( ::haxe::io::Bytes)(bundle->data->get(path)) ));
            				}
HXLINE( 720)				this->types->set(path,HX_("BINARY",01,68,8e,9f));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,_hx___fromBundle,(void))

void AssetLibrary_obj::_hx___fromManifest( ::lime::utils::AssetManifest manifest){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_726___fromManifest)
HXLINE( 727)		bool hasSize = (manifest->version >= 2);
HXLINE( 728)		int size;
HXDLIN( 728)		::String id;
HXDLIN( 728)		::Array< ::String > pathGroup;
HXDLIN( 728)		::hx::Class classRef;
HXLINE( 730)		::String basePath = manifest->rootPath;
HXLINE( 731)		if (::hx::IsNull( basePath )) {
HXLINE( 731)			basePath = HX_("",00,00,00,00);
            		}
HXLINE( 732)		if ((basePath != HX_("",00,00,00,00))) {
HXLINE( 732)			basePath = (basePath + HX_("/",2f,00,00,00));
            		}
HXLINE( 734)		{
HXLINE( 734)			int _g = 0;
HXDLIN( 734)			::cpp::VirtualArray _g1 = manifest->assets;
HXDLIN( 734)			while((_g < _g1->get_length())){
HXLINE( 734)				 ::Dynamic asset = _g1->__get(_g);
HXDLIN( 734)				_g = (_g + 1);
HXLINE( 736)				bool size1;
HXDLIN( 736)				if (hasSize) {
HXLINE( 736)					size1 = ::Reflect_obj::hasField(asset,HX_("size",c1,a0,53,4c));
            				}
            				else {
HXLINE( 736)					size1 = false;
            				}
HXDLIN( 736)				if (size1) {
HXLINE( 736)					size = ( (int)(asset->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 736)					size = 100;
            				}
HXLINE( 737)				if (::Reflect_obj::hasField(asset,HX_("id",db,5b,00,00))) {
HXLINE( 737)					id = ( (::String)(asset->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 737)					id = ( (::String)(asset->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            				}
HXLINE( 739)				if (::Reflect_obj::hasField(asset,HX_("path",a5,e5,51,4a))) {
HXLINE( 741)					::Dynamic this1 = this->paths;
HXDLIN( 741)					( ( ::haxe::ds::StringMap)(this1) )->set(id,this->_hx___cacheBreak(this->_hx___resolvePath((basePath + ::Std_obj::string(::Reflect_obj::field(asset,HX_("path",a5,e5,51,4a)))))));
            				}
HXLINE( 744)				if (::Reflect_obj::hasField(asset,HX_("pathGroup",5a,a7,b4,8f))) {
HXLINE( 746)					pathGroup = ( (::Array< ::String >)(::Reflect_obj::field(asset,HX_("pathGroup",5a,a7,b4,8f))) );
HXLINE( 748)					{
HXLINE( 748)						int _g = 0;
HXDLIN( 748)						int _g1 = pathGroup->length;
HXDLIN( 748)						while((_g < _g1)){
HXLINE( 748)							_g = (_g + 1);
HXDLIN( 748)							int i = (_g - 1);
HXLINE( 750)							pathGroup[i] = this->_hx___cacheBreak(this->_hx___resolvePath((basePath + pathGroup->__get(i))));
            						}
            					}
HXLINE( 753)					this->pathGroups->set(id,pathGroup);
            				}
HXLINE( 756)				this->sizes->set(id,size);
HXLINE( 757)				this->types->set(id,( (::String)(asset->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic)) ));
HXLINE( 759)				if (::Reflect_obj::hasField(asset,HX_("preload",c9,47,43,35))) {
HXLINE( 761)					::Dynamic this1 = this->preload;
HXDLIN( 761)					( ( ::haxe::ds::StringMap)(this1) )->set(id,( (bool)(::Reflect_obj::field(asset,HX_("preload",c9,47,43,35))) ));
            				}
HXLINE( 764)				if (::Reflect_obj::hasField(asset,HX_("className",a3,92,3d,dc))) {
HXLINE( 766)					classRef = ::Type_obj::resolveClass(( (::String)(::Reflect_obj::field(asset,HX_("className",a3,92,3d,dc))) ));
HXLINE( 775)					this->classTypes->set(id,classRef);
            				}
            			}
            		}
HXLINE( 779)		this->bytesTotal = 0;
HXLINE( 781)		{
HXLINE( 781)			int _g2 = 0;
HXDLIN( 781)			::cpp::VirtualArray _g3 = manifest->assets;
HXDLIN( 781)			while((_g2 < _g3->get_length())){
HXLINE( 781)				 ::Dynamic asset = _g3->__get(_g2);
HXDLIN( 781)				_g2 = (_g2 + 1);
HXLINE( 783)				if (::Reflect_obj::hasField(asset,HX_("id",db,5b,00,00))) {
HXLINE( 783)					id = ( (::String)(asset->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
            				}
            				else {
HXLINE( 783)					id = ( (::String)(asset->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            				}
HXLINE( 785)				bool _hx_tmp;
HXDLIN( 785)				bool _hx_tmp1;
HXDLIN( 785)				if (this->preload->exists(id)) {
HXLINE( 785)					_hx_tmp1 = this->preload->get_bool(id);
            				}
            				else {
HXLINE( 785)					_hx_tmp1 = false;
            				}
HXDLIN( 785)				if (_hx_tmp1) {
HXLINE( 785)					_hx_tmp = this->sizes->exists(id);
            				}
            				else {
HXLINE( 785)					_hx_tmp = false;
            				}
HXDLIN( 785)				if (_hx_tmp) {
HXLINE( 787)					 ::lime::utils::AssetLibrary _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 787)					int _hx_tmp1 = _hx_tmp->bytesTotal;
HXDLIN( 787)					_hx_tmp->bytesTotal = (_hx_tmp1 + this->sizes->get(id));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,_hx___fromManifest,(void))

::String AssetLibrary_obj::_hx___resolvePath(::String path){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_793___resolvePath)
HXLINE( 794)		path = ::StringTools_obj::replace(path,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 796)		int colonIdx = path.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 797)		bool _hx_tmp;
HXDLIN( 797)		if (::StringTools_obj::startsWith(path,HX_("http",88,9b,16,45))) {
HXLINE( 797)			_hx_tmp = (colonIdx > 0);
            		}
            		else {
HXLINE( 797)			_hx_tmp = false;
            		}
HXDLIN( 797)		if (_hx_tmp) {
HXLINE( 799)			int lastSlashIdx = (colonIdx + 3);
HXLINE( 800)			::String httpSection = path.substr(0,lastSlashIdx);
HXLINE( 801)			path = (httpSection + ::StringTools_obj::replace(path.substr(lastSlashIdx,null()),HX_("//",20,29,00,00),HX_("/",2f,00,00,00)));
            		}
            		else {
HXLINE( 805)			path = ::StringTools_obj::replace(path,HX_("//",20,29,00,00),HX_("/",2f,00,00,00));
            		}
HXLINE( 815)		if ((path.indexOf(HX_("./",41,28,00,00),null()) > -1)) {
HXLINE( 817)			::Array< ::String > split = path.split(HX_("/",2f,00,00,00));
HXLINE( 818)			::Array< ::String > newPath = ::Array_obj< ::String >::__new(0);
HXLINE( 820)			{
HXLINE( 820)				int _g = 0;
HXDLIN( 820)				int _g1 = split->length;
HXDLIN( 820)				while((_g < _g1)){
HXLINE( 820)					_g = (_g + 1);
HXDLIN( 820)					int i = (_g - 1);
HXLINE( 822)					if ((split->__get(i) == HX_("..",40,28,00,00))) {
HXLINE( 824)						bool _hx_tmp;
HXDLIN( 824)						if ((i != 0)) {
HXLINE( 824)							_hx_tmp = (newPath->__get((i - 1)) == HX_("..",40,28,00,00));
            						}
            						else {
HXLINE( 824)							_hx_tmp = true;
            						}
HXDLIN( 824)						if (_hx_tmp) {
HXLINE( 826)							newPath->push(HX_("..",40,28,00,00));
            						}
            						else {
HXLINE( 830)							newPath->pop();
            						}
            					}
            					else {
HXLINE( 833)						if ((split->__get(i) == HX_(".",2e,00,00,00))) {
HXLINE( 835)							if ((i == 0)) {
HXLINE( 837)								newPath->push(HX_(".",2e,00,00,00));
            							}
            						}
            						else {
HXLINE( 842)							newPath->push(split->__get(i));
            						}
            					}
            				}
            			}
HXLINE( 845)			path = newPath->join(HX_("/",2f,00,00,00));
            		}
HXLINE( 848)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,_hx___resolvePath,return )

void AssetLibrary_obj::loadAudioBuffer_onComplete(::String id, ::lime::media::AudioBuffer audioBuffer){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_853_loadAudioBuffer_onComplete)
HXLINE( 854)		this->cachedAudioBuffers->set(id,audioBuffer);
HXLINE( 856)		if (this->pathGroups->exists(id)) {
HXLINE( 858)			::Array< ::String > pathGroup = ( (::Array< ::String >)(this->pathGroups->get(id)) );
HXLINE( 860)			{
HXLINE( 860)				 ::Dynamic otherID = this->pathGroups->keys();
HXDLIN( 860)				while(( (bool)(otherID->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 860)					::String otherID1 = ( (::String)(otherID->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 862)					if ((otherID1 == id)) {
HXLINE( 862)						continue;
            					}
HXLINE( 864)					{
HXLINE( 864)						int _g = 0;
HXDLIN( 864)						while((_g < pathGroup->length)){
HXLINE( 864)							::String path = pathGroup->__get(_g);
HXDLIN( 864)							_g = (_g + 1);
HXLINE( 866)							if ((( (::Array< ::String >)(this->pathGroups->get(otherID1)) )->indexOf(path,null()) > -1)) {
HXLINE( 868)								this->cachedAudioBuffers->set(otherID1,audioBuffer);
HXLINE( 869)								goto _hx_goto_53;
            							}
            						}
            						_hx_goto_53:;
            					}
            				}
            			}
            		}
HXLINE( 875)		this->_hx___assetLoaded(id);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadAudioBuffer_onComplete,(void))

void AssetLibrary_obj::loadAudioBuffer_onError(::String id, ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_892_loadAudioBuffer_onError)
HXDLIN( 892)		this->load_onError(id,message);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadAudioBuffer_onError,(void))

void AssetLibrary_obj::loadBytes_onComplete(::String id, ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_897_loadBytes_onComplete)
HXLINE( 898)		this->cachedBytes->set(id,bytes);
HXLINE( 899)		this->_hx___assetLoaded(id);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadBytes_onComplete,(void))

void AssetLibrary_obj::loadFont_onComplete(::String id, ::lime::text::Font font){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_903_loadFont_onComplete)
HXLINE( 904)		this->cachedFonts->set(id,font);
HXLINE( 905)		this->_hx___assetLoaded(id);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFont_onComplete,(void))

void AssetLibrary_obj::loadImage_onComplete(::String id, ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_909_loadImage_onComplete)
HXLINE( 910)		this->cachedImages->set(id,image);
HXLINE( 911)		this->_hx___assetLoaded(id);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadImage_onComplete,(void))

void AssetLibrary_obj::loadText_onComplete(::String id,::String text){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_915_loadText_onComplete)
HXLINE( 916)		this->cachedText->set(id,text);
HXLINE( 917)		this->_hx___assetLoaded(id);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadText_onComplete,(void))

void AssetLibrary_obj::load_onError(::String id, ::Dynamic message){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_922_load_onError)
HXDLIN( 922)		bool _hx_tmp;
HXDLIN( 922)		if (::hx::IsNotNull( message )) {
HXDLIN( 922)			_hx_tmp = ::hx::IsNotEq( message,HX_("",00,00,00,00) );
            		}
            		else {
HXDLIN( 922)			_hx_tmp = false;
            		}
HXDLIN( 922)		if (_hx_tmp) {
HXLINE( 924)			 ::lime::app::Promise_lime_utils_AssetLibrary _hx_tmp = this->promise;
HXDLIN( 924)			_hx_tmp->error((((HX_("Error loading asset \"",d6,ff,4d,83) + id) + HX_("\": ",48,ff,19,00)) + ::Std_obj::string(message)));
            		}
            		else {
HXLINE( 928)			this->promise->error(((HX_("Error loading asset \"",d6,ff,4d,83) + id) + HX_("\"",22,00,00,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,load_onError,(void))

void AssetLibrary_obj::load_onProgress(::String id,int bytesLoaded,int bytesTotal){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_934_load_onProgress)
HXDLIN( 934)		if ((bytesLoaded > 0)) {
HXLINE( 936)			 ::Dynamic size = this->sizes->get(id);
HXLINE( 937)			Float percent;
HXLINE( 939)			if ((bytesTotal > 0)) {
HXLINE( 943)				percent = (( (Float)(bytesLoaded) ) / ( (Float)(bytesTotal) ));
HXLINE( 944)				if ((percent > 1)) {
HXLINE( 944)					percent = ( (Float)(1) );
            				}
HXLINE( 945)				bytesLoaded = ::Math_obj::floor((percent * ( (Float)(size) )));
            			}
            			else {
HXLINE( 947)				if (::hx::IsGreater( bytesLoaded,size )) {
HXLINE( 949)					bytesLoaded = ( (int)(size) );
            				}
            			}
HXLINE( 952)			if (this->bytesLoadedCache->exists(id)) {
HXLINE( 954)				 ::Dynamic cache = this->bytesLoadedCache->get(id);
HXLINE( 956)				if (::hx::IsNotEq( bytesLoaded,cache )) {
HXLINE( 958)					 ::lime::utils::AssetLibrary _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 958)					_hx_tmp->bytesLoaded = (_hx_tmp->bytesLoaded + (bytesLoaded - ( (int)(cache) )));
            				}
            			}
            			else {
HXLINE( 963)				 ::lime::utils::AssetLibrary _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 963)				_hx_tmp->bytesLoaded = (_hx_tmp->bytesLoaded + bytesLoaded);
            			}
HXLINE( 966)			this->bytesLoadedCache->set(id,bytesLoaded);
HXLINE( 967)			this->promise->progress(this->bytesLoaded,this->bytesTotal);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(AssetLibrary_obj,load_onProgress,(void))

 ::lime::utils::AssetLibrary AssetLibrary_obj::fromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_91_fromBytes)
HXDLIN(  91)		return ::lime::utils::AssetLibrary_obj::fromManifest(::lime::utils::AssetManifest_obj::fromBytes(bytes,rootPath));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromBytes,return )

 ::lime::utils::AssetLibrary AssetLibrary_obj::fromFile(::String path,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_96_fromFile)
HXDLIN(  96)		return ::lime::utils::AssetLibrary_obj::fromManifest(::lime::utils::AssetManifest_obj::fromFile(path,rootPath));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,fromFile,return )

 ::lime::utils::AssetLibrary AssetLibrary_obj::fromBundle( ::lime::utils::AssetBundle bundle){
            	HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_100_fromBundle)
HXLINE( 101)		if (bundle->data->exists(HX_("library.json",7b,9c,b0,78))) {
HXLINE( 103)			 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::fromBytes(( ( ::haxe::io::Bytes)(bundle->data->get(HX_("library.json",7b,9c,b0,78))) ),null());
HXLINE( 104)			if (::hx::IsNotNull( manifest )) {
HXLINE( 106)				 ::lime::utils::AssetLibrary library = null();
HXLINE( 108)				if (::hx::IsNull( manifest->libraryType )) {
HXLINE( 110)					library =  ::lime::utils::AssetLibrary_obj::__alloc( HX_CTX );
            				}
            				else {
HXLINE( 114)					::hx::Class libraryClass = ::Type_obj::resolveClass(manifest->libraryType);
HXLINE( 116)					if (::hx::IsNotNull( libraryClass )) {
HXLINE( 118)						library = ( ( ::lime::utils::AssetLibrary)(::Type_obj::createInstance(libraryClass,manifest->libraryArgs)) );
            					}
            					else {
HXLINE( 122)						::lime::utils::Log_obj::warn((HX_("Could not find library type: ",a0,88,a8,78) + manifest->libraryType),::hx::SourceInfo(HX_("lime/utils/AssetLibrary.hx",bb,8b,4b,8b),122,HX_("lime.utils.AssetLibrary",21,55,e9,fc),HX_("fromBundle",8c,f8,20,19)));
HXLINE( 123)						return null();
            					}
            				}
HXLINE( 127)				library->_hx___fromBundle(bundle,manifest);
HXLINE( 128)				return library;
            			}
            		}
            		else {
HXLINE( 133)			 ::lime::utils::AssetLibrary library =  ::lime::utils::AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 134)			library->_hx___fromBundle(bundle,null());
HXLINE( 135)			return library;
            		}
HXLINE( 137)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,fromBundle,return )

 ::lime::utils::AssetLibrary AssetLibrary_obj::fromManifest( ::lime::utils::AssetManifest manifest){
            	HX_GC_STACKFRAME(&_hx_pos_302b88cc6233d9fb_141_fromManifest)
HXLINE( 142)		if (::hx::IsNull( manifest )) {
HXLINE( 142)			return null();
            		}
HXLINE( 144)		 ::lime::utils::AssetLibrary library = null();
HXLINE( 146)		if (::hx::IsNull( manifest->libraryType )) {
HXLINE( 148)			library =  ::lime::utils::AssetLibrary_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE( 152)			::hx::Class libraryClass = ::Type_obj::resolveClass(manifest->libraryType);
HXLINE( 154)			if (::hx::IsNotNull( libraryClass )) {
HXLINE( 156)				library = ( ( ::lime::utils::AssetLibrary)(::Type_obj::createInstance(libraryClass,manifest->libraryArgs)) );
            			}
            			else {
HXLINE( 160)				::lime::utils::Log_obj::warn((HX_("Could not find library type: ",a0,88,a8,78) + manifest->libraryType),::hx::SourceInfo(HX_("lime/utils/AssetLibrary.hx",bb,8b,4b,8b),160,HX_("lime.utils.AssetLibrary",21,55,e9,fc),HX_("fromManifest",39,d7,40,70)));
HXLINE( 161)				return null();
            			}
            		}
HXLINE( 165)		library->_hx___fromManifest(manifest);
HXLINE( 167)		return library;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,fromManifest,return )

 ::lime::app::Future AssetLibrary_obj::loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_535_loadFromBytes)
HXLINE( 535)			return ::lime::utils::AssetLibrary_obj::loadFromManifest(manifest);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_533_loadFromBytes)
HXDLIN( 533)		return ::lime::utils::AssetManifest_obj::loadFromBytes(bytes,rootPath)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromBytes,return )

 ::lime::app::Future AssetLibrary_obj::loadFromFile(::String path,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_543_loadFromFile)
HXLINE( 543)			return ::lime::utils::AssetLibrary_obj::loadFromManifest(manifest);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_541_loadFromFile)
HXDLIN( 541)		return ::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFromFile,return )

 ::lime::app::Future AssetLibrary_obj::loadFromManifest( ::lime::utils::AssetManifest manifest){
            	HX_STACKFRAME(&_hx_pos_302b88cc6233d9fb_548_loadFromManifest)
HXLINE( 549)		 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 551)		if (::hx::IsNotNull( library )) {
HXLINE( 553)			return library->load();
            		}
            		else {
HXLINE( 557)			return ::lime::app::Future_obj::withError(HX_("Could not load asset manifest",cd,c6,09,7f));
            		}
HXLINE( 551)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadFromManifest,return )


::hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__new() {
	::hx::ObjectPtr< AssetLibrary_obj > __this = new AssetLibrary_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetLibrary_obj *__this = (AssetLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetLibrary_obj), true, "lime.utils.AssetLibrary"));
	*(void **)__this = AssetLibrary_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetLibrary_obj::AssetLibrary_obj()
{
}

void AssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetLibrary);
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(assetsLoaded,"assetsLoaded");
	HX_MARK_MEMBER_NAME(assetsTotal,"assetsTotal");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(cachedAudioBuffers,"cachedAudioBuffers");
	HX_MARK_MEMBER_NAME(cachedBytes,"cachedBytes");
	HX_MARK_MEMBER_NAME(cachedFonts,"cachedFonts");
	HX_MARK_MEMBER_NAME(cachedImages,"cachedImages");
	HX_MARK_MEMBER_NAME(cachedText,"cachedText");
	HX_MARK_MEMBER_NAME(classTypes,"classTypes");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(pathGroups,"pathGroups");
	HX_MARK_MEMBER_NAME(paths,"paths");
	HX_MARK_MEMBER_NAME(preload,"preload");
	HX_MARK_MEMBER_NAME(promise,"promise");
	HX_MARK_MEMBER_NAME(sizes,"sizes");
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_END_CLASS();
}

void AssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(assetsLoaded,"assetsLoaded");
	HX_VISIT_MEMBER_NAME(assetsTotal,"assetsTotal");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(cachedAudioBuffers,"cachedAudioBuffers");
	HX_VISIT_MEMBER_NAME(cachedBytes,"cachedBytes");
	HX_VISIT_MEMBER_NAME(cachedFonts,"cachedFonts");
	HX_VISIT_MEMBER_NAME(cachedImages,"cachedImages");
	HX_VISIT_MEMBER_NAME(cachedText,"cachedText");
	HX_VISIT_MEMBER_NAME(classTypes,"classTypes");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(pathGroups,"pathGroups");
	HX_VISIT_MEMBER_NAME(paths,"paths");
	HX_VISIT_MEMBER_NAME(preload,"preload");
	HX_VISIT_MEMBER_NAME(promise,"promise");
	HX_VISIT_MEMBER_NAME(sizes,"sizes");
	HX_VISIT_MEMBER_NAME(types,"types");
}

::hx::Val AssetLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { return ::hx::Val( paths ); }
		if (HX_FIELD_EQ(inName,"sizes") ) { return ::hx::Val( sizes ); }
		if (HX_FIELD_EQ(inName,"types") ) { return ::hx::Val( types ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return ::hx::Val( loaded ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return ::hx::Val( unload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preload") ) { return ::hx::Val( preload ); }
		if (HX_FIELD_EQ(inName,"promise") ) { return ::hx::Val( promise ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return ::hx::Val( getAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return ::hx::Val( loadFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadAsset") ) { return ::hx::Val( loadAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return ::hx::Val( loadBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return ::hx::Val( loadImage_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"cachedText") ) { return ::hx::Val( cachedText ); }
		if (HX_FIELD_EQ(inName,"classTypes") ) { return ::hx::Val( classTypes ); }
		if (HX_FIELD_EQ(inName,"pathGroups") ) { return ::hx::Val( pathGroups ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsTotal") ) { return ::hx::Val( assetsTotal ); }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"cachedBytes") ) { return ::hx::Val( cachedBytes ); }
		if (HX_FIELD_EQ(inName,"cachedFonts") ) { return ::hx::Val( cachedFonts ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assetsLoaded") ) { return ::hx::Val( assetsLoaded ); }
		if (HX_FIELD_EQ(inName,"cachedImages") ) { return ::hx::Val( cachedImages ); }
		if (HX_FIELD_EQ(inName,"__cacheBreak") ) { return ::hx::Val( _hx___cacheBreak_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromBundle") ) { return ::hx::Val( _hx___fromBundle_dyn() ); }
		if (HX_FIELD_EQ(inName,"load_onError") ) { return ::hx::Val( load_onError_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__assetLoaded") ) { return ::hx::Val( _hx___assetLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"__resolvePath") ) { return ::hx::Val( _hx___resolvePath_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return ::hx::Val( getAudioBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromManifest") ) { return ::hx::Val( _hx___fromManifest_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return ::hx::Val( loadAudioBuffer_dyn() ); }
		if (HX_FIELD_EQ(inName,"load_onProgress") ) { return ::hx::Val( load_onProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { return ::hx::Val( bytesLoadedCache ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cachedAudioBuffers") ) { return ::hx::Val( cachedAudioBuffers ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"loadFont_onComplete") ) { return ::hx::Val( loadFont_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText_onComplete") ) { return ::hx::Val( loadText_onComplete_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadBytes_onComplete") ) { return ::hx::Val( loadBytes_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadImage_onComplete") ) { return ::hx::Val( loadImage_onComplete_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer_onError") ) { return ::hx::Val( loadAudioBuffer_onError_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer_onComplete") ) { return ::hx::Val( loadAudioBuffer_onComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBundle") ) { outValue = fromBundle_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromManifest") ) { outValue = fromManifest_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadFromManifest") ) { outValue = loadFromManifest_dyn(); return true; }
	}
	return false;
}

::hx::Val AssetLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizes") ) { sizes=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preload") ) { preload=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"promise") ) { promise=inValue.Cast<  ::lime::app::Promise_lime_utils_AssetLibrary >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedText") ) { cachedText=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classTypes") ) { classTypes=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathGroups") ) { pathGroups=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsTotal") ) { assetsTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedBytes") ) { cachedBytes=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedFonts") ) { cachedFonts=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assetsLoaded") ) { assetsLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachedImages") ) { cachedImages=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { bytesLoadedCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"cachedAudioBuffers") ) { cachedAudioBuffers=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("onChange",ef,87,1f,97));
	outFields->push(HX_("assetsLoaded",e8,c8,28,8e));
	outFields->push(HX_("assetsTotal",41,c0,37,03));
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesLoadedCache",52,f1,40,0f));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("cachedAudioBuffers",3f,b0,91,db));
	outFields->push(HX_("cachedBytes",29,45,82,36));
	outFields->push(HX_("cachedFonts",82,f4,7b,7d));
	outFields->push(HX_("cachedImages",3a,3a,9d,52));
	outFields->push(HX_("cachedText",af,f1,6f,7b));
	outFields->push(HX_("classTypes",21,9d,e9,5d));
	outFields->push(HX_("loaded",05,48,6f,58));
	outFields->push(HX_("pathGroups",d9,c7,5d,2e));
	outFields->push(HX_("paths",2e,0b,57,bd));
	outFields->push(HX_("preload",c9,47,43,35));
	outFields->push(HX_("promise",9b,cd,e9,f7));
	outFields->push(HX_("sizes",92,08,d9,7c));
	outFields->push(HX_("types",79,70,cb,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AssetLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(AssetLibrary_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{::hx::fsInt,(int)offsetof(AssetLibrary_obj,assetsLoaded),HX_("assetsLoaded",e8,c8,28,8e)},
	{::hx::fsInt,(int)offsetof(AssetLibrary_obj,assetsTotal),HX_("assetsTotal",41,c0,37,03)},
	{::hx::fsInt,(int)offsetof(AssetLibrary_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,bytesLoadedCache),HX_("bytesLoadedCache",52,f1,40,0f)},
	{::hx::fsInt,(int)offsetof(AssetLibrary_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,cachedAudioBuffers),HX_("cachedAudioBuffers",3f,b0,91,db)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,cachedBytes),HX_("cachedBytes",29,45,82,36)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,cachedFonts),HX_("cachedFonts",82,f4,7b,7d)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,cachedImages),HX_("cachedImages",3a,3a,9d,52)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,cachedText),HX_("cachedText",af,f1,6f,7b)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,classTypes),HX_("classTypes",21,9d,e9,5d)},
	{::hx::fsBool,(int)offsetof(AssetLibrary_obj,loaded),HX_("loaded",05,48,6f,58)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,pathGroups),HX_("pathGroups",d9,c7,5d,2e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,paths),HX_("paths",2e,0b,57,bd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,preload),HX_("preload",c9,47,43,35)},
	{::hx::fsObject /*  ::lime::app::Promise_lime_utils_AssetLibrary */ ,(int)offsetof(AssetLibrary_obj,promise),HX_("promise",9b,cd,e9,f7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,sizes),HX_("sizes",92,08,d9,7c)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetLibrary_obj,types),HX_("types",79,70,cb,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AssetLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetLibrary_obj_sMemberFields[] = {
	HX_("onChange",ef,87,1f,97),
	HX_("assetsLoaded",e8,c8,28,8e),
	HX_("assetsTotal",41,c0,37,03),
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesLoadedCache",52,f1,40,0f),
	HX_("bytesTotal",59,57,da,45),
	HX_("cachedAudioBuffers",3f,b0,91,db),
	HX_("cachedBytes",29,45,82,36),
	HX_("cachedFonts",82,f4,7b,7d),
	HX_("cachedImages",3a,3a,9d,52),
	HX_("cachedText",af,f1,6f,7b),
	HX_("classTypes",21,9d,e9,5d),
	HX_("loaded",05,48,6f,58),
	HX_("pathGroups",d9,c7,5d,2e),
	HX_("paths",2e,0b,57,bd),
	HX_("preload",c9,47,43,35),
	HX_("promise",9b,cd,e9,f7),
	HX_("sizes",92,08,d9,7c),
	HX_("types",79,70,cb,1a),
	HX_("exists",dc,1d,e0,bf),
	HX_("getAsset",7a,79,10,86),
	HX_("getAudioBuffer",80,41,e3,26),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getImage",e5,2e,40,1d),
	HX_("getPath",5b,95,d4,1c),
	HX_("getText",63,7c,7c,1f),
	HX_("isLocal",21,6d,76,15),
	HX_("list",5e,1c,b3,47),
	HX_("loadAsset",ea,b5,70,41),
	HX_("load",26,9a,b7,47),
	HX_("loadAudioBuffer",f0,71,7c,e3),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadText",f3,9d,99,bd),
	HX_("unload",ff,a0,8c,65),
	HX_("__assetLoaded",f5,7a,49,36),
	HX_("__cacheBreak",3d,06,38,34),
	HX_("__fromBundle",ac,73,b4,51),
	HX_("__fromManifest",59,5a,01,91),
	HX_("__resolvePath",91,4b,05,2e),
	HX_("loadAudioBuffer_onComplete",27,96,e6,68),
	HX_("loadAudioBuffer_onError",9a,a5,47,54),
	HX_("loadBytes_onComplete",d2,0d,18,bc),
	HX_("loadFont_onComplete",22,d1,7c,a1),
	HX_("loadImage_onComplete",e2,7c,c9,b2),
	HX_("loadText_onComplete",04,33,ff,e5),
	HX_("load_onError",d0,f3,d6,22),
	HX_("load_onProgress",a5,84,70,96),
	::String(null()) };

::hx::Class AssetLibrary_obj::__mClass;

static ::String AssetLibrary_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("fromBundle",8c,f8,20,19),
	HX_("fromManifest",39,d7,40,70),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("loadFromManifest",7f,5e,9c,dc),
	::String(null())
};

void AssetLibrary_obj::__register()
{
	AssetLibrary_obj _hx_dummy;
	AssetLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.AssetLibrary",21,55,e9,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
