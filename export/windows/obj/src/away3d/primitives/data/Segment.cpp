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
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_7_new,"away3d.primitives.data.Segment","new",0x9c4ec554,"away3d.primitives.data.Segment.new","away3d/primitives/data/Segment.hx",7,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_49_updateSegment,"away3d.primitives.data.Segment","updateSegment",0x5cef629e,"away3d.primitives.data.Segment.updateSegment","away3d/primitives/data/Segment.hx",49,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_70_get_start,"away3d.primitives.data.Segment","get_start",0xb2d3f4ad,"away3d.primitives.data.Segment.get_start","away3d/primitives/data/Segment.hx",70,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_74_set_start,"away3d.primitives.data.Segment","set_start",0x9624e0b9,"away3d.primitives.data.Segment.set_start","away3d/primitives/data/Segment.hx",74,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_85_get_end,"away3d.primitives.data.Segment","get_end",0x8b0c4b66,"away3d.primitives.data.Segment.get_end","away3d/primitives/data/Segment.hx",85,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_89_set_end,"away3d.primitives.data.Segment","set_end",0x7e0ddc72,"away3d.primitives.data.Segment.set_end","away3d/primitives/data/Segment.hx",89,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_100_get_thickness,"away3d.primitives.data.Segment","get_thickness",0x067cf33f,"away3d.primitives.data.Segment.get_thickness","away3d/primitives/data/Segment.hx",100,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_104_set_thickness,"away3d.primitives.data.Segment","set_thickness",0x4b82d54b,"away3d.primitives.data.Segment.set_thickness","away3d/primitives/data/Segment.hx",104,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_115_get_startColor,"away3d.primitives.data.Segment","get_startColor",0x4d9ed976,"away3d.primitives.data.Segment.get_startColor","away3d/primitives/data/Segment.hx",115,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_119_set_startColor,"away3d.primitives.data.Segment","set_startColor",0x6dbec1ea,"away3d.primitives.data.Segment.set_startColor","away3d/primitives/data/Segment.hx",119,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_135_get_endColor,"away3d.primitives.data.Segment","get_endColor",0x5374841d,"away3d.primitives.data.Segment.get_endColor","away3d/primitives/data/Segment.hx",135,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_139_set_endColor,"away3d.primitives.data.Segment","set_endColor",0x686da791,"away3d.primitives.data.Segment.set_endColor","away3d/primitives/data/Segment.hx",139,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_151_dispose,"away3d.primitives.data.Segment","dispose",0x1f96ff93,"away3d.primitives.data.Segment.dispose","away3d/primitives/data/Segment.hx",151,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_158_get_index,"away3d.primitives.data.Segment","get_index",0xecdd1b5d,"away3d.primitives.data.Segment.get_index","away3d/primitives/data/Segment.hx",158,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_162_set_index,"away3d.primitives.data.Segment","set_index",0xd02e0769,"away3d.primitives.data.Segment.set_index","away3d/primitives/data/Segment.hx",162,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_169_get_subSetIndex,"away3d.primitives.data.Segment","get_subSetIndex",0x8b4a343b,"away3d.primitives.data.Segment.get_subSetIndex","away3d/primitives/data/Segment.hx",169,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_173_set_subSetIndex,"away3d.primitives.data.Segment","set_subSetIndex",0x8715b147,"away3d.primitives.data.Segment.set_subSetIndex","away3d/primitives/data/Segment.hx",173,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_179_set_segmentsBase,"away3d.primitives.data.Segment","set_segmentsBase",0xce540e1a,"away3d.primitives.data.Segment.set_segmentsBase","away3d/primitives/data/Segment.hx",179,0x19c9923d)
HX_LOCAL_STACK_FRAME(_hx_pos_1aae7e1f8f2a0db7_185_update,"away3d.primitives.data.Segment","update",0x0ca32195,"away3d.primitives.data.Segment.update","away3d/primitives/data/Segment.hx",185,0x19c9923d)
namespace away3d{
namespace primitives{
namespace data{

void Segment_obj::__construct( ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  __o_colorStart,::hx::Null< int >  __o_colorEnd,::hx::Null< Float >  __o_thickness){
            		int colorStart = __o_colorStart.Default(3355443);
            		int colorEnd = __o_colorEnd.Default(3355443);
            		Float thickness = __o_thickness.Default(1);
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_7_new)
HXLINE(  30)		this->_subSetIndex = -1;
HXLINE(  29)		this->_index = -1;
HXLINE(  37)		anchor = null();
HXLINE(  39)		this->_thickness = (thickness * ((Float).5));
HXLINE(  42)		this->_start = start;
HXLINE(  43)		this->_end = end;
HXLINE(  44)		this->set_startColor(colorStart);
HXLINE(  45)		this->set_endColor(colorEnd);
            	}

Dynamic Segment_obj::__CreateEmpty() { return new Segment_obj; }

void *Segment_obj::_hx_vtable = 0;

Dynamic Segment_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Segment_obj > _hx_result = new Segment_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Segment_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x34078196;
}

void Segment_obj::updateSegment( ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  __o_colorStart,::hx::Null< int >  __o_colorEnd,::hx::Null< Float >  __o_thickness){
            		int colorStart = __o_colorStart.Default(3355443);
            		int colorEnd = __o_colorEnd.Default(3355443);
            		Float thickness = __o_thickness.Default(1);
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_49_updateSegment)
HXLINE(  51)		anchor = null();
HXLINE(  52)		this->_start = start;
HXLINE(  53)		this->_end = end;
HXLINE(  55)		if ((this->_startColor != colorStart)) {
HXLINE(  56)			this->set_startColor(colorStart);
            		}
HXLINE(  58)		if ((this->_endColor != colorEnd)) {
HXLINE(  59)			this->set_endColor(colorEnd);
            		}
HXLINE(  61)		this->_thickness = (thickness * ((Float).5));
HXLINE(  62)		this->update();
            	}


