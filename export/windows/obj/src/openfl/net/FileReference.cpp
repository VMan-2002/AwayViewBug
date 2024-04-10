#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialog
#include <lime/ui/FileDialog.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialogType
#include <lime/ui/FileDialogType.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_DataEvent
#include <openfl/events/DataEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_069fe0fa1a76d977_491_new,"openfl.net.FileReference","new",0x2e63d252,"openfl.net.FileReference.new","openfl/net/FileReference.hx",491,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_570_browse,"openfl.net.FileReference","browse",0x617d1ed8,"openfl.net.FileReference.browse","openfl/net/FileReference.hx",570,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_647_cancel,"openfl.net.FileReference","cancel",0xfd502ec8,"openfl.net.FileReference.cancel","openfl/net/FileReference.hx",647,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_838_download,"openfl.net.FileReference","download",0x87701c56,"openfl.net.FileReference.download","openfl/net/FileReference.hx",838,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_940_load,"openfl.net.FileReference","load",0x67a94bf4,"openfl.net.FileReference.load","openfl/net/FileReference.hx",940,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1059_save,"openfl.net.FileReference","save",0x6c3f3d0b,"openfl.net.FileReference.save","openfl/net/FileReference.hx",1059,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1323_upload,"openfl.net.FileReference","upload",0xd1760b4f,"openfl.net.FileReference.upload","openfl/net/FileReference.hx",1323,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1412_openFileDialog_onCancel,"openfl.net.FileReference","openFileDialog_onCancel",0xbb8b83bc,"openfl.net.FileReference.openFileDialog_onCancel","openfl/net/FileReference.hx",1412,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1417_openFileDialog_onComplete,"openfl.net.FileReference","openFileDialog_onComplete",0xb8e32b7b,"openfl.net.FileReference.openFileDialog_onComplete","openfl/net/FileReference.hx",1417,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1421_openFileDialog_onSelect,"openfl.net.FileReference","openFileDialog_onSelect",0x6d8ab13e,"openfl.net.FileReference.openFileDialog_onSelect","openfl/net/FileReference.hx",1421,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1438_saveFileDialog_onCancel,"openfl.net.FileReference","saveFileDialog_onCancel",0x6e985029,"openfl.net.FileReference.saveFileDialog_onCancel","openfl/net/FileReference.hx",1438,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1445_saveFileDialog_onSave,"openfl.net.FileReference","saveFileDialog_onSave",0xeaaa942c,"openfl.net.FileReference.saveFileDialog_onSave","openfl/net/FileReference.hx",1445,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1442_saveFileDialog_onSave,"openfl.net.FileReference","saveFileDialog_onSave",0xeaaa942c,"openfl.net.FileReference.saveFileDialog_onSave","openfl/net/FileReference.hx",1442,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1450_saveFileDialog_onSelect,"openfl.net.FileReference","saveFileDialog_onSelect",0x20977dab,"openfl.net.FileReference.saveFileDialog_onSelect","openfl/net/FileReference.hx",1450,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1471_urlLoader_download_onComplete,"openfl.net.FileReference","urlLoader_download_onComplete",0xe20fb4e4,"openfl.net.FileReference.urlLoader_download_onComplete","openfl/net/FileReference.hx",1471,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1497_urlLoader_upload_onHttpResponseStatus,"openfl.net.FileReference","urlLoader_upload_onHttpResponseStatus",0x8cd46fcd,"openfl.net.FileReference.urlLoader_upload_onHttpResponseStatus","openfl/net/FileReference.hx",1497,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1502_urlLoader_upload_onHttpStatus,"openfl.net.FileReference","urlLoader_upload_onHttpStatus",0x252d2c6c,"openfl.net.FileReference.urlLoader_upload_onHttpStatus","openfl/net/FileReference.hx",1502,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1516_urlLoader_upload_onComplete,"openfl.net.FileReference","urlLoader_upload_onComplete",0x1a6777cb,"openfl.net.FileReference.urlLoader_upload_onComplete","openfl/net/FileReference.hx",1516,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1523_urlLoader_onIOError,"openfl.net.FileReference","urlLoader_onIOError",0xbaaf7fd8,"openfl.net.FileReference.urlLoader_onIOError","openfl/net/FileReference.hx",1523,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1528_urlLoader_onProgress,"openfl.net.FileReference","urlLoader_onProgress",0x543de937,"openfl.net.FileReference.urlLoader_onProgress","openfl/net/FileReference.hx",1528,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1533_urlLoader_onOpen,"openfl.net.FileReference","urlLoader_onOpen",0xb438e854,"openfl.net.FileReference.urlLoader_onOpen","openfl/net/FileReference.hx",1533,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1538_get_creationDate,"openfl.net.FileReference","get_creationDate",0x7abf2144,"openfl.net.FileReference.get_creationDate","openfl/net/FileReference.hx",1538,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1543_get_modificationDate,"openfl.net.FileReference","get_modificationDate",0x2ae07e81,"openfl.net.FileReference.get_modificationDate","openfl/net/FileReference.hx",1543,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1548_get_name,"openfl.net.FileReference","get_name",0xbe63dea2,"openfl.net.FileReference.get_name","openfl/net/FileReference.hx",1548,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1553_get_size,"openfl.net.FileReference","get_size",0xc1b80d18,"openfl.net.FileReference.get_size","openfl/net/FileReference.hx",1553,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1558_get_type,"openfl.net.FileReference","get_type",0xc26d5f11,"openfl.net.FileReference.get_type","openfl/net/FileReference.hx",1558,0x825195e0)
HX_LOCAL_STACK_FRAME(_hx_pos_069fe0fa1a76d977_1563_get_extension,"openfl.net.FileReference","get_extension",0xb9310bc8,"openfl.net.FileReference.get_extension","openfl/net/FileReference.hx",1563,0x825195e0)
namespace openfl{
namespace net{

void FileReference_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_491_new)
HXDLIN( 491)		super::__construct(null());
            	}

