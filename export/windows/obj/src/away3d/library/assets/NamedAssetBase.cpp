#include <hxcpp.h>

#ifndef INCLUDED_away3d_events_Asset3DEvent
#include <away3d/events/Asset3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e7c44be22d7f016_25_new,"away3d.library.assets.NamedAssetBase","new",0xb7c34da3,"away3d.library.assets.NamedAssetBase.new","away3d/library/assets/NamedAssetBase.hx",25,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_44_get_originalName,"away3d.library.assets.NamedAssetBase","get_originalName",0xcb41f0a2,"away3d.library.assets.NamedAssetBase.get_originalName","away3d/library/assets/NamedAssetBase.hx",44,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_49_get_id,"away3d.library.assets.NamedAssetBase","get_id",0xc715e1c1,"away3d.library.assets.NamedAssetBase.get_id","away3d/library/assets/NamedAssetBase.hx",49,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_53_set_id,"away3d.library.assets.NamedAssetBase","set_id",0x935e3635,"away3d.library.assets.NamedAssetBase.set_id","away3d/library/assets/NamedAssetBase.hx",53,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_60_get_name,"away3d.library.assets.NamedAssetBase","get_name",0x24eebdb1,"away3d.library.assets.NamedAssetBase.get_name","away3d/library/assets/NamedAssetBase.hx",60,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_64_set_name,"away3d.library.assets.NamedAssetBase","set_name",0xd34c1725,"away3d.library.assets.NamedAssetBase.set_name","away3d/library/assets/NamedAssetBase.hx",64,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_81_get_assetNamespace,"away3d.library.assets.NamedAssetBase","get_assetNamespace",0x641c6971,"away3d.library.assets.NamedAssetBase.get_assetNamespace","away3d/library/assets/NamedAssetBase.hx",81,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_86_get_assetFullPath,"away3d.library.assets.NamedAssetBase","get_assetFullPath",0xa2af1cbe,"away3d.library.assets.NamedAssetBase.get_assetFullPath","away3d/library/assets/NamedAssetBase.hx",86,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_91_assetPathEquals,"away3d.library.assets.NamedAssetBase","assetPathEquals",0x3b6ca197,"away3d.library.assets.NamedAssetBase.assetPathEquals","away3d/library/assets/NamedAssetBase.hx",91,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_95_resetAssetPath,"away3d.library.assets.NamedAssetBase","resetAssetPath",0xe7f9eb83,"away3d.library.assets.NamedAssetBase.resetAssetPath","away3d/library/assets/NamedAssetBase.hx",95,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_106_updateFullPath,"away3d.library.assets.NamedAssetBase","updateFullPath",0x7220b59a,"away3d.library.assets.NamedAssetBase.updateFullPath","away3d/library/assets/NamedAssetBase.hx",106,0x3a20450e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e7c44be22d7f016_22_boot,"away3d.library.assets.NamedAssetBase","boot",0x0b39a18f,"away3d.library.assets.NamedAssetBase.boot","away3d/library/assets/NamedAssetBase.hx",22,0x3a20450e)
namespace away3d{
namespace library{
namespace assets{

void NamedAssetBase_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_25_new)
HXLINE(  26)		if (::hx::IsNull( name )) {
HXLINE(  27)			name = HX_("null",87,9e,0e,49);
            		}
HXLINE(  29)		this->_name = name;
HXLINE(  30)		this->_originalName = name;
HXLINE(  32)		this->updateFullPath();
HXLINE(  34)		super::__construct(null());
            	}

Dynamic NamedAssetBase_obj::__CreateEmpty() { return new NamedAssetBase_obj; }

void *NamedAssetBase_obj::_hx_vtable = 0;

Dynamic NamedAssetBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NamedAssetBase_obj > _hx_result = new NamedAssetBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NamedAssetBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x37f46043;
	}
}

::String NamedAssetBase_obj::get_originalName(){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_44_get_originalName)
HXDLIN(  44)		return this->_originalName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_originalName,return )

::String NamedAssetBase_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_49_get_id)
HXDLIN(  49)		return this->_id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_id,return )

::String NamedAssetBase_obj::set_id(::String newID){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_53_set_id)
HXLINE(  54)		this->_id = newID;
HXLINE(  55)		return newID;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NamedAssetBase_obj,set_id,return )

::String NamedAssetBase_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_60_get_name)
HXDLIN(  60)		return this->_name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_name,return )

