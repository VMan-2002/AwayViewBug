#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_ShapeCache
#include <openfl/text/_internal/ShapeCache.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayout
#include <openfl/text/_internal/TextLayout.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet
#include <openfl/text/_internal/_TextEngine/DefaultFontSet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81873a2f4b2980c0_114_new,"openfl.text._internal.TextEngine","new",0xa9ba7af6,"openfl.text._internal.TextEngine.new","openfl/text/_internal/TextEngine.hx",114,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_180_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",180,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_174_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",174,0xb85e1839)
static const ::String _hx_array_data_7e808804_3[] = {
	HX_("",00,00,00,00),
};
static const bool _hx_array_data_7e808804_4[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_269_getBounds,"openfl.text._internal.TextEngine","getBounds",0x3ac9cec1,"openfl.text._internal.TextEngine.getBounds","openfl/text/_internal/TextEngine.hx",269,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_557_getLine,"openfl.text._internal.TextEngine","getLine",0xeb547540,"openfl.text._internal.TextEngine.getLine","openfl/text/_internal/TextEngine.hx",557,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_574_getLineBreaks,"openfl.text._internal.TextEngine","getLineBreaks",0x21405c34,"openfl.text._internal.TextEngine.getLineBreaks","openfl/text/_internal/TextEngine.hx",574,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_594_getLineBreakIndex,"openfl.text._internal.TextEngine","getLineBreakIndex",0xa9a1db33,"openfl.text._internal.TextEngine.getLineBreakIndex","openfl/text/_internal/TextEngine.hx",594,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_604_getLineMeasurements,"openfl.text._internal.TextEngine","getLineMeasurements",0x50395657,"openfl.text._internal.TextEngine.getLineMeasurements","openfl/text/_internal/TextEngine.hx",604,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_763_getLayoutGroups,"openfl.text._internal.TextEngine","getLayoutGroups",0x36de2bea,"openfl.text._internal.TextEngine.getLayoutGroups","openfl/text/_internal/TextEngine.hx",763,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1696_restrictText,"openfl.text._internal.TextEngine","restrictText",0x4d5464b3,"openfl.text._internal.TextEngine.restrictText","openfl/text/_internal/TextEngine.hx",1696,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1717_setTextAlignment,"openfl.text._internal.TextEngine","setTextAlignment",0x7bf8ff1e,"openfl.text._internal.TextEngine.setTextAlignment","openfl/text/_internal/TextEngine.hx",1717,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1824_trimText,"openfl.text._internal.TextEngine","trimText",0x8f1ce459,"openfl.text._internal.TextEngine.trimText","openfl/text/_internal/TextEngine.hx",1824,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1839_update,"openfl.text._internal.TextEngine","update",0x02cb1d33,"openfl.text._internal.TextEngine.update","openfl/text/_internal/TextEngine.hx",1839,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1872_get_bottomScrollV,"openfl.text._internal.TextEngine","get_bottomScrollV",0x0563c86b,"openfl.text._internal.TextEngine.get_bottomScrollV","openfl/text/_internal/TextEngine.hx",1872,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1919_get_maxScrollV,"openfl.text._internal.TextEngine","get_maxScrollV",0x5a4206d8,"openfl.text._internal.TextEngine.get_maxScrollV","openfl/text/_internal/TextEngine.hx",1919,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1960_set_restrict,"openfl.text._internal.TextEngine","set_restrict",0xd4c7f563,"openfl.text._internal.TextEngine.set_restrict","openfl/text/_internal/TextEngine.hx",1960,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1981_get_scrollV,"openfl.text._internal.TextEngine","get_scrollV",0x1f66c456,"openfl.text._internal.TextEngine.get_scrollV","openfl/text/_internal/TextEngine.hx",1981,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1993_set_scrollV,"openfl.text._internal.TextEngine","set_scrollV",0x29d3cb62,"openfl.text._internal.TextEngine.set_scrollV","openfl/text/_internal/TextEngine.hx",1993,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_2002_set_text,"openfl.text._internal.TextEngine","set_text",0xa4cb1754,"openfl.text._internal.TextEngine.set_text","openfl/text/_internal/TextEngine.hx",2002,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_207_findFont,"openfl.text._internal.TextEngine","findFont",0xc00da052,"openfl.text._internal.TextEngine.findFont","openfl/text/_internal/TextEngine.hx",207,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_244_findFontVariant,"openfl.text._internal.TextEngine","findFontVariant",0x8f425653,"openfl.text._internal.TextEngine.findFontVariant","openfl/text/_internal/TextEngine.hx",244,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_301_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",301,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_310_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",310,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_430_getFormatHeight,"openfl.text._internal.TextEngine","getFormatHeight",0x3ed257ca,"openfl.text._internal.TextEngine.getFormatHeight","openfl/text/_internal/TextEngine.hx",430,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_470_getFont,"openfl.text._internal.TextEngine","getFont",0xe761bb1b,"openfl.text._internal.TextEngine.getFont","openfl/text/_internal/TextEngine.hx",470,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_528_getFontInstance,"openfl.text._internal.TextEngine","getFontInstance",0x7b1da9d0,"openfl.text._internal.TextEngine.getFontInstance","openfl/text/_internal/TextEngine.hx",528,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_39_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",39,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_41_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",41,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_42_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",42,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_43_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",43,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_44_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",44,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_45_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",45,0xb85e1839)
namespace openfl{
namespace text{
namespace _internal{

void TextEngine_obj::__construct( ::openfl::text::TextField textField){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_114_new)
HXLINE( 116)		this->_hx___shapeCache =  ::openfl::text::_internal::ShapeCache_obj::__alloc( HX_CTX );
HXLINE( 118)		this->textField = textField;
HXLINE( 120)		this->width = ( (Float)(100) );
HXLINE( 121)		this->height = ( (Float)(100) );
HXLINE( 122)		this->set_text(HX_("",00,00,00,00));
HXLINE( 124)		this->bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 125)		this->textBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 127)		this->type = 0;
HXLINE( 128)		this->autoSize = 2;
HXLINE( 129)		this->embedFonts = false;
HXLINE( 130)		this->selectable = true;
HXLINE( 131)		this->borderColor = 0;
HXLINE( 132)		this->border = false;
HXLINE( 133)		this->backgroundColor = 16777215;
HXLINE( 134)		this->background = false;
HXLINE( 135)		this->gridFitType = 1;
HXLINE( 136)		this->maxChars = 0;
HXLINE( 137)		this->multiline = false;
HXLINE( 138)		this->numLines = 1;
HXLINE( 139)		this->sharpness = ( (Float)(0) );
HXLINE( 140)		this->scrollH = 0;
HXLINE( 141)		this->set_scrollV(1);
HXLINE( 142)		this->wordWrap = false;
HXLINE( 144)		int length = null();
HXDLIN( 144)		bool fixed = null();
HXDLIN( 144)		::Array< Float > array = null();
HXDLIN( 144)		this->lineAscents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 145)		int length1 = null();
HXDLIN( 145)		bool fixed1 = null();
HXDLIN( 145)		::Array< int > array1 = null();
HXDLIN( 145)		this->lineBreaks =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE( 146)		int length2 = null();
HXDLIN( 146)		bool fixed2 = null();
HXDLIN( 146)		::Array< Float > array2 = null();
HXDLIN( 146)		this->lineDescents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length2,fixed2,array2,true);
HXLINE( 147)		int length3 = null();
HXDLIN( 147)		bool fixed3 = null();
HXDLIN( 147)		::Array< Float > array3 = null();
HXDLIN( 147)		this->lineLeadings =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE( 148)		int length4 = null();
HXDLIN( 148)		bool fixed4 = null();
HXDLIN( 148)		::Array< Float > array4 = null();
HXDLIN( 148)		this->lineHeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length4,fixed4,array4,true);
HXLINE( 149)		int length5 = null();
HXDLIN( 149)		bool fixed5 = null();
HXDLIN( 149)		::Array< Float > array5 = null();
HXDLIN( 149)		this->lineWidths =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length5,fixed5,array5,true);
HXLINE( 150)		int length6 = null();
HXDLIN( 150)		bool fixed6 = null();
HXDLIN( 150)		::Array< ::Dynamic> array6 = null();
HXDLIN( 150)		this->layoutGroups =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length6,fixed6,array6,true);
HXLINE( 151)		int length7 = null();
HXDLIN( 151)		bool fixed7 = null();
HXDLIN( 151)		::Array< ::Dynamic> array7 = null();
HXDLIN( 151)		this->textFormatRanges =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length7,fixed7,array7,true);
            	}

Dynamic TextEngine_obj::__CreateEmpty() { return new TextEngine_obj; }

void *TextEngine_obj::_hx_vtable = 0;

Dynamic TextEngine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextEngine_obj > _hx_result = new TextEngine_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextEngine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dd5980a;
}

 ::EReg TextEngine_obj::createRestrictRegexp(::String restrict){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,declined,::Array< bool >,accepting) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_180_createRestrictRegexp)
HXLINE( 181)			if (accepting->__get(0)) {
HXLINE( 183)				accepting[0] = !(accepting->__get(0));
HXLINE( 184)				return ereg->matched(1);
            			}
HXLINE( 186)			::Array< ::String > declined1 = declined;
HXDLIN( 186)			int accepted = 0;
HXDLIN( 186)			::String declined2 = declined1->__get(accepted);
HXDLIN( 186)			declined1[accepted] = (declined2 + ereg->matched(1));
HXLINE( 187)			accepting[0] = !(accepting->__get(0));
HXLINE( 188)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_174_createRestrictRegexp)
HXLINE( 175)		 ::EReg declinedRange =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\^([^\\^]+)",d0,bc,3c,14),HX_("gu",2e,5a,00,00));
HXLINE( 176)		::Array< ::String > declined = ::Array_obj< ::String >::fromData( _hx_array_data_7e808804_3,1);
HXLINE( 178)		::Array< bool > accepting = ::Array_obj< bool >::fromData( _hx_array_data_7e808804_4,1);
HXLINE( 179)		::String accepted = declinedRange->map(restrict, ::Dynamic(new _hx_Closure_0(declined,accepting)));
HXLINE( 191)		::Array< ::String > testRegexpParts = ::Array_obj< ::String >::__new(0);
HXLINE( 193)		if ((accepted.length > 0)) {
HXLINE( 195)			testRegexpParts->push(((HX_("[^",a3,4f,00,00) + accepted) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 198)		if ((declined->__get(0).length > 0)) {
HXLINE( 200)			testRegexpParts->push(((HX_("[",5b,00,00,00) + declined->__get(0)) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 203)		return  ::EReg_obj::__alloc( HX_CTX ,((HX_("(",28,00,00,00) + testRegexpParts->join(HX_("|",7c,00,00,00))) + HX_(")",29,00,00,00)),HX_("g",67,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,createRestrictRegexp,return )

void TextEngine_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_269_getBounds)
HXLINE( 270)		int padding;
HXDLIN( 270)		if (this->border) {
HXLINE( 270)			padding = 1;
            		}
            		else {
HXLINE( 270)			padding = 0;
            		}
HXLINE( 272)		this->bounds->width = (this->width + padding);
HXLINE( 273)		this->bounds->height = (this->height + padding);
HXLINE( 275)		Float x = this->width;
HXDLIN( 275)		Float y = this->height;
HXLINE( 277)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 278)		{
HXLINE( 278)			int _g = 0;
HXDLIN( 278)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 278)			while((_g < _g1)){
HXLINE( 278)				_g = (_g + 1);
HXDLIN( 278)				int i = (_g - 1);
HXLINE( 280)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 281)				bool _hx_tmp;
HXDLIN( 281)				bool _hx_tmp1;
HXDLIN( 281)				if ((i == lastIndex)) {
HXLINE( 281)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 281)					_hx_tmp1 = false;
            				}
HXDLIN( 281)				if (_hx_tmp1) {
HXLINE( 281)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 281)					_hx_tmp = false;
            				}
HXDLIN( 281)				if (_hx_tmp) {
HXLINE( 284)					continue;
            				}
HXLINE( 286)				if ((group->offsetX < x)) {
HXLINE( 286)					x = group->offsetX;
            				}
HXLINE( 287)				if ((group->offsetY < y)) {
HXLINE( 287)					y = group->offsetY;
            				}
            			}
            		}
HXLINE( 290)		if ((x >= this->width)) {
HXLINE( 290)			x = ( (Float)(2) );
            		}
HXLINE( 291)		if ((y >= this->height)) {
HXLINE( 291)			y = ( (Float)(2) );
            		}
HXLINE( 297)		this->textBounds->setTo(::Math_obj::max((x - ( (Float)(2) )),( (Float)(0) )),::Math_obj::max((y - ( (Float)(2) )),( (Float)(0) )),::Math_obj::min((this->textWidth + 4),(this->bounds->width + 4)),::Math_obj::min((this->textHeight + 4),(this->bounds->height + 4)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine(int index){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_557_getLine)
HXLINE( 558)		bool _hx_tmp;
HXDLIN( 558)		if ((index >= 0)) {
HXLINE( 558)			_hx_tmp = (index > (this->lineBreaks->get_length() + 1));
            		}
            		else {
HXLINE( 558)			_hx_tmp = true;
            		}
HXDLIN( 558)		if (_hx_tmp) {
HXLINE( 560)			return null();
            		}
HXLINE( 563)		if ((this->lineBreaks->get_length() == 0)) {
HXLINE( 565)			return this->text;
            		}
            		else {
HXLINE( 569)			::String _hx_tmp = this->text;
HXDLIN( 569)			int _hx_tmp1;
HXDLIN( 569)			if ((index > 0)) {
HXLINE( 569)				_hx_tmp1 = this->lineBreaks->get((index - 1));
            			}
            			else {
HXLINE( 569)				_hx_tmp1 = 0;
            			}
HXDLIN( 569)			return _hx_tmp.substring(_hx_tmp1,this->lineBreaks->get(index));
            		}
HXLINE( 563)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

void TextEngine_obj::getLineBreaks(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_574_getLineBreaks)
HXLINE( 575)		this->lineBreaks->set_length(0);
HXLINE( 577)		int index = -1;
HXLINE( 579)		int cr = -1;
HXDLIN( 579)		int lf = -1;
HXLINE( 580)		while((index < this->text.length)){
HXLINE( 582)			lf = this->text.indexOf(HX_("\n",0a,00,00,00),(index + 1));
HXLINE( 583)			cr = this->text.indexOf(HX_("\r",0d,00,00,00),(index + 1));
HXLINE( 585)			if ((cr == -1)) {
HXLINE( 585)				index = lf;
            			}
            			else {
HXLINE( 585)				if ((lf == -1)) {
HXLINE( 585)					index = cr;
            				}
            				else {
HXLINE( 585)					if ((cr < lf)) {
HXLINE( 585)						index = cr;
            					}
            					else {
HXLINE( 585)						index = lf;
            					}
            				}
            			}
HXLINE( 587)			if ((index > -1)) {
HXLINE( 587)				this->lineBreaks->push(index);
            			}
            			else {
HXLINE( 589)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineBreaks,(void))

int TextEngine_obj::getLineBreakIndex(::hx::Null< int >  __o_startIndex){
            		int startIndex = __o_startIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_594_getLineBreakIndex)
HXLINE( 595)		{
HXLINE( 595)			 ::Dynamic lineBreak = this->lineBreaks->iterator();
HXDLIN( 595)			while(( (bool)(lineBreak->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 595)				int lineBreak1 = ( (int)(lineBreak->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 597)				if ((lineBreak1 >= startIndex)) {
HXLINE( 597)					return lineBreak1;
            				}
            			}
            		}
HXLINE( 600)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

void TextEngine_obj::getLineMeasurements(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_604_getLineMeasurements)
HXLINE( 605)		this->lineAscents->set_length(0);
HXLINE( 606)		this->lineDescents->set_length(0);
HXLINE( 607)		this->lineLeadings->set_length(0);
HXLINE( 608)		this->lineHeights->set_length(0);
HXLINE( 609)		this->lineWidths->set_length(0);
HXLINE( 611)		Float currentLineAscent = ((Float)0.0);
HXLINE( 612)		Float currentLineDescent = ((Float)0.0);
HXLINE( 613)		 ::Dynamic currentLineLeading = null();
HXLINE( 614)		Float currentLineHeight = ((Float)0.0);
HXLINE( 615)		Float currentLineWidth = ((Float)0.0);
HXLINE( 616)		Float currentTextHeight = ((Float)0.0);
HXLINE( 618)		this->textWidth = ( (Float)(0) );
HXLINE( 619)		this->textHeight = ( (Float)(0) );
HXLINE( 620)		this->numLines = 1;
HXLINE( 621)		this->maxScrollH = 0;
HXLINE( 623)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 624)			while((_g < _g1)){
HXLINE( 624)				_g = (_g + 1);
HXDLIN( 624)				int i = (_g - 1);
HXLINE( 626)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 628)				bool _hx_tmp;
HXDLIN( 628)				bool _hx_tmp1;
HXDLIN( 628)				if ((i == lastIndex)) {
HXLINE( 628)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 628)					_hx_tmp1 = false;
            				}
HXDLIN( 628)				if (_hx_tmp1) {
HXLINE( 628)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 628)					_hx_tmp = false;
            				}
HXDLIN( 628)				if (_hx_tmp) {
HXLINE( 631)					continue;
            				}
HXLINE( 634)				while((group->lineIndex > (this->numLines - 1))){
HXLINE( 636)					this->lineAscents->push(currentLineAscent);
HXLINE( 637)					this->lineDescents->push(currentLineDescent);
HXLINE( 638)					{
HXLINE( 638)						Float _hx_tmp;
HXDLIN( 638)						if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 638)							_hx_tmp = ( (Float)(currentLineLeading) );
            						}
            						else {
HXLINE( 638)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 638)						this->lineLeadings->push(_hx_tmp);
            					}
HXLINE( 639)					this->lineHeights->push(currentLineHeight);
HXLINE( 640)					this->lineWidths->push(currentLineWidth);
HXLINE( 642)					currentLineAscent = ( (Float)(0) );
HXLINE( 643)					currentLineDescent = ( (Float)(0) );
HXLINE( 644)					currentLineLeading = null();
HXLINE( 645)					currentLineHeight = ( (Float)(0) );
HXLINE( 646)					currentLineWidth = ( (Float)(0) );
HXLINE( 648)					this->numLines++;
            				}
HXLINE( 651)				currentLineAscent = ::Math_obj::max(currentLineAscent,group->ascent);
HXLINE( 652)				currentLineDescent = ::Math_obj::max(currentLineDescent,group->descent);
HXLINE( 654)				if (::hx::IsNull( currentLineLeading )) {
HXLINE( 656)					currentLineLeading = group->leading;
            				}
            				else {
HXLINE( 660)					currentLineLeading = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(currentLineLeading) ),( (Float)(group->leading) )));
            				}
HXLINE( 663)				currentLineHeight = ::Math_obj::max(currentLineHeight,group->height);
HXLINE( 664)				currentLineWidth = ((group->offsetX - ( (Float)(2) )) + group->width);
HXLINE( 666)				if ((currentLineWidth > this->textWidth)) {
HXLINE( 668)					this->textWidth = currentLineWidth;
            				}
HXLINE( 671)				currentTextHeight = ( (Float)(::Math_obj::ceil((((group->offsetY - ( (Float)(2) )) + group->ascent) + group->descent))) );
HXLINE( 673)				if ((currentTextHeight > this->textHeight)) {
HXLINE( 675)					this->textHeight = currentTextHeight;
            				}
            			}
            		}
HXLINE( 679)		bool _hx_tmp;
HXDLIN( 679)		bool _hx_tmp1;
HXDLIN( 679)		if ((this->textHeight == 0)) {
HXLINE( 679)			_hx_tmp1 = ::hx::IsNotNull( this->textField );
            		}
            		else {
HXLINE( 679)			_hx_tmp1 = false;
            		}
HXDLIN( 679)		if (_hx_tmp1) {
HXLINE( 679)			_hx_tmp = ::hx::IsEq( this->type,1 );
            		}
            		else {
HXLINE( 679)			_hx_tmp = false;
            		}
HXDLIN( 679)		if (_hx_tmp) {
HXLINE( 681)			 ::openfl::text::TextFormat currentFormat = this->textField->_hx___textFormat;
HXLINE( 682)			Float ascent;
HXDLIN( 682)			Float descent;
HXLINE( 684)			 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXLINE( 686)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE( 688)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXLINE( 689)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE( 691)				bool _hx_tmp;
HXDLIN( 691)				if (::hx::IsNotNull( font )) {
HXLINE( 691)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE( 691)					_hx_tmp = false;
            				}
HXDLIN( 691)				if (_hx_tmp) {
HXLINE( 694)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXLINE( 695)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE( 703)					ascent = ( (Float)(currentFormat->size) );
HXLINE( 704)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXLINE( 682)			 ::Dynamic leading = currentFormat->leading;
HXDLIN( 682)			int heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXLINE( 711)			currentLineAscent = ascent;
HXLINE( 712)			currentLineDescent = descent;
HXLINE( 713)			currentLineLeading = leading;
HXLINE( 715)			currentTextHeight = ( (Float)(::Math_obj::ceil((ascent + descent))) );
HXLINE( 716)			this->textHeight = currentTextHeight;
            		}
HXLINE( 719)		this->lineAscents->push(currentLineAscent);
HXLINE( 720)		this->lineDescents->push(currentLineDescent);
HXLINE( 721)		{
HXLINE( 721)			Float _hx_tmp2;
HXDLIN( 721)			if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 721)				_hx_tmp2 = ( (Float)(currentLineLeading) );
            			}
            			else {
HXLINE( 721)				_hx_tmp2 = ( (Float)(0) );
            			}
HXDLIN( 721)			this->lineLeadings->push(_hx_tmp2);
            		}
HXLINE( 722)		this->lineHeights->push(currentLineHeight);
HXLINE( 723)		this->lineWidths->push(currentLineWidth);
HXLINE( 725)		if ((this->numLines == 1)) {
HXLINE( 727)			if (::hx::IsGreater( currentLineLeading,0 )) {
HXLINE( 729)				 ::openfl::text::_internal::TextEngine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 729)				_hx_tmp->textHeight = (_hx_tmp->textHeight + currentLineLeading);
            			}
            		}
HXLINE( 733)		if (::hx::IsNotEq( this->autoSize,2 )) {
HXLINE( 735)			 ::Dynamic _hx_switch_0 = this->autoSize;
            			if (  (_hx_switch_0==0) ||  (_hx_switch_0==1) ||  (_hx_switch_0==3) ){
HXLINE( 738)				if (!(this->wordWrap)) {
HXLINE( 740)					this->width = (this->textWidth + 4);
            				}
HXLINE( 743)				this->height = (this->textHeight + 4);
HXLINE( 744)				this->bottomScrollV = this->numLines;
HXLINE( 737)				goto _hx_goto_14;
            			}
            			/* default */{
            			}
            			_hx_goto_14:;
            		}
HXLINE( 750)		if ((this->textWidth > (this->width - ( (Float)(4) )))) {
HXLINE( 752)			this->maxScrollH = ::Std_obj::_hx_int(((this->textWidth - this->width) + 4));
            		}
            		else {
HXLINE( 756)			this->maxScrollH = 0;
            		}
HXLINE( 759)		if ((this->scrollH > this->maxScrollH)) {
HXLINE( 759)			this->scrollH = this->maxScrollH;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

void TextEngine_obj::getLayoutGroups(){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_763_getLayoutGroups)
HXDLIN( 763)		 ::openfl::text::_internal::TextEngine _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 764)		this->layoutGroups->set_length(0);
HXLINE( 766)		bool _hx_tmp;
HXDLIN( 766)		if (::hx::IsNotNull( this->text )) {
HXLINE( 766)			_hx_tmp = (this->text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 766)			_hx_tmp = true;
            		}
HXDLIN( 766)		if (_hx_tmp) {
HXLINE( 766)			return;
            		}
HXLINE( 768)		int rangeIndex = -1;
HXLINE( 769)		 ::openfl::text::_internal::TextFormatRange formatRange = null();
HXLINE( 770)		 ::lime::text::Font font = null();
HXLINE( 772)		 ::openfl::text::TextFormat currentFormat = ::openfl::text::TextField_obj::_hx___defaultTextFormat->clone();
HXLINE( 775)		int leading = 0;
HXLINE( 776)		Float ascent = ((Float)0.0);
HXDLIN( 776)		Float maxAscent = ((Float)0.0);
HXLINE( 777)		Float descent = ((Float)0.0);
HXLINE( 780)		 ::Dynamic align = 3;
HXLINE( 781)		int blockIndent = 0;
HXLINE( 782)		bool bullet = false;
HXLINE( 783)		int indent = 0;
HXLINE( 784)		int leftMargin = 0;
HXLINE( 785)		int rightMargin = 0;
HXLINE( 786)		bool firstLineOfParagraph = true;
HXLINE( 788)		 ::Dynamic tabStops = null();
HXLINE( 790)		 ::openfl::text::_internal::TextLayoutGroup layoutGroup = null();
HXDLIN( 790)		::Array< ::Dynamic> positions = null();
HXLINE( 791)		Float widthValue = ((Float)0.0);
HXDLIN( 791)		int heightValue = 0;
HXDLIN( 791)		int maxHeightValue = 0;
HXLINE( 792)		int previousSpaceIndex = -2;
HXLINE( 793)		int previousBreakIndex = -1;
HXLINE( 794)		int spaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),null());
HXLINE( 795)		int breakCount = 0;
HXLINE( 796)		int breakIndex;
HXDLIN( 796)		if ((breakCount < this->lineBreaks->get_length())) {
HXLINE( 796)			breakIndex = this->lineBreaks->get(breakCount);
            		}
            		else {
HXLINE( 796)			breakIndex = -1;
            		}
HXLINE( 798)		Float offsetX = ((Float)0.0);
HXLINE( 799)		Float offsetY = ((Float)0.0);
HXLINE( 800)		int textIndex = 0;
HXLINE( 801)		int lineIndex = 0;
HXLINE(1357)		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1357)			rangeIndex = (rangeIndex + 1);
HXDLIN(1357)			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1357)			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1357)			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            		}
HXLINE(1358)		{
HXLINE(1358)			firstLineOfParagraph = true;
HXDLIN(1358)			if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1358)				align = currentFormat->align;
            			}
            			else {
HXLINE(1358)				align = 3;
            			}
HXDLIN(1358)			if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1358)				blockIndent = ( (int)(currentFormat->blockIndent) );
            			}
            			else {
HXLINE(1358)				blockIndent = 0;
            			}
HXDLIN(1358)			if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1358)				indent = ( (int)(currentFormat->indent) );
            			}
            			else {
HXLINE(1358)				indent = 0;
            			}
HXDLIN(1358)			if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1358)				leftMargin = ( (int)(currentFormat->leftMargin) );
            			}
            			else {
HXLINE(1358)				leftMargin = 0;
            			}
HXDLIN(1358)			if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1358)				rightMargin = ( (int)(currentFormat->rightMargin) );
            			}
            			else {
HXLINE(1358)				rightMargin = 0;
            			}
HXDLIN(1358)			bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1358)			bool _hx_tmp2 = ::hx::IsNotNull( currentFormat->tabStops );
            		}
HXLINE(1359)		{
HXLINE(1359)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1359)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1359)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE(1359)				bool _hx_tmp;
HXDLIN(1359)				if (::hx::IsNotNull( font )) {
HXLINE(1359)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE(1359)					_hx_tmp = false;
            				}
