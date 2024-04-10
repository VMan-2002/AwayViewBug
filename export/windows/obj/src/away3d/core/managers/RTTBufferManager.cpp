#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_managers_RTTBufferManager
#include <away3d/core/managers/RTTBufferManager.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_events_Stage3DEvent
#include <away3d/events/Stage3DEvent.h>
#endif
#ifndef INCLUDED_away3d_tools_utils_TextureUtils
#include <away3d/tools/utils/TextureUtils.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8f288acb42141d61_15_new,"away3d.core.managers.RTTBufferManager","new",0xc0e92a15,"away3d.core.managers.RTTBufferManager.new","away3d/core/managers/RTTBufferManager.hx",15,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_69_get_textureRatioX,"away3d.core.managers.RTTBufferManager","get_textureRatioX",0xe0d91ff4,"away3d.core.managers.RTTBufferManager.get_textureRatioX","away3d/core/managers/RTTBufferManager.hx",69,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_76_get_textureRatioY,"away3d.core.managers.RTTBufferManager","get_textureRatioY",0xe0d91ff5,"away3d.core.managers.RTTBufferManager.get_textureRatioY","away3d/core/managers/RTTBufferManager.hx",76,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_84_get_viewWidth,"away3d.core.managers.RTTBufferManager","get_viewWidth",0x69bb672d,"away3d.core.managers.RTTBufferManager.get_viewWidth","away3d/core/managers/RTTBufferManager.hx",84,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_88_set_viewWidth,"away3d.core.managers.RTTBufferManager","set_viewWidth",0xaec14939,"away3d.core.managers.RTTBufferManager.set_viewWidth","away3d/core/managers/RTTBufferManager.hx",88,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_111_get_viewHeight,"away3d.core.managers.RTTBufferManager","get_viewHeight",0xd08e58e0,"away3d.core.managers.RTTBufferManager.get_viewHeight","away3d/core/managers/RTTBufferManager.hx",111,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_115_set_viewHeight,"away3d.core.managers.RTTBufferManager","set_viewHeight",0xf0ae4154,"away3d.core.managers.RTTBufferManager.set_viewHeight","away3d/core/managers/RTTBufferManager.hx",115,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_137_get_renderToTextureVertexBuffer,"away3d.core.managers.RTTBufferManager","get_renderToTextureVertexBuffer",0xed80f1da,"away3d.core.managers.RTTBufferManager.get_renderToTextureVertexBuffer","away3d/core/managers/RTTBufferManager.hx",137,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_145_get_renderToScreenVertexBuffer,"away3d.core.managers.RTTBufferManager","get_renderToScreenVertexBuffer",0xee08ec95,"away3d.core.managers.RTTBufferManager.get_renderToScreenVertexBuffer","away3d/core/managers/RTTBufferManager.hx",145,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_154_get_indexBuffer,"away3d.core.managers.RTTBufferManager","get_indexBuffer",0xbf57b27e,"away3d.core.managers.RTTBufferManager.get_indexBuffer","away3d/core/managers/RTTBufferManager.hx",154,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_158_get_renderToTextureRect,"away3d.core.managers.RTTBufferManager","get_renderToTextureRect",0x7f09497a,"away3d.core.managers.RTTBufferManager.get_renderToTextureRect","away3d/core/managers/RTTBufferManager.hx",158,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_167_get_textureWidth,"away3d.core.managers.RTTBufferManager","get_textureWidth",0x747448df,"away3d.core.managers.RTTBufferManager.get_textureWidth","away3d/core/managers/RTTBufferManager.hx",167,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_172_get_textureHeight,"away3d.core.managers.RTTBufferManager","get_textureHeight",0x279af2ee,"away3d.core.managers.RTTBufferManager.get_textureHeight","away3d/core/managers/RTTBufferManager.hx",172,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_176_dispose,"away3d.core.managers.RTTBufferManager","dispose",0xcb8958d4,"away3d.core.managers.RTTBufferManager.dispose","away3d/core/managers/RTTBufferManager.hx",176,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_190_onContextRecreated,"away3d.core.managers.RTTBufferManager","onContextRecreated",0xab1097d0,"away3d.core.managers.RTTBufferManager.onContextRecreated","away3d/core/managers/RTTBufferManager.hx",190,0xfa8c3ffa)
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_201_updateRTTBuffers,"away3d.core.managers.RTTBufferManager","updateRTTBuffers",0x128ddbb5,"away3d.core.managers.RTTBufferManager.updateRTTBuffers","away3d/core/managers/RTTBufferManager.hx",201,0xfa8c3ffa)
static const int _hx_array_data_41037ba3_19[] = {
	(int)2,(int)1,(int)0,(int)3,(int)2,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_8f288acb42141d61_55_getInstance,"away3d.core.managers.RTTBufferManager","getInstance",0x6f9a7900,"away3d.core.managers.RTTBufferManager.getInstance","away3d/core/managers/RTTBufferManager.hx",55,0xfa8c3ffa)
