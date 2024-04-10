#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometry
#include <away3d/core/base/SubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_events_GeometryEvent
#include <away3d/events/GeometryEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7e8f639fe007f30_46_new,"away3d.core.base.Geometry","new",0x3d4d3f41,"away3d.core.base.Geometry.new","away3d/core/base/Geometry.hx",46,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_31_get_assetType,"away3d.core.base.Geometry","get_assetType",0xd6de46c2,"away3d.core.base.Geometry.get_assetType","away3d/core/base/Geometry.hx",31,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_39_get_subGeometries,"away3d.core.base.Geometry","get_subGeometries",0xf3a9b728,"away3d.core.base.Geometry.get_subGeometries","away3d/core/base/Geometry.hx",39,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_52_applyTransformation,"away3d.core.base.Geometry","applyTransformation",0xc39f3cb8,"away3d.core.base.Geometry.applyTransformation","away3d/core/base/Geometry.hx",52,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_63_addSubGeometry,"away3d.core.base.Geometry","addSubGeometry",0xb68f9a70,"away3d.core.base.Geometry.addSubGeometry","away3d/core/base/Geometry.hx",63,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_78_removeSubGeometry,"away3d.core.base.Geometry","removeSubGeometry",0x9b8dd90f,"away3d.core.base.Geometry.removeSubGeometry","away3d/core/base/Geometry.hx",78,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_92_clone,"away3d.core.base.Geometry","clone",0xc9bebc7e,"away3d.core.base.Geometry.clone","away3d/core/base/Geometry.hx",92,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_105_scale,"away3d.core.base.Geometry","scale",0xfa2a77ab,"away3d.core.base.Geometry.scale","away3d/core/base/Geometry.hx",105,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_115_dispose,"away3d.core.base.Geometry","dispose",0x09bd7400,"away3d.core.base.Geometry.dispose","away3d/core/base/Geometry.hx",115,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_131_scaleUV,"away3d.core.base.Geometry","scaleUV",0xb37842cc,"away3d.core.base.Geometry.scaleUV","away3d/core/base/Geometry.hx",131,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_142_convertToSeparateBuffers,"away3d.core.base.Geometry","convertToSeparateBuffers",0x7638c321,"away3d.core.base.Geometry.convertToSeparateBuffers","away3d/core/base/Geometry.hx",142,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_163_validate,"away3d.core.base.Geometry","validate",0x5947d215,"away3d.core.base.Geometry.validate","away3d/core/base/Geometry.hx",163,0x1f17ad4e)
HX_LOCAL_STACK_FRAME(_hx_pos_b7e8f639fe007f30_169_invalidateBounds,"away3d.core.base.Geometry","invalidateBounds",0x6054facf,"away3d.core.base.Geometry.invalidateBounds","away3d/core/base/Geometry.hx",169,0x1f17ad4e)
namespace away3d{
namespace core{
namespace base{

void Geometry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b7e8f639fe007f30_46_new)
HXLINE(  47)		super::__construct(null());
HXLINE(  48)		int length = null();
HXDLIN(  48)		bool fixed = null();
HXDLIN(  48)		::Array< ::Dynamic> array = null();
HXDLIN(  48)		this->_subGeometries =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic Geometry_obj::__CreateEmpty() { return new Geometry_obj; }

void *Geometry_obj::_hx_vtable = 0;

Dynamic Geometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Geometry_obj > _hx_result = new Geometry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Geometry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x156ffae5) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x156ffae5;
		}
	} else {
		return inClassId==(int)0x37f46043;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_core_base_Geometry__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::core::base::Geometry_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::core::base::Geometry_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::core::base::Geometry_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::core::base::Geometry_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::core::base::Geometry_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_core_base_Geometry__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::core::base::Geometry_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::core::base::Geometry_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::core::base::Geometry_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::core::base::Geometry_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::core::base::Geometry_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::core::base::Geometry_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::core::base::Geometry_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::core::base::Geometry_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::core::base::Geometry_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::core::base::Geometry_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::core::base::Geometry_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::core::base::Geometry_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::core::base::Geometry_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::core::base::Geometry_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::core::base::Geometry_obj::dispose,
};

