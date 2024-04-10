#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
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
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#include <openfl/display/_internal/Context3DElementType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_42_buildBuffer,"openfl.display._internal.Context3DGraphics","buildBuffer",0x4d7a46af,"openfl.display._internal.Context3DGraphics.buildBuffer","openfl/display/_internal/Context3DGraphics.hx",42,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_371_isCompatible,"openfl.display._internal.Context3DGraphics","isCompatible",0xc3dcc4dd,"openfl.display._internal.Context3DGraphics.isCompatible","openfl/display/_internal/Context3DGraphics.hx",371,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_464_render,"openfl.display._internal.Context3DGraphics","render",0x6cd95315,"openfl.display._internal.Context3DGraphics.render","openfl/display/_internal/Context3DGraphics.hx",464,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_841_renderMask,"openfl.display._internal.Context3DGraphics","renderMask",0xda186ea1,"openfl.display._internal.Context3DGraphics.renderMask","openfl/display/_internal/Context3DGraphics.hx",841,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_850_resizeIndexBuffer,"openfl.display._internal.Context3DGraphics","resizeIndexBuffer",0x673d02bf,"openfl.display._internal.Context3DGraphics.resizeIndexBuffer","openfl/display/_internal/Context3DGraphics.hx",850,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_898_resizeVertexBuffer,"openfl.display._internal.Context3DGraphics","resizeVertexBuffer",0x62dc7dd7,"openfl.display._internal.Context3DGraphics.resizeVertexBuffer","openfl/display/_internal/Context3DGraphics.hx",898,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_35_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",35,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_37_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",37,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_39_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",39,0x8e8e2a52)
namespace openfl{
namespace display{
namespace _internal{

void Context3DGraphics_obj::__construct() { }

Dynamic Context3DGraphics_obj::__CreateEmpty() { return new Context3DGraphics_obj; }

void *Context3DGraphics_obj::_hx_vtable = 0;

Dynamic Context3DGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DGraphics_obj > _hx_result = new Context3DGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cec42c1;
}

 ::openfl::display::BitmapData Context3DGraphics_obj::blankBitmapData;

bool Context3DGraphics_obj::maskRender;

 ::openfl::geom::ColorTransform Context3DGraphics_obj::tempColorTransform;

void Context3DGraphics_obj::buildBuffer( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_42_buildBuffer)
HXLINE(  43)		int quadBufferPosition = 0;
HXLINE(  44)		int triangleIndexBufferPosition = 0;
HXLINE(  45)		int vertexBufferPosition = 0;
HXLINE(  46)		int vertexBufferPositionUVT = 0;
HXLINE(  48)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(  50)		 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  52)		 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  53)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  55)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  59)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(  62)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->iPos = (data1->iPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  62)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  62)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 5);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  62)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  62)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 4);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  62)								data2->iPos = (data2->iPos + 1);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  62)								data3->fPos = (data3->fPos + 2);
HXDLIN(  62)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  62)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  62)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  62)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  62)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(  62)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  62)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  63)						bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
            					}
            					break;
            					case (int)1: {
HXLINE(  66)						bitmap = null();
HXLINE(  67)						{
HXLINE(  67)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->iPos = (data1->iPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  67)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  67)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 5);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  67)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  67)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 4);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  67)									data2->iPos = (data2->iPos + 1);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  67)									data3->fPos = (data3->fPos + 2);
HXDLIN(  67)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  67)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  67)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  67)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  67)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE(  70)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->iPos = (data1->iPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  70)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  70)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 5);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  70)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  70)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 4);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  70)								data2->iPos = (data2->iPos + 1);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  70)								data3->fPos = (data3->fPos + 2);
HXDLIN(  70)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  70)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  70)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  70)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  70)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(  70)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  70)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  71)						 ::openfl::display::_internal::ShaderBuffer shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE(  73)						bitmap = null();
HXLINE(  75)						if (::hx::IsNotNull( shaderBuffer )) {
HXLINE(  77)							int _g = 0;
HXDLIN(  77)							int _g1 = shaderBuffer->inputCount;
HXDLIN(  77)							while((_g < _g1)){
HXLINE(  77)								_g = (_g + 1);
HXDLIN(  77)								int i = (_g - 1);
HXLINE(  79)								if ((shaderBuffer->inputRefs->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >()->name == HX_("bitmap",ef,0f,0c,f1))) {
HXLINE(  81)									bitmap = shaderBuffer->inputs->__get(i).StaticCast<  ::openfl::display::BitmapData >();
HXLINE(  82)									goto _hx_goto_1;
            								}
            							}
            							_hx_goto_1:;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE(  90)						if (::hx::IsNotNull( bitmap )) {
HXLINE(  92)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->iPos = (data1->iPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 5);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 4);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)									data2->iPos = (data2->iPos + 1);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)									data3->fPos = (data3->fPos + 2);
HXDLIN(  92)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  92)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  92)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(  92)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  92)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  93)							 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE(  94)							 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE(  95)							 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE(  98)							::Array< Float > rects1;
HXDLIN(  98)							if (::hx::IsNull( rects )) {
HXLINE(  98)								rects1 = null();
            							}
            							else {
HXLINE(  98)								rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE(  99)							::Array< int > indices1;
HXDLIN(  99)							if (::hx::IsNull( indices )) {
HXLINE(  99)								indices1 = null();
            							}
            							else {
HXLINE(  99)								indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE( 100)							::Array< Float > transforms1;
HXDLIN( 100)							if (::hx::IsNull( transforms )) {
HXLINE( 100)								transforms1 = null();
            							}
            							else {
HXLINE( 100)								transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE( 103)							bool hasIndices = ::hx::IsNotNull( indices1 );
HXLINE( 104)							bool transformABCD = false;
HXDLIN( 104)							bool transformXY = false;
HXLINE( 106)							int length;
HXDLIN( 106)							if (hasIndices) {
HXLINE( 106)								length = indices1->length;
            							}
            							else {
HXLINE( 106)								length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            							}
HXLINE( 107)							if ((length == 0)) {
HXLINE( 107)								return;
            							}
HXLINE( 109)							if (::hx::IsNotNull( transforms1 )) {
HXLINE( 111)								if ((transforms1->length >= (length * 6))) {
HXLINE( 113)									transformABCD = true;
HXLINE( 114)									transformXY = true;
            								}
            								else {
HXLINE( 116)									if ((transforms1->length >= (length * 4))) {
HXLINE( 118)										transformABCD = true;
            									}
            									else {
HXLINE( 120)										if ((transforms1->length >= (length * 2))) {
HXLINE( 122)											transformXY = true;
            										}
            									}
            								}
            							}
HXLINE( 126)							int dataPerVertex = 4;
HXLINE( 127)							int stride = (dataPerVertex * 4);
HXLINE( 129)							if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 131)								graphics->_hx___quadBuffer =  ::openfl::display::_internal::Context3DBuffer_obj::__alloc( HX_CTX ,context,::openfl::display::_internal::Context3DElementType_obj::QUADS_dyn(),length,dataPerVertex);
            							}
            							else {
HXLINE( 135)								graphics->_hx___quadBuffer->resize((quadBufferPosition + length),dataPerVertex);
            							}
HXLINE( 138)							int vertexOffset;
HXDLIN( 138)							Float alpha = ((Float)1.0);
HXDLIN( 138)							 ::Dynamic tileData;
HXDLIN( 138)							 ::Dynamic id;
HXLINE( 139)							Float tileWidth;
HXDLIN( 139)							Float tileHeight;
HXLINE( 143)							Float uvX;
HXDLIN( 143)							Float uvY;
HXDLIN( 143)							Float uvWidth;
HXDLIN( 143)							Float uvHeight;
HXLINE( 144)							Float x;
HXDLIN( 144)							Float y;
HXDLIN( 144)							Float x2;
HXDLIN( 144)							Float y2;
HXDLIN( 144)							Float x3;
HXDLIN( 144)							Float y3;
HXDLIN( 144)							Float x4;
HXDLIN( 144)							Float y4;
HXLINE( 145)							int ri;
HXDLIN( 145)							int ti;
HXLINE( 147)							 ::lime::utils::ArrayBufferView vertexBufferData = graphics->_hx___quadBuffer->vertexBufferData;
HXLINE( 139)							int bitmapWidth = bitmap->width;
HXDLIN( 139)							int bitmapHeight = bitmap->height;
HXLINE( 165)							 ::openfl::geom::Rectangle sourceRect = bitmap->rect;
HXLINE( 167)							{
HXLINE( 167)								int _g = 0;
HXDLIN( 167)								int _g1 = length;
HXDLIN( 167)								while((_g < _g1)){
HXLINE( 167)									_g = (_g + 1);
HXDLIN( 167)									int i = (_g - 1);
HXLINE( 169)									vertexOffset = ((quadBufferPosition + i) * stride);
HXLINE( 171)									if (hasIndices) {
HXLINE( 171)										ri = (indices1->__get(i) * 4);
            									}
            									else {
HXLINE( 171)										ri = (i * 4);
            									}
HXLINE( 172)									if ((ri < 0)) {
HXLINE( 172)										continue;
            									}
HXLINE( 173)									tileRect->setTo(rects1->__get(ri),rects1->__get((ri + 1)),rects1->__get((ri + 2)),rects1->__get((ri + 3)));
HXLINE( 175)									tileWidth = tileRect->width;
HXLINE( 176)									tileHeight = tileRect->height;
HXLINE( 178)									bool _hx_tmp;
HXDLIN( 178)									if (!((tileWidth <= 0))) {
HXLINE( 178)										_hx_tmp = (tileHeight <= 0);
            									}
            									else {
HXLINE( 178)										_hx_tmp = true;
            									}
HXDLIN( 178)									if (_hx_tmp) {
HXLINE( 180)										continue;
            									}
HXLINE( 183)									bool _hx_tmp1;
HXDLIN( 183)									if (transformABCD) {
HXLINE( 183)										_hx_tmp1 = transformXY;
            									}
            									else {
HXLINE( 183)										_hx_tmp1 = false;
            									}
HXDLIN( 183)									if (_hx_tmp1) {
HXLINE( 185)										ti = (i * 6);
HXLINE( 186)										tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),transforms1->__get((ti + 4)),transforms1->__get((ti + 5)));
            									}
            									else {
HXLINE( 189)										if (transformABCD) {
HXLINE( 191)											ti = (i * 4);
HXLINE( 192)											tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),tileRect->x,tileRect->y);
            										}
            										else {
HXLINE( 194)											if (transformXY) {
HXLINE( 196)												ti = (i * 2);
HXLINE( 197)												tileTransform->tx = transforms1->__get(ti);
HXLINE( 198)												tileTransform->ty = transforms1->__get((ti + 1));
            											}
            											else {
HXLINE( 202)												tileTransform->tx = tileRect->x;
HXLINE( 203)												tileTransform->ty = tileRect->y;
            											}
            										}
            									}