namespace away3d{
namespace core{
namespace managers{

void RTTBufferManager_obj::__construct( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_GC_STACKFRAME(&_hx_pos_8f288acb42141d61_15_new)
HXLINE(  40)		this->_buffersInvalid = true;
HXLINE(  38)		this->_textureHeight = -1;
HXLINE(  37)		this->_textureWidth = -1;
HXLINE(  36)		this->_viewHeight = -1;
HXLINE(  35)		this->_viewWidth = -1;
HXLINE(  47)		this->_renderToTextureRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  49)		this->_stage3DProxy = stage3DProxy;
HXLINE(  50)		this->_stage3DProxy->addEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContextRecreated_dyn(),null(),null(),null());
HXLINE(  51)		super::__construct(null());
            	}

Dynamic RTTBufferManager_obj::__CreateEmpty() { return new RTTBufferManager_obj; }

void *RTTBufferManager_obj::_hx_vtable = 0;

Dynamic RTTBufferManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RTTBufferManager_obj > _hx_result = new RTTBufferManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RTTBufferManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x2064a3a7;
	}
}

Float RTTBufferManager_obj::get_textureRatioX(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_69_get_textureRatioX)
HXLINE(  70)		if (this->_buffersInvalid) {
HXLINE(  71)			this->updateRTTBuffers();
            		}
HXLINE(  72)		return this->_textureRatioX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureRatioX,return )

Float RTTBufferManager_obj::get_textureRatioY(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_76_get_textureRatioY)
HXLINE(  77)		if (this->_buffersInvalid) {
HXLINE(  78)			this->updateRTTBuffers();
            		}
HXLINE(  79)		return this->_textureRatioY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureRatioY,return )

int RTTBufferManager_obj::get_viewWidth(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_84_get_viewWidth)
HXDLIN(  84)		return this->_viewWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_viewWidth,return )

int RTTBufferManager_obj::set_viewWidth(int value){
            	HX_GC_STACKFRAME(&_hx_pos_8f288acb42141d61_88_set_viewWidth)
HXLINE(  89)		if ((value == this->_viewWidth)) {
HXLINE(  90)			return value;
            		}
HXLINE(  91)		this->_viewWidth = value;
HXLINE(  93)		this->_buffersInvalid = true;
HXLINE(  95)		this->_textureWidth = ::away3d::tools::utils::TextureUtils_obj::getBestPowerOf2(this->_viewWidth);
HXLINE(  97)		if ((this->_textureWidth > this->_viewWidth)) {
HXLINE(  98)			this->_renderToTextureRect->x = ( (Float)(::Std_obj::_hx_int((( (Float)((this->_textureWidth - this->_viewWidth)) ) * ((Float).5)))) );
HXLINE(  99)			this->_renderToTextureRect->width = ( (Float)(this->_viewWidth) );
            		}
            		else {
HXLINE( 101)			this->_renderToTextureRect->x = ( (Float)(0) );
HXLINE( 102)			this->_renderToTextureRect->width = ( (Float)(this->_textureWidth) );
            		}
HXLINE( 105)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),null(),null()));
HXLINE( 106)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RTTBufferManager_obj,set_viewWidth,return )