HXDLIN(1359)				if (_hx_tmp) {
HXLINE(1359)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1359)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE(1359)					ascent = ( (Float)(currentFormat->size) );
HXDLIN(1359)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXDLIN(1359)			leading = ( (int)(currentFormat->leading) );
HXDLIN(1359)			heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1359)			if ((heightValue > maxHeightValue)) {
HXLINE(1359)				maxHeightValue = heightValue;
            			}
HXDLIN(1359)			if ((ascent > maxAscent)) {
HXLINE(1359)				maxAscent = ascent;
            			}
            		}
HXLINE(1361)		bool wrap;
HXLINE(1362)		int maxLoops = (this->text.length + 1);
HXLINE(1366)		while((textIndex < maxLoops)){
HXLINE(1368)			bool _hx_tmp;
HXDLIN(1368)			if ((breakIndex > -1)) {
HXLINE(1368)				if ((spaceIndex != -1)) {
HXLINE(1368)					_hx_tmp = (breakIndex < spaceIndex);
            				}
            				else {
HXLINE(1368)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(1368)				_hx_tmp = false;
            			}
HXDLIN(1368)			if (_hx_tmp) {
HXLINE(1372)				if ((textIndex <= breakIndex)) {
HXLINE(1374)					if ((textIndex >= breakIndex)) {
HXLINE(1374)						positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)						widthValue = ( (Float)(0) );
            					}
            					else {
HXLINE(1374)						if ((breakIndex <= formatRange->end)) {
HXLINE(1374)							::String text = _gthis->text;
HXDLIN(1374)							Float letterSpacing = ((Float)0.0);
HXDLIN(1374)							if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)								letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            							}
HXDLIN(1374)							if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)								_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            							}
HXDLIN(1374)							_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)							_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)							if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)								_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            							}
HXDLIN(1374)							_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)							bool positions1;
HXDLIN(1374)							if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)								positions1 = (_gthis->sharpness < 400);
            							}
            							else {
HXLINE(1374)								positions1 = true;
            							}
HXDLIN(1374)							_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1374)							 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)							_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1374)							if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)								positions = _gthis->_hx___textLayout->get_positions();
            							}
            							else {
HXLINE(1374)								positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            							}
HXDLIN(1374)							Float width = ((Float)0.0);
HXDLIN(1374)							{
HXLINE(1374)								int _g = 0;
HXDLIN(1374)								while((_g < positions->length)){
HXLINE(1374)									 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)									_g = (_g + 1);
HXDLIN(1374)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1374)							widthValue = width;
            						}
            						else {
HXLINE(1374)							int tempIndex = textIndex;
HXDLIN(1374)							int tempRangeEnd = formatRange->end;
HXDLIN(1374)							int countRanges = 0;
HXDLIN(1374)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1374)							widthValue = ( (Float)(0) );
HXDLIN(1374)							while(true){
HXLINE(1374)								if ((tempIndex != tempRangeEnd)) {
HXLINE(1374)									::String text = _gthis->text;
HXDLIN(1374)									Float letterSpacing = ((Float)0.0);
HXDLIN(1374)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1374)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1374)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1374)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1374)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1374)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1374)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1374)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1374)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1374)									bool _hx_tmp;
HXDLIN(1374)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1374)										_hx_tmp = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1374)										_hx_tmp = true;
            									}
HXDLIN(1374)									_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1374)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1374)									_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1374)									::Array< ::Dynamic> tempPositions;
HXDLIN(1374)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1374)										tempPositions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1374)										tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1374)									positions = positions->concat(tempPositions);
            								}
HXDLIN(1374)								if ((tempRangeEnd != breakIndex)) {
HXLINE(1374)									bool _hx_tmp;
HXDLIN(1374)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)										rangeIndex = (rangeIndex + 1);
HXDLIN(1374)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1374)										_hx_tmp = true;
            									}
            									else {
HXLINE(1374)										_hx_tmp = false;
            									}
HXDLIN(1374)									if (!(_hx_tmp)) {
HXLINE(1374)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1374)										goto _hx_goto_18;
            									}
HXDLIN(1374)									tempIndex = tempRangeEnd;
HXDLIN(1374)									if ((breakIndex < formatRange->end)) {
HXLINE(1374)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1374)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1374)									countRanges = (countRanges + 1);
            								}
            								else {
HXLINE(1374)									Float width = ((Float)0.0);
HXDLIN(1374)									{
HXLINE(1374)										int _g = 0;
HXDLIN(1374)										while((_g < positions->length)){
HXLINE(1374)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1374)											_g = (_g + 1);
HXDLIN(1374)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1374)									widthValue = width;
HXDLIN(1374)									goto _hx_goto_18;
            								}
            							}
            							_hx_goto_18:;
HXDLIN(1374)							rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1374)							if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)								rangeIndex = (rangeIndex + 1);
HXDLIN(1374)								formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)								currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)								font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            							}
            						}
            					}
HXLINE(1375)					{
HXLINE(1375)						bool _hx_tmp;
HXDLIN(1375)						if ((_gthis->width >= 4)) {
HXLINE(1375)							_hx_tmp = _gthis->wordWrap;
            						}
            						else {
HXLINE(1375)							_hx_tmp = false;
            						}
HXDLIN(1375)						if (_hx_tmp) {
HXLINE(1375)							::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1375)							int bufferCount;
HXDLIN(1375)							int placeIndex;
HXDLIN(1375)							Float positionWidth;
HXDLIN(1375)							 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1375)							Float width = ((Float)0.0);
HXDLIN(1375)							{
HXLINE(1375)								int _g = 0;
HXDLIN(1375)								while((_g < remainingPositions->length)){
HXLINE(1375)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)									_g = (_g + 1);
HXDLIN(1375)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1375)							Float tempWidth = width;
HXDLIN(1375)							int i = (remainingPositions->length - 1);
HXDLIN(1375)							while((i >= 0)){
HXLINE(1375)								 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1375)								bool _hx_tmp;
HXDLIN(1375)								if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1375)									_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            								}
            								else {
HXLINE(1375)									_hx_tmp = false;
            								}
HXDLIN(1375)								if (_hx_tmp) {
HXLINE(1375)									goto _hx_goto_21;
            								}
HXDLIN(1375)								 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)								tempWidth = (tempWidth - position->advance->x);
HXDLIN(1375)								i = (i - 1);
            							}
            							_hx_goto_21:;
HXDLIN(1375)							while(true){
HXLINE(1375)								bool _hx_tmp;
HXDLIN(1375)								if ((remainingPositions->length > 0)) {
HXLINE(1375)									int _hx_tmp1;
HXDLIN(1375)									if (firstLineOfParagraph) {
HXLINE(1375)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1375)										_hx_tmp1 = 0;
            									}
HXDLIN(1375)									_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            								}
            								else {
HXLINE(1375)									_hx_tmp = false;
            								}
HXDLIN(1375)								if (!(_hx_tmp)) {
HXLINE(1375)									goto _hx_goto_22;
            								}
HXDLIN(1375)								bufferCount = 0;
HXDLIN(1375)								i = bufferCount;
HXDLIN(1375)								positionWidth = ((Float)0.0);
HXDLIN(1375)								while(true){
HXLINE(1375)									int _hx_tmp;
HXDLIN(1375)									if (firstLineOfParagraph) {
HXLINE(1375)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1375)										_hx_tmp = 0;
            									}
HXDLIN(1375)									if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1375)										goto _hx_goto_23;
            									}
HXDLIN(1375)									currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)									if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1375)										i = (i + 1);
HXDLIN(1375)										bufferCount = (bufferCount + 1);
            									}
            									else {
HXLINE(1375)										positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1375)										i = (i + 1);
            									}
            								}
            								_hx_goto_23:;
HXDLIN(1375)								if ((i == bufferCount)) {
HXLINE(1375)									i = (bufferCount + 1);
            								}
            								else {
HXLINE(1375)									while(true){
HXLINE(1375)										bool _hx_tmp;
HXDLIN(1375)										if ((i > 1)) {
HXLINE(1375)											int _hx_tmp1;
HXDLIN(1375)											if (firstLineOfParagraph) {
HXLINE(1375)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1375)												_hx_tmp1 = 0;
            											}
HXDLIN(1375)											_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1375)											_hx_tmp = false;
            										}
HXDLIN(1375)										if (!(_hx_tmp)) {
HXLINE(1375)											goto _hx_goto_24;
            										}
HXDLIN(1375)										i = (i - 1);
HXDLIN(1375)										if (((i - bufferCount) > 0)) {
HXLINE(1375)											{
HXLINE(1375)												int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1375)												if ((textIndex >= endIndex)) {
HXLINE(1375)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1375)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1375)													if ((endIndex <= formatRange->end)) {
HXLINE(1375)														::String text = _gthis->text;
HXDLIN(1375)														Float letterSpacing = ((Float)0.0);
HXDLIN(1375)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1375)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1375)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1375)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)														bool positions1;
HXDLIN(1375)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1375)															positions1 = true;
            														}
HXDLIN(1375)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1375)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1375)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1375)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1375)														Float width = ((Float)0.0);
HXDLIN(1375)														{
HXLINE(1375)															int _g = 0;
HXDLIN(1375)															while((_g < positions->length)){
HXLINE(1375)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)																_g = (_g + 1);
HXDLIN(1375)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1375)														widthValue = width;
            													}
            													else {
HXLINE(1375)														int tempIndex = textIndex;
HXDLIN(1375)														int tempRangeEnd = formatRange->end;
HXDLIN(1375)														int countRanges = 0;
HXDLIN(1375)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1375)														widthValue = ( (Float)(0) );
HXDLIN(1375)														while(true){
HXLINE(1375)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1375)																::String text = _gthis->text;
HXDLIN(1375)																Float letterSpacing = ((Float)0.0);
HXDLIN(1375)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1375)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1375)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1375)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)																bool _hx_tmp;
HXDLIN(1375)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1375)																	_hx_tmp = true;
            																}
HXDLIN(1375)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1375)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1375)																::Array< ::Dynamic> tempPositions;
HXDLIN(1375)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1375)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1375)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1375)															if ((tempRangeEnd != endIndex)) {
HXLINE(1375)																bool _hx_tmp;
HXDLIN(1375)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1375)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1375)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1375)																	_hx_tmp = false;
            																}
HXDLIN(1375)																if (!(_hx_tmp)) {
HXLINE(1375)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1375)																	goto _hx_goto_26;
            																}
HXDLIN(1375)																tempIndex = tempRangeEnd;
HXDLIN(1375)																if ((endIndex < formatRange->end)) {
HXLINE(1375)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1375)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1375)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1375)																Float width = ((Float)0.0);
HXDLIN(1375)																{
HXLINE(1375)																	int _g = 0;
HXDLIN(1375)																	while((_g < positions->length)){
HXLINE(1375)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)																		_g = (_g + 1);
HXDLIN(1375)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1375)																widthValue = width;
HXDLIN(1375)																goto _hx_goto_26;
            															}
            														}
            														_hx_goto_26:;
HXDLIN(1375)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1375)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)															rangeIndex = (rangeIndex + 1);
HXDLIN(1375)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1375)											positionWidth = widthValue;
            										}
            										else {
HXLINE(1375)											i = 1;
HXDLIN(1375)											bufferCount = 0;
HXDLIN(1375)											{
HXLINE(1375)												int endIndex = (textIndex + 1);
HXDLIN(1375)												if ((textIndex >= endIndex)) {
HXLINE(1375)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1375)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1375)													if ((endIndex <= formatRange->end)) {
HXLINE(1375)														::String text = _gthis->text;
HXDLIN(1375)														Float letterSpacing = ((Float)0.0);
HXDLIN(1375)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1375)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1375)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1375)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)														bool positions1;
HXDLIN(1375)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1375)															positions1 = true;
            														}
HXDLIN(1375)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1375)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1375)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1375)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1375)														Float width = ((Float)0.0);
HXDLIN(1375)														{
HXLINE(1375)															int _g = 0;
HXDLIN(1375)															while((_g < positions->length)){
HXLINE(1375)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)																_g = (_g + 1);
HXDLIN(1375)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1375)														widthValue = width;
            													}
            													else {
HXLINE(1375)														int tempIndex = textIndex;
HXDLIN(1375)														int tempRangeEnd = formatRange->end;
HXDLIN(1375)														int countRanges = 0;
HXDLIN(1375)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1375)														widthValue = ( (Float)(0) );
HXDLIN(1375)														while(true){
HXLINE(1375)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1375)																::String text = _gthis->text;
HXDLIN(1375)																Float letterSpacing = ((Float)0.0);
HXDLIN(1375)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1375)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1375)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1375)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)																bool _hx_tmp;
HXDLIN(1375)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1375)																	_hx_tmp = true;
            																}
HXDLIN(1375)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1375)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1375)																::Array< ::Dynamic> tempPositions;
HXDLIN(1375)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1375)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1375)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1375)															if ((tempRangeEnd != endIndex)) {
HXLINE(1375)																bool _hx_tmp;
HXDLIN(1375)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1375)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1375)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1375)																	_hx_tmp = false;
            																}
HXDLIN(1375)																if (!(_hx_tmp)) {
HXLINE(1375)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1375)																	goto _hx_goto_29;
            																}
HXDLIN(1375)																tempIndex = tempRangeEnd;
HXDLIN(1375)																if ((endIndex < formatRange->end)) {
HXLINE(1375)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1375)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1375)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1375)																Float width = ((Float)0.0);
HXDLIN(1375)																{
HXLINE(1375)																	int _g = 0;
HXDLIN(1375)																	while((_g < positions->length)){
HXLINE(1375)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)																		_g = (_g + 1);
HXDLIN(1375)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1375)																widthValue = width;
HXDLIN(1375)																goto _hx_goto_29;
            															}
            														}
            														_hx_goto_29:;
HXDLIN(1375)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1375)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)															rangeIndex = (rangeIndex + 1);
HXDLIN(1375)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1375)											positionWidth = ( (Float)(0) );
            										}
            									}
            									_hx_goto_24:;
            								}
HXDLIN(1375)								placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1375)								{
HXLINE(1375)									if ((placeIndex <= formatRange->end)) {
HXLINE(1375)										::String text = _gthis->text;
HXDLIN(1375)										Float letterSpacing = ((Float)0.0);
HXDLIN(1375)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1375)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)										bool positions1;
HXDLIN(1375)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1375)											positions1 = true;
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1375)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)										_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1375)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1375)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1375)										Float width = ((Float)0.0);
HXDLIN(1375)										{
HXLINE(1375)											int _g = 0;
HXDLIN(1375)											while((_g < positions->length)){
HXLINE(1375)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)												_g = (_g + 1);
HXDLIN(1375)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1375)										widthValue = width;
HXDLIN(1375)										bool _hx_tmp;
HXDLIN(1375)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1375)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1375)											_hx_tmp = true;
            										}
HXDLIN(1375)										if (_hx_tmp) {
HXLINE(1375)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1375)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1375)											layoutGroup->format = formatRange->format;
HXDLIN(1375)											layoutGroup->startIndex = textIndex;
HXDLIN(1375)											layoutGroup->endIndex = placeIndex;
            										}
HXDLIN(1375)										layoutGroup->positions = positions;
HXDLIN(1375)										int _hx_tmp1;
HXDLIN(1375)										if (firstLineOfParagraph) {
HXLINE(1375)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1375)											_hx_tmp1 = 0;
            										}
HXDLIN(1375)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1375)										layoutGroup->ascent = ascent;
HXDLIN(1375)										layoutGroup->descent = descent;
HXDLIN(1375)										layoutGroup->leading = leading;
HXDLIN(1375)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1375)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1375)										layoutGroup->width = widthValue;
HXDLIN(1375)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1375)										offsetX = (offsetX + widthValue);
HXDLIN(1375)										if ((placeIndex == formatRange->end)) {
HXLINE(1375)											layoutGroup = null();
HXDLIN(1375)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)												rangeIndex = (rangeIndex + 1);
HXDLIN(1375)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1375)											{
HXLINE(1375)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1375)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1375)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1375)													bool _hx_tmp;
HXDLIN(1375)													if (::hx::IsNotNull( font )) {
HXLINE(1375)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1375)														_hx_tmp = false;
            													}
HXDLIN(1375)													if (_hx_tmp) {
HXLINE(1375)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1375)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1375)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1375)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1375)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1375)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1375)												if ((heightValue > maxHeightValue)) {
HXLINE(1375)													maxHeightValue = heightValue;
            												}
HXDLIN(1375)												if ((ascent > maxAscent)) {
HXLINE(1375)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1375)										while(true){
HXLINE(1375)											int tempRangeEnd;
HXDLIN(1375)											if ((placeIndex < formatRange->end)) {
HXLINE(1375)												tempRangeEnd = placeIndex;
            											}
            											else {
HXLINE(1375)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1375)											if ((textIndex != tempRangeEnd)) {
HXLINE(1375)												::String text = _gthis->text;
HXDLIN(1375)												Float letterSpacing = ((Float)0.0);
HXDLIN(1375)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1375)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1375)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1375)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)												bool positions1;
HXDLIN(1375)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1375)													positions1 = true;
            												}
HXDLIN(1375)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1375)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1375)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1375)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1375)												Float width = ((Float)0.0);
HXDLIN(1375)												{
HXLINE(1375)													int _g = 0;
HXDLIN(1375)													while((_g < positions->length)){
HXLINE(1375)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)														_g = (_g + 1);
HXDLIN(1375)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1375)												widthValue = width;
HXDLIN(1375)												bool _hx_tmp;
HXDLIN(1375)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1375)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1375)													_hx_tmp = true;
            												}
HXDLIN(1375)												if (_hx_tmp) {
HXLINE(1375)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1375)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1375)													layoutGroup->format = formatRange->format;
HXDLIN(1375)													layoutGroup->startIndex = textIndex;
HXDLIN(1375)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1375)												layoutGroup->positions = positions;
HXDLIN(1375)												int _hx_tmp1;
HXDLIN(1375)												if (firstLineOfParagraph) {
HXLINE(1375)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1375)													_hx_tmp1 = 0;
            												}
HXDLIN(1375)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1375)												layoutGroup->ascent = ascent;
HXDLIN(1375)												layoutGroup->descent = descent;
HXDLIN(1375)												layoutGroup->leading = leading;
HXDLIN(1375)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1375)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1375)												layoutGroup->width = widthValue;
HXDLIN(1375)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1375)												offsetX = (offsetX + widthValue);
HXDLIN(1375)												textIndex = tempRangeEnd;
            											}
HXDLIN(1375)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1375)												layoutGroup = null();
            											}
HXDLIN(1375)											if ((tempRangeEnd == placeIndex)) {
HXLINE(1375)												goto _hx_goto_32;
            											}
HXDLIN(1375)											bool _hx_tmp;
HXDLIN(1375)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)												rangeIndex = (rangeIndex + 1);
HXDLIN(1375)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1375)												_hx_tmp = true;
            											}
            											else {
HXLINE(1375)												_hx_tmp = false;
            											}
HXDLIN(1375)											if (!(_hx_tmp)) {
HXLINE(1375)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1375)												goto _hx_goto_32;
            											}
HXDLIN(1375)											{
HXLINE(1375)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1375)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1375)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1375)													bool _hx_tmp;
HXDLIN(1375)													if (::hx::IsNotNull( font )) {
HXLINE(1375)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1375)														_hx_tmp = false;
            													}
HXDLIN(1375)													if (_hx_tmp) {
HXLINE(1375)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1375)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1375)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1375)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1375)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1375)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1375)												if ((heightValue > maxHeightValue)) {
HXLINE(1375)													maxHeightValue = heightValue;
            												}
HXDLIN(1375)												if ((ascent > maxAscent)) {
HXLINE(1375)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_32:;
            									}
HXDLIN(1375)									textIndex = placeIndex;
            								}
HXDLIN(1375)								{
HXLINE(1375)									{
HXLINE(1375)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1375)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1375)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1375)											bool _hx_tmp;
HXDLIN(1375)											if (::hx::IsNotNull( font )) {
HXLINE(1375)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1375)												_hx_tmp = false;
            											}
HXDLIN(1375)											if (_hx_tmp) {
HXLINE(1375)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1375)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1375)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1375)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1375)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1375)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1375)										if ((heightValue > maxHeightValue)) {
HXLINE(1375)											maxHeightValue = heightValue;
            										}
HXDLIN(1375)										if ((ascent > maxAscent)) {
HXLINE(1375)											maxAscent = ascent;
            										}
            									}
HXDLIN(1375)									int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1375)									while(true){
HXLINE(1375)										i1 = (i1 - 1);
HXDLIN(1375)										if (!((i1 > -1))) {
HXLINE(1375)											goto _hx_goto_34;
            										}
HXDLIN(1375)										 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1375)										if ((lg->lineIndex < lineIndex)) {
HXLINE(1375)											goto _hx_goto_34;
            										}
HXDLIN(1375)										if ((lg->lineIndex > lineIndex)) {
HXLINE(1375)											continue;
            										}
HXDLIN(1375)										lg->ascent = maxAscent;
HXDLIN(1375)										lg->height = ( (Float)(maxHeightValue) );
            									}
            									_hx_goto_34:;
HXDLIN(1375)									offsetY = (offsetY + maxHeightValue);
HXDLIN(1375)									maxAscent = ((Float)0.0);
HXDLIN(1375)									maxHeightValue = 0;
HXDLIN(1375)									lineIndex = (lineIndex + 1);
HXDLIN(1375)									offsetX = ( (Float)(0) );
HXDLIN(1375)									firstLineOfParagraph = false;
            								}
HXDLIN(1375)								if ((placeIndex >= breakIndex)) {
HXLINE(1375)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1375)									widthValue = ( (Float)(0) );
            								}
            								else {
HXLINE(1375)									if ((breakIndex <= formatRange->end)) {
HXLINE(1375)										::String text = _gthis->text;
HXDLIN(1375)										Float letterSpacing = ((Float)0.0);
HXDLIN(1375)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1375)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)										bool positions1;
HXDLIN(1375)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1375)											positions1 = true;
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1375)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)										_gthis1->set_text(text.substring(placeIndex,breakIndex));
HXDLIN(1375)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1375)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1375)										Float width = ((Float)0.0);
HXDLIN(1375)										{
HXLINE(1375)											int _g = 0;
HXDLIN(1375)											while((_g < positions->length)){
HXLINE(1375)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)												_g = (_g + 1);
HXDLIN(1375)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1375)										widthValue = width;
            									}
            									else {
HXLINE(1375)										int tempIndex = placeIndex;
HXDLIN(1375)										int tempRangeEnd = formatRange->end;
HXDLIN(1375)										int countRanges = 0;
HXDLIN(1375)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1375)										widthValue = ( (Float)(0) );
HXDLIN(1375)										while(true){
HXLINE(1375)											if ((tempIndex != tempRangeEnd)) {
HXLINE(1375)												::String text = _gthis->text;
HXDLIN(1375)												Float letterSpacing = ((Float)0.0);
HXDLIN(1375)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1375)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1375)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1375)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)												bool _hx_tmp;
HXDLIN(1375)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)													_hx_tmp = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1375)													_hx_tmp = true;
            												}
HXDLIN(1375)												_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1375)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)												_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1375)												::Array< ::Dynamic> tempPositions;
HXDLIN(1375)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)													tempPositions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1375)													tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1375)												positions = positions->concat(tempPositions);
            											}
HXDLIN(1375)											if ((tempRangeEnd != breakIndex)) {
HXLINE(1375)												bool _hx_tmp;
HXDLIN(1375)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)													rangeIndex = (rangeIndex + 1);
HXDLIN(1375)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1375)													_hx_tmp = true;
            												}
            												else {
HXLINE(1375)													_hx_tmp = false;
            												}
HXDLIN(1375)												if (!(_hx_tmp)) {
HXLINE(1375)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1375)													goto _hx_goto_36;
            												}
HXDLIN(1375)												tempIndex = tempRangeEnd;
HXDLIN(1375)												if ((breakIndex < formatRange->end)) {
HXLINE(1375)													tempRangeEnd = breakIndex;
            												}
            												else {
HXLINE(1375)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1375)												countRanges = (countRanges + 1);
            											}
            											else {
HXLINE(1375)												Float width = ((Float)0.0);
HXDLIN(1375)												{
HXLINE(1375)													int _g = 0;
HXDLIN(1375)													while((_g < positions->length)){
HXLINE(1375)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)														_g = (_g + 1);
HXDLIN(1375)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1375)												widthValue = width;
HXDLIN(1375)												goto _hx_goto_36;
            											}
            										}
            										_hx_goto_36:;
HXDLIN(1375)										rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1375)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)											rangeIndex = (rangeIndex + 1);
HXDLIN(1375)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
            									}
            								}
HXDLIN(1375)								remainingPositions = positions;
HXDLIN(1375)								tempWidth = widthValue;
            							}
            							_hx_goto_22:;
            						}
HXDLIN(1375)						{
HXLINE(1375)							if ((breakIndex <= formatRange->end)) {
HXLINE(1375)								::String text = _gthis->text;
HXDLIN(1375)								Float letterSpacing = ((Float)0.0);
HXDLIN(1375)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1375)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1375)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1375)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)								bool positions1;
HXDLIN(1375)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1375)									positions1 = true;
            								}
HXDLIN(1375)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1375)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)								_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1375)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1375)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1375)								Float width = ((Float)0.0);
HXDLIN(1375)								{
HXLINE(1375)									int _g = 0;
HXDLIN(1375)									while((_g < positions->length)){
HXLINE(1375)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)										_g = (_g + 1);
HXDLIN(1375)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1375)								widthValue = width;
HXDLIN(1375)								bool _hx_tmp;
HXDLIN(1375)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1375)									_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            								}
            								else {
HXLINE(1375)									_hx_tmp = true;
            								}
HXDLIN(1375)								if (_hx_tmp) {
HXLINE(1375)									layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,breakIndex);
HXDLIN(1375)									_gthis->layoutGroups->push(layoutGroup);
            								}
            								else {
HXLINE(1375)									layoutGroup->format = formatRange->format;
HXDLIN(1375)									layoutGroup->startIndex = textIndex;
HXDLIN(1375)									layoutGroup->endIndex = breakIndex;
            								}
HXDLIN(1375)								layoutGroup->positions = positions;
HXDLIN(1375)								int _hx_tmp1;
HXDLIN(1375)								if (firstLineOfParagraph) {
HXLINE(1375)									_hx_tmp1 = indent;
            								}
            								else {
HXLINE(1375)									_hx_tmp1 = 0;
            								}
HXDLIN(1375)								layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1375)								layoutGroup->ascent = ascent;
HXDLIN(1375)								layoutGroup->descent = descent;
HXDLIN(1375)								layoutGroup->leading = leading;
HXDLIN(1375)								layoutGroup->lineIndex = lineIndex;
HXDLIN(1375)								layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1375)								layoutGroup->width = widthValue;
HXDLIN(1375)								layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1375)								offsetX = (offsetX + widthValue);
HXDLIN(1375)								if ((breakIndex == formatRange->end)) {
HXLINE(1375)									layoutGroup = null();
HXDLIN(1375)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)										rangeIndex = (rangeIndex + 1);
HXDLIN(1375)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
HXDLIN(1375)									{
HXLINE(1375)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1375)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1375)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1375)											bool _hx_tmp;
HXDLIN(1375)											if (::hx::IsNotNull( font )) {
HXLINE(1375)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1375)												_hx_tmp = false;
            											}
HXDLIN(1375)											if (_hx_tmp) {
HXLINE(1375)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1375)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1375)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1375)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1375)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1375)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1375)										if ((heightValue > maxHeightValue)) {
HXLINE(1375)											maxHeightValue = heightValue;
            										}
HXDLIN(1375)										if ((ascent > maxAscent)) {
HXLINE(1375)											maxAscent = ascent;
            										}
            									}
            								}
            							}
            							else {
HXLINE(1375)								while(true){
HXLINE(1375)									int tempRangeEnd;
HXDLIN(1375)									if ((breakIndex < formatRange->end)) {
HXLINE(1375)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1375)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1375)									if ((textIndex != tempRangeEnd)) {
HXLINE(1375)										::String text = _gthis->text;
HXDLIN(1375)										Float letterSpacing = ((Float)0.0);
HXDLIN(1375)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1375)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1375)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1375)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1375)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1375)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1375)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1375)										bool positions1;
HXDLIN(1375)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1375)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1375)											positions1 = true;
            										}
HXDLIN(1375)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1375)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1375)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1375)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1375)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1375)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1375)										Float width = ((Float)0.0);
HXDLIN(1375)										{
HXLINE(1375)											int _g = 0;
HXDLIN(1375)											while((_g < positions->length)){
HXLINE(1375)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1375)												_g = (_g + 1);
HXDLIN(1375)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1375)										widthValue = width;
HXDLIN(1375)										bool _hx_tmp;
HXDLIN(1375)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1375)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1375)											_hx_tmp = true;
            										}
HXDLIN(1375)										if (_hx_tmp) {
HXLINE(1375)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1375)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1375)											layoutGroup->format = formatRange->format;
HXDLIN(1375)											layoutGroup->startIndex = textIndex;
HXDLIN(1375)											layoutGroup->endIndex = tempRangeEnd;
            										}
HXDLIN(1375)										layoutGroup->positions = positions;
HXDLIN(1375)										int _hx_tmp1;
HXDLIN(1375)										if (firstLineOfParagraph) {
HXLINE(1375)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1375)											_hx_tmp1 = 0;
            										}
HXDLIN(1375)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1375)										layoutGroup->ascent = ascent;
HXDLIN(1375)										layoutGroup->descent = descent;
HXDLIN(1375)										layoutGroup->leading = leading;
HXDLIN(1375)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1375)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1375)										layoutGroup->width = widthValue;
HXDLIN(1375)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1375)										offsetX = (offsetX + widthValue);
HXDLIN(1375)										textIndex = tempRangeEnd;
            									}
HXDLIN(1375)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1375)										layoutGroup = null();
            									}
HXDLIN(1375)									if ((tempRangeEnd == breakIndex)) {
HXLINE(1375)										goto _hx_goto_39;
            									}
HXDLIN(1375)									bool _hx_tmp;
HXDLIN(1375)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1375)										rangeIndex = (rangeIndex + 1);
HXDLIN(1375)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1375)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1375)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1375)										_hx_tmp = true;
            									}
            									else {
HXLINE(1375)										_hx_tmp = false;
            									}
HXDLIN(1375)									if (!(_hx_tmp)) {
HXLINE(1375)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1375)										goto _hx_goto_39;
            									}
HXDLIN(1375)									{
HXLINE(1375)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1375)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1375)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1375)											bool _hx_tmp;
HXDLIN(1375)											if (::hx::IsNotNull( font )) {
HXLINE(1375)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1375)												_hx_tmp = false;
            											}
HXDLIN(1375)											if (_hx_tmp) {
HXLINE(1375)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1375)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1375)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1375)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1375)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1375)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1375)										if ((heightValue > maxHeightValue)) {
HXLINE(1375)											maxHeightValue = heightValue;
            										}
HXDLIN(1375)										if ((ascent > maxAscent)) {
HXLINE(1375)											maxAscent = ascent;
            										}
            									}
            								}
            								_hx_goto_39:;
            							}
HXDLIN(1375)							textIndex = breakIndex;
            						}
            					}
HXLINE(1377)					layoutGroup = null();
            				}
            				else {
HXLINE(1379)					bool _hx_tmp;
HXDLIN(1379)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1379)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1379)						_hx_tmp = false;
            					}
HXDLIN(1379)					if (_hx_tmp) {
HXLINE(1382)						if ((layoutGroup->endIndex == spaceIndex)) {
HXLINE(1384)							 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1384)							int index = (layoutGroup->positions->length - 1);
HXDLIN(1384)							Float _hx_tmp;
HXDLIN(1384)							bool _hx_tmp1;
HXDLIN(1384)							if ((index >= 0)) {
HXLINE(1384)								_hx_tmp1 = (index < layoutGroup->positions->length);
            							}
            							else {
HXLINE(1384)								_hx_tmp1 = false;
            							}
HXDLIN(1384)							if (_hx_tmp1) {
HXLINE(1384)								_hx_tmp = layoutGroup->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            							}
            							else {
HXLINE(1384)								_hx_tmp = ( (Float)(0) );
            							}
HXDLIN(1384)							layoutGroup1->width = (layoutGroup1->width - _hx_tmp);
            						}
HXLINE(1387)						layoutGroup = null();
            					}
            				}
HXLINE(1390)				{
HXLINE(1390)					{
HXLINE(1390)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1390)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1390)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1390)							bool _hx_tmp;
HXDLIN(1390)							if (::hx::IsNotNull( font )) {
HXLINE(1390)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1390)								_hx_tmp = false;
            							}
HXDLIN(1390)							if (_hx_tmp) {
HXLINE(1390)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1390)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1390)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1390)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1390)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1390)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1390)						if ((heightValue > maxHeightValue)) {
HXLINE(1390)							maxHeightValue = heightValue;
            						}
HXDLIN(1390)						if ((ascent > maxAscent)) {
HXLINE(1390)							maxAscent = ascent;
            						}
            					}
HXDLIN(1390)					int i = _gthis->layoutGroups->get_length();
HXDLIN(1390)					while(true){
HXLINE(1390)						i = (i - 1);
HXDLIN(1390)						if (!((i > -1))) {
HXLINE(1390)							goto _hx_goto_41;
            						}
HXDLIN(1390)						 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1390)						if ((lg->lineIndex < lineIndex)) {
HXLINE(1390)							goto _hx_goto_41;
            						}
HXDLIN(1390)						if ((lg->lineIndex > lineIndex)) {
HXLINE(1390)							continue;
            						}
HXDLIN(1390)						lg->ascent = maxAscent;
HXDLIN(1390)						lg->height = ( (Float)(maxHeightValue) );
            					}
            					_hx_goto_41:;
HXDLIN(1390)					offsetY = (offsetY + maxHeightValue);
HXDLIN(1390)					maxAscent = ((Float)0.0);
HXDLIN(1390)					maxHeightValue = 0;
HXDLIN(1390)					lineIndex = (lineIndex + 1);
HXDLIN(1390)					offsetX = ( (Float)(0) );
HXDLIN(1390)					firstLineOfParagraph = false;
            				}
HXLINE(1393)				if ((formatRange->end == breakIndex)) {
HXLINE(1395)					if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1395)						rangeIndex = (rangeIndex + 1);
HXDLIN(1395)						formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1395)						currentFormat->_hx___merge(formatRange->format);
HXDLIN(1395)						font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            					}
HXLINE(1396)					{
HXLINE(1396)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1396)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1396)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1396)							bool _hx_tmp;
HXDLIN(1396)							if (::hx::IsNotNull( font )) {
HXLINE(1396)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1396)								_hx_tmp = false;
            							}
HXDLIN(1396)							if (_hx_tmp) {
HXLINE(1396)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1396)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1396)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1396)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1396)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1396)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1396)						if ((heightValue > maxHeightValue)) {
HXLINE(1396)							maxHeightValue = heightValue;
            						}
HXDLIN(1396)						if ((ascent > maxAscent)) {
HXLINE(1396)							maxAscent = ascent;
            						}
            					}
            				}
HXLINE(1399)				textIndex = (breakIndex + 1);
HXLINE(1400)				previousBreakIndex = breakIndex;
HXLINE(1401)				breakCount = (breakCount + 1);
HXLINE(1402)				if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1402)					breakIndex = this->lineBreaks->get(breakCount);
            				}
            				else {
HXLINE(1402)					breakIndex = -1;
            				}
HXLINE(1404)				{
HXLINE(1404)					firstLineOfParagraph = true;
HXDLIN(1404)					if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1404)						align = currentFormat->align;
            					}
            					else {
HXLINE(1404)						align = 3;
            					}
HXDLIN(1404)					if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1404)						blockIndent = ( (int)(currentFormat->blockIndent) );
            					}
            					else {
HXLINE(1404)						blockIndent = 0;
            					}
HXDLIN(1404)					if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1404)						indent = ( (int)(currentFormat->indent) );
            					}
            					else {
HXLINE(1404)						indent = 0;
            					}
HXDLIN(1404)					if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1404)						leftMargin = ( (int)(currentFormat->leftMargin) );
            					}
            					else {
HXLINE(1404)						leftMargin = 0;
            					}
HXDLIN(1404)					if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1404)						rightMargin = ( (int)(currentFormat->rightMargin) );
            					}
            					else {
HXLINE(1404)						rightMargin = 0;
            					}
HXDLIN(1404)					bool _hx_tmp = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1404)					bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->tabStops );
            				}
            			}
            			else {
HXLINE(1406)				if ((spaceIndex > -1)) {
HXLINE(1410)					bool _hx_tmp;
HXDLIN(1410)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1410)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1410)						_hx_tmp = false;
            					}
HXDLIN(1410)					if (_hx_tmp) {
HXLINE(1412)						layoutGroup = null();
            					}
HXLINE(1415)					wrap = false;
HXLINE(1417)					while((textIndex < this->text.length)){
HXLINE(1421)						int endIndex = -1;
HXLINE(1423)						if ((spaceIndex == -1)) {
HXLINE(1425)							endIndex = breakIndex;
            						}
            						else {
HXLINE(1429)							endIndex = (spaceIndex + 1);
HXLINE(1431)							bool _hx_tmp;
HXDLIN(1431)							if ((breakIndex > -1)) {
HXLINE(1431)								_hx_tmp = (breakIndex < endIndex);
            							}
            							else {
HXLINE(1431)								_hx_tmp = false;
            							}
HXDLIN(1431)							if (_hx_tmp) {
HXLINE(1433)								endIndex = breakIndex;
            							}
            						}
HXLINE(1437)						if ((endIndex == -1)) {
HXLINE(1439)							endIndex = this->text.length;
            						}
HXLINE(1442)						if ((textIndex >= endIndex)) {
HXLINE(1442)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1442)							widthValue = ( (Float)(0) );
            						}
            						else {
HXLINE(1442)							if ((endIndex <= formatRange->end)) {
HXLINE(1442)								::String text = _gthis->text;
HXDLIN(1442)								Float letterSpacing = ((Float)0.0);
HXDLIN(1442)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1442)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1442)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1442)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1442)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1442)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1442)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1442)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1442)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1442)								bool positions1;
HXDLIN(1442)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1442)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1442)									positions1 = true;
            								}
HXDLIN(1442)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1442)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1442)								_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1442)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1442)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1442)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1442)								Float width = ((Float)0.0);
HXDLIN(1442)								{
HXLINE(1442)									int _g = 0;
HXDLIN(1442)									while((_g < positions->length)){
HXLINE(1442)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1442)										_g = (_g + 1);
HXDLIN(1442)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1442)								widthValue = width;
            							}
            							else {
HXLINE(1442)								int tempIndex = textIndex;
HXDLIN(1442)								int tempRangeEnd = formatRange->end;
HXDLIN(1442)								int countRanges = 0;
HXDLIN(1442)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1442)								widthValue = ( (Float)(0) );
HXDLIN(1442)								while(true){
HXLINE(1442)									if ((tempIndex != tempRangeEnd)) {
HXLINE(1442)										::String text = _gthis->text;
HXDLIN(1442)										Float letterSpacing = ((Float)0.0);
HXDLIN(1442)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1442)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1442)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1442)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1442)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1442)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1442)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1442)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1442)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1442)										bool _hx_tmp;
HXDLIN(1442)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1442)											_hx_tmp = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1442)											_hx_tmp = true;
            										}
HXDLIN(1442)										_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1442)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1442)										_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1442)										::Array< ::Dynamic> tempPositions;
HXDLIN(1442)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1442)											tempPositions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1442)											tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1442)										positions = positions->concat(tempPositions);
            									}
HXDLIN(1442)									if ((tempRangeEnd != endIndex)) {
HXLINE(1442)										bool _hx_tmp;
HXDLIN(1442)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1442)											rangeIndex = (rangeIndex + 1);
HXDLIN(1442)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1442)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1442)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1442)											_hx_tmp = true;
            										}
            										else {
HXLINE(1442)											_hx_tmp = false;
            										}
HXDLIN(1442)										if (!(_hx_tmp)) {
HXLINE(1442)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1442)											goto _hx_goto_44;
            										}
HXDLIN(1442)										tempIndex = tempRangeEnd;
HXDLIN(1442)										if ((endIndex < formatRange->end)) {
HXLINE(1442)											tempRangeEnd = endIndex;
            										}
            										else {
HXLINE(1442)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1442)										countRanges = (countRanges + 1);
            									}
            									else {
HXLINE(1442)										Float width = ((Float)0.0);
HXDLIN(1442)										{
HXLINE(1442)											int _g = 0;
HXDLIN(1442)											while((_g < positions->length)){
HXLINE(1442)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1442)												_g = (_g + 1);
HXDLIN(1442)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1442)										widthValue = width;
HXDLIN(1442)										goto _hx_goto_44;
            									}
            								}
            								_hx_goto_44:;
HXDLIN(1442)								rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1442)								if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1442)									rangeIndex = (rangeIndex + 1);
HXDLIN(1442)									formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1442)									currentFormat->_hx___merge(formatRange->format);
HXDLIN(1442)									font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            								}
            							}
            						}
HXLINE(1444)						if (::hx::IsEq( align,2 )) {
HXLINE(1446)							bool _hx_tmp;
HXDLIN(1446)							if ((positions->length > 0)) {
HXLINE(1446)								_hx_tmp = (textIndex == previousSpaceIndex);
            							}
            							else {
HXLINE(1446)								_hx_tmp = false;
            							}
HXDLIN(1446)							if (_hx_tmp) {
HXLINE(1449)								textIndex = (textIndex + 1);
HXLINE(1451)								Float spaceWidth = positions->shift().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1452)								widthValue = (widthValue - spaceWidth);
HXLINE(1453)								offsetX = (offsetX + spaceWidth);
            							}
HXLINE(1456)							bool _hx_tmp1;
HXDLIN(1456)							if ((positions->length > 0)) {
HXLINE(1456)								_hx_tmp1 = (endIndex == (spaceIndex + 1));
            							}
            							else {
HXLINE(1456)								_hx_tmp1 = false;
            							}
HXDLIN(1456)							if (_hx_tmp1) {
HXLINE(1459)								endIndex = (endIndex - 1);
HXLINE(1461)								Float spaceWidth = positions->pop().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1462)								widthValue = (widthValue - spaceWidth);
            							}
            						}
HXLINE(1466)						if (this->wordWrap) {
HXLINE(1468)							int _hx_tmp;
HXDLIN(1468)							if (firstLineOfParagraph) {
HXLINE(1468)								_hx_tmp = indent;
            							}
            							else {
HXLINE(1468)								_hx_tmp = 0;
            							}
HXDLIN(1468)							if (((offsetX + widthValue) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1470)								wrap = true;
HXLINE(1472)								bool _hx_tmp;
HXDLIN(1472)								if ((positions->length > 0)) {
HXLINE(1472)									_hx_tmp = (endIndex == (spaceIndex + 1));
            								}
            								else {
HXLINE(1472)									_hx_tmp = false;
            								}
HXDLIN(1472)								if (_hx_tmp) {
HXLINE(1476)									 ::openfl::text::_internal::GlyphPosition lastPosition = positions->__get((positions->length - 1)).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXLINE(1477)									Float spaceWidth = lastPosition->advance->x;
HXLINE(1479)									int _hx_tmp;
HXDLIN(1479)									if (firstLineOfParagraph) {
HXLINE(1479)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1479)										_hx_tmp = 0;
            									}
HXDLIN(1479)									if ((((offsetX + widthValue) - spaceWidth) <= (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1481)										wrap = false;
            									}
            								}
            							}
            						}
HXLINE(1487)						if (wrap) {
HXLINE(1489)							bool _hx_tmp;
HXDLIN(1489)							if (::hx::IsNotEq( align,2 )) {
HXLINE(1489)								if (::hx::IsNull( layoutGroup )) {
HXLINE(1489)									_hx_tmp = (this->layoutGroups->get_length() > 0);
            								}
            								else {
HXLINE(1489)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1489)								_hx_tmp = false;
            							}
HXDLIN(1489)							if (_hx_tmp) {
HXLINE(1491)								 ::openfl::text::_internal::TextLayoutGroup previous = layoutGroup;
HXLINE(1492)								if (::hx::IsNull( previous )) {
HXLINE(1494)									::Dynamic this1 = this->layoutGroups;
HXDLIN(1494)									previous = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
            								}
HXLINE(1498)								 ::openfl::text::_internal::TextLayoutGroup previous1 = previous;
HXDLIN(1498)								int index = (previous->positions->length - 1);
HXDLIN(1498)								Float _hx_tmp;
HXDLIN(1498)								bool _hx_tmp1;
HXDLIN(1498)								if ((index >= 0)) {
HXLINE(1498)									_hx_tmp1 = (index < previous->positions->length);
            								}
            								else {
HXLINE(1498)									_hx_tmp1 = false;
            								}
HXDLIN(1498)								if (_hx_tmp1) {
HXLINE(1498)									_hx_tmp = previous->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE(1498)									_hx_tmp = ( (Float)(0) );
            								}
HXDLIN(1498)								previous1->width = (previous1->width - _hx_tmp);
HXLINE(1499)								previous->endIndex--;
            							}
HXLINE(1502)							int i = (this->layoutGroups->get_length() - 1);
HXLINE(1503)							int offsetCount = 0;
HXLINE(1505)							while((i >= 0)){
HXLINE(1507)								layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1509)								bool _hx_tmp;
HXDLIN(1509)								if ((i > 0)) {
HXLINE(1509)									_hx_tmp = (layoutGroup->startIndex > previousSpaceIndex);
            								}
            								else {
HXLINE(1509)									_hx_tmp = false;
            								}
HXDLIN(1509)								if (_hx_tmp) {
HXLINE(1511)									offsetCount = (offsetCount + 1);
            								}
            								else {
HXLINE(1515)									goto _hx_goto_46;
            								}
HXLINE(1518)								i = (i - 1);
            							}
            							_hx_goto_46:;
HXLINE(1521)							if ((textIndex == (previousSpaceIndex + 1))) {
HXLINE(1523)								{
HXLINE(1523)									if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1523)										ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1523)										descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            									}
            									else {
HXLINE(1523)										bool _hx_tmp;
HXDLIN(1523)										if (::hx::IsNotNull( font )) {
HXLINE(1523)											_hx_tmp = (font->unitsPerEM != 0);
            										}
            										else {
HXLINE(1523)											_hx_tmp = false;
            										}
HXDLIN(1523)										if (_hx_tmp) {
HXLINE(1523)											ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1523)											descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            										}
            										else {
HXLINE(1523)											ascent = ( (Float)(currentFormat->size) );
HXDLIN(1523)											descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            										}
            									}
HXDLIN(1523)									leading = ( (int)(currentFormat->leading) );
HXDLIN(1523)									heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1523)									if ((heightValue > maxHeightValue)) {
HXLINE(1523)										maxHeightValue = heightValue;
            									}
HXDLIN(1523)									if ((ascent > maxAscent)) {
HXLINE(1523)										maxAscent = ascent;
            									}
            								}
HXDLIN(1523)								int i = _gthis->layoutGroups->get_length();
HXDLIN(1523)								while(true){
HXLINE(1523)									i = (i - 1);
HXDLIN(1523)									if (!((i > -1))) {
HXLINE(1523)										goto _hx_goto_47;
            									}
HXDLIN(1523)									 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1523)									if ((lg->lineIndex < lineIndex)) {
HXLINE(1523)										goto _hx_goto_47;
            									}
HXDLIN(1523)									if ((lg->lineIndex > lineIndex)) {
HXLINE(1523)										continue;
            									}
HXDLIN(1523)									lg->ascent = maxAscent;
HXDLIN(1523)									lg->height = ( (Float)(maxHeightValue) );
            								}
            								_hx_goto_47:;
HXDLIN(1523)								offsetY = (offsetY + maxHeightValue);
HXDLIN(1523)								maxAscent = ((Float)0.0);
HXDLIN(1523)								maxHeightValue = 0;
HXDLIN(1523)								lineIndex = (lineIndex + 1);
HXDLIN(1523)								offsetX = ( (Float)(0) );
HXDLIN(1523)								firstLineOfParagraph = false;
            							}
HXLINE(1526)							offsetX = ( (Float)(0) );
HXLINE(1528)							if ((offsetCount > 0)) {
HXLINE(1530)								::Dynamic this1 = this->layoutGroups;
HXDLIN(1530)								Float bumpX = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - offsetCount)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->offsetX;
HXLINE(1532)								{
HXLINE(1532)									int _g = (this->layoutGroups->get_length() - offsetCount);
HXDLIN(1532)									int _g1 = this->layoutGroups->get_length();
HXDLIN(1532)									while((_g < _g1)){
HXLINE(1532)										_g = (_g + 1);
HXDLIN(1532)										int i = (_g - 1);
HXLINE(1534)										layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1535)										 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1535)										layoutGroup1->offsetX = (layoutGroup1->offsetX - bumpX);
HXLINE(1536)										layoutGroup->offsetY = (offsetY + 2);
HXLINE(1537)										layoutGroup->lineIndex = lineIndex;
HXLINE(1538)										offsetX = (offsetX + layoutGroup->width);
            									}
            								}
            							}
HXLINE(1542)							{
HXLINE(1542)								bool _hx_tmp1;
HXDLIN(1542)								if ((_gthis->width >= 4)) {
HXLINE(1542)									_hx_tmp1 = _gthis->wordWrap;
            								}
            								else {
HXLINE(1542)									_hx_tmp1 = false;
            								}
HXDLIN(1542)								if (_hx_tmp1) {
HXLINE(1542)									::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1542)									int bufferCount;
HXDLIN(1542)									int placeIndex;
HXDLIN(1542)									Float positionWidth;
HXDLIN(1542)									 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1542)									Float width = ((Float)0.0);
HXDLIN(1542)									{
HXLINE(1542)										int _g = 0;
HXDLIN(1542)										while((_g < remainingPositions->length)){
HXLINE(1542)											 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)											_g = (_g + 1);
HXDLIN(1542)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1542)									Float tempWidth = width;
HXDLIN(1542)									int i = (remainingPositions->length - 1);
HXDLIN(1542)									while((i >= 0)){
HXLINE(1542)										 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1542)										bool _hx_tmp;
HXDLIN(1542)										if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1542)											_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            										}
            										else {
HXLINE(1542)											_hx_tmp = false;
            										}
HXDLIN(1542)										if (_hx_tmp) {
HXLINE(1542)											goto _hx_goto_50;
            										}
HXDLIN(1542)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)										tempWidth = (tempWidth - position->advance->x);
HXDLIN(1542)										i = (i - 1);
            									}
            									_hx_goto_50:;
HXDLIN(1542)									while(true){
HXLINE(1542)										bool _hx_tmp;
HXDLIN(1542)										if ((remainingPositions->length > 0)) {
HXLINE(1542)											int _hx_tmp1;
HXDLIN(1542)											if (firstLineOfParagraph) {
HXLINE(1542)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1542)												_hx_tmp1 = 0;
            											}
HXDLIN(1542)											_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1542)											_hx_tmp = false;
            										}
HXDLIN(1542)										if (!(_hx_tmp)) {
HXLINE(1542)											goto _hx_goto_51;
            										}
HXDLIN(1542)										bufferCount = 0;
HXDLIN(1542)										i = bufferCount;
HXDLIN(1542)										positionWidth = ((Float)0.0);
HXDLIN(1542)										while(true){
HXLINE(1542)											int _hx_tmp;
HXDLIN(1542)											if (firstLineOfParagraph) {
HXLINE(1542)												_hx_tmp = indent;
            											}
            											else {
HXLINE(1542)												_hx_tmp = 0;
            											}
HXDLIN(1542)											if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1542)												goto _hx_goto_52;
            											}
HXDLIN(1542)											currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)											if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1542)												i = (i + 1);
HXDLIN(1542)												bufferCount = (bufferCount + 1);
            											}
            											else {
HXLINE(1542)												positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1542)												i = (i + 1);
            											}
            										}
            										_hx_goto_52:;
HXDLIN(1542)										if ((i == bufferCount)) {
HXLINE(1542)											i = (bufferCount + 1);
            										}
            										else {
HXLINE(1542)											while(true){
HXLINE(1542)												bool _hx_tmp;
HXDLIN(1542)												if ((i > 1)) {
HXLINE(1542)													int _hx_tmp1;
HXDLIN(1542)													if (firstLineOfParagraph) {
HXLINE(1542)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1542)														_hx_tmp1 = 0;
            													}
HXDLIN(1542)													_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1542)													_hx_tmp = false;
            												}
HXDLIN(1542)												if (!(_hx_tmp)) {
HXLINE(1542)													goto _hx_goto_53;
            												}
HXDLIN(1542)												i = (i - 1);
HXDLIN(1542)												if (((i - bufferCount) > 0)) {
HXLINE(1542)													{
HXLINE(1542)														int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1542)														if ((textIndex >= endIndex)) {
HXLINE(1542)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1542)															if ((endIndex <= formatRange->end)) {
HXLINE(1542)																::String text = _gthis->text;
HXDLIN(1542)																Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1542)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																bool positions1;
HXDLIN(1542)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1542)																	positions1 = true;
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1542)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1542)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1542)																Float width = ((Float)0.0);
HXDLIN(1542)																{
HXLINE(1542)																	int _g = 0;
HXDLIN(1542)																	while((_g < positions->length)){
HXLINE(1542)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																		_g = (_g + 1);
HXDLIN(1542)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1542)																widthValue = width;
            															}
            															else {
HXLINE(1542)																int tempIndex = textIndex;
HXDLIN(1542)																int tempRangeEnd = formatRange->end;
HXDLIN(1542)																int countRanges = 0;
HXDLIN(1542)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)																widthValue = ( (Float)(0) );
HXDLIN(1542)																while(true){
HXLINE(1542)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1542)																		::String text = _gthis->text;
HXDLIN(1542)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1542)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																		bool _hx_tmp;
HXDLIN(1542)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1542)																			_hx_tmp = true;
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1542)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1542)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1542)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1542)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1542)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1542)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1542)																		bool _hx_tmp;
HXDLIN(1542)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1542)																			_hx_tmp = false;
            																		}
HXDLIN(1542)																		if (!(_hx_tmp)) {
HXLINE(1542)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)																			goto _hx_goto_55;
            																		}
HXDLIN(1542)																		tempIndex = tempRangeEnd;
HXDLIN(1542)																		if ((endIndex < formatRange->end)) {
HXLINE(1542)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1542)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1542)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1542)																		Float width = ((Float)0.0);
HXDLIN(1542)																		{
HXLINE(1542)																			int _g = 0;
HXDLIN(1542)																			while((_g < positions->length)){
HXLINE(1542)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																				_g = (_g + 1);
HXDLIN(1542)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1542)																		widthValue = width;
HXDLIN(1542)																		goto _hx_goto_55;
            																	}
            																}
            																_hx_goto_55:;
HXDLIN(1542)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1542)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1542)													positionWidth = widthValue;
            												}
            												else {
HXLINE(1542)													i = 1;
HXDLIN(1542)													bufferCount = 0;
HXDLIN(1542)													{
HXLINE(1542)														int endIndex = (textIndex + 1);
HXDLIN(1542)														if ((textIndex >= endIndex)) {
HXLINE(1542)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1542)															if ((endIndex <= formatRange->end)) {
HXLINE(1542)																::String text = _gthis->text;
HXDLIN(1542)																Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1542)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																bool positions1;
HXDLIN(1542)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1542)																	positions1 = true;
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1542)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1542)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1542)																Float width = ((Float)0.0);
HXDLIN(1542)																{
HXLINE(1542)																	int _g = 0;
HXDLIN(1542)																	while((_g < positions->length)){
HXLINE(1542)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																		_g = (_g + 1);
HXDLIN(1542)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1542)																widthValue = width;
            															}
            															else {
HXLINE(1542)																int tempIndex = textIndex;
HXDLIN(1542)																int tempRangeEnd = formatRange->end;
HXDLIN(1542)																int countRanges = 0;
HXDLIN(1542)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)																widthValue = ( (Float)(0) );
HXDLIN(1542)																while(true){
HXLINE(1542)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1542)																		::String text = _gthis->text;
HXDLIN(1542)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1542)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																		bool _hx_tmp;
HXDLIN(1542)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1542)																			_hx_tmp = true;
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1542)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1542)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1542)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1542)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1542)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1542)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1542)																		bool _hx_tmp;
HXDLIN(1542)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1542)																			_hx_tmp = false;
            																		}
HXDLIN(1542)																		if (!(_hx_tmp)) {
HXLINE(1542)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)																			goto _hx_goto_58;
            																		}
HXDLIN(1542)																		tempIndex = tempRangeEnd;
HXDLIN(1542)																		if ((endIndex < formatRange->end)) {
HXLINE(1542)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1542)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1542)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1542)																		Float width = ((Float)0.0);
HXDLIN(1542)																		{
HXLINE(1542)																			int _g = 0;
HXDLIN(1542)																			while((_g < positions->length)){
HXLINE(1542)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																				_g = (_g + 1);
HXDLIN(1542)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1542)																		widthValue = width;
HXDLIN(1542)																		goto _hx_goto_58;
            																	}
            																}
            																_hx_goto_58:;
HXDLIN(1542)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1542)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1542)													positionWidth = ( (Float)(0) );
            												}
            											}
            											_hx_goto_53:;
            										}
HXDLIN(1542)										placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1542)										{
HXLINE(1542)											if ((placeIndex <= formatRange->end)) {
HXLINE(1542)												::String text = _gthis->text;
HXDLIN(1542)												Float letterSpacing = ((Float)0.0);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1542)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)												bool positions1;
HXDLIN(1542)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1542)													positions1 = true;
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)												_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1542)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1542)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1542)												Float width = ((Float)0.0);
HXDLIN(1542)												{
HXLINE(1542)													int _g = 0;
HXDLIN(1542)													while((_g < positions->length)){
HXLINE(1542)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)														_g = (_g + 1);
HXDLIN(1542)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1542)												widthValue = width;
HXDLIN(1542)												bool _hx_tmp;
HXDLIN(1542)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1542)													_hx_tmp = true;
            												}
HXDLIN(1542)												if (_hx_tmp) {
HXLINE(1542)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1542)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1542)													layoutGroup->format = formatRange->format;
HXDLIN(1542)													layoutGroup->startIndex = textIndex;
HXDLIN(1542)													layoutGroup->endIndex = placeIndex;
            												}
HXDLIN(1542)												layoutGroup->positions = positions;
HXDLIN(1542)												int _hx_tmp1;
HXDLIN(1542)												if (firstLineOfParagraph) {
HXLINE(1542)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1542)													_hx_tmp1 = 0;
            												}
HXDLIN(1542)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)												layoutGroup->ascent = ascent;
HXDLIN(1542)												layoutGroup->descent = descent;
HXDLIN(1542)												layoutGroup->leading = leading;
HXDLIN(1542)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)												layoutGroup->width = widthValue;
HXDLIN(1542)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)												offsetX = (offsetX + widthValue);
HXDLIN(1542)												if ((placeIndex == formatRange->end)) {
HXLINE(1542)													layoutGroup = null();
HXDLIN(1542)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)														rangeIndex = (rangeIndex + 1);
HXDLIN(1542)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1542)													{
HXLINE(1542)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1542)															bool _hx_tmp;
HXDLIN(1542)															if (::hx::IsNotNull( font )) {
HXLINE(1542)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1542)																_hx_tmp = false;
            															}
HXDLIN(1542)															if (_hx_tmp) {
HXLINE(1542)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1542)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1542)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)														if ((heightValue > maxHeightValue)) {
HXLINE(1542)															maxHeightValue = heightValue;
            														}
HXDLIN(1542)														if ((ascent > maxAscent)) {
HXLINE(1542)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1542)												while(true){
HXLINE(1542)													int tempRangeEnd;
HXDLIN(1542)													if ((placeIndex < formatRange->end)) {
HXLINE(1542)														tempRangeEnd = placeIndex;
            													}
            													else {
HXLINE(1542)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1542)													if ((textIndex != tempRangeEnd)) {
HXLINE(1542)														::String text = _gthis->text;
HXDLIN(1542)														Float letterSpacing = ((Float)0.0);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1542)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)														bool positions1;
HXDLIN(1542)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1542)															positions1 = true;
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1542)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1542)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1542)														Float width = ((Float)0.0);
HXDLIN(1542)														{
HXLINE(1542)															int _g = 0;
HXDLIN(1542)															while((_g < positions->length)){
HXLINE(1542)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																_g = (_g + 1);
HXDLIN(1542)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1542)														widthValue = width;
HXDLIN(1542)														bool _hx_tmp;
HXDLIN(1542)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1542)															_hx_tmp = true;
            														}
HXDLIN(1542)														if (_hx_tmp) {
HXLINE(1542)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1542)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1542)															layoutGroup->format = formatRange->format;
HXDLIN(1542)															layoutGroup->startIndex = textIndex;
HXDLIN(1542)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1542)														layoutGroup->positions = positions;
HXDLIN(1542)														int _hx_tmp1;
HXDLIN(1542)														if (firstLineOfParagraph) {
HXLINE(1542)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1542)															_hx_tmp1 = 0;
            														}
HXDLIN(1542)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)														layoutGroup->ascent = ascent;
HXDLIN(1542)														layoutGroup->descent = descent;
HXDLIN(1542)														layoutGroup->leading = leading;
HXDLIN(1542)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)														layoutGroup->width = widthValue;
HXDLIN(1542)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)														offsetX = (offsetX + widthValue);
HXDLIN(1542)														textIndex = tempRangeEnd;
            													}
HXDLIN(1542)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1542)														layoutGroup = null();
            													}
HXDLIN(1542)													if ((tempRangeEnd == placeIndex)) {
HXLINE(1542)														goto _hx_goto_61;
            													}
HXDLIN(1542)													bool _hx_tmp;
HXDLIN(1542)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)														rangeIndex = (rangeIndex + 1);
HXDLIN(1542)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)														_hx_tmp = true;
            													}
            													else {
HXLINE(1542)														_hx_tmp = false;
            													}
HXDLIN(1542)													if (!(_hx_tmp)) {
HXLINE(1542)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)														goto _hx_goto_61;
            													}
HXDLIN(1542)													{
HXLINE(1542)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1542)															bool _hx_tmp;
HXDLIN(1542)															if (::hx::IsNotNull( font )) {
HXLINE(1542)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1542)																_hx_tmp = false;
            															}
HXDLIN(1542)															if (_hx_tmp) {
HXLINE(1542)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1542)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1542)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)														if ((heightValue > maxHeightValue)) {
HXLINE(1542)															maxHeightValue = heightValue;
            														}
HXDLIN(1542)														if ((ascent > maxAscent)) {
HXLINE(1542)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_61:;
            											}
HXDLIN(1542)											textIndex = placeIndex;
            										}
HXDLIN(1542)										{
HXLINE(1542)											{
HXLINE(1542)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1542)													bool _hx_tmp;
HXDLIN(1542)													if (::hx::IsNotNull( font )) {
HXLINE(1542)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1542)														_hx_tmp = false;
            													}
HXDLIN(1542)													if (_hx_tmp) {
HXLINE(1542)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1542)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1542)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)												if ((heightValue > maxHeightValue)) {
HXLINE(1542)													maxHeightValue = heightValue;
            												}
HXDLIN(1542)												if ((ascent > maxAscent)) {
HXLINE(1542)													maxAscent = ascent;
            												}
            											}
HXDLIN(1542)											int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1542)											while(true){
HXLINE(1542)												i1 = (i1 - 1);
HXDLIN(1542)												if (!((i1 > -1))) {
HXLINE(1542)													goto _hx_goto_63;
            												}
HXDLIN(1542)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1542)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1542)													goto _hx_goto_63;
            												}
HXDLIN(1542)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1542)													continue;
            												}
HXDLIN(1542)												lg->ascent = maxAscent;
HXDLIN(1542)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_63:;
HXDLIN(1542)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1542)											maxAscent = ((Float)0.0);
HXDLIN(1542)											maxHeightValue = 0;
HXDLIN(1542)											lineIndex = (lineIndex + 1);
HXDLIN(1542)											offsetX = ( (Float)(0) );
HXDLIN(1542)											firstLineOfParagraph = false;
            										}
HXDLIN(1542)										if ((placeIndex >= endIndex)) {
HXLINE(1542)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)											widthValue = ( (Float)(0) );
            										}
            										else {
HXLINE(1542)											if ((endIndex <= formatRange->end)) {
HXLINE(1542)												::String text = _gthis->text;
HXDLIN(1542)												Float letterSpacing = ((Float)0.0);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1542)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)												bool positions1;
HXDLIN(1542)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1542)													positions1 = true;
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)												_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1542)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1542)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1542)												Float width = ((Float)0.0);
HXDLIN(1542)												{
HXLINE(1542)													int _g = 0;
HXDLIN(1542)													while((_g < positions->length)){
HXLINE(1542)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)														_g = (_g + 1);
HXDLIN(1542)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1542)												widthValue = width;
            											}
            											else {
HXLINE(1542)												int tempIndex = placeIndex;
HXDLIN(1542)												int tempRangeEnd = formatRange->end;
HXDLIN(1542)												int countRanges = 0;
HXDLIN(1542)												positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)												widthValue = ( (Float)(0) );
HXDLIN(1542)												while(true){
HXLINE(1542)													if ((tempIndex != tempRangeEnd)) {
HXLINE(1542)														::String text = _gthis->text;
HXDLIN(1542)														Float letterSpacing = ((Float)0.0);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1542)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)														bool _hx_tmp;
HXDLIN(1542)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)															_hx_tmp = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1542)															_hx_tmp = true;
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1542)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)														_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1542)														::Array< ::Dynamic> tempPositions;
HXDLIN(1542)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)															tempPositions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1542)															tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1542)														positions = positions->concat(tempPositions);
            													}
HXDLIN(1542)													if ((tempRangeEnd != endIndex)) {
HXLINE(1542)														bool _hx_tmp;
HXDLIN(1542)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)															rangeIndex = (rangeIndex + 1);
HXDLIN(1542)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)															_hx_tmp = true;
            														}
            														else {
HXLINE(1542)															_hx_tmp = false;
            														}
HXDLIN(1542)														if (!(_hx_tmp)) {
HXLINE(1542)															::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)															goto _hx_goto_65;
            														}
HXDLIN(1542)														tempIndex = tempRangeEnd;
HXDLIN(1542)														if ((endIndex < formatRange->end)) {
HXLINE(1542)															tempRangeEnd = endIndex;
            														}
            														else {
HXLINE(1542)															tempRangeEnd = formatRange->end;
            														}
HXDLIN(1542)														countRanges = (countRanges + 1);
            													}
            													else {
HXLINE(1542)														Float width = ((Float)0.0);
HXDLIN(1542)														{
HXLINE(1542)															int _g = 0;
HXDLIN(1542)															while((_g < positions->length)){
HXLINE(1542)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																_g = (_g + 1);
HXDLIN(1542)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1542)														widthValue = width;
HXDLIN(1542)														goto _hx_goto_65;
            													}
            												}
            												_hx_goto_65:;
HXDLIN(1542)												rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1542)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)													rangeIndex = (rangeIndex + 1);
HXDLIN(1542)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
            											}
            										}
HXDLIN(1542)										remainingPositions = positions;
HXDLIN(1542)										tempWidth = widthValue;
            									}
            									_hx_goto_51:;
            								}
HXDLIN(1542)								{
HXLINE(1542)									if ((endIndex <= formatRange->end)) {
HXLINE(1542)										::String text = _gthis->text;
HXDLIN(1542)										Float letterSpacing = ((Float)0.0);
HXDLIN(1542)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1542)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1542)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1542)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)										bool positions1;
HXDLIN(1542)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1542)											positions1 = true;
            										}
HXDLIN(1542)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)										_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1542)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1542)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1542)										Float width = ((Float)0.0);
HXDLIN(1542)										{
HXLINE(1542)											int _g = 0;
HXDLIN(1542)											while((_g < positions->length)){
HXLINE(1542)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)												_g = (_g + 1);
HXDLIN(1542)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1542)										widthValue = width;
HXDLIN(1542)										bool _hx_tmp;
HXDLIN(1542)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1542)											_hx_tmp = true;
            										}
HXDLIN(1542)										if (_hx_tmp) {
HXLINE(1542)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1542)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1542)											layoutGroup->format = formatRange->format;
HXDLIN(1542)											layoutGroup->startIndex = textIndex;
HXDLIN(1542)											layoutGroup->endIndex = endIndex;
            										}
HXDLIN(1542)										layoutGroup->positions = positions;
HXDLIN(1542)										int _hx_tmp1;
HXDLIN(1542)										if (firstLineOfParagraph) {
HXLINE(1542)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1542)											_hx_tmp1 = 0;
            										}
HXDLIN(1542)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)										layoutGroup->ascent = ascent;
HXDLIN(1542)										layoutGroup->descent = descent;
HXDLIN(1542)										layoutGroup->leading = leading;
HXDLIN(1542)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)										layoutGroup->width = widthValue;
HXDLIN(1542)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)										offsetX = (offsetX + widthValue);
HXDLIN(1542)										if ((endIndex == formatRange->end)) {
HXLINE(1542)											layoutGroup = null();
HXDLIN(1542)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)												rangeIndex = (rangeIndex + 1);
HXDLIN(1542)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1542)											{
HXLINE(1542)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1542)													bool _hx_tmp;
HXDLIN(1542)													if (::hx::IsNotNull( font )) {
HXLINE(1542)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1542)														_hx_tmp = false;
            													}
HXDLIN(1542)													if (_hx_tmp) {
HXLINE(1542)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1542)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1542)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)												if ((heightValue > maxHeightValue)) {
HXLINE(1542)													maxHeightValue = heightValue;
            												}
HXDLIN(1542)												if ((ascent > maxAscent)) {
HXLINE(1542)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1542)										while(true){
HXLINE(1542)											int tempRangeEnd;
HXDLIN(1542)											if ((endIndex < formatRange->end)) {
HXLINE(1542)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1542)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1542)											if ((textIndex != tempRangeEnd)) {
HXLINE(1542)												::String text = _gthis->text;
HXDLIN(1542)												Float letterSpacing = ((Float)0.0);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1542)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)												bool positions1;
HXDLIN(1542)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1542)													positions1 = true;
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1542)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1542)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1542)												Float width = ((Float)0.0);
HXDLIN(1542)												{
HXLINE(1542)													int _g = 0;
HXDLIN(1542)													while((_g < positions->length)){
HXLINE(1542)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)														_g = (_g + 1);
HXDLIN(1542)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1542)												widthValue = width;
HXDLIN(1542)												bool _hx_tmp;
HXDLIN(1542)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1542)													_hx_tmp = true;
            												}
HXDLIN(1542)												if (_hx_tmp) {
HXLINE(1542)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1542)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1542)													layoutGroup->format = formatRange->format;
HXDLIN(1542)													layoutGroup->startIndex = textIndex;
HXDLIN(1542)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1542)												layoutGroup->positions = positions;
HXDLIN(1542)												int _hx_tmp1;
HXDLIN(1542)												if (firstLineOfParagraph) {
HXLINE(1542)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1542)													_hx_tmp1 = 0;
            												}
HXDLIN(1542)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)												layoutGroup->ascent = ascent;
HXDLIN(1542)												layoutGroup->descent = descent;
HXDLIN(1542)												layoutGroup->leading = leading;
HXDLIN(1542)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)												layoutGroup->width = widthValue;
HXDLIN(1542)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)												offsetX = (offsetX + widthValue);
HXDLIN(1542)												textIndex = tempRangeEnd;
            											}
HXDLIN(1542)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1542)												layoutGroup = null();
            											}
HXDLIN(1542)											if ((tempRangeEnd == endIndex)) {
HXLINE(1542)												goto _hx_goto_68;
            											}
HXDLIN(1542)											bool _hx_tmp;
HXDLIN(1542)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)												rangeIndex = (rangeIndex + 1);
HXDLIN(1542)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)												_hx_tmp = true;
            											}
            											else {
HXLINE(1542)												_hx_tmp = false;
            											}
HXDLIN(1542)											if (!(_hx_tmp)) {
HXLINE(1542)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)												goto _hx_goto_68;
            											}
HXDLIN(1542)											{
HXLINE(1542)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1542)													bool _hx_tmp;
HXDLIN(1542)													if (::hx::IsNotNull( font )) {
HXLINE(1542)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1542)														_hx_tmp = false;
            													}
HXDLIN(1542)													if (_hx_tmp) {
HXLINE(1542)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1542)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1542)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)												if ((heightValue > maxHeightValue)) {
HXLINE(1542)													maxHeightValue = heightValue;
            												}
HXDLIN(1542)												if ((ascent > maxAscent)) {
HXLINE(1542)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_68:;
            									}
HXDLIN(1542)									textIndex = endIndex;
            								}
            							}
HXLINE(1544)							wrap = false;
            						}
            						else {
HXLINE(1548)							bool _hx_tmp;
HXDLIN(1548)							bool _hx_tmp1;
HXDLIN(1548)							if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1548)								_hx_tmp1 = (textIndex == spaceIndex);
            							}
            							else {
HXLINE(1548)								_hx_tmp1 = false;
            							}
HXDLIN(1548)							if (_hx_tmp1) {
HXLINE(1548)								_hx_tmp = (previousSpaceIndex != (spaceIndex - 1));
            							}
            							else {
HXLINE(1548)								_hx_tmp = false;
            							}
HXDLIN(1548)							if (_hx_tmp) {
HXLINE(1551)								if (::hx::IsNotEq( align,2 )) {
HXLINE(1553)									layoutGroup->endIndex = spaceIndex;
HXLINE(1554)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1555)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1555)									layoutGroup1->width = (layoutGroup1->width + widthValue);
            								}
HXLINE(1557)								offsetX = (offsetX + widthValue);
HXLINE(1559)								textIndex = endIndex;
            							}
            							else {
HXLINE(1561)								bool _hx_tmp;
HXDLIN(1561)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1561)									_hx_tmp = ::hx::IsEq( align,2 );
            								}
            								else {
HXLINE(1561)									_hx_tmp = true;
            								}
HXDLIN(1561)								if (_hx_tmp) {
HXLINE(1563)									{
HXLINE(1563)										bool _hx_tmp;
HXDLIN(1563)										if ((_gthis->width >= 4)) {
HXLINE(1563)											_hx_tmp = _gthis->wordWrap;
            										}
            										else {
HXLINE(1563)											_hx_tmp = false;
            										}
HXDLIN(1563)										if (_hx_tmp) {
HXLINE(1563)											::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1563)											int bufferCount;
HXDLIN(1563)											int placeIndex;
HXDLIN(1563)											Float positionWidth;
HXDLIN(1563)											 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1563)											Float width = ((Float)0.0);
HXDLIN(1563)											{
HXLINE(1563)												int _g = 0;
HXDLIN(1563)												while((_g < remainingPositions->length)){
HXLINE(1563)													 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)													_g = (_g + 1);
HXDLIN(1563)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1563)											Float tempWidth = width;
HXDLIN(1563)											int i = (remainingPositions->length - 1);
HXDLIN(1563)											while((i >= 0)){
HXLINE(1563)												 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1563)												bool _hx_tmp;
HXDLIN(1563)												if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1563)													_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            												}
            												else {
HXLINE(1563)													_hx_tmp = false;
            												}
HXDLIN(1563)												if (_hx_tmp) {
HXLINE(1563)													goto _hx_goto_71;
            												}
HXDLIN(1563)												 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)												tempWidth = (tempWidth - position->advance->x);
HXDLIN(1563)												i = (i - 1);
            											}
            											_hx_goto_71:;
HXDLIN(1563)											while(true){
HXLINE(1563)												bool _hx_tmp;
HXDLIN(1563)												if ((remainingPositions->length > 0)) {
HXLINE(1563)													int _hx_tmp1;
HXDLIN(1563)													if (firstLineOfParagraph) {
HXLINE(1563)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1563)														_hx_tmp1 = 0;
            													}
HXDLIN(1563)													_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1563)													_hx_tmp = false;
            												}
HXDLIN(1563)												if (!(_hx_tmp)) {
HXLINE(1563)													goto _hx_goto_72;
            												}
HXDLIN(1563)												bufferCount = 0;
HXDLIN(1563)												i = bufferCount;
HXDLIN(1563)												positionWidth = ((Float)0.0);
HXDLIN(1563)												while(true){
HXLINE(1563)													int _hx_tmp;
HXDLIN(1563)													if (firstLineOfParagraph) {
HXLINE(1563)														_hx_tmp = indent;
            													}
            													else {
HXLINE(1563)														_hx_tmp = 0;
            													}
HXDLIN(1563)													if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1563)														goto _hx_goto_73;
            													}
HXDLIN(1563)													currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)													if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1563)														i = (i + 1);
HXDLIN(1563)														bufferCount = (bufferCount + 1);
            													}
            													else {
HXLINE(1563)														positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1563)														i = (i + 1);
            													}
            												}
            												_hx_goto_73:;
HXDLIN(1563)												if ((i == bufferCount)) {
HXLINE(1563)													i = (bufferCount + 1);
            												}
            												else {
HXLINE(1563)													while(true){
HXLINE(1563)														bool _hx_tmp;
HXDLIN(1563)														if ((i > 1)) {
HXLINE(1563)															int _hx_tmp1;
HXDLIN(1563)															if (firstLineOfParagraph) {
HXLINE(1563)																_hx_tmp1 = indent;
            															}
            															else {
HXLINE(1563)																_hx_tmp1 = 0;
            															}
HXDLIN(1563)															_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            														}
            														else {
HXLINE(1563)															_hx_tmp = false;
            														}
HXDLIN(1563)														if (!(_hx_tmp)) {
HXLINE(1563)															goto _hx_goto_74;
            														}
HXDLIN(1563)														i = (i - 1);
HXDLIN(1563)														if (((i - bufferCount) > 0)) {
HXLINE(1563)															{
HXLINE(1563)																int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1563)																if ((textIndex >= endIndex)) {
HXLINE(1563)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1563)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1563)																	if ((endIndex <= formatRange->end)) {
HXLINE(1563)																		::String text = _gthis->text;
HXDLIN(1563)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1563)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1563)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1563)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1563)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)																		bool positions1;
HXDLIN(1563)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1563)																			positions1 = true;
            																		}
HXDLIN(1563)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1563)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1563)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1563)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1563)																		Float width = ((Float)0.0);
HXDLIN(1563)																		{
HXLINE(1563)																			int _g = 0;
HXDLIN(1563)																			while((_g < positions->length)){
HXLINE(1563)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																				_g = (_g + 1);
HXDLIN(1563)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1563)																		widthValue = width;
            																	}
            																	else {
HXLINE(1563)																		int tempIndex = textIndex;
HXDLIN(1563)																		int tempRangeEnd = formatRange->end;
HXDLIN(1563)																		int countRanges = 0;
HXDLIN(1563)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1563)																		widthValue = ( (Float)(0) );
HXDLIN(1563)																		while(true){
HXLINE(1563)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1563)																				::String text = _gthis->text;
HXDLIN(1563)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1563)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1563)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1563)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1563)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)																				bool _hx_tmp;
HXDLIN(1563)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1563)																					_hx_tmp = true;
            																				}
HXDLIN(1563)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1563)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1563)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1563)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1563)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1563)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1563)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1563)																				bool _hx_tmp;
HXDLIN(1563)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1563)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1563)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1563)																					_hx_tmp = false;
            																				}
HXDLIN(1563)																				if (!(_hx_tmp)) {
HXLINE(1563)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1563)																					goto _hx_goto_76;
            																				}
HXDLIN(1563)																				tempIndex = tempRangeEnd;
HXDLIN(1563)																				if ((endIndex < formatRange->end)) {
HXLINE(1563)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1563)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1563)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1563)																				Float width = ((Float)0.0);
HXDLIN(1563)																				{
HXLINE(1563)																					int _g = 0;
HXDLIN(1563)																					while((_g < positions->length)){
HXLINE(1563)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																						_g = (_g + 1);
HXDLIN(1563)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1563)																				widthValue = width;
HXDLIN(1563)																				goto _hx_goto_76;
            																			}
            																		}
            																		_hx_goto_76:;
HXDLIN(1563)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1563)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1563)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1563)															positionWidth = widthValue;
            														}
            														else {
HXLINE(1563)															i = 1;
HXDLIN(1563)															bufferCount = 0;
HXDLIN(1563)															{
HXLINE(1563)																int endIndex = (textIndex + 1);
HXDLIN(1563)																if ((textIndex >= endIndex)) {
HXLINE(1563)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1563)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1563)																	if ((endIndex <= formatRange->end)) {
HXLINE(1563)																		::String text = _gthis->text;
HXDLIN(1563)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1563)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1563)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1563)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1563)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)																		bool positions1;
HXDLIN(1563)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1563)																			positions1 = true;
            																		}
HXDLIN(1563)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1563)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1563)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1563)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1563)																		Float width = ((Float)0.0);
HXDLIN(1563)																		{
HXLINE(1563)																			int _g = 0;
HXDLIN(1563)																			while((_g < positions->length)){
HXLINE(1563)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																				_g = (_g + 1);
HXDLIN(1563)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1563)																		widthValue = width;
            																	}
            																	else {
HXLINE(1563)																		int tempIndex = textIndex;
HXDLIN(1563)																		int tempRangeEnd = formatRange->end;
HXDLIN(1563)																		int countRanges = 0;
HXDLIN(1563)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1563)																		widthValue = ( (Float)(0) );
HXDLIN(1563)																		while(true){
HXLINE(1563)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1563)																				::String text = _gthis->text;
HXDLIN(1563)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1563)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1563)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1563)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1563)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)																				bool _hx_tmp;
HXDLIN(1563)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1563)																					_hx_tmp = true;
            																				}
HXDLIN(1563)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1563)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1563)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1563)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1563)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1563)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1563)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1563)																				bool _hx_tmp;
HXDLIN(1563)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1563)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1563)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1563)																					_hx_tmp = false;
            																				}
HXDLIN(1563)																				if (!(_hx_tmp)) {
HXLINE(1563)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1563)																					goto _hx_goto_79;
            																				}
HXDLIN(1563)																				tempIndex = tempRangeEnd;
HXDLIN(1563)																				if ((endIndex < formatRange->end)) {
HXLINE(1563)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1563)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1563)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1563)																				Float width = ((Float)0.0);
HXDLIN(1563)																				{
HXLINE(1563)																					int _g = 0;
HXDLIN(1563)																					while((_g < positions->length)){
HXLINE(1563)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																						_g = (_g + 1);
HXDLIN(1563)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1563)																				widthValue = width;
HXDLIN(1563)																				goto _hx_goto_79;
            																			}
            																		}
            																		_hx_goto_79:;
HXDLIN(1563)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1563)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1563)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1563)															positionWidth = ( (Float)(0) );
            														}
            													}
            													_hx_goto_74:;
            												}
HXDLIN(1563)												placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1563)												{
HXLINE(1563)													if ((placeIndex <= formatRange->end)) {
HXLINE(1563)														::String text = _gthis->text;
HXDLIN(1563)														Float letterSpacing = ((Float)0.0);
HXDLIN(1563)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1563)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)														bool positions1;
HXDLIN(1563)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1563)															positions1 = true;
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1563)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)														_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1563)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1563)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1563)														Float width = ((Float)0.0);
HXDLIN(1563)														{
HXLINE(1563)															int _g = 0;
HXDLIN(1563)															while((_g < positions->length)){
HXLINE(1563)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																_g = (_g + 1);
HXDLIN(1563)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1563)														widthValue = width;
HXDLIN(1563)														bool _hx_tmp;
HXDLIN(1563)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1563)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1563)															_hx_tmp = true;
            														}
HXDLIN(1563)														if (_hx_tmp) {
HXLINE(1563)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1563)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1563)															layoutGroup->format = formatRange->format;
HXDLIN(1563)															layoutGroup->startIndex = textIndex;
HXDLIN(1563)															layoutGroup->endIndex = placeIndex;
            														}
HXDLIN(1563)														layoutGroup->positions = positions;
HXDLIN(1563)														int _hx_tmp1;
HXDLIN(1563)														if (firstLineOfParagraph) {
HXLINE(1563)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1563)															_hx_tmp1 = 0;
            														}
HXDLIN(1563)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1563)														layoutGroup->ascent = ascent;
HXDLIN(1563)														layoutGroup->descent = descent;
HXDLIN(1563)														layoutGroup->leading = leading;
HXDLIN(1563)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1563)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1563)														layoutGroup->width = widthValue;
HXDLIN(1563)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1563)														offsetX = (offsetX + widthValue);
HXDLIN(1563)														if ((placeIndex == formatRange->end)) {
HXLINE(1563)															layoutGroup = null();
HXDLIN(1563)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)																rangeIndex = (rangeIndex + 1);
HXDLIN(1563)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
HXDLIN(1563)															{
HXLINE(1563)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1563)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1563)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1563)																	bool _hx_tmp;
HXDLIN(1563)																	if (::hx::IsNotNull( font )) {
HXLINE(1563)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1563)																		_hx_tmp = false;
            																	}
HXDLIN(1563)																	if (_hx_tmp) {
HXLINE(1563)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1563)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1563)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1563)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1563)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1563)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1563)																if ((heightValue > maxHeightValue)) {
HXLINE(1563)																	maxHeightValue = heightValue;
            																}
HXDLIN(1563)																if ((ascent > maxAscent)) {
HXLINE(1563)																	maxAscent = ascent;
            																}
            															}
            														}
            													}
            													else {
HXLINE(1563)														while(true){
HXLINE(1563)															int tempRangeEnd;
HXDLIN(1563)															if ((placeIndex < formatRange->end)) {
HXLINE(1563)																tempRangeEnd = placeIndex;
            															}
            															else {
HXLINE(1563)																tempRangeEnd = formatRange->end;
            															}
HXDLIN(1563)															if ((textIndex != tempRangeEnd)) {
HXLINE(1563)																::String text = _gthis->text;
HXDLIN(1563)																Float letterSpacing = ((Float)0.0);
HXDLIN(1563)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1563)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1563)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1563)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)																bool positions1;
HXDLIN(1563)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1563)																	positions1 = true;
            																}
HXDLIN(1563)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1563)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)																_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1563)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1563)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1563)																Float width = ((Float)0.0);
HXDLIN(1563)																{
HXLINE(1563)																	int _g = 0;
HXDLIN(1563)																	while((_g < positions->length)){
HXLINE(1563)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																		_g = (_g + 1);
HXDLIN(1563)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1563)																widthValue = width;
HXDLIN(1563)																bool _hx_tmp;
HXDLIN(1563)																if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1563)																	_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            																}
            																else {
HXLINE(1563)																	_hx_tmp = true;
            																}
HXDLIN(1563)																if (_hx_tmp) {
HXLINE(1563)																	layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1563)																	_gthis->layoutGroups->push(layoutGroup);
            																}
            																else {
HXLINE(1563)																	layoutGroup->format = formatRange->format;
HXDLIN(1563)																	layoutGroup->startIndex = textIndex;
HXDLIN(1563)																	layoutGroup->endIndex = tempRangeEnd;
            																}
HXDLIN(1563)																layoutGroup->positions = positions;
HXDLIN(1563)																int _hx_tmp1;
HXDLIN(1563)																if (firstLineOfParagraph) {
HXLINE(1563)																	_hx_tmp1 = indent;
            																}
            																else {
HXLINE(1563)																	_hx_tmp1 = 0;
            																}
HXDLIN(1563)																layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1563)																layoutGroup->ascent = ascent;
HXDLIN(1563)																layoutGroup->descent = descent;
HXDLIN(1563)																layoutGroup->leading = leading;
HXDLIN(1563)																layoutGroup->lineIndex = lineIndex;
HXDLIN(1563)																layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1563)																layoutGroup->width = widthValue;
HXDLIN(1563)																layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1563)																offsetX = (offsetX + widthValue);
HXDLIN(1563)																textIndex = tempRangeEnd;
            															}
HXDLIN(1563)															if ((tempRangeEnd == formatRange->end)) {
HXLINE(1563)																layoutGroup = null();
            															}
HXDLIN(1563)															if ((tempRangeEnd == placeIndex)) {
HXLINE(1563)																goto _hx_goto_82;
            															}
HXDLIN(1563)															bool _hx_tmp;
HXDLIN(1563)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)																rangeIndex = (rangeIndex + 1);
HXDLIN(1563)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1563)																_hx_tmp = true;
            															}
            															else {
HXLINE(1563)																_hx_tmp = false;
            															}
HXDLIN(1563)															if (!(_hx_tmp)) {
HXLINE(1563)																::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1563)																goto _hx_goto_82;
            															}
HXDLIN(1563)															{
HXLINE(1563)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1563)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1563)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1563)																	bool _hx_tmp;
HXDLIN(1563)																	if (::hx::IsNotNull( font )) {
HXLINE(1563)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1563)																		_hx_tmp = false;
            																	}
HXDLIN(1563)																	if (_hx_tmp) {
HXLINE(1563)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1563)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1563)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1563)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1563)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1563)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1563)																if ((heightValue > maxHeightValue)) {
HXLINE(1563)																	maxHeightValue = heightValue;
            																}
HXDLIN(1563)																if ((ascent > maxAscent)) {
HXLINE(1563)																	maxAscent = ascent;
            																}
            															}
            														}
            														_hx_goto_82:;
            													}
HXDLIN(1563)													textIndex = placeIndex;
            												}
HXDLIN(1563)												{
HXLINE(1563)													{
HXLINE(1563)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1563)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1563)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1563)															bool _hx_tmp;
HXDLIN(1563)															if (::hx::IsNotNull( font )) {
HXLINE(1563)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1563)																_hx_tmp = false;
            															}
HXDLIN(1563)															if (_hx_tmp) {
HXLINE(1563)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1563)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1563)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1563)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1563)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1563)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1563)														if ((heightValue > maxHeightValue)) {
HXLINE(1563)															maxHeightValue = heightValue;
            														}
HXDLIN(1563)														if ((ascent > maxAscent)) {
HXLINE(1563)															maxAscent = ascent;
            														}
            													}
HXDLIN(1563)													int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1563)													while(true){
HXLINE(1563)														i1 = (i1 - 1);
HXDLIN(1563)														if (!((i1 > -1))) {
HXLINE(1563)															goto _hx_goto_84;
            														}
HXDLIN(1563)														 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1563)														if ((lg->lineIndex < lineIndex)) {
HXLINE(1563)															goto _hx_goto_84;
            														}
HXDLIN(1563)														if ((lg->lineIndex > lineIndex)) {
HXLINE(1563)															continue;
            														}
HXDLIN(1563)														lg->ascent = maxAscent;
HXDLIN(1563)														lg->height = ( (Float)(maxHeightValue) );
            													}
            													_hx_goto_84:;
HXDLIN(1563)													offsetY = (offsetY + maxHeightValue);
HXDLIN(1563)													maxAscent = ((Float)0.0);
HXDLIN(1563)													maxHeightValue = 0;
HXDLIN(1563)													lineIndex = (lineIndex + 1);
HXDLIN(1563)													offsetX = ( (Float)(0) );
HXDLIN(1563)													firstLineOfParagraph = false;
            												}
HXDLIN(1563)												if ((placeIndex >= endIndex)) {
HXLINE(1563)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1563)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1563)													if ((endIndex <= formatRange->end)) {
HXLINE(1563)														::String text = _gthis->text;
HXDLIN(1563)														Float letterSpacing = ((Float)0.0);
HXDLIN(1563)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1563)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)														bool positions1;
HXDLIN(1563)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1563)															positions1 = true;
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1563)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)														_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1563)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1563)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1563)														Float width = ((Float)0.0);
HXDLIN(1563)														{
HXLINE(1563)															int _g = 0;
HXDLIN(1563)															while((_g < positions->length)){
HXLINE(1563)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																_g = (_g + 1);
HXDLIN(1563)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1563)														widthValue = width;
            													}
            													else {
HXLINE(1563)														int tempIndex = placeIndex;
HXDLIN(1563)														int tempRangeEnd = formatRange->end;
HXDLIN(1563)														int countRanges = 0;
HXDLIN(1563)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1563)														widthValue = ( (Float)(0) );
HXDLIN(1563)														while(true){
HXLINE(1563)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1563)																::String text = _gthis->text;
HXDLIN(1563)																Float letterSpacing = ((Float)0.0);
HXDLIN(1563)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1563)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1563)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1563)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)																bool _hx_tmp;
HXDLIN(1563)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1563)																	_hx_tmp = true;
            																}
HXDLIN(1563)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1563)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1563)																::Array< ::Dynamic> tempPositions;
HXDLIN(1563)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1563)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1563)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1563)															if ((tempRangeEnd != endIndex)) {
HXLINE(1563)																bool _hx_tmp;
HXDLIN(1563)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1563)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1563)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1563)																	_hx_tmp = false;
            																}
HXDLIN(1563)																if (!(_hx_tmp)) {
HXLINE(1563)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1563)																	goto _hx_goto_86;
            																}
HXDLIN(1563)																tempIndex = tempRangeEnd;
HXDLIN(1563)																if ((endIndex < formatRange->end)) {
HXLINE(1563)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1563)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1563)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1563)																Float width = ((Float)0.0);
HXDLIN(1563)																{
HXLINE(1563)																	int _g = 0;
HXDLIN(1563)																	while((_g < positions->length)){
HXLINE(1563)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																		_g = (_g + 1);
HXDLIN(1563)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1563)																widthValue = width;
HXDLIN(1563)																goto _hx_goto_86;
            															}
            														}
            														_hx_goto_86:;
HXDLIN(1563)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1563)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)															rangeIndex = (rangeIndex + 1);
HXDLIN(1563)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
HXDLIN(1563)												remainingPositions = positions;
HXDLIN(1563)												tempWidth = widthValue;
            											}
            											_hx_goto_72:;
            										}
HXDLIN(1563)										{
HXLINE(1563)											if ((endIndex <= formatRange->end)) {
HXLINE(1563)												::String text = _gthis->text;
HXDLIN(1563)												Float letterSpacing = ((Float)0.0);
HXDLIN(1563)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1563)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1563)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1563)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)												bool positions1;
HXDLIN(1563)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1563)													positions1 = true;
            												}
HXDLIN(1563)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1563)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1563)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1563)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1563)												Float width = ((Float)0.0);
HXDLIN(1563)												{
HXLINE(1563)													int _g = 0;
HXDLIN(1563)													while((_g < positions->length)){
HXLINE(1563)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)														_g = (_g + 1);
HXDLIN(1563)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1563)												widthValue = width;
HXDLIN(1563)												bool _hx_tmp;
HXDLIN(1563)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1563)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1563)													_hx_tmp = true;
            												}
HXDLIN(1563)												if (_hx_tmp) {
HXLINE(1563)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1563)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1563)													layoutGroup->format = formatRange->format;
HXDLIN(1563)													layoutGroup->startIndex = textIndex;
HXDLIN(1563)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1563)												layoutGroup->positions = positions;
HXDLIN(1563)												int _hx_tmp1;
HXDLIN(1563)												if (firstLineOfParagraph) {
HXLINE(1563)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1563)													_hx_tmp1 = 0;
            												}
HXDLIN(1563)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1563)												layoutGroup->ascent = ascent;
HXDLIN(1563)												layoutGroup->descent = descent;
HXDLIN(1563)												layoutGroup->leading = leading;
HXDLIN(1563)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1563)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1563)												layoutGroup->width = widthValue;
HXDLIN(1563)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1563)												offsetX = (offsetX + widthValue);
HXDLIN(1563)												if ((endIndex == formatRange->end)) {
HXLINE(1563)													layoutGroup = null();
HXDLIN(1563)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)														rangeIndex = (rangeIndex + 1);
HXDLIN(1563)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1563)													{
HXLINE(1563)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1563)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1563)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1563)															bool _hx_tmp;
HXDLIN(1563)															if (::hx::IsNotNull( font )) {
HXLINE(1563)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1563)																_hx_tmp = false;
            															}
HXDLIN(1563)															if (_hx_tmp) {
HXLINE(1563)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1563)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1563)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1563)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1563)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1563)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1563)														if ((heightValue > maxHeightValue)) {
HXLINE(1563)															maxHeightValue = heightValue;
            														}
HXDLIN(1563)														if ((ascent > maxAscent)) {
HXLINE(1563)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1563)												while(true){
HXLINE(1563)													int tempRangeEnd;
HXDLIN(1563)													if ((endIndex < formatRange->end)) {
HXLINE(1563)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1563)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1563)													if ((textIndex != tempRangeEnd)) {
HXLINE(1563)														::String text = _gthis->text;
HXDLIN(1563)														Float letterSpacing = ((Float)0.0);
HXDLIN(1563)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1563)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1563)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1563)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1563)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1563)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1563)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1563)														bool positions1;
HXDLIN(1563)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1563)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1563)															positions1 = true;
            														}
HXDLIN(1563)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1563)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1563)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1563)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1563)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1563)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1563)														Float width = ((Float)0.0);
HXDLIN(1563)														{
HXLINE(1563)															int _g = 0;
HXDLIN(1563)															while((_g < positions->length)){
HXLINE(1563)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1563)																_g = (_g + 1);
HXDLIN(1563)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1563)														widthValue = width;
HXDLIN(1563)														bool _hx_tmp;
HXDLIN(1563)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1563)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1563)															_hx_tmp = true;
            														}
HXDLIN(1563)														if (_hx_tmp) {
HXLINE(1563)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1563)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1563)															layoutGroup->format = formatRange->format;
HXDLIN(1563)															layoutGroup->startIndex = textIndex;
HXDLIN(1563)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1563)														layoutGroup->positions = positions;
HXDLIN(1563)														int _hx_tmp1;
HXDLIN(1563)														if (firstLineOfParagraph) {
HXLINE(1563)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1563)															_hx_tmp1 = 0;
            														}
HXDLIN(1563)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1563)														layoutGroup->ascent = ascent;
HXDLIN(1563)														layoutGroup->descent = descent;
HXDLIN(1563)														layoutGroup->leading = leading;
HXDLIN(1563)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1563)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1563)														layoutGroup->width = widthValue;
HXDLIN(1563)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1563)														offsetX = (offsetX + widthValue);
HXDLIN(1563)														textIndex = tempRangeEnd;
            													}
HXDLIN(1563)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1563)														layoutGroup = null();
            													}
HXDLIN(1563)													if ((tempRangeEnd == endIndex)) {
HXLINE(1563)														goto _hx_goto_89;
            													}
HXDLIN(1563)													bool _hx_tmp;
HXDLIN(1563)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1563)														rangeIndex = (rangeIndex + 1);
HXDLIN(1563)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1563)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1563)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1563)														_hx_tmp = true;
            													}
            													else {
HXLINE(1563)														_hx_tmp = false;
            													}
HXDLIN(1563)													if (!(_hx_tmp)) {
HXLINE(1563)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1563)														goto _hx_goto_89;
            													}
HXDLIN(1563)													{
HXLINE(1563)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1563)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1563)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1563)															bool _hx_tmp;
HXDLIN(1563)															if (::hx::IsNotNull( font )) {
HXLINE(1563)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1563)																_hx_tmp = false;
            															}
HXDLIN(1563)															if (_hx_tmp) {
HXLINE(1563)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1563)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1563)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1563)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1563)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1563)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1563)														if ((heightValue > maxHeightValue)) {
HXLINE(1563)															maxHeightValue = heightValue;
            														}
HXDLIN(1563)														if ((ascent > maxAscent)) {
HXLINE(1563)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_89:;
            											}
HXDLIN(1563)											textIndex = endIndex;
            										}
            									}
HXLINE(1564)									if ((endIndex == this->text.length)) {
HXLINE(1564)										{
HXLINE(1564)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1564)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1564)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1564)												bool _hx_tmp;
HXDLIN(1564)												if (::hx::IsNotNull( font )) {
HXLINE(1564)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1564)													_hx_tmp = false;
            												}
HXDLIN(1564)												if (_hx_tmp) {
HXLINE(1564)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1564)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1564)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1564)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1564)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1564)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1564)											if ((heightValue > maxHeightValue)) {
HXLINE(1564)												maxHeightValue = heightValue;
            											}
HXDLIN(1564)											if ((ascent > maxAscent)) {
HXLINE(1564)												maxAscent = ascent;
            											}
            										}
HXDLIN(1564)										int i = _gthis->layoutGroups->get_length();
HXDLIN(1564)										while(true){
HXLINE(1564)											i = (i - 1);
HXDLIN(1564)											if (!((i > -1))) {
HXLINE(1564)												goto _hx_goto_91;
            											}
HXDLIN(1564)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1564)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1564)												goto _hx_goto_91;
            											}
HXDLIN(1564)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1564)												continue;
            											}
HXDLIN(1564)											lg->ascent = maxAscent;
HXDLIN(1564)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_91:;
HXDLIN(1564)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1564)										maxAscent = ((Float)0.0);
HXDLIN(1564)										maxHeightValue = 0;
HXDLIN(1564)										lineIndex = (lineIndex + 1);
HXDLIN(1564)										offsetX = ( (Float)(0) );
HXDLIN(1564)										firstLineOfParagraph = false;
            									}
            								}
            								else {
HXLINE(1568)									int tempRangeEnd;
HXDLIN(1568)									if ((endIndex < formatRange->end)) {
HXLINE(1568)										tempRangeEnd = endIndex;
            									}
            									else {
HXLINE(1568)										tempRangeEnd = formatRange->end;
            									}
HXLINE(1570)									if ((tempRangeEnd < endIndex)) {
HXLINE(1572)										::String text = this->text;
HXDLIN(1572)										Float letterSpacing = ((Float)0.0);
HXDLIN(1572)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1572)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1572)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1572)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1572)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1572)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1572)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1572)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1572)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1572)										bool positions1;
HXDLIN(1572)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1572)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1572)											positions1 = true;
            										}
HXDLIN(1572)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1572)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1572)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1572)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1572)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1572)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXLINE(1573)										Float width = ((Float)0.0);
HXDLIN(1573)										{
HXLINE(1573)											int _g = 0;
HXDLIN(1573)											while((_g < positions->length)){
HXLINE(1573)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1573)												_g = (_g + 1);
HXDLIN(1573)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1573)										widthValue = width;
            									}
HXLINE(1576)									layoutGroup->endIndex = tempRangeEnd;
HXLINE(1577)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1578)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1578)									layoutGroup1->width = (layoutGroup1->width + widthValue);
HXLINE(1580)									offsetX = (offsetX + widthValue);
HXLINE(1582)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1584)										layoutGroup = null();
HXLINE(1585)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1585)											rangeIndex = (rangeIndex + 1);
HXDLIN(1585)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1585)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1585)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXLINE(1586)										{
HXLINE(1586)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1586)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1586)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1586)												bool _hx_tmp;
HXDLIN(1586)												if (::hx::IsNotNull( font )) {
HXLINE(1586)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1586)													_hx_tmp = false;
            												}
HXDLIN(1586)												if (_hx_tmp) {
HXLINE(1586)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1586)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1586)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1586)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1586)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1586)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1586)											if ((heightValue > maxHeightValue)) {
HXLINE(1586)												maxHeightValue = heightValue;
            											}
HXDLIN(1586)											if ((ascent > maxAscent)) {
HXLINE(1586)												maxAscent = ascent;
            											}
            										}
HXLINE(1588)										textIndex = tempRangeEnd;
HXLINE(1590)										if ((tempRangeEnd != endIndex)) {
HXLINE(1592)											if ((endIndex <= formatRange->end)) {
HXLINE(1592)												::String text = _gthis->text;
HXDLIN(1592)												Float letterSpacing = ((Float)0.0);
HXDLIN(1592)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1592)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1592)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1592)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1592)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1592)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1592)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1592)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1592)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1592)												bool positions1;
HXDLIN(1592)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1592)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1592)													positions1 = true;
            												}
HXDLIN(1592)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1592)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1592)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1592)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1592)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1592)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1592)												Float width = ((Float)0.0);
HXDLIN(1592)												{
HXLINE(1592)													int _g = 0;
HXDLIN(1592)													while((_g < positions->length)){
HXLINE(1592)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1592)														_g = (_g + 1);
HXDLIN(1592)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1592)												widthValue = width;
HXDLIN(1592)												bool _hx_tmp;
HXDLIN(1592)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1592)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1592)													_hx_tmp = true;
            												}
HXDLIN(1592)												if (_hx_tmp) {
HXLINE(1592)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1592)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1592)													layoutGroup->format = formatRange->format;
HXDLIN(1592)													layoutGroup->startIndex = textIndex;
HXDLIN(1592)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1592)												layoutGroup->positions = positions;
HXDLIN(1592)												int _hx_tmp1;
HXDLIN(1592)												if (firstLineOfParagraph) {
HXLINE(1592)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1592)													_hx_tmp1 = 0;
            												}
HXDLIN(1592)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1592)												layoutGroup->ascent = ascent;
HXDLIN(1592)												layoutGroup->descent = descent;
HXDLIN(1592)												layoutGroup->leading = leading;
HXDLIN(1592)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1592)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1592)												layoutGroup->width = widthValue;
HXDLIN(1592)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1592)												offsetX = (offsetX + widthValue);
HXDLIN(1592)												if ((endIndex == formatRange->end)) {
HXLINE(1592)													layoutGroup = null();
HXDLIN(1592)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1592)														rangeIndex = (rangeIndex + 1);
HXDLIN(1592)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1592)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1592)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1592)													{
HXLINE(1592)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1592)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1592)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1592)															bool _hx_tmp;
HXDLIN(1592)															if (::hx::IsNotNull( font )) {
HXLINE(1592)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1592)																_hx_tmp = false;
            															}
HXDLIN(1592)															if (_hx_tmp) {
HXLINE(1592)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1592)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1592)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1592)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1592)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1592)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1592)														if ((heightValue > maxHeightValue)) {
HXLINE(1592)															maxHeightValue = heightValue;
            														}
HXDLIN(1592)														if ((ascent > maxAscent)) {
HXLINE(1592)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1592)												while(true){
HXLINE(1592)													int tempRangeEnd;
HXDLIN(1592)													if ((endIndex < formatRange->end)) {
HXLINE(1592)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1592)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1592)													if ((textIndex != tempRangeEnd)) {
HXLINE(1592)														::String text = _gthis->text;
HXDLIN(1592)														Float letterSpacing = ((Float)0.0);
HXDLIN(1592)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1592)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1592)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1592)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1592)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1592)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1592)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1592)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1592)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1592)														bool positions1;
HXDLIN(1592)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1592)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1592)															positions1 = true;
            														}
HXDLIN(1592)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1592)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1592)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1592)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1592)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1592)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1592)														Float width = ((Float)0.0);
HXDLIN(1592)														{
HXLINE(1592)															int _g = 0;
HXDLIN(1592)															while((_g < positions->length)){
HXLINE(1592)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1592)																_g = (_g + 1);
HXDLIN(1592)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1592)														widthValue = width;
HXDLIN(1592)														bool _hx_tmp;
HXDLIN(1592)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1592)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1592)															_hx_tmp = true;
            														}
HXDLIN(1592)														if (_hx_tmp) {
HXLINE(1592)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1592)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1592)															layoutGroup->format = formatRange->format;
HXDLIN(1592)															layoutGroup->startIndex = textIndex;
HXDLIN(1592)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1592)														layoutGroup->positions = positions;
HXDLIN(1592)														int _hx_tmp1;
HXDLIN(1592)														if (firstLineOfParagraph) {
HXLINE(1592)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1592)															_hx_tmp1 = 0;
            														}
HXDLIN(1592)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1592)														layoutGroup->ascent = ascent;
HXDLIN(1592)														layoutGroup->descent = descent;
HXDLIN(1592)														layoutGroup->leading = leading;
HXDLIN(1592)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1592)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1592)														layoutGroup->width = widthValue;
HXDLIN(1592)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1592)														offsetX = (offsetX + widthValue);
HXDLIN(1592)														textIndex = tempRangeEnd;
            													}
HXDLIN(1592)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1592)														layoutGroup = null();
            													}
HXDLIN(1592)													if ((tempRangeEnd == endIndex)) {
HXLINE(1592)														goto _hx_goto_94;
            													}
HXDLIN(1592)													bool _hx_tmp;
HXDLIN(1592)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1592)														rangeIndex = (rangeIndex + 1);
HXDLIN(1592)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1592)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1592)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1592)														_hx_tmp = true;
            													}
            													else {
HXLINE(1592)														_hx_tmp = false;
            													}
HXDLIN(1592)													if (!(_hx_tmp)) {
HXLINE(1592)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1592)														goto _hx_goto_94;
            													}
HXDLIN(1592)													{
HXLINE(1592)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1592)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1592)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1592)															bool _hx_tmp;
HXDLIN(1592)															if (::hx::IsNotNull( font )) {
HXLINE(1592)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1592)																_hx_tmp = false;
            															}
HXDLIN(1592)															if (_hx_tmp) {
HXLINE(1592)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1592)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1592)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1592)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1592)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1592)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1592)														if ((heightValue > maxHeightValue)) {
HXLINE(1592)															maxHeightValue = heightValue;
            														}
HXDLIN(1592)														if ((ascent > maxAscent)) {
HXLINE(1592)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_94:;
            											}
HXDLIN(1592)											textIndex = endIndex;
            										}
            									}
HXLINE(1598)									if ((breakIndex == endIndex)) {
HXLINE(1598)										endIndex = (endIndex + 1);
            									}
HXLINE(1600)									textIndex = endIndex;
HXLINE(1602)									if ((endIndex == this->text.length)) {
HXLINE(1604)										{
HXLINE(1604)											{
HXLINE(1604)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1604)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1604)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1604)													bool _hx_tmp;
HXDLIN(1604)													if (::hx::IsNotNull( font )) {
HXLINE(1604)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1604)														_hx_tmp = false;
            													}
HXDLIN(1604)													if (_hx_tmp) {
HXLINE(1604)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1604)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1604)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1604)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1604)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1604)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1604)												if ((heightValue > maxHeightValue)) {
HXLINE(1604)													maxHeightValue = heightValue;
            												}
HXDLIN(1604)												if ((ascent > maxAscent)) {
HXLINE(1604)													maxAscent = ascent;
            												}
            											}
HXDLIN(1604)											int i = _gthis->layoutGroups->get_length();
HXDLIN(1604)											while(true){
HXLINE(1604)												i = (i - 1);
HXDLIN(1604)												if (!((i > -1))) {
HXLINE(1604)													goto _hx_goto_96;
            												}
HXDLIN(1604)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1604)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1604)													goto _hx_goto_96;
            												}
HXDLIN(1604)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1604)													continue;
            												}
HXDLIN(1604)												lg->ascent = maxAscent;
HXDLIN(1604)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_96:;
HXDLIN(1604)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1604)											maxAscent = ((Float)0.0);
HXDLIN(1604)											maxHeightValue = 0;
HXDLIN(1604)											lineIndex = (lineIndex + 1);
HXDLIN(1604)											offsetX = ( (Float)(0) );
HXDLIN(1604)											firstLineOfParagraph = false;
            										}
HXLINE(1606)										if ((breakIndex != -1)) {
HXLINE(1608)											previousBreakIndex = breakIndex;
HXLINE(1609)											breakCount = (breakCount + 1);
HXLINE(1610)											if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1610)												breakIndex = this->lineBreaks->get(breakCount);
            											}
            											else {
HXLINE(1610)												breakIndex = -1;
            											}
            										}
            									}
            								}
            							}
            						}
HXLINE(1616)						int nextSpaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),textIndex);
HXLINE(1621)						if ((breakIndex == previousSpaceIndex)) {
HXLINE(1623)							layoutGroup->endIndex = breakIndex;
HXLINE(1625)							if ((((breakIndex - layoutGroup->startIndex) - layoutGroup->positions->length) < 0)) {
HXLINE(1628)								layoutGroup->positions->push(null());
            							}
HXLINE(1631)							textIndex = (breakIndex + 1);
            						}
HXLINE(1634)						previousSpaceIndex = spaceIndex;
HXLINE(1635)						spaceIndex = nextSpaceIndex;
HXLINE(1637)						bool _hx_tmp;
HXDLIN(1637)						bool _hx_tmp1;
HXDLIN(1637)						bool _hx_tmp2;
HXDLIN(1637)						if ((breakIndex > -1)) {
HXLINE(1637)							_hx_tmp2 = (breakIndex <= textIndex);
            						}
            						else {
HXLINE(1637)							_hx_tmp2 = false;
            						}
HXDLIN(1637)						if (_hx_tmp2) {
HXLINE(1637)							if ((spaceIndex <= breakIndex)) {
HXLINE(1637)								_hx_tmp1 = (spaceIndex == -1);
            							}
            							else {
HXLINE(1637)								_hx_tmp1 = true;
            							}
            						}
            						else {
HXLINE(1637)							_hx_tmp1 = false;
            						}
HXDLIN(1637)						if (!(_hx_tmp1)) {
HXLINE(1637)							_hx_tmp = (textIndex > this->text.length);
            						}
            						else {
HXLINE(1637)							_hx_tmp = true;
            						}
HXDLIN(1637)						if (_hx_tmp) {
HXLINE(1640)							goto _hx_goto_42;
            						}
            					}
            					_hx_goto_42:;
            				}
            				else {
HXLINE(1646)					if ((textIndex < this->text.length)) {
HXLINE(1649)						{
HXLINE(1649)							int endIndex = this->text.length;
HXDLIN(1649)							if ((textIndex >= endIndex)) {
HXLINE(1649)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)								widthValue = ( (Float)(0) );
            							}
            							else {
HXLINE(1649)								if ((endIndex <= formatRange->end)) {
HXLINE(1649)									::String text = _gthis->text;
HXDLIN(1649)									Float letterSpacing = ((Float)0.0);
HXDLIN(1649)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1649)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1649)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1649)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)									bool positions1;
HXDLIN(1649)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1649)										positions1 = true;
            									}
HXDLIN(1649)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1649)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)									_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1649)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1649)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1649)									Float width = ((Float)0.0);
HXDLIN(1649)									{
HXLINE(1649)										int _g = 0;
HXDLIN(1649)										while((_g < positions->length)){
HXLINE(1649)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)											_g = (_g + 1);
HXDLIN(1649)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1649)									widthValue = width;
            								}
            								else {
HXLINE(1649)									int tempIndex = textIndex;
HXDLIN(1649)									int tempRangeEnd = formatRange->end;
HXDLIN(1649)									int countRanges = 0;
HXDLIN(1649)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1649)									widthValue = ( (Float)(0) );
HXDLIN(1649)									while(true){
HXLINE(1649)										if ((tempIndex != tempRangeEnd)) {
HXLINE(1649)											::String text = _gthis->text;
HXDLIN(1649)											Float letterSpacing = ((Float)0.0);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1649)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1649)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1649)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1649)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1649)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1649)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1649)											bool _hx_tmp;
HXDLIN(1649)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1649)												_hx_tmp = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1649)												_hx_tmp = true;
            											}
HXDLIN(1649)											_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1649)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1649)											_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1649)											::Array< ::Dynamic> tempPositions;
HXDLIN(1649)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1649)												tempPositions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1649)												tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1649)											positions = positions->concat(tempPositions);
            										}
HXDLIN(1649)										if ((tempRangeEnd != endIndex)) {
HXLINE(1649)											bool _hx_tmp;
HXDLIN(1649)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)												rangeIndex = (rangeIndex + 1);
HXDLIN(1649)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1649)												_hx_tmp = true;
            											}
            											else {
HXLINE(1649)												_hx_tmp = false;
            											}
HXDLIN(1649)											if (!(_hx_tmp)) {
HXLINE(1649)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1649)												goto _hx_goto_98;
            											}
HXDLIN(1649)											tempIndex = tempRangeEnd;
HXDLIN(1649)											if ((endIndex < formatRange->end)) {
HXLINE(1649)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1649)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1649)											countRanges = (countRanges + 1);
            										}
            										else {
HXLINE(1649)											Float width = ((Float)0.0);
HXDLIN(1649)											{
HXLINE(1649)												int _g = 0;
HXDLIN(1649)												while((_g < positions->length)){
HXLINE(1649)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1649)													_g = (_g + 1);
HXDLIN(1649)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1649)											widthValue = width;
HXDLIN(1649)											goto _hx_goto_98;
            										}
            									}
            									_hx_goto_98:;
HXDLIN(1649)									rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1649)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1649)										rangeIndex = (rangeIndex + 1);
HXDLIN(1649)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1649)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1649)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
            								}
            							}
            						}
HXLINE(1650)						{
HXLINE(1650)							int endIndex1 = this->text.length;
HXDLIN(1650)							bool _hx_tmp;
HXDLIN(1650)							if ((_gthis->width >= 4)) {
HXLINE(1650)								_hx_tmp = _gthis->wordWrap;
            							}
            							else {
HXLINE(1650)								_hx_tmp = false;
            							}
HXDLIN(1650)							if (_hx_tmp) {
HXLINE(1650)								::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1650)								int bufferCount;
HXDLIN(1650)								int placeIndex;
HXDLIN(1650)								Float positionWidth;
HXDLIN(1650)								 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1650)								Float width = ((Float)0.0);
HXDLIN(1650)								{
HXLINE(1650)									int _g = 0;
HXDLIN(1650)									while((_g < remainingPositions->length)){
HXLINE(1650)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)										_g = (_g + 1);
HXDLIN(1650)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1650)								Float tempWidth = width;
HXDLIN(1650)								int i = (remainingPositions->length - 1);
HXDLIN(1650)								while((i >= 0)){
HXLINE(1650)									 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1650)									bool _hx_tmp;
HXDLIN(1650)									if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1650)										_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            									}
            									else {
HXLINE(1650)										_hx_tmp = false;
            									}
HXDLIN(1650)									if (_hx_tmp) {
HXLINE(1650)										goto _hx_goto_101;
            									}
HXDLIN(1650)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)									tempWidth = (tempWidth - position->advance->x);
HXDLIN(1650)									i = (i - 1);
            								}
            								_hx_goto_101:;
HXDLIN(1650)								while(true){
HXLINE(1650)									bool _hx_tmp;
HXDLIN(1650)									if ((remainingPositions->length > 0)) {
HXLINE(1650)										int _hx_tmp1;
HXDLIN(1650)										if (firstLineOfParagraph) {
HXLINE(1650)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1650)											_hx_tmp1 = 0;
            										}
HXDLIN(1650)										_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            									}
            									else {
HXLINE(1650)										_hx_tmp = false;
            									}
HXDLIN(1650)									if (!(_hx_tmp)) {
HXLINE(1650)										goto _hx_goto_102;
            									}
HXDLIN(1650)									bufferCount = 0;
HXDLIN(1650)									i = bufferCount;
HXDLIN(1650)									positionWidth = ((Float)0.0);
HXDLIN(1650)									while(true){
HXLINE(1650)										int _hx_tmp;
HXDLIN(1650)										if (firstLineOfParagraph) {
HXLINE(1650)											_hx_tmp = indent;
            										}
            										else {
HXLINE(1650)											_hx_tmp = 0;
            										}
HXDLIN(1650)										if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1650)											goto _hx_goto_103;
            										}
HXDLIN(1650)										currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)										if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1650)											i = (i + 1);
HXDLIN(1650)											bufferCount = (bufferCount + 1);
            										}
            										else {
HXLINE(1650)											positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1650)											i = (i + 1);
            										}
            									}
            									_hx_goto_103:;
HXDLIN(1650)									if ((i == bufferCount)) {
HXLINE(1650)										i = (bufferCount + 1);
            									}
            									else {
HXLINE(1650)										while(true){
HXLINE(1650)											bool _hx_tmp;
HXDLIN(1650)											if ((i > 1)) {
HXLINE(1650)												int _hx_tmp1;
HXDLIN(1650)												if (firstLineOfParagraph) {
HXLINE(1650)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1650)													_hx_tmp1 = 0;
            												}
HXDLIN(1650)												_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            											}
            											else {
HXLINE(1650)												_hx_tmp = false;
            											}
HXDLIN(1650)											if (!(_hx_tmp)) {
HXLINE(1650)												goto _hx_goto_104;
            											}
HXDLIN(1650)											i = (i - 1);
HXDLIN(1650)											if (((i - bufferCount) > 0)) {
HXLINE(1650)												{
HXLINE(1650)													int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1650)													if ((textIndex >= endIndex)) {
HXLINE(1650)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1650)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1650)														if ((endIndex <= formatRange->end)) {
HXLINE(1650)															::String text = _gthis->text;
HXDLIN(1650)															Float letterSpacing = ((Float)0.0);
HXDLIN(1650)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1650)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1650)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1650)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)															bool positions1;
HXDLIN(1650)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1650)																positions1 = true;
            															}
HXDLIN(1650)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1650)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1650)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1650)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1650)															Float width = ((Float)0.0);
HXDLIN(1650)															{
HXLINE(1650)																int _g = 0;
HXDLIN(1650)																while((_g < positions->length)){
HXLINE(1650)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)																	_g = (_g + 1);
HXDLIN(1650)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1650)															widthValue = width;
            														}
            														else {
HXLINE(1650)															int tempIndex = textIndex;
HXDLIN(1650)															int tempRangeEnd = formatRange->end;
HXDLIN(1650)															int countRanges = 0;
HXDLIN(1650)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1650)															widthValue = ( (Float)(0) );
HXDLIN(1650)															while(true){
HXLINE(1650)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1650)																	::String text = _gthis->text;
HXDLIN(1650)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1650)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1650)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1650)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1650)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)																	bool _hx_tmp;
HXDLIN(1650)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1650)																		_hx_tmp = true;
            																	}
HXDLIN(1650)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1650)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1650)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1650)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1650)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1650)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1650)																if ((tempRangeEnd != endIndex)) {
HXLINE(1650)																	bool _hx_tmp;
HXDLIN(1650)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1650)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1650)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1650)																		_hx_tmp = false;
            																	}
HXDLIN(1650)																	if (!(_hx_tmp)) {
HXLINE(1650)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1650)																		goto _hx_goto_106;
            																	}
HXDLIN(1650)																	tempIndex = tempRangeEnd;
HXDLIN(1650)																	if ((endIndex < formatRange->end)) {
HXLINE(1650)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1650)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1650)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1650)																	Float width = ((Float)0.0);
HXDLIN(1650)																	{
HXLINE(1650)																		int _g = 0;
HXDLIN(1650)																		while((_g < positions->length)){
HXLINE(1650)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)																			_g = (_g + 1);
HXDLIN(1650)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1650)																	widthValue = width;
HXDLIN(1650)																	goto _hx_goto_106;
            																}
            															}
            															_hx_goto_106:;
HXDLIN(1650)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1650)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)																rangeIndex = (rangeIndex + 1);
HXDLIN(1650)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1650)												positionWidth = widthValue;
            											}
            											else {
HXLINE(1650)												i = 1;
HXDLIN(1650)												bufferCount = 0;
HXDLIN(1650)												{
HXLINE(1650)													int endIndex = (textIndex + 1);
HXDLIN(1650)													if ((textIndex >= endIndex)) {
HXLINE(1650)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1650)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1650)														if ((endIndex <= formatRange->end)) {
HXLINE(1650)															::String text = _gthis->text;
HXDLIN(1650)															Float letterSpacing = ((Float)0.0);
HXDLIN(1650)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1650)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1650)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1650)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)															bool positions1;
HXDLIN(1650)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1650)																positions1 = true;
            															}
HXDLIN(1650)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1650)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1650)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1650)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1650)															Float width = ((Float)0.0);
HXDLIN(1650)															{
HXLINE(1650)																int _g = 0;
HXDLIN(1650)																while((_g < positions->length)){
HXLINE(1650)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)																	_g = (_g + 1);
HXDLIN(1650)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1650)															widthValue = width;
            														}
            														else {
HXLINE(1650)															int tempIndex = textIndex;
HXDLIN(1650)															int tempRangeEnd = formatRange->end;
HXDLIN(1650)															int countRanges = 0;
HXDLIN(1650)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1650)															widthValue = ( (Float)(0) );
HXDLIN(1650)															while(true){
HXLINE(1650)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1650)																	::String text = _gthis->text;
HXDLIN(1650)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1650)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1650)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1650)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1650)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)																	bool _hx_tmp;
HXDLIN(1650)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1650)																		_hx_tmp = true;
            																	}
HXDLIN(1650)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1650)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1650)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1650)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1650)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1650)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1650)																if ((tempRangeEnd != endIndex)) {
HXLINE(1650)																	bool _hx_tmp;
HXDLIN(1650)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1650)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1650)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1650)																		_hx_tmp = false;
            																	}
HXDLIN(1650)																	if (!(_hx_tmp)) {
HXLINE(1650)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1650)																		goto _hx_goto_109;
            																	}
HXDLIN(1650)																	tempIndex = tempRangeEnd;
HXDLIN(1650)																	if ((endIndex < formatRange->end)) {
HXLINE(1650)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1650)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1650)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1650)																	Float width = ((Float)0.0);
HXDLIN(1650)																	{
HXLINE(1650)																		int _g = 0;
HXDLIN(1650)																		while((_g < positions->length)){
HXLINE(1650)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)																			_g = (_g + 1);
HXDLIN(1650)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1650)																	widthValue = width;
HXDLIN(1650)																	goto _hx_goto_109;
            																}
            															}
            															_hx_goto_109:;
HXDLIN(1650)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1650)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)																rangeIndex = (rangeIndex + 1);
HXDLIN(1650)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1650)												positionWidth = ( (Float)(0) );
            											}
            										}
            										_hx_goto_104:;
            									}
HXDLIN(1650)									placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1650)									{
HXLINE(1650)										if ((placeIndex <= formatRange->end)) {
HXLINE(1650)											::String text = _gthis->text;
HXDLIN(1650)											Float letterSpacing = ((Float)0.0);
HXDLIN(1650)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1650)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)											bool positions1;
HXDLIN(1650)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1650)												positions1 = true;
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1650)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)											_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1650)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1650)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1650)											Float width = ((Float)0.0);
HXDLIN(1650)											{
HXLINE(1650)												int _g = 0;
HXDLIN(1650)												while((_g < positions->length)){
HXLINE(1650)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)													_g = (_g + 1);
HXDLIN(1650)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1650)											widthValue = width;
HXDLIN(1650)											bool _hx_tmp;
HXDLIN(1650)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1650)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1650)												_hx_tmp = true;
            											}
HXDLIN(1650)											if (_hx_tmp) {
HXLINE(1650)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1650)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1650)												layoutGroup->format = formatRange->format;
HXDLIN(1650)												layoutGroup->startIndex = textIndex;
HXDLIN(1650)												layoutGroup->endIndex = placeIndex;
            											}
HXDLIN(1650)											layoutGroup->positions = positions;
HXDLIN(1650)											int _hx_tmp1;
HXDLIN(1650)											if (firstLineOfParagraph) {
HXLINE(1650)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1650)												_hx_tmp1 = 0;
            											}
HXDLIN(1650)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1650)											layoutGroup->ascent = ascent;
HXDLIN(1650)											layoutGroup->descent = descent;
HXDLIN(1650)											layoutGroup->leading = leading;
HXDLIN(1650)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1650)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1650)											layoutGroup->width = widthValue;
HXDLIN(1650)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1650)											offsetX = (offsetX + widthValue);
HXDLIN(1650)											if ((placeIndex == formatRange->end)) {
HXLINE(1650)												layoutGroup = null();
HXDLIN(1650)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)													rangeIndex = (rangeIndex + 1);
HXDLIN(1650)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
HXDLIN(1650)												{
HXLINE(1650)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1650)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1650)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1650)														bool _hx_tmp;
HXDLIN(1650)														if (::hx::IsNotNull( font )) {
HXLINE(1650)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1650)															_hx_tmp = false;
            														}
HXDLIN(1650)														if (_hx_tmp) {
HXLINE(1650)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1650)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1650)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1650)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1650)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1650)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1650)													if ((heightValue > maxHeightValue)) {
HXLINE(1650)														maxHeightValue = heightValue;
            													}
HXDLIN(1650)													if ((ascent > maxAscent)) {
HXLINE(1650)														maxAscent = ascent;
            													}
            												}
            											}
            										}
            										else {
HXLINE(1650)											while(true){
HXLINE(1650)												int tempRangeEnd;
HXDLIN(1650)												if ((placeIndex < formatRange->end)) {
HXLINE(1650)													tempRangeEnd = placeIndex;
            												}
            												else {
HXLINE(1650)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1650)												if ((textIndex != tempRangeEnd)) {
HXLINE(1650)													::String text = _gthis->text;
HXDLIN(1650)													Float letterSpacing = ((Float)0.0);
HXDLIN(1650)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1650)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1650)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1650)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)													bool positions1;
HXDLIN(1650)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)														positions1 = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1650)														positions1 = true;
            													}
HXDLIN(1650)													_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1650)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)													_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1650)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)														positions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1650)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1650)													Float width = ((Float)0.0);
HXDLIN(1650)													{
HXLINE(1650)														int _g = 0;
HXDLIN(1650)														while((_g < positions->length)){
HXLINE(1650)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)															_g = (_g + 1);
HXDLIN(1650)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1650)													widthValue = width;
HXDLIN(1650)													bool _hx_tmp;
HXDLIN(1650)													if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1650)														_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            													}
            													else {
HXLINE(1650)														_hx_tmp = true;
            													}
HXDLIN(1650)													if (_hx_tmp) {
HXLINE(1650)														layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1650)														_gthis->layoutGroups->push(layoutGroup);
            													}
            													else {
HXLINE(1650)														layoutGroup->format = formatRange->format;
HXDLIN(1650)														layoutGroup->startIndex = textIndex;
HXDLIN(1650)														layoutGroup->endIndex = tempRangeEnd;
            													}
HXDLIN(1650)													layoutGroup->positions = positions;
HXDLIN(1650)													int _hx_tmp1;
HXDLIN(1650)													if (firstLineOfParagraph) {
HXLINE(1650)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1650)														_hx_tmp1 = 0;
            													}
HXDLIN(1650)													layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1650)													layoutGroup->ascent = ascent;
HXDLIN(1650)													layoutGroup->descent = descent;
HXDLIN(1650)													layoutGroup->leading = leading;
HXDLIN(1650)													layoutGroup->lineIndex = lineIndex;
HXDLIN(1650)													layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1650)													layoutGroup->width = widthValue;
HXDLIN(1650)													layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1650)													offsetX = (offsetX + widthValue);
HXDLIN(1650)													textIndex = tempRangeEnd;
            												}
HXDLIN(1650)												if ((tempRangeEnd == formatRange->end)) {
HXLINE(1650)													layoutGroup = null();
            												}
HXDLIN(1650)												if ((tempRangeEnd == placeIndex)) {
HXLINE(1650)													goto _hx_goto_112;
            												}
HXDLIN(1650)												bool _hx_tmp;
HXDLIN(1650)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)													rangeIndex = (rangeIndex + 1);
HXDLIN(1650)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1650)													_hx_tmp = true;
            												}
            												else {
HXLINE(1650)													_hx_tmp = false;
            												}
HXDLIN(1650)												if (!(_hx_tmp)) {
HXLINE(1650)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1650)													goto _hx_goto_112;
            												}
HXDLIN(1650)												{
HXLINE(1650)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1650)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1650)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1650)														bool _hx_tmp;
HXDLIN(1650)														if (::hx::IsNotNull( font )) {
HXLINE(1650)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1650)															_hx_tmp = false;
            														}
HXDLIN(1650)														if (_hx_tmp) {
HXLINE(1650)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1650)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1650)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1650)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1650)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1650)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1650)													if ((heightValue > maxHeightValue)) {
HXLINE(1650)														maxHeightValue = heightValue;
            													}
HXDLIN(1650)													if ((ascent > maxAscent)) {
HXLINE(1650)														maxAscent = ascent;
            													}
            												}
            											}
            											_hx_goto_112:;
            										}
HXDLIN(1650)										textIndex = placeIndex;
            									}
HXDLIN(1650)									{
HXLINE(1650)										{
HXLINE(1650)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1650)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1650)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1650)												bool _hx_tmp;
HXDLIN(1650)												if (::hx::IsNotNull( font )) {
HXLINE(1650)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1650)													_hx_tmp = false;
            												}
HXDLIN(1650)												if (_hx_tmp) {
HXLINE(1650)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1650)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1650)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1650)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1650)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1650)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1650)											if ((heightValue > maxHeightValue)) {
HXLINE(1650)												maxHeightValue = heightValue;
            											}
HXDLIN(1650)											if ((ascent > maxAscent)) {
HXLINE(1650)												maxAscent = ascent;
            											}
            										}
HXDLIN(1650)										int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1650)										while(true){
HXLINE(1650)											i1 = (i1 - 1);
HXDLIN(1650)											if (!((i1 > -1))) {
HXLINE(1650)												goto _hx_goto_114;
            											}
HXDLIN(1650)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1650)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1650)												goto _hx_goto_114;
            											}
HXDLIN(1650)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1650)												continue;
            											}
HXDLIN(1650)											lg->ascent = maxAscent;
HXDLIN(1650)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_114:;
HXDLIN(1650)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1650)										maxAscent = ((Float)0.0);
HXDLIN(1650)										maxHeightValue = 0;
HXDLIN(1650)										lineIndex = (lineIndex + 1);
HXDLIN(1650)										offsetX = ( (Float)(0) );
HXDLIN(1650)										firstLineOfParagraph = false;
            									}
HXDLIN(1650)									if ((placeIndex >= endIndex1)) {
HXLINE(1650)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1650)										widthValue = ( (Float)(0) );
            									}
            									else {
HXLINE(1650)										if ((endIndex1 <= formatRange->end)) {
HXLINE(1650)											::String text = _gthis->text;
HXDLIN(1650)											Float letterSpacing = ((Float)0.0);
HXDLIN(1650)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1650)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)											bool positions1;
HXDLIN(1650)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1650)												positions1 = true;
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1650)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)											_gthis1->set_text(text.substring(placeIndex,endIndex1));
HXDLIN(1650)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1650)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1650)											Float width = ((Float)0.0);
HXDLIN(1650)											{
HXLINE(1650)												int _g = 0;
HXDLIN(1650)												while((_g < positions->length)){
HXLINE(1650)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)													_g = (_g + 1);
HXDLIN(1650)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1650)											widthValue = width;
            										}
            										else {
HXLINE(1650)											int tempIndex = placeIndex;
HXDLIN(1650)											int tempRangeEnd = formatRange->end;
HXDLIN(1650)											int countRanges = 0;
HXDLIN(1650)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1650)											widthValue = ( (Float)(0) );
HXDLIN(1650)											while(true){
HXLINE(1650)												if ((tempIndex != tempRangeEnd)) {
HXLINE(1650)													::String text = _gthis->text;
HXDLIN(1650)													Float letterSpacing = ((Float)0.0);
HXDLIN(1650)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1650)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1650)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1650)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)													bool _hx_tmp;
HXDLIN(1650)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)														_hx_tmp = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1650)														_hx_tmp = true;
            													}
HXDLIN(1650)													_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1650)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)													_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1650)													::Array< ::Dynamic> tempPositions;
HXDLIN(1650)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)														tempPositions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1650)														tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1650)													positions = positions->concat(tempPositions);
            												}
HXDLIN(1650)												if ((tempRangeEnd != endIndex1)) {
HXLINE(1650)													bool _hx_tmp;
HXDLIN(1650)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)														rangeIndex = (rangeIndex + 1);
HXDLIN(1650)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1650)														_hx_tmp = true;
            													}
            													else {
HXLINE(1650)														_hx_tmp = false;
            													}
HXDLIN(1650)													if (!(_hx_tmp)) {
HXLINE(1650)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1117,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1650)														goto _hx_goto_116;
            													}
HXDLIN(1650)													tempIndex = tempRangeEnd;
HXDLIN(1650)													if ((endIndex1 < formatRange->end)) {
HXLINE(1650)														tempRangeEnd = endIndex1;
            													}
            													else {
HXLINE(1650)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1650)													countRanges = (countRanges + 1);
            												}
            												else {
HXLINE(1650)													Float width = ((Float)0.0);
HXDLIN(1650)													{
HXLINE(1650)														int _g = 0;
HXDLIN(1650)														while((_g < positions->length)){
HXLINE(1650)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)															_g = (_g + 1);
HXDLIN(1650)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1650)													widthValue = width;
HXDLIN(1650)													goto _hx_goto_116;
            												}
            											}
            											_hx_goto_116:;
HXDLIN(1650)											rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1650)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)												rangeIndex = (rangeIndex + 1);
HXDLIN(1650)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
            										}
            									}
HXDLIN(1650)									remainingPositions = positions;
HXDLIN(1650)									tempWidth = widthValue;
            								}
            								_hx_goto_102:;
            							}
HXDLIN(1650)							{
HXLINE(1650)								if ((endIndex1 <= formatRange->end)) {
HXLINE(1650)									::String text = _gthis->text;
HXDLIN(1650)									Float letterSpacing = ((Float)0.0);
HXDLIN(1650)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1650)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1650)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1650)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)									bool positions1;
HXDLIN(1650)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1650)										positions1 = true;
            									}
HXDLIN(1650)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1650)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)									_gthis1->set_text(text.substring(textIndex,endIndex1));
HXDLIN(1650)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1650)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1650)									Float width = ((Float)0.0);
HXDLIN(1650)									{
HXLINE(1650)										int _g = 0;
HXDLIN(1650)										while((_g < positions->length)){
HXLINE(1650)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)											_g = (_g + 1);
HXDLIN(1650)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1650)									widthValue = width;
HXDLIN(1650)									bool _hx_tmp;
HXDLIN(1650)									if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1650)										_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            									}
            									else {
HXLINE(1650)										_hx_tmp = true;
            									}
HXDLIN(1650)									if (_hx_tmp) {
HXLINE(1650)										layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex1);
HXDLIN(1650)										_gthis->layoutGroups->push(layoutGroup);
            									}
            									else {
HXLINE(1650)										layoutGroup->format = formatRange->format;
HXDLIN(1650)										layoutGroup->startIndex = textIndex;
HXDLIN(1650)										layoutGroup->endIndex = endIndex1;
            									}
HXDLIN(1650)									layoutGroup->positions = positions;
HXDLIN(1650)									int _hx_tmp1;
HXDLIN(1650)									if (firstLineOfParagraph) {
HXLINE(1650)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1650)										_hx_tmp1 = 0;
            									}
HXDLIN(1650)									layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1650)									layoutGroup->ascent = ascent;
HXDLIN(1650)									layoutGroup->descent = descent;
HXDLIN(1650)									layoutGroup->leading = leading;
HXDLIN(1650)									layoutGroup->lineIndex = lineIndex;
HXDLIN(1650)									layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1650)									layoutGroup->width = widthValue;
HXDLIN(1650)									layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1650)									offsetX = (offsetX + widthValue);
HXDLIN(1650)									if ((endIndex1 == formatRange->end)) {
HXLINE(1650)										layoutGroup = null();
HXDLIN(1650)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)											rangeIndex = (rangeIndex + 1);
HXDLIN(1650)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXDLIN(1650)										{
HXLINE(1650)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1650)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1650)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1650)												bool _hx_tmp;
HXDLIN(1650)												if (::hx::IsNotNull( font )) {
HXLINE(1650)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1650)													_hx_tmp = false;
            												}
HXDLIN(1650)												if (_hx_tmp) {
HXLINE(1650)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1650)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1650)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1650)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1650)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1650)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1650)											if ((heightValue > maxHeightValue)) {
HXLINE(1650)												maxHeightValue = heightValue;
            											}
HXDLIN(1650)											if ((ascent > maxAscent)) {
HXLINE(1650)												maxAscent = ascent;
            											}
            										}
            									}
            								}
            								else {
HXLINE(1650)									while(true){
HXLINE(1650)										int tempRangeEnd;
HXDLIN(1650)										if ((endIndex1 < formatRange->end)) {
HXLINE(1650)											tempRangeEnd = endIndex1;
            										}
            										else {
HXLINE(1650)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1650)										if ((textIndex != tempRangeEnd)) {
HXLINE(1650)											::String text = _gthis->text;
HXDLIN(1650)											Float letterSpacing = ((Float)0.0);
HXDLIN(1650)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1650)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1650)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1650)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1650)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1650)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1650)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1650)											bool positions1;
HXDLIN(1650)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1650)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1650)												positions1 = true;
            											}
HXDLIN(1650)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1650)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1650)											_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1650)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1650)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1650)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1650)											Float width = ((Float)0.0);
HXDLIN(1650)											{
HXLINE(1650)												int _g = 0;
HXDLIN(1650)												while((_g < positions->length)){
HXLINE(1650)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1650)													_g = (_g + 1);
HXDLIN(1650)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1650)											widthValue = width;
HXDLIN(1650)											bool _hx_tmp;
HXDLIN(1650)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1650)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1650)												_hx_tmp = true;
            											}
HXDLIN(1650)											if (_hx_tmp) {
HXLINE(1650)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1650)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1650)												layoutGroup->format = formatRange->format;
HXDLIN(1650)												layoutGroup->startIndex = textIndex;
HXDLIN(1650)												layoutGroup->endIndex = tempRangeEnd;
            											}
HXDLIN(1650)											layoutGroup->positions = positions;
HXDLIN(1650)											int _hx_tmp1;
HXDLIN(1650)											if (firstLineOfParagraph) {
HXLINE(1650)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1650)												_hx_tmp1 = 0;
            											}
HXDLIN(1650)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1650)											layoutGroup->ascent = ascent;
HXDLIN(1650)											layoutGroup->descent = descent;
HXDLIN(1650)											layoutGroup->leading = leading;
HXDLIN(1650)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1650)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1650)											layoutGroup->width = widthValue;
HXDLIN(1650)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1650)											offsetX = (offsetX + widthValue);
HXDLIN(1650)											textIndex = tempRangeEnd;
            										}
HXDLIN(1650)										if ((tempRangeEnd == formatRange->end)) {
HXLINE(1650)											layoutGroup = null();
            										}
HXDLIN(1650)										if ((tempRangeEnd == endIndex1)) {
HXLINE(1650)											goto _hx_goto_119;
            										}
HXDLIN(1650)										bool _hx_tmp;
HXDLIN(1650)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1650)											rangeIndex = (rangeIndex + 1);
HXDLIN(1650)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1650)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1650)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1650)											_hx_tmp = true;
            										}
            										else {
HXLINE(1650)											_hx_tmp = false;
            										}
HXDLIN(1650)										if (!(_hx_tmp)) {
HXLINE(1650)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and create an issue on GitHub so we can fix this.",8e,c1,17,2f),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1205,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1650)											goto _hx_goto_119;
            										}
HXDLIN(1650)										{
HXLINE(1650)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1650)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1650)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1650)												bool _hx_tmp;
HXDLIN(1650)												if (::hx::IsNotNull( font )) {
HXLINE(1650)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1650)													_hx_tmp = false;
            												}
HXDLIN(1650)												if (_hx_tmp) {
HXLINE(1650)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1650)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1650)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1650)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1650)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1650)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1650)											if ((heightValue > maxHeightValue)) {
HXLINE(1650)												maxHeightValue = heightValue;
            											}
HXDLIN(1650)											if ((ascent > maxAscent)) {
HXLINE(1650)												maxAscent = ascent;
            											}
            										}
            									}
            									_hx_goto_119:;
            								}
HXDLIN(1650)								textIndex = endIndex1;
            							}
            						}
HXLINE(1652)						{
HXLINE(1652)							{
HXLINE(1652)								if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1652)									ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1652)									descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            								}
            								else {
HXLINE(1652)									bool _hx_tmp;
HXDLIN(1652)									if (::hx::IsNotNull( font )) {
HXLINE(1652)										_hx_tmp = (font->unitsPerEM != 0);
            									}
            									else {
HXLINE(1652)										_hx_tmp = false;
            									}
HXDLIN(1652)									if (_hx_tmp) {
HXLINE(1652)										ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1652)										descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            									}
            									else {
HXLINE(1652)										ascent = ( (Float)(currentFormat->size) );
HXDLIN(1652)										descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            									}
            								}
HXDLIN(1652)								leading = ( (int)(currentFormat->leading) );
HXDLIN(1652)								heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1652)								if ((heightValue > maxHeightValue)) {
HXLINE(1652)									maxHeightValue = heightValue;
            								}
HXDLIN(1652)								if ((ascent > maxAscent)) {
HXLINE(1652)									maxAscent = ascent;
            								}
            							}
HXDLIN(1652)							int i = _gthis->layoutGroups->get_length();
HXDLIN(1652)							while(true){
HXLINE(1652)								i = (i - 1);
HXDLIN(1652)								if (!((i > -1))) {
HXLINE(1652)									goto _hx_goto_121;
            								}
HXDLIN(1652)								 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1652)								if ((lg->lineIndex < lineIndex)) {
HXLINE(1652)									goto _hx_goto_121;
            								}
HXDLIN(1652)								if ((lg->lineIndex > lineIndex)) {
HXLINE(1652)									continue;
            								}
HXDLIN(1652)								lg->ascent = maxAscent;
HXDLIN(1652)								lg->height = ( (Float)(maxHeightValue) );
            							}
            							_hx_goto_121:;
HXDLIN(1652)							offsetY = (offsetY + maxHeightValue);
HXDLIN(1652)							maxAscent = ((Float)0.0);
HXDLIN(1652)							maxHeightValue = 0;
HXDLIN(1652)							lineIndex = (lineIndex + 1);
HXDLIN(1652)							offsetX = ( (Float)(0) );
HXDLIN(1652)							firstLineOfParagraph = false;
            						}
            					}
HXLINE(1655)					textIndex = (textIndex + 1);
            				}
            			}
            		}
HXLINE(1660)		bool _hx_tmp3;
HXDLIN(1660)		if ((previousBreakIndex == (textIndex - 2))) {
HXLINE(1660)			_hx_tmp3 = (previousBreakIndex > -1);
            		}
            		else {
HXLINE(1660)			_hx_tmp3 = false;
            		}
HXDLIN(1660)		if (_hx_tmp3) {
HXLINE(1662)			{
HXLINE(1662)				int startIndex = (textIndex - 1);
HXDLIN(1662)				int endIndex = (textIndex - 1);
HXDLIN(1662)				bool _hx_tmp;
HXDLIN(1662)				if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1662)					_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            				}
            				else {
HXLINE(1662)					_hx_tmp = true;
            				}
HXDLIN(1662)				if (_hx_tmp) {
HXLINE(1662)					layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,startIndex,endIndex);
HXDLIN(1662)					_gthis->layoutGroups->push(layoutGroup);
            				}
            				else {
HXLINE(1662)					layoutGroup->format = formatRange->format;
HXDLIN(1662)					layoutGroup->startIndex = startIndex;
HXDLIN(1662)					layoutGroup->endIndex = endIndex;
            				}
            			}
HXLINE(1664)			layoutGroup->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1665)			layoutGroup->ascent = ascent;
HXLINE(1666)			layoutGroup->descent = descent;
HXLINE(1667)			layoutGroup->leading = leading;
HXLINE(1668)			layoutGroup->lineIndex = lineIndex;
HXLINE(1669)			int _hx_tmp1;
HXDLIN(1669)			if (firstLineOfParagraph) {
HXLINE(1669)				_hx_tmp1 = indent;
            			}
            			else {
HXLINE(1669)				_hx_tmp1 = 0;
            			}
HXDLIN(1669)			layoutGroup->offsetX = ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) );
HXLINE(1670)			layoutGroup->offsetY = (offsetY + 2);
HXLINE(1671)			layoutGroup->width = ( (Float)(0) );
HXLINE(1672)			layoutGroup->height = ( (Float)(heightValue) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

::String TextEngine_obj::restrictText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1696_restrictText)
HXLINE(1697)		if (::hx::IsNull( value )) {
HXLINE(1699)			return value;
            		}
HXLINE(1702)		if (::hx::IsNotNull( this->_hx___restrictRegexp )) {
HXLINE(1704)			value = this->_hx___restrictRegexp->split(value)->join(HX_("",00,00,00,00));
            		}
HXLINE(1713)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,restrictText,return )

void TextEngine_obj::setTextAlignment(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1717_setTextAlignment)
HXLINE(1718)		int lineIndex = -1;
HXLINE(1719)		Float offsetX = ((Float)0.0);
HXLINE(1720)		Float totalWidth = (this->width - ( (Float)(4) ));
HXLINE(1721)		 ::openfl::text::_internal::TextLayoutGroup group;
HXDLIN(1721)		int lineLength;
HXLINE(1722)		bool lineMeasurementsDirty = false;
HXLINE(1724)		{
HXLINE(1724)			int _g = 0;
HXDLIN(1724)			int _g1 = this->layoutGroups->get_length();
HXDLIN(1724)			while((_g < _g1)){
HXLINE(1724)				_g = (_g + 1);
HXDLIN(1724)				int i = (_g - 1);
HXLINE(1726)				group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1728)				if ((group->lineIndex != lineIndex)) {
HXLINE(1730)					lineIndex = group->lineIndex;
HXLINE(1731)					totalWidth = ((this->width - ( (Float)(4) )) - ( (Float)(group->format->rightMargin) ));
HXLINE(1733)					 ::Dynamic _hx_switch_0 = group->format->align;
            					if (  (_hx_switch_0==0) ){
HXLINE(1736)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1738)							offsetX = ( (Float)(::Math_obj::round(((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)(2) )))) );
            						}
            						else {
HXLINE(1742)							offsetX = ( (Float)(0) );
            						}
HXLINE(1736)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1756)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1758)							lineLength = 1;
HXLINE(1760)							{
HXLINE(1760)								int _g = (i + 1);
HXDLIN(1760)								int _g1 = this->layoutGroups->get_length();
HXDLIN(1760)								while((_g < _g1)){
HXLINE(1760)									_g = (_g + 1);
HXDLIN(1760)									int j = (_g - 1);
HXLINE(1762)									if ((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->lineIndex == lineIndex)) {
HXLINE(1764)										bool _hx_tmp;
HXDLIN(1764)										if ((j != 0)) {
HXLINE(1764)											::String _hx_tmp1 = this->text;
HXDLIN(1764)											_hx_tmp = ::hx::IsEq( _hx_tmp1.charCodeAt((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->startIndex - 1)),32 );
            										}
            										else {
HXLINE(1764)											_hx_tmp = true;
            										}
HXDLIN(1764)										if (_hx_tmp) {
HXLINE(1766)											lineLength = (lineLength + 1);
            										}
            									}
            									else {
HXLINE(1771)										goto _hx_goto_126;
            									}
            								}
            								_hx_goto_126:;
            							}
HXLINE(1775)							if ((lineLength > 1)) {
HXLINE(1777)								group = this->layoutGroups->get(((i + lineLength) - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1779)								 ::Dynamic endChar = this->text.charCodeAt(group->endIndex);
HXLINE(1780)								bool _hx_tmp;
HXDLIN(1780)								bool _hx_tmp1;
HXDLIN(1780)								if ((group->endIndex < this->text.length)) {
HXLINE(1780)									_hx_tmp1 = ::hx::IsNotEq( endChar,10 );
            								}
            								else {
HXLINE(1780)									_hx_tmp1 = false;
            								}
HXDLIN(1780)								if (_hx_tmp1) {
HXLINE(1780)									_hx_tmp = ::hx::IsNotEq( endChar,13 );
            								}
            								else {
HXLINE(1780)									_hx_tmp = false;
            								}
HXDLIN(1780)								if (_hx_tmp) {
HXLINE(1782)									offsetX = ((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)((lineLength - 1)) ));
HXLINE(1783)									lineMeasurementsDirty = true;
HXLINE(1785)									int j = 1;
HXLINE(1786)									while(true){
HXLINE(1795)										 ::openfl::text::_internal::TextLayoutGroup fh = this->layoutGroups->get((i + j)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1795)										fh->offsetX = (fh->offsetX + (offsetX * ( (Float)(j) )));
HXLINE(1797)										j = (j + 1);
HXLINE(1786)										if (!((j < lineLength))) {
HXLINE(1786)											goto _hx_goto_127;
            										}
            									}
            									_hx_goto_127:;
            								}
            							}
            						}
HXLINE(1802)						offsetX = ( (Float)(0) );
HXLINE(1755)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==4) ){
HXLINE(1746)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1748)							offsetX = ( (Float)(::Math_obj::round((totalWidth - this->lineWidths->get(lineIndex)))) );
            						}
            						else {
HXLINE(1752)							offsetX = ( (Float)(0) );
            						}
HXLINE(1746)						goto _hx_goto_125;
            					}
            					/* default */{
HXLINE(1805)						offsetX = ( (Float)(0) );
            					}
            					_hx_goto_125:;
            				}
HXLINE(1809)				if ((offsetX > 0)) {
HXLINE(1811)					 ::openfl::text::_internal::TextLayoutGroup group1 = group;
HXDLIN(1811)					group1->offsetX = (group1->offsetX + offsetX);
            				}
            			}
            		}
HXLINE(1815)		if (lineMeasurementsDirty) {
HXLINE(1819)			this->getLineMeasurements();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

::String TextEngine_obj::trimText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1824_trimText)
HXLINE(1825)		if (::hx::IsNull( value )) {
HXLINE(1827)			return value;
            		}
HXLINE(1830)		bool _hx_tmp;
HXDLIN(1830)		if ((this->maxChars > 0)) {
HXLINE(1830)			_hx_tmp = (value.length > this->maxChars);
            		}
            		else {
HXLINE(1830)			_hx_tmp = false;
            		}
HXDLIN(1830)		if (_hx_tmp) {
HXLINE(1832)			value = value.substr(0,this->maxChars);
            		}
HXLINE(1835)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,trimText,return )

void TextEngine_obj::update(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1839_update)
HXLINE(1840)		bool _hx_tmp;
HXDLIN(1840)		if (::hx::IsNotNull( this->text )) {
HXLINE(1840)			_hx_tmp = (this->textFormatRanges->get_length() == 0);
            		}
            		else {
HXLINE(1840)			_hx_tmp = true;
            		}
HXDLIN(1840)		if (_hx_tmp) {
HXLINE(1842)			this->lineAscents->set_length(0);
HXLINE(1843)			this->lineBreaks->set_length(0);
HXLINE(1844)			this->lineDescents->set_length(0);
HXLINE(1845)			this->lineLeadings->set_length(0);
HXLINE(1846)			this->lineHeights->set_length(0);
HXLINE(1847)			this->lineWidths->set_length(0);
HXLINE(1848)			this->layoutGroups->set_length(0);
HXLINE(1850)			this->textWidth = ( (Float)(0) );
HXLINE(1851)			this->textHeight = ( (Float)(0) );
HXLINE(1852)			this->numLines = 1;
HXLINE(1853)			this->maxScrollH = 0;
HXLINE(1854)			this->maxScrollV = 1;
HXLINE(1855)			this->bottomScrollV = 1;
            		}
            		else {
HXLINE(1859)			this->getLineBreaks();
HXLINE(1860)			this->getLayoutGroups();
HXLINE(1861)			this->getLineMeasurements();
HXLINE(1862)			this->setTextAlignment();
            		}
HXLINE(1865)		this->getBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::get_bottomScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1872_get_bottomScrollV)
HXDLIN(1872)		bool _hx_tmp;
HXDLIN(1872)		if ((this->numLines != 1)) {
HXDLIN(1872)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1872)			_hx_tmp = true;
            		}
HXDLIN(1872)		if (_hx_tmp) {
HXLINE(1874)			return 1;
            		}
            		else {
HXLINE(1878)			int ret = this->lineHeights->get_length();
HXLINE(1880)			Float tempHeight;
HXDLIN(1880)			if ((this->lineLeadings->get_length() == ret)) {
HXLINE(1880)				tempHeight = -(this->lineLeadings->get((ret - 1)));
            			}
            			else {
HXLINE(1880)				tempHeight = ((Float)0.0);
            			}
HXLINE(1882)			{
HXLINE(1882)				int _g;
HXDLIN(1882)				if ((this->get_scrollV() > 0)) {
HXLINE(1882)					_g = this->get_scrollV();
            				}
            				else {
HXLINE(1882)					_g = 1;
            				}
HXDLIN(1882)				int _g1 = (_g - 1);
HXDLIN(1882)				int _g2 = this->lineHeights->get_length();
HXDLIN(1882)				while((_g1 < _g2)){
HXLINE(1882)					_g1 = (_g1 + 1);
HXDLIN(1882)					int i = (_g1 - 1);
HXLINE(1884)					Float lineHeight = this->lineHeights->get(i);
HXLINE(1886)					tempHeight = (tempHeight + lineHeight);
HXLINE(1888)					if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1890)						int ret1;
HXDLIN(1890)						if (((tempHeight - this->height) >= 0)) {
HXLINE(1890)							ret1 = 0;
            						}
            						else {
HXLINE(1890)							ret1 = 1;
            						}
HXDLIN(1890)						ret = (i + ret1);
HXLINE(1891)						goto _hx_goto_131;
            					}
            				}
            				_hx_goto_131:;
            			}
HXLINE(1906)			if ((ret < this->get_scrollV())) {
HXLINE(1906)				return this->get_scrollV();
            			}
HXLINE(1912)			return ret;
            		}
HXLINE(1872)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_bottomScrollV,return )

int TextEngine_obj::get_maxScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1919_get_maxScrollV)
HXDLIN(1919)		bool _hx_tmp;
HXDLIN(1919)		if ((this->numLines != 1)) {
HXDLIN(1919)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1919)			_hx_tmp = true;
            		}
HXDLIN(1919)		if (_hx_tmp) {
HXLINE(1921)			return 1;
            		}
            		else {
HXLINE(1925)			int i = (this->numLines - 1);
HXDLIN(1925)			Float tempHeight = ((Float)0.0);
HXLINE(1926)			int j = i;
HXLINE(1929)			while((i >= 0)){
HXLINE(1931)				tempHeight = (tempHeight + this->lineHeights->get(i));
HXLINE(1933)				if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1935)					int i1;
HXDLIN(1935)					if (((tempHeight - this->height) < 0)) {
HXLINE(1935)						i1 = 1;
            					}
            					else {
HXLINE(1935)						i1 = 2;
            					}
HXDLIN(1935)					i = (i + i1);
HXLINE(1936)					goto _hx_goto_133;
            				}
HXLINE(1938)				i = (i - 1);
            			}
            			_hx_goto_133:;
HXLINE(1954)			if ((i < 1)) {
HXLINE(1954)				return 1;
            			}
HXLINE(1955)			return i;
            		}
HXLINE(1919)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_maxScrollV,return )

::String TextEngine_obj::set_restrict(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1960_set_restrict)
HXLINE(1961)		if ((this->restrict == value)) {
HXLINE(1963)			return this->restrict;
            		}
HXLINE(1966)		this->restrict = value;
HXLINE(1968)		bool _hx_tmp;
HXDLIN(1968)		if (::hx::IsNotNull( this->restrict )) {
HXLINE(1968)			_hx_tmp = (this->restrict.length == 0);
            		}
            		else {
HXLINE(1968)			_hx_tmp = true;
            		}
HXDLIN(1968)		if (_hx_tmp) {
HXLINE(1970)			this->_hx___restrictRegexp = null();
            		}
            		else {
HXLINE(1974)			this->_hx___restrictRegexp = this->createRestrictRegexp(value);
            		}
HXLINE(1977)		return this->restrict;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_restrict,return )

int TextEngine_obj::get_scrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1981_get_scrollV)
HXLINE(1982)		bool _hx_tmp;
HXDLIN(1982)		if ((this->numLines != 1)) {
HXLINE(1982)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXLINE(1982)			_hx_tmp = true;
            		}
HXDLIN(1982)		if (_hx_tmp) {
HXLINE(1982)			return 1;
            		}
HXLINE(1984)		int max = this->get_maxScrollV();
HXLINE(1987)		if ((this->scrollV > max)) {
HXLINE(1987)			return max;
            		}
HXLINE(1989)		return this->scrollV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_scrollV,return )

int TextEngine_obj::set_scrollV(int value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1993_set_scrollV)
HXLINE(1994)		if ((value < 1)) {
HXLINE(1994)			value = 1;
            		}
            		else {
HXLINE(1995)			if ((value > this->get_maxScrollV())) {
HXLINE(1995)				value = this->get_maxScrollV();
            			}
            		}
HXLINE(1997)		return (this->scrollV = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_scrollV,return )

::String TextEngine_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_2002_set_text)
HXDLIN(2002)		return (this->text = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_text,return )

int TextEngine_obj::GUTTER;

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

 ::haxe::ds::StringMap TextEngine_obj::_hx___defaultFonts;

 ::openfl::text::Font TextEngine_obj::findFont(::String name){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_207_findFont)
HXLINE( 211)		{
HXLINE( 211)			int _g = 0;
HXDLIN( 211)			::Array< ::Dynamic> _g1 = ::openfl::text::Font_obj::_hx___registeredFonts;
HXDLIN( 211)			while((_g < _g1->length)){
HXLINE( 211)				 ::openfl::text::Font registeredFont = _g1->__get(_g).StaticCast<  ::openfl::text::Font >();
HXDLIN( 211)				_g = (_g + 1);
HXLINE( 213)				if (::hx::IsNull( registeredFont )) {
HXLINE( 213)					continue;
            				}
HXLINE( 215)				bool _hx_tmp;
HXDLIN( 215)				if ((registeredFont->name != name)) {
HXLINE( 216)					if (::hx::IsNotNull( registeredFont->_hx___fontPath )) {
HXLINE( 217)						if ((registeredFont->_hx___fontPath != name)) {
HXLINE( 215)							_hx_tmp = (registeredFont->_hx___fontPathWithoutDirectory == name);
            						}
            						else {
HXLINE( 215)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 215)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 215)					_hx_tmp = true;
            				}
HXDLIN( 215)				if (_hx_tmp) {
HXLINE( 219)					if (registeredFont->_hx___initialize()) {
HXLINE( 221)						return registeredFont;
            					}
            				}
            			}
            		}
HXLINE( 230)		 ::openfl::text::Font font = ::openfl::text::Font_obj::fromFile(name);
HXLINE( 232)		if (::hx::IsNotNull( font )) {
HXLINE( 234)			::openfl::text::Font_obj::_hx___registeredFonts->push(font);
HXLINE( 235)			::openfl::text::Font_obj::_hx___fontByName->set(font->name,font);
HXLINE( 236)			return font;
            		}
HXLINE( 240)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

 ::openfl::text::Font TextEngine_obj::findFontVariant( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_244_findFontVariant)
HXLINE( 245)		::String fontName = format->font;
HXLINE( 246)		 ::Dynamic bold = format->bold;
HXLINE( 247)		 ::Dynamic italic = format->italic;
HXLINE( 249)		if (::hx::IsNull( fontName )) {
HXLINE( 249)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 250)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 252)		bool _hx_tmp;
HXDLIN( 252)		bool _hx_tmp1;
HXDLIN( 252)		if (( (bool)(bold) )) {
HXLINE( 252)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 252)			_hx_tmp1 = false;
            		}
HXDLIN( 252)		if (_hx_tmp1) {
HXLINE( 252)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 252)			_hx_tmp = false;
            		}
HXDLIN( 252)		if (_hx_tmp) {
HXLINE( 254)			return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 256)			bool _hx_tmp;
HXDLIN( 256)			if (( (bool)(bold) )) {
HXLINE( 256)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 256)				_hx_tmp = false;
            			}
HXDLIN( 256)			if (_hx_tmp) {
HXLINE( 258)				return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 260)				bool _hx_tmp;
HXDLIN( 260)				if (( (bool)(italic) )) {
HXLINE( 260)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 260)					_hx_tmp = false;
            				}
HXDLIN( 260)				if (_hx_tmp) {
HXLINE( 262)					return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            			}
            		}
HXLINE( 265)		return ::openfl::text::_internal::TextEngine_obj::findFont(fontName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFontVariant,return )

 ::openfl::text::Font TextEngine_obj::getDefaultFont(::String name,bool bold,bool italic){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_301_getDefaultFont)
HXLINE( 302)		if (::hx::IsNull( ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::openfl::text::Font _hx_run(::Array< ::String > list){
            				HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_310_getDefaultFont)
HXLINE( 311)				 ::openfl::text::Font font = null();
HXLINE( 312)				{
HXLINE( 312)					int _g = 0;
HXDLIN( 312)					while((_g < list->length)){
HXLINE( 312)						::String path = list->__get(_g);
HXDLIN( 312)						_g = (_g + 1);
HXLINE( 314)						font = ::openfl::text::_internal::TextEngine_obj::findFont(path);
HXLINE( 315)						if (::hx::IsNotNull( font )) {
HXLINE( 315)							goto _hx_goto_142;
            						}
            					}
            					_hx_goto_142:;
            				}
HXLINE( 317)				return font;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 304)			::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 307)			::String systemFontDirectory = ::lime::_hx_system::System_obj::get_fontsDirectory();
HXLINE( 309)			 ::Dynamic processFontList =  ::Dynamic(new _hx_Closure_0());
HXLINE( 321)			{
HXLINE( 321)				::Dynamic this1 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 322)				 ::openfl::text::Font value = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arial.ttf",2c,34,8e,d8)));
HXDLIN( 322)				 ::openfl::text::Font value1 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbd.ttf",ee,27,90,25)));
HXLINE( 323)				 ::openfl::text::Font value2 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/ariali.ttf",2d,c9,3e,6e)));
HXLINE( 321)				( ( ::haxe::ds::StringMap)(this1) )->set(HX_("_sans",32,a0,5e,ff), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value,value1,value2,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbi.ttf",73,0e,91,06)))));
            			}
HXLINE( 325)			{
HXLINE( 325)				::Dynamic this2 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 326)				 ::openfl::text::Font value3 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/times.ttf",2f,58,44,c5)));
HXDLIN( 326)				 ::openfl::text::Font value4 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbd.ttf",b1,92,19,47)));
HXLINE( 327)				 ::openfl::text::Font value5 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesi.ttf",ca,27,e8,a0)));
HXLINE( 325)				( ( ::haxe::ds::StringMap)(this2) )->set(HX_("_serif",be,66,15,76), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value3,value4,value5,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbi.ttf",36,79,1a,28)))));
            			}
HXLINE( 329)			{
HXLINE( 329)				::Dynamic this3 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 330)				 ::openfl::text::Font value6 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/cour.ttf",30,7b,d2,6a)));
HXDLIN( 330)				 ::openfl::text::Font value7 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbd.ttf",f2,37,b7,06)));
HXLINE( 331)				 ::openfl::text::Font value8 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/couri.ttf",a9,a5,b8,d7)));
HXLINE( 329)				( ( ::haxe::ds::StringMap)(this3) )->set(HX_("_typewriter",0c,5e,52,94), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value6,value7,value8,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbi.ttf",77,1e,b8,e7)))));
            			}
            		}
HXLINE( 423)		 ::openfl::text::_internal::_TextEngine::DefaultFontSet fontSet = ( ( ::openfl::text::_internal::_TextEngine::DefaultFontSet)(::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->get(name)) );
HXLINE( 424)		if (::hx::IsNull( fontSet )) {
HXLINE( 424)			return null();
            		}
HXLINE( 426)		bool _hx_tmp;
HXDLIN( 426)		bool _hx_tmp1;
HXDLIN( 426)		if (bold) {
HXLINE( 426)			_hx_tmp1 = italic;
            		}
            		else {
HXLINE( 426)			_hx_tmp1 = false;
            		}
HXDLIN( 426)		if (_hx_tmp1) {
HXLINE( 426)			_hx_tmp = ::hx::IsNotNull( fontSet->boldItalic );
            		}
            		else {
HXLINE( 426)			_hx_tmp = false;
            		}
HXDLIN( 426)		if (_hx_tmp) {
HXLINE( 426)			return fontSet->boldItalic;
            		}
            		else {
HXLINE( 426)			bool _hx_tmp;
HXDLIN( 426)			if (italic) {
HXLINE( 426)				_hx_tmp = ::hx::IsNotNull( fontSet->italic );
            			}
            			else {
HXLINE( 426)				_hx_tmp = false;
            			}
HXDLIN( 426)			if (_hx_tmp) {
HXLINE( 426)				return fontSet->italic;
            			}
            			else {
HXLINE( 426)				bool _hx_tmp;
HXDLIN( 426)				if (bold) {
HXLINE( 426)					_hx_tmp = ::hx::IsNotNull( fontSet->bold );
            				}
            				else {
HXLINE( 426)					_hx_tmp = false;
            				}
HXDLIN( 426)				if (_hx_tmp) {
HXLINE( 426)					return fontSet->bold;
            				}
            				else {
HXLINE( 426)					return fontSet->normal;
            				}
            			}
            		}
HXDLIN( 426)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextEngine_obj,getDefaultFont,return )

Float TextEngine_obj::getFormatHeight( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_430_getFormatHeight)
HXLINE( 431)		Float ascent;
HXDLIN( 431)		Float descent;
HXLINE( 441)		 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(format);
HXLINE( 443)		if (::hx::IsNotNull( format->_hx___ascent )) {
HXLINE( 445)			ascent = (( (Float)(format->size) ) * ( (Float)(format->_hx___ascent) ));
HXLINE( 446)			descent = (( (Float)(format->size) ) * ( (Float)(format->_hx___descent) ));
            		}
            		else {
HXLINE( 448)			bool _hx_tmp;
HXDLIN( 448)			if (::hx::IsNotNull( font )) {
HXLINE( 448)				_hx_tmp = (font->unitsPerEM != 0);
            			}
            			else {
HXLINE( 448)				_hx_tmp = false;
            			}
HXDLIN( 448)			if (_hx_tmp) {
HXLINE( 451)				ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) ));
HXLINE( 452)				descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) )));
            			}
            			else {
HXLINE( 460)				ascent = ( (Float)(format->size) );
HXLINE( 461)				descent = (( (Float)(format->size) ) * ((Float)0.185));
            			}
            		}
HXLINE( 431)		int leading = ( (int)(format->leading) );
HXLINE( 466)		return ((ascent + descent) + leading);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFormatHeight,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_470_getFont)
HXLINE( 471)		::String fontName = format->font;
HXLINE( 472)		 ::Dynamic bold = format->bold;
HXLINE( 473)		 ::Dynamic italic = format->italic;
HXLINE( 475)		if (::hx::IsNull( fontName )) {
HXLINE( 475)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 476)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 478)		bool _hx_tmp;
HXDLIN( 478)		bool _hx_tmp1;
HXDLIN( 478)		if (( (bool)(bold) )) {
HXLINE( 478)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 478)			_hx_tmp1 = false;
            		}
HXDLIN( 478)		if (_hx_tmp1) {
HXLINE( 478)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 478)			_hx_tmp = false;
            		}
HXDLIN( 478)		if (_hx_tmp) {
HXLINE( 480)			fontName = (fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94));
HXLINE( 481)			bold = false;
HXLINE( 482)			italic = false;
            		}
            		else {
HXLINE( 484)			bool _hx_tmp;
HXDLIN( 484)			if (( (bool)(bold) )) {
HXLINE( 484)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 484)				_hx_tmp = false;
            			}
HXDLIN( 484)			if (_hx_tmp) {
HXLINE( 486)				fontName = (fontNamePrefix + HX_(" Bold",c5,3d,c7,98));
HXLINE( 487)				bold = false;
            			}
            			else {
HXLINE( 489)				bool _hx_tmp;
HXDLIN( 489)				if (( (bool)(italic) )) {
HXLINE( 489)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 489)					_hx_tmp = false;
            				}
HXDLIN( 489)				if (_hx_tmp) {
HXLINE( 491)					fontName = (fontNamePrefix + HX_(" Italic",30,7b,a7,6d));
HXLINE( 492)					italic = false;
            				}
            				else {
HXLINE( 498)					bool _hx_tmp;
HXDLIN( 498)					if (( (bool)(bold) )) {
HXLINE( 498)						if ((fontName.indexOf(HX_(" Bold ",bb,ce,8e,15),null()) <= -1)) {
HXLINE( 498)							_hx_tmp = ::StringTools_obj::endsWith(fontName,HX_(" Bold",c5,3d,c7,98));
            						}
            						else {
HXLINE( 498)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 498)						_hx_tmp = false;
            					}
HXDLIN( 498)					if (_hx_tmp) {
HXLINE( 500)						bold = false;
            					}
HXLINE( 503)					bool _hx_tmp1;
HXDLIN( 503)					if (( (bool)(italic) )) {
HXLINE( 503)						if ((fontName.indexOf(HX_(" Italic ",f0,4e,e4,84),null()) <= -1)) {
HXLINE( 503)							_hx_tmp1 = ::StringTools_obj::endsWith(fontName,HX_(" Italic",30,7b,a7,6d));
            						}
            						else {
HXLINE( 503)							_hx_tmp1 = true;
            						}
            					}
            					else {
HXLINE( 503)						_hx_tmp1 = false;
            					}
HXDLIN( 503)					if (_hx_tmp1) {
HXLINE( 505)						italic = false;
            					}
            				}
            			}
            		}
HXLINE( 509)		::String font;
HXDLIN( 509)		if (( (bool)(italic) )) {
HXLINE( 509)			font = HX_("italic ",30,e3,44,91);
            		}
            		else {
HXLINE( 509)			font = HX_("normal ",19,70,da,2b);
            		}
HXLINE( 510)		font = (font + HX_("normal ",19,70,da,2b));
HXLINE( 511)		::String font1;
HXDLIN( 511)		if (( (bool)(bold) )) {
HXLINE( 511)			font1 = HX_("bold ",fb,d2,f5,b6);
            		}
            		else {
HXLINE( 511)			font1 = HX_("normal ",19,70,da,2b);
            		}
HXDLIN( 511)		font = (font + font1);
HXLINE( 512)		font = (font + (format->size + HX_("px",08,62,00,00)));
HXLINE( 514)		font = (font + ((HX_("/",2f,00,00,00) + (format->size + 3)) + HX_("px ",18,65,55,00)));
HXLINE( 516)		::String font2;
HXDLIN( 516)		::String _hx_switch_0 = fontName;
            		if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ){
HXLINE( 516)			font2 = HX_("sans-serif",c3,60,fb,08);
HXDLIN( 516)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_serif",be,66,15,76)) ){
HXLINE( 516)			font2 = HX_("serif",7d,1f,2e,7a);
HXDLIN( 516)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 516)			font2 = HX_("monospace",c3,d1,e5,5e);
HXDLIN( 516)			goto _hx_goto_146;
            		}
            		/* default */{
HXLINE( 516)			font2 = ((HX_("'",27,00,00,00) +  ::EReg_obj::__alloc( HX_CTX ,HX_("^[\\s'\"]+(.*)[\\s'\"]+$",eb,e4,eb,f5),HX_("",00,00,00,00))->replace(fontName,HX_("$1",8d,1f,00,00))) + HX_("'",27,00,00,00));
            		}
            		_hx_goto_146:;
HXDLIN( 516)		font = (font + (HX_("",00,00,00,00) + font2));
HXLINE( 524)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

 ::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_528_getFontInstance)
HXLINE( 532)		 ::openfl::text::Font instance = null();
HXLINE( 533)		 ::Dynamic fontList = null();
HXLINE( 535)		bool _hx_tmp;
HXDLIN( 535)		if (::hx::IsNotNull( format )) {
HXLINE( 535)			_hx_tmp = ::hx::IsNotNull( format->font );
            		}
            		else {
HXLINE( 535)			_hx_tmp = false;
            		}
HXDLIN( 535)		if (_hx_tmp) {
HXLINE( 537)			::String _hx_switch_0 = format->font;
            			if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ||  (_hx_switch_0==HX_("_serif",be,66,15,76)) ||  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 540)				instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(format->font,( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 541)				if (::hx::IsNotNull( instance )) {
HXLINE( 541)					return instance;
            				}
HXLINE( 539)				goto _hx_goto_148;
            			}
            			/* default */{
            			}
            			_hx_goto_148:;
HXLINE( 545)			instance = ::openfl::text::_internal::TextEngine_obj::findFontVariant(format);
HXLINE( 546)			if (::hx::IsNotNull( instance )) {
HXLINE( 546)				return instance;
            			}
            		}
HXLINE( 549)		instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(HX_("_serif",be,66,15,76),( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 550)		if (::hx::IsNotNull( instance )) {
HXLINE( 550)			return instance;
            		}
HXLINE( 553)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new( ::openfl::text::TextField textField) {
	::hx::ObjectPtr< TextEngine_obj > __this = new TextEngine_obj();
	__this->__construct(textField);
	return __this;
}

::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField textField) {
	TextEngine_obj *__this = (TextEngine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextEngine_obj), true, "openfl.text._internal.TextEngine"));
	*(void **)__this = TextEngine_obj::_hx_vtable;
	__this->__construct(textField);
	return __this;
}

TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textBounds,"textBounds");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_MARK_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_MARK_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_MARK_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(_hx___font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textBounds,"textBounds");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_VISIT_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_VISIT_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_VISIT_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(_hx___font,"__font");
}

::hx::Val TextEngine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"__font") ) { return ::hx::Val( _hx___font ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return ::hx::Val( scrollH ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scrollV() : scrollV ); }
		if (HX_FIELD_EQ(inName,"getLine") ) { return ::hx::Val( getLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return ::hx::Val( maxChars ); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return ::hx::Val( numLines ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { return ::hx::Val( restrict ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		if (HX_FIELD_EQ(inName,"trimText") ) { return ::hx::Val( trimText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return ::hx::Val( multiline ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return ::hx::Val( sharpness ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( textWidth ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return ::hx::Val( embedFonts ); }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return ::hx::Val( lineBreaks ); }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return ::hx::Val( lineWidths ); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return ::hx::Val( maxScrollH ); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxScrollV() : maxScrollV ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return ::hx::Val( selectable ); }
		if (HX_FIELD_EQ(inName,"textBounds") ) { return ::hx::Val( textBounds ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( textHeight ); }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return ::hx::Val( _hx___hasFocus ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return ::hx::Val( gridFitType ); }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return ::hx::Val( lineAscents ); }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return ::hx::Val( lineHeights ); }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return ::hx::Val( _hx___isKeyDown ); }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return ::hx::Val( _hx___cairoFont ); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return ::hx::Val( get_scrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return ::hx::Val( set_scrollV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return ::hx::Val( layoutGroups ); }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return ::hx::Val( lineDescents ); }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return ::hx::Val( lineLeadings ); }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { return ::hx::Val( _hx___shapeCache ); }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return ::hx::Val( _hx___showCursor ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return ::hx::Val( _hx___textLayout ); }
		if (HX_FIELD_EQ(inName,"restrictText") ) { return ::hx::Val( restrictText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return ::hx::Val( set_restrict_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return ::hx::Val( antiAliasType ); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottomScrollV() : bottomScrollV ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return ::hx::Val( _hx___cursorTimer ); }
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { return ::hx::Val( getLineBreaks_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return ::hx::Val( get_maxScrollV_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return ::hx::Val( _hx___measuredWidth ); }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return ::hx::Val( getLayoutGroups_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return ::hx::Val( textFormatRanges ); }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return ::hx::Val( _hx___measuredHeight ); }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { return ::hx::Val( _hx___restrictRegexp ); }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return ::hx::Val( _hx___selectionStart ); }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { return ::hx::Val( _hx___useIntAdvances ); }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return ::hx::Val( setTextAlignment_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return ::hx::Val( getLineBreakIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return ::hx::Val( get_bottomScrollV_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return ::hx::Val( getLineMeasurements_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createRestrictRegexp") ) { return ::hx::Val( createRestrictRegexp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = ( _hx___defaultFonts ); return true; }
		if (HX_FIELD_EQ(inName,"getDefaultFont") ) { outValue = getDefaultFont_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findFontVariant") ) { outValue = findFontVariant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFormatHeight") ) { outValue = getFormatHeight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val TextEngine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { _hx___font=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollV(inValue.Cast< int >()) );scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrict(inValue.Cast< ::String >()) );restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBounds") ) { textBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { _hx___hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { _hx___isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { _hx___cairoFont=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { _hx___shapeCache=inValue.Cast<  ::openfl::text::_internal::ShapeCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { _hx___showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { _hx___textLayout=inValue.Cast<  ::openfl::text::_internal::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { _hx___cursorTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { _hx___measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { _hx___measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { _hx___restrictRegexp=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { _hx___selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { _hx___useIntAdvances=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { _hx___defaultFonts=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antiAliasType",68,c4,fa,e7));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("bottomScrollV",fe,f7,87,8b));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("gridFitType",05,f3,13,b4));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("layoutGroups",9e,a2,6c,37));
	outFields->push(HX_("lineAscents",45,0c,c2,3e));
	outFields->push(HX_("lineBreaks",e8,fd,5b,ea));
	outFields->push(HX_("lineDescents",0d,ad,64,49));
	outFields->push(HX_("lineLeadings",01,23,97,76));
	outFields->push(HX_("lineHeights",18,99,8e,3e));
	outFields->push(HX_("lineWidths",c1,8a,a4,20));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("maxScrollH",57,ad,fc,9a));
	outFields->push(HX_("maxScrollV",65,ad,fc,9a));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("numLines",d9,f1,11,32));
	outFields->push(HX_("restrict",3c,cb,9e,f1));
	outFields->push(HX_("scrollH",9b,33,d8,30));
	outFields->push(HX_("scrollV",a9,33,d8,30));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("sharpness",81,22,25,1b));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textBounds",02,07,0e,9d));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textFormatRanges",fa,0e,49,a2));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("__cursorTimer",ef,59,8f,e1));
	outFields->push(HX_("__hasFocus",3e,1d,1a,34));
	outFields->push(HX_("__isKeyDown",b7,2f,72,ce));
	outFields->push(HX_("__measuredHeight",ed,b6,23,42));
	outFields->push(HX_("__measuredWidth",c0,49,ec,02));
	outFields->push(HX_("__restrictRegexp",45,9f,ae,a9));
	outFields->push(HX_("__selectionStart",96,e3,b9,43));
	outFields->push(HX_("__shapeCache",81,aa,e8,5f));
	outFields->push(HX_("__showCursor",d3,ae,f0,e0));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	outFields->push(HX_("__textLayout",57,aa,3c,c8));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__useIntAdvances",d9,17,72,7d));
	outFields->push(HX_("__cairoFont",57,e7,b5,28));
	outFields->push(HX_("__font",ef,c0,b8,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextEngine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_("antiAliasType",68,c4,fa,e7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,autoSize),HX_("autoSize",d0,8f,79,2f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_("bottomScrollV",fe,f7,87,8b)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_("embedFonts",2b,c7,e1,8e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,gridFitType),HX_("gridFitType",05,f3,13,b4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_("layoutGroups",9e,a2,6c,37)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineAscents),HX_("lineAscents",45,0c,c2,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_("lineBreaks",e8,fd,5b,ea)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineDescents),HX_("lineDescents",0d,ad,64,49)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_("lineLeadings",01,23,97,76)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineHeights),HX_("lineHeights",18,99,8e,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineWidths),HX_("lineWidths",c1,8a,a4,20)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_("maxChars",99,ef,d0,ef)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_("maxScrollH",57,ad,fc,9a)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_("maxScrollV",65,ad,fc,9a)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_("multiline",ed,d2,11,9e)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_("numLines",d9,f1,11,32)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_("restrict",3c,cb,9e,f1)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_("scrollH",9b,33,d8,30)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_("scrollV",a9,33,d8,30)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_("selectable",96,b6,2a,c4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_("sharpness",81,22,25,1b)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,textBounds),HX_("textBounds",02,07,0e,9d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_("textFormatRanges",fa,0e,49,a2)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextEngine_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(TextEngine_obj,_hx___cursorTimer),HX_("__cursorTimer",ef,59,8f,e1)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___hasFocus),HX_("__hasFocus",3e,1d,1a,34)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___isKeyDown),HX_("__isKeyDown",b7,2f,72,ce)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredHeight),HX_("__measuredHeight",ed,b6,23,42)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredWidth),HX_("__measuredWidth",c0,49,ec,02)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TextEngine_obj,_hx___restrictRegexp),HX_("__restrictRegexp",45,9f,ae,a9)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___selectionStart),HX_("__selectionStart",96,e3,b9,43)},
	{::hx::fsObject /*  ::openfl::text::_internal::ShapeCache */ ,(int)offsetof(TextEngine_obj,_hx___shapeCache),HX_("__shapeCache",81,aa,e8,5f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___showCursor),HX_("__showCursor",d3,ae,f0,e0)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextEngine_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{::hx::fsObject /*  ::openfl::text::_internal::TextLayout */ ,(int)offsetof(TextEngine_obj,_hx___textLayout),HX_("__textLayout",57,aa,3c,c8)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextEngine_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___useIntAdvances),HX_("__useIntAdvances",d9,17,72,7d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___cairoFont),HX_("__cairoFont",57,e7,b5,28)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(TextEngine_obj,_hx___font),HX_("__font",ef,c0,b8,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextEngine_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextEngine_obj::GUTTER,HX_("GUTTER",1b,d3,2b,8c)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_("UTF8_TAB",07,d5,41,1d)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_("UTF8_ENDLINE",01,29,41,cf)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_("UTF8_SPACE",f8,7b,a9,c7)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_("UTF8_HYPHEN",60,3c,3f,bf)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TextEngine_obj::_hx___defaultFonts,HX_("__defaultFonts",63,76,ad,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextEngine_obj_sMemberFields[] = {
	HX_("antiAliasType",68,c4,fa,e7),
	HX_("autoSize",d0,8f,79,2f),
	HX_("background",ee,93,1d,26),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("border",ec,4c,1a,64),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("bottomScrollV",fe,f7,87,8b),
	HX_("bounds",75,86,1d,66),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("embedFonts",2b,c7,e1,8e),
	HX_("gridFitType",05,f3,13,b4),
	HX_("height",e7,07,4c,02),
	HX_("layoutGroups",9e,a2,6c,37),
	HX_("lineAscents",45,0c,c2,3e),
	HX_("lineBreaks",e8,fd,5b,ea),
	HX_("lineDescents",0d,ad,64,49),
	HX_("lineLeadings",01,23,97,76),
	HX_("lineHeights",18,99,8e,3e),
	HX_("lineWidths",c1,8a,a4,20),
	HX_("maxChars",99,ef,d0,ef),
	HX_("maxScrollH",57,ad,fc,9a),
	HX_("maxScrollV",65,ad,fc,9a),
	HX_("multiline",ed,d2,11,9e),
	HX_("numLines",d9,f1,11,32),
	HX_("restrict",3c,cb,9e,f1),
	HX_("scrollH",9b,33,d8,30),
	HX_("scrollV",a9,33,d8,30),
	HX_("selectable",96,b6,2a,c4),
	HX_("sharpness",81,22,25,1b),
	HX_("text",ad,cc,f9,4c),
	HX_("textBounds",02,07,0e,9d),
	HX_("textHeight",74,88,3c,39),
	HX_("textFormatRanges",fa,0e,49,a2),
	HX_("textWidth",19,46,50,63),
	HX_("type",ba,f2,08,4d),
	HX_("width",06,b6,62,ca),
	HX_("wordWrap",b4,14,db,00),
	HX_("textField",cd,24,81,99),
	HX_("__cursorTimer",ef,59,8f,e1),
	HX_("__hasFocus",3e,1d,1a,34),
	HX_("__isKeyDown",b7,2f,72,ce),
	HX_("__measuredHeight",ed,b6,23,42),
	HX_("__measuredWidth",c0,49,ec,02),
	HX_("__restrictRegexp",45,9f,ae,a9),
	HX_("__selectionStart",96,e3,b9,43),
	HX_("__shapeCache",81,aa,e8,5f),
	HX_("__showCursor",d3,ae,f0,e0),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("__textLayout",57,aa,3c,c8),
	HX_("__texture",bb,19,2f,20),
	HX_("__useIntAdvances",d9,17,72,7d),
	HX_("__cairoFont",57,e7,b5,28),
	HX_("__font",ef,c0,b8,f2),
	HX_("createRestrictRegexp",41,d0,6b,e1),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getLine",aa,c7,35,1a),
	HX_("getLineBreaks",1e,5a,ce,46),
	HX_("getLineBreakIndex",1d,16,36,36),
	HX_("getLineMeasurements",c1,9f,81,56),
	HX_("getLayoutGroups",54,f8,56,5a),
	HX_("restrictText",09,12,3e,34),
	HX_("setTextAlignment",74,0f,33,62),
	HX_("trimText",af,ae,63,65),
	HX_("update",09,86,05,87),
	HX_("get_bottomScrollV",55,03,f8,91),
	HX_("get_maxScrollV",ae,35,f2,10),
	HX_("set_restrict",b9,a2,b1,bb),
	HX_("get_scrollV",c0,93,d2,b6),
	HX_("set_scrollV",cc,9a,3f,c1),
	HX_("set_text",aa,e1,11,7b),
	::String(null()) };

static void TextEngine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEngine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#endif

::hx::Class TextEngine_obj::__mClass;

static ::String TextEngine_obj_sStaticFields[] = {
	HX_("GUTTER",1b,d3,2b,8c),
	HX_("UTF8_TAB",07,d5,41,1d),
	HX_("UTF8_ENDLINE",01,29,41,cf),
	HX_("UTF8_SPACE",f8,7b,a9,c7),
	HX_("UTF8_HYPHEN",60,3c,3f,bf),
	HX_("__defaultFonts",63,76,ad,da),
	HX_("findFont",a8,6a,54,96),
	HX_("findFontVariant",bd,22,bb,b2),
	HX_("getDefaultFont",3a,aa,1d,9d),
	HX_("getFormatHeight",34,24,4b,62),
	HX_("getFont",85,0d,43,16),
	HX_("getFontInstance",3a,76,96,9e),
	::String(null())
};

void TextEngine_obj::__register()
{
	TextEngine_obj _hx_dummy;
	TextEngine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextEngine",04,88,80,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = TextEngine_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextEngine_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextEngine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextEngine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEngine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEngine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEngine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextEngine_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_39_boot)
HXDLIN(  39)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("__cairoFont",57,e7,b5,28), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_41_boot)
HXDLIN(  41)		GUTTER = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_42_boot)
HXDLIN(  42)		UTF8_TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_43_boot)
HXDLIN(  43)		UTF8_ENDLINE = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_44_boot)
HXDLIN(  44)		UTF8_SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_45_boot)
HXDLIN(  45)		UTF8_HYPHEN = 45;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