Dynamic FileReference_obj::__CreateEmpty() { return new FileReference_obj; }

void *FileReference_obj::_hx_vtable = 0;

Dynamic FileReference_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileReference_obj > _hx_result = new FileReference_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileReference_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c1b0022) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c1b0022;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

bool FileReference_obj::browse(::Array< ::Dynamic> typeFilter){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_570_browse)
HXLINE( 571)		this->_hx___data = null();
HXLINE( 572)		this->_hx___path = null();
HXLINE( 575)		::String filter = null();
HXLINE( 577)		if (::hx::IsNotNull( typeFilter )) {
HXLINE( 579)			::Array< ::String > filters = ::Array_obj< ::String >::__new(0);
HXLINE( 581)			{
HXLINE( 581)				int _g = 0;
HXDLIN( 581)				while((_g < typeFilter->length)){
HXLINE( 581)					 ::openfl::net::FileFilter type = typeFilter->__get(_g).StaticCast<  ::openfl::net::FileFilter >();
HXDLIN( 581)					_g = (_g + 1);
HXLINE( 583)					filters->push(::StringTools_obj::replace(::StringTools_obj::replace(type->extension,HX_("*.",c4,24,00,00),HX_("",00,00,00,00)),HX_(";",3b,00,00,00),HX_(",",2c,00,00,00)));
            				}
            			}
HXLINE( 586)			filter = filters->join(HX_(";",3b,00,00,00));
            		}
HXLINE( 590)		 ::lime::ui::FileDialog openFileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 591)		openFileDialog->onCancel->add(this->openFileDialog_onCancel_dyn(),null(),null());
HXLINE( 592)		openFileDialog->onSelect->add(this->openFileDialog_onSelect_dyn(),null(),null());
HXLINE( 593)		openFileDialog->browse(::lime::ui::FileDialogType_obj::OPEN_dyn(),filter,null(),null());
HXLINE( 594)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,browse,return )

void FileReference_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_647_cancel)
HXDLIN( 647)		if (::hx::IsNotNull( this->_hx___urlLoader )) {
HXLINE( 649)			this->_hx___urlLoader->close();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,cancel,(void))

