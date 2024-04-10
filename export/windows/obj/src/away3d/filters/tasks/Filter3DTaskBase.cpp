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
#ifndef INCLUDED_away3d_debug_Debug
#include <away3d/debug/Debug.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_errors_AbstractMethodError
#include <away3d/errors/AbstractMethodError.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DProgramType_Context3DProgramType_Impl_
#include <openfl/display3D/_Context3DProgramType/Context3DProgramType_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_AGALMiniAssembler
#include <openfl/utils/AGALMiniAssembler.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c182c1635b5b86cc_17_new,"away3d.filters.tasks.Filter3DTaskBase","new",0x31c55413,"away3d.filters.tasks.Filter3DTaskBase.new","away3d/filters/tasks/Filter3DTaskBase.hx",17,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_49_get_textureScale,"away3d.filters.tasks.Filter3DTaskBase","get_textureScale",0x42d750a5,"away3d.filters.tasks.Filter3DTaskBase.get_textureScale","away3d/filters/tasks/Filter3DTaskBase.hx",49,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_53_set_textureScale,"away3d.filters.tasks.Filter3DTaskBase","set_textureScale",0x99193e19,"away3d.filters.tasks.Filter3DTaskBase.set_textureScale","away3d/filters/tasks/Filter3DTaskBase.hx",53,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_65_get_target,"away3d.filters.tasks.Filter3DTaskBase","get_target",0x94cf0bc7,"away3d.filters.tasks.Filter3DTaskBase.get_target","away3d/filters/tasks/Filter3DTaskBase.hx",65,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_69_set_target,"away3d.filters.tasks.Filter3DTaskBase","set_target",0x984caa3b,"away3d.filters.tasks.Filter3DTaskBase.set_target","away3d/filters/tasks/Filter3DTaskBase.hx",69,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_76_get_textureWidth,"away3d.filters.tasks.Filter3DTaskBase","get_textureWidth",0x946b3821,"away3d.filters.tasks.Filter3DTaskBase.get_textureWidth","away3d/filters/tasks/Filter3DTaskBase.hx",76,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_80_set_textureWidth,"away3d.filters.tasks.Filter3DTaskBase","set_textureWidth",0xeaad2595,"away3d.filters.tasks.Filter3DTaskBase.set_textureWidth","away3d/filters/tasks/Filter3DTaskBase.hx",80,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_92_get_textureHeight,"away3d.filters.tasks.Filter3DTaskBase","get_textureHeight",0xffb55d6c,"away3d.filters.tasks.Filter3DTaskBase.get_textureHeight","away3d/filters/tasks/Filter3DTaskBase.hx",92,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_96_set_textureHeight,"away3d.filters.tasks.Filter3DTaskBase","set_textureHeight",0x23233578,"away3d.filters.tasks.Filter3DTaskBase.set_textureHeight","away3d/filters/tasks/Filter3DTaskBase.hx",96,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_107_getMainInputTexture,"away3d.filters.tasks.Filter3DTaskBase","getMainInputTexture",0x064f5a33,"away3d.filters.tasks.Filter3DTaskBase.getMainInputTexture","away3d/filters/tasks/Filter3DTaskBase.hx",107,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_119_dispose,"away3d.filters.tasks.Filter3DTaskBase","dispose",0x87f559d2,"away3d.filters.tasks.Filter3DTaskBase.dispose","away3d/filters/tasks/Filter3DTaskBase.hx",119,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_129_invalidateProgram3D,"away3d.filters.tasks.Filter3DTaskBase","invalidateProgram3D",0xa40cb8ed,"away3d.filters.tasks.Filter3DTaskBase.invalidateProgram3D","away3d/filters/tasks/Filter3DTaskBase.hx",129,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_133_updateProgram3D,"away3d.filters.tasks.Filter3DTaskBase","updateProgram3D",0x8910b51f,"away3d.filters.tasks.Filter3DTaskBase.updateProgram3D","away3d/filters/tasks/Filter3DTaskBase.hx",133,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_145_getVertexCode,"away3d.filters.tasks.Filter3DTaskBase","getVertexCode",0xe40bd85a,"away3d.filters.tasks.Filter3DTaskBase.getVertexCode","away3d/filters/tasks/Filter3DTaskBase.hx",145,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_151_getFragmentCode,"away3d.filters.tasks.Filter3DTaskBase","getFragmentCode",0x85237f06,"away3d.filters.tasks.Filter3DTaskBase.getFragmentCode","away3d/filters/tasks/Filter3DTaskBase.hx",151,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_156_updateTextures,"away3d.filters.tasks.Filter3DTaskBase","updateTextures",0x5b19ed8e,"away3d.filters.tasks.Filter3DTaskBase.updateTextures","away3d/filters/tasks/Filter3DTaskBase.hx",156,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_166_getProgram3D,"away3d.filters.tasks.Filter3DTaskBase","getProgram3D",0x13f2aaac,"away3d.filters.tasks.Filter3DTaskBase.getProgram3D","away3d/filters/tasks/Filter3DTaskBase.hx",166,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_177_activate,"away3d.filters.tasks.Filter3DTaskBase","activate",0x2cc14f20,"away3d.filters.tasks.Filter3DTaskBase.activate","away3d/filters/tasks/Filter3DTaskBase.hx",177,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_181_deactivate,"away3d.filters.tasks.Filter3DTaskBase","deactivate",0x595c04e1,"away3d.filters.tasks.Filter3DTaskBase.deactivate","away3d/filters/tasks/Filter3DTaskBase.hx",181,0xcc80f61a)
HX_LOCAL_STACK_FRAME(_hx_pos_c182c1635b5b86cc_186_get_requireDepthRender,"away3d.filters.tasks.Filter3DTaskBase","get_requireDepthRender",0xae0f36ca,"away3d.filters.tasks.Filter3DTaskBase.get_requireDepthRender","away3d/filters/tasks/Filter3DTaskBase.hx",186,0xcc80f61a)
namespace away3d{
namespace filters{
namespace tasks{

void Filter3DTaskBase_obj::__construct(::hx::Null< bool >  __o_requireDepthRender){
            		bool requireDepthRender = __o_requireDepthRender.Default(false);
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_17_new)
HXLINE(  37)		this->_textureScale = 0;
HXLINE(  32)		this->_program3DInvalid = true;
HXLINE(  31)		this->_textureDimensionsInvalid = true;
HXLINE(  30)		this->_textureHeight = -1;
HXLINE(  29)		this->_textureWidth = -1;
HXLINE(  28)		this->_scaledTextureHeight = -1;
HXLINE(  27)		this->_scaledTextureWidth = -1;
HXLINE(  41)		this->_requireDepthRender = requireDepthRender;
            	}

Dynamic Filter3DTaskBase_obj::__CreateEmpty() { return new Filter3DTaskBase_obj; }

void *Filter3DTaskBase_obj::_hx_vtable = 0;

Dynamic Filter3DTaskBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Filter3DTaskBase_obj > _hx_result = new Filter3DTaskBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Filter3DTaskBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0bd123f5;
}

int Filter3DTaskBase_obj::get_textureScale(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_49_get_textureScale)
HXDLIN(  49)		return this->_textureScale;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_textureScale,return )

