#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#include <flixel/graphics/tile/FlxDrawQuadsItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6d98322fc3998392_26_new,"flixel.graphics.tile.FlxDrawQuadsItem","new",0x0e2f86ca,"flixel.graphics.tile.FlxDrawQuadsItem.new","flixel/graphics/tile/FlxDrawQuadsItem.hx",26,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_35_reset,"flixel.graphics.tile.FlxDrawQuadsItem","reset",0xebcdeeb9,"flixel.graphics.tile.FlxDrawQuadsItem.reset","flixel/graphics/tile/FlxDrawQuadsItem.hx",35,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_47_dispose,"flixel.graphics.tile.FlxDrawQuadsItem","dispose",0x48b4b409,"flixel.graphics.tile.FlxDrawQuadsItem.dispose","flixel/graphics/tile/FlxDrawQuadsItem.hx",47,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_57_addQuad,"flixel.graphics.tile.FlxDrawQuadsItem","addQuad",0x14afaef2,"flixel.graphics.tile.FlxDrawQuadsItem.addQuad","flixel/graphics/tile/FlxDrawQuadsItem.hx",57,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_114_render,"flixel.graphics.tile.FlxDrawQuadsItem","render",0x6514132c,"flixel.graphics.tile.FlxDrawQuadsItem.render","flixel/graphics/tile/FlxDrawQuadsItem.hx",114,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_141_setParameterValue,"flixel.graphics.tile.FlxDrawQuadsItem","setParameterValue",0x1b657834,"flixel.graphics.tile.FlxDrawQuadsItem.setParameterValue","flixel/graphics/tile/FlxDrawQuadsItem.hx",141,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_15_boot,"flixel.graphics.tile.FlxDrawQuadsItem","boot",0x537f6a88,"flixel.graphics.tile.FlxDrawQuadsItem.boot","flixel/graphics/tile/FlxDrawQuadsItem.hx",15,0x0f089c65)
namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawQuadsItem_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6d98322fc3998392_26_new)
HXLINE(  27)		super::__construct();
HXLINE(  28)		this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TILES_dyn();
HXLINE(  29)		int length = null();
HXDLIN(  29)		bool fixed = null();
HXDLIN(  29)		::Array< Float > array = null();
HXDLIN(  29)		this->rects =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  30)		int length1 = null();
HXDLIN(  30)		bool fixed1 = null();
HXDLIN(  30)		::Array< Float > array1 = null();
HXDLIN(  30)		this->transforms =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  31)		this->alphas = ::Array_obj< Float >::__new(0);
            	}

Dynamic FlxDrawQuadsItem_obj::__CreateEmpty() { return new FlxDrawQuadsItem_obj; }

void *FlxDrawQuadsItem_obj::_hx_vtable = 0;

Dynamic FlxDrawQuadsItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDrawQuadsItem_obj > _hx_result = new FlxDrawQuadsItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDrawQuadsItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01f7e225) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01f7e225;
	} else {
		return inClassId==(int)0x4a99e57e;
	}
}

void FlxDrawQuadsItem_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_35_reset)
HXLINE(  36)		this->super::reset();
HXLINE(  37)		this->rects->set_length(0);
HXLINE(  38)		this->transforms->set_length(0);
HXLINE(  39)		this->alphas->removeRange(0,this->alphas->length);
HXLINE(  40)		if (::hx::IsNotNull( this->colorMultipliers )) {
HXLINE(  41)			this->colorMultipliers->removeRange(0,this->colorMultipliers->length);
            		}
HXLINE(  42)		if (::hx::IsNotNull( this->colorOffsets )) {
HXLINE(  43)			this->colorOffsets->removeRange(0,this->colorOffsets->length);
            		}
            	}


void FlxDrawQuadsItem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_47_dispose)
HXLINE(  48)		this->super::dispose();
HXLINE(  49)		this->rects = null();
HXLINE(  50)		this->transforms = null();
HXLINE(  51)		this->alphas = null();
HXLINE(  52)		this->colorMultipliers = null();
HXLINE(  53)		this->colorOffsets = null();
            	}


void FlxDrawQuadsItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_57_addQuad)
HXLINE(  58)		 ::flixel::math::FlxRect rect = frame->frame;
HXLINE(  59)		this->rects->push(rect->x);
HXLINE(  60)		this->rects->push(rect->y);
HXLINE(  61)		this->rects->push(rect->width);
HXLINE(  62)		this->rects->push(rect->height);
HXLINE(  64)		this->transforms->push(matrix->a);
HXLINE(  65)		this->transforms->push(matrix->b);
HXLINE(  66)		this->transforms->push(matrix->c);
HXLINE(  67)		this->transforms->push(matrix->d);
HXLINE(  68)		this->transforms->push(matrix->tx);
HXLINE(  69)		this->transforms->push(matrix->ty);
HXLINE(  71)		{
HXLINE(  72)			Float _hx_tmp;
HXDLIN(  72)			if (::hx::IsNotNull( transform )) {
HXLINE(  72)				_hx_tmp = transform->alphaMultiplier;
            			}
            			else {
HXLINE(  72)				_hx_tmp = ((Float)1.0);
            			}
HXDLIN(  72)			this->alphas->push(_hx_tmp);
HXDLIN(  72)			Float _hx_tmp1;
HXDLIN(  72)			if (::hx::IsNotNull( transform )) {
HXLINE(  72)				_hx_tmp1 = transform->alphaMultiplier;
            			}
            			else {
HXLINE(  72)				_hx_tmp1 = ((Float)1.0);
            			}
HXDLIN(  72)			this->alphas->push(_hx_tmp1);
HXDLIN(  72)			Float _hx_tmp2;
HXDLIN(  72)			if (::hx::IsNotNull( transform )) {
HXLINE(  72)				_hx_tmp2 = transform->alphaMultiplier;
            			}
            			else {
HXLINE(  72)				_hx_tmp2 = ((Float)1.0);
            			}
HXDLIN(  72)			this->alphas->push(_hx_tmp2);
HXDLIN(  72)			Float _hx_tmp3;
HXDLIN(  72)			if (::hx::IsNotNull( transform )) {
HXLINE(  72)				_hx_tmp3 = transform->alphaMultiplier;
            			}
            			else {
HXLINE(  72)				_hx_tmp3 = ((Float)1.0);
            			}
HXDLIN(  72)			this->alphas->push(_hx_tmp3);
            		}
HXLINE(  74)		bool _hx_tmp4;
HXDLIN(  74)		if (!(this->colored)) {
HXLINE(  74)			_hx_tmp4 = this->hasColorOffsets;
            		}
            		else {
HXLINE(  74)			_hx_tmp4 = true;
            		}
HXDLIN(  74)		if (_hx_tmp4) {
HXLINE(  76)			if (::hx::IsNull( this->colorMultipliers )) {
HXLINE(  77)				this->colorMultipliers = ::Array_obj< Float >::__new(0);
            			}
HXLINE(  79)			if (::hx::IsNull( this->colorOffsets )) {
HXLINE(  80)				this->colorOffsets = ::Array_obj< Float >::__new(0);
            			}
HXLINE(  82)			{
HXLINE(  82)				int _g = 0;
HXDLIN(  82)				while((_g < 4)){
HXLINE(  82)					_g = (_g + 1);
HXDLIN(  82)					int i = (_g - 1);
HXLINE(  84)					if (::hx::IsNotNull( transform )) {
HXLINE(  86)						this->colorMultipliers->push(transform->redMultiplier);
HXLINE(  87)						this->colorMultipliers->push(transform->greenMultiplier);
HXLINE(  88)						this->colorMultipliers->push(transform->blueMultiplier);
HXLINE(  90)						this->colorOffsets->push(transform->redOffset);
HXLINE(  91)						this->colorOffsets->push(transform->greenOffset);
HXLINE(  92)						this->colorOffsets->push(transform->blueOffset);
HXLINE(  93)						this->colorOffsets->push(transform->alphaOffset);
            					}
            					else {
HXLINE(  97)						this->colorMultipliers->push(1);
HXLINE(  98)						this->colorMultipliers->push(1);
HXLINE(  99)						this->colorMultipliers->push(1);
HXLINE( 101)						this->colorOffsets->push(0);
HXLINE( 102)						this->colorOffsets->push(0);
HXLINE( 103)						this->colorOffsets->push(0);
HXLINE( 104)						this->colorOffsets->push(0);
            					}
HXLINE( 107)					this->colorMultipliers->push(1);
            				}
            			}
            		}
            	}


void FlxDrawQuadsItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_114_render)
HXLINE( 115)		if ((this->rects->get_length() == 0)) {
HXLINE( 116)			return;
            		}
HXLINE( 118)		 ::flixel::graphics::tile::FlxGraphicsShader shader;
HXDLIN( 118)		if (::hx::IsNotNull( this->shader )) {
HXLINE( 118)			shader = this->shader;
            		}
            		else {
HXLINE( 118)			shader = this->graphics->shader;
            		}
HXLINE( 119)		shader->bitmap->input = this->graphics->bitmap;
HXLINE( 120)		 ::Dynamic _hx_tmp;
HXDLIN( 120)		bool _hx_tmp1;
HXDLIN( 120)		if (!(camera->antialiasing)) {
HXLINE( 120)			_hx_tmp1 = this->antialiasing;
            		}
            		else {
HXLINE( 120)			_hx_tmp1 = true;
            		}
HXDLIN( 120)		if (_hx_tmp1) {
HXLINE( 120)			_hx_tmp = 4;
            		}
            		else {
HXLINE( 120)			_hx_tmp = 5;
            		}
HXDLIN( 120)		shader->bitmap->filter = _hx_tmp;
HXLINE( 121)		shader->alpha->value = this->alphas;
HXLINE( 123)		bool _hx_tmp2;
HXDLIN( 123)		if (!(this->colored)) {
HXLINE( 123)			_hx_tmp2 = this->hasColorOffsets;
            		}
            		else {
HXLINE( 123)			_hx_tmp2 = true;
            		}
HXDLIN( 123)		if (_hx_tmp2) {
HXLINE( 125)			shader->colorMultiplier->value = this->colorMultipliers;
HXLINE( 126)			shader->colorOffset->value = this->colorOffsets;
            		}
HXLINE( 129)		{
HXLINE( 129)			 ::openfl::display::ShaderParameter_Bool parameter = shader->hasTransform;
HXDLIN( 129)			if (::hx::IsNull( parameter->value )) {
HXLINE( 129)				parameter->value = ::Array_obj< bool >::__new(0);
            			}
HXDLIN( 129)			parameter->value[0] = true;
            		}
HXLINE( 130)		{
HXLINE( 130)			 ::openfl::display::ShaderParameter_Bool parameter1 = shader->hasColorTransform;
HXDLIN( 130)			bool value;
HXDLIN( 130)			if (!(this->colored)) {
HXLINE( 130)				value = this->hasColorOffsets;
            			}
            			else {
HXLINE( 130)				value = true;
            			}
HXDLIN( 130)			if (::hx::IsNull( parameter1->value )) {
HXLINE( 130)				parameter1->value = ::Array_obj< bool >::__new(0);
            			}
HXDLIN( 130)			parameter1->value[0] = value;
            		}
HXLINE( 133)		camera->canvas->get_graphics()->overrideBlendMode(this->blend);
HXLINE( 135)		camera->canvas->get_graphics()->beginShaderFill(shader,null());
HXLINE( 136)		camera->canvas->get_graphics()->drawQuads(this->rects,null(),this->transforms);
HXLINE( 137)		this->super::render(camera);
            	}


void FlxDrawQuadsItem_obj::setParameterValue( ::openfl::display::ShaderParameter_Bool parameter,bool value){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_141_setParameterValue)
HXLINE( 142)		if (::hx::IsNull( parameter->value )) {
HXLINE( 143)			parameter->value = ::Array_obj< bool >::__new(0);
            		}
HXLINE( 144)		parameter->value[0] = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxDrawQuadsItem_obj,setParameterValue,(void))

int FlxDrawQuadsItem_obj::VERTICES_PER_QUAD;


