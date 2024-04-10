#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_FreeMatrixLens
#include <away3d/cameras/lenses/FreeMatrixLens.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_PerspectiveLens
#include <away3d/cameras/lenses/PerspectiveLens.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7d39481326105e1_13_new,"away3d.cameras.lenses.FreeMatrixLens","new",0xfb381bd0,"away3d.cameras.lenses.FreeMatrixLens.new","away3d/cameras/lenses/FreeMatrixLens.hx",13,0x2ca71b81)
HX_LOCAL_STACK_FRAME(_hx_pos_b7d39481326105e1_19_set_near,"away3d.cameras.lenses.FreeMatrixLens","set_near",0x0dbec475,"away3d.cameras.lenses.FreeMatrixLens.set_near","away3d/cameras/lenses/FreeMatrixLens.hx",19,0x2ca71b81)
HX_LOCAL_STACK_FRAME(_hx_pos_b7d39481326105e1_25_set_far,"away3d.cameras.lenses.FreeMatrixLens","set_far",0xe10ad7ea,"away3d.cameras.lenses.FreeMatrixLens.set_far","away3d/cameras/lenses/FreeMatrixLens.hx",25,0x2ca71b81)
HX_LOCAL_STACK_FRAME(_hx_pos_b7d39481326105e1_31_set_aspectRatio,"away3d.cameras.lenses.FreeMatrixLens","set_aspectRatio",0x6450c826,"away3d.cameras.lenses.FreeMatrixLens.set_aspectRatio","away3d/cameras/lenses/FreeMatrixLens.hx",31,0x2ca71b81)
HX_LOCAL_STACK_FRAME(_hx_pos_b7d39481326105e1_37_clone,"away3d.cameras.lenses.FreeMatrixLens","clone",0xfd851acd,"away3d.cameras.lenses.FreeMatrixLens.clone","away3d/cameras/lenses/FreeMatrixLens.hx",37,0x2ca71b81)
HX_LOCAL_STACK_FRAME(_hx_pos_b7d39481326105e1_49_updateMatrix,"away3d.cameras.lenses.FreeMatrixLens","updateMatrix",0x35daa3ba,"away3d.cameras.lenses.FreeMatrixLens.updateMatrix","away3d/cameras/lenses/FreeMatrixLens.hx",49,0x2ca71b81)
namespace away3d{
namespace cameras{
namespace lenses{

void FreeMatrixLens_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b7d39481326105e1_13_new)
HXLINE(  14)		super::__construct();
HXLINE(  15)		 ::openfl::geom::Matrix3D _hx_tmp = this->_matrix;
HXDLIN(  15)		_hx_tmp->copyFrom( ::away3d::cameras::lenses::PerspectiveLens_obj::__alloc( HX_CTX ,null(),null())->get_matrix());
            	}

Dynamic FreeMatrixLens_obj::__CreateEmpty() { return new FreeMatrixLens_obj; }

void *FreeMatrixLens_obj::_hx_vtable = 0;

Dynamic FreeMatrixLens_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FreeMatrixLens_obj > _hx_result = new FreeMatrixLens_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FreeMatrixLens_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a7a0cde) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3a7a0cde;
		}
	} else {
		return inClassId==(int)0x72f3cc46;
	}
}

Float FreeMatrixLens_obj::set_near(Float value){
            	HX_STACKFRAME(&_hx_pos_b7d39481326105e1_19_set_near)
HXLINE(  20)		this->_near = value;
HXLINE(  21)		return value;
            	}


Float FreeMatrixLens_obj::set_far(Float value){
            	HX_STACKFRAME(&_hx_pos_b7d39481326105e1_25_set_far)
HXLINE(  26)		this->_far = value;
HXLINE(  27)		return value;
            	}


Float FreeMatrixLens_obj::set_aspectRatio(Float value){
            	HX_STACKFRAME(&_hx_pos_b7d39481326105e1_31_set_aspectRatio)
HXLINE(  32)		this->_aspectRatio = value;
HXLINE(  33)		return value;
            	}


 ::away3d::cameras::lenses::LensBase FreeMatrixLens_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b7d39481326105e1_37_clone)
HXLINE(  38)		 ::away3d::cameras::lenses::FreeMatrixLens clone =  ::away3d::cameras::lenses::FreeMatrixLens_obj::__alloc( HX_CTX );
HXLINE(  39)		clone->_matrix->copyFrom(this->_matrix);
HXLINE(  40)		clone->_near = this->_near;
HXLINE(  41)		clone->_far = this->_far;
HXLINE(  42)		clone->_aspectRatio = this->_aspectRatio;
HXLINE(  43)		clone->invalidateMatrix();
HXLINE(  44)		return clone;
            	}


void FreeMatrixLens_obj::updateMatrix(){
            	HX_STACKFRAME(&_hx_pos_b7d39481326105e1_49_updateMatrix)
HXDLIN(  49)		this->_matrixInvalid = false;
            	}



::hx::ObjectPtr< FreeMatrixLens_obj > FreeMatrixLens_obj::__new() {
	::hx::ObjectPtr< FreeMatrixLens_obj > __this = new FreeMatrixLens_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FreeMatrixLens_obj > FreeMatrixLens_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FreeMatrixLens_obj *__this = (FreeMatrixLens_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FreeMatrixLens_obj), true, "away3d.cameras.lenses.FreeMatrixLens"));
	*(void **)__this = FreeMatrixLens_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FreeMatrixLens_obj::FreeMatrixLens_obj()
{
}

::hx::Val FreeMatrixLens_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_far") ) { return ::hx::Val( set_far_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_near") ) { return ::hx::Val( set_near_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return ::hx::Val( updateMatrix_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_aspectRatio") ) { return ::hx::Val( set_aspectRatio_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FreeMatrixLens_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FreeMatrixLens_obj_sStaticStorageInfo = 0;
#endif

static ::String FreeMatrixLens_obj_sMemberFields[] = {
	HX_("set_near",e5,85,1a,77),
	HX_("set_far",7a,14,c4,19),
	HX_("set_aspectRatio",b6,14,71,ba),
	HX_("clone",5d,13,63,48),
	HX_("updateMatrix",2a,dd,8b,bb),
	::String(null()) };

::hx::Class FreeMatrixLens_obj::__mClass;

void FreeMatrixLens_obj::__register()
{
	FreeMatrixLens_obj _hx_dummy;
	FreeMatrixLens_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.cameras.lenses.FreeMatrixLens",de,33,f2,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FreeMatrixLens_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FreeMatrixLens_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FreeMatrixLens_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FreeMatrixLens_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses
