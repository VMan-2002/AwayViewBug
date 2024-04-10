#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SkinnedSubGeometry
#include <away3d/core/base/SkinnedSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__Vector_BoolVector
#include <openfl/_Vector/BoolVector.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a099941dbfbe1cab_15_new,"away3d.core.base.SkinnedSubGeometry","new",0x159fcb11,"away3d.core.base.SkinnedSubGeometry.new","away3d/core/base/SkinnedSubGeometry.hx",15,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_52_getVertexBufferFormat,"away3d.core.base.SkinnedSubGeometry","getVertexBufferFormat",0x8bc32b02,"away3d.core.base.SkinnedSubGeometry.getVertexBufferFormat","away3d/core/base/SkinnedSubGeometry.hx",52,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_72_get_condensedIndexLookUp,"away3d.core.base.SkinnedSubGeometry","get_condensedIndexLookUp",0x0aa6dc1d,"away3d.core.base.SkinnedSubGeometry.get_condensedIndexLookUp","away3d/core/base/SkinnedSubGeometry.hx",72,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_80_get_numCondensedJoints,"away3d.core.base.SkinnedSubGeometry","get_numCondensedJoints",0x20fc2a82,"away3d.core.base.SkinnedSubGeometry.get_numCondensedJoints","away3d/core/base/SkinnedSubGeometry.hx",80,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_87_get_animatedData,"away3d.core.base.SkinnedSubGeometry","get_animatedData",0xb955d9a5,"away3d.core.base.SkinnedSubGeometry.get_animatedData","away3d/core/base/SkinnedSubGeometry.hx",87,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_94_updateAnimatedData,"away3d.core.base.SkinnedSubGeometry","updateAnimatedData",0x6f377285,"away3d.core.base.SkinnedSubGeometry.updateAnimatedData","away3d/core/base/SkinnedSubGeometry.hx",94,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_105_activateJointWeightsBuffer,"away3d.core.base.SkinnedSubGeometry","activateJointWeightsBuffer",0x9b5fabb3,"away3d.core.base.SkinnedSubGeometry.activateJointWeightsBuffer","away3d/core/base/SkinnedSubGeometry.hx",105,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_126_activateJointIndexBuffer,"away3d.core.base.SkinnedSubGeometry","activateJointIndexBuffer",0x2c4f140a,"away3d.core.base.SkinnedSubGeometry.activateJointIndexBuffer","away3d/core/base/SkinnedSubGeometry.hx",126,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_144_uploadData,"away3d.core.base.SkinnedSubGeometry","uploadData",0xa8120e3a,"away3d.core.base.SkinnedSubGeometry.uploadData","away3d/core/base/SkinnedSubGeometry.hx",144,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_156_clone,"away3d.core.base.SkinnedSubGeometry","clone",0x44a7dc4e,"away3d.core.base.SkinnedSubGeometry.clone","away3d/core/base/SkinnedSubGeometry.hx",156,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_174_dispose,"away3d.core.base.SkinnedSubGeometry","dispose",0xe90a27d0,"away3d.core.base.SkinnedSubGeometry.dispose","away3d/core/base/SkinnedSubGeometry.hx",174,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_183_condenseIndexData,"away3d.core.base.SkinnedSubGeometry","condenseIndexData",0x974834f0,"away3d.core.base.SkinnedSubGeometry.condenseIndexData","away3d/core/base/SkinnedSubGeometry.hx",183,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_214_get_jointWeightsData,"away3d.core.base.SkinnedSubGeometry","get_jointWeightsData",0x3e6a75d3,"away3d.core.base.SkinnedSubGeometry.get_jointWeightsData","away3d/core/base/SkinnedSubGeometry.hx",214,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_218_updateJointWeightsData,"away3d.core.base.SkinnedSubGeometry","updateJointWeightsData",0xdab9feb3,"away3d.core.base.SkinnedSubGeometry.updateJointWeightsData","away3d/core/base/SkinnedSubGeometry.hx",218,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_233_get_jointIndexData,"away3d.core.base.SkinnedSubGeometry","get_jointIndexData",0xe676d0ea,"away3d.core.base.SkinnedSubGeometry.get_jointIndexData","away3d/core/base/SkinnedSubGeometry.hx",233,0x34d9a03e)
HX_LOCAL_STACK_FRAME(_hx_pos_a099941dbfbe1cab_237_updateJointIndexData,"away3d.core.base.SkinnedSubGeometry","updateJointIndexData",0x0a9861ca,"away3d.core.base.SkinnedSubGeometry.updateJointIndexData","away3d/core/base/SkinnedSubGeometry.hx",237,0x34d9a03e)
namespace away3d{
namespace core{
namespace base{

void SkinnedSubGeometry_obj::__construct(int jointsPerVertex){
            	HX_GC_STACKFRAME(&_hx_pos_a099941dbfbe1cab_15_new)
HXLINE(  32)		bool fixed = null();
HXDLIN(  32)		::Array< ::Dynamic> array = null();
HXDLIN(  32)		this->_jointIndexContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed,array,true);
HXLINE(  31)		bool fixed1 = null();
HXDLIN(  31)		::Array< ::Dynamic> array1 = null();
HXDLIN(  31)		this->_jointWeightContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed1,array1,true);
HXLINE(  30)		::Array< bool > array2 = null();
HXDLIN(  30)		this->_jointIndicesInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array2);
HXLINE(  29)		::Array< bool > array3 = null();
HXDLIN(  29)		this->_jointWeightsInvalid =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,true,array3);
HXLINE(  28)		bool fixed2 = null();
HXDLIN(  28)		::Array< ::Dynamic> array4 = null();
HXDLIN(  28)		this->_jointIndexBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed2,array4,true);
HXLINE(  27)		bool fixed3 = null();
HXDLIN(  27)		::Array< ::Dynamic> array5 = null();
HXDLIN(  27)		this->_jointWeightsBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed3,array5,true);
HXLINE(  45)		super::__construct();
HXLINE(  46)		this->_jointsPerVertex = jointsPerVertex;
HXLINE(  47)		this->_bufferFormat = this->getVertexBufferFormat(this->_jointsPerVertex);
            	}