int RTTBufferManager_obj::get_viewHeight(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_111_get_viewHeight)
HXDLIN( 111)		return this->_viewHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_viewHeight,return )

int RTTBufferManager_obj::set_viewHeight(int value){
            	HX_GC_STACKFRAME(&_hx_pos_8f288acb42141d61_115_set_viewHeight)
HXLINE( 116)		if ((value == this->_viewHeight)) {
HXLINE( 117)			return value;
            		}
HXLINE( 118)		this->_viewHeight = value;
HXLINE( 120)		this->_buffersInvalid = true;
HXLINE( 122)		this->_textureHeight = ::away3d::tools::utils::TextureUtils_obj::getBestPowerOf2(this->_viewHeight);
HXLINE( 124)		if ((this->_textureHeight > this->_viewHeight)) {
HXLINE( 125)			this->_renderToTextureRect->y = ( (Float)(::Std_obj::_hx_int((( (Float)((this->_textureHeight - this->_viewHeight)) ) * ((Float).5)))) );
HXLINE( 126)			this->_renderToTextureRect->height = ( (Float)(this->_viewHeight) );
            		}
            		else {
HXLINE( 128)			this->_renderToTextureRect->y = ( (Float)(0) );
HXLINE( 129)			this->_renderToTextureRect->height = ( (Float)(this->_textureHeight) );
            		}
HXLINE( 132)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),null(),null()));
HXLINE( 133)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RTTBufferManager_obj,set_viewHeight,return )

 ::openfl::display3D::VertexBuffer3D RTTBufferManager_obj::get_renderToTextureVertexBuffer(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_137_get_renderToTextureVertexBuffer)
HXLINE( 138)		if (this->_buffersInvalid) {
HXLINE( 139)			this->updateRTTBuffers();
            		}
HXLINE( 141)		return this->_renderToTextureVertexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_renderToTextureVertexBuffer,return )

 ::openfl::display3D::VertexBuffer3D RTTBufferManager_obj::get_renderToScreenVertexBuffer(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_145_get_renderToScreenVertexBuffer)
HXLINE( 146)		if (this->_buffersInvalid) {
HXLINE( 147)			this->updateRTTBuffers();
            		}
HXLINE( 149)		return this->_renderToScreenVertexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_renderToScreenVertexBuffer,return )

 ::openfl::display3D::IndexBuffer3D RTTBufferManager_obj::get_indexBuffer(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_154_get_indexBuffer)
HXDLIN( 154)		return this->_indexBuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_indexBuffer,return )

 ::openfl::geom::Rectangle RTTBufferManager_obj::get_renderToTextureRect(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_158_get_renderToTextureRect)
HXLINE( 159)		if (this->_buffersInvalid) {
HXLINE( 160)			this->updateRTTBuffers();
            		}
HXLINE( 162)		return this->_renderToTextureRect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_renderToTextureRect,return )

int RTTBufferManager_obj::get_textureWidth(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_167_get_textureWidth)
HXDLIN( 167)		return this->_textureWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureWidth,return )

int RTTBufferManager_obj::get_textureHeight(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_172_get_textureHeight)
HXDLIN( 172)		return this->_textureHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,get_textureHeight,return )

void RTTBufferManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_176_dispose)
HXLINE( 177)		::away3d::core::managers::RTTBufferManager_obj::_instances->remove(this->_stage3DProxy);
HXLINE( 178)		this->_stage3DProxy->removeEventListener(HX_("Context3DRecreated",35,9a,ac,ef),this->onContextRecreated_dyn(),null());
HXLINE( 179)		if (::hx::IsNotNull( this->_indexBuffer )) {
HXLINE( 180)			::away3d::core::managers::Stage3DProxy_obj::disposeIndexBuffer(this->_indexBuffer);
HXLINE( 181)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_renderToScreenVertexBuffer);
HXLINE( 182)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->_renderToTextureVertexBuffer);
HXLINE( 183)			this->_renderToScreenVertexBuffer = null();
HXLINE( 184)			this->_renderToTextureVertexBuffer = null();
HXLINE( 185)			this->_indexBuffer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,dispose,(void))