HX_DEFINE_DYNAMIC_FUNC6(Segment_obj,updateSegment,(void))

 ::openfl::geom::Vector3D Segment_obj::get_start(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_70_get_start)
HXDLIN(  70)		return this->_start;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_start,return )

 ::openfl::geom::Vector3D Segment_obj::set_start( ::openfl::geom::Vector3D value){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_74_set_start)
HXLINE(  75)		this->_start = value;
HXLINE(  76)		this->update();
HXLINE(  77)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_start,return )

 ::openfl::geom::Vector3D Segment_obj::get_end(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_85_get_end)
HXDLIN(  85)		return this->_end;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_end,return )

 ::openfl::geom::Vector3D Segment_obj::set_end( ::openfl::geom::Vector3D value){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_89_set_end)
HXLINE(  90)		this->_end = value;
HXLINE(  91)		this->update();
HXLINE(  92)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_end,return )

Float Segment_obj::get_thickness(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_100_get_thickness)
HXDLIN( 100)		return (this->_thickness * ( (Float)(2) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_thickness,return )

Float Segment_obj::set_thickness(Float value){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_104_set_thickness)
HXLINE( 105)		this->_thickness = (value * ((Float).5));
HXLINE( 106)		this->update();
HXLINE( 107)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_thickness,return )

int Segment_obj::get_startColor(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_115_get_startColor)
HXDLIN( 115)		return this->_startColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_startColor,return )

int Segment_obj::set_startColor(int color){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_119_set_startColor)
HXLINE( 120)		this->_startR = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 121)		this->_startG = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 122)		this->_startB = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 124)		this->_startColor = color;
HXLINE( 126)		this->update();
HXLINE( 127)		return color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_startColor,return )

int Segment_obj::get_endColor(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_135_get_endColor)
HXDLIN( 135)		return this->_endColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_endColor,return )

int Segment_obj::set_endColor(int color){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_139_set_endColor)
HXLINE( 140)		this->_endR = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE( 141)		this->_endG = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE( 142)		this->_endB = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 144)		this->_endColor = color;
HXLINE( 146)		this->update();
HXLINE( 147)		return color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_endColor,return )