HXLINE( 206)									uvX = (tileRect->x / ( (Float)(bitmapWidth) ));
HXLINE( 207)									uvY = (tileRect->y / ( (Float)(bitmapHeight) ));
HXLINE( 208)									uvWidth = (tileRect->get_right() / ( (Float)(bitmapWidth) ));
HXLINE( 209)									uvHeight = (tileRect->get_bottom() / ( (Float)(bitmapHeight) ));
HXLINE( 211)									x = (((( (Float)(0) ) * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 212)									y = (((( (Float)(0) ) * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 213)									x2 = (((tileWidth * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 214)									y2 = (((tileWidth * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 215)									x3 = (((( (Float)(0) ) * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 216)									y3 = (((( (Float)(0) ) * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 217)									x4 = (((tileWidth * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 218)									y4 = (((tileWidth * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 220)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (vertexOffset * 4)),x);
HXLINE( 221)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 1) * 4)),y);
HXLINE( 222)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 2) * 4)),uvX);
HXLINE( 223)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 3) * 4)),uvY);
HXLINE( 225)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + dataPerVertex) * 4)),x2);
HXLINE( 226)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 1) * 4)),y2);
HXLINE( 227)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 2) * 4)),uvWidth);
HXLINE( 228)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 3) * 4)),uvY);
HXLINE( 230)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 2)) * 4)),x3);
HXLINE( 231)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 1) * 4)),y3);
HXLINE( 232)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 2) * 4)),uvX);
HXLINE( 233)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 3) * 4)),uvHeight);
HXLINE( 235)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 3)) * 4)),x4);
HXLINE( 236)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 1) * 4)),y4);
HXLINE( 237)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 2) * 4)),uvWidth);
HXLINE( 238)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 3) * 4)),uvHeight);
            								}
            							}
HXLINE( 241)							quadBufferPosition = (quadBufferPosition + length);
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 245)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 2);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 245)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->iPos = (data1->iPos + 1);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 245)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 4);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 245)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 245)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 245)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 5);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 245)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 2);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 245)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 4);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 245)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 245)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 245)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 4);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 245)								data2->iPos = (data2->iPos + 1);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 245)								data3->fPos = (data3->fPos + 2);
HXDLIN( 245)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 245)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 245)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 245)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 245)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 245)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 245)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 246)						 ::openfl::_Vector::FloatVector vertices = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 247)						 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 248)						 ::openfl::_Vector::FloatVector uvtData = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 249)						 ::Dynamic culling = c->buffer->o->__get((c->oPos + 3));
HXLINE( 251)						bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 252)						int numVertices = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 253)						int length;
HXDLIN( 253)						if (hasIndices) {
HXLINE( 253)							length = indices->get_length();
            						}
            						else {
HXLINE( 253)							length = numVertices;
            						}
HXLINE( 255)						bool hasUVData = ::hx::IsNotNull( uvtData );
HXLINE( 256)						bool hasUVTData;
HXDLIN( 256)						if (hasUVData) {
HXLINE( 256)							hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            						}
            						else {
HXLINE( 256)							hasUVTData = false;
            						}
HXLINE( 257)						int vertLength;
HXDLIN( 257)						if (hasUVTData) {
HXLINE( 257)							vertLength = 4;
            						}
            						else {
HXLINE( 257)							vertLength = 2;
            						}
HXLINE( 258)						int uvStride;
HXDLIN( 258)						if (hasUVTData) {
HXLINE( 258)							uvStride = 3;
            						}
            						else {
HXLINE( 258)							uvStride = 2;
            						}
HXLINE( 260)						int dataPerVertex = (vertLength + 2);
HXLINE( 261)						int vertexOffset;
HXDLIN( 261)						if (hasUVTData) {
HXLINE( 261)							vertexOffset = vertexBufferPositionUVT;
            						}
            						else {
HXLINE( 261)							vertexOffset = vertexBufferPosition;
            						}
HXLINE( 266)						::openfl::display::_internal::Context3DGraphics_obj::resizeVertexBuffer(graphics,hasUVTData,(vertexOffset + (length * dataPerVertex)));
HXLINE( 269)						 ::lime::utils::ArrayBufferView vertexBufferData;
HXDLIN( 269)						if (hasUVTData) {
HXLINE( 269)							vertexBufferData = graphics->_hx___vertexBufferDataUVT;
            						}
            						else {
HXLINE( 269)							vertexBufferData = graphics->_hx___vertexBufferData;
            						}
HXLINE( 270)						int offset;
HXDLIN( 270)						int vertOffset;
HXDLIN( 270)						int uvOffset;
HXDLIN( 270)						Float t;
HXLINE( 272)						{
HXLINE( 272)							int _g = 0;
HXDLIN( 272)							int _g1 = length;
HXDLIN( 272)							while((_g < _g1)){
HXLINE( 272)								_g = (_g + 1);
HXDLIN( 272)								int i = (_g - 1);
HXLINE( 274)								offset = (vertexOffset + (i * dataPerVertex));
HXLINE( 275)								if (hasIndices) {
HXLINE( 275)									vertOffset = (indices->get(i) * 2);
            								}
            								else {
HXLINE( 275)									vertOffset = (i * 2);
            								}
HXLINE( 276)								if (hasIndices) {
HXLINE( 276)									uvOffset = (indices->get(i) * uvStride);
            								}
            								else {
HXLINE( 276)									uvOffset = (i * uvStride);
            								}
HXLINE( 280)								if (hasUVTData) {
HXLINE( 282)									t = uvtData->get((uvOffset + 2));
HXLINE( 284)									{
HXLINE( 284)										Float val = (vertices->get(vertOffset) / t);
HXDLIN( 284)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 285)									{
HXLINE( 285)										Float val1 = (vertices->get((vertOffset + 1)) / t);
HXDLIN( 285)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
HXLINE( 286)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 2) * 4)),0);
HXLINE( 287)									{
HXLINE( 287)										Float val2 = (( (Float)(1) ) / t);
HXDLIN( 287)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 3) * 4)),val2);
            									}
            								}
            								else {
HXLINE( 291)									{
HXLINE( 291)										Float val = vertices->get(vertOffset);
HXDLIN( 291)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 292)									{
HXLINE( 292)										Float val1 = vertices->get((vertOffset + 1));
HXDLIN( 292)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
            								}
HXLINE( 295)								{
HXLINE( 295)									Float val;
HXDLIN( 295)									if (hasUVData) {
HXLINE( 295)										val = uvtData->get(uvOffset);
            									}
            									else {
HXLINE( 295)										val = ( (Float)(0) );
            									}
HXDLIN( 295)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + vertLength) * 4)),val);
            								}