Dynamic SkinnedSubGeometry_obj::__CreateEmpty() { return new SkinnedSubGeometry_obj; }

void *SkinnedSubGeometry_obj::_hx_vtable = 0;

Dynamic SkinnedSubGeometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SkinnedSubGeometry_obj > _hx_result = new SkinnedSubGeometry_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SkinnedSubGeometry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x392651b0) {
		if (inClassId<=(int)0x294d62fe) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x294d62fe;
		} else {
			return inClassId==(int)0x392651b0;
		}
	} else {
		return inClassId==(int)0x4f5c81d1;
	}
}

 ::Dynamic SkinnedSubGeometry_obj::getVertexBufferFormat(int size){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_52_getVertexBufferFormat)
HXDLIN(  52)		switch((int)(size)){
            			case (int)1: {
HXLINE(  55)				return 1;
            			}
            			break;
            			case (int)2: {
HXLINE(  57)				return 2;
            			}
            			break;
            			case (int)3: {
HXLINE(  59)				return 3;
            			}
            			break;
            			case (int)4: {
HXLINE(  61)				return 3;
            			}
            			break;
            			default:{
HXLINE(  63)				return null();
            			}
            		}
HXLINE(  52)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,getVertexBufferFormat,return )

 ::openfl::_Vector::IntVector SkinnedSubGeometry_obj::get_condensedIndexLookUp(){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_72_get_condensedIndexLookUp)
HXDLIN(  72)		return this->_condensedIndexLookUp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_condensedIndexLookUp,return )

int SkinnedSubGeometry_obj::get_numCondensedJoints(){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_80_get_numCondensedJoints)
HXDLIN(  80)		return this->_numCondensedJoints;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_numCondensedJoints,return )

 ::openfl::_Vector::FloatVector SkinnedSubGeometry_obj::get_animatedData(){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_87_get_animatedData)
HXLINE(  88)		if (::hx::IsNotNull( this->_animatedData )) {
HXLINE(  89)			return this->_animatedData;
            		}
HXLINE(  90)		 ::openfl::_Vector::FloatVector vec = null();
HXDLIN(  90)		return ( ( ::openfl::_Vector::FloatVector)(this->_vertexData->concat(vec)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_animatedData,return )

void SkinnedSubGeometry_obj::updateAnimatedData( ::openfl::_Vector::FloatVector value){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_94_updateAnimatedData)
HXLINE(  95)		this->_animatedData = value;
HXLINE(  96)		this->invalidateBuffers(this->_vertexDataInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,updateAnimatedData,(void))

void SkinnedSubGeometry_obj::activateJointWeightsBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_105_activateJointWeightsBuffer)
HXLINE( 106)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 107)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 108)		bool _hx_tmp;
HXDLIN( 108)		if (::hx::IsInstanceEq( this->_jointWeightContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context )) {
HXLINE( 108)			_hx_tmp = ::hx::IsNull( this->_jointWeightsBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >() );
            		}
            		else {
HXLINE( 108)			_hx_tmp = true;
            		}
HXDLIN( 108)		if (_hx_tmp) {
HXLINE( 109)			{
HXLINE( 109)				::Dynamic this1 = this->_jointWeightsBuffer;
HXDLIN( 109)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,stage3DProxy->createVertexBuffer(this->_numVertices,this->_jointsPerVertex)).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
HXLINE( 110)			this->_jointWeightContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 111)			this->_jointWeightsInvalid->set(contextIndex,true);
            		}
HXLINE( 113)		if (this->_jointWeightsInvalid->get(contextIndex)) {
HXLINE( 114)			 ::openfl::display3D::VertexBuffer3D _hx_tmp = this->_jointWeightsBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 114)			 ::openfl::_Vector::FloatVector _hx_tmp1 = this->_jointWeightsData;
HXDLIN( 114)			int _hx_tmp2 = this->_jointWeightsData->get_length();
HXDLIN( 114)			_hx_tmp->uploadFromVector(_hx_tmp1,0,::Std_obj::_hx_int((( (Float)(_hx_tmp2) ) / ( (Float)(this->_jointsPerVertex) ))));
HXLINE( 115)			this->_jointWeightsInvalid->set(contextIndex,false);
            		}
HXLINE( 117)		 ::openfl::display3D::VertexBuffer3D _hx_tmp1 = this->_jointWeightsBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 117)		context->setVertexBufferAt(index,_hx_tmp1,0,this->_bufferFormat);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SkinnedSubGeometry_obj,activateJointWeightsBuffer,(void))

void SkinnedSubGeometry_obj::activateJointIndexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_126_activateJointIndexBuffer)
HXLINE( 127)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 128)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		if (::hx::IsInstanceEq( this->_jointIndexContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context )) {
HXLINE( 130)			_hx_tmp = ::hx::IsNull( this->_jointIndexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >() );
            		}
            		else {
HXLINE( 130)			_hx_tmp = true;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 131)			{
HXLINE( 131)				::Dynamic this1 = this->_jointIndexBuffer;
HXDLIN( 131)				( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,stage3DProxy->createVertexBuffer(this->_numVertices,this->_jointsPerVertex)).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
            			}
HXLINE( 132)			this->_jointIndexContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 133)			this->_jointIndicesInvalid->set(contextIndex,true);
            		}
HXLINE( 135)		if (this->_jointIndicesInvalid->get(contextIndex)) {
HXLINE( 136)			 ::openfl::display3D::VertexBuffer3D _hx_tmp = this->_jointIndexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 136)			 ::openfl::_Vector::FloatVector _hx_tmp1;
HXDLIN( 136)			if ((this->_numCondensedJoints > 0)) {
HXLINE( 136)				_hx_tmp1 = this->_condensedJointIndexData;
            			}
            			else {
HXLINE( 136)				_hx_tmp1 = this->_jointIndexData;
            			}
HXDLIN( 136)			int _hx_tmp2 = this->_jointIndexData->get_length();
HXDLIN( 136)			_hx_tmp->uploadFromVector(_hx_tmp1,0,::Std_obj::_hx_int((( (Float)(_hx_tmp2) ) / ( (Float)(this->_jointsPerVertex) ))));
HXLINE( 137)			this->_jointIndicesInvalid->set(contextIndex,false);
            		}