void *Geometry_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_core_base_Geometry__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_core_base_Geometry__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

::String Geometry_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_b7e8f639fe007f30_31_get_assetType)
HXDLIN(  31)		return HX_("geometry",b2,02,a9,d2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_assetType,return )

 ::openfl::_Vector::ObjectVector Geometry_obj::get_subGeometries(){
            	HX_STACKFRAME(&_hx_pos_b7e8f639fe007f30_39_get_subGeometries)
HXDLIN(  39)		return this->_subGeometries;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,get_subGeometries,return )

void Geometry_obj::applyTransformation( ::openfl::geom::Matrix3D transform){
            	HX_STACKFRAME(&_hx_pos_b7e8f639fe007f30_52_applyTransformation)
HXLINE(  53)		int len = this->_subGeometries->get_length();
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			int _g1 = len;
HXDLIN(  54)			while((_g < _g1)){
HXLINE(  54)				_g = (_g + 1);
HXDLIN(  54)				int i = (_g - 1);
HXLINE(  55)				::away3d::core::base::ISubGeometry_obj::applyTransformation(this->_subGeometries->get(i),transform);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,applyTransformation,(void))

void Geometry_obj::addSubGeometry(::Dynamic subGeometry){
            	HX_GC_STACKFRAME(&_hx_pos_b7e8f639fe007f30_63_addSubGeometry)
HXLINE(  64)		this->_subGeometries->push(subGeometry);
HXLINE(  66)		::away3d::core::base::ISubGeometry_obj::set_parentGeometry(subGeometry,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  67)		if (this->hasEventListener(HX_("SubGeometryAdded",2e,cf,4e,f4))) {
HXLINE(  68)			this->dispatchEvent( ::away3d::events::GeometryEvent_obj::__alloc( HX_CTX ,HX_("SubGeometryAdded",2e,cf,4e,f4),subGeometry));
            		}
HXLINE(  70)		this->invalidateBounds(subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,addSubGeometry,(void))

void Geometry_obj::removeSubGeometry(::Dynamic subGeometry){
            	HX_GC_STACKFRAME(&_hx_pos_b7e8f639fe007f30_78_removeSubGeometry)
HXLINE(  79)		{
HXLINE(  79)			::Dynamic this1 = this->_subGeometries;
HXDLIN(  79)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  79)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),this->_subGeometries->indexOf(subGeometry,0),::hx::paccDynamic);
HXDLIN(  79)			{
HXLINE(  79)				int _g_current = 0;
HXDLIN(  79)				::cpp::VirtualArray _g_args = this2;
HXDLIN(  79)				while((_g_current < _g_args->get_length())){
HXLINE(  79)					_g_current = (_g_current + 1);
HXDLIN(  79)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN(  79)					( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),item);
HXDLIN(  79)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN(  79)			( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            		}
HXLINE(  80)		::away3d::core::base::ISubGeometry_obj::set_parentGeometry(subGeometry,null());
HXLINE(  81)		if (this->hasEventListener(HX_("SubGeometryRemoved",8e,11,91,1f))) {
HXLINE(  82)			this->dispatchEvent( ::away3d::events::GeometryEvent_obj::__alloc( HX_CTX ,HX_("SubGeometryRemoved",8e,11,91,1f),subGeometry));
            		}
HXLINE(  84)		this->invalidateBounds(subGeometry);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,removeSubGeometry,(void))

 ::away3d::core::base::Geometry Geometry_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_b7e8f639fe007f30_92_clone)
