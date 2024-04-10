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
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
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
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_62_closePath,"openfl.display._internal.CairoGraphics","closePath",0x1c630b46,"openfl.display._internal.CairoGraphics.closePath","openfl/display/_internal/CairoGraphics.hx",62,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_86_createGradientPattern,"openfl.display._internal.CairoGraphics","createGradientPattern",0x2e8d9ded,"openfl.display._internal.CairoGraphics.createGradientPattern","openfl/display/_internal/CairoGraphics.hx",86,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_159_createImagePattern,"openfl.display._internal.CairoGraphics","createImagePattern",0xd4969668,"openfl.display._internal.CairoGraphics.createImagePattern","openfl/display/_internal/CairoGraphics.hx",159,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_174_drawRoundRect,"openfl.display._internal.CairoGraphics","drawRoundRect",0x0d2e8237,"openfl.display._internal.CairoGraphics.drawRoundRect","openfl/display/_internal/CairoGraphics.hx",174,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_206_endFill,"openfl.display._internal.CairoGraphics","endFill",0xd8fcf987,"openfl.display._internal.CairoGraphics.endFill","openfl/display/_internal/CairoGraphics.hx",206,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_213_endStroke,"openfl.display._internal.CairoGraphics","endStroke",0x5959a7bc,"openfl.display._internal.CairoGraphics.endStroke","openfl/display/_internal/CairoGraphics.hx",213,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_222_hitTest,"openfl.display._internal.CairoGraphics","hitTest",0x959bd1ce,"openfl.display._internal.CairoGraphics.hitTest","openfl/display/_internal/CairoGraphics.hx",222,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_431_isCCW,"openfl.display._internal.CairoGraphics","isCCW",0x84e15156,"openfl.display._internal.CairoGraphics.isCCW","openfl/display/_internal/CairoGraphics.hx",431,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_435_normalizeUVT,"openfl.display._internal.CairoGraphics","normalizeUVT",0xe93d673d,"openfl.display._internal.CairoGraphics.normalizeUVT","openfl/display/_internal/CairoGraphics.hx",435,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_476_playCommands,"openfl.display._internal.CairoGraphics","playCommands",0xebfd0cb3,"openfl.display._internal.CairoGraphics.playCommands","openfl/display/_internal/CairoGraphics.hx",476,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1120_quadraticCurveTo,"openfl.display._internal.CairoGraphics","quadraticCurveTo",0x52eadd69,"openfl.display._internal.CairoGraphics.quadraticCurveTo","openfl/display/_internal/CairoGraphics.hx",1120,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1143_render,"openfl.display._internal.CairoGraphics","render",0x66653ded,"openfl.display._internal.CairoGraphics.render","openfl/display/_internal/CairoGraphics.hx",1143,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_1446_renderMask,"openfl.display._internal.CairoGraphics","renderMask",0x176ea579,"openfl.display._internal.CairoGraphics.renderMask","openfl/display/_internal/CairoGraphics.hx",1446,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_37_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",37,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_40_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",40,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_41_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",41,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_47_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",47,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_56_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",56,0x56494baa)
HX_LOCAL_STACK_FRAME(_hx_pos_a32397cfa230be0c_58_boot,"openfl.display._internal.CairoGraphics","boot",0x008cb309,"openfl.display._internal.CairoGraphics.boot","openfl/display/_internal/CairoGraphics.hx",58,0x56494baa)
namespace openfl{
namespace display{
namespace _internal{

void CairoGraphics_obj::__construct() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return new CairoGraphics_obj; }

void *CairoGraphics_obj::_hx_vtable = 0;

Dynamic CairoGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoGraphics_obj > _hx_result = new CairoGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3a660be9;
}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

bool CairoGraphics_obj::allowSmoothing;

 ::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

 ::openfl::geom::Rectangle CairoGraphics_obj::bounds;

 ::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::fillCommands;

 ::Dynamic CairoGraphics_obj::fillPattern;

 ::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

 ::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

 ::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

 ::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

 ::openfl::display::_internal::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

 ::Dynamic CairoGraphics_obj::strokePattern;

 ::lime::math::Matrix3 CairoGraphics_obj::tempMatrix3;

Float CairoGraphics_obj::worldAlpha;

void CairoGraphics_obj::closePath(::hx::Null< bool >  __o_strokeBefore){
            		bool strokeBefore = __o_strokeBefore.Default(false);
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_62_closePath)
HXLINE(  63)		if (::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::strokePattern )) {
HXLINE(  65)			return;
            		}
HXLINE(  68)		if (!(strokeBefore)) {
HXLINE(  70)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  73)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(  74)		if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(  74)			::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            		}
HXLINE(  76)		if (strokeBefore) {
HXLINE(  78)			::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            		}
HXLINE(  81)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoGraphics_obj,closePath,(void))

 ::Dynamic CairoGraphics_obj::createGradientPattern( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_86_createGradientPattern)
HXLINE(  87)		 ::Dynamic pattern = null();
HXDLIN(  87)		 ::openfl::geom::Point point = null();
HXDLIN(  87)		 ::openfl::geom::Point point2 = null();
HXDLIN(  87)		bool releaseMatrix = false;
HXLINE(  92)		if (::hx::IsNull( matrix )) {
HXLINE(  94)			matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  95)			releaseMatrix = true;
            		}
HXLINE(  98)		 ::Dynamic _hx_switch_0 = type;
            		if (  (_hx_switch_0==0) ){
HXLINE( 111)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 112)			point->setTo(((Float)-819.2),( (Float)(0) ));
HXLINE( 113)			{
HXLINE( 113)				Float px = point->x;
HXDLIN( 113)				Float py = point->y;
HXDLIN( 113)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 113)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 115)			point2 = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 116)			point2->setTo(((Float)819.2),( (Float)(0) ));
HXLINE( 117)			{
HXLINE( 117)				Float px1 = point2->x;
HXDLIN( 117)				Float py1 = point2->y;
HXDLIN( 117)				point2->x = (((px1 * matrix->a) + (py1 * matrix->c)) + matrix->tx);
HXDLIN( 117)				point2->y = (((px1 * matrix->b) + (py1 * matrix->d)) + matrix->ty);
            			}
HXLINE( 119)			 ::openfl::geom::Point point1 = point;
HXDLIN( 119)			point1->x = (point1->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 120)			 ::openfl::geom::Point point21 = point2;
HXDLIN( 120)			point21->x = (point21->x + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 121)			 ::openfl::geom::Point point3 = point;
HXDLIN( 121)			point3->y = (point3->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 122)			 ::openfl::geom::Point point22 = point2;
HXDLIN( 122)			point22->y = (point22->y + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 124)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(point->x,point->y,point2->x,point2->y);
HXLINE( 110)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE( 101)			point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 102)			point->setTo(((Float)1638.4),( (Float)(0) ));
HXLINE( 103)			{
HXLINE( 103)				Float px = point->x;
HXDLIN( 103)				Float py = point->y;
HXDLIN( 103)				point->x = (((px * matrix->a) + (py * matrix->c)) + matrix->tx);
HXDLIN( 103)				point->y = (((px * matrix->b) + (py * matrix->d)) + matrix->ty);
            			}
HXLINE( 105)			Float x = (matrix->tx + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->x);
HXLINE( 106)			Float y = (matrix->ty + ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds->y);
HXLINE( 108)			pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(x,y,( (Float)(0) ),x,y,::Math_obj::abs(((point->x - matrix->tx) / ( (Float)(2) ))));
HXLINE( 100)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE( 127)		int rgb;
HXDLIN( 127)		Float alpha;
HXDLIN( 127)		Float r;
HXDLIN( 127)		Float g;
HXDLIN( 127)		Float b;
HXDLIN( 127)		Float ratio;
HXLINE( 129)		{
HXLINE( 129)			int _g = 0;
HXDLIN( 129)			int _g1 = colors->length;
HXDLIN( 129)			while((_g < _g1)){
HXLINE( 129)				_g = (_g + 1);
HXDLIN( 129)				int i = (_g - 1);
HXLINE( 131)				rgb = colors->__get(i);
HXLINE( 132)				alpha = alphas->__get(i);
HXLINE( 133)				r = (( (Float)(::hx::UShr((rgb & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 134)				g = (( (Float)(::hx::UShr((rgb & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 135)				b = (( (Float)((rgb & 255)) ) / ( (Float)(255) ));
HXLINE( 137)				ratio = (( (Float)(ratios->__get(i)) ) / ( (Float)(255) ));
HXLINE( 138)				if ((ratio < 0)) {
HXLINE( 138)					ratio = ( (Float)(0) );
            				}
HXLINE( 139)				if ((ratio > 1)) {
HXLINE( 139)					ratio = ( (Float)(1) );
            				}
HXLINE( 141)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(pattern,ratio,r,g,b,alpha);
            			}
            		}
HXLINE( 144)		if (::hx::IsNotNull( point )) {
HXLINE( 144)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 145)		if (::hx::IsNotNull( point2 )) {
HXLINE( 145)			::openfl::geom::Point_obj::_hx___pool->release(point2);
            		}
HXLINE( 146)		if (releaseMatrix) {
HXLINE( 146)			::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            		}
HXLINE( 148)		 ::lime::math::Matrix3 mat = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(pattern);
HXLINE( 150)		mat->tx = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXLINE( 151)		mat->ty = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXLINE( 153)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,mat);
HXLINE( 155)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

 ::Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill, ::openfl::geom::Matrix matrix,bool bitmapRepeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_159_createImagePattern)
HXLINE( 160)		 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(bitmapFill->getSurface());
HXLINE( 161)		int _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		if (smooth) {
HXLINE( 161)			_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::allowSmoothing;
            		}
            		else {
HXLINE( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXLINE( 161)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 161)			_hx_tmp = 3;
            		}
HXDLIN( 161)		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXLINE( 163)		if (bitmapRepeat) {
HXLINE( 165)			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(pattern,1);
            		}
HXLINE( 168)		::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = matrix;
HXLINE( 170)		return pattern;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,createImagePattern,return )

void CairoGraphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_174_drawRoundRect)
HXLINE( 175)		if (::hx::IsNull( ellipseHeight )) {
HXLINE( 175)			ellipseHeight = ellipseWidth;
            		}
HXLINE( 177)		ellipseWidth = (ellipseWidth * ((Float)0.5));
HXLINE( 178)		ellipseHeight = (ellipseHeight * ((Float)0.5));
HXLINE( 180)		if ((ellipseWidth > (width / ( (Float)(2) )))) {
HXLINE( 180)			ellipseWidth = (width / ( (Float)(2) ));
            		}
HXLINE( 181)		if (::hx::IsGreater( ellipseHeight,(height / ( (Float)(2) )) )) {
HXLINE( 181)			ellipseHeight = (height / ( (Float)(2) ));
            		}
HXLINE( 183)		Float xe = (x + width);
HXDLIN( 183)		Float ye = (y + height);
HXDLIN( 183)		Float cx1 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 183)		Float cx2 = (-(ellipseWidth) + (ellipseWidth * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXDLIN( 183)		Float cy1 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::SIN45));
HXDLIN( 183)		Float cy2 = (-(ellipseHeight) + (( (Float)(ellipseHeight) ) * ::openfl::display::_internal::CairoGraphics_obj::TAN22));
HXLINE( 190)		::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(xe,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 191)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(ye + cy2),(xe + cx1),(ye + cy1));
HXLINE( 192)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),ye,(xe - ellipseWidth),ye);
HXLINE( 193)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((x + ellipseWidth),ye);
HXLINE( 194)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),ye,(x - cx1),(ye + cy1));
HXLINE( 195)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(ye + cy2),x,(ye - ( (Float)(ellipseHeight) )));
HXLINE( 196)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x,(y + ellipseHeight));
HXLINE( 197)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(x,(y - cy2),(x - cx1),(y - cy1));
HXLINE( 198)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((x - cx2),y,(x + ellipseWidth),y);
HXLINE( 199)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((xe - ellipseWidth),y);
HXLINE( 200)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((xe + cx2),y,(xe + cx1),(y - cy1));
HXLINE( 201)		::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo(xe,(y - cy2),xe,(y + ellipseHeight));
HXLINE( 202)		::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(xe,(ye - ( (Float)(ellipseHeight) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

void CairoGraphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_206_endFill)
HXLINE( 207)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 208)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::fillCommands,false);
HXLINE( 209)		::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

void CairoGraphics_obj::endStroke(){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_213_endStroke)
HXLINE( 214)		::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 215)		::openfl::display::_internal::CairoGraphics_obj::playCommands(::openfl::display::_internal::CairoGraphics_obj::strokeCommands,true);
HXLINE( 216)		::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE( 217)		::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_222_hitTest)
HXLINE( 224)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE( 225)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE( 227)		bool _hx_tmp;
HXDLIN( 227)		bool _hx_tmp1;
HXDLIN( 227)		bool _hx_tmp2;
HXDLIN( 227)		bool _hx_tmp3;
HXDLIN( 227)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE( 227)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE( 227)			_hx_tmp3 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp3)) {
HXLINE( 227)			_hx_tmp2 = (::openfl::display::_internal::CairoGraphics_obj::bounds->width == 0);
            		}
            		else {
HXLINE( 227)			_hx_tmp2 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp2)) {
HXLINE( 227)			_hx_tmp1 = (::openfl::display::_internal::CairoGraphics_obj::bounds->height == 0);
            		}
            		else {
HXLINE( 227)			_hx_tmp1 = true;
            		}