HXLINE( 296)								{
HXLINE( 296)									Float val1;
HXDLIN( 296)									if (hasUVData) {
HXLINE( 296)										val1 = uvtData->get((uvOffset + 1));
            									}
            									else {
HXLINE( 296)										val1 = ( (Float)(0) );
            									}
HXDLIN( 296)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((offset + vertLength) + 1) * 4)),val1);
            								}
            							}
            						}
HXLINE( 300)						if (hasUVTData) {
HXLINE( 302)							vertexBufferPositionUVT = (vertexBufferPositionUVT + (length * dataPerVertex));
            						}
            						else {
HXLINE( 306)							vertexBufferPosition = (vertexBufferPosition + (length * dataPerVertex));
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 310)						bitmap = null();
            					}
            					break;
            					default:{
HXLINE( 313)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 2);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 313)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->iPos = (data1->iPos + 1);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 313)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 4);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 313)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 313)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 313)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 5);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 313)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 2);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 313)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 4);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 313)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 313)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 313)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 4);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 313)								data2->iPos = (data2->iPos + 1);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 313)								data3->fPos = (data3->fPos + 2);
HXDLIN( 313)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 313)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 313)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 313)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 313)						data->prev = type;
            					}
            				}
            			}
            		}
HXLINE( 319)		if ((quadBufferPosition > 0)) {
HXLINE( 321)			graphics->_hx___quadBuffer->flushVertexBufferData();
            		}
HXLINE( 324)		if ((triangleIndexBufferPosition > 0)) {
HXLINE( 326)			 ::openfl::display3D::IndexBuffer3D buffer = graphics->_hx___triangleIndexBuffer;
HXLINE( 328)			bool _hx_tmp;
HXDLIN( 328)			if (::hx::IsNotNull( buffer )) {
HXLINE( 328)				_hx_tmp = (triangleIndexBufferPosition > graphics->_hx___triangleIndexBufferCount);
            			}
            			else {
HXLINE( 328)				_hx_tmp = true;
            			}
HXDLIN( 328)			if (_hx_tmp) {
HXLINE( 330)				buffer = context->createIndexBuffer(triangleIndexBufferPosition,0);
HXLINE( 331)				graphics->_hx___triangleIndexBuffer = buffer;
HXLINE( 332)				graphics->_hx___triangleIndexBufferCount = triangleIndexBufferPosition;
            			}
HXLINE( 335)			buffer->uploadFromTypedArray(graphics->_hx___triangleIndexBufferData,null());
            		}
HXLINE( 338)		if ((vertexBufferPosition > 0)) {
HXLINE( 340)			 ::openfl::display3D::VertexBuffer3D buffer = graphics->_hx___vertexBuffer;
HXLINE( 342)			bool _hx_tmp;
HXDLIN( 342)			if (::hx::IsNotNull( buffer )) {
HXLINE( 342)				_hx_tmp = (vertexBufferPosition > graphics->_hx___vertexBufferCount);
            			}
            			else {
HXLINE( 342)				_hx_tmp = true;
            			}
HXDLIN( 342)			if (_hx_tmp) {
HXLINE( 344)				buffer = context->createVertexBuffer(vertexBufferPosition,4,0);
HXLINE( 345)				graphics->_hx___vertexBuffer = buffer;
HXLINE( 346)				graphics->_hx___vertexBufferCount = vertexBufferPosition;
            			}
HXLINE( 349)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferData,null());
            		}
HXLINE( 352)		if ((vertexBufferPositionUVT > 0)) {
HXLINE( 354)			 ::openfl::display3D::VertexBuffer3D buffer = graphics->_hx___vertexBufferUVT;
HXLINE( 356)			bool _hx_tmp;
HXDLIN( 356)			if (::hx::IsNotNull( buffer )) {
HXLINE( 356)				_hx_tmp = (vertexBufferPositionUVT > graphics->_hx___vertexBufferCountUVT);
            			}
            			else {
HXLINE( 356)				_hx_tmp = true;
            			}
HXDLIN( 356)			if (_hx_tmp) {
HXLINE( 358)				buffer = context->createVertexBuffer(vertexBufferPositionUVT,6,0);
HXLINE( 359)				graphics->_hx___vertexBufferUVT = buffer;
HXLINE( 360)				graphics->_hx___vertexBufferCountUVT = vertexBufferPositionUVT;
            			}
HXLINE( 363)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferDataUVT,null());
            		}
HXLINE( 366)		::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 367)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,buildBuffer,(void))

bool Context3DGraphics_obj::isCompatible( ::openfl::display::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_371_isCompatible)
HXLINE( 378)		if (::hx::IsNotNull( graphics->_hx___owner->_hx___worldScale9Grid )) {
HXLINE( 380)			return false;
            		}
HXLINE( 383)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 384)		bool hasColorFill = false;
HXDLIN( 384)		bool hasBitmapFill = false;
HXDLIN( 384)		bool hasShaderFill = false;
HXLINE( 386)		{
HXLINE( 386)			int _g = 0;
HXDLIN( 386)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 386)			while((_g < _g1->length)){
HXLINE( 386)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 386)				_g = (_g + 1);
HXLINE( 388)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 391)						hasBitmapFill = true;
HXLINE( 392)						hasColorFill = false;
HXLINE( 393)						hasShaderFill = false;
HXLINE( 394)						{
HXLINE( 394)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->iPos = (data1->iPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 5);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 4);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 394)									data2->iPos = (data2->iPos + 1);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 394)									data3->fPos = (data3->fPos + 2);
HXDLIN( 394)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 394)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 394)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 394)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 394)							data->prev = type;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 397)						hasBitmapFill = false;
HXLINE( 398)						hasColorFill = true;
HXLINE( 399)						hasShaderFill = false;
HXLINE( 400)						{
HXLINE( 400)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 2);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 400)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->iPos = (data1->iPos + 1);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 400)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 4);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 400)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 400)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 400)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 5);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 400)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 2);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 400)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 4);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 400)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 400)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 400)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 4);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 400)									data2->iPos = (data2->iPos + 1);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 400)									data3->fPos = (data3->fPos + 2);
HXDLIN( 400)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 400)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 400)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 400)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 400)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 403)						hasBitmapFill = false;
HXLINE( 404)						hasColorFill = false;
HXLINE( 405)						hasShaderFill = true;
HXLINE( 406)						{
HXLINE( 406)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->iPos = (data1->iPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 406)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 406)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 5);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 406)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 406)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 4);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 406)									data2->iPos = (data2->iPos + 1);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 406)									data3->fPos = (data3->fPos + 2);
HXDLIN( 406)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 406)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 406)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 406)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 406)							data->prev = type;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE( 409)						bool _hx_tmp;
HXDLIN( 409)						if (!(hasBitmapFill)) {
HXLINE( 409)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 409)							_hx_tmp = true;
            						}
HXDLIN( 409)						if (_hx_tmp) {
HXLINE( 411)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 2);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 411)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->iPos = (data1->iPos + 1);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 411)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 4);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 411)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 411)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 411)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 5);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 411)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 2);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 411)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 4);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 411)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 411)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 411)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 4);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 411)									data2->iPos = (data2->iPos + 1);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 411)									data3->fPos = (data3->fPos + 2);
HXDLIN( 411)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 411)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 411)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 411)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 411)							data->prev = type;
            						}
            						else {
HXLINE( 415)							data->destroy();
HXLINE( 416)							return false;
            						}
            					}
            					break;
            					case (int)9: {
HXLINE( 420)						if (hasColorFill) {
HXLINE( 422)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 2);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 422)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->iPos = (data1->iPos + 1);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 422)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 4);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 422)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 422)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 422)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 5);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 422)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 2);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 422)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 4);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 422)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 422)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 422)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 4);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 422)									data2->iPos = (data2->iPos + 1);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 422)									data3->fPos = (data3->fPos + 2);
HXDLIN( 422)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 422)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 422)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 422)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 422)							data->prev = type;
            						}
            						else {
HXLINE( 426)							data->destroy();
HXLINE( 427)							return false;
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 431)						bool _hx_tmp;
HXDLIN( 431)						if (!(hasBitmapFill)) {
HXLINE( 431)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 431)							_hx_tmp = true;
            						}