void FileReference_obj::download( ::openfl::net::URLRequest request,::String defaultFileName){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_838_download)
HXLINE( 839)		this->_hx___data = null();
HXLINE( 840)		this->_hx___path = null();
HXLINE( 842)		this->_hx___urlLoader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 843)		this->_hx___urlLoader->dataFormat = 0;
HXLINE( 844)		this->_hx___urlLoader->addEventListener(HX_("open",ca,03,b4,49),this->urlLoader_onOpen_dyn(),null(),null(),null());
HXLINE( 845)		this->_hx___urlLoader->addEventListener(HX_("complete",b9,00,c8,7f),this->urlLoader_download_onComplete_dyn(),null(),null(),null());
HXLINE( 846)		this->_hx___urlLoader->addEventListener(HX_("ioError",02,fe,41,76),this->urlLoader_onIOError_dyn(),null(),null(),null());
HXLINE( 847)		this->_hx___urlLoader->addEventListener(HX_("progress",ad,f7,2a,86),this->urlLoader_onProgress_dyn(),null(),null(),null());
HXLINE( 848)		this->_hx___urlLoader->load(request);
HXLINE( 851)		 ::lime::ui::FileDialog saveFileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 852)		saveFileDialog->onCancel->add(this->saveFileDialog_onCancel_dyn(),null(),null());
HXLINE( 853)		saveFileDialog->onSelect->add(this->saveFileDialog_onSelect_dyn(),null(),null());
HXLINE( 854)		::String _hx_tmp;
HXDLIN( 854)		if (::hx::IsNotNull( defaultFileName )) {
HXLINE( 854)			_hx_tmp = ::haxe::io::Path_obj::extension(defaultFileName);
            		}
            		else {
HXLINE( 854)			_hx_tmp = null();
            		}
HXDLIN( 854)		saveFileDialog->browse(::lime::ui::FileDialogType_obj::SAVE_dyn(),_hx_tmp,defaultFileName,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FileReference_obj,download,(void))

void FileReference_obj::load(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_940_load)
HXDLIN( 940)		if (::hx::IsNotNull( this->_hx___path )) {
HXLINE( 942)			this->data = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(this->_hx___path));
HXLINE( 943)			this->openFileDialog_onComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,load,(void))

void FileReference_obj::save( ::Dynamic data,::String defaultFileName){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1059_save)
HXLINE(1060)		this->_hx___data = null();
HXLINE(1061)		this->_hx___path = null();
HXLINE(1063)		if (::hx::IsNull( data )) {
HXLINE(1063)			return;
            		}
HXLINE(1066)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE(1068)			this->_hx___data = ( ( ::openfl::utils::ByteArrayData)(data) );
            		}
            		else {
HXLINE(1072)			 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(1072)			this->_hx___data = this1;
HXLINE(1073)			{
HXLINE(1073)				 ::openfl::utils::ByteArrayData this2 = this->_hx___data;
HXDLIN(1073)				this2->writeUTFBytes(::Std_obj::string(data));
            			}
            		}
HXLINE(1077)		 ::lime::ui::FileDialog saveFileDialog =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE(1078)		saveFileDialog->onCancel->add(this->saveFileDialog_onCancel_dyn(),null(),null());
HXLINE(1079)		saveFileDialog->onSelect->add(this->saveFileDialog_onSelect_dyn(),null(),null());
HXLINE(1080)		::String _hx_tmp;
HXDLIN(1080)		if (::hx::IsNotNull( defaultFileName )) {
HXLINE(1080)			_hx_tmp = ::haxe::io::Path_obj::extension(defaultFileName);
            		}
            		else {
HXLINE(1080)			_hx_tmp = null();
            		}
HXDLIN(1080)		saveFileDialog->browse(::lime::ui::FileDialogType_obj::SAVE_dyn(),_hx_tmp,defaultFileName,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FileReference_obj,save,(void))

void FileReference_obj::upload( ::openfl::net::URLRequest request,::String __o_uploadDataFieldName,::hx::Null< bool >  __o_testUpload){
            		::String uploadDataFieldName = __o_uploadDataFieldName;
            		if (::hx::IsNull(__o_uploadDataFieldName)) uploadDataFieldName = HX_("Filedata",c6,ce,7f,4a);
            		bool testUpload = __o_testUpload.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1323_upload)
HXLINE(1325)		bool _hx_tmp;
HXDLIN(1325)		if (::hx::IsNotNull( this->_hx___path )) {
HXLINE(1325)			_hx_tmp = !(::sys::FileSystem_obj::exists(this->_hx___path));
            		}
            		else {
HXLINE(1325)			_hx_tmp = true;
            		}
HXDLIN(1325)		if (_hx_tmp) {
HXLINE(1327)			this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
HXLINE(1328)			return;
            		}