HXDLIN( 227)		if (!(_hx_tmp1)) {
HXLINE( 227)			_hx_tmp = !(::openfl::display::_internal::CairoGraphics_obj::bounds->contains(x,y));
            		}
            		else {
HXLINE( 227)			_hx_tmp = true;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 229)			return false;
            		}
            		else {
HXLINE( 233)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = true;
HXLINE( 235)			x = (x - ::openfl::display::_internal::CairoGraphics_obj::bounds->x);
HXLINE( 236)			y = (y - ::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE( 238)			if (::hx::IsNull( graphics->_hx___cairo )) {
HXLINE( 240)				 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->width)),::Math_obj::floor(::Math_obj::max(( (Float)(1) ),::openfl::display::_internal::CairoGraphics_obj::bounds->height)),true,0);
HXLINE( 241)				 ::Dynamic surface = bitmap->getSurface();
HXLINE( 242)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
            			}
HXLINE( 246)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE( 248)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE( 249)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE( 251)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 252)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE( 254)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE( 255)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE( 257)			::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 258)			::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 260)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 262)			{
HXLINE( 262)				int _g = 0;
HXDLIN( 262)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 262)				while((_g < _g1->length)){
HXLINE( 262)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 262)					_g = (_g + 1);
HXLINE( 264)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE( 321)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 323)							bool _hx_tmp;
HXDLIN( 323)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 323)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 323)								_hx_tmp = false;
            							}
HXDLIN( 323)							if (_hx_tmp) {
HXLINE( 325)								data->destroy();
HXLINE( 326)								return true;
            							}
HXLINE( 329)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 331)							bool _hx_tmp1;
HXDLIN( 331)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 331)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 331)								_hx_tmp1 = false;
            							}
HXDLIN( 331)							if (_hx_tmp1) {
HXLINE( 333)								data->destroy();
HXLINE( 334)								return true;
            							}
HXLINE( 337)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE( 339)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 2);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 339)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->iPos = (data1->iPos + 1);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 339)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 4);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 339)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 339)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 339)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 5);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 339)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 2);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 339)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 4);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 339)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 339)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 339)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 4);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 339)										data2->iPos = (data2->iPos + 1);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 339)										data3->fPos = (data3->fPos + 2);
HXDLIN( 339)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 339)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 339)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 339)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 339)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 339)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 339)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 340)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 341)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE( 343)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE( 345)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 2);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 345)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->iPos = (data1->iPos + 1);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 345)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 4);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 345)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 345)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 345)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 5);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 345)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 2);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 345)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 4);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 345)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 345)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 345)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 4);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 345)											data2->iPos = (data2->iPos + 1);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 345)											data3->fPos = (data3->fPos + 2);
HXDLIN( 345)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 345)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 345)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 345)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 345)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 345)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 345)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 346)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 348)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE( 351)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE( 353)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 2);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->iPos = (data1->iPos + 1);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 4);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 353)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 353)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 5);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 2);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 4);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 353)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 353)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 4);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 353)												data2->iPos = (data2->iPos + 1);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 353)												data3->fPos = (data3->fPos + 2);
HXDLIN( 353)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 353)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 353)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 353)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 353)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 353)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 354)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE( 355)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE( 359)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 2);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->iPos = (data1->iPos + 1);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 4);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 359)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 359)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 5);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 2);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 4);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)												data2->iiPos = (data2->iiPos + 2);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 359)												data3->ffPos = (data3->ffPos + 1);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 359)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 4);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 359)												data2->iPos = (data2->iPos + 1);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 359)												data3->fPos = (data3->fPos + 2);
HXDLIN( 359)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 359)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE( 359)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 359)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE( 359)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 359)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 359)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 360)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
HXLINE( 361)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),( (Float)(1) ));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 267)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 2);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 267)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->iPos = (data1->iPos + 1);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 267)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 4);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 267)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 267)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 267)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 5);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 267)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 2);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 267)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 4);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 267)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 267)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 267)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 4);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 267)									data2->iPos = (data2->iPos + 1);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 267)									data3->fPos = (data3->fPos + 2);
HXDLIN( 267)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 267)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 267)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 267)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 267)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 267)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 267)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 268)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE( 269)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            						}
            						break;
            						case (int)5: {
HXLINE( 272)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 2);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 272)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->iPos = (data1->iPos + 1);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 272)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 4);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 272)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 272)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 272)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 5);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 272)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 2);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 272)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 4);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 272)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 272)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 272)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 4);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 272)									data2->iPos = (data2->iPos + 1);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 272)									data3->fPos = (data3->fPos + 2);
HXDLIN( 272)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 272)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 272)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 272)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 272)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 272)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 272)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 273)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 274)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)6: {
HXLINE( 365)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 2);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 365)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->iPos = (data1->iPos + 1);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 365)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 4);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 365)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 365)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 365)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 5);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 365)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 2);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 365)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 4);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 365)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 365)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 365)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 4);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 365)									data2->iPos = (data2->iPos + 1);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 365)									data3->fPos = (data3->fPos + 2);
HXDLIN( 365)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 365)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 365)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 365)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 365)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 365)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 365)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 366)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE( 367)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            						}
            						break;
            						case (int)7: {
HXLINE( 370)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->iPos = (data1->iPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 370)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 370)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 5);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 370)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 370)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 4);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 370)									data2->iPos = (data2->iPos + 1);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 370)									data3->fPos = (data3->fPos + 2);
HXDLIN( 370)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 370)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 370)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 370)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 370)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 370)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 370)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 371)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 372)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)9: {
HXLINE( 375)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->iPos = (data1->iPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 375)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 375)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 5);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 375)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 375)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 4);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 375)									data2->iPos = (data2->iPos + 1);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 375)									data3->fPos = (data3->fPos + 2);
HXDLIN( 375)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 375)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 375)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 375)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 375)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 375)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 375)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 376)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE( 377)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE( 380)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->iPos = (data1->iPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 380)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 380)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 5);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 380)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 380)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 4);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 380)									data2->iPos = (data2->iPos + 1);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 380)									data3->fPos = (data3->fPos + 2);
HXDLIN( 380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 380)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 380)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 380)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 380)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 381)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE( 382)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)13: {
HXLINE( 300)							{
HXLINE( 300)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 2);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 300)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->iPos = (data1->iPos + 1);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 300)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 4);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 300)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 300)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 300)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 5);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 300)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 2);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 300)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 4);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 300)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 300)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 300)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 4);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 300)										data2->iPos = (data2->iPos + 1);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 300)										data3->fPos = (data3->fPos + 2);
HXDLIN( 300)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 300)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 300)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 300)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 300)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN( 300)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 301)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE( 303)							bool _hx_tmp;
HXDLIN( 303)							if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 303)								_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            							}
            							else {
HXLINE( 303)								_hx_tmp = false;
            							}
HXDLIN( 303)							if (_hx_tmp) {
HXLINE( 305)								data->destroy();
HXLINE( 306)								return true;
            							}
HXLINE( 309)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE( 311)							bool _hx_tmp1;
HXDLIN( 311)							if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 311)								_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            							}
            							else {
HXLINE( 311)								_hx_tmp1 = false;
            							}
HXDLIN( 311)							if (_hx_tmp1) {
HXLINE( 313)								data->destroy();
HXLINE( 314)								return true;
            							}
HXLINE( 317)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE( 318)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            						}
            						break;
            						case (int)14: {
HXLINE( 296)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 2);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 296)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->iPos = (data1->iPos + 1);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 296)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 4);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 296)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 296)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 296)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 5);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 296)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 2);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 296)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 4);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 296)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 296)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 296)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 4);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 296)									data2->iPos = (data2->iPos + 1);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 296)									data3->fPos = (data3->fPos + 2);
HXDLIN( 296)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 296)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 296)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 296)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 296)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 296)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 296)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 297)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE( 291)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 2);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 291)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->iPos = (data1->iPos + 1);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 291)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 4);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 291)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 291)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 291)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 5);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 291)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 2);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 291)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 4);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 291)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 291)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 291)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 4);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 291)									data2->iPos = (data2->iPos + 1);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 291)									data3->fPos = (data3->fPos + 2);
HXDLIN( 291)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 291)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 291)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 291)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 291)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 291)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 291)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 292)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE( 287)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 2);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 287)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->iPos = (data1->iPos + 1);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 287)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 4);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 287)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 287)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 287)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 5);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 287)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 2);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 287)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 4);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 287)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 287)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 287)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 4);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 287)									data2->iPos = (data2->iPos + 1);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 287)									data3->fPos = (data3->fPos + 2);
HXDLIN( 287)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 287)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 287)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 287)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 287)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 287)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 287)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 288)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),( (Float)(1) ),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE( 277)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 2);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 277)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->iPos = (data1->iPos + 1);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 277)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 4);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 277)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 277)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 277)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 5);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 277)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 2);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 277)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 4);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 277)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 277)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 277)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 4);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 277)									data2->iPos = (data2->iPos + 1);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 277)									data3->fPos = (data3->fPos + 2);
HXDLIN( 277)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 277)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 277)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 277)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 277)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 277)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 277)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 278)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 279)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)18: {
HXLINE( 282)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 2);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 282)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->iPos = (data1->iPos + 1);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 282)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 4);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 282)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 282)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 282)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 5);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 282)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 2);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 282)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 4);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 282)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 282)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 282)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 4);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 282)									data2->iPos = (data2->iPos + 1);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 282)									data3->fPos = (data3->fPos + 2);
HXDLIN( 282)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 282)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 282)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 282)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 282)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 282)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 282)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 283)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE( 284)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)21: {
HXLINE( 385)							{
HXLINE( 385)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 2);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->iPos = (data1->iPos + 1);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 4);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 385)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 385)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 5);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 2);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 4);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 385)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 385)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 4);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 385)										data2->iPos = (data2->iPos + 1);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 385)										data3->fPos = (data3->fPos + 2);
HXDLIN( 385)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 385)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 385)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 385)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 385)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN( 385)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 386)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            						}
            						break;
            						case (int)22: {
HXLINE( 389)							{
HXLINE( 389)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 2);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->iPos = (data1->iPos + 1);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 4);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 389)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 389)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 5);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 2);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 4);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 389)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 389)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 4);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 389)										data2->iPos = (data2->iPos + 1);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 389)										data3->fPos = (data3->fPos + 2);
HXDLIN( 389)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 389)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 389)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 389)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 389)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN( 389)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE( 390)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            						}
            						break;
            						default:{
HXLINE( 393)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->iPos = (data1->iPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 5);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iPos = (data2->iPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->fPos = (data3->fPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 393)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE( 397)			bool hitTest = false;
HXLINE( 399)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE( 401)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE( 404)			bool _hx_tmp;
HXDLIN( 404)			if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE( 404)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo->inFill(x,y);
            			}
            			else {
HXLINE( 404)				_hx_tmp = false;
            			}
HXDLIN( 404)			if (_hx_tmp) {
HXLINE( 406)				hitTest = true;
            			}
HXLINE( 409)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE( 411)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE( 414)			bool _hx_tmp1;
HXDLIN( 414)			if (::openfl::display::_internal::CairoGraphics_obj::hasStroke) {
HXLINE( 414)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo->inStroke(x,y);
            			}
            			else {
HXLINE( 414)				_hx_tmp1 = false;
            			}
HXDLIN( 414)			if (_hx_tmp1) {
HXLINE( 416)				hitTest = true;
            			}
HXLINE( 419)			data->destroy();
HXLINE( 421)			return hitTest;
            		}
HXLINE( 227)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_431_isCCW)
HXDLIN( 431)		return ((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

 ::Dynamic CairoGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,::hx::Null< bool >  __o_skipT){
            		bool skipT = __o_skipT.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_435_normalizeUVT)
HXLINE( 436)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 437)		Float tmp = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 438)		int len = uvt->get_length();
HXLINE( 440)		{
HXLINE( 440)			int _g = 1;
HXDLIN( 440)			int _g1 = (len + 1);
HXDLIN( 440)			while((_g < _g1)){
HXLINE( 440)				_g = (_g + 1);
HXDLIN( 440)				int t = (_g - 1);
HXLINE( 442)				bool _hx_tmp;
HXDLIN( 442)				if (skipT) {
HXLINE( 442)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 442)					_hx_tmp = false;
            				}
HXDLIN( 442)				if (_hx_tmp) {
HXLINE( 444)					continue;
            				}
HXLINE( 447)				tmp = uvt->get((t - 1));
HXLINE( 449)				if ((max < tmp)) {
HXLINE( 451)					max = tmp;
            				}
            			}
            		}
HXLINE( 455)		if (!(skipT)) {
HXLINE( 457)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("max",a4,0a,53,00),max)
            				->setFixed(1,HX_("uvt",f3,2e,59,00),uvt));
            		}