void Segment_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_151_dispose)
HXLINE( 152)		this->_start = null();
HXLINE( 153)		this->_end = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,dispose,(void))

int Segment_obj::get_index(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_158_get_index)
HXDLIN( 158)		return this->_index;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_index,return )

int Segment_obj::set_index(int ind){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_162_set_index)
HXLINE( 163)		this->_index = ind;
HXLINE( 164)		return ind;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_index,return )

int Segment_obj::get_subSetIndex(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_169_get_subSetIndex)
HXDLIN( 169)		return this->_subSetIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,get_subSetIndex,return )

int Segment_obj::set_subSetIndex(int ind){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_173_set_subSetIndex)
HXLINE( 174)		this->_subSetIndex = ind;
HXLINE( 175)		return ind;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_subSetIndex,return )

 ::away3d::entities::SegmentSet Segment_obj::set_segmentsBase( ::away3d::entities::SegmentSet segBase){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_179_set_segmentsBase)
HXLINE( 180)		this->_segmentsBase = segBase;
HXLINE( 181)		return segBase;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Segment_obj,set_segmentsBase,return )

void Segment_obj::update(){
            	HX_STACKFRAME(&_hx_pos_1aae7e1f8f2a0db7_185_update)
HXLINE( 186)		if (::hx::IsNull( this->_segmentsBase )) {
HXLINE( 187)			return;
            		}
HXLINE( 188)		this->_segmentsBase->updateSegment(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Segment_obj,update,(void))


::hx::ObjectPtr< Segment_obj > Segment_obj::__new( ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  __o_colorStart,::hx::Null< int >  __o_colorEnd,::hx::Null< Float >  __o_thickness) {
	::hx::ObjectPtr< Segment_obj > __this = new Segment_obj();
	__this->__construct(start,end,anchor,__o_colorStart,__o_colorEnd,__o_thickness);
	return __this;
}

::hx::ObjectPtr< Segment_obj > Segment_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  __o_colorStart,::hx::Null< int >  __o_colorEnd,::hx::Null< Float >  __o_thickness) {
	Segment_obj *__this = (Segment_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Segment_obj), true, "away3d.primitives.data.Segment"));
	*(void **)__this = Segment_obj::_hx_vtable;
	__this->__construct(start,end,anchor,__o_colorStart,__o_colorEnd,__o_thickness);
	return __this;
}

Segment_obj::Segment_obj()
{
}

void Segment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Segment);
	HX_MARK_MEMBER_NAME(_segmentsBase,"_segmentsBase");
	HX_MARK_MEMBER_NAME(_thickness,"_thickness");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_end,"_end");
	HX_MARK_MEMBER_NAME(_startR,"_startR");
	HX_MARK_MEMBER_NAME(_startG,"_startG");
	HX_MARK_MEMBER_NAME(_startB,"_startB");
	HX_MARK_MEMBER_NAME(_endR,"_endR");
	HX_MARK_MEMBER_NAME(_endG,"_endG");
	HX_MARK_MEMBER_NAME(_endB,"_endB");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_subSetIndex,"_subSetIndex");
	HX_MARK_MEMBER_NAME(_startColor,"_startColor");
	HX_MARK_MEMBER_NAME(_endColor,"_endColor");
	HX_MARK_END_CLASS();
}

void Segment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_segmentsBase,"_segmentsBase");
	HX_VISIT_MEMBER_NAME(_thickness,"_thickness");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_end,"_end");
	HX_VISIT_MEMBER_NAME(_startR,"_startR");
	HX_VISIT_MEMBER_NAME(_startG,"_startG");
	HX_VISIT_MEMBER_NAME(_startB,"_startB");
	HX_VISIT_MEMBER_NAME(_endR,"_endR");
	HX_VISIT_MEMBER_NAME(_endG,"_endG");
	HX_VISIT_MEMBER_NAME(_endB,"_endB");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_subSetIndex,"_subSetIndex");
	HX_VISIT_MEMBER_NAME(_startColor,"_startColor");
	HX_VISIT_MEMBER_NAME(_endColor,"_endColor");
}