HXLINE(1331)		 ::openfl::utils::ByteArrayData fileBytes = null();
HXLINE(1332)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1334)			fileBytes = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::sys::io::File_obj::getBytes(this->_hx___path));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(1338)				this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
HXLINE(1339)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(1341)		bool hasUrlVars = ::hx::IsPointerEq( ::Type_obj::_hx_typeof(request->data),::ValueType_obj::TObject_dyn() );
HXLINE(1342)		bool _hx_tmp1;
HXDLIN(1342)		if (hasUrlVars) {
HXLINE(1342)			_hx_tmp1 = (request->method == HX_("GET",76,1c,36,00));
            		}
            		else {
HXLINE(1342)			_hx_tmp1 = false;
            		}
HXDLIN(1342)		if (_hx_tmp1) {
HXLINE(1344)			::String getVariables = HX_("",00,00,00,00);
HXLINE(1345)			::Array< ::String > fields = ::Reflect_obj::fields(request->data);
HXLINE(1346)			::String startsWith;
HXDLIN(1346)			if ((request->url.lastIndexOf(HX_("?",3f,00,00,00),null()) == -1)) {
HXLINE(1346)				startsWith = HX_("?",3f,00,00,00);
            			}
            			else {
HXLINE(1346)				startsWith = HX_("&",26,00,00,00);
            			}
HXLINE(1347)			{
HXLINE(1347)				int _g = 0;
HXDLIN(1347)				while((_g < fields->length)){
HXLINE(1347)					::String field = fields->__get(_g);
HXDLIN(1347)					_g = (_g + 1);
HXLINE(1349)					::String value = ( (::String)(::Reflect_obj::field(request->data,field)) );
HXLINE(1350)					::String getVariables1;
HXDLIN(1350)					if ((getVariables.length == 0)) {
HXLINE(1350)						getVariables1 = startsWith;
            					}
            					else {
HXLINE(1350)						getVariables1 = HX_("&",26,00,00,00);
            					}
HXDLIN(1350)					getVariables = (getVariables + getVariables1);
HXLINE(1351)					getVariables = (getVariables + ((field + HX_("=",3d,00,00,00)) + value));
            				}
            			}
HXLINE(1353)			 ::openfl::net::URLRequest request1 = request;
HXDLIN(1353)			request1->url = (request1->url + getVariables);
            		}
HXLINE(1355)		::String boundary = HX_("----------KM7GI3GI3ae0GI3ae0cH2KM7Ef1cH2",d7,53,e4,d8);
HXLINE(1357)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(1357)		 ::openfl::utils::ByteArrayData requestData = this1;
HXLINE(1358)		bool _hx_tmp2;
HXDLIN(1358)		if (hasUrlVars) {
HXLINE(1358)			_hx_tmp2 = (request->method == HX_("POST",60,4c,1d,35));
            		}
            		else {
HXLINE(1358)			_hx_tmp2 = false;
            		}
HXDLIN(1358)		if (_hx_tmp2) {
HXLINE(1360)			::Array< ::String > fields = ::Reflect_obj::fields(request->data);
HXLINE(1361)			{
HXLINE(1361)				int _g = 0;
HXDLIN(1361)				while((_g < fields->length)){
HXLINE(1361)					::String field = fields->__get(_g);
HXDLIN(1361)					_g = (_g + 1);
HXLINE(1363)					 ::Dynamic value = ::Reflect_obj::field(request->data,field);
HXLINE(1364)					requestData->writeUTFBytes(((HX_("--",60,27,00,00) + boundary) + HX_("\r\n",5d,0b,00,00)));
HXLINE(1365)					requestData->writeUTFBytes(((HX_("Content-Disposition: form-data; name=\"",bf,46,3a,1c) + field) + HX_("\"\r\n\r\n",1c,21,3f,9c)));
HXLINE(1366)					requestData->writeUTFBytes(::Std_obj::string(value));
HXLINE(1367)					requestData->writeUTFBytes(HX_("\r\n",5d,0b,00,00));
            				}
            			}
            		}
