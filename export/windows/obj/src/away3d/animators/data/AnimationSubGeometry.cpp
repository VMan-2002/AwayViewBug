#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationSubGeometry
#include <away3d/animators/data/AnimationSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_animators_data_ParticleAnimationData
#include <away3d/animators/data/ParticleAnimationData.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_13_new,"away3d.animators.data.AnimationSubGeometry","new",0x5e5a6e13,"away3d.animators.data.AnimationSubGeometry.new","away3d/animators/data/AnimationSubGeometry.hx",13,0xd5507f1e)
HX_LOCAL_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_42_createVertexData,"away3d.animators.data.AnimationSubGeometry","createVertexData",0x49d9ec37,"away3d.animators.data.AnimationSubGeometry.createVertexData","away3d/animators/data/AnimationSubGeometry.hx",42,0xd5507f1e)
HX_LOCAL_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_49_activateVertexBuffer,"away3d.animators.data.AnimationSubGeometry","activateVertexBuffer",0xa3d520c4,"away3d.animators.data.AnimationSubGeometry.activateVertexBuffer","away3d/animators/data/AnimationSubGeometry.hx",49,0xd5507f1e)
HX_LOCAL_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_68_dispose,"away3d.animators.data.AnimationSubGeometry","dispose",0x8e1f73d2,"away3d.animators.data.AnimationSubGeometry.dispose","away3d/animators/data/AnimationSubGeometry.hx",68,0xd5507f1e)
HX_LOCAL_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_78_invalidateBuffer,"away3d.animators.data.AnimationSubGeometry","invalidateBuffer",0x1cc8a748,"away3d.animators.data.AnimationSubGeometry.invalidateBuffer","away3d/animators/data/AnimationSubGeometry.hx",78,0xd5507f1e)
HX_LOCAL_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_84_get_vertexData,"away3d.animators.data.AnimationSubGeometry","get_vertexData",0x9be39124,"away3d.animators.data.AnimationSubGeometry.get_vertexData","away3d/animators/data/AnimationSubGeometry.hx",84,0xd5507f1e)
HX_LOCAL_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_89_get_numVertices,"away3d.animators.data.AnimationSubGeometry","get_numVertices",0x38a3a629,"away3d.animators.data.AnimationSubGeometry.get_numVertices","away3d/animators/data/AnimationSubGeometry.hx",89,0xd5507f1e)
HX_LOCAL_STACK_FRAME(_hx_pos_359dfd4ba9005f0d_94_get_totalLenOfOneVertex,"away3d.animators.data.AnimationSubGeometry","get_totalLenOfOneVertex",0x702c272c,"away3d.animators.data.AnimationSubGeometry.get_totalLenOfOneVertex","away3d/animators/data/AnimationSubGeometry.hx",94,0xd5507f1e)
namespace away3d{
namespace animators{
namespace data{

void AnimationSubGeometry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_13_new)
HXLINE(  33)		int length = null();
HXDLIN(  33)		bool fixed = null();
HXDLIN(  33)		::Array< ::Dynamic> array = null();
HXDLIN(  33)		this->animationParticles =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  31)		this->previousTime = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  29)		this->numProcessedVertices = 0;
HXLINE(  23)		bool fixed1 = null();
HXDLIN(  23)		::Array< bool > array1 = null();
HXDLIN(  23)		this->_bufferDirty =  ::openfl::_Vector::BoolVector_obj::__alloc( HX_CTX ,8,fixed1,array1);
HXLINE(  22)		bool fixed2 = null();
HXDLIN(  22)		::Array< ::Dynamic> array2 = null();
HXDLIN(  22)		this->_bufferContext =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed2,array2,true);
HXLINE(  21)		bool fixed3 = null();
HXDLIN(  21)		::Array< ::Dynamic> array3 = null();
HXDLIN(  21)		this->_vertexBuffer =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed3,array3,true);
HXLINE(  38)		this->_bufferDirty->set(0,true);
HXDLIN(  38)		this->_bufferDirty->set(1,true);
HXDLIN(  38)		this->_bufferDirty->set(2,true);
HXDLIN(  38)		this->_bufferDirty->set(3,true);
HXDLIN(  38)		this->_bufferDirty->set(4,true);
HXDLIN(  38)		this->_bufferDirty->set(5,true);
HXDLIN(  38)		this->_bufferDirty->set(6,true);
HXDLIN(  38)		this->_bufferDirty->set(7,true);
            	}

Dynamic AnimationSubGeometry_obj::__CreateEmpty() { return new AnimationSubGeometry_obj; }

void *AnimationSubGeometry_obj::_hx_vtable = 0;

Dynamic AnimationSubGeometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationSubGeometry_obj > _hx_result = new AnimationSubGeometry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimationSubGeometry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c9294e1;
}

void AnimationSubGeometry_obj::createVertexData(int numVertices,int totalLenOfOneVertex){
            	HX_GC_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_42_createVertexData)
HXLINE(  43)		this->_numVertices = numVertices;
HXLINE(  44)		this->_totalLenOfOneVertex = totalLenOfOneVertex;
HXLINE(  45)		bool fixed = null();
HXDLIN(  45)		::Array< Float > array = null();
HXDLIN(  45)		this->_vertexData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,(numVertices * totalLenOfOneVertex),fixed,array,true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationSubGeometry_obj,createVertexData,(void))

void AnimationSubGeometry_obj::activateVertexBuffer(int index,int bufferOffset, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::Dynamic format){
            	HX_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_49_activateVertexBuffer)
HXLINE(  50)		int contextIndex = stage3DProxy->get_stage3DIndex();
HXLINE(  51)		 ::openfl::display3D::Context3D context = stage3DProxy->get_context3D();
HXLINE(  53)		 ::openfl::display3D::VertexBuffer3D buffer = this->_vertexBuffer->get(contextIndex).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXLINE(  54)		bool _hx_tmp;
HXDLIN(  54)		if (::hx::IsNotNull( buffer )) {
HXLINE(  54)			_hx_tmp = ::hx::IsInstanceNotEq( this->_bufferContext->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context );
            		}
            		else {
HXLINE(  54)			_hx_tmp = true;
            		}
HXDLIN(  54)		if (_hx_tmp) {
HXLINE(  55)			::Dynamic this1 = this->_vertexBuffer;
HXDLIN(  55)			buffer = ( ( ::openfl::_Vector::ObjectVector)(this1) )->set(contextIndex,context->createVertexBuffer(this->_numVertices,this->_totalLenOfOneVertex,null())).StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXLINE(  56)			this->_bufferContext->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE(  57)			this->_bufferDirty->set(contextIndex,true);
            		}
HXLINE(  59)		if (this->_bufferDirty->get(contextIndex)) {
HXLINE(  60)			buffer->uploadFromVector(this->_vertexData,0,this->_numVertices);
HXLINE(  61)			this->_bufferDirty->set(contextIndex,false);
            		}
HXLINE(  63)		context->setVertexBufferAt(index,buffer,bufferOffset,format);
            	}


HX_DEFINE_DYNAMIC_FUNC4(AnimationSubGeometry_obj,activateVertexBuffer,(void))

void AnimationSubGeometry_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_68_dispose)
HXDLIN(  68)		while((this->_vertexBuffer->get_length() > 0)){
HXLINE(  69)			 ::openfl::display3D::VertexBuffer3D vertexBuffer = this->_vertexBuffer->pop().StaticCast<  ::openfl::display3D::VertexBuffer3D >();
HXLINE(  71)			if (::hx::IsNotNull( vertexBuffer )) {
HXLINE(  72)				vertexBuffer->dispose();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,dispose,(void))

void AnimationSubGeometry_obj::invalidateBuffer(){
            	HX_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_78_invalidateBuffer)
HXLINE(  79)		this->_bufferDirty->set(0,true);
HXDLIN(  79)		this->_bufferDirty->set(1,true);
HXDLIN(  79)		this->_bufferDirty->set(2,true);
HXDLIN(  79)		this->_bufferDirty->set(3,true);
HXDLIN(  79)		this->_bufferDirty->set(4,true);
HXDLIN(  79)		this->_bufferDirty->set(5,true);
HXDLIN(  79)		this->_bufferDirty->set(6,true);
HXDLIN(  79)		this->_bufferDirty->set(7,true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,invalidateBuffer,(void))

 ::openfl::_Vector::FloatVector AnimationSubGeometry_obj::get_vertexData(){
            	HX_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_84_get_vertexData)
HXDLIN(  84)		return this->_vertexData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,get_vertexData,return )