int Filter3DTaskBase_obj::set_textureScale(int value){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_53_set_textureScale)
HXLINE(  54)		if ((this->_textureScale == value)) {
HXLINE(  55)			return value;
            		}
HXLINE(  56)		this->_textureScale = value;
HXLINE(  57)		this->_scaledTextureWidth = (this->_textureWidth >> this->_textureScale);
HXLINE(  58)		this->_scaledTextureHeight = (this->_textureHeight >> this->_textureScale);
HXLINE(  59)		this->_textureDimensionsInvalid = true;
HXLINE(  60)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_textureScale,return )

 ::openfl::display3D::textures::Texture Filter3DTaskBase_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_65_get_target)
HXDLIN(  65)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_target,return )

 ::openfl::display3D::textures::Texture Filter3DTaskBase_obj::set_target( ::openfl::display3D::textures::Texture value){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_69_set_target)
HXLINE(  70)		this->_target = value;
HXLINE(  71)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_target,return )

int Filter3DTaskBase_obj::get_textureWidth(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_76_get_textureWidth)
HXDLIN(  76)		return this->_textureWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_textureWidth,return )

int Filter3DTaskBase_obj::set_textureWidth(int value){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_80_set_textureWidth)
HXLINE(  81)		if ((this->_textureWidth == value)) {
HXLINE(  82)			return value;
            		}
HXLINE(  83)		this->_textureWidth = value;
HXLINE(  84)		this->_scaledTextureWidth = (this->_textureWidth >> this->_textureScale);
HXLINE(  85)		if ((this->_scaledTextureWidth < 1)) {
HXLINE(  85)			this->_scaledTextureWidth = 1;
            		}
