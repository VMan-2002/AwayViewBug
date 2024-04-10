#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_filters_Filter3DBase
#include <away3d/filters/Filter3DBase.h>
#endif
#ifndef INCLUDED_away3d_filters_tasks_Filter3DTaskBase
#include <away3d/filters/tasks/Filter3DTaskBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_24_new,"away3d.filters.Filter3DBase","new",0xa8be35ce,"away3d.filters.Filter3DBase.new","away3d/filters/Filter3DBase.hx",24,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_29_get_requireDepthRender,"away3d.filters.Filter3DBase","get_requireDepthRender",0xb24b35ef,"away3d.filters.Filter3DBase.get_requireDepthRender","away3d/filters/Filter3DBase.hx",29,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_33_addTask,"away3d.filters.Filter3DBase","addTask",0x7d48b674,"away3d.filters.Filter3DBase.addTask","away3d/filters/Filter3DBase.hx",33,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_41_get_tasks,"away3d.filters.Filter3DBase","get_tasks",0xf89725d3,"away3d.filters.Filter3DBase.get_tasks","away3d/filters/Filter3DBase.hx",41,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_46_getMainInputTexture,"away3d.filters.Filter3DBase","getMainInputTexture",0xe0f4a1ee,"away3d.filters.Filter3DBase.getMainInputTexture","away3d/filters/Filter3DBase.hx",46,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_51_get_textureWidth,"away3d.filters.Filter3DBase","get_textureWidth",0xad559d86,"away3d.filters.Filter3DBase.get_textureWidth","away3d/filters/Filter3DBase.hx",51,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_55_set_textureWidth,"away3d.filters.Filter3DBase","set_textureWidth",0x03978afa,"away3d.filters.Filter3DBase.set_textureWidth","away3d/filters/Filter3DBase.hx",55,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_66_get_textureHeight,"away3d.filters.Filter3DBase","get_textureHeight",0xb3e3b067,"away3d.filters.Filter3DBase.get_textureHeight","away3d/filters/Filter3DBase.hx",66,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_70_set_textureHeight,"away3d.filters.Filter3DBase","set_textureHeight",0xd7518873,"away3d.filters.Filter3DBase.set_textureHeight","away3d/filters/Filter3DBase.hx",70,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_81_setRenderTargets,"away3d.filters.Filter3DBase","setRenderTargets",0x2a6c4c1c,"away3d.filters.Filter3DBase.setRenderTargets","away3d/filters/Filter3DBase.hx",81,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_86_dispose,"away3d.filters.Filter3DBase","dispose",0xaf61350d,"away3d.filters.Filter3DBase.dispose","away3d/filters/Filter3DBase.hx",86,0x363106a0)
HX_LOCAL_STACK_FRAME(_hx_pos_a5c7c0fc8463f7d1_91_update,"away3d.filters.Filter3DBase","update",0x881db95b,"away3d.filters.Filter3DBase.update","away3d/filters/Filter3DBase.hx",91,0x363106a0)
namespace away3d{
namespace filters{

void Filter3DBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_24_new)
HXDLIN(  24)		int length = null();
HXDLIN(  24)		bool fixed = null();
HXDLIN(  24)		::Array< ::Dynamic> array = null();
HXDLIN(  24)		this->_tasks =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic Filter3DBase_obj::__CreateEmpty() { return new Filter3DBase_obj; }

void *Filter3DBase_obj::_hx_vtable = 0;

Dynamic Filter3DBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter3DBase_obj > _hx_result = new Filter3DBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Filter3DBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f56358e;
}

bool Filter3DBase_obj::get_requireDepthRender(){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_29_get_requireDepthRender)
HXDLIN(  29)		return this->_requireDepthRender;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_requireDepthRender,return )