HXLINE(1370)		requestData->writeUTFBytes(((HX_("--",60,27,00,00) + boundary) + HX_("\r\n",5d,0b,00,00)));
HXLINE(1371)		requestData->writeUTFBytes(HX_("Content-Disposition: form-data; name=\"Filename\"\r\n\r\n",b6,7e,c6,33));
HXLINE(1372)		requestData->writeUTFBytes(this->get_name());
HXLINE(1373)		requestData->writeUTFBytes(HX_("\r\n",5d,0b,00,00));
HXLINE(1374)		requestData->writeUTFBytes(((HX_("--",60,27,00,00) + boundary) + HX_("\r\n",5d,0b,00,00)));
HXLINE(1375)		requestData->writeUTFBytes(((HX_("Content-Disposition: form-data; name=\"",bf,46,3a,1c) + uploadDataFieldName) + HX_("\"; ",27,00,1a,00)));
HXLINE(1376)		requestData->writeUTFBytes(((HX_("filename=\"",cc,e3,68,c9) + this->get_name()) + HX_("\"\r\n",ff,d7,19,00)));
HXLINE(1377)		requestData->writeUTFBytes(HX_("Content-Type: application/octet-stream\r\n\r\n",cb,c4,fa,98));
HXLINE(1378)		requestData->writeBytes(fileBytes,0,0);
HXLINE(1379)		requestData->writeUTFBytes(HX_("\r\n",5d,0b,00,00));
HXLINE(1380)		requestData->writeUTFBytes(((HX_("--",60,27,00,00) + boundary) + HX_("\r\n",5d,0b,00,00)));
HXLINE(1381)		requestData->writeUTFBytes(HX_("Content-Disposition: form-data; name=\"Upload\"\r\n\r\n",fc,4e,89,ae));
HXLINE(1382)		requestData->writeUTFBytes(HX_("Submit Query",00,4d,f1,ad));
HXLINE(1383)		requestData->writeUTFBytes(HX_("\r\n",5d,0b,00,00));
HXLINE(1384)		requestData->writeUTFBytes(((HX_("--",60,27,00,00) + boundary) + HX_("--\r\n",bd,ca,e0,1d)));
HXLINE(1385)		request->data = requestData;
HXLINE(1387)		request->method = HX_("POST",60,4c,1d,35);
HXLINE(1388)		request->contentType = (HX_("multipart/form-data; boundary=",fe,c4,13,72) + boundary);
HXLINE(1390)		 ::openfl::net::URLRequestHeader _hx_tmp3 =  ::openfl::net::URLRequestHeader_obj::__alloc( HX_CTX ,HX_("Accept",28,07,9b,3f),HX_("text/*",08,3b,88,d8));
HXLINE(1389)		request->requestHeaders = ::Array_obj< ::Dynamic>::__new(2)->init(0,_hx_tmp3)->init(1, ::openfl::net::URLRequestHeader_obj::__alloc( HX_CTX ,HX_("Cache-Control",d2,9e,1c,4d),HX_("no-cache",f6,5d,9f,da)));
HXLINE(1394)		 ::openfl::net::URLLoader urlLoader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE(1395)		urlLoader->dataFormat = 0;
HXLINE(1396)		urlLoader->addEventListener(HX_("open",ca,03,b4,49),this->urlLoader_onOpen_dyn(),null(),null(),null());
HXLINE(1397)		urlLoader->addEventListener(HX_("complete",b9,00,c8,7f),this->urlLoader_upload_onComplete_dyn(),null(),null(),null());
HXLINE(1398)		urlLoader->addEventListener(HX_("httpResponseStatus",3b,ae,f6,61),this->urlLoader_upload_onHttpResponseStatus_dyn(),null(),null(),null());
HXLINE(1399)		urlLoader->addEventListener(HX_("httpStatus",da,4c,74,0a),this->urlLoader_upload_onHttpStatus_dyn(),null(),null(),null());
HXLINE(1400)		urlLoader->addEventListener(HX_("progress",ad,f7,2a,86),this->urlLoader_onProgress_dyn(),null(),null(),null());
HXLINE(1401)		urlLoader->addEventListener(HX_("ioError",02,fe,41,76),this->urlLoader_onIOError_dyn(),null(),null(),null());
HXLINE(1402)		urlLoader->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FileReference_obj,upload,(void))

void FileReference_obj::openFileDialog_onCancel(){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1412_openFileDialog_onCancel)
HXDLIN(1412)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("cancel",7a,ed,33,b8),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,openFileDialog_onCancel,(void))

void FileReference_obj::openFileDialog_onComplete(){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1417_openFileDialog_onComplete)
HXDLIN(1417)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,openFileDialog_onComplete,(void))

