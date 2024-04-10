#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_bounds_NullBounds
#include <away3d/bounds/NullBounds.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_Plane3D
#include <away3d/core/math/Plane3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframeSphere
#include <away3d/primitives/WireframeSphere.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_baaf9802c874e31d_21_new,"away3d.bounds.NullBounds","new",0x7c072158,"away3d.bounds.NullBounds.new","away3d/bounds/NullBounds.hx",21,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_31_clone,"away3d.bounds.NullBounds","clone",0x94469255,"away3d.bounds.NullBounds.clone","away3d/bounds/NullBounds.hx",31,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_36_createBoundingRenderable,"away3d.bounds.NullBounds","createBoundingRenderable",0x60913298,"away3d.bounds.NullBounds.createBoundingRenderable","away3d/bounds/NullBounds.hx",36,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_44_isInFrustum,"away3d.bounds.NullBounds","isInFrustum",0x465e49ab,"away3d.bounds.NullBounds.isInFrustum","away3d/bounds/NullBounds.hx",44,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_51_fromGeometry,"away3d.bounds.NullBounds","fromGeometry",0xf646ae44,"away3d.bounds.NullBounds.fromGeometry","away3d/bounds/NullBounds.hx",51,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_58_fromSphere,"away3d.bounds.NullBounds","fromSphere",0xdd6ff21f,"away3d.bounds.NullBounds.fromSphere","away3d/bounds/NullBounds.hx",58,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_65_fromExtremes,"away3d.bounds.NullBounds","fromExtremes",0x7abdf399,"away3d.bounds.NullBounds.fromExtremes","away3d/bounds/NullBounds.hx",65,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_70_classifyToPlane,"away3d.bounds.NullBounds","classifyToPlane",0x61213775,"away3d.bounds.NullBounds.classifyToPlane","away3d/bounds/NullBounds.hx",70,0x441d0af8)
HX_LOCAL_STACK_FRAME(_hx_pos_baaf9802c874e31d_75_transformFrom,"away3d.bounds.NullBounds","transformFrom",0x037f5bee,"away3d.bounds.NullBounds.transformFrom","away3d/bounds/NullBounds.hx",75,0x441d0af8)
namespace away3d{
namespace bounds{

void NullBounds_obj::__construct(::hx::Null< bool >  __o_alwaysIn, ::away3d::primitives::WireframePrimitiveBase renderable){
            		bool alwaysIn = __o_alwaysIn.Default(true);
            	HX_STACKFRAME(&_hx_pos_baaf9802c874e31d_21_new)
HXLINE(  22)		super::__construct();
HXLINE(  23)		this->_alwaysIn = alwaysIn;
HXLINE(  24)		this->_renderable = renderable;
HXLINE(  25)		this->_max->x = (this->_max->y = (this->_max->z = ::Math_obj::POSITIVE_INFINITY));
HXLINE(  26)		Float _hx_tmp;
HXDLIN(  26)		if (this->_alwaysIn) {
HXLINE(  26)			_hx_tmp = ::Math_obj::NEGATIVE_INFINITY;
            		}
            		else {
HXLINE(  26)			_hx_tmp = ::Math_obj::POSITIVE_INFINITY;
            		}
HXDLIN(  26)		this->_min->x = (this->_min->y = (this->_min->z = _hx_tmp));
            	}

Dynamic NullBounds_obj::__CreateEmpty() { return new NullBounds_obj; }

void *NullBounds_obj::_hx_vtable = 0;

Dynamic NullBounds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NullBounds_obj > _hx_result = new NullBounds_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool NullBounds_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09388beb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09388beb;
	} else {
		return inClassId==(int)0x250514b8;
	}
}

 ::away3d::bounds::BoundingVolumeBase NullBounds_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_baaf9802c874e31d_31_clone)
HXDLIN(  31)		return  ::away3d::bounds::NullBounds_obj::__alloc( HX_CTX ,this->_alwaysIn,null());
            	}


 ::away3d::primitives::WireframePrimitiveBase NullBounds_obj::createBoundingRenderable(){
            	HX_GC_STACKFRAME(&_hx_pos_baaf9802c874e31d_36_createBoundingRenderable)
HXDLIN(  36)		if (::hx::IsNotNull( this->_renderable )) {
HXDLIN(  36)			return this->_renderable;
            		}
            		else {
HXDLIN(  36)			return  ::away3d::primitives::WireframeSphere_obj::__alloc( HX_CTX ,100,16,12,16777215,((Float)0.5));
            		}
HXDLIN(  36)		return null();
            	}


bool NullBounds_obj::isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes){
            	HX_STACKFRAME(&_hx_pos_baaf9802c874e31d_44_isInFrustum)
HXDLIN(  44)		return this->_alwaysIn;
            	}


