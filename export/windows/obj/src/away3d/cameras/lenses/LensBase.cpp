#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_events_LensEvent
#include <away3d/events/LensEvent.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eedf3727d17882ee_17_new,"away3d.cameras.lenses.LensBase","new",0xf435ba14,"away3d.cameras.lenses.LensBase.new","away3d/cameras/lenses/LensBase.hx",17,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_52_get_frustumCorners,"away3d.cameras.lenses.LensBase","get_frustumCorners",0xb64b0d51,"away3d.cameras.lenses.LensBase.get_frustumCorners","away3d/cameras/lenses/LensBase.hx",52,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_56_set_frustumCorners,"away3d.cameras.lenses.LensBase","set_frustumCorners",0x92fa3fc5,"away3d.cameras.lenses.LensBase.set_frustumCorners","away3d/cameras/lenses/LensBase.hx",56,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_65_get_matrix,"away3d.cameras.lenses.LensBase","get_matrix",0x87e51ad6,"away3d.cameras.lenses.LensBase.get_matrix","away3d/cameras/lenses/LensBase.hx",65,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_74_set_matrix,"away3d.cameras.lenses.LensBase","set_matrix",0x8b62b94a,"away3d.cameras.lenses.LensBase.set_matrix","away3d/cameras/lenses/LensBase.hx",74,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_85_get_near,"away3d.cameras.lenses.LensBase","get_near",0x448b963d,"away3d.cameras.lenses.LensBase.get_near","away3d/cameras/lenses/LensBase.hx",85,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_89_set_near,"away3d.cameras.lenses.LensBase","set_near",0xf2e8efb1,"away3d.cameras.lenses.LensBase.set_near","away3d/cameras/lenses/LensBase.hx",89,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_102_get_far,"away3d.cameras.lenses.LensBase","get_far",0x206d5722,"away3d.cameras.lenses.LensBase.get_far","away3d/cameras/lenses/LensBase.hx",102,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_106_set_far,"away3d.cameras.lenses.LensBase","set_far",0x136ee82e,"away3d.cameras.lenses.LensBase.set_far","away3d/cameras/lenses/LensBase.hx",106,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_122_project,"away3d.cameras.lenses.LensBase","project",0xef95e68d,"away3d.cameras.lenses.LensBase.project","away3d/cameras/lenses/LensBase.hx",122,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_135_get_unprojectionMatrix,"away3d.cameras.lenses.LensBase","get_unprojectionMatrix",0x0c17e09e,"away3d.cameras.lenses.LensBase.get_unprojectionMatrix","away3d/cameras/lenses/LensBase.hx",135,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_159_unproject,"away3d.cameras.lenses.LensBase","unproject",0xcabb4254,"away3d.cameras.lenses.LensBase.unproject","away3d/cameras/lenses/LensBase.hx",159,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_168_clone,"away3d.cameras.lenses.LensBase","clone",0x67d9d211,"away3d.cameras.lenses.LensBase.clone","away3d/cameras/lenses/LensBase.hx",168,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_178_get_aspectRatio,"away3d.cameras.lenses.LensBase","get_aspectRatio",0xbd993f5e,"away3d.cameras.lenses.LensBase.get_aspectRatio","away3d/cameras/lenses/LensBase.hx",178,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_182_set_aspectRatio,"away3d.cameras.lenses.LensBase","set_aspectRatio",0xb964bc6a,"away3d.cameras.lenses.LensBase.set_aspectRatio","away3d/cameras/lenses/LensBase.hx",182,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_195_invalidateMatrix,"away3d.cameras.lenses.LensBase","invalidateMatrix",0xdcaea7e8,"away3d.cameras.lenses.LensBase.invalidateMatrix","away3d/cameras/lenses/LensBase.hx",195,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_209_updateMatrix,"away3d.cameras.lenses.LensBase","updateMatrix",0xbf011cf6,"away3d.cameras.lenses.LensBase.updateMatrix","away3d/cameras/lenses/LensBase.hx",209,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_212_updateScissorRect,"away3d.cameras.lenses.LensBase","updateScissorRect",0x26b1888b,"away3d.cameras.lenses.LensBase.updateScissorRect","away3d/cameras/lenses/LensBase.hx",212,0xc08762fd)
HX_LOCAL_STACK_FRAME(_hx_pos_eedf3727d17882ee_221_updateViewport,"away3d.cameras.lenses.LensBase","updateViewport",0x8ced0a5b,"away3d.cameras.lenses.LensBase.updateViewport","away3d/cameras/lenses/LensBase.hx",221,0xc08762fd)
namespace away3d{
namespace cameras{
namespace lenses{

void LensBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_eedf3727d17882ee_17_new)
HXLINE(  37)		this->_unprojectionInvalid = true;
HXLINE(  34)		::Array< Float > array = null();
HXDLIN(  34)		this->_frustumCorners =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,24,true,array,true);
HXLINE(  33)		this->_matrixInvalid = true;
HXLINE(  31)		this->_aspectRatio = ((Float)1);
HXLINE(  30)		this->_far = ((Float)3000);
HXLINE(  29)		this->_near = ((Float)20);
HXLINE(  28)		this->_viewPort =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  27)		this->_scissorRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  43)		super::__construct(null());
HXLINE(  44)		this->_matrix =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            	}

