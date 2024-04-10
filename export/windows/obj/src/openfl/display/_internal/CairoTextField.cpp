#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#include <lime/graphics/cairo/CairoGlyph.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTextField
#include <openfl/display/_internal/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
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
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_33_render,"openfl.display._internal.CairoTextField","render",0x63933503,"openfl.display._internal.CairoTextField.render","openfl/display/_internal/CairoTextField.hx",33,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_454_renderDrawable,"openfl.display._internal.CairoTextField","renderDrawable",0x65cf17c1,"openfl.display._internal.CairoTextField.renderDrawable","openfl/display/_internal/CairoTextField.hx",454,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_474_renderDrawableMask,"openfl.display._internal.CairoTextField","renderDrawableMask",0x842bf94d,"openfl.display._internal.CairoTextField.renderDrawableMask","openfl/display/_internal/CairoTextField.hx",474,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_30_boot,"openfl.display._internal.CairoTextField","boot",0x2185989f,"openfl.display._internal.CairoTextField.boot","openfl/display/_internal/CairoTextField.hx",30,0xd777675a)
namespace openfl{
namespace display{
namespace _internal{

void CairoTextField_obj::__construct() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return new CairoTextField_obj; }

void *CairoTextField_obj::_hx_vtable = 0;

Dynamic CairoTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fd3cbef;
}

void CairoTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_a654946cfcca811d_33_render)
HXLINE(  35)		 ::openfl::text::_internal::TextEngine textEngine = textField->_hx___textEngine;
HXLINE(  38)		bool useTextBounds;
HXDLIN(  38)		if (!(textEngine->background)) {
HXLINE(  38)			useTextBounds = textEngine->border;
            		}
            		else {
HXLINE(  38)			useTextBounds = true;
            		}
HXDLIN(  38)		bool useTextBounds1 = !(useTextBounds);
HXLINE(  39)		 ::openfl::geom::Rectangle bounds;
HXDLIN(  39)		if (useTextBounds1) {
HXLINE(  39)			bounds = textEngine->textBounds;
            		}
            		else {
HXLINE(  39)			bounds = textEngine->bounds;
            		}
HXLINE(  40)		 ::openfl::display::Graphics graphics = textField->_hx___graphics;
HXLINE(  41)		 ::lime::graphics::cairo::Cairo cairo = graphics->_hx___cairo;
HXLINE(  42)		Float cursorOffsetX = ((Float)0.0);
HXLINE(  44)		if (textField->_hx___dirty) {
HXLINE(  46)			textField->_hx___updateLayout();
HXLINE(  48)			if (::hx::IsNull( graphics->_hx___bounds )) {
HXLINE(  50)				graphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(  53)			if ((textField->get_text().length == 0)) {
HXLINE(  55)				Float boundsWidth = (textEngine->bounds->width - ( (Float)(4) ));
HXLINE(  56)				 ::Dynamic align = textField->get_defaultTextFormat()->align;
HXLINE(  57)				if (::hx::IsEq( align,3 )) {
HXLINE(  57)					cursorOffsetX = ( (Float)(0) );
            				}
            				else {
HXLINE(  57)					if (::hx::IsEq( align,4 )) {
HXLINE(  57)						cursorOffsetX = boundsWidth;
            					}
            					else {
HXLINE(  57)						cursorOffsetX = (boundsWidth / ( (Float)(2) ));
            					}
            				}
HXLINE(  58)				 ::Dynamic _hx_switch_0 = align;
            				if (  (_hx_switch_0==0) ){
HXLINE(  67)					cursorOffsetX = (cursorOffsetX + (( (Float)(textField->get_defaultTextFormat()->leftMargin) ) / ( (Float)(2) )));
HXLINE(  68)					cursorOffsetX = (cursorOffsetX - (( (Float)(textField->get_defaultTextFormat()->rightMargin) ) / ( (Float)(2) )));
HXLINE(  69)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  70)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  66)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE(  77)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE(  74)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  75)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  76)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  73)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE(  61)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  62)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  63)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  60)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE(  65)					cursorOffsetX = (cursorOffsetX - ( (Float)(textField->get_defaultTextFormat()->rightMargin) ));
HXDLIN(  65)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE(  71)					goto _hx_goto_0;
            				}
            				_hx_goto_0:;
HXLINE(  80)				if (useTextBounds1) {
HXLINE(  82)					bounds->y = textEngine->bounds->y;
HXLINE(  83)					bounds->x = cursorOffsetX;
            				}
            			}
HXLINE(  87)			graphics->_hx___bounds->copyFrom(bounds);
            		}
HXLINE(  96)		Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE(  99)		graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE( 101)		int width = ::Math_obj::round((( (Float)(graphics->_hx___width) ) * pixelRatio));
HXLINE( 102)		int height = ::Math_obj::round((( (Float)(graphics->_hx___height) ) * pixelRatio));
HXLINE( 104)		bool renderable;
HXDLIN( 104)		bool renderable1;
HXDLIN( 104)		if (!(textEngine->border)) {
HXLINE( 104)			renderable1 = textEngine->background;
            		}
            		else {
HXLINE( 104)			renderable1 = true;
            		}
HXDLIN( 104)		if (!(renderable1)) {
HXLINE( 104)			renderable = ::hx::IsNotNull( textEngine->text );
            		}
            		else {
HXLINE( 104)			renderable = true;
            		}
HXLINE( 105)		bool needsUpscaling = false;
HXLINE( 107)		if (::hx::IsNotNull( cairo )) {
HXLINE( 110)			 ::Dynamic surface = graphics->_hx___bitmap->getSurface();
HXLINE( 112)			bool _hx_tmp;
HXDLIN( 112)			if (graphics->_hx___softwareDirty) {
HXLINE( 112)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE( 112)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE( 112)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 112)				_hx_tmp = false;
            			}
HXDLIN( 112)			if (_hx_tmp) {
HXLINE( 114)				needsUpscaling = true;
            			}
HXLINE( 117)			bool _hx_tmp1;
HXDLIN( 117)			if (renderable) {
HXLINE( 117)				_hx_tmp1 = needsUpscaling;
            			}
            			else {
HXLINE( 117)				_hx_tmp1 = true;
            			}
HXDLIN( 117)			if (_hx_tmp1) {
HXLINE( 119)				graphics->_hx___cairo = null();
HXLINE( 120)				graphics->_hx___bitmap = null();
HXLINE( 121)				graphics->_hx___visible = false;
HXLINE( 122)				cairo = null();
            			}
            		}
HXLINE( 126)		bool _hx_tmp;
HXDLIN( 126)		bool _hx_tmp1;
HXDLIN( 126)		bool _hx_tmp2;
HXDLIN( 126)		if ((width > 0)) {
HXLINE( 126)			_hx_tmp2 = (height <= 0);
            		}
            		else {
HXLINE( 126)			_hx_tmp2 = true;
            		}
HXDLIN( 126)		if (!(_hx_tmp2)) {
HXLINE( 128)			bool _hx_tmp;
HXDLIN( 128)			if (!(textField->_hx___dirty)) {
HXLINE( 128)				_hx_tmp = !(graphics->_hx___softwareDirty);
            			}
            			else {
HXLINE( 128)				_hx_tmp = false;
            			}
HXDLIN( 128)			if (_hx_tmp) {
HXLINE( 128)				if (graphics->_hx___visible) {
HXLINE( 126)					_hx_tmp1 = ::hx::IsNotNull( graphics->_hx___bitmap );
            				}
            				else {
HXLINE( 126)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 126)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 126)			_hx_tmp1 = true;
            		}
HXDLIN( 126)		if (!(_hx_tmp1)) {
HXLINE( 126)			_hx_tmp = !(renderable);
            		}
            		else {
HXLINE( 126)			_hx_tmp = true;
            		}
HXDLIN( 126)		if (_hx_tmp) {
HXLINE( 131)			textField->_hx___dirty = false;
HXLINE( 132)			return;
            		}
HXLINE( 135)		if (::hx::IsNull( cairo )) {
HXLINE( 137)			int bitmapWidth;
HXDLIN( 137)			if (needsUpscaling) {
HXLINE( 137)				bitmapWidth = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 137)				bitmapWidth = width;
            			}
HXLINE( 138)			int bitmapHeight;
HXDLIN( 138)			if (needsUpscaling) {
HXLINE( 138)				bitmapHeight = ::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 138)				bitmapHeight = height;
            			}
HXLINE( 140)			bool _hx_tmp;
HXDLIN( 140)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE( 140)				_hx_tmp = ::hx::IsGreater( bitmapWidth,::openfl::display::Graphics_obj::maxTextureWidth );
            			}
            			else {
HXLINE( 140)				_hx_tmp = false;
            			}
HXDLIN( 140)			if (_hx_tmp) {
HXLINE( 142)				bitmapWidth = ( (int)(::openfl::display::Graphics_obj::maxTextureWidth) );
            			}
HXLINE( 145)			bool _hx_tmp1;
HXDLIN( 145)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureHeight )) {
HXLINE( 145)				_hx_tmp1 = ::hx::IsGreater( bitmapHeight,::openfl::display::Graphics_obj::maxTextureHeight );
            			}
            			else {
HXLINE( 145)				_hx_tmp1 = false;
            			}
HXDLIN( 145)			if (_hx_tmp1) {
HXLINE( 147)				bitmapHeight = ( (int)(::openfl::display::Graphics_obj::maxTextureHeight) );
            			}
HXLINE( 150)			 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
HXLINE( 151)			 ::Dynamic surface = bitmap->getSurface();
HXLINE( 152)			graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE( 153)			graphics->_hx___visible = true;
HXLINE( 154)			graphics->_hx___managed = true;
HXLINE( 156)			graphics->_hx___bitmap = bitmap;
HXLINE( 157)			graphics->_hx___bitmapScale = pixelRatio;
HXLINE( 159)			cairo = graphics->_hx___cairo;
HXLINE( 161)			 ::Dynamic options = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
HXLINE( 163)			bool _hx_tmp2;
HXDLIN( 163)			if (::hx::IsEq( textEngine->antiAliasType,0 )) {
HXLINE( 163)				_hx_tmp2 = (textEngine->sharpness == 400);
            			}
            			else {
HXLINE( 163)				_hx_tmp2 = false;
            			}
HXDLIN( 163)			if (_hx_tmp2) {
HXLINE( 165)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,1);
HXLINE( 166)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 167)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,1);
            			}
            			else {
HXLINE( 171)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,2);
HXLINE( 172)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 173)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,5);
            			}
HXLINE( 176)			cairo->set_fontOptions(options);
            		}
            		else {
HXLINE( 180)			cairo->identityMatrix();
HXLINE( 181)			cairo->resetClip();
HXLINE( 183)			cairo->setOperator(0);
HXLINE( 184)			cairo->paint();
HXLINE( 185)			cairo->setOperator(2);
            		}
HXLINE( 188)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 189)		matrix->copyFrom(graphics->_hx___renderTransform);
HXLINE( 190)		matrix->scale(pixelRatio,pixelRatio);
HXLINE( 192)		renderer->applyMatrix(matrix,cairo);
HXLINE( 194)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE( 196)		if (textEngine->border) {
HXLINE( 198)			int _hx_tmp = ::Std_obj::_hx_int((bounds->width - ( (Float)(1) )));
HXDLIN( 198)			cairo->rectangle(((Float)0.5),((Float)0.5),( (Float)(_hx_tmp) ),( (Float)(::Std_obj::_hx_int((bounds->height - ( (Float)(1) )))) ));
            		}
            		else {
HXLINE( 202)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),bounds->width,bounds->height);
            		}
HXLINE( 205)		if (textEngine->background) {
HXLINE( 207)			int color = textEngine->backgroundColor;
HXLINE( 208)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 209)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 210)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 212)			cairo->setSourceRGB(r,g,b);
HXLINE( 213)			cairo->fillPreserve();
            		}
HXLINE( 216)		if (textEngine->border) {
HXLINE( 218)			int color = textEngine->borderColor;
HXLINE( 219)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 220)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 221)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 223)			cairo->setSourceRGB(r,g,b);
HXLINE( 224)			cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 225)			cairo->stroke();
            		}
HXLINE( 228)		bool _hx_tmp3;
HXDLIN( 228)		if (::hx::IsNotNull( textEngine->text )) {
HXLINE( 228)			_hx_tmp3 = (textEngine->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 228)			_hx_tmp3 = false;
            		}
HXDLIN( 228)		if (_hx_tmp3) {
HXLINE( 230)			Float bounds1 = bounds->width;
HXDLIN( 230)			int _hx_tmp;
HXDLIN( 230)			if (textField->get_border()) {
HXLINE( 230)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 230)				_hx_tmp = 0;
            			}
HXDLIN( 230)			Float bounds2 = bounds->height;
HXDLIN( 230)			int _hx_tmp1;
HXDLIN( 230)			if (textField->get_border()) {
HXLINE( 230)				_hx_tmp1 = 1;
            			}
            			else {
HXLINE( 230)				_hx_tmp1 = 0;
            			}
HXDLIN( 230)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),(bounds1 - ( (Float)(_hx_tmp) )),(bounds2 - ( (Float)(_hx_tmp1) )));
HXLINE( 231)			cairo->clip();
HXLINE( 233)			::String text = textEngine->text;
HXLINE( 235)			int scrollX = -(textField->get_scrollH());
HXLINE( 236)			Float scrollY = ((Float)0.0);
HXLINE( 238)			{
HXLINE( 238)				int _g = 0;
HXDLIN( 238)				int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 238)				while((_g < _g1)){
HXLINE( 238)					_g = (_g + 1);
HXDLIN( 238)					int i = (_g - 1);
HXLINE( 240)					scrollY = (scrollY - textEngine->lineHeights->get(i));
            				}
            			}
HXLINE( 243)			 ::Dynamic color;
HXDLIN( 243)			Float r;
HXDLIN( 243)			Float g;
HXDLIN( 243)			Float b;
HXDLIN( 243)			 ::openfl::text::Font font;
HXDLIN( 243)			int size;
HXDLIN( 243)			Float advance;
HXLINE( 245)			{
HXLINE( 245)				 ::Dynamic group = textEngine->layoutGroups->iterator();
HXDLIN( 245)				while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 245)					 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 247)					int group2 = group1->lineIndex;
HXDLIN( 247)					if ((group2 < (textField->get_scrollV() - 1))) {
HXLINE( 247)						continue;
            					}
HXLINE( 248)					int group3 = group1->lineIndex;
HXDLIN( 248)					if ((group3 > (textEngine->get_bottomScrollV() - 1))) {
HXLINE( 248)						goto _hx_goto_2;
            					}