void FileReference_obj::openFileDialog_onSelect(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1421_openFileDialog_onSelect)
HXLINE(1423)		 ::Dynamic fileInfo = ::sys::FileSystem_obj::stat(path);
HXLINE(1424)		this->creationDate = ( ( ::Date)(fileInfo->__Field(HX_("ctime",f0,39,a8,4d),::hx::paccDynamic)) );
HXLINE(1425)		this->modificationDate = ( ( ::Date)(fileInfo->__Field(HX_("mtime",fa,06,aa,0f),::hx::paccDynamic)) );
HXLINE(1426)		this->size = ( (Float)(fileInfo->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
HXLINE(1427)		this->type = (HX_(".",2e,00,00,00) + ::haxe::io::Path_obj::extension(path));
HXLINE(1430)		this->name = ::haxe::io::Path_obj::withoutDirectory(path);
HXLINE(1431)		this->_hx___path = path;
HXLINE(1433)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("select",fc,1a,33,6a),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,openFileDialog_onSelect,(void))

void FileReference_obj::saveFileDialog_onCancel(){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1438_saveFileDialog_onCancel)
HXDLIN(1438)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("cancel",7a,ed,33,b8),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,saveFileDialog_onCancel,(void))

void FileReference_obj::saveFileDialog_onSave(::String path){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::net::FileReference,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1445_saveFileDialog_onSave)
HXLINE(1445)			 ::openfl::net::FileReference _gthis1 = _gthis;
HXDLIN(1445)			_gthis1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1442_saveFileDialog_onSave)
HXDLIN(1442)		 ::openfl::net::FileReference _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(1443)		::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,saveFileDialog_onSave,(void))

void FileReference_obj::saveFileDialog_onSelect(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1450_saveFileDialog_onSelect)
HXLINE(1452)		this->name = ::haxe::io::Path_obj::withoutDirectory(path);
HXLINE(1454)		if (::hx::IsNotNull( this->_hx___data )) {
HXLINE(1456)			::sys::io::File_obj::saveBytes(path,::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(this->_hx___data));
HXLINE(1458)			this->_hx___data = null();
HXLINE(1459)			this->_hx___path = null();
            		}
            		else {
HXLINE(1463)			this->_hx___path = path;
            		}
HXLINE(1467)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("select",fc,1a,33,6a),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,saveFileDialog_onSelect,(void))

void FileReference_obj::urlLoader_download_onComplete( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1471_urlLoader_download_onComplete)
HXLINE(1473)		if (::Std_obj::isOfType(this->_hx___urlLoader->data,::hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE(1475)			this->_hx___data = ( ( ::openfl::utils::ByteArrayData)(this->_hx___urlLoader->data) );
            		}
            		else {
HXLINE(1479)			 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(1479)			this->_hx___data = this1;
HXLINE(1480)			{
HXLINE(1480)				 ::openfl::utils::ByteArrayData this2 = this->_hx___data;
HXDLIN(1480)				this2->writeUTFBytes(::Std_obj::string(this->_hx___urlLoader->data));
            			}
            		}
HXLINE(1483)		if (::hx::IsNotNull( this->_hx___path )) {
HXLINE(1485)			::String _hx_tmp = this->_hx___path;
HXDLIN(1485)			::sys::io::File_obj::saveBytes(_hx_tmp,::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(this->_hx___data));
HXLINE(1487)			this->_hx___path = null();
HXLINE(1488)			this->_hx___data = null();
            		}
HXLINE(1492)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_download_onComplete,(void))

void FileReference_obj::urlLoader_upload_onHttpResponseStatus( ::openfl::events::HTTPStatusEvent event){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1497_urlLoader_upload_onHttpResponseStatus)
HXDLIN(1497)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_upload_onHttpResponseStatus,(void))

void FileReference_obj::urlLoader_upload_onHttpStatus( ::openfl::events::HTTPStatusEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1502_urlLoader_upload_onHttpStatus)
HXDLIN(1502)		if ((event->status == 200)) {
HXLINE(1506)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            		}
            		else {
HXLINE(1508)			if ((event->status != 0)) {
HXLINE(1511)				this->dispatchEvent(event);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_upload_onHttpStatus,(void))

void FileReference_obj::urlLoader_upload_onComplete( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1516_urlLoader_upload_onComplete)
HXLINE(1517)		 ::openfl::net::URLLoader urlLoader = ( ( ::openfl::net::URLLoader)(event->currentTarget) );
HXLINE(1518)		this->dispatchEvent( ::openfl::events::DataEvent_obj::__alloc( HX_CTX ,HX_("uploadCompleteData",24,67,d9,d4),false,false,( (::String)(urlLoader->data) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_upload_onComplete,(void))

void FileReference_obj::urlLoader_onIOError( ::openfl::events::IOErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1523_urlLoader_onIOError)
HXDLIN(1523)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_onIOError,(void))

void FileReference_obj::urlLoader_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1528_urlLoader_onProgress)
HXDLIN(1528)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_onProgress,(void))