void RTTBufferManager_obj::onContextRecreated( ::away3d::events::Stage3DEvent event){
            	HX_STACKFRAME(&_hx_pos_8f288acb42141d61_190_onContextRecreated)
HXLINE( 191)		this->_indexBuffer = null();
HXLINE( 192)		this->_renderToTextureVertexBuffer = null();
HXLINE( 193)		this->_renderToScreenVertexBuffer = null();
HXLINE( 194)		this->updateRTTBuffers();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RTTBufferManager_obj,onContextRecreated,(void))

void RTTBufferManager_obj::updateRTTBuffers(){
            	HX_GC_STACKFRAME(&_hx_pos_8f288acb42141d61_201_updateRTTBuffers)
HXLINE( 202)		 ::openfl::display3D::Context3D context = this->_stage3DProxy->get_context3D();
HXLINE( 207)		if (::hx::IsNull( this->_renderToTextureVertexBuffer )) {
HXLINE( 208)			this->_renderToTextureVertexBuffer = this->_stage3DProxy->createVertexBuffer(4,5);
            		}
HXLINE( 210)		if (::hx::IsNull( this->_renderToScreenVertexBuffer )) {
HXLINE( 211)			this->_renderToScreenVertexBuffer = this->_stage3DProxy->createVertexBuffer(4,5);
            		}
HXLINE( 213)		if (::hx::IsNull( this->_indexBuffer )) {
HXLINE( 214)			this->_indexBuffer = this->_stage3DProxy->createIndexBuffer(6);
HXLINE( 215)			::Array< int > array = ::Array_obj< int >::fromData( _hx_array_data_41037ba3_19,6);
HXDLIN( 215)			int length = null();
HXDLIN( 215)			bool fixed = null();
HXDLIN( 215)			::Array< int > array1 = null();
HXDLIN( 215)			 ::openfl::_Vector::IntVector vector =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array1);
HXDLIN( 215)			{
HXLINE( 215)				int _g = 0;
HXDLIN( 215)				int _g1 = array->length;
HXDLIN( 215)				while((_g < _g1)){
HXLINE( 215)					_g = (_g + 1);
HXDLIN( 215)					int i = (_g - 1);
HXDLIN( 215)					vector->set(i,array->__get(i));
            				}
            			}
HXDLIN( 215)			 ::openfl::_Vector::IntVector v = vector;
HXLINE( 216)			this->_indexBuffer->uploadFromVector(v,0,6);
            		}
HXLINE( 205)		Float x = ::Math_obj::min((( (Float)(this->_viewWidth) ) / ( (Float)(this->_textureWidth) )),( (Float)(1) ));
HXLINE( 219)		this->_textureRatioX = x;
HXLINE( 205)		Float y = ::Math_obj::min((( (Float)(this->_viewHeight) ) / ( (Float)(this->_textureHeight) )),( (Float)(1) ));
HXLINE( 220)		this->_textureRatioY = y;
HXLINE( 222)		Float u1 = ((( (Float)(1) ) - x) * ((Float).5));
HXLINE( 223)		Float u2 = ((x + 1) * ((Float).5));
HXLINE( 224)		Float v1 = ((y + 1) * ((Float).5));
HXLINE( 225)		Float v2 = ((( (Float)(1) ) - y) * ((Float).5));
HXLINE( 228)		::Array< Float > array = ::Array_obj< Float >::__new(20)->init(0,-(x))->init(1,-(y))->init(2,u1)->init(3,v1)->init(4,0)->init(5,x)->init(6,-(y))->init(7,u2)->init(8,v1)->init(9,1)->init(10,x)->init(11,y)->init(12,u2)->init(13,v2)->init(14,2)->init(15,-(x))->init(16,y)->init(17,u1)->init(18,v2)->init(19,3);
HXDLIN( 228)		int length = null();
HXDLIN( 228)		bool fixed = null();
HXDLIN( 228)		::Array< Float > array1 = null();
HXDLIN( 228)		 ::openfl::_Vector::FloatVector vector =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN( 228)		{
HXLINE( 228)			int _g = 0;
HXDLIN( 228)			int _g1 = array->length;
HXDLIN( 228)			while((_g < _g1)){
HXLINE( 228)				_g = (_g + 1);
HXDLIN( 228)				int i = (_g - 1);
HXDLIN( 228)				vector->set(i,array->__get(i));
            			}
            		}
