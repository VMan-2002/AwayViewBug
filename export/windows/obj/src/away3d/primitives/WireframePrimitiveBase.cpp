#include <hxcpp.h>

#ifndef INCLUDED_away3d_bounds_BoundingVolumeBase
#include <away3d/bounds/BoundingVolumeBase.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
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
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegRef
#include <away3d/entities/SegRef.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_LineSegment
#include <away3d/primitives/LineSegment.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_823607846e20770b_10_new,"away3d.primitives.WireframePrimitiveBase","new",0x44d15fd5,"away3d.primitives.WireframePrimitiveBase.new","away3d/primitives/WireframePrimitiveBase.hx",10,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_31_get_color,"away3d.primitives.WireframePrimitiveBase","get_color",0x4ce7e2ef,"away3d.primitives.WireframePrimitiveBase.get_color","away3d/primitives/WireframePrimitiveBase.hx",31,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_35_set_color,"away3d.primitives.WireframePrimitiveBase","set_color",0x3038cefb,"away3d.primitives.WireframePrimitiveBase.set_color","away3d/primitives/WireframePrimitiveBase.hx",35,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_45_get_thickness,"away3d.primitives.WireframePrimitiveBase","get_thickness",0xe2181900,"away3d.primitives.WireframePrimitiveBase.get_thickness","away3d/primitives/WireframePrimitiveBase.hx",45,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_49_set_thickness,"away3d.primitives.WireframePrimitiveBase","set_thickness",0x271dfb0c,"away3d.primitives.WireframePrimitiveBase.set_thickness","away3d/primitives/WireframePrimitiveBase.hx",49,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_59_removeAllSegments,"away3d.primitives.WireframePrimitiveBase","removeAllSegments",0xbe2c97f2,"away3d.primitives.WireframePrimitiveBase.removeAllSegments","away3d/primitives/WireframePrimitiveBase.hx",59,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_63_get_bounds,"away3d.primitives.WireframePrimitiveBase","get_bounds",0x9d956f69,"away3d.primitives.WireframePrimitiveBase.get_bounds","away3d/primitives/WireframePrimitiveBase.hx",63,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_71_buildGeometry,"away3d.primitives.WireframePrimitiveBase","buildGeometry",0x93c6cbb5,"away3d.primitives.WireframePrimitiveBase.buildGeometry","away3d/primitives/WireframePrimitiveBase.hx",71,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_75_invalidateGeometry,"away3d.primitives.WireframePrimitiveBase","invalidateGeometry",0x9ae16778,"away3d.primitives.WireframePrimitiveBase.invalidateGeometry","away3d/primitives/WireframePrimitiveBase.hx",75,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_81_updateGeometry,"away3d.primitives.WireframePrimitiveBase","updateGeometry",0xc52ee086,"away3d.primitives.WireframePrimitiveBase.updateGeometry","away3d/primitives/WireframePrimitiveBase.hx",81,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_87_updateOrAddSegment,"away3d.primitives.WireframePrimitiveBase","updateOrAddSegment",0xa241a269,"away3d.primitives.WireframePrimitiveBase.updateOrAddSegment","away3d/primitives/WireframePrimitiveBase.hx",87,0x1d1ecf9b)
HX_LOCAL_STACK_FRAME(_hx_pos_823607846e20770b_107_updateMouseChildren,"away3d.primitives.WireframePrimitiveBase","updateMouseChildren",0x6d2c9a30,"away3d.primitives.WireframePrimitiveBase.updateMouseChildren","away3d/primitives/WireframePrimitiveBase.hx",107,0x1d1ecf9b)
namespace away3d{
namespace primitives{

void WireframePrimitiveBase_obj::__construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness){
            		int color = __o_color.Default(16777215);
            		Float thickness = __o_thickness.Default(1);
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_10_new)
HXLINE(  15)		this->_geomDirty = true;
HXLINE(  21)		if ((thickness <= 0)) {
HXLINE(  22)			thickness = ( (Float)(1) );
            		}
HXLINE(  23)		this->_color = color;
HXLINE(  24)		this->_thickness = thickness;
HXLINE(  25)		this->set_mouseEnabled(this->set_mouseChildren(false));
HXLINE(  26)		super::__construct();
            	}

Dynamic WireframePrimitiveBase_obj::__CreateEmpty() { return new WireframePrimitiveBase_obj; }

void *WireframePrimitiveBase_obj::_hx_vtable = 0;

