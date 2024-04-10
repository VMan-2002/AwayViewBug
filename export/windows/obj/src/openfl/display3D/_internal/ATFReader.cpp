#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_ATFReader
#include <openfl/display3D/_internal/ATFReader.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4af6cd3d88d54aa0_30_new,"openfl.display3D._internal.ATFReader","new",0x924c0ddd,"openfl.display3D._internal.ATFReader.new","openfl/display3D/_internal/ATFReader.hx",30,0x2cd00676)
HX_LOCAL_STACK_FRAME(_hx_pos_4af6cd3d88d54aa0_76_readHeader,"openfl.display3D._internal.ATFReader","readHeader",0x065709a6,"openfl.display3D._internal.ATFReader.readHeader","openfl/display3D/_internal/ATFReader.hx",76,0x2cd00676)
HX_LOCAL_STACK_FRAME(_hx_pos_4af6cd3d88d54aa0_114_readTextures,"openfl.display3D._internal.ATFReader","readTextures",0xb2f8ef91,"openfl.display3D._internal.ATFReader.readTextures","openfl/display3D/_internal/ATFReader.hx",114,0x2cd00676)
HX_LOCAL_STACK_FRAME(_hx_pos_4af6cd3d88d54aa0_146___readUInt24,"openfl.display3D._internal.ATFReader","__readUInt24",0x5d1343b5,"openfl.display3D._internal.ATFReader.__readUInt24","openfl/display3D/_internal/ATFReader.hx",146,0x2cd00676)
HX_LOCAL_STACK_FRAME(_hx_pos_4af6cd3d88d54aa0_155___readUInt32,"openfl.display3D._internal.ATFReader","__readUInt32",0x5d134492,"openfl.display3D._internal.ATFReader.__readUInt32","openfl/display3D/_internal/ATFReader.hx",155,0x2cd00676)
HX_LOCAL_STACK_FRAME(_hx_pos_4af6cd3d88d54aa0_30_boot,"openfl.display3D._internal.ATFReader","boot",0x68591415,"openfl.display3D._internal.ATFReader.boot","openfl/display3D/_internal/ATFReader.hx",30,0x2cd00676)
namespace openfl{
namespace display3D{
namespace _internal{

void ATFReader_obj::__construct( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_4af6cd3d88d54aa0_30_new)
HXLINE(  37)		this->version = 0;
HXLINE(  42)		data->position = byteArrayOffset;
HXLINE(  43)		::String signature = data->readUTFBytes(3);
HXLINE(  44)		data->position = byteArrayOffset;
HXLINE(  46)		if ((signature != HX_("ATF",f3,9b,31,00))) {
HXLINE(  48)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF signature not found",a0,f7,2f,3a)));
            		}
HXLINE(  51)		int length = 0;
HXLINE(  54)		if ((data->b->__get((byteArrayOffset + 6)) == 255)) {
HXLINE(  56)			this->version = ( (int)(data->b->__get((byteArrayOffset + 7))) );
HXLINE(  57)			data->position = (byteArrayOffset + 8);
HXLINE(  58)			length = this->_hx___readUInt32(data);
            		}
            		else {
HXLINE(  62)			this->version = 0;
HXLINE(  63)			data->position = (byteArrayOffset + 3);
HXLINE(  64)			length = this->_hx___readUInt24(data);
            		}
HXLINE(  67)		int a = (byteArrayOffset + length);
HXDLIN(  67)		int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data);
HXDLIN(  67)		bool aNeg = (a < 0);
HXDLIN(  67)		bool bNeg = (b < 0);
HXDLIN(  67)		bool _hx_tmp;
HXDLIN(  67)		if ((aNeg != bNeg)) {
HXLINE(  67)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE(  67)			_hx_tmp = (a > b);
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  69)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF length exceeds byte array length",d7,29,45,0f)));
            		}
HXLINE(  72)		this->data = data;
            	}

Dynamic ATFReader_obj::__CreateEmpty() { return new ATFReader_obj; }

void *ATFReader_obj::_hx_vtable = 0;

Dynamic ATFReader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ATFReader_obj > _hx_result = new ATFReader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ATFReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cbf0639;
}

bool ATFReader_obj::readHeader(int _hx___width,int _hx___height,bool cubeMap){
            	HX_GC_STACKFRAME(&_hx_pos_4af6cd3d88d54aa0_76_readHeader)
HXLINE(  77)		int tdata = this->data->readUnsignedByte();
HXLINE(  78)		int type = ::hx::UShr(tdata,7);
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (!(cubeMap)) {
HXLINE(  80)			_hx_tmp = (type != 0);
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  82)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map not expected",a7,74,ca,c8)));
            		}
HXLINE(  85)		bool _hx_tmp1;
HXDLIN(  85)		if (cubeMap) {
HXLINE(  85)			_hx_tmp1 = (type != 1);
            		}
            		else {
HXLINE(  85)			_hx_tmp1 = false;
            		}
