#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_data_EntityListItem
#include <away3d/core/data/EntityListItem.h>
#endif
#ifndef INCLUDED_away3d_core_data_EntityListItemPool
#include <away3d/core/data/EntityListItemPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d70e4f25ff3071e_12_new,"away3d.core.data.EntityListItemPool","new",0xa88f04a6,"away3d.core.data.EntityListItemPool.new","away3d/core/data/EntityListItemPool.hx",12,0x47e07049)
HX_LOCAL_STACK_FRAME(_hx_pos_7d70e4f25ff3071e_19_getItem,"away3d.core.data.EntityListItemPool","getItem",0x1e34440f,"away3d.core.data.EntityListItemPool.getItem","away3d/core/data/EntityListItemPool.hx",19,0x47e07049)
HX_LOCAL_STACK_FRAME(_hx_pos_7d70e4f25ff3071e_32_freeAll,"away3d.core.data.EntityListItemPool","freeAll",0x969b171b,"away3d.core.data.EntityListItemPool.freeAll","away3d/core/data/EntityListItemPool.hx",32,0x47e07049)
HX_LOCAL_STACK_FRAME(_hx_pos_7d70e4f25ff3071e_37_dispose,"away3d.core.data.EntityListItemPool","dispose",0xc13e4fe5,"away3d.core.data.EntityListItemPool.dispose","away3d/core/data/EntityListItemPool.hx",37,0x47e07049)
namespace away3d{
namespace core{
namespace data{

void EntityListItemPool_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7d70e4f25ff3071e_12_new)
HXLINE(  13)		this->_index = 0;
HXLINE(  14)		this->_poolSize = 0;
HXLINE(  15)		int length = null();
HXDLIN(  15)		bool fixed = null();
HXDLIN(  15)		::Array< ::Dynamic> array = null();
HXDLIN(  15)		this->_pool =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic EntityListItemPool_obj::__CreateEmpty() { return new EntityListItemPool_obj; }

void *EntityListItemPool_obj::_hx_vtable = 0;

Dynamic EntityListItemPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EntityListItemPool_obj > _hx_result = new EntityListItemPool_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EntityListItemPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x685c17f8;
}

 ::away3d::core::data::EntityListItem EntityListItemPool_obj::getItem(){
            	HX_GC_STACKFRAME(&_hx_pos_7d70e4f25ff3071e_19_getItem)
HXLINE(  20)		 ::away3d::core::data::EntityListItem item;
HXLINE(  21)		if ((this->_index == this->_poolSize)) {
HXLINE(  22)			item =  ::away3d::core::data::EntityListItem_obj::__alloc( HX_CTX );
HXLINE(  23)			this->_pool->set(this->_index++,item).StaticCast<  ::away3d::core::data::EntityListItem >();
HXLINE(  24)			++this->_poolSize;
            		}
            		else {
HXLINE(  26)			item = this->_pool->get(this->_index++).StaticCast<  ::away3d::core::data::EntityListItem >();
            		}
HXLINE(  27)		return item;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityListItemPool_obj,getItem,return )

void EntityListItemPool_obj::freeAll(){
            	HX_STACKFRAME(&_hx_pos_7d70e4f25ff3071e_32_freeAll)
HXDLIN(  32)		this->_index = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityListItemPool_obj,freeAll,(void))

void EntityListItemPool_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_7d70e4f25ff3071e_37_dispose)
HXDLIN(  37)		this->_pool->set_length(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EntityListItemPool_obj,dispose,(void))


::hx::ObjectPtr< EntityListItemPool_obj > EntityListItemPool_obj::__new() {
	::hx::ObjectPtr< EntityListItemPool_obj > __this = new EntityListItemPool_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EntityListItemPool_obj > EntityListItemPool_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EntityListItemPool_obj *__this = (EntityListItemPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EntityListItemPool_obj), true, "away3d.core.data.EntityListItemPool"));
	*(void **)__this = EntityListItemPool_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EntityListItemPool_obj::EntityListItemPool_obj()
{
}

void EntityListItemPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityListItemPool);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_poolSize,"_poolSize");
	HX_MARK_END_CLASS();
}

void EntityListItemPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_poolSize,"_poolSize");
}

::hx::Val EntityListItemPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val EntityListItemPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void EntityListItemPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_pool",bb,9c,6d,fd));
	outFields->push(HX_("_index",53,e2,fb,b9));
	outFields->push(HX_("_poolSize",1c,e3,86,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EntityListItemPool_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(EntityListItemPool_obj,_pool),HX_("_pool",bb,9c,6d,fd)},
	{::hx::fsInt,(int)offsetof(EntityListItemPool_obj,_index),HX_("_index",53,e2,fb,b9)},
	{::hx::fsInt,(int)offsetof(EntityListItemPool_obj,_poolSize),HX_("_poolSize",1c,e3,86,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EntityListItemPool_obj_sStaticStorageInfo = 0;
#endif

static ::String EntityListItemPool_obj_sMemberFields[] = {
	HX_("_pool",bb,9c,6d,fd),
	HX_("_index",53,e2,fb,b9),
	HX_("_poolSize",1c,e3,86,1d),
	HX_("getItem",c9,74,42,18),
	HX_("freeAll",d5,47,a9,90),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class EntityListItemPool_obj::__mClass;

void EntityListItemPool_obj::__register()
{
	EntityListItemPool_obj _hx_dummy;
	EntityListItemPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.data.EntityListItemPool",b4,79,82,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EntityListItemPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EntityListItemPool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EntityListItemPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EntityListItemPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace data