Dynamic WireframePrimitiveBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WireframePrimitiveBase_obj > _hx_result = new WireframePrimitiveBase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WireframePrimitiveBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13fff02b) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x03f3a2fb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x03f3a2fb;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x12b32fa7 || inClassId==(int)0x13fff02b;
		}
	} else {
		if (inClassId<=(int)0x2eb7455f) {
			return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x2eb7455f;
		} else {
			return inClassId==(int)0x37f46043;
		}
	}
}

int WireframePrimitiveBase_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_31_get_color)
HXDLIN(  31)		return this->_color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,get_color,return )

int WireframePrimitiveBase_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_35_set_color)
HXLINE(  36)		this->_color = value;
HXLINE(  37)		{
HXLINE(  37)			 ::Dynamic segRef = this->_segments->iterator();
HXDLIN(  37)			while(( (bool)(segRef->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  37)				 ::away3d::entities::SegRef segRef1 = ( ( ::away3d::entities::SegRef)(segRef->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  38)				 ::away3d::primitives::data::Segment segRef2 = segRef1->segment;
HXDLIN(  38)				segRef2->set_startColor(segRef1->segment->set_endColor(value));
            			}
            		}
HXLINE(  40)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WireframePrimitiveBase_obj,set_color,return )

Float WireframePrimitiveBase_obj::get_thickness(){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_45_get_thickness)
HXDLIN(  45)		return this->_thickness;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,get_thickness,return )

Float WireframePrimitiveBase_obj::set_thickness(Float value){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_49_set_thickness)
HXLINE(  50)		this->_thickness = value;
HXLINE(  51)		{
HXLINE(  51)			 ::Dynamic segRef = this->_segments->iterator();
HXDLIN(  51)			while(( (bool)(segRef->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  51)				 ::away3d::entities::SegRef segRef1 = ( ( ::away3d::entities::SegRef)(segRef->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  52)				 ::away3d::primitives::data::Segment segRef2 = segRef1->segment;
HXDLIN(  52)				segRef2->set_thickness(segRef1->segment->set_thickness(value));
            			}
            		}
HXLINE(  54)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WireframePrimitiveBase_obj,set_thickness,return )

void WireframePrimitiveBase_obj::removeAllSegments(){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_59_removeAllSegments)
HXDLIN(  59)		this->super::removeAllSegments();
            	}


 ::away3d::bounds::BoundingVolumeBase WireframePrimitiveBase_obj::get_bounds(){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_63_get_bounds)
HXLINE(  64)		if (this->_geomDirty) {
HXLINE(  65)			this->updateGeometry();
            		}
HXLINE(  66)		return this->super::get_bounds();
            	}


void WireframePrimitiveBase_obj::buildGeometry(){
            	HX_GC_STACKFRAME(&_hx_pos_823607846e20770b_71_buildGeometry)
HXDLIN(  71)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,buildGeometry,(void))

void WireframePrimitiveBase_obj::invalidateGeometry(){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_75_invalidateGeometry)
HXLINE(  76)		this->_geomDirty = true;
HXLINE(  77)		this->invalidateBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,invalidateGeometry,(void))

void WireframePrimitiveBase_obj::updateGeometry(){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_81_updateGeometry)
HXLINE(  82)		this->buildGeometry();
HXLINE(  83)		this->_geomDirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframePrimitiveBase_obj,updateGeometry,(void))

void WireframePrimitiveBase_obj::updateOrAddSegment(int index, ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1){
            	HX_GC_STACKFRAME(&_hx_pos_823607846e20770b_87_updateOrAddSegment)
HXLINE(  89)		 ::openfl::geom::Vector3D s;
HXDLIN(  89)		 ::openfl::geom::Vector3D e;
HXLINE(  88)		 ::away3d::primitives::data::Segment segment = this->getSegment(index);
HXLINE(  91)		if (::hx::IsNotNull( segment )) {
HXLINE(  92)			s = segment->get_start();
HXLINE(  93)			e = segment->get_end();
HXLINE(  94)			s->x = v0->x;
HXLINE(  95)			s->y = v0->y;
HXLINE(  96)			s->z = v0->z;
HXLINE(  97)			e->x = v1->x;
HXLINE(  98)			e->y = v1->y;
HXLINE(  99)			e->z = v1->z;
HXLINE( 100)			segment->updateSegment(s,e,null(),this->_color,this->_color,this->_thickness);
            		}
            		else {
HXLINE( 102)			 ::openfl::geom::Vector3D _hx_tmp = v0->clone();
HXDLIN( 102)			 ::openfl::geom::Vector3D _hx_tmp1 = v1->clone();
HXDLIN( 102)			this->addSegment( ::away3d::primitives::LineSegment_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->_color,this->_color,this->_thickness));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(WireframePrimitiveBase_obj,updateOrAddSegment,(void))

void WireframePrimitiveBase_obj::updateMouseChildren(){
            	HX_STACKFRAME(&_hx_pos_823607846e20770b_107_updateMouseChildren)
HXDLIN( 107)		this->_ancestorsAllowMouseEnabled = false;
            	}



::hx::ObjectPtr< WireframePrimitiveBase_obj > WireframePrimitiveBase_obj::__new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness) {
	::hx::ObjectPtr< WireframePrimitiveBase_obj > __this = new WireframePrimitiveBase_obj();
	__this->__construct(__o_color,__o_thickness);
	return __this;
}