HXLINE( 203)		 ::openfl::_Vector::FloatVector textureVerts = vector;
HXLINE( 233)		::Array< Float > array2 = ::Array_obj< Float >::__new(20)->init(0,-1)->init(1,-1)->init(2,u1)->init(3,v1)->init(4,0)->init(5,1)->init(6,-1)->init(7,u2)->init(8,v1)->init(9,1)->init(10,1)->init(11,1)->init(12,u2)->init(13,v2)->init(14,2)->init(15,-1)->init(16,1)->init(17,u1)->init(18,v2)->init(19,3);
HXDLIN( 233)		int length1 = null();
HXDLIN( 233)		bool fixed1 = null();
HXDLIN( 233)		::Array< Float > array3 = null();
HXDLIN( 233)		 ::openfl::_Vector::FloatVector vector1 =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array3,true);
HXDLIN( 233)		{
HXLINE( 233)			int _g2 = 0;
HXDLIN( 233)			int _g3 = array2->length;
HXDLIN( 233)			while((_g2 < _g3)){
HXLINE( 233)				_g2 = (_g2 + 1);
HXDLIN( 233)				int i = (_g2 - 1);
HXDLIN( 233)				vector1->set(i,array2->__get(i));
            			}
            		}
HXLINE( 204)		 ::openfl::_Vector::FloatVector screenVerts = vector1;
HXLINE( 238)		this->_renderToTextureVertexBuffer->uploadFromVector(textureVerts,0,4);
HXLINE( 239)		this->_renderToScreenVertexBuffer->uploadFromVector(screenVerts,0,4);
HXLINE( 241)		this->_buffersInvalid = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RTTBufferManager_obj,updateRTTBuffers,(void))

 ::haxe::ds::ObjectMap RTTBufferManager_obj::_instances;

 ::away3d::core::managers::RTTBufferManager RTTBufferManager_obj::getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_GC_STACKFRAME(&_hx_pos_8f288acb42141d61_55_getInstance)
HXLINE(  56)		if (::hx::IsNull( stage3DProxy )) {
HXLINE(  57)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("stage3DProxy key cannot be null!",38,68,20,28),null()));
            		}
HXLINE(  58)		if (::hx::IsNull( ::away3d::core::managers::RTTBufferManager_obj::_instances )) {
HXLINE(  59)			::away3d::core::managers::RTTBufferManager_obj::_instances =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  60)		 ::away3d::core::managers::RTTBufferManager rttb = ( ( ::away3d::core::managers::RTTBufferManager)(::away3d::core::managers::RTTBufferManager_obj::_instances->get(stage3DProxy)) );
HXLINE(  61)		if (::hx::IsNull( rttb )) {
HXLINE(  62)			rttb =  ::away3d::core::managers::RTTBufferManager_obj::__alloc( HX_CTX ,stage3DProxy);
HXLINE(  63)			::away3d::core::managers::RTTBufferManager_obj::_instances->set(stage3DProxy,rttb);
            		}
HXLINE(  65)		return rttb;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RTTBufferManager_obj,getInstance,return )


::hx::ObjectPtr< RTTBufferManager_obj > RTTBufferManager_obj::__new( ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	::hx::ObjectPtr< RTTBufferManager_obj > __this = new RTTBufferManager_obj();
	__this->__construct(stage3DProxy);
	return __this;
}