HXLINE( 139)		 ::openfl::display3D::VertexBuffer3D _hx_tmp1 = this->_jointIndexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXDLIN( 139)		context->setVertexBufferAt(index,_hx_tmp1,0,this->_bufferFormat);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SkinnedSubGeometry_obj,activateJointIndexBuffer,(void))

void SkinnedSubGeometry_obj::uploadData(int contextIndex){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_144_uploadData)
HXDLIN( 144)		if (::hx::IsNotNull( this->_animatedData )) {
HXLINE( 145)			this->_activeBuffer->uploadFromVector(this->_animatedData,0,this->_numVertices);
HXLINE( 146)			this->_vertexDataInvalid->set(contextIndex,(this->_activeDataInvalid = false));
            		}
            		else {
HXLINE( 148)			this->super::uploadData(contextIndex);
            		}
            	}


::Dynamic SkinnedSubGeometry_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a099941dbfbe1cab_156_clone)
HXLINE( 157)		 ::away3d::core::base::SkinnedSubGeometry clone =  ::away3d::core::base::SkinnedSubGeometry_obj::__alloc( HX_CTX ,this->_jointsPerVertex);
HXLINE( 158)		 ::openfl::_Vector::FloatVector vec = null();
HXDLIN( 158)		clone->updateData(( ( ::openfl::_Vector::FloatVector)(this->_vertexData->concat(vec)) ));
HXLINE( 159)		 ::openfl::_Vector::IntVector vec1 = null();
HXDLIN( 159)		clone->updateIndexData(( ( ::openfl::_Vector::IntVector)(this->_indices->concat(vec1)) ));
HXLINE( 160)		 ::openfl::_Vector::FloatVector vec2 = null();
HXDLIN( 160)		clone->updateJointIndexData(( ( ::openfl::_Vector::FloatVector)(this->_jointIndexData->concat(vec2)) ));
HXLINE( 161)		 ::openfl::_Vector::FloatVector vec3 = null();
HXDLIN( 161)		clone->updateJointWeightsData(( ( ::openfl::_Vector::FloatVector)(this->_jointWeightsData->concat(vec3)) ));
HXLINE( 162)		clone->_autoDeriveVertexNormals = this->_autoDeriveVertexNormals;
HXLINE( 163)		clone->_autoDeriveVertexTangents = this->_autoDeriveVertexTangents;
HXLINE( 164)		clone->_numCondensedJoints = this->_numCondensedJoints;
HXLINE( 165)		clone->_condensedIndexLookUp = this->_condensedIndexLookUp;
HXLINE( 166)		clone->_condensedJointIndexData = this->_condensedJointIndexData;
HXLINE( 167)		return clone;
            	}


void SkinnedSubGeometry_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_174_dispose)
HXLINE( 175)		this->super::dispose();
HXLINE( 176)		this->disposeVertexBuffers(this->_jointWeightsBuffer);
HXLINE( 177)		this->disposeVertexBuffers(this->_jointIndexBuffer);
            	}