::hx::Val Segment_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_end() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { return ::hx::Val( _end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_start() ); }
		if (HX_FIELD_EQ(inName,"index") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_index() ); }
		if (HX_FIELD_EQ(inName,"_endR") ) { return ::hx::Val( _endR ); }
		if (HX_FIELD_EQ(inName,"_endG") ) { return ::hx::Val( _endG ); }
		if (HX_FIELD_EQ(inName,"_endB") ) { return ::hx::Val( _endB ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { return ::hx::Val( _start ); }
		if (HX_FIELD_EQ(inName,"_index") ) { return ::hx::Val( _index ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startR") ) { return ::hx::Val( _startR ); }
		if (HX_FIELD_EQ(inName,"_startG") ) { return ::hx::Val( _startG ); }
		if (HX_FIELD_EQ(inName,"_startB") ) { return ::hx::Val( _startB ); }
		if (HX_FIELD_EQ(inName,"get_end") ) { return ::hx::Val( get_end_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_end") ) { return ::hx::Val( set_end_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_endColor() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_thickness() ); }
		if (HX_FIELD_EQ(inName,"_endColor") ) { return ::hx::Val( _endColor ); }
		if (HX_FIELD_EQ(inName,"get_start") ) { return ::hx::Val( get_start_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_start") ) { return ::hx::Val( set_start_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return ::hx::Val( get_index_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return ::hx::Val( set_index_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_startColor() ); }
		if (HX_FIELD_EQ(inName,"_thickness") ) { return ::hx::Val( _thickness ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_subSetIndex() ); }
		if (HX_FIELD_EQ(inName,"_startColor") ) { return ::hx::Val( _startColor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_subSetIndex") ) { return ::hx::Val( _subSetIndex ); }
		if (HX_FIELD_EQ(inName,"get_endColor") ) { return ::hx::Val( get_endColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_endColor") ) { return ::hx::Val( set_endColor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_segmentsBase") ) { return ::hx::Val( _segmentsBase ); }
		if (HX_FIELD_EQ(inName,"updateSegment") ) { return ::hx::Val( updateSegment_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_thickness") ) { return ::hx::Val( get_thickness_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return ::hx::Val( set_thickness_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_startColor") ) { return ::hx::Val( get_startColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_startColor") ) { return ::hx::Val( set_startColor_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_subSetIndex") ) { return ::hx::Val( get_subSetIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_subSetIndex") ) { return ::hx::Val( set_subSetIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_segmentsBase") ) { return ::hx::Val( set_segmentsBase_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Segment_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_end(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { _end=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_start(inValue.Cast<  ::openfl::geom::Vector3D >()) ); }
		if (HX_FIELD_EQ(inName,"index") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_index(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_endR") ) { _endR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_endG") ) { _endG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_endB") ) { _endB=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast<  ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startR") ) { _startR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startG") ) { _startG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startB") ) { _startB=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_endColor(inValue.Cast< int >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_thickness(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_endColor") ) { _endColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_startColor(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_thickness") ) { _thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subSetIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_subSetIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_startColor") ) { _startColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"segmentsBase") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_segmentsBase(inValue.Cast<  ::away3d::entities::SegmentSet >()) ); }
		if (HX_FIELD_EQ(inName,"_subSetIndex") ) { _subSetIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_segmentsBase") ) { _segmentsBase=inValue.Cast<  ::away3d::entities::SegmentSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Segment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("thickness",74,f1,66,5a));
	outFields->push(HX_("startColor",a1,49,73,66));
	outFields->push(HX_("endColor",88,03,5a,48));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("subSetIndex",b0,e9,57,2c));
	outFields->push(HX_("segmentsBase",91,31,03,c3));
	outFields->push(HX_("_segmentsBase",70,c4,71,a5));
	outFields->push(HX_("_thickness",35,6d,09,b6));
	outFields->push(HX_("_start",a3,bb,f2,7f));
	outFields->push(HX_("_end",dc,48,18,3f));
	outFields->push(HX_("_startR",4f,73,71,74));
	outFields->push(HX_("_startG",44,73,71,74));
	outFields->push(HX_("_startB",3f,73,71,74));
	outFields->push(HX_("_endR",f6,77,27,f6));
	outFields->push(HX_("_endG",eb,77,27,f6));
	outFields->push(HX_("_endB",e6,77,27,f6));
	outFields->push(HX_("_index",53,e2,fb,b9));
	outFields->push(HX_("_subSetIndex",b1,97,61,92));
	outFields->push(HX_("_startColor",c0,16,fd,38));
	outFields->push(HX_("_endColor",e7,fa,ef,8f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Segment_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::entities::SegmentSet */ ,(int)offsetof(Segment_obj,_segmentsBase),HX_("_segmentsBase",70,c4,71,a5)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,_thickness),HX_("_thickness",35,6d,09,b6)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Segment_obj,_start),HX_("_start",a3,bb,f2,7f)},
	{::hx::fsObject /*  ::openfl::geom::Vector3D */ ,(int)offsetof(Segment_obj,_end),HX_("_end",dc,48,18,3f)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,_startR),HX_("_startR",4f,73,71,74)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,_startG),HX_("_startG",44,73,71,74)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,_startB),HX_("_startB",3f,73,71,74)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,_endR),HX_("_endR",f6,77,27,f6)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,_endG),HX_("_endG",eb,77,27,f6)},
	{::hx::fsFloat,(int)offsetof(Segment_obj,_endB),HX_("_endB",e6,77,27,f6)},
	{::hx::fsInt,(int)offsetof(Segment_obj,_index),HX_("_index",53,e2,fb,b9)},
	{::hx::fsInt,(int)offsetof(Segment_obj,_subSetIndex),HX_("_subSetIndex",b1,97,61,92)},
	{::hx::fsInt,(int)offsetof(Segment_obj,_startColor),HX_("_startColor",c0,16,fd,38)},
	{::hx::fsInt,(int)offsetof(Segment_obj,_endColor),HX_("_endColor",e7,fa,ef,8f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Segment_obj_sStaticStorageInfo = 0;
#endif

static ::String Segment_obj_sMemberFields[] = {
	HX_("_segmentsBase",70,c4,71,a5),
	HX_("_thickness",35,6d,09,b6),
	HX_("_start",a3,bb,f2,7f),
	HX_("_end",dc,48,18,3f),
	HX_("_startR",4f,73,71,74),
	HX_("_startG",44,73,71,74),
	HX_("_startB",3f,73,71,74),
	HX_("_endR",f6,77,27,f6),
	HX_("_endG",eb,77,27,f6),
	HX_("_endB",e6,77,27,f6),
	HX_("_index",53,e2,fb,b9),
	HX_("_subSetIndex",b1,97,61,92),
	HX_("_startColor",c0,16,fd,38),
	HX_("_endColor",e7,fa,ef,8f),
	HX_("updateSegment",aa,34,3d,72),
	HX_("get_start",b9,d0,b4,c7),
	HX_("set_start",c5,bc,05,ab),
	HX_("get_end",72,cc,c1,26),
	HX_("set_end",7e,5d,c3,19),
	HX_("get_thickness",4b,c5,ca,1b),
	HX_("set_thickness",57,a7,d0,60),
	HX_("get_startColor",ea,d1,68,dc),
	HX_("set_startColor",5e,ba,88,fc),
	HX_("get_endColor",91,b7,73,fd),
	HX_("set_endColor",05,db,6c,12),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_index",69,f7,bd,01),
	HX_("set_index",75,e3,0e,e5),
	HX_("get_subSetIndex",47,a1,39,ed),
	HX_("set_subSetIndex",53,1e,05,e9),
	HX_("set_segmentsBase",8e,0b,e4,1d),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Segment_obj::__mClass;

void Segment_obj::__register()
{
	Segment_obj _hx_dummy;
	Segment_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.primitives.data.Segment",62,cb,8c,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Segment_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Segment_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Segment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Segment_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace primitives
} // end namespace data