void FileReference_obj::urlLoader_onOpen( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1533_urlLoader_onOpen)
HXDLIN(1533)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileReference_obj,urlLoader_onOpen,(void))

 ::Date FileReference_obj::get_creationDate(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1538_get_creationDate)
HXDLIN(1538)		return this->creationDate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,get_creationDate,return )

 ::Date FileReference_obj::get_modificationDate(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1543_get_modificationDate)
HXDLIN(1543)		return this->modificationDate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,get_modificationDate,return )

::String FileReference_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1548_get_name)
HXDLIN(1548)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,get_name,return )

Float FileReference_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1553_get_size)
HXDLIN(1553)		return this->size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,get_size,return )

::String FileReference_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1558_get_type)
HXDLIN(1558)		return this->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,get_type,return )

::String FileReference_obj::get_extension(){
            	HX_STACKFRAME(&_hx_pos_069fe0fa1a76d977_1563_get_extension)
HXDLIN(1563)		return this->extension;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileReference_obj,get_extension,return )


::hx::ObjectPtr< FileReference_obj > FileReference_obj::__new() {
	::hx::ObjectPtr< FileReference_obj > __this = new FileReference_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FileReference_obj > FileReference_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FileReference_obj *__this = (FileReference_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileReference_obj), true, "openfl.net.FileReference"));
	*(void **)__this = FileReference_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FileReference_obj::FileReference_obj()
{
}