HXLINE( 250)					color = group1->format->color;
HXLINE( 251)					r = (( (Float)(::hx::UShr((( (int)(color) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 252)					g = (( (Float)(::hx::UShr((( (int)(color) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 253)					b = (( (Float)((( (int)(color) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 255)					cairo->setSourceRGB(r,g,b);
HXLINE( 257)					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(group1->format);
HXLINE( 259)					bool _hx_tmp;
HXDLIN( 259)					if (::hx::IsNotNull( font )) {
HXLINE( 259)						_hx_tmp = ::hx::IsNotNull( group1->format->size );
            					}
            					else {
HXLINE( 259)						_hx_tmp = false;
            					}
HXDLIN( 259)					if (_hx_tmp) {
HXLINE( 261)						if (::hx::IsNotNull( textEngine->_hx___cairoFont )) {
HXLINE( 263)							if (::hx::IsInstanceNotEq( textEngine->_hx___font,font )) {
HXLINE( 265)								textEngine->_hx___cairoFont = null();
            							}
            						}
HXLINE( 269)						if (::hx::IsNull( textEngine->_hx___cairoFont )) {
HXLINE( 271)							textEngine->_hx___font = font;
HXLINE( 272)							textEngine->_hx___cairoFont = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(font,0);
            						}
HXLINE( 275)						cairo->set_fontFace(textEngine->_hx___cairoFont);
HXLINE( 277)						size = ::Std_obj::_hx_int(( (Float)(group1->format->size) ));
HXLINE( 278)						cairo->setFontSize(( (Float)(size) ));
HXLINE( 280)						cairo->moveTo(((group1->offsetX + scrollX) - bounds->x),(((group1->offsetY + group1->ascent) + scrollY) - bounds->y));
HXLINE( 287)						cairo->translate(( (Float)(0) ),( (Float)(0) ));
HXLINE( 289)						::Array< ::Dynamic> glyphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 290)						Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 291)						Float y = (((group1->offsetY + group1->ascent) + scrollY) - bounds->y);
HXLINE( 293)						{
HXLINE( 293)							int _g = 0;
HXDLIN( 293)							::Array< ::Dynamic> _g1 = group1->positions;
HXDLIN( 293)							while((_g < _g1->length)){
HXLINE( 293)								 ::openfl::text::_internal::GlyphPosition position = _g1->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN( 293)								_g = (_g + 1);
HXLINE( 295)								bool _hx_tmp;
HXDLIN( 295)								if (::hx::IsNotNull( position )) {
HXLINE( 295)									_hx_tmp = (position->glyph == 0);
            								}
            								else {
HXLINE( 295)									_hx_tmp = true;
            								}
HXDLIN( 295)								if (_hx_tmp) {
HXLINE( 295)									continue;
            								}
HXLINE( 296)								glyphs->push( ::lime::graphics::cairo::CairoGlyph_obj::__alloc( HX_CTX ,position->glyph,((x + position->offset->x) + ((Float)0.5)),((y - position->offset->y) + ((Float)0.5))));
HXLINE( 297)								x = (x + position->advance->x);
HXLINE( 298)								y = (y - position->advance->y);
            							}
            						}
HXLINE( 301)						cairo->showGlyphs(glyphs);
HXLINE( 304)						bool _hx_tmp;
HXDLIN( 304)						if ((textField->_hx___caretIndex > -1)) {
HXLINE( 304)							_hx_tmp = textEngine->selectable;
            						}
            						else {
HXLINE( 304)							_hx_tmp = false;
            						}
HXDLIN( 304)						if (_hx_tmp) {
HXLINE( 306)							if ((textField->_hx___selectionIndex == textField->_hx___caretIndex)) {
HXLINE( 308)								bool _hx_tmp;
HXDLIN( 308)								bool _hx_tmp1;
HXDLIN( 308)								if (textField->_hx___showCursor) {
HXLINE( 308)									_hx_tmp1 = (group1->startIndex <= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 308)									_hx_tmp1 = false;
            								}
HXDLIN( 308)								if (_hx_tmp1) {
HXLINE( 308)									_hx_tmp = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 308)									_hx_tmp = false;
            								}
HXDLIN( 308)								if (_hx_tmp) {
HXLINE( 312)									advance = ((Float)0.0);
HXLINE( 314)									{
HXLINE( 314)										int _g = 0;
HXDLIN( 314)										int _g1 = (textField->_hx___caretIndex - group1->startIndex);
HXDLIN( 314)										while((_g < _g1)){
HXLINE( 314)											_g = (_g + 1);
HXDLIN( 314)											int i = (_g - 1);
HXLINE( 316)											if ((group1->positions->length <= i)) {
HXLINE( 316)												goto _hx_goto_4;
            											}
HXLINE( 317)											Float advance1;
HXDLIN( 317)											bool advance2;
HXDLIN( 317)											if ((i >= 0)) {
HXLINE( 317)												advance2 = (i < group1->positions->length);
            											}
            											else {
HXLINE( 317)												advance2 = false;
            											}
HXDLIN( 317)											if (advance2) {
HXLINE( 317)												advance1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            											}
            											else {
HXLINE( 317)												advance1 = ( (Float)(0) );
            											}
HXDLIN( 317)											advance = (advance + advance1);
            										}
            										_hx_goto_4:;
            									}
HXLINE( 320)									Float scrollY = ((Float)0.0);
HXLINE( 322)									{
HXLINE( 322)										int _g2 = textField->get_scrollV();
HXDLIN( 322)										int _g3 = (group1->lineIndex + 1);
HXDLIN( 322)										while((_g2 < _g3)){
HXLINE( 322)											_g2 = (_g2 + 1);
HXDLIN( 322)											int i = (_g2 - 1);
HXLINE( 324)											scrollY = (scrollY + textEngine->lineHeights->get((i - 1)));
            										}
            									}
HXLINE( 327)									Float _hx_tmp = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 327)									Float _hx_tmp1 = (_hx_tmp - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 327)									cairo->moveTo((_hx_tmp1 - bounds->x),((scrollY + ((Float)2.5)) - bounds->y));
HXLINE( 328)									cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 329)									Float _hx_tmp2 = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 329)									Float _hx_tmp3 = (_hx_tmp2 - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 329)									Float _hx_tmp4 = (_hx_tmp3 - bounds->x);
HXLINE( 333)									Float _hx_tmp5 = ((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) ));
HXLINE( 329)									cairo->lineTo(_hx_tmp4,(_hx_tmp5 - bounds->y));
HXLINE( 337)									cairo->stroke();
            								}
            							}
            							else {
HXLINE( 340)								bool _hx_tmp;
HXDLIN( 340)								bool _hx_tmp1;
HXDLIN( 340)								bool _hx_tmp2;
HXDLIN( 340)								bool _hx_tmp3;
HXDLIN( 340)								if ((group1->startIndex <= textField->_hx___caretIndex)) {
HXLINE( 340)									_hx_tmp3 = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 340)									_hx_tmp3 = false;
            								}
HXDLIN( 340)								if (!(_hx_tmp3)) {
HXLINE( 341)									if ((group1->startIndex <= textField->_hx___selectionIndex)) {
HXLINE( 340)										_hx_tmp2 = (group1->endIndex >= textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 340)										_hx_tmp2 = false;
            									}
            								}
            								else {
HXLINE( 340)									_hx_tmp2 = true;
            								}
HXDLIN( 340)								if (!(_hx_tmp2)) {
HXLINE( 342)									if ((group1->startIndex > textField->_hx___caretIndex)) {
HXLINE( 340)										_hx_tmp1 = (group1->endIndex < textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 340)										_hx_tmp1 = false;
            									}
            								}
            								else {
HXLINE( 340)									_hx_tmp1 = true;
            								}
HXDLIN( 340)								if (!(_hx_tmp1)) {
HXLINE( 343)									if ((group1->startIndex > textField->_hx___selectionIndex)) {
HXLINE( 340)										_hx_tmp = (group1->endIndex < textField->_hx___caretIndex);
            									}
            									else {
HXLINE( 340)										_hx_tmp = false;
            									}
            								}
            								else {
HXLINE( 340)									_hx_tmp = true;
            								}
HXDLIN( 340)								if (_hx_tmp) {
HXLINE( 345)									int selectionStart = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 346)									int selectionEnd = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 348)									if ((group1->startIndex > selectionStart)) {
HXLINE( 350)										selectionStart = group1->startIndex;
            									}
HXLINE( 353)									if ((group1->endIndex < selectionEnd)) {
HXLINE( 355)										selectionEnd = group1->endIndex;
            									}
HXLINE( 358)									 ::openfl::geom::Rectangle end;
HXDLIN( 358)									 ::openfl::geom::Rectangle start = textField->getCharBoundaries(selectionStart);
HXLINE( 362)									if ((selectionEnd >= group1->endIndex)) {
HXLINE( 364)										end = textField->getCharBoundaries((group1->endIndex - 1));
HXLINE( 366)										if (::hx::IsNotNull( end )) {
HXLINE( 368)											 ::openfl::geom::Rectangle end1 = end;
HXDLIN( 368)											end1->x = (end1->x + (end->width + 2));
            										}
            									}
            									else {
HXLINE( 373)										end = textField->getCharBoundaries(selectionEnd);
            									}
HXLINE( 376)									bool _hx_tmp;
HXDLIN( 376)									if (::hx::IsNotNull( start )) {
HXLINE( 376)										_hx_tmp = ::hx::IsNotNull( end );
            									}
            									else {
HXLINE( 376)										_hx_tmp = false;
            									}
HXDLIN( 376)									if (_hx_tmp) {
HXLINE( 378)										cairo->setSourceRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 379)										cairo->rectangle(((scrollX + start->x) - bounds->x),(start->y + scrollY),(end->x - start->x),group1->height);
HXLINE( 380)										cairo->fill();
HXLINE( 381)										cairo->setSourceRGB(( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
HXLINE( 385)										::Array< ::Dynamic> selectedGylphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 387)										selectionStart = (selectionStart - group1->startIndex);
HXLINE( 388)										selectionEnd = (selectionEnd - group1->startIndex);
HXLINE( 389)										if ((selectionEnd > glyphs->length)) {
HXLINE( 391)											selectionEnd = glyphs->length;
            										}
HXLINE( 394)										{
HXLINE( 394)											int _g = selectionStart;
HXDLIN( 394)											int _g1 = selectionEnd;
HXDLIN( 394)											while((_g < _g1)){
HXLINE( 394)												_g = (_g + 1);
HXDLIN( 394)												int i = (_g - 1);
HXLINE( 395)												selectedGylphs->push(glyphs->__get(i).StaticCast<  ::lime::graphics::cairo::CairoGlyph >());
            											}
            										}
HXLINE( 396)										cairo->showGlyphs(selectedGylphs);
            									}
            								}
            							}
            						}
HXLINE( 403)						if (( (bool)(group1->format->underline) )) {
HXLINE( 407)							cairo->newPath();
HXLINE( 408)							cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 409)							int descent = ::Math_obj::floor((group1->ascent * ((Float)0.185)));
HXLINE( 410)							Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 411)							Float y = ((::Math_obj::ceil((((group1->offsetY + scrollY) + group1->ascent) - bounds->y)) + descent) + ((Float)0.5));
HXLINE( 412)							cairo->moveTo(x,y);
HXLINE( 413)							cairo->lineTo((x + group1->width),y);
HXLINE( 414)							cairo->stroke();
HXLINE( 415)							cairo->closePath();
            						}
            					}
            				}
            				_hx_goto_2:;
            			}
            		}
            		else {
HXLINE( 420)			bool _hx_tmp;
HXDLIN( 420)			bool _hx_tmp1;
HXDLIN( 420)			if ((textField->_hx___caretIndex > -1)) {
HXLINE( 420)				_hx_tmp1 = textEngine->selectable;
            			}
            			else {
HXLINE( 420)				_hx_tmp1 = false;
            			}
HXDLIN( 420)			if (_hx_tmp1) {
HXLINE( 420)				_hx_tmp = textField->_hx___showCursor;
            			}
            			else {
HXLINE( 420)				_hx_tmp = false;
            			}
HXDLIN( 420)			if (_hx_tmp) {
HXLINE( 422)				Float scrollX;
HXDLIN( 422)				if (useTextBounds1) {
HXLINE( 422)					scrollX = ( (Float)(0) );
            				}
            				else {
HXLINE( 422)					scrollX = cursorOffsetX;
            				}
HXDLIN( 422)				Float scrollX1 = (-(textField->get_scrollH()) + scrollX);
HXLINE( 423)				Float scrollY = ((Float)0.0);
HXLINE( 425)				{
HXLINE( 425)					int _g = 0;
HXDLIN( 425)					int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 425)					while((_g < _g1)){
HXLINE( 425)						_g = (_g + 1);
HXDLIN( 425)						int i = (_g - 1);
HXLINE( 427)						scrollY = (scrollY + textEngine->lineHeights->get(i));
            					}
            				}
HXLINE( 430)				 ::Dynamic color = textField->get_defaultTextFormat()->color;
HXLINE( 431)				Float r = (( (Float)(::hx::UShr((( (int)(color) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 432)				Float g = (( (Float)(::hx::UShr((( (int)(color) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 433)				Float b = (( (Float)((( (int)(color) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 435)				cairo->setSourceRGB(r,g,b);
HXLINE( 437)				cairo->newPath();
HXLINE( 438)				cairo->moveTo((scrollX1 + ((Float)2.5)),(scrollY + ((Float)2.5)));
HXLINE( 439)				cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 440)				cairo->lineTo((scrollX1 + ((Float)2.5)),((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) )));
HXLINE( 441)				cairo->stroke();
HXLINE( 442)				cairo->closePath();
            			}
            		}
HXLINE( 445)		graphics->_hx___bitmap->image->dirty = true;
HXLINE( 446)		graphics->_hx___bitmap->image->version++;
HXLINE( 447)		textField->_hx___dirty = false;
HXLINE( 448)		graphics->_hx___softwareDirty = false;
HXLINE( 449)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))

void CairoTextField_obj::renderDrawable( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_454_renderDrawable)
HXLINE( 456)		renderer->_hx___updateCacheBitmap(textField,textField->_hx___dirty);
HXLINE( 458)		bool _hx_tmp;
HXDLIN( 458)		if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 458)			_hx_tmp = !(textField->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 458)			_hx_tmp = false;
            		}
HXDLIN( 458)		if (_hx_tmp) {
HXLINE( 460)			 ::openfl::display::Bitmap bitmap = textField->_hx___cacheBitmap;
HXDLIN( 460)			if (bitmap->_hx___renderable) {
HXLINE( 460)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 460)				bool _hx_tmp;
HXDLIN( 460)				bool _hx_tmp1;
HXDLIN( 460)				if ((alpha > 0)) {
HXLINE( 460)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE( 460)					_hx_tmp1 = false;
            				}
HXDLIN( 460)				if (_hx_tmp1) {
HXLINE( 460)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 460)					_hx_tmp = false;
            				}
HXDLIN( 460)				if (_hx_tmp) {
HXLINE( 460)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 460)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 460)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 460)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 460)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 460)					if (::hx::IsNotNull( surface )) {
HXLINE( 460)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 460)						int _hx_tmp;
HXDLIN( 460)						bool _hx_tmp1;
HXDLIN( 460)						if (renderer->_hx___allowSmoothing) {
HXLINE( 460)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXLINE( 460)							_hx_tmp1 = false;
            						}
HXDLIN( 460)						if (_hx_tmp1) {
HXLINE( 460)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 460)							_hx_tmp = 3;
            						}
HXDLIN( 460)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 460)						cairo->set_source(pattern);
HXDLIN( 460)						if ((alpha == 1)) {
HXLINE( 460)							cairo->paint();
            						}
            						else {
HXLINE( 460)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 460)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 460)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE( 464)			::openfl::display::_internal::CairoTextField_obj::render(textField,renderer,textField->_hx___worldTransform);
HXLINE( 465)			::openfl::display::_internal::CairoDisplayObject_obj::render(textField,renderer);
            		}
HXLINE( 468)		renderer->_hx___renderEvent(textField);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawable,(void))

void CairoTextField_obj::renderDrawableMask( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_474_renderDrawableMask)
HXDLIN( 474)		if (::hx::IsNotNull( textField->_hx___graphics )) {
HXDLIN( 474)			::openfl::display::_internal::CairoGraphics_obj::renderMask(textField->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawableMask,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoTextField_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoTextField_obj::__mClass;

static ::String CairoTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoTextField_obj::__register()
{
	CairoTextField_obj _hx_dummy;
	CairoTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoTextField",21,a3,1c,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_30_boot)
HXDLIN(  30)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