HXDLIN( 431)						if (_hx_tmp) {
HXLINE( 433)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 2);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 433)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->iPos = (data1->iPos + 1);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 433)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 4);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 433)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 433)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 433)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 5);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 433)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 2);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 433)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 4);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 433)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 433)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 433)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 4);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 433)									data2->iPos = (data2->iPos + 1);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 433)									data3->fPos = (data3->fPos + 2);
HXDLIN( 433)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 433)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 433)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 433)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 433)							data->prev = type;
            						}
            						else {
HXLINE( 437)							data->destroy();
HXLINE( 438)							return false;
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 442)						hasBitmapFill = false;
HXLINE( 443)						hasColorFill = false;
HXLINE( 444)						hasShaderFill = false;
HXLINE( 445)						{
HXLINE( 445)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->iPos = (data1->iPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 445)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 445)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 5);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 445)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 445)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 4);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 445)									data2->iPos = (data2->iPos + 1);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 445)									data3->fPos = (data3->fPos + 2);
HXDLIN( 445)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 445)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 445)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 445)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 445)							data->prev = type;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 448)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 2);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 448)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->iPos = (data1->iPos + 1);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 448)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 4);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 448)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 448)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 448)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 5);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 448)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 2);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 448)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 4);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 448)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 448)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 448)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 4);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 448)								data2->iPos = (data2->iPos + 1);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 448)								data3->fPos = (data3->fPos + 2);
HXDLIN( 448)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 448)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 448)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 448)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 448)						data->prev = type;
            					}
            					break;
            					case (int)19: {
HXLINE( 451)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 2);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 451)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->iPos = (data1->iPos + 1);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 451)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 4);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 451)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 451)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 451)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 5);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 451)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 2);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 451)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 4);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 451)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 451)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 451)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 4);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 451)								data2->iPos = (data2->iPos + 1);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 451)								data3->fPos = (data3->fPos + 2);
HXDLIN( 451)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 451)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 451)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 451)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 451)						data->prev = type;
            					}
            					break;
            					default:{
HXLINE( 454)						data->destroy();
HXLINE( 455)						return false;
            					}
            				}
            			}
            		}
HXLINE( 459)		data->destroy();
HXLINE( 460)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DGraphics_obj,isCompatible,return )

void Context3DGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_464_render)
HXLINE( 465)		bool _hx_tmp;
HXDLIN( 465)		if (graphics->_hx___visible) {
HXLINE( 465)			_hx_tmp = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE( 465)			_hx_tmp = true;
            		}
HXDLIN( 465)		if (_hx_tmp) {
HXLINE( 465)			return;
            		}
HXLINE( 467)		bool _hx_tmp1;
HXDLIN( 467)		bool _hx_tmp2;
HXDLIN( 467)		if (::hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE( 467)			_hx_tmp2 = !(graphics->_hx___dirty);
            		}
            		else {
HXLINE( 467)			_hx_tmp2 = false;
            		}
HXDLIN( 467)		if (!(_hx_tmp2)) {
HXLINE( 467)			_hx_tmp1 = !(::openfl::display::_internal::Context3DGraphics_obj::isCompatible(graphics));
            		}
            		else {
HXLINE( 467)			_hx_tmp1 = true;
            		}
HXDLIN( 467)		if (_hx_tmp1) {
HXLINE( 483)			renderer->_hx___softwareRenderer->_hx___pixelRatio = renderer->_hx___pixelRatio;
HXLINE( 485)			 ::openfl::geom::Matrix cacheTransform = renderer->_hx___softwareRenderer->_hx___worldTransform;
HXLINE( 489)			if ((graphics->_hx___owner->_hx___drawableType == 7)) {
HXLINE( 491)				renderer->_hx___softwareRenderer->_hx___worldTransform = ::openfl::geom::Matrix_obj::_hx___identity;
            			}
            			else {
HXLINE( 495)				renderer->_hx___softwareRenderer->_hx___worldTransform = renderer->_hx___worldTransform;
            			}
HXLINE( 501)			::openfl::display::_internal::CairoGraphics_obj::render(graphics,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ));
HXLINE( 504)			renderer->_hx___softwareRenderer->_hx___worldTransform = cacheTransform;
            		}
            		else {
HXLINE( 508)			graphics->_hx___bitmap = null();
HXLINE( 513)			Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE( 516)			graphics->_hx___update(renderer->_hx___worldTransform,pixelRatio);
HXLINE( 518)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE( 520)			int width = graphics->_hx___width;
HXLINE( 521)			int height = graphics->_hx___height;
HXLINE( 523)			bool _hx_tmp;
HXDLIN( 523)			bool _hx_tmp1;
HXDLIN( 523)			if (::hx::IsNotNull( bounds )) {
HXLINE( 523)				_hx_tmp1 = (width >= 1);
            			}
            			else {
HXLINE( 523)				_hx_tmp1 = false;
            			}
HXDLIN( 523)			if (_hx_tmp1) {
HXLINE( 523)				_hx_tmp = (height >= 1);
            			}
            			else {
HXLINE( 523)				_hx_tmp = false;
            			}
HXDLIN( 523)			if (_hx_tmp) {
HXLINE( 525)				bool _hx_tmp;
HXDLIN( 525)				if (!(graphics->_hx___hardwareDirty)) {
HXLINE( 526)					bool _hx_tmp1;
HXDLIN( 526)					if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 526)						_hx_tmp1 = ::hx::IsNull( graphics->_hx___vertexBuffer );
            					}
            					else {
HXLINE( 526)						_hx_tmp1 = false;
            					}
HXDLIN( 526)					if (_hx_tmp1) {
HXLINE( 525)						_hx_tmp = ::hx::IsNull( graphics->_hx___vertexBufferUVT );
            					}
            					else {
HXLINE( 525)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 525)					_hx_tmp = true;
            				}
HXDLIN( 525)				if (_hx_tmp) {
HXLINE( 528)					::openfl::display::_internal::Context3DGraphics_obj::buildBuffer(graphics,renderer);
            				}
HXLINE( 531)				 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 533)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE( 534)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 536)				 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 538)				 ::openfl::display::_internal::ShaderBuffer shaderBuffer = null();
HXLINE( 539)				 ::openfl::display::BitmapData bitmap = null();
HXLINE( 540)				bool repeat = false;
HXLINE( 541)				bool smooth = false;
HXLINE( 542)				 ::Dynamic fill = null();
HXLINE( 544)				Float positionX = ((Float)0.0);
HXLINE( 545)				Float positionY = ((Float)0.0);
HXLINE( 547)				int quadBufferPosition = 0;
HXLINE( 548)				int shaderBufferOffset = 0;
HXLINE( 549)				int triangleIndexBufferPosition = 0;
HXLINE( 550)				int vertexBufferPosition = 0;
HXLINE( 551)				int vertexBufferPositionUVT = 0;
HXLINE( 553)				{
HXLINE( 553)					int _g = 0;
HXDLIN( 553)					::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 553)					while((_g < _g1->length)){
HXLINE( 553)						 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 553)						_g = (_g + 1);
HXLINE( 555)						switch((int)(type->_hx_getIndex())){
            							case (int)0: {
HXLINE( 558)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->iPos = (data1->iPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 558)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 558)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 5);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 558)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 558)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->iPos = (data2->iPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 558)										data3->fPos = (data3->fPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 558)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 558)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 558)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 558)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 559)								bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 560)								repeat = c->buffer->b->__get(c->bPos);
HXLINE( 561)								smooth = c->buffer->b->__get((c->bPos + 1));
HXLINE( 562)								shaderBuffer = null();
HXLINE( 563)								fill = null();
            							}
            							break;
            							case (int)1: {
HXLINE( 566)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 2);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 566)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->iPos = (data1->iPos + 1);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 566)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 4);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 566)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 566)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 566)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 5);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 566)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 2);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 566)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 4);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 566)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 566)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 566)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 4);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 566)										data2->iPos = (data2->iPos + 1);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 566)										data3->fPos = (data3->fPos + 2);
HXDLIN( 566)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 566)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 566)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 566)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 566)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 566)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 566)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 567)								int color = ::Std_obj::_hx_int(( (Float)(c->buffer->i->__get(c->iPos)) ));
HXLINE( 568)								int alpha = ::Std_obj::_hx_int((c->buffer->f->__get(c->fPos) * ( (Float)(255) )));
HXLINE( 570)								fill = ((color & 16777215) | (alpha << 24));
HXLINE( 571)								shaderBuffer = null();
HXLINE( 572)								bitmap = null();
            							}
            							break;
            							case (int)3: {
HXLINE( 575)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 2);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 575)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->iPos = (data1->iPos + 1);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 575)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 4);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 575)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 575)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 575)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 5);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 575)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 2);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 575)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 4);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 575)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 575)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 575)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 4);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 575)										data2->iPos = (data2->iPos + 1);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 575)										data3->fPos = (data3->fPos + 2);
HXDLIN( 575)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 575)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 575)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 575)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 575)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 575)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 575)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 576)								shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 577)								shaderBufferOffset = 0;
HXLINE( 579)								bool _hx_tmp;
HXDLIN( 579)								bool _hx_tmp1;
HXDLIN( 579)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 579)									_hx_tmp1 = ::hx::IsNull( shaderBuffer->shader );
            								}
            								else {
HXLINE( 579)									_hx_tmp1 = true;
            								}