void Filter3DBase_obj::addTask( ::away3d::filters::tasks::Filter3DTaskBase filter){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_33_addTask)
HXLINE(  34)		this->_tasks->push(filter);
HXLINE(  35)		if (!(this->_requireDepthRender)) {
HXLINE(  36)			this->_requireDepthRender = filter->get_requireDepthRender();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,addTask,(void))

 ::openfl::_Vector::ObjectVector Filter3DBase_obj::get_tasks(){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_41_get_tasks)
HXDLIN(  41)		return this->_tasks;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_tasks,return )

 ::openfl::display3D::textures::Texture Filter3DBase_obj::getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_46_getMainInputTexture)
HXDLIN(  46)		return this->_tasks->get(0).StaticCast<  ::away3d::filters::tasks::Filter3DTaskBase >()->getMainInputTexture(stage3DProxy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,getMainInputTexture,return )

int Filter3DBase_obj::get_textureWidth(){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_51_get_textureWidth)
HXDLIN(  51)		return this->_textureWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_textureWidth,return )

int Filter3DBase_obj::set_textureWidth(int value){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_55_set_textureWidth)
HXLINE(  56)		this->_textureWidth = value;
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			int _g1 = this->_tasks->get_length();
HXDLIN(  58)			while((_g < _g1)){
HXLINE(  58)				_g = (_g + 1);
HXDLIN(  58)				int i = (_g - 1);
HXLINE(  59)				this->_tasks->get(i).StaticCast<  ::away3d::filters::tasks::Filter3DTaskBase >()->set_textureWidth(value);
            			}
            		}
HXLINE(  61)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,set_textureWidth,return )

int Filter3DBase_obj::get_textureHeight(){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_66_get_textureHeight)
HXDLIN(  66)		return this->_textureHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,get_textureHeight,return )

int Filter3DBase_obj::set_textureHeight(int value){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_70_set_textureHeight)
HXLINE(  71)		this->_textureHeight = value;
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			int _g1 = this->_tasks->get_length();
HXDLIN(  72)			while((_g < _g1)){
HXLINE(  72)				_g = (_g + 1);
HXDLIN(  72)				int i = (_g - 1);
HXLINE(  73)				this->_tasks->get(i).StaticCast<  ::away3d::filters::tasks::Filter3DTaskBase >()->set_textureHeight(value);
            			}
            		}
HXLINE(  75)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DBase_obj,set_textureHeight,return )

void Filter3DBase_obj::setRenderTargets( ::openfl::display3D::textures::Texture mainTarget, ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_81_setRenderTargets)
HXDLIN(  81)		::Dynamic this1 = this->_tasks;
HXDLIN(  81)		( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->_tasks->get_length() - 1)).StaticCast<  ::away3d::filters::tasks::Filter3DTaskBase >()->set_target(mainTarget);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Filter3DBase_obj,setRenderTargets,(void))

void Filter3DBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_86_dispose)
HXDLIN(  86)		int _g = 0;
HXDLIN(  86)		int _g1 = this->_tasks->get_length();
HXDLIN(  86)		while((_g < _g1)){
HXDLIN(  86)			_g = (_g + 1);
HXDLIN(  86)			int i = (_g - 1);
HXLINE(  87)			this->_tasks->get(i).StaticCast<  ::away3d::filters::tasks::Filter3DTaskBase >()->dispose();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DBase_obj,dispose,(void))

void Filter3DBase_obj::update( ::away3d::core::managers::Stage3DProxy stage, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_a5c7c0fc8463f7d1_91_update)
            	}


HX_DEFINE_DYNAMIC_FUNC2(Filter3DBase_obj,update,(void))


::hx::ObjectPtr< Filter3DBase_obj > Filter3DBase_obj::__new() {
	::hx::ObjectPtr< Filter3DBase_obj > __this = new Filter3DBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Filter3DBase_obj > Filter3DBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Filter3DBase_obj *__this = (Filter3DBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Filter3DBase_obj), true, "away3d.filters.Filter3DBase"));
	*(void **)__this = Filter3DBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Filter3DBase_obj::Filter3DBase_obj()
{
}

