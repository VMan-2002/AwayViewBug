#include <hxcpp.h>

#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_SubSet
#include <away3d/entities/SubSet.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb986127e791bf24_665_new,"away3d.entities.SubSet","new",0x3bdcf2f2,"away3d.entities.SubSet.new","away3d/entities/SegmentSet.hx",665,0x98422451)
HX_LOCAL_STACK_FRAME(_hx_pos_eb986127e791bf24_668_dispose,"away3d.entities.SubSet","dispose",0x9f8f5431,"away3d.entities.SubSet.dispose","away3d/entities/SegmentSet.hx",668,0x98422451)
namespace away3d{
namespace entities{

void SubSet_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_eb986127e791bf24_665_new)
            	}

Dynamic SubSet_obj::__CreateEmpty() { return new SubSet_obj; }

void *SubSet_obj::_hx_vtable = 0;

Dynamic SubSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SubSet_obj > _hx_result = new SubSet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SubSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c8fc922;
}

void SubSet_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_eb986127e791bf24_668_dispose)
HXLINE( 669)		this->vertices = null();
HXLINE( 670)		if (::hx::IsNotNull( this->vertexBuffer )) {
HXLINE( 671)			::away3d::core::managers::Stage3DProxy_obj::disposeVertexBuffer(this->vertexBuffer);
            		}
HXLINE( 672)		if (::hx::IsNotNull( this->indexBuffer )) {
HXLINE( 673)			::away3d::core::managers::Stage3DProxy_obj::disposeIndexBuffer(this->indexBuffer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SubSet_obj,dispose,(void))


::hx::ObjectPtr< SubSet_obj > SubSet_obj::__new() {
	::hx::ObjectPtr< SubSet_obj > __this = new SubSet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SubSet_obj > SubSet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SubSet_obj *__this = (SubSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SubSet_obj), true, "away3d.entities.SubSet"));
	*(void **)__this = SubSet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SubSet_obj::SubSet_obj()
{
}

void SubSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubSet);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_MEMBER_NAME(vertexBufferDirty,"vertexBufferDirty");
	HX_MARK_MEMBER_NAME(indexBufferDirty,"indexBufferDirty");
	HX_MARK_MEMBER_NAME(vertexContext3D,"vertexContext3D");
	HX_MARK_MEMBER_NAME(indexContext3D,"indexContext3D");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(lineCount,"lineCount");
	HX_MARK_END_CLASS();
}

void SubSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
	HX_VISIT_MEMBER_NAME(vertexBufferDirty,"vertexBufferDirty");
	HX_VISIT_MEMBER_NAME(indexBufferDirty,"indexBufferDirty");
	HX_VISIT_MEMBER_NAME(vertexContext3D,"vertexContext3D");
	HX_VISIT_MEMBER_NAME(indexContext3D,"indexContext3D");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(lineCount,"lineCount");
}

::hx::Val SubSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return ::hx::Val( indices ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return ::hx::Val( vertices ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineCount") ) { return ::hx::Val( lineCount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return ::hx::Val( numIndices ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return ::hx::Val( numVertices ); }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return ::hx::Val( indexBuffer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return ::hx::Val( vertexBuffer ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexContext3D") ) { return ::hx::Val( indexContext3D ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexContext3D") ) { return ::hx::Val( vertexContext3D ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexBufferDirty") ) { return ::hx::Val( indexBufferDirty ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"vertexBufferDirty") ) { return ::hx::Val( vertexBufferDirty ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SubSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineCount") ) { lineCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexContext3D") ) { indexContext3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexContext3D") ) { vertexContext3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexBufferDirty") ) { indexBufferDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"vertexBufferDirty") ) { vertexBufferDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertices",f9,bf,15,6a));
	outFields->push(HX_("numVertices",5f,10,2c,56));
	outFields->push(HX_("indices",27,47,54,e3));
	outFields->push(HX_("numIndices",81,85,74,13));
	outFields->push(HX_("vertexBufferDirty",ee,51,f5,32));
	outFields->push(HX_("indexBufferDirty",00,75,8f,74));
	outFields->push(HX_("vertexContext3D",5c,d4,4a,08));
	outFields->push(HX_("indexContext3D",ee,ae,0b,34));
	outFields->push(HX_("vertexBuffer",84,af,a9,70));
	outFields->push(HX_("indexBuffer",b2,65,a6,f5));
	outFields->push(HX_("lineCount",3b,48,5e,91));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SubSet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(SubSet_obj,vertices),HX_("vertices",f9,bf,15,6a)},
	{::hx::fsInt,(int)offsetof(SubSet_obj,numVertices),HX_("numVertices",5f,10,2c,56)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(SubSet_obj,indices),HX_("indices",27,47,54,e3)},
	{::hx::fsInt,(int)offsetof(SubSet_obj,numIndices),HX_("numIndices",81,85,74,13)},
	{::hx::fsBool,(int)offsetof(SubSet_obj,vertexBufferDirty),HX_("vertexBufferDirty",ee,51,f5,32)},
	{::hx::fsBool,(int)offsetof(SubSet_obj,indexBufferDirty),HX_("indexBufferDirty",00,75,8f,74)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(SubSet_obj,vertexContext3D),HX_("vertexContext3D",5c,d4,4a,08)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(SubSet_obj,indexContext3D),HX_("indexContext3D",ee,ae,0b,34)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(SubSet_obj,vertexBuffer),HX_("vertexBuffer",84,af,a9,70)},
	{::hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(SubSet_obj,indexBuffer),HX_("indexBuffer",b2,65,a6,f5)},
	{::hx::fsInt,(int)offsetof(SubSet_obj,lineCount),HX_("lineCount",3b,48,5e,91)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SubSet_obj_sStaticStorageInfo = 0;
#endif

static ::String SubSet_obj_sMemberFields[] = {
	HX_("vertices",f9,bf,15,6a),
	HX_("numVertices",5f,10,2c,56),
	HX_("indices",27,47,54,e3),
	HX_("numIndices",81,85,74,13),
	HX_("vertexBufferDirty",ee,51,f5,32),
	HX_("indexBufferDirty",00,75,8f,74),
	HX_("vertexContext3D",5c,d4,4a,08),
	HX_("indexContext3D",ee,ae,0b,34),
	HX_("vertexBuffer",84,af,a9,70),
	HX_("indexBuffer",b2,65,a6,f5),
	HX_("lineCount",3b,48,5e,91),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class SubSet_obj::__mClass;

void SubSet_obj::__register()
{
	SubSet_obj _hx_dummy;
	SubSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.entities.SubSet",00,52,90,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SubSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SubSet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SubSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SubSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace entities