Dynamic LensBase_obj::__CreateEmpty() { return new LensBase_obj; }

void *LensBase_obj::_hx_vtable = 0;

Dynamic LensBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LensBase_obj > _hx_result = new LensBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LensBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x3a7a0cde;
	}
}

 ::openfl::_Vector::FloatVector LensBase_obj::get_frustumCorners(){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_52_get_frustumCorners)
HXDLIN(  52)		return this->_frustumCorners;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_frustumCorners,return )

 ::openfl::_Vector::FloatVector LensBase_obj::set_frustumCorners( ::openfl::_Vector::FloatVector frustumCorners){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_56_set_frustumCorners)
HXLINE(  57)		this->_frustumCorners = frustumCorners;
HXLINE(  58)		return frustumCorners;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_frustumCorners,return )

 ::openfl::geom::Matrix3D LensBase_obj::get_matrix(){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_65_get_matrix)
HXLINE(  66)		if (this->_matrixInvalid) {
HXLINE(  67)			this->updateMatrix();
HXLINE(  68)			this->_matrixInvalid = false;
            		}
HXLINE(  70)		return this->_matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_matrix,return )

 ::openfl::geom::Matrix3D LensBase_obj::set_matrix( ::openfl::geom::Matrix3D value){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_74_set_matrix)
HXLINE(  75)		this->_matrix = value;
HXLINE(  76)		this->invalidateMatrix();
HXLINE(  77)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_matrix,return )

Float LensBase_obj::get_near(){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_85_get_near)
HXDLIN(  85)		return this->_near;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_near,return )

Float LensBase_obj::set_near(Float value){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_89_set_near)
HXLINE(  90)		if ((value == this->_near)) {
HXLINE(  91)			return value;
            		}
HXLINE(  92)		this->_near = value;
HXLINE(  93)		this->invalidateMatrix();
HXLINE(  94)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_near,return )

Float LensBase_obj::get_far(){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_102_get_far)
HXDLIN( 102)		return this->_far;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_far,return )

Float LensBase_obj::set_far(Float value){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_106_set_far)
HXLINE( 107)		if ((value == this->_far)) {
HXLINE( 108)			return value;
            		}
HXLINE( 109)		this->_far = value;
HXLINE( 110)		this->invalidateMatrix();
HXLINE( 111)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_far,return )

 ::openfl::geom::Vector3D LensBase_obj::project( ::openfl::geom::Vector3D point3d, ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_eedf3727d17882ee_122_project)
HXLINE( 123)		if (::hx::IsNull( v )) {
HXLINE( 123)			v =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 124)		::away3d::core::math::Matrix3DUtils_obj::transformVector(this->get_matrix(),point3d,v);
HXLINE( 125)		v->x = (v->x / v->w);
HXLINE( 126)		v->y = (-(v->y) / v->w);
HXLINE( 129)		v->z = point3d->z;
HXLINE( 131)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(LensBase_obj,project,return )

 ::openfl::geom::Matrix3D LensBase_obj::get_unprojectionMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_eedf3727d17882ee_135_get_unprojectionMatrix)