HXLINE(  86)		this->_textureDimensionsInvalid = true;
HXLINE(  87)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_textureWidth,return )

int Filter3DTaskBase_obj::get_textureHeight(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_92_get_textureHeight)
HXDLIN(  92)		return this->_textureHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_textureHeight,return )

int Filter3DTaskBase_obj::set_textureHeight(int value){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_96_set_textureHeight)
HXLINE(  97)		if ((this->_textureHeight == value)) {
HXLINE(  98)			return value;
            		}
HXLINE(  99)		this->_textureHeight = value;
HXLINE( 100)		this->_scaledTextureHeight = (this->_textureHeight >> this->_textureScale);
HXLINE( 101)		if ((this->_scaledTextureHeight < 1)) {
HXLINE( 101)			this->_scaledTextureHeight = 1;
            		}
HXLINE( 102)		this->_textureDimensionsInvalid = true;
HXLINE( 103)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,set_textureHeight,return )

 ::openfl::display3D::textures::Texture Filter3DTaskBase_obj::getMainInputTexture( ::away3d::core::managers::Stage3DProxy stage){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_107_getMainInputTexture)
HXLINE( 108)		 ::openfl::display3D::Context3D _hx_tmp = stage->get_context3D();
HXDLIN( 108)		if (::hx::IsInstanceNotEq( _hx_tmp,this->_mainInputTextureContext )) {
HXLINE( 109)			this->_textureDimensionsInvalid = true;
            		}
HXLINE( 112)		if (this->_textureDimensionsInvalid) {
HXLINE( 113)			this->updateTextures(stage);
            		}
HXLINE( 115)		return this->_mainInputTexture;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,getMainInputTexture,return )

void Filter3DTaskBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_119_dispose)
HXLINE( 120)		if (::hx::IsNotNull( this->_mainInputTexture )) {
HXLINE( 121)			this->_mainInputTexture->dispose();
            		}
HXLINE( 122)		if (::hx::IsNotNull( this->_program3D )) {
HXLINE( 123)			this->_program3D->dispose();
            		}
HXLINE( 124)		this->_program3DContext = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,dispose,(void))

void Filter3DTaskBase_obj::invalidateProgram3D(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_129_invalidateProgram3D)
HXDLIN( 129)		this->_program3DInvalid = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,invalidateProgram3D,(void))

void Filter3DTaskBase_obj::updateProgram3D( ::away3d::core::managers::Stage3DProxy stage){
            	HX_GC_STACKFRAME(&_hx_pos_c182c1635b5b86cc_133_updateProgram3D)
HXLINE( 134)		if (::hx::IsNotNull( this->_program3D )) {
HXLINE( 135)			this->_program3D->dispose();
            		}
HXLINE( 136)		this->_program3DContext = stage->get_context3D();
HXLINE( 137)		this->_program3D = this->_program3DContext->createProgram(null());
HXLINE( 138)		 ::openfl::display3D::Program3D _hx_tmp = this->_program3D;
HXDLIN( 138)		 ::openfl::utils::AGALMiniAssembler _hx_tmp1 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,::away3d::debug::Debug_obj::active);
HXDLIN( 138)		::String _hx_tmp2 = ::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(1);
HXDLIN( 138)		 ::openfl::utils::ByteArrayData _hx_tmp3 = _hx_tmp1->assemble(_hx_tmp2,this->getVertexCode(),null(),null());
HXLINE( 139)		 ::openfl::utils::AGALMiniAssembler _hx_tmp4 =  ::openfl::utils::AGALMiniAssembler_obj::__alloc( HX_CTX ,::away3d::debug::Debug_obj::active);
HXDLIN( 139)		::String _hx_tmp5 = ::openfl::display3D::_Context3DProgramType::Context3DProgramType_Impl__obj::toString(0);
HXLINE( 138)		_hx_tmp->upload(_hx_tmp3,_hx_tmp4->assemble(_hx_tmp5,this->getFragmentCode(),null(),null()));
HXLINE( 140)		this->_program3DInvalid = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,updateProgram3D,(void))

::String Filter3DTaskBase_obj::getVertexCode(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_145_getVertexCode)
HXDLIN( 145)		return (HX_("mov op, va0\n",e6,60,85,30) + HX_("mov v0, va1\n",5e,d0,88,5b));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,getVertexCode,return )