void NullBounds_obj::fromGeometry( ::away3d::core::base::Geometry geometry){
            	HX_STACKFRAME(&_hx_pos_baaf9802c874e31d_51_fromGeometry)
            	}


void NullBounds_obj::fromSphere( ::openfl::geom::Vector3D center,Float radius){
            	HX_STACKFRAME(&_hx_pos_baaf9802c874e31d_58_fromSphere)
            	}


void NullBounds_obj::fromExtremes(Float minX,Float minY,Float minZ,Float maxX,Float maxY,Float maxZ){
            	HX_STACKFRAME(&_hx_pos_baaf9802c874e31d_65_fromExtremes)
            	}


int NullBounds_obj::classifyToPlane( ::away3d::core::math::Plane3D plane){
            	HX_STACKFRAME(&_hx_pos_baaf9802c874e31d_70_classifyToPlane)
HXDLIN(  70)		return 2;
            	}


void NullBounds_obj::transformFrom( ::away3d::bounds::BoundingVolumeBase bounds, ::openfl::geom::Matrix3D matrix){
            	HX_STACKFRAME(&_hx_pos_baaf9802c874e31d_75_transformFrom)
HXDLIN(  75)		this->_alwaysIn = ::hx::TCast<  ::away3d::bounds::NullBounds >::cast(bounds)->_alwaysIn;
            	}



::hx::ObjectPtr< NullBounds_obj > NullBounds_obj::__new(::hx::Null< bool >  __o_alwaysIn, ::away3d::primitives::WireframePrimitiveBase renderable) {
	::hx::ObjectPtr< NullBounds_obj > __this = new NullBounds_obj();
	__this->__construct(__o_alwaysIn,renderable);
	return __this;
}

::hx::ObjectPtr< NullBounds_obj > NullBounds_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_alwaysIn, ::away3d::primitives::WireframePrimitiveBase renderable) {
	NullBounds_obj *__this = (NullBounds_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NullBounds_obj), true, "away3d.bounds.NullBounds"));
	*(void **)__this = NullBounds_obj::_hx_vtable;
	__this->__construct(__o_alwaysIn,renderable);
	return __this;
}

NullBounds_obj::NullBounds_obj()
{
}

void NullBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NullBounds);
	HX_MARK_MEMBER_NAME(_alwaysIn,"_alwaysIn");
	HX_MARK_MEMBER_NAME(_renderable,"_renderable");
	 ::away3d::bounds::BoundingVolumeBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NullBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_alwaysIn,"_alwaysIn");
	HX_VISIT_MEMBER_NAME(_renderable,"_renderable");
	 ::away3d::bounds::BoundingVolumeBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NullBounds_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_alwaysIn") ) { return ::hx::Val( _alwaysIn ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromSphere") ) { return ::hx::Val( fromSphere_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderable") ) { return ::hx::Val( _renderable ); }
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return ::hx::Val( isInFrustum_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromGeometry") ) { return ::hx::Val( fromGeometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"fromExtremes") ) { return ::hx::Val( fromExtremes_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformFrom") ) { return ::hx::Val( transformFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifyToPlane") ) { return ::hx::Val( classifyToPlane_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createBoundingRenderable") ) { return ::hx::Val( createBoundingRenderable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NullBounds_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_alwaysIn") ) { _alwaysIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderable") ) { _renderable=inValue.Cast<  ::away3d::primitives::WireframePrimitiveBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NullBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_alwaysIn",f3,d7,69,3d));
	outFields->push(HX_("_renderable",0f,09,23,c5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NullBounds_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(NullBounds_obj,_alwaysIn),HX_("_alwaysIn",f3,d7,69,3d)},
	{::hx::fsObject /*  ::away3d::primitives::WireframePrimitiveBase */ ,(int)offsetof(NullBounds_obj,_renderable),HX_("_renderable",0f,09,23,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NullBounds_obj_sStaticStorageInfo = 0;
#endif

static ::String NullBounds_obj_sMemberFields[] = {
	HX_("_alwaysIn",f3,d7,69,3d),
	HX_("_renderable",0f,09,23,c5),
	HX_("clone",5d,13,63,48),
	HX_("createBoundingRenderable",90,76,0e,18),
	HX_("isInFrustum",b3,40,fd,94),
	HX_("fromGeometry",3c,de,bf,72),
	HX_("fromSphere",17,b4,3a,00),
	HX_("fromExtremes",91,23,37,f7),
	HX_("classifyToPlane",7d,52,3c,eb),
	HX_("transformFrom",f6,24,10,71),
	::String(null()) };

::hx::Class NullBounds_obj::__mClass;

void NullBounds_obj::__register()
{
	NullBounds_obj _hx_dummy;
	NullBounds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.bounds.NullBounds",66,d5,5d,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NullBounds_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NullBounds_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NullBounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NullBounds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace bounds