::hx::ObjectPtr< RTTBufferManager_obj > RTTBufferManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy) {
	RTTBufferManager_obj *__this = (RTTBufferManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RTTBufferManager_obj), true, "away3d.core.managers.RTTBufferManager"));
	*(void **)__this = RTTBufferManager_obj::_hx_vtable;
	__this->__construct(stage3DProxy);
	return __this;
}

RTTBufferManager_obj::RTTBufferManager_obj()
{
}

void RTTBufferManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RTTBufferManager);
	HX_MARK_MEMBER_NAME(_renderToTextureVertexBuffer,"_renderToTextureVertexBuffer");
	HX_MARK_MEMBER_NAME(_renderToScreenVertexBuffer,"_renderToScreenVertexBuffer");
	HX_MARK_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_MARK_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_MARK_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_MARK_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_MARK_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_MARK_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_MARK_MEMBER_NAME(_renderToTextureRect,"_renderToTextureRect");
	HX_MARK_MEMBER_NAME(_buffersInvalid,"_buffersInvalid");
	HX_MARK_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_MARK_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RTTBufferManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_renderToTextureVertexBuffer,"_renderToTextureVertexBuffer");
	HX_VISIT_MEMBER_NAME(_renderToScreenVertexBuffer,"_renderToScreenVertexBuffer");
	HX_VISIT_MEMBER_NAME(_indexBuffer,"_indexBuffer");
	HX_VISIT_MEMBER_NAME(_stage3DProxy,"_stage3DProxy");
	HX_VISIT_MEMBER_NAME(_viewWidth,"_viewWidth");
	HX_VISIT_MEMBER_NAME(_viewHeight,"_viewHeight");
	HX_VISIT_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_VISIT_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_VISIT_MEMBER_NAME(_renderToTextureRect,"_renderToTextureRect");
	HX_VISIT_MEMBER_NAME(_buffersInvalid,"_buffersInvalid");
	HX_VISIT_MEMBER_NAME(_textureRatioX,"_textureRatioX");
	HX_VISIT_MEMBER_NAME(_textureRatioY,"_textureRatioY");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RTTBufferManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewWidth() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_viewHeight() ); }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { return ::hx::Val( _viewWidth ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_indexBuffer() ); }
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { return ::hx::Val( _viewHeight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureWidth() ); }
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { return ::hx::Val( _indexBuffer ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureRatioX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureRatioX() ); }
		if (HX_FIELD_EQ(inName,"textureRatioY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureRatioY() ); }
		if (HX_FIELD_EQ(inName,"textureHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureHeight() ); }
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { return ::hx::Val( _stage3DProxy ); }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { return ::hx::Val( _textureWidth ); }
		if (HX_FIELD_EQ(inName,"get_viewWidth") ) { return ::hx::Val( get_viewWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewWidth") ) { return ::hx::Val( set_viewWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { return ::hx::Val( _textureHeight ); }
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { return ::hx::Val( _textureRatioX ); }
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { return ::hx::Val( _textureRatioY ); }
		if (HX_FIELD_EQ(inName,"get_viewHeight") ) { return ::hx::Val( get_viewHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_viewHeight") ) { return ::hx::Val( set_viewHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_buffersInvalid") ) { return ::hx::Val( _buffersInvalid ); }
		if (HX_FIELD_EQ(inName,"get_indexBuffer") ) { return ::hx::Val( get_indexBuffer_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_textureWidth") ) { return ::hx::Val( get_textureWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateRTTBuffers") ) { return ::hx::Val( updateRTTBuffers_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_textureRatioX") ) { return ::hx::Val( get_textureRatioX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textureRatioY") ) { return ::hx::Val( get_textureRatioY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textureHeight") ) { return ::hx::Val( get_textureHeight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onContextRecreated") ) { return ::hx::Val( onContextRecreated_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderToTextureRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderToTextureRect() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_renderToTextureRect") ) { return ::hx::Val( _renderToTextureRect ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_renderToTextureRect") ) { return ::hx::Val( get_renderToTextureRect_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"renderToScreenVertexBuffer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderToScreenVertexBuffer() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"renderToTextureVertexBuffer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderToTextureVertexBuffer() ); }
		if (HX_FIELD_EQ(inName,"_renderToScreenVertexBuffer") ) { return ::hx::Val( _renderToScreenVertexBuffer ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_renderToTextureVertexBuffer") ) { return ::hx::Val( _renderToTextureVertexBuffer ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_renderToScreenVertexBuffer") ) { return ::hx::Val( get_renderToScreenVertexBuffer_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_renderToTextureVertexBuffer") ) { return ::hx::Val( get_renderToTextureVertexBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RTTBufferManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { outValue = ( _instances ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val RTTBufferManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"viewWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewWidth(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"viewHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_viewHeight(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_viewWidth") ) { _viewWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_viewHeight") ) { _viewHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_indexBuffer") ) { _indexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stage3DProxy") ) { _stage3DProxy=inValue.Cast<  ::away3d::core::managers::Stage3DProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { _textureWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { _textureHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureRatioX") ) { _textureRatioX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureRatioY") ) { _textureRatioY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_buffersInvalid") ) { _buffersInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_renderToTextureRect") ) { _renderToTextureRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_renderToScreenVertexBuffer") ) { _renderToScreenVertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_renderToTextureVertexBuffer") ) { _renderToTextureVertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RTTBufferManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void RTTBufferManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textureRatioX",28,08,a2,4e));
	outFields->push(HX_("textureRatioY",29,08,a2,4e));
	outFields->push(HX_("viewWidth",61,25,f7,0a));
	outFields->push(HX_("viewHeight",2c,08,99,43));
	outFields->push(HX_("renderToTextureVertexBuffer",0e,4d,2c,35));
	outFields->push(HX_("renderToScreenVertexBuffer",e1,f3,03,22));
	outFields->push(HX_("indexBuffer",b2,65,a6,f5));
	outFields->push(HX_("renderToTextureRect",ae,50,cc,58));
	outFields->push(HX_("textureWidth",2b,63,02,c3));
	outFields->push(HX_("textureHeight",22,db,63,95));
	outFields->push(HX_("_renderToTextureVertexBuffer",0f,cd,e5,38));
	outFields->push(HX_("_renderToScreenVertexBuffer",00,2f,3e,71));
	outFields->push(HX_("_indexBuffer",b3,13,b0,5b));
	outFields->push(HX_("_stage3DProxy",de,ab,3d,f1));
	outFields->push(HX_("_viewWidth",22,a1,99,66));
	outFields->push(HX_("_viewHeight",4b,d5,22,16));
	outFields->push(HX_("_textureWidth",0a,f6,70,a5));
	outFields->push(HX_("_textureHeight",63,cb,b5,d3));
	outFields->push(HX_("_renderToTextureRect",af,67,25,58));
	outFields->push(HX_("_buffersInvalid",63,4c,bc,c2));
	outFields->push(HX_("_textureRatioX",69,f8,f3,8c));
	outFields->push(HX_("_textureRatioY",6a,f8,f3,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RTTBufferManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(RTTBufferManager_obj,_renderToTextureVertexBuffer),HX_("_renderToTextureVertexBuffer",0f,cd,e5,38)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(RTTBufferManager_obj,_renderToScreenVertexBuffer),HX_("_renderToScreenVertexBuffer",00,2f,3e,71)},
	{::hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(RTTBufferManager_obj,_indexBuffer),HX_("_indexBuffer",b3,13,b0,5b)},
	{::hx::fsObject /*  ::away3d::core::managers::Stage3DProxy */ ,(int)offsetof(RTTBufferManager_obj,_stage3DProxy),HX_("_stage3DProxy",de,ab,3d,f1)},
	{::hx::fsInt,(int)offsetof(RTTBufferManager_obj,_viewWidth),HX_("_viewWidth",22,a1,99,66)},
	{::hx::fsInt,(int)offsetof(RTTBufferManager_obj,_viewHeight),HX_("_viewHeight",4b,d5,22,16)},
	{::hx::fsInt,(int)offsetof(RTTBufferManager_obj,_textureWidth),HX_("_textureWidth",0a,f6,70,a5)},
	{::hx::fsInt,(int)offsetof(RTTBufferManager_obj,_textureHeight),HX_("_textureHeight",63,cb,b5,d3)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(RTTBufferManager_obj,_renderToTextureRect),HX_("_renderToTextureRect",af,67,25,58)},
	{::hx::fsBool,(int)offsetof(RTTBufferManager_obj,_buffersInvalid),HX_("_buffersInvalid",63,4c,bc,c2)},
	{::hx::fsFloat,(int)offsetof(RTTBufferManager_obj,_textureRatioX),HX_("_textureRatioX",69,f8,f3,8c)},
	{::hx::fsFloat,(int)offsetof(RTTBufferManager_obj,_textureRatioY),HX_("_textureRatioY",6a,f8,f3,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo RTTBufferManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &RTTBufferManager_obj::_instances,HX_("_instances",ff,fe,bc,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String RTTBufferManager_obj_sMemberFields[] = {
	HX_("_renderToTextureVertexBuffer",0f,cd,e5,38),
	HX_("_renderToScreenVertexBuffer",00,2f,3e,71),
	HX_("_indexBuffer",b3,13,b0,5b),
	HX_("_stage3DProxy",de,ab,3d,f1),
	HX_("_viewWidth",22,a1,99,66),
	HX_("_viewHeight",4b,d5,22,16),
	HX_("_textureWidth",0a,f6,70,a5),
	HX_("_textureHeight",63,cb,b5,d3),
	HX_("_renderToTextureRect",af,67,25,58),
	HX_("_buffersInvalid",63,4c,bc,c2),
	HX_("_textureRatioX",69,f8,f3,8c),
	HX_("_textureRatioY",6a,f8,f3,8c),
	HX_("get_textureRatioX",7f,13,12,55),
	HX_("get_textureRatioY",80,13,12,55),
	HX_("get_viewWidth",38,f9,5a,cc),
	HX_("set_viewWidth",44,db,60,11),
	HX_("get_viewHeight",75,90,8e,b9),
	HX_("set_viewHeight",e9,78,ae,d9),
	HX_("get_renderToTextureVertexBuffer",a5,e2,fc,10),
	HX_("get_renderToScreenVertexBuffer",2a,5e,10,71),
	HX_("get_indexBuffer",49,1d,88,b6),
	HX_("get_renderToTextureRect",45,f7,21,61),
	HX_("get_textureWidth",b4,4f,a1,c7),
	HX_("get_textureHeight",79,e6,d3,9b),
	HX_("dispose",9f,80,4c,bb),
	HX_("onContextRecreated",e5,bd,ac,e8),
	HX_("updateRTTBuffers",8a,e2,ba,65),
	::String(null()) };

static void RTTBufferManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RTTBufferManager_obj::_instances,"_instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RTTBufferManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RTTBufferManager_obj::_instances,"_instances");
};

#endif

::hx::Class RTTBufferManager_obj::__mClass;

static ::String RTTBufferManager_obj_sStaticFields[] = {
	HX_("_instances",ff,fe,bc,a6),
	HX_("getInstance",4b,e2,d4,7f),
	::String(null())
};

void RTTBufferManager_obj::__register()
{
	RTTBufferManager_obj _hx_dummy;
	RTTBufferManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.managers.RTTBufferManager",a3,7b,03,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RTTBufferManager_obj::__GetStatic;
	__mClass->mSetStaticField = &RTTBufferManager_obj::__SetStatic;
	__mClass->mMarkFunc = RTTBufferManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RTTBufferManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RTTBufferManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RTTBufferManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RTTBufferManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RTTBufferManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RTTBufferManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace managers
