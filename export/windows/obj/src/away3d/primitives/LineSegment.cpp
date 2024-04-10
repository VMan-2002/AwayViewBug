#include <hxcpp.h>

#ifndef INCLUDED_away3d_primitives_LineSegment
#include <away3d/primitives/LineSegment.h>
#endif
#ifndef INCLUDED_away3d_primitives_data_Segment
#include <away3d/primitives/data/Segment.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38c8d14c7fb34d53_25_new,"away3d.primitives.LineSegment","new",0x43cdb63e,"away3d.primitives.LineSegment.new","away3d/primitives/LineSegment.hx",25,0xbc0e6092)
HX_LOCAL_STACK_FRAME(_hx_pos_38c8d14c7fb34d53_13_boot,"away3d.primitives.LineSegment","boot",0x084ac094,"away3d.primitives.LineSegment.boot","away3d/primitives/LineSegment.hx",13,0xbc0e6092)
namespace away3d{
namespace primitives{

void LineSegment_obj::__construct( ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1,::hx::Null< int >  __o_color0,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_thickness){
            		int color0 = __o_color0.Default(3355443);
            		int color1 = __o_color1.Default(3355443);
            		Float thickness = __o_thickness.Default(1);
            	HX_STACKFRAME(&_hx_pos_38c8d14c7fb34d53_25_new)
HXDLIN(  25)		super::__construct(v0,v1,null(),color0,color1,thickness);
            	}

Dynamic LineSegment_obj::__CreateEmpty() { return new LineSegment_obj; }

void *LineSegment_obj::_hx_vtable = 0;

Dynamic LineSegment_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LineSegment_obj > _hx_result = new LineSegment_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool LineSegment_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x34078196) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x34078196;
	} else {
		return inClassId==(int)0x56388ab4;
	}
}

::String LineSegment_obj::TYPE;


::hx::ObjectPtr< LineSegment_obj > LineSegment_obj::__new( ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1,::hx::Null< int >  __o_color0,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_thickness) {
	::hx::ObjectPtr< LineSegment_obj > __this = new LineSegment_obj();
	__this->__construct(v0,v1,__o_color0,__o_color1,__o_thickness);
	return __this;
}

::hx::ObjectPtr< LineSegment_obj > LineSegment_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1,::hx::Null< int >  __o_color0,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_thickness) {
	LineSegment_obj *__this = (LineSegment_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LineSegment_obj), true, "away3d.primitives.LineSegment"));
	*(void **)__this = LineSegment_obj::_hx_vtable;
	__this->__construct(v0,v1,__o_color0,__o_color1,__o_thickness);
	return __this;
}

LineSegment_obj::LineSegment_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LineSegment_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LineSegment_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LineSegment_obj::TYPE,HX_("TYPE",ba,ba,c9,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LineSegment_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineSegment_obj::TYPE,"TYPE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineSegment_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineSegment_obj::TYPE,"TYPE");
};

#endif

::hx::Class LineSegment_obj::__mClass;

static ::String LineSegment_obj_sStaticFields[] = {
	HX_("TYPE",ba,ba,c9,37),
	::String(null())
};

void LineSegment_obj::__register()
{
	LineSegment_obj _hx_dummy;
	LineSegment_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.primitives.LineSegment",4c,7f,f2,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineSegment_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LineSegment_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LineSegment_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineSegment_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineSegment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineSegment_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LineSegment_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_38c8d14c7fb34d53_13_boot)
HXDLIN(  13)		TYPE = HX_("line",f4,17,b3,47);
            	}
}

} // end namespace away3d
} // end namespace primitives