::String Filter3DTaskBase_obj::getFragmentCode(){
            	HX_GC_STACKFRAME(&_hx_pos_c182c1635b5b86cc_151_getFragmentCode)
HXDLIN( 151)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 151)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,getFragmentCode,return )

void Filter3DTaskBase_obj::updateTextures( ::away3d::core::managers::Stage3DProxy stage){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_156_updateTextures)
HXLINE( 157)		if (::hx::IsNotNull( this->_mainInputTexture )) {
HXLINE( 158)			this->_mainInputTexture->dispose();
            		}
HXLINE( 159)		this->_mainInputTextureContext = stage->get_context3D();
HXLINE( 160)		this->_mainInputTexture = this->_mainInputTextureContext->createTexture(this->_scaledTextureWidth,this->_scaledTextureHeight,1,true,null());
HXLINE( 162)		this->_textureDimensionsInvalid = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,updateTextures,(void))

 ::openfl::display3D::Program3D Filter3DTaskBase_obj::getProgram3D( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_166_getProgram3D)
HXLINE( 167)		 ::openfl::display3D::Context3D _hx_tmp = this->_program3DContext;
HXDLIN( 167)		if (::hx::IsInstanceNotEq( _hx_tmp,stage3DProxy->get_context3D() )) {
HXLINE( 168)			this->_program3DInvalid = true;
            		}
HXLINE( 171)		if (this->_program3DInvalid) {
HXLINE( 172)			this->updateProgram3D(stage3DProxy);
            		}
HXLINE( 173)		return this->_program3D;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,getProgram3D,return )

void Filter3DTaskBase_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::display3D::textures::Texture depthTexture){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_177_activate)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Filter3DTaskBase_obj,activate,(void))

void Filter3DTaskBase_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_181_deactivate)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Filter3DTaskBase_obj,deactivate,(void))

bool Filter3DTaskBase_obj::get_requireDepthRender(){
            	HX_STACKFRAME(&_hx_pos_c182c1635b5b86cc_186_get_requireDepthRender)
HXDLIN( 186)		return this->_requireDepthRender;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Filter3DTaskBase_obj,get_requireDepthRender,return )


::hx::ObjectPtr< Filter3DTaskBase_obj > Filter3DTaskBase_obj::__new(::hx::Null< bool >  __o_requireDepthRender) {
	::hx::ObjectPtr< Filter3DTaskBase_obj > __this = new Filter3DTaskBase_obj();
	__this->__construct(__o_requireDepthRender);
	return __this;
}

::hx::ObjectPtr< Filter3DTaskBase_obj > Filter3DTaskBase_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_requireDepthRender) {
	Filter3DTaskBase_obj *__this = (Filter3DTaskBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Filter3DTaskBase_obj), true, "away3d.filters.tasks.Filter3DTaskBase"));
	*(void **)__this = Filter3DTaskBase_obj::_hx_vtable;
	__this->__construct(__o_requireDepthRender);
	return __this;
}

Filter3DTaskBase_obj::Filter3DTaskBase_obj()
{
}

void Filter3DTaskBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Filter3DTaskBase);
	HX_MARK_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
	HX_MARK_MEMBER_NAME(_mainInputTextureContext,"_mainInputTextureContext");
	HX_MARK_MEMBER_NAME(_scaledTextureWidth,"_scaledTextureWidth");
	HX_MARK_MEMBER_NAME(_scaledTextureHeight,"_scaledTextureHeight");
	HX_MARK_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_MARK_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_MARK_MEMBER_NAME(_textureDimensionsInvalid,"_textureDimensionsInvalid");
	HX_MARK_MEMBER_NAME(_program3DInvalid,"_program3DInvalid");
	HX_MARK_MEMBER_NAME(_program3D,"_program3D");
	HX_MARK_MEMBER_NAME(_program3DContext,"_program3DContext");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_MARK_MEMBER_NAME(_textureScale,"_textureScale");
	HX_MARK_END_CLASS();
}

void Filter3DTaskBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mainInputTexture,"_mainInputTexture");
	HX_VISIT_MEMBER_NAME(_mainInputTextureContext,"_mainInputTextureContext");
	HX_VISIT_MEMBER_NAME(_scaledTextureWidth,"_scaledTextureWidth");
	HX_VISIT_MEMBER_NAME(_scaledTextureHeight,"_scaledTextureHeight");
	HX_VISIT_MEMBER_NAME(_textureWidth,"_textureWidth");
	HX_VISIT_MEMBER_NAME(_textureHeight,"_textureHeight");
	HX_VISIT_MEMBER_NAME(_textureDimensionsInvalid,"_textureDimensionsInvalid");
	HX_VISIT_MEMBER_NAME(_program3DInvalid,"_program3DInvalid");
	HX_VISIT_MEMBER_NAME(_program3D,"_program3D");
	HX_VISIT_MEMBER_NAME(_program3DContext,"_program3DContext");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_requireDepthRender,"_requireDepthRender");
	HX_VISIT_MEMBER_NAME(_textureScale,"_textureScale");
}