HXDLIN( 579)								if (!(_hx_tmp1)) {
HXLINE( 579)									_hx_tmp = ::hx::IsNull( shaderBuffer->shader->_hx___bitmap );
            								}
            								else {
HXLINE( 579)									_hx_tmp = true;
            								}
HXDLIN( 579)								if (_hx_tmp) {
HXLINE( 581)									bitmap = null();
            								}
            								else {
HXLINE( 585)									bitmap = shaderBuffer->shader->_hx___bitmap->input;
            								}
HXLINE( 588)								fill = null();
            							}
            							break;
            							case (int)8: {
HXLINE( 591)								if (::hx::IsNotNull( bitmap )) {
HXLINE( 593)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 2);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->iPos = (data1->iPos + 1);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 4);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 593)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 593)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 5);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 2);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 4);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 593)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 593)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 4);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 593)											data2->iPos = (data2->iPos + 1);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 593)											data3->fPos = (data3->fPos + 2);
HXDLIN( 593)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 593)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 593)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 593)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 593)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 593)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 593)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 594)									 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 595)									 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 596)									 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 599)									::Array< Float > rects1;
HXDLIN( 599)									if (::hx::IsNull( rects )) {
HXLINE( 599)										rects1 = null();
            									}
            									else {
HXLINE( 599)										rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 600)									::Array< int > indices1;
HXDLIN( 600)									if (::hx::IsNull( indices )) {
HXLINE( 600)										indices1 = null();
            									}
            									else {
HXLINE( 600)										indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 601)									::Array< Float > transforms1;
HXDLIN( 601)									if (::hx::IsNull( transforms )) {
HXLINE( 601)										transforms1 = null();
            									}
            									else {
HXLINE( 601)										transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 604)									bool hasIndices = ::hx::IsNotNull( indices1 );
HXLINE( 605)									int length;
HXDLIN( 605)									if (hasIndices) {
HXLINE( 605)										length = indices1->length;
            									}
            									else {
HXLINE( 605)										length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            									}
HXLINE( 607)									::Array< Float > uMatrix = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 608)									 ::openfl::display::Shader shader;
HXLINE( 610)									bool _hx_tmp;
HXDLIN( 610)									if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 610)										_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            									}
            									else {
HXLINE( 610)										_hx_tmp = false;
            									}
HXDLIN( 610)									if (_hx_tmp) {
HXLINE( 612)										shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 614)										renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 615)										renderer->applyMatrix(uMatrix);
HXLINE( 616)										renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 617)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 618)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
            									}
            									else {
HXLINE( 623)										if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 623)											shader = renderer->_hx___maskShader;
            										}
            										else {
HXLINE( 623)											shader = renderer->_hx___initGraphicsShader(null());
            										}
HXLINE( 624)										renderer->setShader(shader);
HXLINE( 625)										renderer->applyMatrix(uMatrix);
HXLINE( 626)										renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 627)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 628)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 629)										renderer->updateShader();
            									}
HXLINE( 632)									int end = (quadBufferPosition + length);
HXLINE( 634)									while((quadBufferPosition < end)){
HXLINE( 636)										length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((end - quadBufferPosition)) ),( (Float)(context->_hx___quadIndexBufferElements) )));
HXLINE( 637)										if ((length <= 0)) {
HXLINE( 637)											goto _hx_goto_8;
            										}
HXLINE( 639)										bool _hx_tmp;
HXDLIN( 639)										if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 639)											_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            										}
            										else {
HXLINE( 639)											_hx_tmp = false;
            										}
HXDLIN( 639)										if (_hx_tmp) {
HXLINE( 641)											renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            										}
HXLINE( 644)										if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 644)											context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),graphics->_hx___quadBuffer->vertexBuffer,(quadBufferPosition * 16),2);
            										}
HXLINE( 646)										if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 646)											context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),graphics->_hx___quadBuffer->vertexBuffer,((quadBufferPosition * 16) + 2),2);
            										}
HXLINE( 649)										context->drawTriangles(context->_hx___quadIndexBuffer,0,(length * 2));
HXLINE( 651)										shaderBufferOffset = (shaderBufferOffset + (length * 4));
HXLINE( 652)										quadBufferPosition = (quadBufferPosition + length);
            									}
            									_hx_goto_8:;
HXLINE( 659)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 663)								if (::hx::IsNotNull( fill )) {
HXLINE( 665)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 2);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 665)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->iPos = (data1->iPos + 1);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 665)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 4);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 665)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 665)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 665)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 5);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 665)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 2);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 665)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 4);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 665)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 665)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 665)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 4);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 665)											data2->iPos = (data2->iPos + 1);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 665)											data3->fPos = (data3->fPos + 2);
HXDLIN( 665)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 665)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 665)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 665)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 665)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 665)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 665)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 666)									Float x = c->buffer->f->__get(c->fPos);
HXLINE( 667)									Float y = c->buffer->f->__get((c->fPos + 1));
HXLINE( 668)									Float width = c->buffer->f->__get((c->fPos + 2));
HXLINE( 669)									Float height = c->buffer->f->__get((c->fPos + 3));
HXLINE( 672)									int color = ( (int)(fill) );
HXLINE( 673)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->redOffset = ( (Float)((::hx::UShr(color,16) & 255)) );
HXLINE( 674)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->greenOffset = ( (Float)((::hx::UShr(color,8) & 255)) );
HXLINE( 675)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->blueOffset = ( (Float)((color & 255)) );
HXLINE( 677)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->_hx___combine(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 679)									matrix->identity();
HXLINE( 680)									matrix->scale(width,height);
HXLINE( 681)									matrix->tx = x;
HXLINE( 682)									matrix->ty = y;
HXLINE( 683)									matrix->concat(graphics->_hx___owner->_hx___renderTransform);
HXLINE( 685)									 ::openfl::display::Shader shader;
HXDLIN( 685)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 685)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 685)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 686)									renderer->setShader(shader);
HXLINE( 687)									renderer->applyMatrix(renderer->_hx___getMatrix(matrix,1));
HXLINE( 688)									renderer->applyBitmapData(::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData,true,repeat);
HXLINE( 690)									renderer->applyAlpha(((( (Float)((::hx::UShr(color,24) & 255)) ) / ( (Float)(255) )) * graphics->_hx___owner->_hx___worldAlpha));
HXLINE( 692)									renderer->applyColorTransform(::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform);
HXLINE( 693)									renderer->updateShader();
HXLINE( 695)									 ::openfl::display3D::VertexBuffer3D vertexBuffer = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getVertexBuffer(context,null(),null());
HXLINE( 696)									if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 696)										context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            									}
HXLINE( 697)									if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 697)										context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            									}
HXLINE( 698)									 ::openfl::display3D::IndexBuffer3D indexBuffer = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getIndexBuffer(context,null());
HXLINE( 699)									context->drawTriangles(indexBuffer,null(),null());
HXLINE( 701)									shaderBufferOffset = (shaderBufferOffset + 4);
HXLINE( 707)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)12: {
HXLINE( 711)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 2);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 711)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->iPos = (data1->iPos + 1);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 711)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 4);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 711)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 711)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 711)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 5);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 711)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 2);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 711)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 4);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 711)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 711)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 711)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 4);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 711)										data2->iPos = (data2->iPos + 1);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 711)										data3->fPos = (data3->fPos + 2);
HXDLIN( 711)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 711)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 711)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 711)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 711)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 711)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 711)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 712)								 ::openfl::_Vector::FloatVector vertices = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 713)								 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 714)								 ::openfl::_Vector::FloatVector uvtData = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 715)								 ::Dynamic culling = c->buffer->o->__get((c->oPos + 3));
HXLINE( 717)								bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 718)								int numVertices = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 719)								int length;
HXDLIN( 719)								if (hasIndices) {
HXLINE( 719)									length = indices->get_length();
            								}
            								else {
HXLINE( 719)									length = numVertices;
            								}