HXLINE( 136)		if (this->_unprojectionInvalid) {
HXLINE( 137)			if (::hx::IsNull( this->_unprojection )) {
HXLINE( 138)				this->_unprojection =  ::openfl::geom::Matrix3D_obj::__alloc( HX_CTX ,null());
            			}
HXLINE( 139)			 ::openfl::geom::Matrix3D _hx_tmp = this->_unprojection;
HXDLIN( 139)			_hx_tmp->copyFrom(this->get_matrix());
HXLINE( 140)			this->_unprojection->invert();
HXLINE( 141)			this->_unprojectionInvalid = false;
            		}
HXLINE( 144)		return this->_unprojection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_unprojectionMatrix,return )

 ::openfl::geom::Vector3D LensBase_obj::unproject(Float nX,Float nY,Float sZ, ::openfl::geom::Vector3D v){
            	HX_GC_STACKFRAME(&_hx_pos_eedf3727d17882ee_159_unproject)
HXDLIN( 159)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 159)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(LensBase_obj,unproject,return )

 ::away3d::cameras::lenses::LensBase LensBase_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_eedf3727d17882ee_168_clone)
HXDLIN( 168)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 168)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,clone,return )

Float LensBase_obj::get_aspectRatio(){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_178_get_aspectRatio)
HXDLIN( 178)		return this->_aspectRatio;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,get_aspectRatio,return )

Float LensBase_obj::set_aspectRatio(Float value){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_182_set_aspectRatio)
HXLINE( 183)		bool _hx_tmp;
HXDLIN( 183)		if ((this->_aspectRatio != value)) {
HXLINE( 183)			_hx_tmp = ((value * ( (Float)(0) )) != 0);
            		}
            		else {
HXLINE( 183)			_hx_tmp = true;
            		}
HXDLIN( 183)		if (_hx_tmp) {
HXLINE( 184)			return value;
            		}
HXLINE( 185)		this->_aspectRatio = value;
HXLINE( 187)		this->invalidateMatrix();
HXLINE( 188)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LensBase_obj,set_aspectRatio,return )

void LensBase_obj::invalidateMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_eedf3727d17882ee_195_invalidateMatrix)
HXLINE( 196)		this->_matrixInvalid = true;
HXLINE( 197)		this->_unprojectionInvalid = true;
HXLINE( 201)		this->dispatchEvent( ::away3d::events::LensEvent_obj::__alloc( HX_CTX ,HX_("matrixChanged",b3,5c,37,91),::hx::ObjectPtr<OBJ_>(this),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,invalidateMatrix,(void))

void LensBase_obj::updateMatrix(){
            	HX_GC_STACKFRAME(&_hx_pos_eedf3727d17882ee_209_updateMatrix)
HXDLIN( 209)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(LensBase_obj,updateMatrix,(void))

void LensBase_obj::updateScissorRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_212_updateScissorRect)
HXLINE( 213)		this->_scissorRect->x = x;
HXLINE( 214)		this->_scissorRect->y = y;
HXLINE( 215)		this->_scissorRect->width = width;
HXLINE( 216)		this->_scissorRect->height = height;
HXLINE( 217)		this->invalidateMatrix();
            	}


HX_DEFINE_DYNAMIC_FUNC4(LensBase_obj,updateScissorRect,(void))

void LensBase_obj::updateViewport(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_eedf3727d17882ee_221_updateViewport)
HXLINE( 222)		this->_viewPort->x = x;
HXLINE( 223)		this->_viewPort->y = y;
HXLINE( 224)		this->_viewPort->width = width;
HXLINE( 225)		this->_viewPort->height = height;
HXLINE( 226)		this->invalidateMatrix();
            	}


HX_DEFINE_DYNAMIC_FUNC4(LensBase_obj,updateViewport,(void))


::hx::ObjectPtr< LensBase_obj > LensBase_obj::__new() {
	::hx::ObjectPtr< LensBase_obj > __this = new LensBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LensBase_obj > LensBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LensBase_obj *__this = (LensBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LensBase_obj), true, "away3d.cameras.lenses.LensBase"));
	*(void **)__this = LensBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LensBase_obj::LensBase_obj()
{
}

void LensBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LensBase);
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_MARK_MEMBER_NAME(_viewPort,"_viewPort");
	HX_MARK_MEMBER_NAME(_near,"_near");
	HX_MARK_MEMBER_NAME(_far,"_far");
	HX_MARK_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_MARK_MEMBER_NAME(_matrixInvalid,"_matrixInvalid");
	HX_MARK_MEMBER_NAME(_frustumCorners,"_frustumCorners");
	HX_MARK_MEMBER_NAME(_unprojection,"_unprojection");
	HX_MARK_MEMBER_NAME(_unprojectionInvalid,"_unprojectionInvalid");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LensBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_scissorRect,"_scissorRect");
	HX_VISIT_MEMBER_NAME(_viewPort,"_viewPort");
	HX_VISIT_MEMBER_NAME(_near,"_near");
	HX_VISIT_MEMBER_NAME(_far,"_far");
	HX_VISIT_MEMBER_NAME(_aspectRatio,"_aspectRatio");
	HX_VISIT_MEMBER_NAME(_matrixInvalid,"_matrixInvalid");
	HX_VISIT_MEMBER_NAME(_frustumCorners,"_frustumCorners");
	HX_VISIT_MEMBER_NAME(_unprojection,"_unprojection");
	HX_VISIT_MEMBER_NAME(_unprojectionInvalid,"_unprojectionInvalid");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LensBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_far() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"near") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_near() ); }
		if (HX_FIELD_EQ(inName,"_far") ) { return ::hx::Val( _far ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_near") ) { return ::hx::Val( _near ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_matrix() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"get_far") ) { return ::hx::Val( get_far_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_far") ) { return ::hx::Val( set_far_dyn() ); }
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_near") ) { return ::hx::Val( get_near_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_near") ) { return ::hx::Val( set_near_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_viewPort") ) { return ::hx::Val( _viewPort ); }
		if (HX_FIELD_EQ(inName,"unproject") ) { return ::hx::Val( unproject_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return ::hx::Val( get_matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return ::hx::Val( set_matrix_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_aspectRatio() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { return ::hx::Val( _scissorRect ); }
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { return ::hx::Val( _aspectRatio ); }
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return ::hx::Val( updateMatrix_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_unprojection") ) { return ::hx::Val( _unprojection ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"frustumCorners") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_frustumCorners() ); }
		if (HX_FIELD_EQ(inName,"_matrixInvalid") ) { return ::hx::Val( _matrixInvalid ); }
		if (HX_FIELD_EQ(inName,"updateViewport") ) { return ::hx::Val( updateViewport_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_frustumCorners") ) { return ::hx::Val( _frustumCorners ); }
		if (HX_FIELD_EQ(inName,"get_aspectRatio") ) { return ::hx::Val( get_aspectRatio_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_aspectRatio") ) { return ::hx::Val( set_aspectRatio_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateMatrix") ) { return ::hx::Val( invalidateMatrix_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateScissorRect") ) { return ::hx::Val( updateScissorRect_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unprojectionMatrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_unprojectionMatrix() ); }
		if (HX_FIELD_EQ(inName,"get_frustumCorners") ) { return ::hx::Val( get_frustumCorners_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frustumCorners") ) { return ::hx::Val( set_frustumCorners_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_unprojectionInvalid") ) { return ::hx::Val( _unprojectionInvalid ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_unprojectionMatrix") ) { return ::hx::Val( get_unprojectionMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LensBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"far") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_far(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"near") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_near(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_far") ) { _far=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_near") ) { _near=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_matrix(inValue.Cast<  ::openfl::geom::Matrix3D >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_viewPort") ) { _viewPort=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_aspectRatio(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scissorRect") ) { _scissorRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aspectRatio") ) { _aspectRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_unprojection") ) { _unprojection=inValue.Cast<  ::openfl::geom::Matrix3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"frustumCorners") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frustumCorners(inValue.Cast<  ::openfl::_Vector::FloatVector >()) ); }
		if (HX_FIELD_EQ(inName,"_matrixInvalid") ) { _matrixInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_frustumCorners") ) { _frustumCorners=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_unprojectionInvalid") ) { _unprojectionInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LensBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frustumCorners",bc,0b,28,a6));
	outFields->push(HX_("matrix",41,36,c8,bb));
	outFields->push(HX_("near",e8,70,02,49));
	outFields->push(HX_("far",d7,ba,4d,00));
	outFields->push(HX_("unprojectionMatrix",89,f0,2b,7d));
	outFields->push(HX_("aspectRatio",13,e0,c3,fd));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_scissorRect",61,8d,5d,c7));
	outFields->push(HX_("_viewPort",e5,6f,14,cf));
	outFields->push(HX_("_near",c7,8c,13,fc));
	outFields->push(HX_("_far",d8,ff,18,3f));
	outFields->push(HX_("_aspectRatio",14,8e,cd,63));
	outFields->push(HX_("_matrixInvalid",f7,76,04,3e));
	outFields->push(HX_("_frustumCorners",5b,54,88,ef));
	outFields->push(HX_("_unprojection",07,4b,09,13));
	outFields->push(HX_("_unprojectionInvalid",b0,36,80,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LensBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(LensBase_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(LensBase_obj,_scissorRect),HX_("_scissorRect",61,8d,5d,c7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(LensBase_obj,_viewPort),HX_("_viewPort",e5,6f,14,cf)},
	{::hx::fsFloat,(int)offsetof(LensBase_obj,_near),HX_("_near",c7,8c,13,fc)},
	{::hx::fsFloat,(int)offsetof(LensBase_obj,_far),HX_("_far",d8,ff,18,3f)},
	{::hx::fsFloat,(int)offsetof(LensBase_obj,_aspectRatio),HX_("_aspectRatio",14,8e,cd,63)},
	{::hx::fsBool,(int)offsetof(LensBase_obj,_matrixInvalid),HX_("_matrixInvalid",f7,76,04,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(LensBase_obj,_frustumCorners),HX_("_frustumCorners",5b,54,88,ef)},
	{::hx::fsObject /*  ::openfl::geom::Matrix3D */ ,(int)offsetof(LensBase_obj,_unprojection),HX_("_unprojection",07,4b,09,13)},
	{::hx::fsBool,(int)offsetof(LensBase_obj,_unprojectionInvalid),HX_("_unprojectionInvalid",b0,36,80,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LensBase_obj_sStaticStorageInfo = 0;
#endif

static ::String LensBase_obj_sMemberFields[] = {
	HX_("_matrix",e0,47,3f,2a),
	HX_("_scissorRect",61,8d,5d,c7),
	HX_("_viewPort",e5,6f,14,cf),
	HX_("_near",c7,8c,13,fc),
	HX_("_far",d8,ff,18,3f),
	HX_("_aspectRatio",14,8e,cd,63),
	HX_("_matrixInvalid",f7,76,04,3e),
	HX_("_frustumCorners",5b,54,88,ef),
	HX_("_unprojection",07,4b,09,13),
	HX_("_unprojectionInvalid",b0,36,80,b0),
	HX_("get_frustumCorners",85,ec,c1,41),
	HX_("set_frustumCorners",f9,1e,71,1e),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("set_matrix",7e,44,cd,af),
	HX_("get_near",71,2c,bd,c8),
	HX_("set_near",e5,85,1a,77),
	HX_("get_far",6e,83,c2,26),
	HX_("set_far",7a,14,c4,19),
	HX_("project",d9,12,eb,f5),
	HX_("get_unprojectionMatrix",d2,69,c0,d6),
	HX_("unproject",a0,19,ed,f1),
	HX_("clone",5d,13,63,48),
	HX_("get_aspectRatio",aa,97,a5,be),
	HX_("set_aspectRatio",b6,14,71,ba),
	HX_("invalidateMatrix",1c,92,6f,c6),
	HX_("updateMatrix",2a,dd,8b,bb),
	HX_("updateScissorRect",d7,8b,bd,c5),
	HX_("updateViewport",8f,3f,cf,d1),
	::String(null()) };

::hx::Class LensBase_obj::__mClass;

void LensBase_obj::__register()
{
	LensBase_obj _hx_dummy;
	LensBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.cameras.lenses.LensBase",22,60,2a,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LensBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LensBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LensBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LensBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace cameras
} // end namespace lenses