::hx::Val Filter3DTaskBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3D") ) { return ::hx::Val( _program3D ); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureScale() ); }
		if (HX_FIELD_EQ(inName,"textureWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureWidth() ); }
		if (HX_FIELD_EQ(inName,"getProgram3D") ) { return ::hx::Val( getProgram3D_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textureHeight() ); }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { return ::hx::Val( _textureWidth ); }
		if (HX_FIELD_EQ(inName,"_textureScale") ) { return ::hx::Val( _textureScale ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { return ::hx::Val( _textureHeight ); }
		if (HX_FIELD_EQ(inName,"updateTextures") ) { return ::hx::Val( updateTextures_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateProgram3D") ) { return ::hx::Val( updateProgram3D_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_textureScale") ) { return ::hx::Val( get_textureScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureScale") ) { return ::hx::Val( set_textureScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textureWidth") ) { return ::hx::Val( get_textureWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureWidth") ) { return ::hx::Val( set_textureWidth_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { return ::hx::Val( _mainInputTexture ); }
		if (HX_FIELD_EQ(inName,"_program3DInvalid") ) { return ::hx::Val( _program3DInvalid ); }
		if (HX_FIELD_EQ(inName,"_program3DContext") ) { return ::hx::Val( _program3DContext ); }
		if (HX_FIELD_EQ(inName,"get_textureHeight") ) { return ::hx::Val( get_textureHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textureHeight") ) { return ::hx::Val( set_textureHeight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requireDepthRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_requireDepthRender() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_scaledTextureWidth") ) { return ::hx::Val( _scaledTextureWidth ); }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { return ::hx::Val( _requireDepthRender ); }
		if (HX_FIELD_EQ(inName,"getMainInputTexture") ) { return ::hx::Val( getMainInputTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateProgram3D") ) { return ::hx::Val( invalidateProgram3D_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_scaledTextureHeight") ) { return ::hx::Val( _scaledTextureHeight ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_requireDepthRender") ) { return ::hx::Val( get_requireDepthRender_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_mainInputTextureContext") ) { return ::hx::Val( _mainInputTextureContext ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_textureDimensionsInvalid") ) { return ::hx::Val( _textureDimensionsInvalid ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Filter3DTaskBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display3D::textures::Texture >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display3D::textures::Texture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_program3D") ) { _program3D=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"textureScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textureScale(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"textureWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textureWidth(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textureHeight(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_textureWidth") ) { _textureWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textureScale") ) { _textureScale=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textureHeight") ) { _textureHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_mainInputTexture") ) { _mainInputTexture=inValue.Cast<  ::openfl::display3D::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_program3DInvalid") ) { _program3DInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_program3DContext") ) { _program3DContext=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_scaledTextureWidth") ) { _scaledTextureWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requireDepthRender") ) { _requireDepthRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_scaledTextureHeight") ) { _scaledTextureHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_mainInputTextureContext") ) { _mainInputTextureContext=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_textureDimensionsInvalid") ) { _textureDimensionsInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Filter3DTaskBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textureScale",af,7b,6e,71));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("textureWidth",2b,63,02,c3));
	outFields->push(HX_("textureHeight",22,db,63,95));
	outFields->push(HX_("requireDepthRender",54,45,af,22));
	outFields->push(HX_("_mainInputTexture",29,86,40,ac));
	outFields->push(HX_("_mainInputTextureContext",c6,3e,59,d3));
	outFields->push(HX_("_scaledTextureWidth",04,9d,17,b3));
	outFields->push(HX_("_scaledTextureHeight",29,3f,e1,b7));
	outFields->push(HX_("_textureWidth",0a,f6,70,a5));
	outFields->push(HX_("_textureHeight",63,cb,b5,d3));
	outFields->push(HX_("_textureDimensionsInvalid",2e,8e,29,a1));
	outFields->push(HX_("_program3DInvalid",a1,71,85,ca));
	outFields->push(HX_("_program3D",f6,9b,66,38));
	outFields->push(HX_("_program3DContext",99,2c,b5,a8));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("_requireDepthRender",73,c9,89,02));
	outFields->push(HX_("_textureScale",8e,0e,dd,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Filter3DTaskBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::textures::Texture */ ,(int)offsetof(Filter3DTaskBase_obj,_mainInputTexture),HX_("_mainInputTexture",29,86,40,ac)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Filter3DTaskBase_obj,_mainInputTextureContext),HX_("_mainInputTextureContext",c6,3e,59,d3)},
	{::hx::fsInt,(int)offsetof(Filter3DTaskBase_obj,_scaledTextureWidth),HX_("_scaledTextureWidth",04,9d,17,b3)},
	{::hx::fsInt,(int)offsetof(Filter3DTaskBase_obj,_scaledTextureHeight),HX_("_scaledTextureHeight",29,3f,e1,b7)},
	{::hx::fsInt,(int)offsetof(Filter3DTaskBase_obj,_textureWidth),HX_("_textureWidth",0a,f6,70,a5)},
	{::hx::fsInt,(int)offsetof(Filter3DTaskBase_obj,_textureHeight),HX_("_textureHeight",63,cb,b5,d3)},
	{::hx::fsBool,(int)offsetof(Filter3DTaskBase_obj,_textureDimensionsInvalid),HX_("_textureDimensionsInvalid",2e,8e,29,a1)},
	{::hx::fsBool,(int)offsetof(Filter3DTaskBase_obj,_program3DInvalid),HX_("_program3DInvalid",a1,71,85,ca)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(Filter3DTaskBase_obj,_program3D),HX_("_program3D",f6,9b,66,38)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(Filter3DTaskBase_obj,_program3DContext),HX_("_program3DContext",99,2c,b5,a8)},
	{::hx::fsObject /*  ::openfl::display3D::textures::Texture */ ,(int)offsetof(Filter3DTaskBase_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsBool,(int)offsetof(Filter3DTaskBase_obj,_requireDepthRender),HX_("_requireDepthRender",73,c9,89,02)},
	{::hx::fsInt,(int)offsetof(Filter3DTaskBase_obj,_textureScale),HX_("_textureScale",8e,0e,dd,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Filter3DTaskBase_obj_sStaticStorageInfo = 0;
#endif

static ::String Filter3DTaskBase_obj_sMemberFields[] = {
	HX_("_mainInputTexture",29,86,40,ac),
	HX_("_mainInputTextureContext",c6,3e,59,d3),
	HX_("_scaledTextureWidth",04,9d,17,b3),
	HX_("_scaledTextureHeight",29,3f,e1,b7),
	HX_("_textureWidth",0a,f6,70,a5),
	HX_("_textureHeight",63,cb,b5,d3),
	HX_("_textureDimensionsInvalid",2e,8e,29,a1),
	HX_("_program3DInvalid",a1,71,85,ca),
	HX_("_program3D",f6,9b,66,38),
	HX_("_program3DContext",99,2c,b5,a8),
	HX_("_target",f0,04,64,f5),
	HX_("_requireDepthRender",73,c9,89,02),
	HX_("_textureScale",8e,0e,dd,53),
	HX_("get_textureScale",38,68,0d,76),
	HX_("set_textureScale",ac,55,4f,cc),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("get_textureWidth",b4,4f,a1,c7),
	HX_("set_textureWidth",28,3d,e3,1d),
	HX_("get_textureHeight",79,e6,d3,9b),
	HX_("set_textureHeight",85,be,41,bf),
	HX_("getMainInputTexture",80,00,ec,cd),
	HX_("dispose",9f,80,4c,bb),
	HX_("invalidateProgram3D",3a,5f,a9,6b),
	HX_("updateProgram3D",ec,f0,4e,2c),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("updateTextures",61,ea,f8,9a),
	HX_("getProgram3D",bf,bc,1a,ec),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	HX_("get_requireDepthRender",9d,be,43,7c),
	::String(null()) };

::hx::Class Filter3DTaskBase_obj::__mClass;

void Filter3DTaskBase_obj::__register()
{
	Filter3DTaskBase_obj _hx_dummy;
	Filter3DTaskBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.filters.tasks.Filter3DTaskBase",a1,4e,c7,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Filter3DTaskBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Filter3DTaskBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Filter3DTaskBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Filter3DTaskBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace filters
} // end namespace tasks
