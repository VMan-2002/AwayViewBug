#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItemPool
#include <away3d/core/data/RenderableListItemPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95d1c5fc0e707944_12_new,"away3d.core.data.RenderableListItemPool","new",0xf5861973,"away3d.core.data.RenderableListItemPool.new","away3d/core/data/RenderableListItemPool.hx",12,0x45547f9c)
HX_LOCAL_STACK_FRAME(_hx_pos_95d1c5fc0e707944_20_getItem,"away3d.core.data.RenderableListItemPool","getItem",0xbf6a435c,"away3d.core.data.RenderableListItemPool.getItem","away3d/core/data/RenderableListItemPool.hx",20,0x45547f9c)
HX_LOCAL_STACK_FRAME(_hx_pos_95d1c5fc0e707944_31_freeAll,"away3d.core.data.RenderableListItemPool","freeAll",0x37d11668,"away3d.core.data.RenderableListItemPool.freeAll","away3d/core/data/RenderableListItemPool.hx",31,0x45547f9c)
HX_LOCAL_STACK_FRAME(_hx_pos_95d1c5fc0e707944_36_dispose,"away3d.core.data.RenderableListItemPool","dispose",0x62744f32,"away3d.core.data.RenderableListItemPool.dispose","away3d/core/data/RenderableListItemPool.hx",36,0x45547f9c)
namespace away3d{
namespace core{
namespace data{

void RenderableListItemPool_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_95d1c5fc0e707944_12_new)
HXLINE(  13)		this->_index = 0;
HXLINE(  14)		this->_poolSize = 0;
HXLINE(  15)		int length = null();
HXDLIN(  15)		bool fixed = null();
HXDLIN(  15)		::Array< ::Dynamic> array = null();
HXDLIN(  15)		this->_pool =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic RenderableListItemPool_obj::__CreateEmpty() { return new RenderableListItemPool_obj; }

void *RenderableListItemPool_obj::_hx_vtable = 0;

Dynamic RenderableListItemPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderableListItemPool_obj > _hx_result = new RenderableListItemPool_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RenderableListItemPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33f70aa9;
}

 ::away3d::core::data::RenderableListItem RenderableListItemPool_obj::getItem(){
            	HX_GC_STACKFRAME(&_hx_pos_95d1c5fc0e707944_20_getItem)
HXDLIN(  20)		if ((this->_index == this->_poolSize)) {
HXLINE(  21)			 ::away3d::core::data::RenderableListItem item =  ::away3d::core::data::RenderableListItem_obj::__alloc( HX_CTX );
HXLINE(  22)			this->_pool->set(this->_index++,item).StaticCast<  ::away3d::core::data::RenderableListItem >();
HXLINE(  23)			++this->_poolSize;
HXLINE(  24)			return item;
            		}
            		else {
HXLINE(  26)			return this->_pool->get(this->_index++).StaticCast<  ::away3d::core::data::RenderableListItem >();
            		}
HXLINE(  20)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderableListItemPool_obj,getItem,return )

void RenderableListItemPool_obj::freeAll(){
            	HX_STACKFRAME(&_hx_pos_95d1c5fc0e707944_31_freeAll)
HXDLIN(  31)		this->_index = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderableListItemPool_obj,freeAll,(void))

void RenderableListItemPool_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_95d1c5fc0e707944_36_dispose)
HXDLIN(  36)		this->_pool->set_length(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderableListItemPool_obj,dispose,(void))


::hx::ObjectPtr< RenderableListItemPool_obj > RenderableListItemPool_obj::__new() {
	::hx::ObjectPtr< RenderableListItemPool_obj > __this = new RenderableListItemPool_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RenderableListItemPool_obj > RenderableListItemPool_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RenderableListItemPool_obj *__this = (RenderableListItemPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderableListItemPool_obj), true, "away3d.core.data.RenderableListItemPool"));
	*(void **)__this = RenderableListItemPool_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RenderableListItemPool_obj::RenderableListItemPool_obj()
{
}

void RenderableListItemPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderableListItemPool);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_poolSize,"_poolSize");
	HX_MARK_END_CLASS();
}

void RenderableListItemPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_poolSize,"_poolSize");
}

::hx::Val RenderableListItemPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return ::hx::Val( _pool ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { return ::hx::Val( _index ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getItem") ) { return ::hx::Val( getItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"freeAll") ) { return ::hx::Val( freeAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_poolSize") ) { return ::hx::Val( _poolSize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderableListItemPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_poolSize") ) { _poolSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderableListItemPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_pool",bb,9c,6d,fd));
	outFields->push(HX_("_index",53,e2,fb,b9));
	outFields->push(HX_("_poolSize",1c,e3,86,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderableListItemPool_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(RenderableListItemPool_obj,_pool),HX_("_pool",bb,9c,6d,fd)},
	{::hx::fsInt,(int)offsetof(RenderableListItemPool_obj,_index),HX_("_index",53,e2,fb,b9)},
	{::hx::fsInt,(int)offsetof(RenderableListItemPool_obj,_poolSize),HX_("_poolSize",1c,e3,86,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RenderableListItemPool_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderableListItemPool_obj_sMemberFields[] = {
	HX_("_pool",bb,9c,6d,fd),
	HX_("_index",53,e2,fb,b9),
	HX_("_poolSize",1c,e3,86,1d),
	HX_("getItem",c9,74,42,18),
	HX_("freeAll",d5,47,a9,90),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class RenderableListItemPool_obj::__mClass;

void RenderableListItemPool_obj::__register()
{
	RenderableListItemPool_obj _hx_dummy;
	RenderableListItemPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.data.RenderableListItemPool",01,e4,a1,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderableListItemPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderableListItemPool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderableListItemPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderableListItemPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace data