void SkinnedSubGeometry_obj::condenseIndexData(){
            	HX_GC_STACKFRAME(&_hx_pos_a099941dbfbe1cab_183_condenseIndexData)
HXLINE( 184)		int len = this->_jointIndexData->get_length();
HXLINE( 185)		int oldIndex;
HXLINE( 186)		int newIndex = 0;
HXLINE( 187)		 ::haxe::ds::IntMap dic =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 189)		::Array< Float > array = null();
HXDLIN( 189)		this->_condensedJointIndexData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,len,true,array,true);
HXLINE( 190)		int length = null();
HXDLIN( 190)		bool fixed = null();
HXDLIN( 190)		::Array< int > array1 = null();
HXDLIN( 190)		this->_condensedIndexLookUp =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array1);
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			int _g1 = len;
HXDLIN( 192)			while((_g < _g1)){
HXLINE( 192)				_g = (_g + 1);
HXDLIN( 192)				int i = (_g - 1);
HXLINE( 193)				oldIndex = ::Std_obj::_hx_int(this->_jointIndexData->get(i));
HXLINE( 196)				if (!(dic->exists(oldIndex))) {
HXLINE( 197)					dic->set(oldIndex,newIndex);
HXLINE( 198)					{
HXLINE( 198)						newIndex = (newIndex + 1);
HXDLIN( 198)						this->_condensedIndexLookUp->set((newIndex - 1),oldIndex);
            					}
HXLINE( 199)					{
HXLINE( 199)						newIndex = (newIndex + 1);
HXDLIN( 199)						this->_condensedIndexLookUp->set((newIndex - 1),(oldIndex + 1));
            					}
HXLINE( 200)					{
HXLINE( 200)						newIndex = (newIndex + 1);
HXDLIN( 200)						this->_condensedIndexLookUp->set((newIndex - 1),(oldIndex + 2));
            					}
            				}
HXLINE( 202)				{
HXLINE( 202)					::Dynamic this1 = this->_condensedJointIndexData;
HXDLIN( 202)					( ( ::openfl::_Vector::FloatVector)(this1) )->set(i,dic->get_float(oldIndex));
            				}
            			}
            		}
HXLINE( 204)		this->_numCondensedJoints = ::Std_obj::_hx_int((( (Float)(newIndex) ) / ( (Float)(3) )));
HXLINE( 206)		this->invalidateBuffers(this->_jointIndicesInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,condenseIndexData,(void))

 ::openfl::_Vector::FloatVector SkinnedSubGeometry_obj::get_jointWeightsData(){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_214_get_jointWeightsData)
HXDLIN( 214)		return this->_jointWeightsData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_jointWeightsData,return )

void SkinnedSubGeometry_obj::updateJointWeightsData( ::openfl::_Vector::FloatVector value){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_218_updateJointWeightsData)
HXLINE( 220)		this->_numCondensedJoints = 0;
HXLINE( 221)		this->_condensedIndexLookUp = null();
HXLINE( 222)		this->_condensedJointIndexData = null();
HXLINE( 224)		this->_jointWeightsData = value;
HXLINE( 225)		this->invalidateBuffers(this->_jointWeightsInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,updateJointWeightsData,(void))

 ::openfl::_Vector::FloatVector SkinnedSubGeometry_obj::get_jointIndexData(){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_233_get_jointIndexData)
HXDLIN( 233)		return this->_jointIndexData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SkinnedSubGeometry_obj,get_jointIndexData,return )

void SkinnedSubGeometry_obj::updateJointIndexData( ::openfl::_Vector::FloatVector value){
            	HX_STACKFRAME(&_hx_pos_a099941dbfbe1cab_237_updateJointIndexData)
HXLINE( 238)		this->_jointIndexData = value;
HXLINE( 239)		this->invalidateBuffers(this->_jointIndicesInvalid);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SkinnedSubGeometry_obj,updateJointIndexData,(void))


::hx::ObjectPtr< SkinnedSubGeometry_obj > SkinnedSubGeometry_obj::__new(int jointsPerVertex) {
	::hx::ObjectPtr< SkinnedSubGeometry_obj > __this = new SkinnedSubGeometry_obj();
	__this->__construct(jointsPerVertex);
	return __this;
}

::hx::ObjectPtr< SkinnedSubGeometry_obj > SkinnedSubGeometry_obj::__alloc(::hx::Ctx *_hx_ctx,int jointsPerVertex) {
	SkinnedSubGeometry_obj *__this = (SkinnedSubGeometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SkinnedSubGeometry_obj), true, "away3d.core.base.SkinnedSubGeometry"));
	*(void **)__this = SkinnedSubGeometry_obj::_hx_vtable;
	__this->__construct(jointsPerVertex);
	return __this;
}

SkinnedSubGeometry_obj::SkinnedSubGeometry_obj()
{
}

void SkinnedSubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkinnedSubGeometry);
	HX_MARK_MEMBER_NAME(_bufferFormat,"_bufferFormat");
	HX_MARK_MEMBER_NAME(_jointWeightsData,"_jointWeightsData");
	HX_MARK_MEMBER_NAME(_jointIndexData,"_jointIndexData");
	HX_MARK_MEMBER_NAME(_animatedData,"_animatedData");
	HX_MARK_MEMBER_NAME(_jointWeightsBuffer,"_jointWeightsBuffer");
	HX_MARK_MEMBER_NAME(_jointIndexBuffer,"_jointIndexBuffer");
	HX_MARK_MEMBER_NAME(_jointWeightsInvalid,"_jointWeightsInvalid");
	HX_MARK_MEMBER_NAME(_jointIndicesInvalid,"_jointIndicesInvalid");
	HX_MARK_MEMBER_NAME(_jointWeightContext,"_jointWeightContext");
	HX_MARK_MEMBER_NAME(_jointIndexContext,"_jointIndexContext");
	HX_MARK_MEMBER_NAME(_jointsPerVertex,"_jointsPerVertex");
	HX_MARK_MEMBER_NAME(_condensedJointIndexData,"_condensedJointIndexData");
	HX_MARK_MEMBER_NAME(_condensedIndexLookUp,"_condensedIndexLookUp");
	HX_MARK_MEMBER_NAME(_numCondensedJoints,"_numCondensedJoints");
	 ::away3d::core::base::CompactSubGeometry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkinnedSubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bufferFormat,"_bufferFormat");
	HX_VISIT_MEMBER_NAME(_jointWeightsData,"_jointWeightsData");
	HX_VISIT_MEMBER_NAME(_jointIndexData,"_jointIndexData");
	HX_VISIT_MEMBER_NAME(_animatedData,"_animatedData");
	HX_VISIT_MEMBER_NAME(_jointWeightsBuffer,"_jointWeightsBuffer");
	HX_VISIT_MEMBER_NAME(_jointIndexBuffer,"_jointIndexBuffer");
	HX_VISIT_MEMBER_NAME(_jointWeightsInvalid,"_jointWeightsInvalid");
	HX_VISIT_MEMBER_NAME(_jointIndicesInvalid,"_jointIndicesInvalid");
	HX_VISIT_MEMBER_NAME(_jointWeightContext,"_jointWeightContext");
	HX_VISIT_MEMBER_NAME(_jointIndexContext,"_jointIndexContext");
	HX_VISIT_MEMBER_NAME(_jointsPerVertex,"_jointsPerVertex");
	HX_VISIT_MEMBER_NAME(_condensedJointIndexData,"_condensedJointIndexData");
	HX_VISIT_MEMBER_NAME(_condensedIndexLookUp,"_condensedIndexLookUp");
	HX_VISIT_MEMBER_NAME(_numCondensedJoints,"_numCondensedJoints");
	 ::away3d::core::base::CompactSubGeometry_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SkinnedSubGeometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uploadData") ) { return ::hx::Val( uploadData_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"animatedData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animatedData() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_bufferFormat") ) { return ::hx::Val( _bufferFormat ); }
		if (HX_FIELD_EQ(inName,"_animatedData") ) { return ::hx::Val( _animatedData ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"jointIndexData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_jointIndexData() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_jointIndexData") ) { return ::hx::Val( _jointIndexData ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"jointWeightsData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_jointWeightsData() ); }
		if (HX_FIELD_EQ(inName,"_jointsPerVertex") ) { return ::hx::Val( _jointsPerVertex ); }
		if (HX_FIELD_EQ(inName,"get_animatedData") ) { return ::hx::Val( get_animatedData_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_jointWeightsData") ) { return ::hx::Val( _jointWeightsData ); }
		if (HX_FIELD_EQ(inName,"_jointIndexBuffer") ) { return ::hx::Val( _jointIndexBuffer ); }
		if (HX_FIELD_EQ(inName,"condenseIndexData") ) { return ::hx::Val( condenseIndexData_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"numCondensedJoints") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numCondensedJoints() ); }
		if (HX_FIELD_EQ(inName,"_jointIndexContext") ) { return ::hx::Val( _jointIndexContext ); }
		if (HX_FIELD_EQ(inName,"updateAnimatedData") ) { return ::hx::Val( updateAnimatedData_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_jointIndexData") ) { return ::hx::Val( get_jointIndexData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_jointWeightsBuffer") ) { return ::hx::Val( _jointWeightsBuffer ); }
		if (HX_FIELD_EQ(inName,"_jointWeightContext") ) { return ::hx::Val( _jointWeightContext ); }
		if (HX_FIELD_EQ(inName,"_numCondensedJoints") ) { return ::hx::Val( _numCondensedJoints ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"condensedIndexLookUp") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_condensedIndexLookUp() ); }
		if (HX_FIELD_EQ(inName,"_jointWeightsInvalid") ) { return ::hx::Val( _jointWeightsInvalid ); }
		if (HX_FIELD_EQ(inName,"_jointIndicesInvalid") ) { return ::hx::Val( _jointIndicesInvalid ); }
		if (HX_FIELD_EQ(inName,"get_jointWeightsData") ) { return ::hx::Val( get_jointWeightsData_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateJointIndexData") ) { return ::hx::Val( updateJointIndexData_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_condensedIndexLookUp") ) { return ::hx::Val( _condensedIndexLookUp ); }
		if (HX_FIELD_EQ(inName,"getVertexBufferFormat") ) { return ::hx::Val( getVertexBufferFormat_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_numCondensedJoints") ) { return ::hx::Val( get_numCondensedJoints_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateJointWeightsData") ) { return ::hx::Val( updateJointWeightsData_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_condensedJointIndexData") ) { return ::hx::Val( _condensedJointIndexData ); }
		if (HX_FIELD_EQ(inName,"get_condensedIndexLookUp") ) { return ::hx::Val( get_condensedIndexLookUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"activateJointIndexBuffer") ) { return ::hx::Val( activateJointIndexBuffer_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"activateJointWeightsBuffer") ) { return ::hx::Val( activateJointWeightsBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SkinnedSubGeometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_bufferFormat") ) { _bufferFormat=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animatedData") ) { _animatedData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_jointIndexData") ) { _jointIndexData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_jointsPerVertex") ) { _jointsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_jointWeightsData") ) { _jointWeightsData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jointIndexBuffer") ) { _jointIndexBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_jointIndexContext") ) { _jointIndexContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_jointWeightsBuffer") ) { _jointWeightsBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jointWeightContext") ) { _jointWeightContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numCondensedJoints") ) { _numCondensedJoints=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_jointWeightsInvalid") ) { _jointWeightsInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jointIndicesInvalid") ) { _jointIndicesInvalid=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_condensedIndexLookUp") ) { _condensedIndexLookUp=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_condensedJointIndexData") ) { _condensedJointIndexData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkinnedSubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("condensedIndexLookUp",e5,8c,73,84));
	outFields->push(HX_("numCondensedJoints",4a,99,79,6d));
	outFields->push(HX_("animatedData",6d,82,a0,9f));
	outFields->push(HX_("jointWeightsData",9b,22,4d,8b));
	outFields->push(HX_("jointIndexData",b2,3b,53,f3));
	outFields->push(HX_("_bufferFormat",36,13,d2,e4));
	outFields->push(HX_("_jointWeightsData",fa,10,c8,23));
	outFields->push(HX_("_jointIndexData",51,84,b3,3c));
	outFields->push(HX_("_animatedData",4c,15,0f,82));
	outFields->push(HX_("_jointWeightsBuffer",d0,cb,b9,60));
	outFields->push(HX_("_jointIndexBuffer",e7,02,ea,21));
	outFields->push(HX_("_jointWeightsInvalid",27,c2,8f,cb));
	outFields->push(HX_("_jointIndicesInvalid",7b,d0,3f,35));
	outFields->push(HX_("_jointWeightContext",cc,ff,34,94));
	outFields->push(HX_("_jointIndexContext",28,7a,bf,f2));
	outFields->push(HX_("_jointsPerVertex",79,9d,6a,7d));
	outFields->push(HX_("_condensedJointIndexData",3a,cf,b7,91));
	outFields->push(HX_("_condensedIndexLookUp",c4,96,0e,f3));
	outFields->push(HX_("_numCondensedJoints",69,1d,54,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SkinnedSubGeometry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SkinnedSubGeometry_obj,_bufferFormat),HX_("_bufferFormat",36,13,d2,e4)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointWeightsData),HX_("_jointWeightsData",fa,10,c8,23)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointIndexData),HX_("_jointIndexData",51,84,b3,3c)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_animatedData),HX_("_animatedData",4c,15,0f,82)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointWeightsBuffer),HX_("_jointWeightsBuffer",d0,cb,b9,60)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointIndexBuffer),HX_("_jointIndexBuffer",e7,02,ea,21)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointWeightsInvalid),HX_("_jointWeightsInvalid",27,c2,8f,cb)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointIndicesInvalid),HX_("_jointIndicesInvalid",7b,d0,3f,35)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointWeightContext),HX_("_jointWeightContext",cc,ff,34,94)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_jointIndexContext),HX_("_jointIndexContext",28,7a,bf,f2)},
	{::hx::fsInt,(int)offsetof(SkinnedSubGeometry_obj,_jointsPerVertex),HX_("_jointsPerVertex",79,9d,6a,7d)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_condensedJointIndexData),HX_("_condensedJointIndexData",3a,cf,b7,91)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(SkinnedSubGeometry_obj,_condensedIndexLookUp),HX_("_condensedIndexLookUp",c4,96,0e,f3)},
	{::hx::fsInt,(int)offsetof(SkinnedSubGeometry_obj,_numCondensedJoints),HX_("_numCondensedJoints",69,1d,54,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SkinnedSubGeometry_obj_sStaticStorageInfo = 0;
#endif

static ::String SkinnedSubGeometry_obj_sMemberFields[] = {
	HX_("_bufferFormat",36,13,d2,e4),
	HX_("_jointWeightsData",fa,10,c8,23),
	HX_("_jointIndexData",51,84,b3,3c),
	HX_("_animatedData",4c,15,0f,82),
	HX_("_jointWeightsBuffer",d0,cb,b9,60),
	HX_("_jointIndexBuffer",e7,02,ea,21),
	HX_("_jointWeightsInvalid",27,c2,8f,cb),
	HX_("_jointIndicesInvalid",7b,d0,3f,35),
	HX_("_jointWeightContext",cc,ff,34,94),
	HX_("_jointIndexContext",28,7a,bf,f2),
	HX_("_jointsPerVertex",79,9d,6a,7d),
	HX_("_condensedJointIndexData",3a,cf,b7,91),
	HX_("_condensedIndexLookUp",c4,96,0e,f3),
	HX_("_numCondensedJoints",69,1d,54,4d),
	HX_("getVertexBufferFormat",11,b0,e5,03),
	HX_("get_condensedIndexLookUp",6e,aa,0f,c7),
	HX_("get_numCondensedJoints",93,12,0e,c7),
	HX_("get_animatedData",f6,6e,3f,a4),
	HX_("updateAnimatedData",16,be,ad,17),
	HX_("activateJointWeightsBuffer",44,70,55,de),
	HX_("activateJointIndexBuffer",5b,e2,b7,e8),
	HX_("uploadData",cb,e0,a9,de),
	HX_("clone",5d,13,63,48),
	HX_("dispose",9f,80,4c,bb),
	HX_("condenseIndexData",7f,46,c1,38),
	HX_("get_jointWeightsData",a4,87,b7,a9),
	HX_("updateJointWeightsData",c4,e6,cb,80),
	HX_("get_jointIndexData",7b,1c,ed,8e),
	HX_("updateJointIndexData",9b,73,e5,75),
	::String(null()) };

::hx::Class SkinnedSubGeometry_obj::__mClass;

void SkinnedSubGeometry_obj::__register()
{
	SkinnedSubGeometry_obj _hx_dummy;
	SkinnedSubGeometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.base.SkinnedSubGeometry",9f,ee,1e,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SkinnedSubGeometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SkinnedSubGeometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SkinnedSubGeometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SkinnedSubGeometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace base