void FileReference_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileReference);
	HX_MARK_MEMBER_NAME(creationDate,"creationDate");
	HX_MARK_MEMBER_NAME(creator,"creator");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(modificationDate,"modificationDate");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(extension,"extension");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(_hx___path,"__path");
	HX_MARK_MEMBER_NAME(_hx___urlLoader,"__urlLoader");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FileReference_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(creationDate,"creationDate");
	HX_VISIT_MEMBER_NAME(creator,"creator");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(modificationDate,"modificationDate");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(extension,"extension");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(_hx___path,"__path");
	HX_VISIT_MEMBER_NAME(_hx___urlLoader,"__urlLoader");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FileReference_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_name() : name ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_size() : size ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_type() : type ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return ::hx::Val( _hx___data ); }
		if (HX_FIELD_EQ(inName,"__path") ) { return ::hx::Val( _hx___path ); }
		if (HX_FIELD_EQ(inName,"browse") ) { return ::hx::Val( browse_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"upload") ) { return ::hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"creator") ) { return ::hx::Val( creator ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"download") ) { return ::hx::Val( download_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_extension() : extension ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__urlLoader") ) { return ::hx::Val( _hx___urlLoader ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creationDate") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_creationDate() : creationDate ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_extension") ) { return ::hx::Val( get_extension_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"modificationDate") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_modificationDate() : modificationDate ); }
		if (HX_FIELD_EQ(inName,"urlLoader_onOpen") ) { return ::hx::Val( urlLoader_onOpen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_creationDate") ) { return ::hx::Val( get_creationDate_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"urlLoader_onIOError") ) { return ::hx::Val( urlLoader_onIOError_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"urlLoader_onProgress") ) { return ::hx::Val( urlLoader_onProgress_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_modificationDate") ) { return ::hx::Val( get_modificationDate_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"saveFileDialog_onSave") ) { return ::hx::Val( saveFileDialog_onSave_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"openFileDialog_onCancel") ) { return ::hx::Val( openFileDialog_onCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"openFileDialog_onSelect") ) { return ::hx::Val( openFileDialog_onSelect_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveFileDialog_onCancel") ) { return ::hx::Val( saveFileDialog_onCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveFileDialog_onSelect") ) { return ::hx::Val( saveFileDialog_onSelect_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"openFileDialog_onComplete") ) { return ::hx::Val( openFileDialog_onComplete_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"urlLoader_upload_onComplete") ) { return ::hx::Val( urlLoader_upload_onComplete_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"urlLoader_download_onComplete") ) { return ::hx::Val( urlLoader_download_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"urlLoader_upload_onHttpStatus") ) { return ::hx::Val( urlLoader_upload_onHttpStatus_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"urlLoader_upload_onHttpResponseStatus") ) { return ::hx::Val( urlLoader_upload_onHttpResponseStatus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileReference_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__path") ) { _hx___path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"creator") ) { creator=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { extension=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__urlLoader") ) { _hx___urlLoader=inValue.Cast<  ::openfl::net::URLLoader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creationDate") ) { creationDate=inValue.Cast<  ::Date >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"modificationDate") ) { modificationDate=inValue.Cast<  ::Date >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileReference_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("creationDate",ed,05,04,79));
	outFields->push(HX_("creator",ac,be,6a,11));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("modificationDate",aa,6b,1f,46));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("extension",7f,93,10,e5));
	outFields->push(HX_("__data",4a,b9,5b,f1));
	outFields->push(HX_("__path",c5,48,4a,f9));
	outFields->push(HX_("__urlLoader",c2,ed,09,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileReference_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Date */ ,(int)offsetof(FileReference_obj,creationDate),HX_("creationDate",ed,05,04,79)},
	{::hx::fsString,(int)offsetof(FileReference_obj,creator),HX_("creator",ac,be,6a,11)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(FileReference_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::Date */ ,(int)offsetof(FileReference_obj,modificationDate),HX_("modificationDate",aa,6b,1f,46)},
	{::hx::fsString,(int)offsetof(FileReference_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsFloat,(int)offsetof(FileReference_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsString,(int)offsetof(FileReference_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsString,(int)offsetof(FileReference_obj,extension),HX_("extension",7f,93,10,e5)},
	{::hx::fsObject /*  ::openfl::utils::ByteArrayData */ ,(int)offsetof(FileReference_obj,_hx___data),HX_("__data",4a,b9,5b,f1)},
	{::hx::fsString,(int)offsetof(FileReference_obj,_hx___path),HX_("__path",c5,48,4a,f9)},
	{::hx::fsObject /*  ::openfl::net::URLLoader */ ,(int)offsetof(FileReference_obj,_hx___urlLoader),HX_("__urlLoader",c2,ed,09,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileReference_obj_sStaticStorageInfo = 0;
#endif

static ::String FileReference_obj_sMemberFields[] = {
	HX_("creationDate",ed,05,04,79),
	HX_("creator",ac,be,6a,11),
	HX_("data",2a,56,63,42),
	HX_("modificationDate",aa,6b,1f,46),
	HX_("name",4b,72,ff,48),
	HX_("size",c1,a0,53,4c),
	HX_("type",ba,f2,08,4d),
	HX_("extension",7f,93,10,e5),
	HX_("__data",4a,b9,5b,f1),
	HX_("__path",c5,48,4a,f9),
	HX_("__urlLoader",c2,ed,09,27),
	HX_("browse",8a,dd,60,1c),
	HX_("cancel",7a,ed,33,b8),
	HX_("download",88,6b,c6,91),
	HX_("load",26,9a,b7,47),
	HX_("save",3d,8b,4d,4c),
	HX_("upload",01,ca,59,8c),
	HX_("openFileDialog_onCancel",ca,1c,0e,86),
	HX_("openFileDialog_onComplete",09,a4,08,1c),
	HX_("openFileDialog_onSelect",4c,4a,0d,38),
	HX_("saveFileDialog_onCancel",37,e9,1a,39),
	HX_("saveFileDialog_onSave",ba,2d,29,25),
	HX_("saveFileDialog_onSelect",b9,16,1a,eb),
	HX_("urlLoader_download_onComplete",72,8c,37,14),
	HX_("urlLoader_upload_onHttpResponseStatus",5b,85,13,7f),
	HX_("urlLoader_upload_onHttpStatus",fa,03,55,57),
	HX_("urlLoader_upload_onComplete",d9,af,46,ac),
	HX_("urlLoader_onIOError",e6,f9,50,ae),
	HX_("urlLoader_onProgress",69,3b,e7,8d),
	HX_("urlLoader_onOpen",86,b9,1c,b7),
	HX_("get_creationDate",76,f2,a2,7d),
	HX_("get_modificationDate",b3,d0,89,64),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_size",4a,5c,0e,cc),
	HX_("get_type",43,ae,c3,cc),
	HX_("get_extension",56,67,74,a6),
	::String(null()) };

::hx::Class FileReference_obj::__mClass;

void FileReference_obj::__register()
{
	FileReference_obj _hx_dummy;
	FileReference_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.FileReference",60,01,9c,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileReference_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileReference_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileReference_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileReference_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
