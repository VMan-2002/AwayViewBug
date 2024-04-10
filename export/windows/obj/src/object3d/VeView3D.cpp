#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_containers_View3D
#include <away3d/containers/View3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_render_RendererBase
#include <away3d/core/render/RendererBase.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_object3d_VeView3D
#include <object3d/VeView3D.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1550f44ca60006a_22_new,"object3d.VeView3D","new",0xd8e01055,"object3d.VeView3D.new","object3d/VeView3D.hx",22,0x41927e5a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1550f44ca60006a_74_updateViewSize,"object3d.VeView3D","updateViewSize",0xe1c1931a,"object3d.VeView3D.updateViewSize","object3d/VeView3D.hx",74,0x41927e5a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1550f44ca60006a_93_destroy,"object3d.VeView3D","destroy",0x82ca0b6f,"object3d.VeView3D.destroy","object3d/VeView3D.hx",93,0x41927e5a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1550f44ca60006a_109_draw,"object3d.VeView3D","draw",0xe49be26f,"object3d.VeView3D.draw","object3d/VeView3D.hx",109,0x41927e5a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1550f44ca60006a_133_drawComplex,"object3d.VeView3D","drawComplex",0x5b266781,"object3d.VeView3D.drawComplex","object3d/VeView3D.hx",133,0x41927e5a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1550f44ca60006a_42_resizeFunc,"object3d.VeView3D","resizeFunc",0x70505403,"object3d.VeView3D.resizeFunc","object3d/VeView3D.hx",42,0x41927e5a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1550f44ca60006a_24_boot,"object3d.VeView3D","boot",0xe3473a9d,"object3d.VeView3D.boot","object3d/VeView3D.hx",24,0x41927e5a)
HX_LOCAL_STACK_FRAME(_hx_pos_d1550f44ca60006a_29_boot,"object3d.VeView3D","boot",0xe3473a9d,"object3d.VeView3D.boot","object3d/VeView3D.hx",29,0x41927e5a)
namespace object3d{

void VeView3D_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d1550f44ca60006a_22_new)
HXLINE(  36)		this->view3d = null();
HXLINE(  27)		this->bmd = null();
HXLINE(  55)		this->view3d =  ::away3d::containers::View3D_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  56)		::object3d::VeView3D_obj::viewSprites->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  57)		if (!(::object3d::VeView3D_obj::initialized)) {
HXLINE(  59)			::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("resize",f4,59,7b,08),::object3d::VeView3D_obj::resizeFunc_dyn(),null(),null(),null());
HXLINE(  60)			::object3d::VeView3D_obj::resizeFunc(null());
HXLINE(  61)			::object3d::VeView3D_obj::initialized = true;
            		}
            		else {
HXLINE(  65)			this->updateViewSize();
            		}
HXLINE(  67)		::flixel::FlxG_obj::addChildBelowMouse(this->view3d,null());
HXLINE(  68)		super::__construct(null(),null(),null());
HXLINE(  69)		this->set_width(( (Float)(::flixel::FlxG_obj::width) ));
HXLINE(  70)		this->set_height(( (Float)(::flixel::FlxG_obj::height) ));
            	}

Dynamic VeView3D_obj::__CreateEmpty() { return new VeView3D_obj; }

void *VeView3D_obj::_hx_vtable = 0;

Dynamic VeView3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VeView3D_obj > _hx_result = new VeView3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VeView3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1d46d9d5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1d46d9d5;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void VeView3D_obj::updateViewSize(){
            	HX_GC_STACKFRAME(&_hx_pos_d1550f44ca60006a_74_updateViewSize)
HXLINE(  75)		if (::hx::IsNotNull( this->bmd )) {
HXLINE(  77)			this->bmd->disposeImage();
HXLINE(  78)			this->bmd->dispose();
            		}
HXLINE(  80)		this->bmd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::ceil(::flixel::FlxG_obj::scaleMode->gameSize->x),::Math_obj::ceil(::flixel::FlxG_obj::scaleMode->gameSize->y),null(),null());
HXLINE(  81)		this->view3d->set_width(( (Float)(this->bmd->width) ));
HXLINE(  82)		this->view3d->set_height(( (Float)(this->bmd->height) ));
HXLINE(  83)		::haxe::Log_obj::trace((((((HX_("3D view update - Descale: ",51,20,ae,88) + ::object3d::VeView3D_obj::renderDescale) + HX_(" - 3D Resolution: ",ae,e9,8d,55)) + this->bmd->width) + HX_(" x ",c8,b0,18,00)) + this->bmd->height),::hx::SourceInfo(HX_("source/object3d/VeView3D.hx",4e,3f,54,6c),83,HX_("object3d.VeView3D",e3,41,7a,b5),HX_("updateViewSize",ef,88,9f,be)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VeView3D_obj,updateViewSize,(void))

void VeView3D_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d1550f44ca60006a_93_destroy)
HXLINE(  94)		::haxe::Log_obj::trace(HX_("Starting disposing 3d view",50,e1,12,12),::hx::SourceInfo(HX_("source/object3d/VeView3D.hx",4e,3f,54,6c),94,HX_("object3d.VeView3D",e3,41,7a,b5),HX_("destroy",fa,2c,86,24)));
HXLINE(  95)		::object3d::VeView3D_obj::viewSprites->remove(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  96)		bool _hx_tmp;
HXDLIN(  96)		if (::hx::IsNotNull( this->view3d )) {
HXLINE(  96)			_hx_tmp = ::flixel::FlxG_obj::game->contains(this->view3d);
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  97)			::flixel::FlxG_obj::game->removeChild(this->view3d);
            		}
HXLINE(  98)		this->view3d->dispose();
HXLINE(  99)		this->view3d = null();
HXLINE( 100)		this->super::destroy();
HXLINE( 101)		::haxe::Log_obj::trace(HX_("Finished disposing 3d view",82,c7,85,90),::hx::SourceInfo(HX_("source/object3d/VeView3D.hx",4e,3f,54,6c),101,HX_("object3d.VeView3D",e3,41,7a,b5),HX_("destroy",fa,2c,86,24)));
            	}


void VeView3D_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_d1550f44ca60006a_109_draw)
HXDLIN( 109)		int _g = 0;
HXDLIN( 109)		::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 109)		while((_g < _g1->length)){
HXDLIN( 109)			 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 109)			_g = (_g + 1);
HXLINE( 113)			bool _hx_tmp;
HXDLIN( 113)			if (camera->visible) {
HXLINE( 113)				_hx_tmp = !(camera->exists);
            			}
            			else {
HXLINE( 113)				_hx_tmp = true;
            			}
HXDLIN( 113)			if (_hx_tmp) {
HXLINE( 114)				continue;
            			}
HXLINE( 116)			this->drawComplex(camera);
            		}
            	}


void VeView3D_obj::drawComplex( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_d1550f44ca60006a_133_drawComplex)
HXLINE( 136)		this->view3d->get_renderer()->queueSnapshot(this->bmd);
HXLINE( 137)		this->view3d->render();
HXLINE( 139)		this->_frame = ::flixel::FlxG_obj::bitmap->add(this->bmd,false,HX_("Ve_3D_View",e3,b7,3f,71))->get_imageFrame()->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE( 154)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 154)		bool _hx_tmp;
HXDLIN( 154)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 154)			_hx_tmp = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 154)			_hx_tmp = doFlipX;
            		}
HXDLIN( 154)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 154)		bool _hx_tmp1;
HXDLIN( 154)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 154)			_hx_tmp1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 154)			_hx_tmp1 = doFlipY;
            		}
HXDLIN( 154)		this->_frame->prepareMatrix(this->_matrix,0,_hx_tmp,_hx_tmp1);
HXLINE( 155)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 156)		this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 158)		if ((this->bakedRotationAngle <= 0)) {
HXLINE( 160)			if (this->_angleChanged) {
HXLINE( 160)				Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 160)				this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN( 160)				this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN( 160)				this->_angleChanged = false;
            			}
HXLINE( 162)			if ((this->angle != 0)) {
HXLINE( 163)				 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 163)				Float cos = this->_cosAngle;
HXDLIN( 163)				Float sin = this->_sinAngle;
HXDLIN( 163)				Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 163)				_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 163)				_this->a = a1;
HXDLIN( 163)				Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 163)				_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 163)				_this->c = c1;
HXDLIN( 163)				Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 163)				_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 163)				_this->tx = tx1;
            			}
            		}
HXLINE( 166)		this->getScreenPosition(this->_point,camera)->subtractPoint(this->offset);
HXLINE( 167)		{
HXLINE( 167)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN( 167)			Float Y = this->origin->y;
HXDLIN( 167)			_this->set_x((_this->x + this->origin->x));
HXDLIN( 167)			_this->set_y((_this->y + Y));
            		}
HXLINE( 168)		this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE( 169)		this->_matrix->scale(::object3d::VeView3D_obj::renderDescale,::object3d::VeView3D_obj::renderDescale);
HXLINE( 171)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 173)			this->_matrix->tx = ( (Float)(::Math_obj::floor(this->_matrix->tx)) );
HXLINE( 174)			this->_matrix->ty = ( (Float)(::Math_obj::floor(this->_matrix->ty)) );
            		}
HXLINE( 177)		camera->drawPixels(this->_frame,this->framePixels,this->_matrix,this->colorTransform,this->blend,this->antialiasing,this->shader);
            	}


::Array< ::Dynamic> VeView3D_obj::viewSprites;

bool VeView3D_obj::initialized;

Float VeView3D_obj::renderScale;

Float VeView3D_obj::renderDescale;

void VeView3D_obj::resizeFunc( ::openfl::events::Event evt){
            	HX_STACKFRAME(&_hx_pos_d1550f44ca60006a_42_resizeFunc)
HXLINE(  43)		::object3d::VeView3D_obj::renderScale = (::flixel::FlxG_obj::scaleMode->gameSize->x / ( (Float)(::flixel::FlxG_obj::width) ));
HXLINE(  44)		::object3d::VeView3D_obj::renderDescale = (( (Float)(::flixel::FlxG_obj::width) ) / ::flixel::FlxG_obj::scaleMode->gameSize->x);
HXLINE(  45)		{
HXLINE(  45)			int _g = 0;
HXDLIN(  45)			::Array< ::Dynamic> _g1 = ::object3d::VeView3D_obj::viewSprites;
HXDLIN(  45)			while((_g < _g1->length)){
HXLINE(  45)				 ::object3d::VeView3D thing = _g1->__get(_g).StaticCast<  ::object3d::VeView3D >();
HXDLIN(  45)				_g = (_g + 1);
HXLINE(  47)				thing->updateViewSize();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VeView3D_obj,resizeFunc,(void))


::hx::ObjectPtr< VeView3D_obj > VeView3D_obj::__new() {
	::hx::ObjectPtr< VeView3D_obj > __this = new VeView3D_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VeView3D_obj > VeView3D_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VeView3D_obj *__this = (VeView3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VeView3D_obj), true, "object3d.VeView3D"));
	*(void **)__this = VeView3D_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VeView3D_obj::VeView3D_obj()
{
}

void VeView3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VeView3D);
	HX_MARK_MEMBER_NAME(bmd,"bmd");
	HX_MARK_MEMBER_NAME(view3d,"view3d");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VeView3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmd,"bmd");
	HX_VISIT_MEMBER_NAME(view3d,"view3d");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VeView3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { return ::hx::Val( bmd ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"view3d") ) { return ::hx::Val( view3d ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return ::hx::Val( drawComplex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateViewSize") ) { return ::hx::Val( updateViewSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VeView3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"resizeFunc") ) { outValue = resizeFunc_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"viewSprites") ) { outValue = ( viewSprites ); return true; }
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		if (HX_FIELD_EQ(inName,"renderScale") ) { outValue = ( renderScale ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderDescale") ) { outValue = ( renderDescale ); return true; }
	}
	return false;
}

::hx::Val VeView3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { bmd=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"view3d") ) { view3d=inValue.Cast<  ::away3d::containers::View3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VeView3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"viewSprites") ) { viewSprites=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"renderScale") ) { renderScale=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderDescale") ) { renderDescale=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void VeView3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bmd",39,bc,4a,00));
	outFields->push(HX_("view3d",76,82,4c,e6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VeView3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(VeView3D_obj,bmd),HX_("bmd",39,bc,4a,00)},
	{::hx::fsObject /*  ::away3d::containers::View3D */ ,(int)offsetof(VeView3D_obj,view3d),HX_("view3d",76,82,4c,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo VeView3D_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &VeView3D_obj::viewSprites,HX_("viewSprites",e9,e4,9d,41)},
	{::hx::fsBool,(void *) &VeView3D_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsFloat,(void *) &VeView3D_obj::renderScale,HX_("renderScale",54,fb,7f,44)},
	{::hx::fsFloat,(void *) &VeView3D_obj::renderDescale,HX_("renderDescale",b3,16,2a,15)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String VeView3D_obj_sMemberFields[] = {
	HX_("bmd",39,bc,4a,00),
	HX_("view3d",76,82,4c,e6),
	HX_("updateViewSize",ef,88,9f,be),
	HX_("destroy",fa,2c,86,24),
	HX_("draw",04,2c,70,42),
	HX_("drawComplex",8c,aa,b9,cc),
	::String(null()) };

static void VeView3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VeView3D_obj::viewSprites,"viewSprites");
	HX_MARK_MEMBER_NAME(VeView3D_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(VeView3D_obj::renderScale,"renderScale");
	HX_MARK_MEMBER_NAME(VeView3D_obj::renderDescale,"renderDescale");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VeView3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VeView3D_obj::viewSprites,"viewSprites");
	HX_VISIT_MEMBER_NAME(VeView3D_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(VeView3D_obj::renderScale,"renderScale");
	HX_VISIT_MEMBER_NAME(VeView3D_obj::renderDescale,"renderDescale");
};

#endif

::hx::Class VeView3D_obj::__mClass;

static ::String VeView3D_obj_sStaticFields[] = {
	HX_("viewSprites",e9,e4,9d,41),
	HX_("initialized",14,f5,0f,37),
	HX_("renderScale",54,fb,7f,44),
	HX_("renderDescale",b3,16,2a,15),
	HX_("resizeFunc",58,7b,ff,b7),
	::String(null())
};

void VeView3D_obj::__register()
{
	VeView3D_obj _hx_dummy;
	VeView3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("object3d.VeView3D",e3,41,7a,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VeView3D_obj::__GetStatic;
	__mClass->mSetStaticField = &VeView3D_obj::__SetStatic;
	__mClass->mMarkFunc = VeView3D_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VeView3D_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VeView3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VeView3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VeView3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VeView3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VeView3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VeView3D_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d1550f44ca60006a_24_boot)
HXDLIN(  24)		viewSprites = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_d1550f44ca60006a_29_boot)
HXDLIN(  29)		initialized = false;
            	}
}

} // end namespace object3d