::hx::ObjectPtr< WireframePrimitiveBase_obj > WireframePrimitiveBase_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness) {
	WireframePrimitiveBase_obj *__this = (WireframePrimitiveBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WireframePrimitiveBase_obj), true, "away3d.primitives.WireframePrimitiveBase"));
	*(void **)__this = WireframePrimitiveBase_obj::_hx_vtable;
	__this->__construct(__o_color,__o_thickness);
	return __this;
}

WireframePrimitiveBase_obj::WireframePrimitiveBase_obj()
{
}

::hx::Val WireframePrimitiveBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return ::hx::Val( _color ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_thickness() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_geomDirty") ) { return ::hx::Val( _geomDirty ); }
		if (HX_FIELD_EQ(inName,"_thickness") ) { return ::hx::Val( _thickness ); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return ::hx::Val( get_bounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_thickness") ) { return ::hx::Val( get_thickness_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return ::hx::Val( set_thickness_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return ::hx::Val( buildGeometry_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGeometry") ) { return ::hx::Val( updateGeometry_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAllSegments") ) { return ::hx::Val( removeAllSegments_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidateGeometry") ) { return ::hx::Val( invalidateGeometry_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateOrAddSegment") ) { return ::hx::Val( updateOrAddSegment_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateMouseChildren") ) { return ::hx::Val( updateMouseChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WireframePrimitiveBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_thickness(inValue.Cast< Float >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_geomDirty") ) { _geomDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_thickness") ) { _thickness=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WireframePrimitiveBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("thickness",74,f1,66,5a));
	outFields->push(HX_("_geomDirty",77,53,5d,d5));
	outFields->push(HX_("_color",a4,b8,43,46));
	outFields->push(HX_("_thickness",35,6d,09,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WireframePrimitiveBase_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(WireframePrimitiveBase_obj,_geomDirty),HX_("_geomDirty",77,53,5d,d5)},
	{::hx::fsInt,(int)offsetof(WireframePrimitiveBase_obj,_color),HX_("_color",a4,b8,43,46)},
	{::hx::fsFloat,(int)offsetof(WireframePrimitiveBase_obj,_thickness),HX_("_thickness",35,6d,09,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WireframePrimitiveBase_obj_sStaticStorageInfo = 0;
#endif

static ::String WireframePrimitiveBase_obj_sMemberFields[] = {
	HX_("_geomDirty",77,53,5d,d5),
	HX_("_color",a4,b8,43,46),
	HX_("_thickness",35,6d,09,b6),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_thickness",4b,c5,ca,1b),
	HX_("set_thickness",57,a7,d0,60),
	HX_("removeAllSegments",bd,c5,b2,d3),
	HX_("get_bounds",3e,f6,a4,56),
	HX_("buildGeometry",00,78,79,cd),
	HX_("invalidateGeometry",4d,4b,c3,5a),
	HX_("updateGeometry",db,f5,d2,07),
	HX_("updateOrAddSegment",3e,86,23,62),
	HX_("updateMouseChildren",bb,10,f2,92),
	::String(null()) };

::hx::Class WireframePrimitiveBase_obj::__mClass;

void WireframePrimitiveBase_obj::__register()
{
	WireframePrimitiveBase_obj _hx_dummy;
	WireframePrimitiveBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.primitives.WireframePrimitiveBase",63,d1,ad,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WireframePrimitiveBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WireframePrimitiveBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WireframePrimitiveBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WireframePrimitiveBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace primitives