HXLINE( 721)								bool hasUVData = ::hx::IsNotNull( uvtData );
HXLINE( 722)								bool hasUVTData;
HXDLIN( 722)								if (hasUVData) {
HXLINE( 722)									hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            								}
            								else {
HXLINE( 722)									hasUVTData = false;
            								}
HXLINE( 723)								int vertLength;
HXDLIN( 723)								if (hasUVTData) {
HXLINE( 723)									vertLength = 4;
            								}
            								else {
HXLINE( 723)									vertLength = 2;
            								}
HXLINE( 724)								int uvStride;
HXDLIN( 724)								if (hasUVTData) {
HXLINE( 724)									uvStride = 3;
            								}
            								else {
HXLINE( 724)									uvStride = 2;
            								}
HXLINE( 726)								int dataPerVertex = (vertLength + 2);
HXLINE( 727)								 ::openfl::display3D::VertexBuffer3D vertexBuffer;
HXDLIN( 727)								if (hasUVTData) {
HXLINE( 727)									vertexBuffer = graphics->_hx___vertexBufferUVT;
            								}
            								else {
HXLINE( 727)									vertexBuffer = graphics->_hx___vertexBuffer;
            								}
HXLINE( 728)								int bufferPosition;
HXDLIN( 728)								if (hasUVTData) {
HXLINE( 728)									bufferPosition = vertexBufferPositionUVT;
            								}
            								else {
HXLINE( 728)									bufferPosition = vertexBufferPosition;
            								}
HXLINE( 730)								::Array< Float > uMatrix = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 731)								 ::openfl::display::Shader shader;
HXLINE( 733)								bool _hx_tmp;
HXDLIN( 733)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 733)									_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            								}
            								else {
HXLINE( 733)									_hx_tmp = false;
            								}
HXDLIN( 733)								if (_hx_tmp) {
HXLINE( 735)									shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 737)									renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 738)									renderer->applyMatrix(uMatrix);
HXLINE( 739)									renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 740)									renderer->applyAlpha(( (Float)(1) ));
HXLINE( 741)									renderer->applyColorTransform(null());
HXLINE( 742)									renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            								}
            								else {
HXLINE( 746)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 746)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 746)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 747)									renderer->setShader(shader);
HXLINE( 748)									renderer->applyMatrix(uMatrix);
HXLINE( 749)									renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 750)									renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 751)									renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 752)									renderer->updateShader();
            								}
HXLINE( 755)								if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 756)									 ::Dynamic _hx_tmp;
HXDLIN( 756)									if (hasUVTData) {
HXLINE( 756)										_hx_tmp = 4;
            									}
            									else {
HXLINE( 756)										_hx_tmp = 2;
            									}
HXLINE( 755)									context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,bufferPosition,_hx_tmp);
            								}
HXLINE( 757)								if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 757)									context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,(bufferPosition + vertLength),2);
            								}
HXLINE( 760)								 ::Dynamic _hx_switch_0 = culling;
            								if (  (_hx_switch_0==0) ){
HXLINE( 766)									context->setCulling(0);
HXDLIN( 766)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==1) ){
HXLINE( 769)									context->setCulling(3);
HXDLIN( 769)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==2) ){
HXLINE( 763)									context->setCulling(1);
HXDLIN( 763)									goto _hx_goto_9;
            								}
            								/* default */{
            								}
            								_hx_goto_9:;
HXLINE( 781)								context->_hx___drawTriangles(0,length);
HXLINE( 785)								shaderBufferOffset = (shaderBufferOffset + length);
HXLINE( 786)								if (hasUVTData) {
HXLINE( 788)									vertexBufferPositionUVT = (vertexBufferPositionUVT + (dataPerVertex * length));
            								}
            								else {
HXLINE( 792)									vertexBufferPosition = (vertexBufferPosition + (dataPerVertex * length));
            								}
HXLINE( 797)								 ::Dynamic _hx_switch_1 = culling;
            								if (  (_hx_switch_1==1) ||  (_hx_switch_1==2) ){
HXLINE( 800)									context->setCulling(0);
HXDLIN( 800)									goto _hx_goto_10;
            								}
            								/* default */{
            								}
            								_hx_goto_10:;
HXLINE( 809)								renderer->_hx___clearShader();
            							}
            							break;
            							case (int)13: {
HXLINE( 812)								bitmap = null();
HXLINE( 813)								fill = null();
HXLINE( 814)								shaderBuffer = null();
HXLINE( 815)								{
HXLINE( 815)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 2);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 815)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->iPos = (data1->iPos + 1);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 815)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 4);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 815)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 815)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 815)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 5);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 815)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 2);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 815)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 4);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 815)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 815)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 815)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 4);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 815)											data2->iPos = (data2->iPos + 1);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 815)											data3->fPos = (data3->fPos + 2);
HXDLIN( 815)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 815)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 815)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 815)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 815)									data->prev = type;
            								}
HXLINE( 816)								context->setCulling(3);
            							}
            							break;
            							case (int)18: {
HXLINE( 819)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 2);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 819)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->iPos = (data1->iPos + 1);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 819)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 4);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 819)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 819)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 819)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 5);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 819)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 2);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 819)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 4);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 819)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 819)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 819)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 4);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 819)										data2->iPos = (data2->iPos + 1);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 819)										data3->fPos = (data3->fPos + 2);
HXDLIN( 819)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 819)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 819)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 819)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 819)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 819)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 819)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 820)								positionX = c->buffer->f->__get(c->fPos);
HXLINE( 821)								positionY = c->buffer->f->__get((c->fPos + 1));
            							}
            							break;
            							case (int)19: {
HXLINE( 824)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 2);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 824)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->iPos = (data1->iPos + 1);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 824)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 4);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 824)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 824)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 824)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 5);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 824)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 2);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 824)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 4);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 824)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 824)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 824)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 4);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 824)										data2->iPos = (data2->iPos + 1);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 824)										data3->fPos = (data3->fPos + 2);
HXDLIN( 824)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 824)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 824)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 824)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 824)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN( 824)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 824)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 825)								renderer->_hx___setBlendMode(c->buffer->o->__get(c->oPos));
            							}
            							break;
            							default:{
HXLINE( 828)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 2);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 828)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->iPos = (data1->iPos + 1);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 828)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 4);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 828)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 828)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 828)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 5);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 828)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 2);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 828)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 4);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 828)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 828)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 828)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 4);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 828)										data2->iPos = (data2->iPos + 1);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 828)										data3->fPos = (data3->fPos + 2);
HXDLIN( 828)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 828)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 828)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 828)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 828)								data->prev = type;
            							}
            						}
            					}
            				}
HXLINE( 832)				::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            			}
HXLINE( 835)			graphics->_hx___hardwareDirty = false;
HXLINE( 836)			graphics->set___dirty(false);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,render,(void))

void Context3DGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_841_renderMask)
HXLINE( 844)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = true;
HXLINE( 845)		::openfl::display::_internal::Context3DGraphics_obj::render(graphics,renderer);
HXLINE( 846)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,renderMask,(void))

void Context3DGraphics_obj::resizeIndexBuffer( ::openfl::display::Graphics graphics,bool isQuad,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_850_resizeIndexBuffer)
HXLINE( 851)		if (isQuad) {
HXLINE( 851)			return;
            		}