HXDLIN(  85)		if (_hx_tmp1) {
HXLINE(  87)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube map expected",fa,fe,ed,52)));
            		}
HXLINE(  90)		this->cubeMap = cubeMap;
HXLINE(  92)		this->atfFormat = (tdata & 127);
HXLINE(  95)		bool _hx_tmp2;
HXDLIN(  95)		if ((this->atfFormat != 3)) {
HXLINE(  95)			_hx_tmp2 = (this->atfFormat != 5);
            		}
            		else {
HXLINE(  95)			_hx_tmp2 = false;
            		}
HXDLIN(  95)		if (_hx_tmp2) {
HXLINE(  97)			::lime::utils::Log_obj::warn(HX_("Only ATF block compressed textures without JPEG-XR+LZMA are supported",25,8c,50,6a),::hx::SourceInfo(HX_("openfl/display3D/_internal/ATFReader.hx",76,06,d0,2c),97,HX_("openfl.display3D._internal.ATFReader",6b,db,a6,4b),HX_("readHeader",83,ed,7b,f6)));
            		}
HXLINE( 100)		this->width = (1 << this->data->readUnsignedByte());
HXLINE( 101)		this->height = (1 << this->data->readUnsignedByte());
HXLINE( 103)		bool _hx_tmp3;
HXDLIN( 103)		if ((this->width == _hx___width)) {
HXLINE( 103)			_hx_tmp3 = (this->height != _hx___height);
            		}
            		else {
HXLINE( 103)			_hx_tmp3 = true;
            		}
HXDLIN( 103)		if (_hx_tmp3) {
HXLINE( 105)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF width and height dont match",3f,49,15,70)));
            		}
HXLINE( 108)		this->mipCount = this->data->readUnsignedByte();
HXLINE( 110)		return (this->atfFormat == 5);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ATFReader_obj,readHeader,return )

void ATFReader_obj::readTextures( ::Dynamic uploadCallback){
            	HX_GC_STACKFRAME(&_hx_pos_4af6cd3d88d54aa0_114_readTextures)
HXLINE( 117)		int gpuFormats;
HXDLIN( 117)		if ((this->version < 3)) {
HXLINE( 117)			gpuFormats = 3;
            		}
            		else {
HXLINE( 117)			gpuFormats = 4;
            		}
HXLINE( 118)		int sideCount;
HXDLIN( 118)		if (this->cubeMap) {
HXLINE( 118)			sideCount = 6;
            		}
            		else {
HXLINE( 118)			sideCount = 1;
            		}
HXLINE( 120)		{
HXLINE( 120)			int _g = 0;
HXDLIN( 120)			int _g1 = sideCount;
HXDLIN( 120)			while((_g < _g1)){
HXLINE( 120)				_g = (_g + 1);
HXDLIN( 120)				int side = (_g - 1);
HXLINE( 122)				{
HXLINE( 122)					int _g1 = 0;
HXDLIN( 122)					int _g2 = this->mipCount;
HXDLIN( 122)					while((_g1 < _g2)){
HXLINE( 122)						_g1 = (_g1 + 1);
HXDLIN( 122)						int level = (_g1 - 1);
HXLINE( 124)						{
HXLINE( 124)							int _g = 0;
HXDLIN( 124)							int _g2 = gpuFormats;
HXDLIN( 124)							while((_g < _g2)){
HXLINE( 124)								_g = (_g + 1);
HXDLIN( 124)								int gpuFormat = (_g - 1);
HXLINE( 126)								int blockLength;
HXDLIN( 126)								if ((this->version == 0)) {
HXLINE( 126)									blockLength = this->_hx___readUInt24(this->data);
            								}
            								else {
HXLINE( 126)									blockLength = this->_hx___readUInt32(this->data);
            								}
HXLINE( 128)								int a = (this->data->position + blockLength);
HXDLIN( 128)								int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(this->data);
HXDLIN( 128)								bool aNeg = (a < 0);
HXDLIN( 128)								bool bNeg = (b < 0);
HXDLIN( 128)								bool _hx_tmp;
HXDLIN( 128)								if ((aNeg != bNeg)) {
HXLINE( 128)									_hx_tmp = aNeg;
            								}
            								else {
HXLINE( 128)									_hx_tmp = (a > b);
            								}
HXDLIN( 128)								if (_hx_tmp) {
HXLINE( 130)									HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Block length exceeds ATF file length",15,23,c0,24)));
            								}
HXLINE( 133)								bool aNeg1 = (blockLength < 0);
HXDLIN( 133)								bool bNeg1 = (0 < 0);
HXDLIN( 133)								bool _hx_tmp1;
HXDLIN( 133)								if ((aNeg1 != bNeg1)) {
HXLINE( 133)									_hx_tmp1 = aNeg1;
            								}
            								else {
HXLINE( 133)									_hx_tmp1 = (blockLength > 0);
            								}
HXDLIN( 133)								if (_hx_tmp1) {
HXLINE( 135)									 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(blockLength);
HXLINE( 136)									{
HXLINE( 136)										 ::openfl::utils::ByteArrayData this1 = this->data;
HXDLIN( 136)										this1->readBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes),0,blockLength);
            									}
HXLINE( 138)									uploadCallback(side,level,gpuFormat,(this->width >> level),(this->height >> level),blockLength,bytes);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,readTextures,(void))

int ATFReader_obj::_hx___readUInt24( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_4af6cd3d88d54aa0_146___readUInt24)
HXLINE( 147)		int value = (data->readUnsignedByte() << 16);
HXLINE( 149)		value = (value | (data->readUnsignedByte() << 8));
HXLINE( 150)		value = (value | data->readUnsignedByte());
HXLINE( 151)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt24,return )

int ATFReader_obj::_hx___readUInt32( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_4af6cd3d88d54aa0_155___readUInt32)
HXLINE( 156)		int value = (data->readUnsignedByte() << 24);
HXLINE( 158)		value = (value | (data->readUnsignedByte() << 16));
HXLINE( 159)		value = (value | (data->readUnsignedByte() << 8));
HXLINE( 160)		value = (value | data->readUnsignedByte());
HXLINE( 161)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ATFReader_obj,_hx___readUInt32,return )


::hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__new( ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	::hx::ObjectPtr< ATFReader_obj > __this = new ATFReader_obj();
	__this->__construct(data,byteArrayOffset);
	return __this;
}

::hx::ObjectPtr< ATFReader_obj > ATFReader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData data,int byteArrayOffset) {
	ATFReader_obj *__this = (ATFReader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ATFReader_obj), true, "openfl.display3D._internal.ATFReader"));
	*(void **)__this = ATFReader_obj::_hx_vtable;
	__this->__construct(data,byteArrayOffset);
	return __this;
}