HXLINE( 460)		int length = null();
HXDLIN( 460)		bool fixed = null();
HXDLIN( 460)		::Array< Float > array = null();
HXDLIN( 460)		 ::openfl::_Vector::FloatVector result =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 462)		{
HXLINE( 462)			int _g2 = 1;
HXDLIN( 462)			int _g3 = (len + 1);
HXDLIN( 462)			while((_g2 < _g3)){
HXLINE( 462)				_g2 = (_g2 + 1);
HXDLIN( 462)				int t = (_g2 - 1);
HXLINE( 464)				bool _hx_tmp;
HXDLIN( 464)				if (skipT) {
HXLINE( 464)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 464)					_hx_tmp = false;
            				}
HXDLIN( 464)				if (_hx_tmp) {
HXLINE( 466)					continue;
            				}
HXLINE( 469)				result->push(uvt->get((t - 1)));
            			}
            		}
HXLINE( 472)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),max)
            			->setFixed(1,HX_("uvt",f3,2e,59,00),result));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

void CairoGraphics_obj::playCommands( ::openfl::display::_internal::DrawCommandBuffer commands,::hx::Null< bool >  __o_stroke){
            		bool stroke = __o_stroke.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_476_playCommands)
HXLINE( 477)		if ((commands->get_length() == 0)) {
HXLINE( 477)			return;
            		}
HXLINE( 479)		::openfl::display::_internal::CairoGraphics_obj::bounds = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___bounds;
HXLINE( 481)		Float offsetX = ::openfl::display::_internal::CairoGraphics_obj::bounds->x;
HXLINE( 482)		Float offsetY = ::openfl::display::_internal::CairoGraphics_obj::bounds->y;
HXLINE( 484)		Float positionX = ((Float)0.0);
HXLINE( 485)		Float positionY = ((Float)0.0);
HXLINE( 487)		bool closeGap = false;
HXLINE( 488)		Float startX = ((Float)0.0);
HXLINE( 489)		Float startY = ((Float)0.0);
HXLINE( 490)		bool setStart = false;
HXLINE( 492)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
HXLINE( 493)		::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(3);
HXLINE( 495)		bool hasPath = false;
HXLINE( 497)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,commands);
HXLINE( 499)		Float x;
HXDLIN( 499)		Float y;
HXDLIN( 499)		Float width;
HXDLIN( 499)		Float height;
HXDLIN( 499)		Float kappa = ((Float).5522848);
HXDLIN( 499)		Float ox;
HXDLIN( 499)		Float oy;
HXDLIN( 499)		Float xe;
HXDLIN( 499)		Float ye;
HXDLIN( 499)		Float xm;
HXDLIN( 499)		Float ym;
HXDLIN( 499)		Float r;
HXDLIN( 499)		Float g;
HXDLIN( 499)		Float b;
HXLINE( 514)		{
HXLINE( 514)			int _g = 0;
HXDLIN( 514)			::Array< ::Dynamic> _g1 = commands->types;
HXDLIN( 514)			while((_g < _g1->length)){
HXLINE( 514)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 514)				_g = (_g + 1);
HXLINE( 516)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 694)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 2);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 694)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->iPos = (data1->iPos + 1);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 694)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 4);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 694)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 694)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 694)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 5);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 694)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 2);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 694)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 4);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 694)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 694)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 694)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 4);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 694)								data2->iPos = (data2->iPos + 1);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 694)								data3->fPos = (data3->fPos + 2);
HXDLIN( 694)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 694)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 694)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 694)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 694)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 694)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 694)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 695)						::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 697)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 698)						::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = c->buffer->b->__get(c->bPos);
HXLINE( 700)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            					}
            					break;
            					case (int)1: {
HXLINE( 703)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->iPos = (data1->iPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 5);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 4);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)								data2->iPos = (data2->iPos + 1);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)								data3->fPos = (data3->fPos + 2);
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 703)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 703)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 703)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 703)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 704)						if ((c->buffer->f->__get(c->fPos) < ((Float)0.005))) {
HXLINE( 706)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
            						}
            						else {
HXLINE( 710)							if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 712)								::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            							}
HXLINE( 715)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA((( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) )),(( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) )),(( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) )),c->buffer->f->__get(c->fPos));
HXLINE( 717)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
HXLINE( 720)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)2: {
HXLINE( 723)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 2);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->iPos = (data1->iPos + 1);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 4);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 723)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 723)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 5);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 2);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 4);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 723)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 723)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 4);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 723)								data2->iPos = (data2->iPos + 1);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 723)								data3->fPos = (data3->fPos + 2);
HXDLIN( 723)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 723)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 723)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 723)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 723)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN( 723)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 723)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 724)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPattern )) {
HXLINE( 726)							::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix = null();
            						}
HXLINE( 729)						::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 732)						::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
HXLINE( 733)						::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
            					}
            					break;
            					case (int)3: {
HXLINE( 736)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 2);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 736)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->iPos = (data1->iPos + 1);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 736)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 4);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 736)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 736)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 736)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 5);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 736)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 2);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 736)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 4);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 736)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 736)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 736)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 4);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 736)								data2->iPos = (data2->iPos + 1);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 736)								data3->fPos = (data3->fPos + 2);
HXDLIN( 736)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 736)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 736)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 736)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 736)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 736)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 736)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 737)						 ::openfl::display::_internal::ShaderBuffer shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 739)						if ((shaderBuffer->inputCount > 0)) {
HXLINE( 741)							::openfl::display::_internal::CairoGraphics_obj::fillPattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(shaderBuffer->inputs->__get(0).StaticCast<  ::openfl::display::BitmapData >(),null(),::hx::IsNotEq( shaderBuffer->inputWrap->__get(0),0 ),::hx::IsNotEq( shaderBuffer->inputFilter->__get(0),5 ));
HXLINE( 744)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = shaderBuffer->inputs->__get(0).StaticCast<  ::openfl::display::BitmapData >();
HXLINE( 745)							::openfl::display::_internal::CairoGraphics_obj::bitmapRepeat = false;
HXLINE( 747)							::openfl::display::_internal::CairoGraphics_obj::hasFill = true;
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 519)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 2);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 519)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->iPos = (data1->iPos + 1);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 519)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 4);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 519)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 519)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 519)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 5);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 519)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 2);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 519)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 4);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 519)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 519)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 519)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 4);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 519)								data2->iPos = (data2->iPos + 1);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 519)								data3->fPos = (data3->fPos + 2);
HXDLIN( 519)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 519)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 519)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 519)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 519)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN( 519)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 519)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 520)						hasPath = true;
HXLINE( 521)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY),(c->buffer->f->__get((c->fPos + 4)) - offsetX),(c->buffer->f->__get((c->fPos + 5)) - offsetY));
            					}
            					break;
            					case (int)5: {
HXLINE( 531)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 2);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 531)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->iPos = (data1->iPos + 1);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 531)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 4);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 531)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 531)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 531)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 5);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 531)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 2);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 531)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 4);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 531)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 531)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 531)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 4);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 531)								data2->iPos = (data2->iPos + 1);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 531)								data3->fPos = (data3->fPos + 2);
HXDLIN( 531)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 531)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 531)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 531)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 531)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN( 531)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 531)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 532)						hasPath = true;
HXLINE( 533)						::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),(c->buffer->f->__get((c->fPos + 2)) - offsetX),(c->buffer->f->__get((c->fPos + 3)) - offsetY));
            					}
            					break;
            					case (int)6: {
HXLINE( 536)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 2);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 536)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->iPos = (data1->iPos + 1);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 536)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 4);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 536)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 536)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 536)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 5);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 536)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 2);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 536)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 4);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 536)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 536)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 536)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 4);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 536)								data2->iPos = (data2->iPos + 1);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 536)								data3->fPos = (data3->fPos + 2);
HXDLIN( 536)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 536)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 536)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 536)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 536)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN( 536)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 536)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 537)						hasPath = true;
HXLINE( 538)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(((c->buffer->f->__get(c->fPos) - offsetX) + c->buffer->f->__get((c->fPos + 2))),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 539)						::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            					}
            					break;
            					case (int)7: {
HXLINE( 547)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 2);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 547)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->iPos = (data1->iPos + 1);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 547)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 4);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 547)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 547)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 547)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 5);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 547)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 2);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 547)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 4);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 547)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 547)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 547)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 4);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 547)								data2->iPos = (data2->iPos + 1);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 547)								data3->fPos = (data3->fPos + 2);
HXDLIN( 547)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 547)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 547)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 547)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 547)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 547)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 547)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 548)						hasPath = true;
HXLINE( 550)						x = c->buffer->f->__get(c->fPos);
HXLINE( 551)						y = c->buffer->f->__get((c->fPos + 1));
HXLINE( 552)						width = c->buffer->f->__get((c->fPos + 2));
HXLINE( 553)						height = c->buffer->f->__get((c->fPos + 3));
HXLINE( 555)						x = (x - offsetX);
HXLINE( 556)						y = (y - offsetY);
HXLINE( 558)						ox = ((width / ( (Float)(2) )) * kappa);
HXLINE( 559)						oy = ((height / ( (Float)(2) )) * kappa);
HXLINE( 560)						xe = (x + width);
HXLINE( 561)						ye = (y + height);
HXLINE( 562)						xm = (x + (width / ( (Float)(2) )));
HXLINE( 563)						ym = (y + (height / ( (Float)(2) )));
HXLINE( 565)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE( 566)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE( 567)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE( 568)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE( 569)						::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            					}
            					break;
            					case (int)8: {
HXLINE( 751)						int cacheExtend = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 752)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,0);
HXLINE( 754)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 2);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 754)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->iPos = (data1->iPos + 1);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 754)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 4);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 754)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 754)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 754)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 5);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 754)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 2);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 754)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 4);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 754)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 754)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 754)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 4);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 754)								data2->iPos = (data2->iPos + 1);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 754)								data3->fPos = (data3->fPos + 2);
HXDLIN( 754)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 754)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 754)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 754)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 754)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 754)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 755)						 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 756)						 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 757)						 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 759)						bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 760)						bool transformABCD = false;
HXDLIN( 760)						bool transformXY = false;
HXLINE( 762)						int length;
HXDLIN( 762)						if (hasIndices) {
HXLINE( 762)							length = indices->get_length();
            						}
            						else {
HXLINE( 762)							length = ::Math_obj::floor((( (Float)(rects->get_length()) ) / ( (Float)(4) )));
            						}
HXLINE( 763)						if ((length == 0)) {
HXLINE( 763)							return;
            						}
HXLINE( 765)						if (::hx::IsNotNull( transforms )) {
HXLINE( 767)							if ((transforms->get_length() >= (length * 6))) {
HXLINE( 769)								transformABCD = true;
HXLINE( 770)								transformXY = true;
            							}
            							else {
HXLINE( 772)								if ((transforms->get_length() >= (length * 4))) {
HXLINE( 774)									transformABCD = true;
            								}
            								else {
HXLINE( 776)									if ((transforms->get_length() >= (length * 2))) {
HXLINE( 778)										transformXY = true;
            									}
            								}
            							}
            						}
HXLINE( 782)						 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 783)						 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 785)						 ::openfl::geom::Rectangle sourceRect;
HXDLIN( 785)						if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill )) {
HXLINE( 785)							sourceRect = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->rect;
            						}
            						else {
HXLINE( 785)							sourceRect = null();
            						}
HXLINE( 786)						::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->identity();
HXLINE( 788)						 ::openfl::geom::Matrix transform = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform;
HXLINE( 790)						Float alpha = ::openfl::display::_internal::CairoGraphics_obj::worldAlpha;
HXLINE( 792)						int ri;
HXDLIN( 792)						int ti;
HXLINE( 794)						{
HXLINE( 794)							int _g = 0;
HXDLIN( 794)							int _g1 = length;
HXDLIN( 794)							while((_g < _g1)){
HXLINE( 794)								_g = (_g + 1);
HXDLIN( 794)								int i = (_g - 1);
HXLINE( 796)								if (hasIndices) {
HXLINE( 796)									ri = (indices->get(i) * 4);
            								}
            								else {
HXLINE( 796)									ri = (i * 4);
            								}
HXLINE( 797)								if ((ri < 0)) {
HXLINE( 797)									continue;
            								}
HXLINE( 798)								Float _hx_tmp = rects->get(ri);
HXDLIN( 798)								Float _hx_tmp1 = rects->get((ri + 1));
HXDLIN( 798)								Float _hx_tmp2 = rects->get((ri + 2));
HXDLIN( 798)								tileRect->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,rects->get((ri + 3)));
HXLINE( 800)								bool _hx_tmp3;
HXDLIN( 800)								if (!((tileRect->width <= 0))) {
HXLINE( 800)									_hx_tmp3 = (tileRect->height <= 0);
            								}
            								else {
HXLINE( 800)									_hx_tmp3 = true;
            								}
HXDLIN( 800)								if (_hx_tmp3) {
HXLINE( 802)									continue;
            								}
HXLINE( 805)								bool _hx_tmp4;
HXDLIN( 805)								if (transformABCD) {
HXLINE( 805)									_hx_tmp4 = transformXY;
            								}
            								else {
HXLINE( 805)									_hx_tmp4 = false;
            								}
HXDLIN( 805)								if (_hx_tmp4) {
HXLINE( 807)									ti = (i * 6);
HXLINE( 808)									Float _hx_tmp = transforms->get(ti);
HXDLIN( 808)									Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 808)									Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 808)									Float _hx_tmp3 = transforms->get((ti + 3));
HXDLIN( 808)									Float _hx_tmp4 = transforms->get((ti + 4));
HXDLIN( 808)									tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,transforms->get((ti + 5)));
            								}
            								else {
HXLINE( 811)									if (transformABCD) {
HXLINE( 813)										ti = (i * 4);
HXLINE( 814)										Float _hx_tmp = transforms->get(ti);
HXDLIN( 814)										Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 814)										Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 814)										tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,transforms->get((ti + 3)),tileRect->x,tileRect->y);
            									}
            									else {
HXLINE( 816)										if (transformXY) {
HXLINE( 818)											ti = (i * 2);
HXLINE( 819)											tileTransform->tx = transforms->get(ti);
HXLINE( 820)											tileTransform->ty = transforms->get((ti + 1));
            										}
            										else {
HXLINE( 824)											tileTransform->tx = tileRect->x;
HXLINE( 825)											tileTransform->ty = tileRect->y;
            										}
            									}
            								}
HXLINE( 828)								 ::openfl::geom::Matrix tileTransform1 = tileTransform;
HXDLIN( 828)								tileTransform1->tx = (tileTransform1->tx + (positionX - offsetX));
HXLINE( 829)								 ::openfl::geom::Matrix tileTransform2 = tileTransform;
HXDLIN( 829)								tileTransform2->ty = (tileTransform2->ty + (positionY - offsetY));
HXLINE( 830)								tileTransform->concat(transform);
HXLINE( 839)								 ::lime::graphics::cairo::Cairo _hx_tmp5 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 839)								_hx_tmp5->set_matrix(tileTransform->_hx___toMatrix3());
HXLINE( 841)								::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->tx = tileRect->x;
HXLINE( 842)								::openfl::display::_internal::CairoGraphics_obj::tempMatrix3->ty = tileRect->y;
HXLINE( 843)								::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(::openfl::display::_internal::CairoGraphics_obj::fillPattern,::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE( 844)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 846)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 848)									::openfl::display::_internal::CairoGraphics_obj::cairo->save();
HXLINE( 850)									::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 851)									::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle(( (Float)(0) ),( (Float)(0) ),tileRect->width,tileRect->height);
HXLINE( 852)									::openfl::display::_internal::CairoGraphics_obj::cairo->clip();
            								}
HXLINE( 855)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE( 857)									if ((alpha == 1)) {
HXLINE( 859)										::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
            									}
            									else {
HXLINE( 863)										::openfl::display::_internal::CairoGraphics_obj::cairo->paintWithAlpha(alpha);
            									}
            								}
HXLINE( 867)								if (::hx::IsInstanceNotEq( tileRect,sourceRect )) {
HXLINE( 869)									::openfl::display::_internal::CairoGraphics_obj::cairo->restore();
            								}
            							}
            						}
HXLINE( 873)						::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 874)						::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
HXLINE( 876)						 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 876)						_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE( 877)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(::openfl::display::_internal::CairoGraphics_obj::fillPattern,cacheExtend);
            					}
            					break;
            					case (int)9: {
HXLINE( 542)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->iPos = (data1->iPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 542)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 542)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 5);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 542)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 542)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 4);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 542)								data2->iPos = (data2->iPos + 1);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 542)								data3->fPos = (data3->fPos + 2);
HXDLIN( 542)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 542)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 542)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 542)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 542)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 542)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 542)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 543)						hasPath = true;
HXLINE( 544)						::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE( 572)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 2);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 572)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->iPos = (data1->iPos + 1);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 572)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 4);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 572)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 572)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 572)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 5);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 572)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 2);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 572)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 4);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 572)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 572)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 572)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 4);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 572)								data2->iPos = (data2->iPos + 1);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 572)								data3->fPos = (data3->fPos + 2);
HXDLIN( 572)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 572)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 572)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 572)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 572)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 572)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 572)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 573)						hasPath = true;
HXLINE( 574)						::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            					}
            					break;
            					case (int)12: {
HXLINE( 880)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 2);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 880)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->iPos = (data1->iPos + 1);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 880)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 4);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 880)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 880)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 880)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 5);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 880)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 2);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 880)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 4);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 880)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 880)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 880)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 4);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 880)								data2->iPos = (data2->iPos + 1);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 880)								data3->fPos = (data3->fPos + 2);
HXDLIN( 880)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 880)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 880)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 880)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 880)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 880)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 880)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 881)						 ::openfl::_Vector::FloatVector v = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 882)						 ::openfl::_Vector::IntVector ind = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 883)						 ::openfl::_Vector::FloatVector uvt = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 884)						bool colorFill = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bitmapFill );
HXLINE( 886)						bool _hx_tmp;
HXDLIN( 886)						if (colorFill) {
HXLINE( 886)							_hx_tmp = ::hx::IsNotNull( uvt );
            						}
            						else {
HXLINE( 886)							_hx_tmp = false;
            						}
HXDLIN( 886)						if (_hx_tmp) {
HXLINE( 888)							goto _hx_goto_14;
            						}
HXLINE( 891)						int width = 0;
HXLINE( 892)						int height = 0;
HXLINE( 893)						 ::lime::math::Matrix3 currentMatrix = ::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3();
HXLINE( 895)						if (!(colorFill)) {
HXLINE( 899)							if (::hx::IsNull( uvt )) {
HXLINE( 901)								int length = null();
HXDLIN( 901)								bool fixed = null();
HXDLIN( 901)								::Array< Float > array = null();
HXDLIN( 901)								uvt =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 903)								{
HXLINE( 903)									int _g = 0;
HXDLIN( 903)									int _g1 = ::Std_obj::_hx_int((( (Float)(v->get_length()) ) / ( (Float)(2) )));
HXDLIN( 903)									while((_g < _g1)){
HXLINE( 903)										_g = (_g + 1);
HXDLIN( 903)										int i = (_g - 1);
HXLINE( 905)										{
HXLINE( 905)											Float value = v->get((i * 2));
HXDLIN( 905)											uvt->push((value - (offsetX / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width) ))));
            										}
HXLINE( 906)										{
HXLINE( 906)											Float value1 = v->get(((i * 2) + 1));
HXDLIN( 906)											uvt->push((value1 - (offsetY / ( (Float)(::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height) ))));
            										}
            									}
            								}
            							}
HXLINE( 910)							int skipT = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) )->get_length();
HXDLIN( 910)							bool skipT1 = (skipT != v->get_length());
HXLINE( 911)							 ::Dynamic normalizedUVT = ::openfl::display::_internal::CairoGraphics_obj::normalizeUVT(uvt,skipT1);
HXLINE( 912)							Float maxUVT = ( (Float)(normalizedUVT->__Field(HX_("max",a4,0a,53,00),::hx::paccDynamic)) );
HXLINE( 913)							uvt = ( ( ::openfl::_Vector::FloatVector)(normalizedUVT->__Field(HX_("uvt",f3,2e,59,00),::hx::paccDynamic)) );
HXLINE( 915)							if ((maxUVT > 1)) {
HXLINE( 917)								width = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->width);
HXLINE( 918)								height = ::Std_obj::_hx_int(::openfl::display::_internal::CairoGraphics_obj::bounds->height);
            							}
            							else {
HXLINE( 922)								width = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->width;
HXLINE( 923)								height = ::openfl::display::_internal::CairoGraphics_obj::bitmapFill->height;
            							}
            						}
HXLINE( 927)						int i = 0;
HXLINE( 928)						int l = ind->get_length();
HXLINE( 930)						int a_;
HXDLIN( 930)						int b_;
HXDLIN( 930)						int c_;
HXLINE( 931)						int iax;
HXDLIN( 931)						int iay;
HXDLIN( 931)						int ibx;
HXDLIN( 931)						int iby;
HXDLIN( 931)						int icx;
HXDLIN( 931)						int icy;
HXLINE( 932)						Float x1;
HXDLIN( 932)						Float y1;
HXDLIN( 932)						Float x2;
HXDLIN( 932)						Float y2;
HXDLIN( 932)						Float x3;
HXDLIN( 932)						Float y3;
HXLINE( 933)						Float uvx1;
HXDLIN( 933)						Float uvy1;
HXDLIN( 933)						Float uvx2;
HXDLIN( 933)						Float uvy2;
HXDLIN( 933)						Float uvx3;
HXDLIN( 933)						Float uvy3;
HXLINE( 934)						Float denom;
HXLINE( 935)						Float t1;
HXDLIN( 935)						Float t2;
HXDLIN( 935)						Float t3;
HXDLIN( 935)						Float t4;
HXLINE( 936)						Float dx;
HXDLIN( 936)						Float dy;
HXLINE( 938)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_antialias(1);
HXLINE( 940)						while((i < l)){
HXLINE( 942)							a_ = i;
HXLINE( 943)							b_ = (i + 1);
HXLINE( 944)							c_ = (i + 2);
HXLINE( 946)							iax = (ind->get(a_) * 2);
HXLINE( 947)							iay = ((ind->get(a_) * 2) + 1);
HXLINE( 948)							ibx = (ind->get(b_) * 2);
HXLINE( 949)							iby = ((ind->get(b_) * 2) + 1);
HXLINE( 950)							icx = (ind->get(c_) * 2);
HXLINE( 951)							icy = ((ind->get(c_) * 2) + 1);
HXLINE( 953)							x1 = (v->get(iax) - offsetX);
HXLINE( 954)							y1 = (v->get(iay) - offsetY);
HXLINE( 955)							x2 = (v->get(ibx) - offsetX);
HXLINE( 956)							y2 = (v->get(iby) - offsetY);
HXLINE( 957)							x3 = (v->get(icx) - offsetX);
HXLINE( 958)							y3 = (v->get(icy) - offsetY);
HXLINE( 960)							 ::Dynamic _hx_switch_0 = c->buffer->o->__get((c->oPos + 3));
            							if (  (_hx_switch_0==0) ){
HXLINE( 970)								if (((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0)) {
HXLINE( 972)									i = (i + 3);
HXLINE( 973)									continue;
            								}
HXLINE( 970)								goto _hx_goto_18;
            							}
            							if (  (_hx_switch_0==2) ){
HXLINE( 963)								if (!(((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0))) {
HXLINE( 965)									i = (i + 3);
HXLINE( 966)									continue;
            								}
HXLINE( 963)								goto _hx_goto_18;
            							}
            							/* default */{
            							}
            							_hx_goto_18:;
HXLINE( 979)							if (colorFill) {
HXLINE( 981)								::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE( 982)								::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE( 983)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE( 984)								::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE( 985)								::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE( 986)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE( 987)								if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE( 987)									::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            								}
HXLINE( 988)								i = (i + 3);
HXLINE( 989)								continue;
            							}
HXLINE( 992)							 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN( 992)							_hx_tmp->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
HXLINE( 996)							uvx1 = (uvt->get(iax) * ( (Float)(width) ));
HXLINE( 997)							uvx2 = (uvt->get(ibx) * ( (Float)(width) ));
HXLINE( 998)							uvx3 = (uvt->get(icx) * ( (Float)(width) ));
HXLINE( 999)							uvy1 = (uvt->get(iay) * ( (Float)(height) ));
HXLINE(1000)							uvy2 = (uvt->get(iby) * ( (Float)(height) ));
HXLINE(1001)							uvy3 = (uvt->get(icy) * ( (Float)(height) ));
HXLINE(1003)							denom = ((((uvx1 * (uvy3 - uvy2)) - (uvx2 * uvy3)) + (uvx3 * uvy2)) + ((uvx2 - uvx3) * uvy1));
HXLINE(1005)							if ((denom == 0)) {
HXLINE(1007)								i = (i + 3);
HXLINE(1008)								continue;
            							}
HXLINE(1011)							::openfl::display::_internal::CairoGraphics_obj::cairo->newPath();
HXLINE(1012)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x1,y1);
HXLINE(1013)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x2,y2);
HXLINE(1014)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo(x3,y3);
HXLINE(1015)							::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
HXLINE(1018)							x1 = (x1 * currentMatrix->a);
HXLINE(1019)							x2 = (x2 * currentMatrix->a);
HXLINE(1020)							x3 = (x3 * currentMatrix->a);
HXLINE(1021)							y1 = (y1 * currentMatrix->d);
HXLINE(1022)							y2 = (y2 * currentMatrix->d);
HXLINE(1023)							y3 = (y3 * currentMatrix->d);
HXLINE(1025)							t1 = (-(((((uvy1 * (x3 - x2)) - (uvy2 * x3)) + (uvy3 * x2)) + ((uvy2 - uvy3) * x1))) / denom);
HXLINE(1026)							t2 = (((((uvy2 * y3) + (uvy1 * (y2 - y3))) - (uvy3 * y2)) + ((uvy3 - uvy2) * y1)) / denom);
HXLINE(1027)							t3 = (((((uvx1 * (x3 - x2)) - (uvx2 * x3)) + (uvx3 * x2)) + ((uvx2 - uvx3) * x1)) / denom);
HXLINE(1028)							t4 = (-(((((uvx2 * y3) + (uvx1 * (y2 - y3))) - (uvx3 * y2)) + ((uvx3 - uvx2) * y1))) / denom);
HXLINE(1029)							dx = ((((uvx1 * ((uvy3 * x2) - (uvy2 * x3))) + (uvy1 * ((uvx2 * x3) - (uvx3 * x2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * x1)) / denom);
HXLINE(1030)							dy = ((((uvx1 * ((uvy3 * y2) - (uvy2 * y3))) + (uvy1 * ((uvx2 * y3) - (uvx3 * y2)))) + (((uvx3 * uvy2) - (uvx2 * uvy3)) * y1)) / denom);
HXLINE(1032)							{
HXLINE(1032)								 ::lime::math::Matrix3 _this = ::openfl::display::_internal::CairoGraphics_obj::tempMatrix3;
HXDLIN(1032)								_this->a = t1;
HXDLIN(1032)								_this->b = t2;
HXDLIN(1032)								_this->c = t3;
HXDLIN(1032)								_this->d = t4;
HXDLIN(1032)								_this->tx = dx;
HXDLIN(1032)								_this->ty = dy;
            							}
HXLINE(1033)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_matrix(::openfl::display::_internal::CairoGraphics_obj::tempMatrix3);
HXLINE(1034)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1035)							if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1035)								::openfl::display::_internal::CairoGraphics_obj::cairo->fill();
            							}
HXLINE(1037)							i = (i + 3);
            						}
HXLINE(1040)						 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1040)						_hx_tmp1->set_matrix(::openfl::display::_internal::CairoGraphics_obj::graphics->_hx___renderTransform->_hx___toMatrix3());
            					}
            					break;
            					case (int)14: {
HXLINE( 682)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 2);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 682)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->iPos = (data1->iPos + 1);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 682)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 4);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 682)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 682)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 682)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 5);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 682)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 2);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 682)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 4);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 682)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 682)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 682)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 4);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 682)								data2->iPos = (data2->iPos + 1);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 682)								data3->fPos = (data3->fPos + 2);
HXDLIN( 682)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 682)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 682)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 682)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 682)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 682)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 682)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 683)						bool _hx_tmp;
HXDLIN( 683)						if (stroke) {
HXLINE( 683)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 683)							_hx_tmp = false;
            						}
HXDLIN( 683)						if (_hx_tmp) {
HXLINE( 685)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 688)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 689)						::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createImagePattern(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE( 691)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)15: {
HXLINE( 669)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 2);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 669)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->iPos = (data1->iPos + 1);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 669)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 4);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 669)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 669)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 669)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 5);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 669)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 2);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 669)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 4);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 669)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 669)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 669)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 4);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 669)								data2->iPos = (data2->iPos + 1);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 669)								data3->fPos = (data3->fPos + 2);
HXDLIN( 669)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 669)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 669)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 669)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 669)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 669)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 669)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 670)						bool _hx_tmp;
HXDLIN( 670)						if (stroke) {
HXLINE( 670)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 670)							_hx_tmp = false;
            						}
HXDLIN( 670)						if (_hx_tmp) {
HXLINE( 672)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 675)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 676)						::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::openfl::display::_internal::CairoGraphics_obj::createGradientPattern(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE( 679)						::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
            					}
            					break;
            					case (int)16: {
HXLINE( 606)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 2);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 606)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->iPos = (data1->iPos + 1);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 606)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 4);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 606)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 606)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 606)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 5);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 606)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 2);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 606)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 4);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 606)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 606)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 606)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 4);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 606)								data2->iPos = (data2->iPos + 1);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 606)								data3->fPos = (data3->fPos + 2);
HXDLIN( 606)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 606)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 606)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 606)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 606)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 606)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 606)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 607)						bool _hx_tmp;
HXDLIN( 607)						if (stroke) {
HXLINE( 607)							_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            						}
            						else {
HXLINE( 607)							_hx_tmp = false;
            						}
HXDLIN( 607)						if (_hx_tmp) {
HXLINE( 609)							::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            						}
HXLINE( 612)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((positionX - offsetX),(positionY - offsetY));
HXLINE( 614)						if (::hx::IsNull( c->buffer->o->__get(c->oPos) )) {
HXLINE( 616)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
            						}
            						else {
HXLINE( 620)							::openfl::display::_internal::CairoGraphics_obj::hasStroke = true;
HXLINE( 622)							Float _hx_tmp;
HXDLIN( 622)							if (::hx::IsGreater( c->buffer->o->__get(c->oPos),0 )) {
HXLINE( 622)								_hx_tmp = ( (Float)(c->buffer->o->__get(c->oPos)) );
            							}
            							else {
HXLINE( 622)								_hx_tmp = ( (Float)(1) );
            							}
HXDLIN( 622)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineWidth(_hx_tmp);
HXLINE( 624)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 3)) )) {
HXLINE( 626)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(1);
            							}
            							else {
HXLINE( 630)								int _hx_tmp;
HXDLIN( 630)								 ::Dynamic _hx_switch_1 = c->buffer->o->__get((c->oPos + 3));
            								if (  (_hx_switch_1==0) ){
HXLINE( 630)									_hx_tmp = 2;
HXDLIN( 630)									goto _hx_goto_19;
            								}
            								if (  (_hx_switch_1==1) ){
HXLINE( 630)									_hx_tmp = 0;
HXDLIN( 630)									goto _hx_goto_19;
            								}
            								/* default */{
HXLINE( 630)									_hx_tmp = 1;
            								}
            								_hx_goto_19:;
HXDLIN( 630)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineJoin(_hx_tmp);
            							}
HXLINE( 638)							if (::hx::IsNull( c->buffer->o->__get((c->oPos + 2)) )) {
HXLINE( 640)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(1);
            							}
            							else {
HXLINE( 644)								int _hx_tmp;
HXDLIN( 644)								 ::Dynamic _hx_switch_2 = c->buffer->o->__get((c->oPos + 2));
            								if (  (_hx_switch_2==0) ){
HXLINE( 644)									_hx_tmp = 0;
HXDLIN( 644)									goto _hx_goto_20;
            								}
            								if (  (_hx_switch_2==2) ){
HXLINE( 644)									_hx_tmp = 2;
HXDLIN( 644)									goto _hx_goto_20;
            								}
            								/* default */{
HXLINE( 644)									_hx_tmp = 1;
            								}
            								_hx_goto_20:;
HXDLIN( 644)								::openfl::display::_internal::CairoGraphics_obj::cairo->set_lineCap(_hx_tmp);
            							}
HXLINE( 652)							::openfl::display::_internal::CairoGraphics_obj::cairo->set_miterLimit(c->buffer->f->__get((c->fPos + 1)));
HXLINE( 654)							r = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 655)							g = (( (Float)(::hx::UShr((c->buffer->i->__get(c->iPos) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 656)							b = (( (Float)((c->buffer->i->__get(c->iPos) & 255)) ) / ( (Float)(255) ));
HXLINE( 658)							if ((c->buffer->f->__get(c->fPos) == 1)) {
HXLINE( 660)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(r,g,b);
            							}
            							else {
HXLINE( 664)								::openfl::display::_internal::CairoGraphics_obj::strokePattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(r,g,b,c->buffer->f->__get(c->fPos));
            							}
            						}
            					}
            					break;
            					case (int)17: {
HXLINE( 577)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 2);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 577)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->iPos = (data1->iPos + 1);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 577)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 4);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 577)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 577)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 577)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 5);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 577)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 2);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 577)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 4);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 577)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 577)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 577)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 4);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 577)								data2->iPos = (data2->iPos + 1);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 577)								data3->fPos = (data3->fPos + 2);
HXDLIN( 577)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 577)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 577)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 577)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 577)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 577)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 577)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 578)						hasPath = true;
HXLINE( 579)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 581)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 582)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 584)						bool _hx_tmp;
HXDLIN( 584)						if ((positionX == startX)) {
HXLINE( 584)							_hx_tmp = (positionY == startY);
            						}
            						else {
HXLINE( 584)							_hx_tmp = false;
            						}
HXDLIN( 584)						if (_hx_tmp) {
HXLINE( 586)							closeGap = true;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 590)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 2);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 590)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->iPos = (data1->iPos + 1);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 590)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 4);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 590)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 590)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 590)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 5);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 590)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 2);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 590)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 4);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 590)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 590)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 590)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 4);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 590)								data2->iPos = (data2->iPos + 1);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 590)								data3->fPos = (data3->fPos + 2);
HXDLIN( 590)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 590)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 590)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 590)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 590)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 590)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 590)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 591)						::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - offsetX),(c->buffer->f->__get((c->fPos + 1)) - offsetY));
HXLINE( 593)						positionX = c->buffer->f->__get(c->fPos);
HXLINE( 594)						positionY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 596)						bool _hx_tmp;
HXDLIN( 596)						bool _hx_tmp1;
HXDLIN( 596)						if (setStart) {
HXLINE( 596)							_hx_tmp1 = (c->buffer->f->__get(c->fPos) != startX);
            						}
            						else {
HXLINE( 596)							_hx_tmp1 = false;
            						}
HXDLIN( 596)						if (_hx_tmp1) {
HXLINE( 596)							_hx_tmp = (c->buffer->f->__get((c->fPos + 1)) != startY);
            						}
            						else {
HXLINE( 596)							_hx_tmp = false;
            						}
HXDLIN( 596)						if (_hx_tmp) {
HXLINE( 598)							closeGap = true;
            						}
HXLINE( 601)						startX = c->buffer->f->__get(c->fPos);
HXLINE( 602)						startY = c->buffer->f->__get((c->fPos + 1));
HXLINE( 603)						setStart = true;
            					}
            					break;
            					case (int)21: {
HXLINE(1043)						{
HXLINE(1043)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 2);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1043)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->iPos = (data1->iPos + 1);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1043)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 4);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1043)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1043)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1043)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 5);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1043)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 2);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1043)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 4);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1043)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1043)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1043)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 4);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1043)									data2->iPos = (data2->iPos + 1);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1043)									data3->fPos = (data3->fPos + 2);
HXDLIN(1043)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1043)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1043)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1043)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1043)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1043)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1044)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(1);
            					}
            					break;
            					case (int)22: {
HXLINE(1047)						{
HXLINE(1047)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 2);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1047)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->iPos = (data1->iPos + 1);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1047)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 4);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1047)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1047)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1047)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 5);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1047)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 2);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1047)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 4);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1047)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1047)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1047)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 4);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1047)									data2->iPos = (data2->iPos + 1);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1047)									data3->fPos = (data3->fPos + 2);
HXDLIN(1047)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1047)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1047)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1047)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1047)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1047)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1048)						::openfl::display::_internal::CairoGraphics_obj::cairo->set_fillRule(0);
            					}
            					break;
            					default:{
HXLINE(1051)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 2);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1051)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->iPos = (data1->iPos + 1);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1051)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 4);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1051)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1051)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1051)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 5);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1051)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 2);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1051)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 4);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1051)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1051)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1051)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 4);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1051)								data2->iPos = (data2->iPos + 1);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1051)								data3->fPos = (data3->fPos + 2);
HXDLIN(1051)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1051)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1051)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1051)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1051)						data->prev = type;
            					}
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE(1055)		data->destroy();
HXLINE(1057)		if (hasPath) {
HXLINE(1059)			bool _hx_tmp;
HXDLIN(1059)			if (stroke) {
HXLINE(1059)				_hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::hasStroke;
            			}
            			else {
HXLINE(1059)				_hx_tmp = false;
            			}
HXDLIN(1059)			if (_hx_tmp) {
HXLINE(1061)				if (::openfl::display::_internal::CairoGraphics_obj::hasFill) {
HXLINE(1063)					bool _hx_tmp;
HXDLIN(1063)					if ((positionX == startX)) {
HXLINE(1063)						_hx_tmp = (positionY != startY);
            					}
            					else {
HXLINE(1063)						_hx_tmp = true;
            					}
HXDLIN(1063)					if (_hx_tmp) {
HXLINE(1065)						::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((startX - offsetX),(startY - offsetY));
HXLINE(1066)						closeGap = true;
            					}
HXLINE(1069)					if (closeGap) {
HXLINE(1069)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
            				else {
HXLINE(1071)					bool _hx_tmp;
HXDLIN(1071)					bool _hx_tmp1;
HXDLIN(1071)					if (closeGap) {
HXLINE(1071)						_hx_tmp1 = (positionX == startX);
            					}
            					else {
HXLINE(1071)						_hx_tmp1 = false;
            					}
HXDLIN(1071)					if (_hx_tmp1) {
HXLINE(1071)						_hx_tmp = (positionY == startY);
            					}
            					else {
HXLINE(1071)						_hx_tmp = false;
            					}
HXDLIN(1071)					if (_hx_tmp) {
HXLINE(1073)						::openfl::display::_internal::CairoGraphics_obj::closePath(true);
            					}
            				}
HXLINE(1076)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::strokePattern);
HXLINE(1077)				if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1077)					::openfl::display::_internal::CairoGraphics_obj::cairo->strokePreserve();
            				}
            			}
HXLINE(1080)			bool _hx_tmp1;
HXDLIN(1080)			if (!(stroke)) {
HXLINE(1080)				_hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::hasFill;
            			}
            			else {
HXLINE(1080)				_hx_tmp1 = false;
            			}
HXDLIN(1080)			if (_hx_tmp1) {
HXLINE(1082)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(-(::openfl::display::_internal::CairoGraphics_obj::bounds->x),-(::openfl::display::_internal::CairoGraphics_obj::bounds->y));
HXLINE(1084)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix )) {
HXLINE(1086)					 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(1087)					matrix->copyFrom(::openfl::display::_internal::CairoGraphics_obj::fillPatternMatrix);
HXLINE(1088)					matrix->invert();
HXLINE(1090)					if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1092)						matrix->concat(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix);
            					}
HXLINE(1095)					 ::Dynamic _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::fillPattern;
HXDLIN(1095)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(_hx_tmp,matrix->_hx___toMatrix3());
HXLINE(1097)					::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            				}
HXLINE(1100)				::openfl::display::_internal::CairoGraphics_obj::cairo->set_source(::openfl::display::_internal::CairoGraphics_obj::fillPattern);
HXLINE(1102)				if (::hx::IsNotNull( ::openfl::display::_internal::CairoGraphics_obj::pendingMatrix )) {
HXLINE(1104)					 ::lime::graphics::cairo::Cairo _hx_tmp = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1104)					_hx_tmp->transform(::openfl::display::_internal::CairoGraphics_obj::pendingMatrix->_hx___toMatrix3());
HXLINE(1105)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1105)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
HXLINE(1106)					 ::lime::graphics::cairo::Cairo _hx_tmp1 = ::openfl::display::_internal::CairoGraphics_obj::cairo;
HXDLIN(1106)					_hx_tmp1->transform(::openfl::display::_internal::CairoGraphics_obj::inversePendingMatrix->_hx___toMatrix3());
            				}
            				else {
HXLINE(1110)					if (!(::openfl::display::_internal::CairoGraphics_obj::hitTesting)) {
HXLINE(1110)						::openfl::display::_internal::CairoGraphics_obj::cairo->fillPreserve();
            					}
            				}
HXLINE(1113)				::openfl::display::_internal::CairoGraphics_obj::cairo->translate(::openfl::display::_internal::CairoGraphics_obj::bounds->x,::openfl::display::_internal::CairoGraphics_obj::bounds->y);
HXLINE(1114)				::openfl::display::_internal::CairoGraphics_obj::cairo->closePath();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

void CairoGraphics_obj::quadraticCurveTo(Float cx,Float cy,Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1120_quadraticCurveTo)
HXLINE(1121)		 ::lime::math::Vector2 current = null();
HXLINE(1123)		if (!(::openfl::display::_internal::CairoGraphics_obj::cairo->get_hasCurrentPoint())) {
HXLINE(1125)			::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(cx,cy);
HXLINE(1126)			current =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,cx,cy);
            		}
            		else {
HXLINE(1130)			current = ::openfl::display::_internal::CairoGraphics_obj::cairo->get_currentPoint();
            		}
HXLINE(1133)		Float cx1 = (current->x + (((Float)0.66666666666666663) * (cx - current->x)));
HXLINE(1134)		Float cy1 = (current->y + (((Float)0.66666666666666663) * (cy - current->y)));
HXLINE(1135)		Float cx2 = (x + (((Float)0.66666666666666663) * (cx - x)));
HXLINE(1136)		Float cy2 = (y + (((Float)0.66666666666666663) * (cy - y)));
HXLINE(1138)		::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(cx1,cy1,cx2,cy2,x,y);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

void CairoGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1143_render)
HXLINE(1145)		::openfl::display::_internal::CairoGraphics_obj::graphics = graphics;
HXLINE(1146)		::openfl::display::_internal::CairoGraphics_obj::allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE(1147)		::openfl::display::_internal::CairoGraphics_obj::worldAlpha = renderer->_hx___getAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE(1152)		Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE(1155)		graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE(1157)		bool _hx_tmp;
HXDLIN(1157)		if (graphics->_hx___softwareDirty) {
HXLINE(1157)			_hx_tmp = graphics->_hx___managed;
            		}
            		else {
HXLINE(1157)			_hx_tmp = true;
            		}
HXDLIN(1157)		if (_hx_tmp) {
HXLINE(1157)			return;
            		}
HXLINE(1159)		::openfl::display::_internal::CairoGraphics_obj::bounds = graphics->_hx___bounds;
HXLINE(1161)		int width = graphics->_hx___width;
HXLINE(1162)		int height = graphics->_hx___height;
HXLINE(1164)		bool _hx_tmp1;
HXDLIN(1164)		bool _hx_tmp2;
HXDLIN(1164)		bool _hx_tmp3;
HXDLIN(1164)		bool _hx_tmp4;
HXDLIN(1164)		if (graphics->_hx___visible) {
HXLINE(1164)			_hx_tmp4 = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE(1164)			_hx_tmp4 = true;
            		}
HXDLIN(1164)		if (!(_hx_tmp4)) {
HXLINE(1164)			_hx_tmp3 = ::hx::IsNull( ::openfl::display::_internal::CairoGraphics_obj::bounds );
            		}
            		else {
HXLINE(1164)			_hx_tmp3 = true;
            		}
HXDLIN(1164)		if (!(_hx_tmp3)) {
HXLINE(1164)			_hx_tmp2 = (width < 1);
            		}
            		else {
HXLINE(1164)			_hx_tmp2 = true;
            		}
HXDLIN(1164)		if (!(_hx_tmp2)) {
HXLINE(1164)			_hx_tmp1 = (height < 1);
            		}
            		else {
HXLINE(1164)			_hx_tmp1 = true;
            		}
HXDLIN(1164)		if (_hx_tmp1) {
HXLINE(1166)			graphics->_hx___cairo = null();
HXLINE(1167)			graphics->_hx___bitmap = null();
            		}
            		else {
HXLINE(1171)			::openfl::display::_internal::CairoGraphics_obj::hitTesting = false;
HXLINE(1172)			bool needsUpscaling = false;
HXLINE(1174)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1176)				 ::Dynamic surface = graphics->_hx___cairo->get_target();
HXLINE(1178)				bool _hx_tmp;
HXDLIN(1178)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE(1178)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE(1178)					_hx_tmp = true;
            				}
HXDLIN(1178)				if (_hx_tmp) {
HXLINE(1180)					graphics->_hx___cairo = null();
HXLINE(1181)					needsUpscaling = true;
            				}
            			}
HXLINE(1185)			bool _hx_tmp;
HXDLIN(1185)			if (::hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(1185)				_hx_tmp = ::hx::IsNull( graphics->_hx___bitmap );
            			}
            			else {
HXLINE(1185)				_hx_tmp = true;
            			}
HXDLIN(1185)			if (_hx_tmp) {
HXLINE(1187)				 ::openfl::display::BitmapData bitmap;
HXDLIN(1187)				if (needsUpscaling) {
HXLINE(1187)					int bitmap1 = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
HXDLIN(1187)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmap1,::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25))),true,0);
            				}
            				else {
HXLINE(1187)					bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
            				}
HXLINE(1188)				 ::Dynamic surface = bitmap->getSurface();
HXLINE(1189)				graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE(1190)				graphics->_hx___bitmap = bitmap;
            			}
HXLINE(1193)			::openfl::display::_internal::CairoGraphics_obj::cairo = graphics->_hx___cairo;
HXLINE(1195)			renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,10);
HXLINE(1196)			renderer->applyMatrix(graphics->_hx___renderTransform,::openfl::display::_internal::CairoGraphics_obj::cairo);
HXLINE(1198)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(0);
HXLINE(1199)			::openfl::display::_internal::CairoGraphics_obj::cairo->paint();
HXLINE(1200)			::openfl::display::_internal::CairoGraphics_obj::cairo->setOperator(2);
HXLINE(1202)			::openfl::display::_internal::CairoGraphics_obj::fillCommands->clear();
HXLINE(1203)			::openfl::display::_internal::CairoGraphics_obj::strokeCommands->clear();
HXLINE(1205)			::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1206)			::openfl::display::_internal::CairoGraphics_obj::hasStroke = false;
HXLINE(1208)			::openfl::display::_internal::CairoGraphics_obj::fillPattern = null();
HXLINE(1209)			::openfl::display::_internal::CairoGraphics_obj::strokePattern = null();
HXLINE(1211)			bool hasLineStyle = false;
HXLINE(1212)			Float initStrokeX = ((Float)0.0);
HXLINE(1213)			Float initStrokeY = ((Float)0.0);
HXLINE(1215)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1217)			{
HXLINE(1217)				int _g = 0;
HXDLIN(1217)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1217)				while((_g < _g1->length)){
HXLINE(1217)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1217)					_g = (_g + 1);
HXLINE(1219)					switch((int)(type->_hx_getIndex())){
            						case (int)0: case (int)1: case (int)2: case (int)3: {
HXLINE(1331)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1332)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1334)							if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn() )) {
HXLINE(1336)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 2);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1336)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->iPos = (data1->iPos + 1);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1336)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 4);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1336)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1336)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1336)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 5);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1336)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 2);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1336)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 4);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1336)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1336)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1336)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 4);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1336)										data2->iPos = (data2->iPos + 1);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1336)										data3->fPos = (data3->fPos + 2);
HXDLIN(1336)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1336)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1336)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1336)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1336)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(1336)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1336)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1337)								::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
HXLINE(1338)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            							}
            							else {
HXLINE(1340)								if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn() )) {
HXLINE(1342)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 2);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1342)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->iPos = (data1->iPos + 1);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1342)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 4);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1342)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1342)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1342)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 5);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1342)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 2);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1342)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 4);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1342)											data2->iiPos = (data2->iiPos + 2);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1342)											data3->ffPos = (data3->ffPos + 1);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1342)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 4);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1342)											data2->iPos = (data2->iPos + 1);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1342)											data3->fPos = (data3->fPos + 2);
HXDLIN(1342)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1342)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE(1342)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1342)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE(1342)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(1342)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1342)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1343)									::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
HXLINE(1345)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            								}
            								else {
HXLINE(1348)									if (::hx::IsPointerEq( type,::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn() )) {
HXLINE(1350)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 2);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1350)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->iPos = (data1->iPos + 1);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1350)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 4);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1350)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1350)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1350)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 5);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1350)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 2);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1350)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 4);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1350)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1350)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1350)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 4);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1350)												data2->iPos = (data2->iPos + 1);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1350)												data3->fPos = (data3->fPos + 2);
HXDLIN(1350)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1350)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1350)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1350)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1350)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(1350)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1350)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1351)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
HXLINE(1352)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            									}
            									else {
HXLINE(1356)										switch((int)(data->prev->_hx_getIndex())){
            											case (int)0: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 2);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1356)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)1: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->iPos = (data1->iPos + 1);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1356)												data2->fPos = (data2->fPos + 1);
            											}
            											break;
            											case (int)2: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 4);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1356)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1356)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1356)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)3: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)4: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 6);
            											}
            											break;
            											case (int)5: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)6: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 3);
            											}
            											break;
            											case (int)7: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)8: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 3);
            											}
            											break;
            											case (int)9: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 4);
            											}
            											break;
            											case (int)10: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 5);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1356)												data2->oPos = (data2->oPos + 1);
            											}
            											break;
            											case (int)12: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 4);
            											}
            											break;
            											case (int)13: {
            											}
            											break;
            											case (int)14: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 2);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1356)												data2->bPos = (data2->bPos + 2);
            											}
            											break;
            											case (int)15: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 4);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1356)												data2->iiPos = (data2->iiPos + 2);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1356)												data3->ffPos = (data3->ffPos + 1);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1356)												data4->fPos = (data4->fPos + 1);
            											}
            											break;
            											case (int)16: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 4);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1356)												data2->iPos = (data2->iPos + 1);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1356)												data3->fPos = (data3->fPos + 2);
HXDLIN(1356)												 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1356)												data4->bPos = (data4->bPos + 1);
            											}
            											break;
            											case (int)17: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)18: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->fPos = (data1->fPos + 2);
            											}
            											break;
            											case (int)19: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)20: {
HXLINE(1356)												 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1356)												data1->oPos = (data1->oPos + 1);
            											}
            											break;
            											case (int)21: case (int)22: {
            											}
            											break;
            											default:{
            											}
            										}
