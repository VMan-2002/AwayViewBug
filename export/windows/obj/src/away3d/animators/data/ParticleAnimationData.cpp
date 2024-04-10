#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_data_ParticleAnimationData
#include <away3d/animators/data/ParticleAnimationData.h>
#endif
#ifndef INCLUDED_away3d_core_base_data_ParticleData
#include <away3d/core/base/data/ParticleData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5f9c971256062952_19_new,"away3d.animators.data.ParticleAnimationData","new",0x5c70a447,"away3d.animators.data.ParticleAnimationData.new","away3d/animators/data/ParticleAnimationData.hx",19,0xbb858b88)
namespace away3d{
namespace animators{
namespace data{

void ParticleAnimationData_obj::__construct(int index,Float startTime,Float duration,Float delay, ::away3d::core::base::data::ParticleData particle){
            	HX_STACKFRAME(&_hx_pos_5f9c971256062952_19_new)
HXLINE(  20)		this->index = index;
HXLINE(  21)		this->startTime = startTime;
HXLINE(  22)		this->totalTime = (duration + delay);
HXLINE(  23)		this->duration = duration;
HXLINE(  24)		this->delay = delay;
HXLINE(  25)		this->startVertexIndex = particle->startVertexIndex;
HXLINE(  26)		this->numVertices = particle->numVertices;
            	}

Dynamic ParticleAnimationData_obj::__CreateEmpty() { return new ParticleAnimationData_obj; }

void *ParticleAnimationData_obj::_hx_vtable = 0;

Dynamic ParticleAnimationData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ParticleAnimationData_obj > _hx_result = new ParticleAnimationData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ParticleAnimationData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x021f7a89;
}


::hx::ObjectPtr< ParticleAnimationData_obj > ParticleAnimationData_obj::__new(int index,Float startTime,Float duration,Float delay, ::away3d::core::base::data::ParticleData particle) {
	::hx::ObjectPtr< ParticleAnimationData_obj > __this = new ParticleAnimationData_obj();
	__this->__construct(index,startTime,duration,delay,particle);
	return __this;
}

::hx::ObjectPtr< ParticleAnimationData_obj > ParticleAnimationData_obj::__alloc(::hx::Ctx *_hx_ctx,int index,Float startTime,Float duration,Float delay, ::away3d::core::base::data::ParticleData particle) {
	ParticleAnimationData_obj *__this = (ParticleAnimationData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ParticleAnimationData_obj), false, "away3d.animators.data.ParticleAnimationData"));
	*(void **)__this = ParticleAnimationData_obj::_hx_vtable;
	__this->__construct(index,startTime,duration,delay,particle);
	return __this;
}

ParticleAnimationData_obj::ParticleAnimationData_obj()
{
}

::hx::Val ParticleAnimationData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
		if (HX_FIELD_EQ(inName,"totalTime") ) { return ::hx::Val( totalTime ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return ::hx::Val( numVertices ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { return ::hx::Val( startVertexIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ParticleAnimationData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalTime") ) { totalTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startVertexIndex") ) { startVertexIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleAnimationData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("startTime",8f,45,f0,05));
	outFields->push(HX_("totalTime",f1,7d,b7,69));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("startVertexIndex",cc,ff,4b,51));
	outFields->push(HX_("numVertices",5f,10,2c,56));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ParticleAnimationData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ParticleAnimationData_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsFloat,(int)offsetof(ParticleAnimationData_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{::hx::fsFloat,(int)offsetof(ParticleAnimationData_obj,totalTime),HX_("totalTime",f1,7d,b7,69)},
	{::hx::fsFloat,(int)offsetof(ParticleAnimationData_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsFloat,(int)offsetof(ParticleAnimationData_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsInt,(int)offsetof(ParticleAnimationData_obj,startVertexIndex),HX_("startVertexIndex",cc,ff,4b,51)},
	{::hx::fsInt,(int)offsetof(ParticleAnimationData_obj,numVertices),HX_("numVertices",5f,10,2c,56)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ParticleAnimationData_obj_sStaticStorageInfo = 0;
#endif

static ::String ParticleAnimationData_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("startTime",8f,45,f0,05),
	HX_("totalTime",f1,7d,b7,69),
	HX_("duration",54,0f,8e,14),
	HX_("delay",83,d7,26,d7),
	HX_("startVertexIndex",cc,ff,4b,51),
	HX_("numVertices",5f,10,2c,56),
	::String(null()) };

::hx::Class ParticleAnimationData_obj::__mClass;

void ParticleAnimationData_obj::__register()
{
	ParticleAnimationData_obj _hx_dummy;
	ParticleAnimationData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.animators.data.ParticleAnimationData",d5,74,91,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ParticleAnimationData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ParticleAnimationData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ParticleAnimationData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ParticleAnimationData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace animators
} // end namespace data