::hx::ObjectPtr< FlxDrawQuadsItem_obj > FlxDrawQuadsItem_obj::__new() {
	::hx::ObjectPtr< FlxDrawQuadsItem_obj > __this = new FlxDrawQuadsItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxDrawQuadsItem_obj > FlxDrawQuadsItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxDrawQuadsItem_obj *__this = (FlxDrawQuadsItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDrawQuadsItem_obj), true, "flixel.graphics.tile.FlxDrawQuadsItem"));
	*(void **)__this = FlxDrawQuadsItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDrawQuadsItem_obj::FlxDrawQuadsItem_obj()
{
}

void FlxDrawQuadsItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawQuadsItem);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(rects,"rects");
	HX_MARK_MEMBER_NAME(transforms,"transforms");
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(colorMultipliers,"colorMultipliers");
	HX_MARK_MEMBER_NAME(colorOffsets,"colorOffsets");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawQuadsItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(rects,"rects");
	HX_VISIT_MEMBER_NAME(transforms,"transforms");
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(colorMultipliers,"colorMultipliers");
	HX_VISIT_MEMBER_NAME(colorOffsets,"colorOffsets");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxDrawQuadsItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rects") ) { return ::hx::Val( rects ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"alphas") ) { return ::hx::Val( alphas ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return ::hx::Val( addQuad_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transforms") ) { return ::hx::Val( transforms ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorOffsets") ) { return ::hx::Val( colorOffsets ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colorMultipliers") ) { return ::hx::Val( colorMultipliers ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setParameterValue") ) { return ::hx::Val( setParameterValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxDrawQuadsItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rects") ) { rects=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transforms") ) { transforms=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorOffsets") ) { colorOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colorMultipliers") ) { colorMultipliers=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawQuadsItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("rects",cf,32,bc,e6));
	outFields->push(HX_("transforms",87,91,34,9b));
	outFields->push(HX_("alphas",55,cb,3b,42));
	outFields->push(HX_("colorMultipliers",2f,d5,72,20));
	outFields->push(HX_("colorOffsets",5d,02,bc,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxDrawQuadsItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxDrawQuadsItem_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(FlxDrawQuadsItem_obj,rects),HX_("rects",cf,32,bc,e6)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(FlxDrawQuadsItem_obj,transforms),HX_("transforms",87,91,34,9b)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxDrawQuadsItem_obj,alphas),HX_("alphas",55,cb,3b,42)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxDrawQuadsItem_obj,colorMultipliers),HX_("colorMultipliers",2f,d5,72,20)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxDrawQuadsItem_obj,colorOffsets),HX_("colorOffsets",5d,02,bc,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxDrawQuadsItem_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxDrawQuadsItem_obj::VERTICES_PER_QUAD,HX_("VERTICES_PER_QUAD",0f,bf,33,83)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawQuadsItem_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("rects",cf,32,bc,e6),
	HX_("transforms",87,91,34,9b),
	HX_("alphas",55,cb,3b,42),
	HX_("colorMultipliers",2f,d5,72,20),
	HX_("colorOffsets",5d,02,bc,00),
	HX_("reset",cf,49,c8,e6),
	HX_("dispose",9f,80,4c,bb),
	HX_("addQuad",88,7b,47,87),
	HX_("render",56,6b,29,05),
	HX_("setParameterValue",4a,1c,87,10),
	::String(null()) };

static void FlxDrawQuadsItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawQuadsItem_obj::VERTICES_PER_QUAD,"VERTICES_PER_QUAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawQuadsItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawQuadsItem_obj::VERTICES_PER_QUAD,"VERTICES_PER_QUAD");
};

#endif

::hx::Class FlxDrawQuadsItem_obj::__mClass;

static ::String FlxDrawQuadsItem_obj_sStaticFields[] = {
	HX_("VERTICES_PER_QUAD",0f,bf,33,83),
	::String(null())
};

void FlxDrawQuadsItem_obj::__register()
{
	FlxDrawQuadsItem_obj _hx_dummy;
	FlxDrawQuadsItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.tile.FlxDrawQuadsItem",d8,19,66,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDrawQuadsItem_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDrawQuadsItem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxDrawQuadsItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxDrawQuadsItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawQuadsItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawQuadsItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawQuadsItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawQuadsItem_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_15_boot)
HXDLIN(  15)		VERTICES_PER_QUAD = 4;
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