HXLINE(1356)										data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(1356)										 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1356)										 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1357)										::openfl::display::_internal::CairoGraphics_obj::fillCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
HXLINE(1358)										::openfl::display::_internal::CairoGraphics_obj::strokeCommands->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
            									}
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE(1222)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 2);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1222)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->iPos = (data1->iPos + 1);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1222)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 4);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1222)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1222)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1222)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 5);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1222)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 2);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1222)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 4);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1222)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1222)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1222)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 4);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1222)									data2->iPos = (data2->iPos + 1);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1222)									data3->fPos = (data3->fPos + 2);
HXDLIN(1222)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1222)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1222)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1222)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1222)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1222)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1222)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1223)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
HXLINE(1225)							if (hasLineStyle) {
HXLINE(1227)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            							}
            							else {
HXLINE(1231)								initStrokeX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1232)								initStrokeY = c->buffer->f->__get((c->fPos + 5));
            							}
            						}
            						break;
            						case (int)5: {
HXLINE(1236)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 2);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1236)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->iPos = (data1->iPos + 1);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1236)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 4);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1236)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1236)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1236)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 5);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1236)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 2);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1236)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 4);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1236)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1236)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1236)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 4);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1236)									data2->iPos = (data2->iPos + 1);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1236)									data3->fPos = (data3->fPos + 2);
HXDLIN(1236)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1236)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1236)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1236)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1236)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1236)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1236)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1237)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1239)							if (hasLineStyle) {
HXLINE(1241)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            							else {
HXLINE(1245)								initStrokeX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1246)								initStrokeY = c->buffer->f->__get((c->fPos + 3));
            							}
            						}
            						break;
            						case (int)6: {
HXLINE(1362)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 2);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1362)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->iPos = (data1->iPos + 1);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1362)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 4);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1362)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1362)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1362)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 5);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1362)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 2);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1362)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 4);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1362)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1362)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1362)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 4);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1362)									data2->iPos = (data2->iPos + 1);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1362)									data3->fPos = (data3->fPos + 2);
HXDLIN(1362)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1362)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1362)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1362)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1362)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1362)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1362)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1363)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
HXLINE(1365)							if (hasLineStyle) {
HXLINE(1367)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            							}
            						}
            						break;
            						case (int)7: {
HXLINE(1371)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 2);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1371)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->iPos = (data1->iPos + 1);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1371)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 4);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1371)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1371)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1371)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 5);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1371)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 2);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1371)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 4);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1371)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1371)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1371)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 4);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1371)									data2->iPos = (data2->iPos + 1);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1371)									data3->fPos = (data3->fPos + 2);
HXDLIN(1371)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1371)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1371)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1371)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1371)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1371)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1371)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1372)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1374)							if (hasLineStyle) {
HXLINE(1376)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)8: {
HXLINE(1398)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 2);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1398)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->iPos = (data1->iPos + 1);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1398)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 4);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1398)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1398)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1398)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 5);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1398)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 2);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1398)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 4);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1398)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1398)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1398)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 4);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1398)									data2->iPos = (data2->iPos + 1);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1398)									data3->fPos = (data3->fPos + 2);
HXDLIN(1398)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1398)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1398)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1398)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1398)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(1398)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1398)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1399)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawQuads(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ));
            						}
            						break;
            						case (int)9: {
HXLINE(1380)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 2);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1380)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->iPos = (data1->iPos + 1);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1380)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 4);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1380)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1380)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1380)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 5);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1380)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 2);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1380)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 4);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1380)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1380)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1380)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 4);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1380)									data2->iPos = (data2->iPos + 1);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1380)									data3->fPos = (data3->fPos + 2);
HXDLIN(1380)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1380)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1380)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1380)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1380)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1380)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1380)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1381)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
HXLINE(1383)							if (hasLineStyle) {
HXLINE(1385)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            							}
            						}
            						break;
            						case (int)10: {
HXLINE(1389)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 2);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1389)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->iPos = (data1->iPos + 1);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1389)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 4);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1389)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1389)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1389)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 5);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1389)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 2);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1389)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 4);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1389)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1389)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1389)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 4);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1389)									data2->iPos = (data2->iPos + 1);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1389)									data3->fPos = (data3->fPos + 2);
HXDLIN(1389)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1389)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1389)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1389)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1389)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1389)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1389)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1390)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
HXLINE(1392)							if (hasLineStyle) {
HXLINE(1394)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            							}
            						}
            						break;
            						case (int)12: {
HXLINE(1402)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 2);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1402)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->iPos = (data1->iPos + 1);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1402)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 4);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1402)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1402)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1402)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 5);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1402)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 2);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1402)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 4);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1402)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1402)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1402)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 4);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1402)									data2->iPos = (data2->iPos + 1);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1402)									data3->fPos = (data3->fPos + 2);
HXDLIN(1402)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1402)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1402)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1402)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1402)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN(1402)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1402)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1403)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->drawTriangles(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ),c->buffer->o->__get((c->oPos + 3)));
            						}
            						break;
            						case (int)13: {
HXLINE(1278)							{
HXLINE(1278)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 2);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1278)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->iPos = (data1->iPos + 1);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1278)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 4);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1278)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1278)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1278)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 5);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1278)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 2);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1278)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 4);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1278)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1278)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1278)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 4);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1278)										data2->iPos = (data2->iPos + 1);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1278)										data3->fPos = (data3->fPos + 2);
HXDLIN(1278)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1278)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1278)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1278)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1278)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN(1278)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1279)							::openfl::display::_internal::CairoGraphics_obj::endFill();
HXLINE(1280)							::openfl::display::_internal::CairoGraphics_obj::endStroke();
HXLINE(1281)							::openfl::display::_internal::CairoGraphics_obj::hasFill = false;
HXLINE(1282)							hasLineStyle = false;
HXLINE(1283)							::openfl::display::_internal::CairoGraphics_obj::bitmapFill = null();
HXLINE(1284)							initStrokeX = ( (Float)(0) );
HXLINE(1285)							initStrokeY = ( (Float)(0) );
            						}
            						break;
            						case (int)14: {
HXLINE(1302)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 2);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1302)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->iPos = (data1->iPos + 1);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1302)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 4);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1302)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1302)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1302)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 5);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1302)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 2);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1302)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 4);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1302)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1302)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1302)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 4);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1302)									data2->iPos = (data2->iPos + 1);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1302)									data3->fPos = (data3->fPos + 2);
HXDLIN(1302)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1302)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1302)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1302)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1302)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN(1302)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1302)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1304)							bool _hx_tmp;
HXDLIN(1304)							if (!(hasLineStyle)) {
HXLINE(1304)								if ((initStrokeX == 0)) {
HXLINE(1304)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1304)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1304)								_hx_tmp = false;
            							}
HXDLIN(1304)							if (_hx_tmp) {
HXLINE(1306)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1307)								initStrokeX = ( (Float)(0) );
HXLINE(1308)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1311)							hasLineStyle = true;
HXLINE(1312)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            						}
            						break;
            						case (int)15: {
HXLINE(1288)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 2);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->iPos = (data1->iPos + 1);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 4);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1288)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1288)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 5);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 2);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 4);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1288)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1288)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 4);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1288)									data2->iPos = (data2->iPos + 1);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1288)									data3->fPos = (data3->fPos + 2);
HXDLIN(1288)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1288)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1288)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1288)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1288)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN(1288)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1288)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1290)							bool _hx_tmp;
HXDLIN(1290)							if (!(hasLineStyle)) {
HXLINE(1290)								if ((initStrokeX == 0)) {
HXLINE(1290)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1290)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1290)								_hx_tmp = false;
            							}
HXDLIN(1290)							if (_hx_tmp) {
HXLINE(1292)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1293)								initStrokeX = ( (Float)(0) );
HXLINE(1294)								initStrokeY = ( (Float)(0) );
            							}
HXLINE(1297)							hasLineStyle = true;
HXLINE(1298)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            						}
            						break;
            						case (int)16: {
HXLINE(1315)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 2);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1315)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->iPos = (data1->iPos + 1);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1315)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 4);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1315)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1315)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1315)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 5);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1315)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 2);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1315)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 4);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1315)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1315)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1315)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 4);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1315)									data2->iPos = (data2->iPos + 1);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1315)									data3->fPos = (data3->fPos + 2);
HXDLIN(1315)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1315)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1315)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1315)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1315)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN(1315)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1315)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1317)							bool _hx_tmp;
HXDLIN(1317)							if (!(hasLineStyle)) {
HXLINE(1317)								_hx_tmp = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
            							}
            							else {
HXLINE(1317)								_hx_tmp = false;
            							}
HXDLIN(1317)							if (_hx_tmp) {
HXLINE(1319)								bool _hx_tmp;
HXDLIN(1319)								if ((initStrokeX == 0)) {
HXLINE(1319)									_hx_tmp = (initStrokeY != 0);
            								}
            								else {
HXLINE(1319)									_hx_tmp = true;
            								}
HXDLIN(1319)								if (_hx_tmp) {
HXLINE(1321)									::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(initStrokeX,initStrokeY);
HXLINE(1322)									initStrokeX = ( (Float)(0) );
HXLINE(1323)									initStrokeY = ( (Float)(0) );
            								}
            							}
HXLINE(1327)							hasLineStyle = ::hx::IsNotNull( c->buffer->o->__get(c->oPos) );
HXLINE(1328)							::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            						}
            						break;
            						case (int)17: {
HXLINE(1250)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 2);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1250)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->iPos = (data1->iPos + 1);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1250)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 4);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1250)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1250)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1250)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 5);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1250)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 2);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1250)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 4);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1250)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1250)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1250)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 4);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1250)									data2->iPos = (data2->iPos + 1);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1250)									data3->fPos = (data3->fPos + 2);
HXDLIN(1250)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1250)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1250)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1250)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1250)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1250)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1250)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1251)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1253)							if (hasLineStyle) {
HXLINE(1255)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1259)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1260)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)18: {
HXLINE(1264)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 2);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1264)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->iPos = (data1->iPos + 1);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1264)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 4);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1264)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1264)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1264)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 5);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1264)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 2);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1264)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 4);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1264)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1264)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1264)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 4);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1264)									data2->iPos = (data2->iPos + 1);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1264)									data3->fPos = (data3->fPos + 2);
HXDLIN(1264)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1264)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1264)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1264)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1264)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1264)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1264)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1265)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
HXLINE(1267)							if (hasLineStyle) {
HXLINE(1269)								::openfl::display::_internal::CairoGraphics_obj::strokeCommands->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            							}
            							else {
HXLINE(1273)								initStrokeX = c->buffer->f->__get(c->fPos);
HXLINE(1274)								initStrokeY = c->buffer->f->__get((c->fPos + 1));
            							}
            						}
            						break;
            						case (int)19: {
HXLINE(1406)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 2);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1406)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->iPos = (data1->iPos + 1);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1406)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 4);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1406)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1406)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1406)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 5);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1406)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 2);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1406)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 4);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1406)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1406)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1406)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 4);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1406)									data2->iPos = (data2->iPos + 1);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1406)									data3->fPos = (data3->fPos + 2);
HXDLIN(1406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1406)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1406)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN(1406)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1406)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1407)							renderer->_hx___setBlendModeCairo(::openfl::display::_internal::CairoGraphics_obj::cairo,c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)21: {
HXLINE(1410)							{
HXLINE(1410)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 2);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1410)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->iPos = (data1->iPos + 1);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1410)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 4);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1410)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1410)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1410)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 5);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1410)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 2);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1410)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 4);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1410)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1410)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1410)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 4);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1410)										data2->iPos = (data2->iPos + 1);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1410)										data3->fPos = (data3->fPos + 2);
HXDLIN(1410)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1410)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1410)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1410)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1410)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN(1410)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1411)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingEvenOdd();
            						}
            						break;
            						case (int)22: {
HXLINE(1414)							{
HXLINE(1414)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 2);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1414)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->iPos = (data1->iPos + 1);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1414)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 4);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1414)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1414)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1414)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 5);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1414)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 2);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1414)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 4);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1414)										data2->iiPos = (data2->iiPos + 2);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1414)										data3->ffPos = (data3->ffPos + 1);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1414)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 4);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1414)										data2->iPos = (data2->iPos + 1);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1414)										data3->fPos = (data3->fPos + 2);
HXDLIN(1414)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1414)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE(1414)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1414)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE(1414)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN(1414)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
            							}
HXLINE(1415)							::openfl::display::_internal::CairoGraphics_obj::fillCommands->windingNonZero();
            						}
            						break;
            						default:{
HXLINE(1418)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 2);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1418)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->iPos = (data1->iPos + 1);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1418)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 4);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1418)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1418)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1418)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 5);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1418)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 2);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1418)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 4);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1418)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1418)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1418)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 4);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1418)									data2->iPos = (data2->iPos + 1);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1418)									data3->fPos = (data3->fPos + 2);
HXDLIN(1418)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1418)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1418)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1418)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1418)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1422)			if ((::openfl::display::_internal::CairoGraphics_obj::fillCommands->get_length() > 0)) {
HXLINE(1424)				::openfl::display::_internal::CairoGraphics_obj::endFill();
            			}
HXLINE(1427)			if ((::openfl::display::_internal::CairoGraphics_obj::strokeCommands->get_length() > 0)) {
HXLINE(1429)				::openfl::display::_internal::CairoGraphics_obj::endStroke();
            			}