::String NamedAssetBase_obj::set_name(::String val){
            	HX_GC_STACKFRAME(&_hx_pos_8e7c44be22d7f016_64_set_name)
HXLINE(  65)		::String prev = this->_name;
HXLINE(  68)		this->_name = val;
HXLINE(  69)		if (::hx::IsNull( this->_name )) {
HXLINE(  70)			this->_name = HX_("null",87,9e,0e,49);
            		}
HXLINE(  72)		this->updateFullPath();
HXLINE(  74)		if (this->hasEventListener(HX_("assetRename",8e,1d,89,9a))) {
HXLINE(  75)			this->dispatchEvent( ::away3d::events::Asset3DEvent_obj::__alloc( HX_CTX ,HX_("assetRename",8e,1d,89,9a), ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0xa8241686),prev));
            		}
HXLINE(  76)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NamedAssetBase_obj,set_name,return )

::String NamedAssetBase_obj::get_assetNamespace(){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_81_get_assetNamespace)
HXDLIN(  81)		return this->_namespace;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_assetNamespace,return )

::cpp::VirtualArray NamedAssetBase_obj::get_assetFullPath(){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_86_get_assetFullPath)
HXDLIN(  86)		return this->_full_path;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,get_assetFullPath,return )

bool NamedAssetBase_obj::assetPathEquals(::String name,::String ns){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_91_assetPathEquals)
HXDLIN(  91)		if ((this->_name == name)) {
HXDLIN(  91)			if (::hx::IsNotNull( ns )) {
HXDLIN(  91)				return (this->_namespace == ns);
            			}
            			else {
HXDLIN(  91)				return true;
            			}
            		}
            		else {
HXDLIN(  91)			return false;
            		}
HXDLIN(  91)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NamedAssetBase_obj,assetPathEquals,return )

void NamedAssetBase_obj::resetAssetPath(::String name,::String ns, ::Dynamic __o_overrideOriginal){
            		 ::Dynamic overrideOriginal = __o_overrideOriginal;
            		if (::hx::IsNull(__o_overrideOriginal)) overrideOriginal = true;
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_95_resetAssetPath)
HXLINE(  96)		::String _hx_tmp;
HXDLIN(  96)		if (::hx::IsNotNull( name )) {
HXLINE(  96)			_hx_tmp = name;
            		}
            		else {
HXLINE(  96)			_hx_tmp = HX_("null",87,9e,0e,49);
            		}
HXDLIN(  96)		this->_name = _hx_tmp;
HXLINE(  97)		::String _hx_tmp1;
HXDLIN(  97)		if (::hx::IsNotNull( ns )) {
HXLINE(  97)			_hx_tmp1 = ns;
            		}
            		else {
HXLINE(  97)			_hx_tmp1 = HX_("default",c1,d8,c3,9b);
            		}
HXDLIN(  97)		this->_namespace = _hx_tmp1;
HXLINE(  98)		if (( (bool)(overrideOriginal) )) {
HXLINE(  99)			this->_originalName = this->_name;
            		}
HXLINE( 101)		this->updateFullPath();
            	}


HX_DEFINE_DYNAMIC_FUNC3(NamedAssetBase_obj,resetAssetPath,(void))

void NamedAssetBase_obj::updateFullPath(){
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_106_updateFullPath)
HXDLIN( 106)		this->_full_path = ::cpp::VirtualArray_obj::__new(2)->init(0,this->_namespace)->init(1,this->_name);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NamedAssetBase_obj,updateFullPath,(void))

::String NamedAssetBase_obj::DEFAULT_NAMESPACE;


::hx::ObjectPtr< NamedAssetBase_obj > NamedAssetBase_obj::__new(::String name) {
	::hx::ObjectPtr< NamedAssetBase_obj > __this = new NamedAssetBase_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< NamedAssetBase_obj > NamedAssetBase_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	NamedAssetBase_obj *__this = (NamedAssetBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NamedAssetBase_obj), true, "away3d.library.assets.NamedAssetBase"));
	*(void **)__this = NamedAssetBase_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

NamedAssetBase_obj::NamedAssetBase_obj()
{
}

void NamedAssetBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NamedAssetBase);
	HX_MARK_MEMBER_NAME(_originalName,"_originalName");
	HX_MARK_MEMBER_NAME(_namespace,"_namespace");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_full_path,"_full_path");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NamedAssetBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_originalName,"_originalName");
	HX_VISIT_MEMBER_NAME(_namespace,"_namespace");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_full_path,"_full_path");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NamedAssetBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return ::hx::Val( _id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return ::hx::Val( _name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return ::hx::Val( set_id_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return ::hx::Val( set_name_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_namespace") ) { return ::hx::Val( _namespace ); }
		if (HX_FIELD_EQ(inName,"_full_path") ) { return ::hx::Val( _full_path ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"originalName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_originalName() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assetFullPath") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetFullPath() ); }
		if (HX_FIELD_EQ(inName,"_originalName") ) { return ::hx::Val( _originalName ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"assetNamespace") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetNamespace() ); }
		if (HX_FIELD_EQ(inName,"resetAssetPath") ) { return ::hx::Val( resetAssetPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFullPath") ) { return ::hx::Val( updateFullPath_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"assetPathEquals") ) { return ::hx::Val( assetPathEquals_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_originalName") ) { return ::hx::Val( get_originalName_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_assetFullPath") ) { return ::hx::Val( get_assetFullPath_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_assetNamespace") ) { return ::hx::Val( get_assetNamespace_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NamedAssetBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_id(inValue.Cast< ::String >()) ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_name(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_namespace") ) { _namespace=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_full_path") ) { _full_path=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_originalName") ) { _originalName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NamedAssetBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("originalName",3c,cf,5f,22));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("assetNamespace",8b,a2,62,25));
	outFields->push(HX_("assetFullPath",e4,04,b4,85));
	outFields->push(HX_("_originalName",1b,62,ce,04));
	outFields->push(HX_("_namespace",5c,66,90,43));
	outFields->push(HX_("_name",2a,8e,10,fc));
	outFields->push(HX_("_id",fa,71,48,00));
	outFields->push(HX_("_full_path",56,8d,dc,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NamedAssetBase_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(NamedAssetBase_obj,_originalName),HX_("_originalName",1b,62,ce,04)},
	{::hx::fsString,(int)offsetof(NamedAssetBase_obj,_namespace),HX_("_namespace",5c,66,90,43)},
	{::hx::fsString,(int)offsetof(NamedAssetBase_obj,_name),HX_("_name",2a,8e,10,fc)},
	{::hx::fsString,(int)offsetof(NamedAssetBase_obj,_id),HX_("_id",fa,71,48,00)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(NamedAssetBase_obj,_full_path),HX_("_full_path",56,8d,dc,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NamedAssetBase_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NamedAssetBase_obj::DEFAULT_NAMESPACE,HX_("DEFAULT_NAMESPACE",1d,f6,30,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NamedAssetBase_obj_sMemberFields[] = {
	HX_("_originalName",1b,62,ce,04),
	HX_("_namespace",5c,66,90,43),
	HX_("_name",2a,8e,10,fc),
	HX_("_id",fa,71,48,00),
	HX_("_full_path",56,8d,dc,42),
	HX_("get_originalName",c5,bb,fe,26),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("get_name",d4,2d,ba,c8),
	HX_("set_name",48,87,17,77),
	HX_("get_assetNamespace",54,83,fc,c0),
	HX_("get_assetFullPath",3b,10,24,8c),
	HX_("assetPathEquals",d4,cb,d4,5a),
	HX_("resetAssetPath",e6,97,68,09),
	HX_("updateFullPath",fd,61,8f,93),
	::String(null()) };

static void NamedAssetBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NamedAssetBase_obj::DEFAULT_NAMESPACE,"DEFAULT_NAMESPACE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NamedAssetBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NamedAssetBase_obj::DEFAULT_NAMESPACE,"DEFAULT_NAMESPACE");
};

#endif

::hx::Class NamedAssetBase_obj::__mClass;

static ::String NamedAssetBase_obj_sStaticFields[] = {
	HX_("DEFAULT_NAMESPACE",1d,f6,30,d9),
	::String(null())
};

void NamedAssetBase_obj::__register()
{
	NamedAssetBase_obj _hx_dummy;
	NamedAssetBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.library.assets.NamedAssetBase",31,40,c5,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NamedAssetBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NamedAssetBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NamedAssetBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NamedAssetBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NamedAssetBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NamedAssetBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NamedAssetBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NamedAssetBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8e7c44be22d7f016_22_boot)
HXDLIN(  22)		DEFAULT_NAMESPACE = HX_("default",c1,d8,c3,9b);
            	}
}

} // end namespace away3d
} // end namespace library
} // end namespace assets
