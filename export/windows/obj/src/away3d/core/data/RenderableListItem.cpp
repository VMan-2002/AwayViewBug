#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_data_RenderableListItem
#include <away3d/core/data/RenderableListItem.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_119bc058c173c585_21_new,"away3d.core.data.RenderableListItem","new",0x6c27d7f7,"away3d.core.data.RenderableListItem.new","away3d/core/data/RenderableListItem.hx",21,0x32f13218)
namespace away3d{
namespace core{
namespace data{

void RenderableListItem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_119bc058c173c585_21_new)
            	}

Dynamic RenderableListItem_obj::__CreateEmpty() { return new RenderableListItem_obj; }

void *RenderableListItem_obj::_hx_vtable = 0;

Dynamic RenderableListItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderableListItem_obj > _hx_result = new RenderableListItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RenderableListItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cedebf5;
}


RenderableListItem_obj::RenderableListItem_obj()
{
}

void RenderableListItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderableListItem);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(renderable,"renderable");
	HX_MARK_MEMBER_NAME(materialId,"materialId");
	HX_MARK_MEMBER_NAME(renderOrderId,"renderOrderId");
	HX_MARK_MEMBER_NAME(zIndex,"zIndex");
	HX_MARK_MEMBER_NAME(renderSceneTransform,"renderSceneTransform");
	HX_MARK_MEMBER_NAME(cascaded,"cascaded");
	HX_MARK_END_CLASS();
}

void RenderableListItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(renderable,"renderable");
	HX_VISIT_MEMBER_NAME(materialId,"materialId");
	HX_VISIT_MEMBER_NAME(renderOrderId,"renderOrderId");
	HX_VISIT_MEMBER_NAME(zIndex,"zIndex");
	HX_VISIT_MEMBER_NAME(renderSceneTransform,"renderSceneTransform");
	HX_VISIT_MEMBER_NAME(cascaded,"cascaded");
}

::hx::Val RenderableListItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zIndex") ) { return ::hx::Val( zIndex ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cascaded") ) { return ::hx::Val( cascaded ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { return ::hx::Val( renderable ); }
		if (HX_FIELD_EQ(inName,"materialId") ) { return ::hx::Val( materialId ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderOrderId") ) { return ::hx::Val( renderOrderId ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"renderSceneTransform") ) { return ::hx::Val( renderSceneTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderableListItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::away3d::core::data::RenderableListItem >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zIndex") ) { zIndex=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cascaded") ) { cascaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderable") ) { renderable=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"materialId") ) { materialId=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderOrderId") ) { renderOrderId=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"renderSceneTransform") ) { renderSceneTransform=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderableListItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("renderable",f0,3b,99,f2));
	outFields->push(HX_("materialId",62,54,33,6a));
	outFields->push(HX_("renderOrderId",53,63,96,6f));
	outFields->push(HX_("zIndex",38,10,cc,18));
	outFields->push(HX_("renderSceneTransform",76,94,b8,bf));
	outFields->push(HX_("cascaded",b0,f9,43,1c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderableListItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::core::data::RenderableListItem */ ,(int)offsetof(RenderableListItem_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(RenderableListItem_obj,renderable),HX_("renderable",f0,3b,99,f2)},
	{::hx::fsInt,(int)offsetof(RenderableListItem_obj,materialId),HX_("materialId",62,54,33,6a)},
	{::hx::fsInt,(int)offsetof(RenderableListItem_obj,renderOrderId),HX_("renderOrderId",53,63,96,6f)},
	{::hx::fsFloat,(int)offsetof(RenderableListItem_obj,zIndex),HX_("zIndex",38,10,cc,18)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(RenderableListItem_obj,renderSceneTransform),HX_("renderSceneTransform",76,94,b8,bf)},
	{::hx::fsBool,(int)offsetof(RenderableListItem_obj,cascaded),HX_("cascaded",b0,f9,43,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RenderableListItem_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderableListItem_obj_sMemberFields[] = {
	HX_("next",f3,84,02,49),
	HX_("renderable",f0,3b,99,f2),
	HX_("materialId",62,54,33,6a),
	HX_("renderOrderId",53,63,96,6f),
	HX_("zIndex",38,10,cc,18),
	HX_("renderSceneTransform",76,94,b8,bf),
	HX_("cascaded",b0,f9,43,1c),
	::String(null()) };

::hx::Class RenderableListItem_obj::__mClass;

void RenderableListItem_obj::__register()
{
	RenderableListItem_obj _hx_dummy;
	RenderableListItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.data.RenderableListItem",85,10,59,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderableListItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderableListItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderableListItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderableListItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace data