HXLINE(  93)		 ::away3d::core::base::Geometry clone =  ::away3d::core::base::Geometry_obj::__alloc( HX_CTX );
HXLINE(  94)		int len = this->_subGeometries->get_length();
HXLINE(  95)		{
HXLINE(  95)			int _g = 0;
HXDLIN(  95)			int _g1 = len;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  96)				clone->addSubGeometry(::away3d::core::base::ISubGeometry_obj::clone(this->_subGeometries->get(i)));
            			}
            		}
HXLINE(  97)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,clone,return )

void Geometry_obj::scale(Float scale){
            	HX_STACKFRAME(&_hx_pos_b7e8f639fe007f30_105_scale)
HXLINE( 106)		int numSubGeoms = this->_subGeometries->get_length();
HXLINE( 107)		{
HXLINE( 107)			int _g = 0;
HXDLIN( 107)			int _g1 = numSubGeoms;
HXDLIN( 107)			while((_g < _g1)){
HXLINE( 107)				_g = (_g + 1);
HXDLIN( 107)				int i = (_g - 1);
HXLINE( 108)				::away3d::core::base::ISubGeometry_obj::scale(this->_subGeometries->get(i),scale);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,scale,(void))

void Geometry_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b7e8f639fe007f30_115_dispose)
HXLINE( 116)		int numSubGeoms = this->_subGeometries->get_length();
HXLINE( 118)		{
HXLINE( 118)			int _g = 0;
HXDLIN( 118)			int _g1 = numSubGeoms;
HXDLIN( 118)			while((_g < _g1)){
HXLINE( 118)				_g = (_g + 1);
HXDLIN( 118)				int i = (_g - 1);
HXLINE( 119)				::Dynamic subGeom = this->_subGeometries->get(0);
HXLINE( 120)				this->removeSubGeometry(subGeom);
HXLINE( 121)				::away3d::core::base::ISubGeometry_obj::dispose(subGeom);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,dispose,(void))

void Geometry_obj::scaleUV(::hx::Null< Float >  __o_scaleU,::hx::Null< Float >  __o_scaleV){
            		Float scaleU = __o_scaleU.Default(1);
            		Float scaleV = __o_scaleV.Default(1);
            	HX_STACKFRAME(&_hx_pos_b7e8f639fe007f30_131_scaleUV)
HXLINE( 132)		int numSubGeoms = this->_subGeometries->get_length();
HXLINE( 133)		{
HXLINE( 133)			int _g = 0;
HXDLIN( 133)			int _g1 = numSubGeoms;
HXDLIN( 133)			while((_g < _g1)){
HXLINE( 133)				_g = (_g + 1);
HXDLIN( 133)				int i = (_g - 1);
HXLINE( 134)				::away3d::core::base::ISubGeometry_obj::scaleUV(this->_subGeometries->get(i),scaleU,scaleV);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Geometry_obj,scaleUV,(void))

void Geometry_obj::convertToSeparateBuffers(){
            	HX_GC_STACKFRAME(&_hx_pos_b7e8f639fe007f30_142_convertToSeparateBuffers)
HXLINE( 143)		::Dynamic subGeom;
HXLINE( 144)		int numSubGeoms = this->_subGeometries->get_length();
HXLINE( 145)		int length = null();
HXDLIN( 145)		bool fixed = null();
HXDLIN( 145)		::Array< ::Dynamic> array = null();
HXDLIN( 145)		 ::openfl::_Vector::ObjectVector _removableCompactSubGeometries =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			int _g1 = numSubGeoms;
HXDLIN( 147)			while((_g < _g1)){
HXLINE( 147)				_g = (_g + 1);
HXDLIN( 147)				int i = (_g - 1);
HXLINE( 148)				subGeom = this->_subGeometries->get(i);
HXLINE( 149)				if (::Std_obj::isOfType(subGeom,( ( ::Dynamic)(::hx::ClassOf< ::away3d::core::base::SubGeometry >()) ))) {
HXLINE( 150)					continue;
            				}
HXLINE( 152)				_removableCompactSubGeometries->push(subGeom);
HXLINE( 153)				this->addSubGeometry(::away3d::core::base::ISubGeometry_obj::cloneWithSeperateBuffers(subGeom));
            			}
            		}
HXLINE( 156)		{
HXLINE( 156)			 ::Dynamic s = _removableCompactSubGeometries->iterator();
HXDLIN( 156)			while(( (bool)(s->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 156)				::Dynamic s1 = s->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 157)				this->removeSubGeometry(s1);
HXLINE( 158)				::away3d::core::base::ISubGeometry_obj::dispose(s1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,convertToSeparateBuffers,(void))

void Geometry_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_b7e8f639fe007f30_163_validate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Geometry_obj,validate,(void))

void Geometry_obj::invalidateBounds(::Dynamic subGeom){
            	HX_GC_STACKFRAME(&_hx_pos_b7e8f639fe007f30_169_invalidateBounds)
HXDLIN( 169)		if (this->hasEventListener(HX_("BoundsInvalid",e2,b4,d6,23))) {
HXLINE( 170)			this->dispatchEvent( ::away3d::events::GeometryEvent_obj::__alloc( HX_CTX ,HX_("BoundsInvalid",e2,b4,d6,23),subGeom));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Geometry_obj,invalidateBounds,(void))


::hx::ObjectPtr< Geometry_obj > Geometry_obj::__new() {
	::hx::ObjectPtr< Geometry_obj > __this = new Geometry_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Geometry_obj > Geometry_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Geometry_obj *__this = (Geometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Geometry_obj), true, "away3d.core.base.Geometry"));
	*(void **)__this = Geometry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Geometry_obj::Geometry_obj()
{
}

void Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geometry);
	HX_MARK_MEMBER_NAME(_subGeometries,"_subGeometries");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_subGeometries,"_subGeometries");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Geometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleUV") ) { return ::hx::Val( scaleUV_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return ::hx::Val( validate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subGeometries") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subGeometries() ); }
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_subGeometries") ) { return ::hx::Val( _subGeometries ); }
		if (HX_FIELD_EQ(inName,"addSubGeometry") ) { return ::hx::Val( addSubGeometry_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidateBounds") ) { return ::hx::Val( invalidateBounds_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_subGeometries") ) { return ::hx::Val( get_subGeometries_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeSubGeometry") ) { return ::hx::Val( removeSubGeometry_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyTransformation") ) { return ::hx::Val( applyTransformation_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"convertToSeparateBuffers") ) { return ::hx::Val( convertToSeparateBuffers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Geometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_subGeometries") ) { _subGeometries=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("assetType",ca,40,af,b1));
	outFields->push(HX_("subGeometries",30,55,b4,3e));
	outFields->push(HX_("_subGeometries",71,45,06,7d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Geometry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Geometry_obj,_subGeometries),HX_("_subGeometries",71,45,06,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Geometry_obj_sStaticStorageInfo = 0;
#endif

static ::String Geometry_obj_sMemberFields[] = {
	HX_("_subGeometries",71,45,06,7d),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_subGeometries",87,60,24,45),
	HX_("applyTransformation",d7,3b,1e,68),
	HX_("addSubGeometry",b1,ef,8e,c8),
	HX_("removeSubGeometry",6e,82,08,ed),
	HX_("clone",5d,13,63,48),
	HX_("scale",8a,ce,ce,78),
	HX_("dispose",9f,80,4c,bb),
	HX_("scaleUV",6b,4f,07,65),
	HX_("convertToSeparateBuffers",a2,93,0d,2f),
	HX_("validate",96,d0,e3,04),
	HX_("invalidateBounds",50,e2,c4,70),
	::String(null()) };

::hx::Class Geometry_obj::__mClass;

void Geometry_obj::__register()
{
	Geometry_obj _hx_dummy;
	Geometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.Geometry",cf,8a,92,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Geometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Geometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Geometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Geometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