void Filter3DBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Filter3DBase);
	HX_MARK_MEMBER_NAME(_tasks,"_tasks");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_MARK_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_MARK_END_CLASS();
}

void Filter3DBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tasks,"_tasks");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_VISIT_MEMBER_NAME(_textureHeight,"_textureHeight");
}

::hx::Val Filter3DBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tasks") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tasks() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tasks") ) { return ::hx::Val( _tasks ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addTask") ) { return ::hx::Val( addTask_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_tasks") ) { return ::hx::Val( get_tasks_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureWidth() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureHeight() ); }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { return ::hx::Val( _textureWidth ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { return ::hx::Val( _textureHeight ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_textureWidth") ) { return ::hx::Val( get_textureWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureWidth") ) { return ::hx::Val( set_textureWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRenderTargets") ) { return ::hx::Val( setRenderTargets_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_textureHeight") ) { return ::hx::Val( get_textureHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureHeight") ) { return ::hx::Val( set_textureHeight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requireDepthRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_requireDepthRender() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return ::hx::Val( _requireDepthRender ); }
		if (HX_FIELD_EQ(inName,"getMainInputTexture") ) { return ::hx::Val( getMainInputTexture_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_requireDepthRender") ) { return ::hx::Val( get_requireDepthRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Filter3DBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tasks") ) { _tasks=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textureWidth(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textureHeight(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { _textureWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { _textureHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Filter3DBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("requireDepthRender",54,45,af,22));
	outFields->push(HX_("tasks",8e,9d,f0,0a));
	outFields->push(HX_("textureWidth",2b,63,02,c3));
	outFields->push(HX_("textureHeight",22,db,63,95));
	outFields->push(HX_("_tasks",cf,e4,d7,06));
	outFields->push(HX_("_requireDepthRender",73,c9,89,02));
	outFields->push(HX_("_textureWidth",0a,f6,70,a5));
	outFields->push(HX_("_textureHeight",63,cb,b5,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Filter3DBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Filter3DBase_obj,_tasks),HX_("_tasks",cf,e4,d7,06)},
	{::hx::fsBool,(int)offsetof(Filter3DBase_obj,_requireDepthRender),HX_("_requireDepthRender",73,c9,89,02)},
	{::hx::fsInt,(int)offsetof(Filter3DBase_obj,_textureWidth),HX_("_textureWidth",0a,f6,70,a5)},
	{::hx::fsInt,(int)offsetof(Filter3DBase_obj,_textureHeight),HX_("_textureHeight",63,cb,b5,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Filter3DBase_obj_sStaticStorageInfo = 0;
#endif

static ::String Filter3DBase_obj_sMemberFields[] = {
	HX_("_tasks",cf,e4,d7,06),
	HX_("_requireDepthRender",73,c9,89,02),
	HX_("_textureWidth",0a,f6,70,a5),
	HX_("_textureHeight",63,cb,b5,d3),
	HX_("get_requireDepthRender",9d,be,43,7c),
	HX_("addTask",06,02,34,89),
	HX_("get_tasks",e5,f9,99,4e),
	HX_("getMainInputTexture",80,00,ec,cd),
	HX_("get_textureWidth",b4,4f,a1,c7),
	HX_("set_textureWidth",28,3d,e3,1d),
	HX_("get_textureHeight",79,e6,d3,9b),
	HX_("set_textureHeight",85,be,41,bf),
	HX_("setRenderTargets",4a,fe,b7,44),
	HX_("dispose",9f,80,4c,bb),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Filter3DBase_obj::__mClass;

void Filter3DBase_obj::__register()
{
	Filter3DBase_obj _hx_dummy;
	Filter3DBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.filters.Filter3DBase",dc,f6,a7,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Filter3DBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Filter3DBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter3DBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter3DBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace filters