int AnimationSubGeometry_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_89_get_numVertices)
HXDLIN(  89)		return this->_numVertices;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,get_numVertices,return )

int AnimationSubGeometry_obj::get_totalLenOfOneVertex(){
            	HX_STACKFRAME(&_hx_pos_359dfd4ba9005f0d_94_get_totalLenOfOneVertex)
HXDLIN(  94)		return this->_totalLenOfOneVertex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationSubGeometry_obj,get_totalLenOfOneVertex,return )


::hx::ObjectPtr< AnimationSubGeometry_obj > AnimationSubGeometry_obj::__new() {
	::hx::ObjectPtr< AnimationSubGeometry_obj > __this = new AnimationSubGeometry_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AnimationSubGeometry_obj > AnimationSubGeometry_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AnimationSubGeometry_obj *__this = (AnimationSubGeometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationSubGeometry_obj), true, "away3d.animators.data.AnimationSubGeometry"));
	*(void **)__this = AnimationSubGeometry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimationSubGeometry_obj::AnimationSubGeometry_obj()
{
}

void AnimationSubGeometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationSubGeometry);
	HX_MARK_MEMBER_NAME(_vertexData,"_vertexData");
	HX_MARK_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_MARK_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_MARK_MEMBER_NAME(_bufferDirty,"_bufferDirty");
	HX_MARK_MEMBER_NAME(_numVertices,"_numVertices");
	HX_MARK_MEMBER_NAME(_totalLenOfOneVertex,"_totalLenOfOneVertex");
	HX_MARK_MEMBER_NAME(numProcessedVertices,"numProcessedVertices");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	HX_MARK_MEMBER_NAME(animationParticles,"animationParticles");
	HX_MARK_END_CLASS();
}

void AnimationSubGeometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vertexData,"_vertexData");
	HX_VISIT_MEMBER_NAME(_vertexBuffer,"_vertexBuffer");
	HX_VISIT_MEMBER_NAME(_bufferContext,"_bufferContext");
	HX_VISIT_MEMBER_NAME(_bufferDirty,"_bufferDirty");
	HX_VISIT_MEMBER_NAME(_numVertices,"_numVertices");
	HX_VISIT_MEMBER_NAME(_totalLenOfOneVertex,"_totalLenOfOneVertex");
	HX_VISIT_MEMBER_NAME(numProcessedVertices,"numProcessedVertices");
	HX_VISIT_MEMBER_NAME(previousTime,"previousTime");
	HX_VISIT_MEMBER_NAME(animationParticles,"animationParticles");
}