HXLINE( 853)		 ::lime::utils::ArrayBufferView buffer;
HXDLIN( 853)		if (isQuad) {
HXLINE( 853)			buffer = null();
            		}
            		else {
HXLINE( 853)			buffer = graphics->_hx___triangleIndexBufferData;
            		}
HXLINE( 854)		int position = 0;
HXDLIN( 854)		 ::lime::utils::ArrayBufferView newBuffer = null();
HXLINE( 857)		if (::hx::IsNull( buffer )) {
HXLINE( 859)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 859)			::cpp::VirtualArray array = null();
HXDLIN( 859)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 859)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 859)			 ::Dynamic len = null();
HXDLIN( 859)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 859)			if (::hx::IsNotNull( length )) {
HXLINE( 859)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            			}
            			else {
HXLINE( 859)				if (::hx::IsNotNull( array )) {
HXLINE( 859)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 859)					_this->byteOffset = 0;
HXDLIN( 859)					_this->length = array->get_length();
HXDLIN( 859)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 859)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 859)					_this->buffer = this2;
HXDLIN( 859)					_this->copyFromArray(array,null());
HXDLIN( 859)					this1 = _this;
            				}
            				else {
HXLINE( 859)					if (::hx::IsNotNull( vector )) {
HXLINE( 859)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 859)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 859)						_this->byteOffset = 0;
HXDLIN( 859)						_this->length = array->get_length();
HXDLIN( 859)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 859)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 859)						_this->buffer = this2;
HXDLIN( 859)						_this->copyFromArray(array,null());
HXDLIN( 859)						this1 = _this;
            					}
            					else {
HXLINE( 859)						if (::hx::IsNotNull( view )) {
HXLINE( 859)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 859)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 859)							int srcLength = view->length;
HXDLIN( 859)							int srcByteOffset = view->byteOffset;
HXDLIN( 859)							int srcElementSize = view->bytesPerElement;
HXDLIN( 859)							int elementSize = _this->bytesPerElement;
HXDLIN( 859)							if ((view->type == _this->type)) {
HXLINE( 859)								int srcLength = srcData->length;
HXDLIN( 859)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 859)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 859)								_this->buffer = this1;
HXDLIN( 859)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 859)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 859)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 859)							_this->byteOffset = 0;
HXDLIN( 859)							_this->length = srcLength;
HXDLIN( 859)							this1 = _this;
            						}
            						else {
HXLINE( 859)							if (::hx::IsNotNull( buffer )) {
HXLINE( 859)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 859)								int in_byteOffset = 0;
HXDLIN( 859)								if ((in_byteOffset < 0)) {
HXLINE( 859)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 859)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 859)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 859)								int bufferByteLength = buffer->length;
HXDLIN( 859)								int elementSize = _this->bytesPerElement;
HXDLIN( 859)								int newByteLength = bufferByteLength;
HXDLIN( 859)								if (::hx::IsNull( len )) {
HXLINE( 859)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 859)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 859)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 859)									if ((newByteLength < 0)) {
HXLINE( 859)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 859)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 859)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 859)									if ((newRange > bufferByteLength)) {
HXLINE( 859)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 859)								_this->buffer = buffer;
HXDLIN( 859)								_this->byteOffset = in_byteOffset;
HXDLIN( 859)								_this->byteLength = newByteLength;
HXDLIN( 859)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 859)								this1 = _this;
            							}
            							else {
HXLINE( 859)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 859)			newBuffer = this1;
            		}
            		else {
HXLINE( 861)			if ((length > buffer->length)) {
HXLINE( 863)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 863)				::cpp::VirtualArray array = null();
HXDLIN( 863)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 863)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 863)				 ::Dynamic len = null();
HXDLIN( 863)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 863)				if (::hx::IsNotNull( length )) {
HXLINE( 863)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            				}
            				else {
HXLINE( 863)					if (::hx::IsNotNull( array )) {
HXLINE( 863)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 863)						_this->byteOffset = 0;
HXDLIN( 863)						_this->length = array->get_length();
HXDLIN( 863)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 863)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 863)						_this->buffer = this2;
HXDLIN( 863)						_this->copyFromArray(array,null());
HXDLIN( 863)						this1 = _this;
            					}
            					else {
HXLINE( 863)						if (::hx::IsNotNull( vector )) {
HXLINE( 863)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 863)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 863)							_this->byteOffset = 0;
HXDLIN( 863)							_this->length = array->get_length();
HXDLIN( 863)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 863)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 863)							_this->buffer = this2;
HXDLIN( 863)							_this->copyFromArray(array,null());
HXDLIN( 863)							this1 = _this;
            						}
            						else {
HXLINE( 863)							if (::hx::IsNotNull( view )) {
HXLINE( 863)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 863)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 863)								int srcLength = view->length;
HXDLIN( 863)								int srcByteOffset = view->byteOffset;
HXDLIN( 863)								int srcElementSize = view->bytesPerElement;
HXDLIN( 863)								int elementSize = _this->bytesPerElement;
HXDLIN( 863)								if ((view->type == _this->type)) {
HXLINE( 863)									int srcLength = srcData->length;
HXDLIN( 863)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 863)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 863)									_this->buffer = this1;
HXDLIN( 863)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 863)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 863)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 863)								_this->byteOffset = 0;
HXDLIN( 863)								_this->length = srcLength;
HXDLIN( 863)								this1 = _this;
            							}
            							else {
HXLINE( 863)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 863)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 863)									int in_byteOffset = 0;
HXDLIN( 863)									if ((in_byteOffset < 0)) {
HXLINE( 863)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 863)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 863)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 863)									int bufferByteLength = buffer1->length;
HXDLIN( 863)									int elementSize = _this->bytesPerElement;
HXDLIN( 863)									int newByteLength = bufferByteLength;
HXDLIN( 863)									if (::hx::IsNull( len )) {
HXLINE( 863)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 863)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 863)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 863)										if ((newByteLength < 0)) {
HXLINE( 863)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 863)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 863)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 863)										if ((newRange > bufferByteLength)) {
HXLINE( 863)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 863)									_this->buffer = buffer1;
HXDLIN( 863)									_this->byteOffset = in_byteOffset;
HXDLIN( 863)									_this->byteLength = newByteLength;
HXDLIN( 863)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 863)									this1 = _this;
            								}
            								else {
HXLINE( 863)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 863)				newBuffer = this1;
HXLINE( 864)				{
HXLINE( 864)					::cpp::VirtualArray array1 = null();
HXDLIN( 864)					int offset = 0;
HXDLIN( 864)					bool _hx_tmp;
HXDLIN( 864)					if (::hx::IsNotNull( buffer )) {
HXLINE( 864)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 864)						_hx_tmp = false;
            					}
HXDLIN( 864)					if (_hx_tmp) {
HXLINE( 864)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 864)						bool _hx_tmp;
HXDLIN( 864)						if (::hx::IsNotNull( array1 )) {
HXLINE( 864)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 864)							_hx_tmp = false;
            						}
HXDLIN( 864)						if (_hx_tmp) {
HXLINE( 864)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 864)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
HXLINE( 865)				position = buffer->length;
            			}
            		}
HXLINE( 869)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 871)			if (!(isQuad)) {
HXLINE( 892)				graphics->_hx___triangleIndexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeIndexBuffer,(void))

void Context3DGraphics_obj::resizeVertexBuffer( ::openfl::display::Graphics graphics,bool hasUVTData,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_898_resizeVertexBuffer)
HXLINE( 899)		 ::lime::utils::ArrayBufferView buffer;
HXDLIN( 899)		if (hasUVTData) {
HXLINE( 899)			buffer = graphics->_hx___vertexBufferDataUVT;
            		}
            		else {
HXLINE( 899)			buffer = graphics->_hx___vertexBufferData;
            		}