HXLINE(1432)			data->destroy();
HXLINE(1434)			graphics->_hx___bitmap->image->dirty = true;
HXLINE(1435)			graphics->_hx___bitmap->image->version++;
            		}
HXLINE(1438)		graphics->_hx___softwareDirty = false;
HXLINE(1439)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_1446_renderMask)
HXDLIN(1446)		if ((graphics->_hx___commands->get_length() != 0)) {
HXLINE(1448)			::openfl::display::_internal::CairoGraphics_obj::cairo = renderer->cairo;
HXLINE(1450)			Float positionX = ((Float)0.0);
HXLINE(1451)			Float positionY = ((Float)0.0);
HXLINE(1453)			int offsetX = 0;
HXLINE(1454)			int offsetY = 0;
HXLINE(1456)			 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(1458)			Float x;
HXDLIN(1458)			Float y;
HXDLIN(1458)			Float width;
HXDLIN(1458)			Float height;
HXDLIN(1458)			Float kappa = ((Float).5522848);
HXDLIN(1458)			Float ox;
HXDLIN(1458)			Float oy;
HXDLIN(1458)			Float xe;
HXDLIN(1458)			Float ye;
HXDLIN(1458)			Float xm;
HXDLIN(1458)			Float ym;
HXLINE(1460)			{
HXLINE(1460)				int _g = 0;
HXDLIN(1460)				::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(1460)				while((_g < _g1->length)){
HXLINE(1460)					 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1460)					_g = (_g + 1);
HXLINE(1462)					switch((int)(type->_hx_getIndex())){
            						case (int)4: {
HXLINE(1465)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->iPos = (data1->iPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1465)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1465)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 5);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1465)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1465)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 4);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1465)									data2->iPos = (data2->iPos + 1);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1465)									data3->fPos = (data3->fPos + 2);
HXDLIN(1465)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1465)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1465)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1465)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1465)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1465)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1465)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1466)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 4)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 5)) - ( (Float)(offsetY) )));
HXLINE(1474)							positionX = c->buffer->f->__get((c->fPos + 4));
HXLINE(1475)							positionY = c->buffer->f->__get((c->fPos + 5));
            						}
            						break;
            						case (int)5: {
HXLINE(1478)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 2);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1478)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->iPos = (data1->iPos + 1);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1478)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 4);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1478)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1478)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1478)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 5);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1478)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 2);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1478)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 4);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1478)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1478)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1478)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 4);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1478)									data2->iPos = (data2->iPos + 1);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1478)									data3->fPos = (data3->fPos + 2);
HXDLIN(1478)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1478)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1478)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1478)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1478)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1478)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1478)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1479)							::openfl::display::_internal::CairoGraphics_obj::quadraticCurveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),(c->buffer->f->__get((c->fPos + 2)) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 3)) - ( (Float)(offsetY) )));
HXLINE(1480)							positionX = c->buffer->f->__get((c->fPos + 2));
HXLINE(1481)							positionY = c->buffer->f->__get((c->fPos + 3));
            						}
            						break;
            						case (int)6: {
HXLINE(1484)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 2);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1484)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->iPos = (data1->iPos + 1);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1484)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 4);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1484)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1484)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1484)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 5);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1484)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 2);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1484)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 4);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1484)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1484)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1484)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 4);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1484)									data2->iPos = (data2->iPos + 1);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1484)									data3->fPos = (data3->fPos + 2);
HXDLIN(1484)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1484)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1484)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1484)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1484)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1484)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1484)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1485)							::openfl::display::_internal::CairoGraphics_obj::cairo->arc((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),( (Float)(0) ),(::Math_obj::PI * ( (Float)(2) )));
            						}
            						break;
            						case (int)7: {
HXLINE(1488)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 2);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1488)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->iPos = (data1->iPos + 1);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1488)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 4);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1488)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1488)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1488)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 5);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1488)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 2);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1488)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 4);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1488)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1488)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1488)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 4);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1488)									data2->iPos = (data2->iPos + 1);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1488)									data3->fPos = (data3->fPos + 2);
HXDLIN(1488)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1488)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1488)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1488)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1488)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1488)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1488)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1490)							x = c->buffer->f->__get(c->fPos);
HXLINE(1491)							y = c->buffer->f->__get((c->fPos + 1));
HXLINE(1492)							width = c->buffer->f->__get((c->fPos + 2));
HXLINE(1493)							height = c->buffer->f->__get((c->fPos + 3));
HXLINE(1495)							x = (x - ( (Float)(offsetX) ));
HXLINE(1496)							y = (y - ( (Float)(offsetY) ));
HXLINE(1498)							ox = ((width / ( (Float)(2) )) * kappa);
HXLINE(1499)							oy = ((height / ( (Float)(2) )) * kappa);
HXLINE(1500)							xe = (x + width);
HXLINE(1501)							ye = (y + height);
HXLINE(1502)							xm = (x + (width / ( (Float)(2) )));
HXLINE(1503)							ym = (y + (height / ( (Float)(2) )));
HXLINE(1507)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo(x,ym);
HXLINE(1508)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(x,(ym - oy),(xm - ox),y,xm,y);
HXLINE(1509)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm + ox),y,xe,(ym - oy),xe,ym);
HXLINE(1510)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo(xe,(ym + oy),(xm + ox),ye,xm,ye);
HXLINE(1511)							::openfl::display::_internal::CairoGraphics_obj::cairo->curveTo((xm - ox),ye,x,(ym + oy),x,ym);
            						}
            						break;
            						case (int)9: {
HXLINE(1515)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 2);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1515)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->iPos = (data1->iPos + 1);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1515)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 4);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1515)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1515)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1515)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 5);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1515)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 2);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1515)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 4);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1515)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1515)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1515)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 4);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1515)									data2->iPos = (data2->iPos + 1);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1515)									data3->fPos = (data3->fPos + 2);
HXDLIN(1515)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1515)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1515)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1515)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1515)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1515)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1515)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1516)							::openfl::display::_internal::CairoGraphics_obj::cairo->rectangle((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            						}
            						break;
            						case (int)10: {
HXLINE(1519)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 2);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1519)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->iPos = (data1->iPos + 1);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1519)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 4);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1519)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1519)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1519)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 5);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1519)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 2);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1519)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 4);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1519)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1519)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1519)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 4);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1519)									data2->iPos = (data2->iPos + 1);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1519)									data3->fPos = (data3->fPos + 2);
HXDLIN(1519)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1519)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1519)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1519)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1519)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1519)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1519)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1520)							::openfl::display::_internal::CairoGraphics_obj::drawRoundRect((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            						}
            						break;
            						case (int)17: {
HXLINE(1523)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 2);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1523)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->iPos = (data1->iPos + 1);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1523)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 4);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1523)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1523)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1523)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 5);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1523)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 2);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1523)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 4);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1523)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1523)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1523)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 4);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1523)									data2->iPos = (data2->iPos + 1);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1523)									data3->fPos = (data3->fPos + 2);
HXDLIN(1523)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1523)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1523)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1523)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1523)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1523)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1523)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1524)							::openfl::display::_internal::CairoGraphics_obj::cairo->lineTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1525)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1526)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						case (int)18: {
HXLINE(1529)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 2);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1529)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->iPos = (data1->iPos + 1);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1529)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 4);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1529)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1529)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1529)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 5);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1529)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 2);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1529)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 4);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1529)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1529)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1529)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 4);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1529)									data2->iPos = (data2->iPos + 1);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1529)									data3->fPos = (data3->fPos + 2);
HXDLIN(1529)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1529)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1529)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1529)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1529)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1529)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1529)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1530)							::openfl::display::_internal::CairoGraphics_obj::cairo->moveTo((c->buffer->f->__get(c->fPos) - ( (Float)(offsetX) )),(c->buffer->f->__get((c->fPos + 1)) - ( (Float)(offsetY) )));
HXLINE(1531)							positionX = c->buffer->f->__get(c->fPos);
HXLINE(1532)							positionY = c->buffer->f->__get((c->fPos + 1));
            						}
            						break;
            						default:{
HXLINE(1535)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->iPos = (data1->iPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1535)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1535)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 5);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1535)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1535)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 4);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1535)									data2->iPos = (data2->iPos + 1);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1535)									data3->fPos = (data3->fPos + 2);
HXDLIN(1535)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1535)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1535)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1535)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1535)							data->prev = type;
            						}
            					}
            				}
            			}
HXLINE(1539)			data->destroy();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = ( SIN45 ); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = ( TAN22 ); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = ( cairo ); return true; }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = ( bounds ); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = ( hasFill ); return true; }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = ( graphics ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = ( hasStroke ); return true; }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = ( bitmapFill ); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = ( hitTesting ); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { outValue = ( worldAlpha ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = ( fillPattern ); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { outValue = ( tempMatrix3 ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = ( bitmapRepeat ); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = ( fillCommands ); return true; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = ( pendingMatrix ); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = ( strokePattern ); return true; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { outValue = ( allowSmoothing ); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = ( strokeCommands ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = ( fillPatternMatrix ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = ( inversePendingMatrix ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true; }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast<  ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { worldAlpha=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"tempMatrix3") ) { tempMatrix3=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CairoGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_("SIN45",79,16,be,fa)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_("TAN22",41,f4,da,88)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::allowSmoothing,HX_("allowSmoothing",ab,b7,66,68)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &CairoGraphics_obj::bitmapFill,HX_("bitmapFill",12,2e,19,35)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_("bitmapRepeat",aa,38,9c,11)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &CairoGraphics_obj::bounds,HX_("bounds",75,86,1d,66)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(void *) &CairoGraphics_obj::cairo,HX_("cairo",88,30,19,41)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::fillCommands,HX_("fillCommands",6b,f6,c9,c2)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::fillPattern,HX_("fillPattern",0d,86,12,35)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_("fillPatternMatrix",2e,b8,ae,97)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &CairoGraphics_obj::graphics,HX_("graphics",cb,f8,67,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_("hasFill",fd,ee,ff,12)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_("hasStroke",b2,66,1d,52)},
	{::hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_("hitTesting",bd,65,48,19)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_("inversePendingMatrix",28,14,8c,bb)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_("pendingMatrix",f8,9d,96,b5)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CairoGraphics_obj::strokeCommands,HX_("strokeCommands",a0,98,2a,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CairoGraphics_obj::strokePattern,HX_("strokePattern",78,e1,21,7e)},
	{::hx::fsObject /*  ::lime::math::Matrix3 */ ,(void *) &CairoGraphics_obj::tempMatrix3,HX_("tempMatrix3",1e,f2,bd,79)},
	{::hx::fsFloat,(void *) &CairoGraphics_obj::worldAlpha,HX_("worldAlpha",ac,57,43,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CairoGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::tempMatrix3,"tempMatrix3");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::worldAlpha,"worldAlpha");
};

#endif

::hx::Class CairoGraphics_obj::__mClass;

static ::String CairoGraphics_obj_sStaticFields[] = {
	HX_("SIN45",79,16,be,fa),
	HX_("TAN22",41,f4,da,88),
	HX_("allowSmoothing",ab,b7,66,68),
	HX_("bitmapFill",12,2e,19,35),
	HX_("bitmapRepeat",aa,38,9c,11),
	HX_("bounds",75,86,1d,66),
	HX_("cairo",88,30,19,41),
	HX_("fillCommands",6b,f6,c9,c2),
	HX_("fillPattern",0d,86,12,35),
	HX_("fillPatternMatrix",2e,b8,ae,97),
	HX_("graphics",cb,f8,67,12),
	HX_("hasFill",fd,ee,ff,12),
	HX_("hasStroke",b2,66,1d,52),
	HX_("hitTesting",bd,65,48,19),
	HX_("inversePendingMatrix",28,14,8c,bb),
	HX_("pendingMatrix",f8,9d,96,b5),
	HX_("strokeCommands",a0,98,2a,67),
	HX_("strokePattern",78,e1,21,7e),
	HX_("tempMatrix3",1e,f2,bd,79),
	HX_("worldAlpha",ac,57,43,8d),
	HX_("closePath",7d,65,20,14),
	HX_("createGradientPattern",a4,ee,44,f6),
	HX_("createImagePattern",51,bd,5d,fb),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("endFill",fe,87,e0,25),
	HX_("endStroke",f3,01,17,51),
	HX_("hitTest",45,60,7f,e2),
	HX_("isCCW",0d,84,49,c1),
	HX_("normalizeUVT",66,09,2f,47),
	HX_("playCommands",dc,ae,ee,49),
	HX_("quadraticCurveTo",12,48,c3,82),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void CairoGraphics_obj::__register()
{
	CairoGraphics_obj _hx_dummy;
	CairoGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoGraphics",f7,a0,7f,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = CairoGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_37_boot)
HXDLIN(  37)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_40_boot)
HXDLIN(  40)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a32397cfa230be0c_41_boot)
HXDLIN(  41)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_47_boot)
HXDLIN(  47)		fillCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_56_boot)
HXDLIN(  56)		strokeCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a32397cfa230be0c_58_boot)
HXDLIN(  58)		tempMatrix3 =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