::hx::Val AnimationSubGeometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vertexData() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numVertices() ); }
		if (HX_FIELD_EQ(inName,"_vertexData") ) { return ::hx::Val( _vertexData ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bufferDirty") ) { return ::hx::Val( _bufferDirty ); }
		if (HX_FIELD_EQ(inName,"_numVertices") ) { return ::hx::Val( _numVertices ); }
		if (HX_FIELD_EQ(inName,"previousTime") ) { return ::hx::Val( previousTime ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { return ::hx::Val( _vertexBuffer ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { return ::hx::Val( _bufferContext ); }
		if (HX_FIELD_EQ(inName,"get_vertexData") ) { return ::hx::Val( get_vertexData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createVertexData") ) { return ::hx::Val( createVertexData_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateBuffer") ) { return ::hx::Val( invalidateBuffer_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"animationParticles") ) { return ::hx::Val( animationParticles ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"totalLenOfOneVertex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_totalLenOfOneVertex() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_totalLenOfOneVertex") ) { return ::hx::Val( _totalLenOfOneVertex ); }
		if (HX_FIELD_EQ(inName,"numProcessedVertices") ) { return ::hx::Val( numProcessedVertices ); }
		if (HX_FIELD_EQ(inName,"activateVertexBuffer") ) { return ::hx::Val( activateVertexBuffer_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_totalLenOfOneVertex") ) { return ::hx::Val( get_totalLenOfOneVertex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationSubGeometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { _vertexData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bufferDirty") ) { _bufferDirty=inValue.Cast<  ::openfl::_Vector::BoolVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numVertices") ) { _numVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_vertexBuffer") ) { _vertexBuffer=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bufferContext") ) { _bufferContext=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"animationParticles") ) { animationParticles=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_totalLenOfOneVertex") ) { _totalLenOfOneVertex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numProcessedVertices") ) { numProcessedVertices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationSubGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertexData",ae,df,1f,d3));
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("totalLenOfOneVertex",62,b7,1a,ca));
	outFields->push(HX_("_vertexData",cd,ac,a9,a5));
	outFields->push(HX_("_vertexBuffer",63,42,18,53));
	outFields->push(HX_("_bufferContext",10,91,47,8d));
	outFields->push(HX_("_bufferDirty",f3,90,25,dd));
	outFields->push(HX_("_numVertices",60,be,35,bc));
	outFields->push(HX_("_totalLenOfOneVertex",63,ce,73,c9));
	outFields->push(HX_("numProcessedVertices",81,e1,da,1d));
	outFields->push(HX_("previousTime",e4,9b,9e,f3));
	outFields->push(HX_("animationParticles",c9,2f,b7,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationSubGeometry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(AnimationSubGeometry_obj,_vertexData),HX_("_vertexData",cd,ac,a9,a5)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(AnimationSubGeometry_obj,_vertexBuffer),HX_("_vertexBuffer",63,42,18,53)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(AnimationSubGeometry_obj,_bufferContext),HX_("_bufferContext",10,91,47,8d)},
	{::hx::fsObject /*  ::openfl::_Vector::BoolVector */ ,(int)offsetof(AnimationSubGeometry_obj,_bufferDirty),HX_("_bufferDirty",f3,90,25,dd)},
	{::hx::fsInt,(int)offsetof(AnimationSubGeometry_obj,_numVertices),HX_("_numVertices",60,be,35,bc)},
	{::hx::fsInt,(int)offsetof(AnimationSubGeometry_obj,_totalLenOfOneVertex),HX_("_totalLenOfOneVertex",63,ce,73,c9)},
	{::hx::fsInt,(int)offsetof(AnimationSubGeometry_obj,numProcessedVertices),HX_("numProcessedVertices",81,e1,da,1d)},
	{::hx::fsFloat,(int)offsetof(AnimationSubGeometry_obj,previousTime),HX_("previousTime",e4,9b,9e,f3)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(AnimationSubGeometry_obj,animationParticles),HX_("animationParticles",c9,2f,b7,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimationSubGeometry_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationSubGeometry_obj_sMemberFields[] = {
	HX_("_vertexData",cd,ac,a9,a5),
	HX_("_vertexBuffer",63,42,18,53),
	HX_("_bufferContext",10,91,47,8d),
	HX_("_bufferDirty",f3,90,25,dd),
	HX_("_numVertices",60,be,35,bc),
	HX_("_totalLenOfOneVertex",63,ce,73,c9),
	HX_("numProcessedVertices",81,e1,da,1d),
	HX_("previousTime",e4,9b,9e,f3),
	HX_("animationParticles",c9,2f,b7,69),
	HX_("createVertexData",ca,5d,4d,08),
	HX_("activateVertexBuffer",d7,57,3c,03),
	HX_("dispose",9f,80,4c,bb),
	HX_("invalidateBuffer",db,18,3c,db),
	HX_("get_vertexData",f7,67,15,49),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_totalLenOfOneVertex",f9,5d,70,d2),
	::String(null()) };

::hx::Class AnimationSubGeometry_obj::__mClass;

void AnimationSubGeometry_obj::__register()
{
	AnimationSubGeometry_obj _hx_dummy;
	AnimationSubGeometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.animators.data.AnimationSubGeometry",a1,68,47,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationSubGeometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationSubGeometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationSubGeometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationSubGeometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace animators
} // end namespace data
