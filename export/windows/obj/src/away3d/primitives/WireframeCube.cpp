#include <hxcpp.h>

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
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframeCube
#include <away3d/primitives/WireframeCube.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_28_new,"away3d.primitives.WireframeCube","new",0x9438c33c,"away3d.primitives.WireframeCube.new","away3d/primitives/WireframeCube.hx",28,0x82412554)
HX_LOCAL_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_41_get_width,"away3d.primitives.WireframeCube","get_width",0xaba49239,"away3d.primitives.WireframeCube.get_width","away3d/primitives/WireframeCube.hx",41,0x82412554)
HX_LOCAL_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_45_set_width,"away3d.primitives.WireframeCube","set_width",0x8ef57e45,"away3d.primitives.WireframeCube.set_width","away3d/primitives/WireframeCube.hx",45,0x82412554)
HX_LOCAL_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_56_get_height,"away3d.primitives.WireframeCube","get_height",0x3aaad854,"away3d.primitives.WireframeCube.get_height","away3d/primitives/WireframeCube.hx",56,0x82412554)
HX_LOCAL_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_60_set_height,"away3d.primitives.WireframeCube","set_height",0x3e2876c8,"away3d.primitives.WireframeCube.set_height","away3d/primitives/WireframeCube.hx",60,0x82412554)
HX_LOCAL_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_73_get_depth,"away3d.primitives.WireframeCube","get_depth",0xb86bcd36,"away3d.primitives.WireframeCube.get_depth","away3d/primitives/WireframeCube.hx",73,0x82412554)
HX_LOCAL_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_77_set_depth,"away3d.primitives.WireframeCube","set_depth",0x9bbcb942,"away3d.primitives.WireframeCube.set_depth","away3d/primitives/WireframeCube.hx",77,0x82412554)
HX_LOCAL_STACK_FRAME(_hx_pos_7344ab2eaebc2c92_87_buildGeometry,"away3d.primitives.WireframeCube","buildGeometry",0xa6e515dc,"away3d.primitives.WireframeCube.buildGeometry","away3d/primitives/WireframeCube.hx",87,0x82412554)
namespace away3d{
namespace primitives{

void WireframeCube_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness){
            		Float width = __o_width.Default(100);
            		Float height = __o_height.Default(100);
            		Float depth = __o_depth.Default(100);
            		int color = __o_color.Default(16777215);
            		Float thickness = __o_thickness.Default(1);
            	HX_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_28_new)
HXLINE(  29)		super::__construct(color,thickness);
HXLINE(  31)		this->_width = width;
HXLINE(  32)		this->_height = height;
HXLINE(  33)		this->_depth = depth;
            	}

Dynamic WireframeCube_obj::__CreateEmpty() { return new WireframeCube_obj; }

void *WireframeCube_obj::_hx_vtable = 0;

Dynamic WireframeCube_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WireframeCube_obj > _hx_result = new WireframeCube_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool WireframeCube_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x37f46043) {
			if (inClassId<=(int)0x2eb7455f) {
				return inClassId==(int)0x1e6a8fa2 || inClassId==(int)0x2eb7455f;
			} else {
				return inClassId==(int)0x37f46043;
			}
		} else {
			return inClassId==(int)0x39c56ab2;
		}
	}
}

Float WireframeCube_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_41_get_width)
HXDLIN(  41)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframeCube_obj,get_width,return )

Float WireframeCube_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_45_set_width)
HXLINE(  46)		this->_width = value;
HXLINE(  47)		this->invalidateGeometry();
HXLINE(  48)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WireframeCube_obj,set_width,return )

Float WireframeCube_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_56_get_height)
HXDLIN(  56)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframeCube_obj,get_height,return )

Float WireframeCube_obj::set_height(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_60_set_height)
HXLINE(  61)		if ((value <= 0)) {
HXLINE(  62)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("Value needs to be greater than 0",01,b6,d0,eb),null()));
            		}
HXLINE(  63)		this->_height = value;
HXLINE(  64)		this->invalidateGeometry();
HXLINE(  65)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WireframeCube_obj,set_height,return )

Float WireframeCube_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_73_get_depth)
HXDLIN(  73)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(WireframeCube_obj,get_depth,return )

Float WireframeCube_obj::set_depth(Float value){
            	HX_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_77_set_depth)
HXLINE(  78)		this->_depth = value;
HXLINE(  79)		this->invalidateGeometry();
HXLINE(  80)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WireframeCube_obj,set_depth,return )

void WireframeCube_obj::buildGeometry(){
            	HX_GC_STACKFRAME(&_hx_pos_7344ab2eaebc2c92_87_buildGeometry)
HXLINE(  88)		 ::openfl::geom::Vector3D v0 =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  89)		 ::openfl::geom::Vector3D v1 =  ::openfl::geom::Vector3D_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  90)		Float hw = (this->_width * ((Float).5));
HXLINE(  91)		Float hh = (this->_height * ((Float).5));
HXLINE(  92)		Float hd = (this->_depth * ((Float).5));
HXLINE(  94)		v0->x = -(hw);
HXLINE(  95)		v0->y = hh;
HXLINE(  96)		v0->z = -(hd);
HXLINE(  97)		v1->x = -(hw);
HXLINE(  98)		v1->y = -(hh);
HXLINE(  99)		v1->z = -(hd);
HXLINE( 101)		this->updateOrAddSegment(0,v0,v1);
HXLINE( 102)		v0->z = hd;
HXLINE( 103)		v1->z = hd;
HXLINE( 104)		this->updateOrAddSegment(1,v0,v1);
HXLINE( 105)		v0->x = hw;
HXLINE( 106)		v1->x = hw;
HXLINE( 107)		this->updateOrAddSegment(2,v0,v1);
HXLINE( 108)		v0->z = -(hd);
HXLINE( 109)		v1->z = -(hd);
HXLINE( 110)		this->updateOrAddSegment(3,v0,v1);
HXLINE( 112)		v0->x = -(hw);
HXLINE( 113)		v0->y = -(hh);
HXLINE( 114)		v0->z = -(hd);
HXLINE( 115)		v1->x = hw;
HXLINE( 116)		v1->y = -(hh);
HXLINE( 117)		v1->z = -(hd);
HXLINE( 118)		this->updateOrAddSegment(4,v0,v1);
HXLINE( 119)		v0->y = hh;
HXLINE( 120)		v1->y = hh;
HXLINE( 121)		this->updateOrAddSegment(5,v0,v1);
HXLINE( 122)		v0->z = hd;
HXLINE( 123)		v1->z = hd;
HXLINE( 124)		this->updateOrAddSegment(6,v0,v1);
HXLINE( 125)		v0->y = -(hh);
HXLINE( 126)		v1->y = -(hh);
HXLINE( 127)		this->updateOrAddSegment(7,v0,v1);
HXLINE( 129)		v0->x = -(hw);
HXLINE( 130)		v0->y = -(hh);
HXLINE( 131)		v0->z = -(hd);
HXLINE( 132)		v1->x = -(hw);
HXLINE( 133)		v1->y = -(hh);
HXLINE( 134)		v1->z = hd;
HXLINE( 135)		this->updateOrAddSegment(8,v0,v1);
HXLINE( 136)		v0->y = hh;
HXLINE( 137)		v1->y = hh;
HXLINE( 138)		this->updateOrAddSegment(9,v0,v1);
HXLINE( 139)		v0->x = hw;
HXLINE( 140)		v1->x = hw;
HXLINE( 141)		this->updateOrAddSegment(10,v0,v1);
HXLINE( 142)		v0->y = -(hh);
HXLINE( 143)		v1->y = -(hh);
HXLINE( 144)		this->updateOrAddSegment(11,v0,v1);
            	}



::hx::ObjectPtr< WireframeCube_obj > WireframeCube_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness) {
	::hx::ObjectPtr< WireframeCube_obj > __this = new WireframeCube_obj();
	__this->__construct(__o_width,__o_height,__o_depth,__o_color,__o_thickness);
	return __this;
}

::hx::ObjectPtr< WireframeCube_obj > WireframeCube_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness) {
	WireframeCube_obj *__this = (WireframeCube_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WireframeCube_obj), true, "away3d.primitives.WireframeCube"));
	*(void **)__this = WireframeCube_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height,__o_depth,__o_color,__o_thickness);
	return __this;
}

WireframeCube_obj::WireframeCube_obj()
{
}

::hx::Val WireframeCube_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return ::hx::Val( set_depth_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return ::hx::Val( buildGeometry_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WireframeCube_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depth(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WireframeCube_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_depth",44,38,11,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WireframeCube_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(WireframeCube_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsFloat,(int)offsetof(WireframeCube_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsFloat,(int)offsetof(WireframeCube_obj,_depth),HX_("_depth",44,38,11,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WireframeCube_obj_sStaticStorageInfo = 0;
#endif

static ::String WireframeCube_obj_sMemberFields[] = {
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_depth",44,38,11,d3),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("buildGeometry",00,78,79,cd),
	::String(null()) };

::hx::Class WireframeCube_obj::__mClass;

void WireframeCube_obj::__register()
{
	WireframeCube_obj _hx_dummy;
	WireframeCube_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.primitives.WireframeCube",4a,b5,57,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WireframeCube_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WireframeCube_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WireframeCube_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WireframeCube_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace primitives