HXLINE( 900)		 ::lime::utils::ArrayBufferView newBuffer = null();
HXLINE( 903)		if (::hx::IsNull( buffer )) {
HXLINE( 905)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 905)			::cpp::VirtualArray array = null();
HXDLIN( 905)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 905)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 905)			 ::Dynamic len = null();
HXDLIN( 905)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 905)			if (::hx::IsNotNull( length )) {
HXLINE( 905)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            			}
            			else {
HXLINE( 905)				if (::hx::IsNotNull( array )) {
HXLINE( 905)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 905)					_this->byteOffset = 0;
HXDLIN( 905)					_this->length = array->get_length();
HXDLIN( 905)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 905)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 905)					_this->buffer = this2;
HXDLIN( 905)					_this->copyFromArray(array,null());
HXDLIN( 905)					this1 = _this;
            				}
            				else {
HXLINE( 905)					if (::hx::IsNotNull( vector )) {
HXLINE( 905)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 905)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 905)						_this->byteOffset = 0;
HXDLIN( 905)						_this->length = array->get_length();
HXDLIN( 905)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 905)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 905)						_this->buffer = this2;
HXDLIN( 905)						_this->copyFromArray(array,null());
HXDLIN( 905)						this1 = _this;
            					}
            					else {
HXLINE( 905)						if (::hx::IsNotNull( view )) {
HXLINE( 905)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 905)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 905)							int srcLength = view->length;
HXDLIN( 905)							int srcByteOffset = view->byteOffset;
HXDLIN( 905)							int srcElementSize = view->bytesPerElement;
HXDLIN( 905)							int elementSize = _this->bytesPerElement;
HXDLIN( 905)							if ((view->type == _this->type)) {
HXLINE( 905)								int srcLength = srcData->length;
HXDLIN( 905)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 905)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 905)								_this->buffer = this1;
HXDLIN( 905)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 905)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 905)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 905)							_this->byteOffset = 0;
HXDLIN( 905)							_this->length = srcLength;
HXDLIN( 905)							this1 = _this;
            						}
            						else {
HXLINE( 905)							if (::hx::IsNotNull( buffer )) {
HXLINE( 905)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 905)								int in_byteOffset = 0;
HXDLIN( 905)								if ((in_byteOffset < 0)) {
HXLINE( 905)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 905)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 905)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 905)								int bufferByteLength = buffer->length;
HXDLIN( 905)								int elementSize = _this->bytesPerElement;
HXDLIN( 905)								int newByteLength = bufferByteLength;
HXDLIN( 905)								if (::hx::IsNull( len )) {
HXLINE( 905)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 905)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 905)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 905)									if ((newByteLength < 0)) {
HXLINE( 905)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 905)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 905)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 905)									if ((newRange > bufferByteLength)) {
HXLINE( 905)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 905)								_this->buffer = buffer;
HXDLIN( 905)								_this->byteOffset = in_byteOffset;
HXDLIN( 905)								_this->byteLength = newByteLength;
HXDLIN( 905)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 905)								this1 = _this;
            							}
            							else {
HXLINE( 905)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 905)			newBuffer = this1;
            		}
            		else {
HXLINE( 907)			if ((length > buffer->length)) {
HXLINE( 909)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 909)				::cpp::VirtualArray array = null();
HXDLIN( 909)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 909)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 909)				 ::Dynamic len = null();
HXDLIN( 909)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 909)				if (::hx::IsNotNull( length )) {
HXLINE( 909)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            				}
            				else {
HXLINE( 909)					if (::hx::IsNotNull( array )) {
HXLINE( 909)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 909)						_this->byteOffset = 0;
HXDLIN( 909)						_this->length = array->get_length();
HXDLIN( 909)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 909)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 909)						_this->buffer = this2;
HXDLIN( 909)						_this->copyFromArray(array,null());
HXDLIN( 909)						this1 = _this;
            					}
            					else {
HXLINE( 909)						if (::hx::IsNotNull( vector )) {
HXLINE( 909)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 909)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 909)							_this->byteOffset = 0;
HXDLIN( 909)							_this->length = array->get_length();
HXDLIN( 909)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 909)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 909)							_this->buffer = this2;
HXDLIN( 909)							_this->copyFromArray(array,null());
HXDLIN( 909)							this1 = _this;
            						}
            						else {
HXLINE( 909)							if (::hx::IsNotNull( view )) {
HXLINE( 909)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 909)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 909)								int srcLength = view->length;
HXDLIN( 909)								int srcByteOffset = view->byteOffset;
HXDLIN( 909)								int srcElementSize = view->bytesPerElement;
HXDLIN( 909)								int elementSize = _this->bytesPerElement;
HXDLIN( 909)								if ((view->type == _this->type)) {
HXLINE( 909)									int srcLength = srcData->length;
HXDLIN( 909)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 909)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 909)									_this->buffer = this1;
HXDLIN( 909)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 909)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 909)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 909)								_this->byteOffset = 0;
HXDLIN( 909)								_this->length = srcLength;
HXDLIN( 909)								this1 = _this;
            							}
            							else {
HXLINE( 909)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 909)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 909)									int in_byteOffset = 0;
HXDLIN( 909)									if ((in_byteOffset < 0)) {
HXLINE( 909)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 909)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 909)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 909)									int bufferByteLength = buffer1->length;
HXDLIN( 909)									int elementSize = _this->bytesPerElement;
HXDLIN( 909)									int newByteLength = bufferByteLength;
HXDLIN( 909)									if (::hx::IsNull( len )) {
HXLINE( 909)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 909)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 909)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 909)										if ((newByteLength < 0)) {
HXLINE( 909)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 909)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 909)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 909)										if ((newRange > bufferByteLength)) {
HXLINE( 909)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 909)									_this->buffer = buffer1;
HXDLIN( 909)									_this->byteOffset = in_byteOffset;
HXDLIN( 909)									_this->byteLength = newByteLength;
HXDLIN( 909)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 909)									this1 = _this;
            								}
            								else {
HXLINE( 909)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 909)				newBuffer = this1;
HXLINE( 910)				{
HXLINE( 910)					::cpp::VirtualArray array1 = null();
HXDLIN( 910)					int offset = 0;
HXDLIN( 910)					bool _hx_tmp;
HXDLIN( 910)					if (::hx::IsNotNull( buffer )) {
HXLINE( 910)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 910)						_hx_tmp = false;
            					}
HXDLIN( 910)					if (_hx_tmp) {
HXLINE( 910)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 910)						bool _hx_tmp;
HXDLIN( 910)						if (::hx::IsNotNull( array1 )) {
HXLINE( 910)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 910)							_hx_tmp = false;
            						}
HXDLIN( 910)						if (_hx_tmp) {
HXLINE( 910)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 910)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 914)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 916)			if (hasUVTData) {
HXLINE( 916)				graphics->_hx___vertexBufferDataUVT = newBuffer;
            			}
            			else {
HXLINE( 916)				graphics->_hx___vertexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeVertexBuffer,(void))


Context3DGraphics_obj::Context3DGraphics_obj()
{
}

bool Context3DGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { outValue = ( maskRender ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildBuffer") ) { outValue = buildBuffer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCompatible") ) { outValue = isCompatible_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { outValue = ( blankBitmapData ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resizeIndexBuffer") ) { outValue = resizeIndexBuffer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { outValue = ( tempColorTransform ); return true; }
		if (HX_FIELD_EQ(inName,"resizeVertexBuffer") ) { outValue = resizeVertexBuffer_dyn(); return true; }
	}
	return false;
}

bool Context3DGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { maskRender=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { blankBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { tempColorTransform=ioValue.Cast<  ::openfl::geom::ColorTransform >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &Context3DGraphics_obj::blankBitmapData,HX_("blankBitmapData",2d,8a,0b,df)},
	{::hx::fsBool,(void *) &Context3DGraphics_obj::maskRender,HX_("maskRender",62,99,0d,1a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(void *) &Context3DGraphics_obj::tempColorTransform,HX_("tempColorTransform",bd,e9,a6,54)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#endif

::hx::Class Context3DGraphics_obj::__mClass;

static ::String Context3DGraphics_obj_sStaticFields[] = {
	HX_("blankBitmapData",2d,8a,0b,df),
	HX_("maskRender",62,99,0d,1a),
	HX_("tempColorTransform",bd,e9,a6,54),
	HX_("buildBuffer",ce,a2,05,21),
	HX_("isCompatible",de,03,42,0a),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	HX_("resizeIndexBuffer",1e,c0,ce,b4),
	HX_("resizeVertexBuffer",98,73,d0,f4),
	::String(null())
};

void Context3DGraphics_obj::__register()
{
	Context3DGraphics_obj _hx_dummy;
	Context3DGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DGraphics",cf,76,90,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3DGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = Context3DGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_35_boot)
HXDLIN(  35)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_37_boot)
HXDLIN(  37)		blankBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,false,0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_39_boot)
HXDLIN(  39)		tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,1,1,1,1,0,0,0,0);
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