ATFReader_obj::ATFReader_obj()
{
}

void ATFReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ATFReader);
	HX_MARK_MEMBER_NAME(atfFormat,"atfFormat");
	HX_MARK_MEMBER_NAME(cubeMap,"cubeMap");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mipCount,"mipCount");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void ATFReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atfFormat,"atfFormat");
	HX_VISIT_MEMBER_NAME(cubeMap,"cubeMap");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mipCount,"mipCount");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(width,"width");
}

::hx::Val ATFReader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { return ::hx::Val( cubeMap ); }
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { return ::hx::Val( mipCount ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { return ::hx::Val( atfFormat ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readHeader") ) { return ::hx::Val( readHeader_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readTextures") ) { return ::hx::Val( readTextures_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { return ::hx::Val( _hx___readUInt24_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { return ::hx::Val( _hx___readUInt32_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ATFReader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeMap") ) { cubeMap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mipCount") ) { mipCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"atfFormat") ) { atfFormat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ATFReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("atfFormat",aa,d3,04,9c));
	outFields->push(HX_("cubeMap",a7,4c,d0,8c));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("mipCount",9b,6a,51,0e));
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("width",06,b6,62,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ATFReader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ATFReader_obj,atfFormat),HX_("atfFormat",aa,d3,04,9c)},
	{::hx::fsBool,(int)offsetof(ATFReader_obj,cubeMap),HX_("cubeMap",a7,4c,d0,8c)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(ATFReader_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(ATFReader_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(ATFReader_obj,mipCount),HX_("mipCount",9b,6a,51,0e)},
	{::hx::fsInt,(int)offsetof(ATFReader_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsInt,(int)offsetof(ATFReader_obj,width),HX_("width",06,b6,62,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ATFReader_obj_sStaticStorageInfo = 0;
#endif

static ::String ATFReader_obj_sMemberFields[] = {
	HX_("atfFormat",aa,d3,04,9c),
	HX_("cubeMap",a7,4c,d0,8c),
	HX_("data",2a,56,63,42),
	HX_("height",e7,07,4c,02),
	HX_("mipCount",9b,6a,51,0e),
	HX_("version",18,e7,f1,7c),
	HX_("width",06,b6,62,ca),
	HX_("readHeader",83,ed,7b,f6),
	HX_("readTextures",ae,44,04,a1),
	HX_("__readUInt24",d2,98,1e,4b),
	HX_("__readUInt32",af,99,1e,4b),
	::String(null()) };

::hx::Class ATFReader_obj::__mClass;

void ATFReader_obj::__register()
{
	ATFReader_obj _hx_dummy;
	ATFReader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal.ATFReader",6b,db,a6,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ATFReader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ATFReader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ATFReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ATFReader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ATFReader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4af6cd3d88d54aa0_30_boot)
HXDLIN(  30)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
