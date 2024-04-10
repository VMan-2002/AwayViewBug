#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SegmentMaterial
#include <away3d/materials/SegmentMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SegmentPass
#include <away3d/materials/passes/SegmentPass.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8336dbb5d303d4a3_20_new,"away3d.materials.SegmentMaterial","new",0x21d80edb,"away3d.materials.SegmentMaterial.new","away3d/materials/SegmentMaterial.hx",20,0x110d28b7)
namespace away3d{
namespace materials{

void SegmentMaterial_obj::__construct(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.25));
            	HX_GC_STACKFRAME(&_hx_pos_8336dbb5d303d4a3_20_new)
HXLINE(  21)		super::__construct();
HXLINE(  23)		this->set_bothSides(true);
HXLINE(  24)		this->addPass((this->_screenPass =  ::away3d::materials::passes::SegmentPass_obj::__alloc( HX_CTX ,thickness)));
HXLINE(  25)		this->_screenPass->set_material(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic SegmentMaterial_obj::__CreateEmpty() { return new SegmentMaterial_obj; }

void *SegmentMaterial_obj::_hx_vtable = 0;

Dynamic SegmentMaterial_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SegmentMaterial_obj > _hx_result = new SegmentMaterial_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SegmentMaterial_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x6a9eaeed || inClassId==(int)0x7e319f05;
	}
}


::hx::ObjectPtr< SegmentMaterial_obj > SegmentMaterial_obj::__new(::hx::Null< Float >  __o_thickness) {
	::hx::ObjectPtr< SegmentMaterial_obj > __this = new SegmentMaterial_obj();
	__this->__construct(__o_thickness);
	return __this;
}

::hx::ObjectPtr< SegmentMaterial_obj > SegmentMaterial_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_thickness) {
	SegmentMaterial_obj *__this = (SegmentMaterial_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SegmentMaterial_obj), true, "away3d.materials.SegmentMaterial"));
	*(void **)__this = SegmentMaterial_obj::_hx_vtable;
	__this->__construct(__o_thickness);
	return __this;
}

SegmentMaterial_obj::SegmentMaterial_obj()
{
}

void SegmentMaterial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SegmentMaterial);
	HX_MARK_MEMBER_NAME(_screenPass,"_screenPass");
	 ::away3d::materials::MaterialBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SegmentMaterial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_screenPass,"_screenPass");
	 ::away3d::materials::MaterialBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SegmentMaterial_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_screenPass") ) { return ::hx::Val( _screenPass ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SegmentMaterial_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_screenPass") ) { _screenPass=inValue.Cast<  ::away3d::materials::passes::SegmentPass >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SegmentMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_screenPass",7c,3f,12,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SegmentMaterial_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::passes::SegmentPass */ ,(int)offsetof(SegmentMaterial_obj,_screenPass),HX_("_screenPass",7c,3f,12,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SegmentMaterial_obj_sStaticStorageInfo = 0;
#endif

static ::String SegmentMaterial_obj_sMemberFields[] = {
	HX_("_screenPass",7c,3f,12,95),
	::String(null()) };

::hx::Class SegmentMaterial_obj::__mClass;

void SegmentMaterial_obj::__register()
{
	SegmentMaterial_obj _hx_dummy;
	SegmentMaterial_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.SegmentMaterial",69,05,a3,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SegmentMaterial_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SegmentMaterial_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SegmentMaterial_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SegmentMaterial_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
