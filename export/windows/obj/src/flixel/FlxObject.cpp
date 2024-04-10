#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c625bfaa5b4263df_22_new,"flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",22,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_617_initVars,"flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",617,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_630_initMotionVars,"flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",630,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_647_destroy,"flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",647,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_664_update,"flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",664,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_688_updateMotion,"flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",688,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_710_draw,"flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",710,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_731_overlaps,"flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",731,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_763_overlapsCallback,"flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",763,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_785_overlapsAt,"flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",785,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_819_overlapsAtCallback,"flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",819,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_831_overlapsPoint,"flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",831,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_853_inWorldBounds,"flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",853,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_865_getScreenPosition,"flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",865,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_879_getPosition,"flixel.FlxObject","getPosition",0x1bf09890,"flixel.FlxObject.getPosition","flixel/FlxObject.hx",879,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_892_getMidpoint,"flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",892,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_898_getHitbox,"flixel.FlxObject","getHitbox",0x5f284dbf,"flixel.FlxObject.getHitbox","flixel/FlxObject.hx",898,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_911_reset,"flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",911,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_927_isOnScreen,"flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",927,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_938_isPixelPerfectRender,"flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",938,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_952_isTouching,"flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",952,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_963_justTouched,"flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",963,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_972_hurt,"flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",972,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_984_screenCenter,"flixel.FlxObject","screenCenter",0x59e58410,"flixel.FlxObject.screenCenter","flixel/FlxObject.hx",984,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1001_setPosition,"flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",1001,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1012_setSize,"flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",1012,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1078_getBoundingBox,"flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",1078,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1100_getRotatedBounds,"flixel.FlxObject","getRotatedBounds",0x6b926bb7,"flixel.FlxObject.getRotatedBounds","flixel/FlxObject.hx",1100,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1112_toString,"flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",1112,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1124_set_x,"flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",1124,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1129_set_y,"flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",1129,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1141_set_width,"flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",1141,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1153_set_height,"flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",1153,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1158_get_width,"flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1158,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1163_get_height,"flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1163,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1168_get_solid,"flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1168,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1172_set_solid,"flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1172,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1179_set_angle,"flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1179,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1184_set_moves,"flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1184,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1189_set_immovable,"flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1189,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1194_set_pixelPerfectRender,"flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1194,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1199_set_allowCollisions,"flixel.FlxObject","set_allowCollisions",0x7975d9fe,"flixel.FlxObject.set_allowCollisions","flixel/FlxObject.hx",1199,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_1220_set_path,"flixel.FlxObject","set_path",0xde100cd1,"flixel.FlxObject.set_path","flixel/FlxObject.hx",1220,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_101_separate,"flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",101,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_115_updateTouchingFlags,"flixel.FlxObject","updateTouchingFlags",0x15a0502c,"flixel.FlxObject.updateTouchingFlags","flixel/FlxObject.hx",115,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_127_computeOverlapX,"flixel.FlxObject","computeOverlapX",0x240ec739,"flixel.FlxObject.computeOverlapX","flixel/FlxObject.hx",127,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_183_separateX,"flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",183,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_239_updateTouchingFlagsX,"flixel.FlxObject","updateTouchingFlagsX",0xd6a5d6ac,"flixel.FlxObject.updateTouchingFlagsX","flixel/FlxObject.hx",239,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_259_computeOverlapY,"flixel.FlxObject","computeOverlapY",0x240ec73a,"flixel.FlxObject.computeOverlapY","flixel/FlxObject.hx",259,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_315_separateY,"flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",315,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_381_updateTouchingFlagsY,"flixel.FlxObject","updateTouchingFlagsY",0xd6a5d6ad,"flixel.FlxObject.updateTouchingFlagsY","flixel/FlxObject.hx",381,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_26_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",26,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_33_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",33,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_39_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",39,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_45_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",45,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_51_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",51,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_57_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",57,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_63_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",63,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_69_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",69,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_75_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",75,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_81_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",81,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_87_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",87,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_90_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",90,0xf0fe0d80)
HX_LOCAL_STACK_FRAME(_hx_pos_c625bfaa5b4263df_92_boot,"flixel.FlxObject","boot",0x1dc312e1,"flixel.FlxObject.boot","flixel/FlxObject.hx",92,0xf0fe0d80)
namespace flixel{

void FlxObject_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float Width = __o_Width.Default(0);
            		Float Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_22_new)
HXLINE( 594)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 594)		_this->x = ( (Float)(0) );
HXDLIN( 594)		_this->y = ( (Float)(0) );
HXDLIN( 594)		_this->width = ( (Float)(0) );
HXDLIN( 594)		_this->height = ( (Float)(0) );
HXDLIN( 594)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 594)		rect->_inPool = false;
HXDLIN( 594)		this->_rect = rect;
HXLINE( 592)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 592)		point->_inPool = false;
HXDLIN( 592)		this->_point = point;
HXLINE( 589)		this->path = null();
HXLINE( 547)		this->collisonXDrag = true;
HXLINE( 541)		this->allowCollisions = 4369;
HXLINE( 535)		this->wasTouching = 0;
HXLINE( 529)		this->touching = 0;
HXLINE( 523)		this->health = ((Float)1);
HXLINE( 518)		this->maxAngular = ((Float)10000);
HXLINE( 513)		this->angularDrag = ((Float)0);
HXLINE( 508)		this->angularAcceleration = ((Float)0);
HXLINE( 503)		this->angularVelocity = ((Float)0);
HXLINE( 498)		this->elasticity = ((Float)0);
HXLINE( 493)		this->mass = ((Float)1);
HXLINE( 445)		this->immovable = false;
HXLINE( 440)		this->moves = true;
HXLINE( 434)		this->angle = ((Float)0);
HXLINE( 428)		this->pixelPerfectPosition = true;
HXLINE( 403)		this->y = ((Float)0);
HXLINE( 398)		this->x = ((Float)0);
HXLINE( 603)		super::__construct();
HXLINE( 605)		this->set_x(X);
HXLINE( 606)		this->set_y(Y);
HXLINE( 607)		this->set_width(Width);
HXLINE( 608)		this->set_height(Height);
HXLINE( 610)		this->initVars();
            	}

Dynamic FlxObject_obj::__CreateEmpty() { return new FlxObject_obj; }

void *FlxObject_obj::_hx_vtable = 0;

Dynamic FlxObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxObject_obj > _hx_result = new FlxObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7ccf8994;
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxObject_obj::initVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_617_initVars)
HXLINE( 618)		this->flixelType = 1;
HXLINE( 619)		Float X = this->x;
HXDLIN( 619)		Float Y = this->y;
HXDLIN( 619)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 619)		point->_inPool = false;
HXDLIN( 619)		this->last = point;
HXLINE( 620)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(1,1);
HXDLIN( 620)		point1->_inPool = false;
HXDLIN( 620)		this->scrollFactor = point1;
HXLINE( 621)		this->pixelPerfectPosition = ::flixel::FlxObject_obj::defaultPixelPerfectPosition;
HXLINE( 623)		{
HXLINE( 623)			 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 623)			point2->_inPool = false;
HXDLIN( 623)			this->velocity = point2;
HXDLIN( 623)			 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 623)			point3->_inPool = false;
HXDLIN( 623)			this->acceleration = point3;
HXDLIN( 623)			 ::flixel::math::FlxPoint point4 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 623)			point4->_inPool = false;
HXDLIN( 623)			this->drag = point4;
HXDLIN( 623)			 ::flixel::math::FlxPoint point5 = ::flixel::math::FlxPoint_obj::_pool->get()->set(10000,10000);
HXDLIN( 623)			point5->_inPool = false;
HXDLIN( 623)			this->maxVelocity = point5;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

void FlxObject_obj::initMotionVars(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_630_initMotionVars)
HXLINE( 631)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 631)		point->_inPool = false;
HXDLIN( 631)		this->velocity = point;
HXLINE( 632)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 632)		point1->_inPool = false;
HXDLIN( 632)		this->acceleration = point1;
HXLINE( 633)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 633)		point2->_inPool = false;
HXDLIN( 633)		this->drag = point2;
HXLINE( 634)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(10000,10000);
HXDLIN( 634)		point3->_inPool = false;
HXDLIN( 634)		this->maxVelocity = point3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

void FlxObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_647_destroy)
HXLINE( 648)		this->super::destroy();
HXLINE( 650)		this->velocity = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->velocity)) );
HXLINE( 651)		this->acceleration = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->acceleration)) );
HXLINE( 652)		this->drag = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->drag)) );
HXLINE( 653)		this->maxVelocity = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->maxVelocity)) );
HXLINE( 654)		this->scrollFactor = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scrollFactor)) );
HXLINE( 655)		this->last = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->last)) );
HXLINE( 656)		this->_point = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE( 657)		this->_rect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->_rect)) );
            	}


void FlxObject_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_664_update)
HXLINE( 670)		this->last->set(this->x,this->y);
HXLINE( 672)		bool _hx_tmp;
HXDLIN( 672)		if (::hx::IsNotNull( this->path )) {
HXLINE( 672)			_hx_tmp = this->path->active;
            		}
            		else {
HXLINE( 672)			_hx_tmp = false;
            		}
HXDLIN( 672)		if (_hx_tmp) {
HXLINE( 673)			this->path->update(elapsed);
            		}
HXLINE( 675)		if (this->moves) {
HXLINE( 676)			this->updateMotion(elapsed);
            		}
HXLINE( 678)		this->wasTouching = this->touching;
HXLINE( 679)		this->touching = 0;
            	}


void FlxObject_obj::updateMotion(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_688_updateMotion)
HXLINE( 689)		Float velocityDelta = ::flixel::math::FlxVelocity_obj::computeVelocity(this->angularVelocity,this->angularAcceleration,this->angularDrag,this->maxAngular,elapsed);
HXDLIN( 689)		Float velocityDelta1 = (((Float)0.5) * (velocityDelta - this->angularVelocity));
HXLINE( 690)		 ::flixel::FlxObject _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 690)		_hx_tmp->angularVelocity = (_hx_tmp->angularVelocity + velocityDelta1);
HXLINE( 691)		this->set_angle((this->angle + (this->angularVelocity * elapsed)));
HXLINE( 692)		 ::flixel::FlxObject _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 692)		_hx_tmp1->angularVelocity = (_hx_tmp1->angularVelocity + velocityDelta1);
HXLINE( 694)		Float velocityDelta2 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->x,this->acceleration->x,this->drag->x,this->maxVelocity->x,elapsed);
HXDLIN( 694)		velocityDelta1 = (((Float)0.5) * (velocityDelta2 - this->velocity->x));
HXLINE( 695)		 ::flixel::math::FlxPoint fh = this->velocity;
HXDLIN( 695)		fh->set_x((fh->x + velocityDelta1));
HXLINE( 696)		Float delta = (this->velocity->x * elapsed);
HXLINE( 697)		 ::flixel::math::FlxPoint fh1 = this->velocity;
HXDLIN( 697)		fh1->set_x((fh1->x + velocityDelta1));
HXLINE( 698)		this->set_x((this->x + delta));
HXLINE( 700)		Float velocityDelta3 = ::flixel::math::FlxVelocity_obj::computeVelocity(this->velocity->y,this->acceleration->y,this->drag->y,this->maxVelocity->y,elapsed);
HXDLIN( 700)		velocityDelta1 = (((Float)0.5) * (velocityDelta3 - this->velocity->y));
HXLINE( 701)		 ::flixel::math::FlxPoint fh2 = this->velocity;
HXDLIN( 701)		fh2->set_y((fh2->y + velocityDelta1));
HXLINE( 702)		delta = (this->velocity->y * elapsed);
HXLINE( 703)		 ::flixel::math::FlxPoint fh3 = this->velocity;
HXDLIN( 703)		fh3->set_y((fh3->y + velocityDelta1));
HXLINE( 704)		this->set_y((this->y + delta));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

void FlxObject_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_710_draw)
            	}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_731_overlaps)
HXLINE( 732)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 733)		if (::hx::IsNotNull( group )) {
HXLINE( 735)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->overlapsCallback_dyn(),group,( (Float)(0) ),( (Float)(0) ),InScreenSpace,Camera);
            		}
HXLINE( 738)		if ((ObjectOrGroup->flixelType == 3)) {
HXLINE( 741)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(ObjectOrGroup) );
HXLINE( 742)			return tilemap->overlaps(::hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
            		}
HXLINE( 745)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 746)		if (!(InScreenSpace)) {
HXLINE( 747)			bool _hx_tmp;
HXDLIN( 747)			bool _hx_tmp1;
HXDLIN( 747)			Float object1 = object->x;
HXDLIN( 747)			Float _hx_tmp2 = (object1 + object->get_width());
HXDLIN( 747)			if ((_hx_tmp2 > this->x)) {
HXLINE( 747)				Float object1 = object->x;
HXDLIN( 747)				Float _hx_tmp = this->x;
HXDLIN( 747)				_hx_tmp1 = (object1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE( 747)				_hx_tmp1 = false;
            			}
HXDLIN( 747)			if (_hx_tmp1) {
HXLINE( 747)				Float object1 = object->y;
HXDLIN( 747)				Float _hx_tmp1 = (object1 + object->get_height());
HXDLIN( 747)				_hx_tmp = (_hx_tmp1 > this->y);
            			}
            			else {
HXLINE( 747)				_hx_tmp = false;
            			}
HXDLIN( 747)			if (_hx_tmp) {
HXLINE( 747)				Float object1 = object->y;
HXDLIN( 747)				Float _hx_tmp = this->y;
HXDLIN( 747)				return (object1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE( 747)				return false;
            			}
            		}
HXLINE( 750)		if (::hx::IsNull( Camera )) {
HXLINE( 751)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 753)		 ::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);
HXLINE( 754)		this->getScreenPosition(this->_point,Camera);
HXLINE( 755)		bool _hx_tmp;
HXDLIN( 755)		bool _hx_tmp1;
HXDLIN( 755)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 755)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN( 755)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE( 756)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 756)			Float _hx_tmp = this->_point->x;
HXLINE( 755)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 755)			_hx_tmp1 = false;
            		}
HXDLIN( 755)		if (_hx_tmp1) {
HXLINE( 757)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 757)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE( 755)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE( 755)			_hx_tmp = false;
            		}
HXDLIN( 755)		if (_hx_tmp) {
HXLINE( 758)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 758)			Float _hx_tmp = this->_point->y;
HXDLIN( 758)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 755)			return false;
            		}
HXDLIN( 755)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_763_overlapsCallback)
HXDLIN( 763)		return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt(Float X,Float Y, ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_785_overlapsAt)
HXLINE( 786)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE( 787)		if (::hx::IsNotNull( group )) {
HXLINE( 789)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->overlapsAtCallback_dyn(),group,X,Y,InScreenSpace,Camera);
            		}
HXLINE( 792)		if ((ObjectOrGroup->flixelType == 3)) {
HXLINE( 797)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(ObjectOrGroup) );
HXLINE( 798)			return tilemap->overlapsAt((tilemap->x - (X - this->x)),(tilemap->y - (Y - this->y)),::hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
            		}
HXLINE( 801)		 ::flixel::FlxObject object = ( ( ::flixel::FlxObject)(ObjectOrGroup) );
HXLINE( 802)		if (!(InScreenSpace)) {
HXLINE( 803)			bool _hx_tmp;
HXDLIN( 803)			bool _hx_tmp1;
HXDLIN( 803)			Float object1 = object->x;
HXDLIN( 803)			if (((object1 + object->get_width()) > X)) {
HXLINE( 803)				Float object1 = object->x;
HXDLIN( 803)				_hx_tmp1 = (object1 < (X + this->get_width()));
            			}
            			else {
HXLINE( 803)				_hx_tmp1 = false;
            			}
HXDLIN( 803)			if (_hx_tmp1) {
HXLINE( 803)				Float object1 = object->y;
HXDLIN( 803)				_hx_tmp = ((object1 + object->get_height()) > Y);
            			}
            			else {
HXLINE( 803)				_hx_tmp = false;
            			}
HXDLIN( 803)			if (_hx_tmp) {
HXLINE( 803)				Float object1 = object->y;
HXDLIN( 803)				return (object1 < (Y + this->get_height()));
            			}
            			else {
HXLINE( 803)				return false;
            			}
            		}
HXLINE( 806)		if (::hx::IsNull( Camera )) {
HXLINE( 807)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 809)		 ::flixel::math::FlxPoint objectScreenPos = object->getScreenPosition(null(),Camera);
HXLINE( 810)		this->getScreenPosition(this->_point,Camera);
HXLINE( 811)		bool _hx_tmp;
HXDLIN( 811)		bool _hx_tmp1;
HXDLIN( 811)		Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 811)		Float _hx_tmp2 = (objectScreenPos1 + object->get_width());
HXDLIN( 811)		if ((_hx_tmp2 > this->_point->x)) {
HXLINE( 812)			Float objectScreenPos1 = objectScreenPos->x;
HXDLIN( 812)			Float _hx_tmp = this->_point->x;
HXLINE( 811)			_hx_tmp1 = (objectScreenPos1 < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 811)			_hx_tmp1 = false;
            		}
HXDLIN( 811)		if (_hx_tmp1) {
HXLINE( 813)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 813)			Float _hx_tmp1 = (objectScreenPos1 + object->get_height());
HXLINE( 811)			_hx_tmp = (_hx_tmp1 > this->_point->y);
            		}
            		else {
HXLINE( 811)			_hx_tmp = false;
            		}
HXDLIN( 811)		if (_hx_tmp) {
HXLINE( 814)			Float objectScreenPos1 = objectScreenPos->y;
HXDLIN( 814)			Float _hx_tmp = this->_point->y;
HXDLIN( 814)			return (objectScreenPos1 < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 811)			return false;
            		}
HXDLIN( 811)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_819_overlapsAtCallback)
HXDLIN( 819)		return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxPoint point,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_831_overlapsPoint)
HXLINE( 832)		if (!(InScreenSpace)) {
HXLINE( 833)			bool _hx_tmp;
HXDLIN( 833)			bool _hx_tmp1;
HXDLIN( 833)			if ((point->x >= this->x)) {
HXLINE( 833)				Float point1 = point->x;
HXDLIN( 833)				Float _hx_tmp = this->x;
HXDLIN( 833)				_hx_tmp1 = (point1 < (_hx_tmp + this->get_width()));
            			}
            			else {
HXLINE( 833)				_hx_tmp1 = false;
            			}
HXDLIN( 833)			if (_hx_tmp1) {
HXLINE( 833)				_hx_tmp = (point->y >= this->y);
            			}
            			else {
HXLINE( 833)				_hx_tmp = false;
            			}
HXDLIN( 833)			if (_hx_tmp) {
HXLINE( 833)				Float point1 = point->y;
HXDLIN( 833)				Float _hx_tmp = this->y;
HXDLIN( 833)				return (point1 < (_hx_tmp + this->get_height()));
            			}
            			else {
HXLINE( 833)				return false;
            			}
            		}
HXLINE( 836)		if (::hx::IsNull( Camera )) {
HXLINE( 837)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 839)		Float xPos = (point->x - Camera->scroll->x);
HXLINE( 840)		Float yPos = (point->y - Camera->scroll->y);
HXLINE( 841)		this->getScreenPosition(this->_point,Camera);
HXLINE( 842)		if (point->_weak) {
HXLINE( 842)			point->put();
            		}
HXLINE( 843)		bool _hx_tmp;
HXDLIN( 843)		bool _hx_tmp1;
HXDLIN( 843)		if ((xPos >= this->_point->x)) {
HXLINE( 843)			Float _hx_tmp = this->_point->x;
HXDLIN( 843)			_hx_tmp1 = (xPos < (_hx_tmp + this->get_width()));
            		}
            		else {
HXLINE( 843)			_hx_tmp1 = false;
            		}
HXDLIN( 843)		if (_hx_tmp1) {
HXLINE( 843)			_hx_tmp = (yPos >= this->_point->y);
            		}
            		else {
HXLINE( 843)			_hx_tmp = false;
            		}
HXDLIN( 843)		if (_hx_tmp) {
HXLINE( 843)			Float _hx_tmp = this->_point->y;
HXDLIN( 843)			return (yPos < (_hx_tmp + this->get_height()));
            		}
            		else {
HXLINE( 843)			return false;
            		}
HXDLIN( 843)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_853_inWorldBounds)
HXDLIN( 853)		bool _hx_tmp;
HXDLIN( 853)		bool _hx_tmp1;
HXDLIN( 853)		Float _hx_tmp2 = this->x;
HXDLIN( 853)		Float _hx_tmp3 = (_hx_tmp2 + this->get_width());
HXDLIN( 853)		if ((_hx_tmp3 > ::flixel::FlxG_obj::worldBounds->x)) {
HXDLIN( 853)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 853)			_hx_tmp1 = (this->x < (_this->x + _this->width));
            		}
            		else {
HXDLIN( 853)			_hx_tmp1 = false;
            		}
HXDLIN( 853)		if (_hx_tmp1) {
HXDLIN( 853)			Float _hx_tmp1 = this->y;
HXDLIN( 853)			Float _hx_tmp2 = (_hx_tmp1 + this->get_height());
HXDLIN( 853)			_hx_tmp = (_hx_tmp2 > ::flixel::FlxG_obj::worldBounds->y);
            		}
            		else {
HXDLIN( 853)			_hx_tmp = false;
            		}
HXDLIN( 853)		if (_hx_tmp) {
HXDLIN( 853)			 ::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;
HXDLIN( 853)			return (this->y < (_this->y + _this->height));
            		}
            		else {
HXDLIN( 853)			return false;
            		}
HXDLIN( 853)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

 ::flixel::math::FlxPoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxPoint point, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_865_getScreenPosition)
HXLINE( 866)		if (::hx::IsNull( point )) {
HXLINE( 867)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 867)			point1->_inPool = false;
HXDLIN( 867)			point = point1;
            		}
HXLINE( 869)		if (::hx::IsNull( Camera )) {
HXLINE( 870)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 872)		point->set(this->x,this->y);
HXLINE( 873)		if (this->pixelPerfectPosition) {
HXLINE( 874)			point->set_x(( (Float)(::Math_obj::floor(point->x)) ));
HXDLIN( 874)			point->set_y(( (Float)(::Math_obj::floor(point->y)) ));
            		}
HXLINE( 876)		Float Y = (Camera->scroll->y * this->scrollFactor->y);
HXDLIN( 876)		point->set_x((point->x - (Camera->scroll->x * this->scrollFactor->x)));
HXDLIN( 876)		point->set_y((point->y - Y));
HXDLIN( 876)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

 ::flixel::math::FlxPoint FlxObject_obj::getPosition( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_879_getPosition)
HXLINE( 880)		if (::hx::IsNull( point )) {
HXLINE( 881)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 881)			point1->_inPool = false;
HXDLIN( 881)			point = point1;
            		}
HXLINE( 882)		return point->set(this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getPosition,return )

 ::flixel::math::FlxPoint FlxObject_obj::getMidpoint( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_892_getMidpoint)
HXLINE( 893)		if (::hx::IsNull( point )) {
HXLINE( 894)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 894)			point1->_inPool = false;
HXDLIN( 894)			point = point1;
            		}
HXLINE( 895)		Float _hx_tmp = this->x;
HXDLIN( 895)		Float _hx_tmp1 = (_hx_tmp + (this->get_width() * ((Float)0.5)));
HXDLIN( 895)		Float _hx_tmp2 = this->y;
HXDLIN( 895)		return point->set(_hx_tmp1,(_hx_tmp2 + (this->get_height() * ((Float)0.5))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

 ::flixel::math::FlxRect FlxObject_obj::getHitbox( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_898_getHitbox)
HXLINE( 899)		if (::hx::IsNull( rect )) {
HXLINE( 900)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 900)			_this->x = ( (Float)(0) );
HXDLIN( 900)			_this->y = ( (Float)(0) );
HXDLIN( 900)			_this->width = ( (Float)(0) );
HXDLIN( 900)			_this->height = ( (Float)(0) );
HXDLIN( 900)			 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 900)			rect1->_inPool = false;
HXDLIN( 900)			rect = rect1;
            		}
HXLINE( 901)		Float X = this->x;
HXDLIN( 901)		Float Y = this->y;
HXDLIN( 901)		Float Width = this->get_width();
HXDLIN( 901)		Float Height = this->get_height();
HXDLIN( 901)		rect->x = X;
HXDLIN( 901)		rect->y = Y;
HXDLIN( 901)		rect->width = Width;
HXDLIN( 901)		rect->height = Height;
HXDLIN( 901)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getHitbox,return )

void FlxObject_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_911_reset)
HXLINE( 912)		this->touching = 0;
HXLINE( 913)		this->wasTouching = 0;
HXLINE( 914)		this->setPosition(X,Y);
HXLINE( 915)		this->last->set(this->x,this->y);
HXLINE( 916)		this->velocity->set(null(),null());
HXLINE( 917)		this->revive();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_927_isOnScreen)
HXLINE( 928)		if (::hx::IsNull( Camera )) {
HXLINE( 929)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 931)		this->getScreenPosition(this->_point,Camera);
HXLINE( 932)		 ::flixel::math::FlxPoint point = this->_point;
HXDLIN( 932)		Float width = this->get_width();
HXDLIN( 932)		Float height = this->get_height();
HXDLIN( 932)		bool contained;
HXDLIN( 932)		bool contained1;
HXDLIN( 932)		bool contained2;
HXDLIN( 932)		if (((point->x + width) > Camera->viewOffsetX)) {
HXLINE( 932)			contained2 = (point->x < Camera->viewOffsetWidth);
            		}
            		else {
HXLINE( 932)			contained2 = false;
            		}
HXDLIN( 932)		if (contained2) {
HXLINE( 932)			contained1 = ((point->y + height) > Camera->viewOffsetY);
            		}
            		else {
HXLINE( 932)			contained1 = false;
            		}
HXDLIN( 932)		if (contained1) {
HXLINE( 932)			contained = (point->y < Camera->viewOffsetHeight);
            		}
            		else {
HXLINE( 932)			contained = false;
            		}
HXDLIN( 932)		if (point->_weak) {
HXLINE( 932)			point->put();
            		}
HXDLIN( 932)		return contained;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_938_isPixelPerfectRender)
HXLINE( 939)		if (::hx::IsNull( Camera )) {
HXLINE( 940)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 941)		if (::hx::IsNull( this->pixelPerfectRender )) {
HXLINE( 941)			return Camera->pixelPerfectRender;
            		}
            		else {
HXLINE( 941)			return ( (bool)(this->pixelPerfectRender) );
            		}
HXDLIN( 941)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching(int Direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_952_isTouching)
HXDLIN( 952)		return ((this->touching & Direction) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched(int Direction){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_963_justTouched)
HXDLIN( 963)		if (((this->touching & Direction) > 0)) {
HXDLIN( 963)			return ((this->wasTouching & Direction) <= 0);
            		}
            		else {
HXDLIN( 963)			return false;
            		}
HXDLIN( 963)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

void FlxObject_obj::hurt(Float Damage){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_972_hurt)
HXLINE( 973)		this->health = (this->health - Damage);
HXLINE( 974)		if ((this->health <= 0)) {
HXLINE( 975)			this->kill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

 ::flixel::FlxObject FlxObject_obj::screenCenter( ::flixel::util::FlxAxes __o_axes){
            		 ::flixel::util::FlxAxes axes = __o_axes;
            		if (::hx::IsNull(__o_axes)) axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_984_screenCenter)
HXLINE( 985)		bool _hx_tmp;
HXDLIN( 985)		switch((int)(axes->_hx_getIndex())){
            			case (int)0: case (int)2: {
HXLINE( 985)				_hx_tmp = true;
            			}
            			break;
            			default:{
HXLINE( 985)				_hx_tmp = false;
            			}
            		}
HXDLIN( 985)		if (_hx_tmp) {
HXLINE( 986)			int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 986)			this->set_x(((( (Float)(_hx_tmp) ) - this->get_width()) / ( (Float)(2) )));
            		}
HXLINE( 988)		bool _hx_tmp1;
HXDLIN( 988)		switch((int)(axes->_hx_getIndex())){
            			case (int)1: case (int)2: {
HXLINE( 988)				_hx_tmp1 = true;
            			}
            			break;
            			default:{
HXLINE( 988)				_hx_tmp1 = false;
            			}
            		}
HXDLIN( 988)		if (_hx_tmp1) {
HXLINE( 989)			int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 989)			this->set_y(((( (Float)(_hx_tmp) ) - this->get_height()) / ( (Float)(2) )));
            		}
HXLINE( 991)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,screenCenter,return )

void FlxObject_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1001_setPosition)
HXLINE(1002)		this->set_x(X);
HXLINE(1003)		this->set_y(Y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

void FlxObject_obj::setSize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1012_setSize)
HXLINE(1013)		this->set_width(Width);
HXLINE(1014)		this->set_height(Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

 ::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1078_getBoundingBox)
HXLINE(1079)		this->getScreenPosition(this->_point,camera);
HXLINE(1081)		{
HXLINE(1081)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1081)			Float X = this->_point->x;
HXDLIN(1081)			Float Y = this->_point->y;
HXDLIN(1081)			Float Width = this->get_width();
HXDLIN(1081)			Float Height = this->get_height();
HXDLIN(1081)			_this->x = X;
HXDLIN(1081)			_this->y = Y;
HXDLIN(1081)			_this->width = Width;
HXDLIN(1081)			_this->height = Height;
            		}
HXLINE(1082)		this->_rect = camera->transformRect(this->_rect);
HXLINE(1084)		if (this->isPixelPerfectRender(camera)) {
HXLINE(1085)			 ::flixel::math::FlxRect _this = this->_rect;
HXDLIN(1085)			_this->x = ( (Float)(::Math_obj::floor(_this->x)) );
HXDLIN(1085)			_this->y = ( (Float)(::Math_obj::floor(_this->y)) );
HXDLIN(1085)			_this->width = ( (Float)(::Math_obj::floor(_this->width)) );
HXDLIN(1085)			_this->height = ( (Float)(::Math_obj::floor(_this->height)) );
            		}
HXLINE(1088)		return this->_rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

 ::flixel::math::FlxRect FlxObject_obj::getRotatedBounds( ::flixel::math::FlxRect newRect){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1100_getRotatedBounds)
HXLINE(1101)		if (::hx::IsNull( newRect )) {
HXLINE(1102)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1102)			_this->x = ( (Float)(0) );
HXDLIN(1102)			_this->y = ( (Float)(0) );
HXDLIN(1102)			_this->width = ( (Float)(0) );
HXDLIN(1102)			_this->height = ( (Float)(0) );
HXDLIN(1102)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1102)			rect->_inPool = false;
HXDLIN(1102)			newRect = rect;
            		}
HXLINE(1104)		{
HXLINE(1104)			Float X = this->x;
HXDLIN(1104)			Float Y = this->y;
HXDLIN(1104)			Float Width = this->get_width();
HXDLIN(1104)			Float Height = this->get_height();
HXDLIN(1104)			newRect->x = X;
HXDLIN(1104)			newRect->y = Y;
HXDLIN(1104)			newRect->width = Width;
HXDLIN(1104)			newRect->height = Height;
            		}
HXLINE(1105)		return newRect->getRotatedBounds(this->angle,null(),newRect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getRotatedBounds,return )

::String FlxObject_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1112_toString)
HXLINE(1113)		 ::Dynamic value = this->x;
HXDLIN(1113)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1113)		_this->label = HX_("x",78,00,00,00);
HXDLIN(1113)		_this->value = value;
HXLINE(1114)		 ::Dynamic value1 = this->y;
HXDLIN(1114)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1114)		_this1->label = HX_("y",79,00,00,00);
HXDLIN(1114)		_this1->value = value1;
HXLINE(1115)		 ::Dynamic value2 = this->get_width();
HXDLIN(1115)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1115)		_this2->label = HX_("w",77,00,00,00);
HXDLIN(1115)		_this2->value = value2;
HXLINE(1116)		 ::Dynamic value3 = this->get_height();
HXDLIN(1116)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1116)		_this3->label = HX_("h",68,00,00,00);
HXDLIN(1116)		_this3->value = value3;
HXLINE(1117)		 ::Dynamic value4 = this->visible;
HXDLIN(1117)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1117)		_this4->label = HX_("visible",72,78,24,a3);
HXDLIN(1117)		_this4->value = value4;
HXLINE(1118)		 ::Dynamic value5 = this->velocity;
HXDLIN(1118)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1118)		_this5->label = HX_("velocity",1d,02,fe,1e);
HXDLIN(1118)		_this5->value = value5;
HXLINE(1112)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5));
            	}


Float FlxObject_obj::set_x(Float NewX){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1124_set_x)
HXDLIN(1124)		return (this->x = NewX);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y(Float NewY){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1129_set_y)
HXDLIN(1129)		return (this->y = NewY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width(Float Width){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1141_set_width)
HXDLIN(1141)		return (this->width = Width);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height(Float Height){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1153_set_height)
HXDLIN(1153)		return (this->height = Height);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1158_get_width)
HXDLIN(1158)		return this->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1163_get_height)
HXDLIN(1163)		return this->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid(){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1168_get_solid)
HXDLIN(1168)		return ((this->allowCollisions & 4369) > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid(bool Solid){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1172_set_solid)
HXLINE(1173)		int _hx_tmp;
HXDLIN(1173)		if (Solid) {
HXLINE(1173)			_hx_tmp = 4369;
            		}
            		else {
HXLINE(1173)			_hx_tmp = 0;
            		}
HXDLIN(1173)		this->set_allowCollisions(_hx_tmp);
HXLINE(1174)		return Solid;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1179_set_angle)
HXDLIN(1179)		return (this->angle = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1184_set_moves)
HXDLIN(1184)		return (this->moves = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1189_set_immovable)
HXDLIN(1189)		return (this->immovable = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender(bool Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1194_set_pixelPerfectRender)
HXDLIN(1194)		return ( (bool)((this->pixelPerfectRender = Value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

int FlxObject_obj::set_allowCollisions(int Value){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1199_set_allowCollisions)
HXDLIN(1199)		return (this->allowCollisions = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_allowCollisions,return )

 ::flixel::util::FlxPath FlxObject_obj::set_path( ::flixel::util::FlxPath path){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_1220_set_path)
HXLINE(1221)		if (::hx::IsInstanceEq( this->path,path )) {
HXLINE(1222)			return path;
            		}
HXLINE(1224)		if (::hx::IsNotNull( this->path )) {
HXLINE(1225)			this->path->object = null();
            		}
HXLINE(1227)		if (::hx::IsNotNull( path )) {
HXLINE(1228)			path->object = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(1229)		return (this->path = path);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_path,return )

bool FlxObject_obj::defaultPixelPerfectPosition;

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

 ::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

 ::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_101_separate)
HXLINE( 102)		bool separatedX = ::flixel::FlxObject_obj::separateX(Object1,Object2);
HXLINE( 103)		bool separatedY = ::flixel::FlxObject_obj::separateY(Object1,Object2);
HXLINE( 104)		if (!(separatedX)) {
HXLINE( 104)			return separatedY;
            		}
            		else {
HXLINE( 104)			return true;
            		}
HXDLIN( 104)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::updateTouchingFlags( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_115_updateTouchingFlags)
HXLINE( 116)		bool touchingX = ::flixel::FlxObject_obj::updateTouchingFlagsX(Object1,Object2);
HXLINE( 117)		bool touchingY = ::flixel::FlxObject_obj::updateTouchingFlagsY(Object1,Object2);
HXLINE( 118)		if (!(touchingX)) {
HXLINE( 118)			return touchingY;
            		}
            		else {
HXLINE( 118)			return true;
            		}
HXDLIN( 118)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlags,return )

Float FlxObject_obj::computeOverlapX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_127_computeOverlapX)
HXLINE( 128)		Float overlap = ( (Float)(0) );
HXLINE( 130)		Float obj1delta = (Object1->x - Object1->last->x);
HXLINE( 131)		Float obj2delta = (Object2->x - Object2->last->x);
HXLINE( 133)		if ((obj1delta != obj2delta)) {
HXLINE( 135)			Float obj1deltaAbs;
HXDLIN( 135)			if ((obj1delta > 0)) {
HXLINE( 135)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 135)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 136)			Float obj2deltaAbs;
HXDLIN( 136)			if ((obj2delta > 0)) {
HXLINE( 136)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 136)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 138)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 138)			Float X;
HXDLIN( 138)			if ((obj1delta > 0)) {
HXLINE( 138)				X = obj1delta;
            			}
            			else {
HXLINE( 138)				X = ( (Float)(0) );
            			}
HXDLIN( 138)			Float X1 = (Object1->x - X);
HXDLIN( 138)			Float Y = Object1->last->y;
HXDLIN( 138)			Float Width = (Object1->get_width() + obj1deltaAbs);
HXDLIN( 138)			Float Height = Object1->get_height();
HXDLIN( 138)			_this->x = X1;
HXDLIN( 138)			_this->y = Y;
HXDLIN( 138)			_this->width = Width;
HXDLIN( 138)			_this->height = Height;
HXDLIN( 138)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 140)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 140)			Float X2;
HXDLIN( 140)			if ((obj2delta > 0)) {
HXLINE( 140)				X2 = obj2delta;
            			}
            			else {
HXLINE( 140)				X2 = ( (Float)(0) );
            			}
HXDLIN( 140)			Float X3 = (Object2->x - X2);
HXDLIN( 140)			Float Y1 = Object2->last->y;
HXDLIN( 140)			Float Width1 = (Object2->get_width() + obj2deltaAbs);
HXDLIN( 140)			Float Height1 = Object2->get_height();
HXDLIN( 140)			_this1->x = X3;
HXDLIN( 140)			_this1->y = Y1;
HXDLIN( 140)			_this1->width = Width1;
HXDLIN( 140)			_this1->height = Height1;
HXDLIN( 140)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 143)			bool _hx_tmp;
HXDLIN( 143)			bool _hx_tmp1;
HXDLIN( 143)			bool _hx_tmp2;
HXDLIN( 143)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 143)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 143)				_hx_tmp2 = false;
            			}
HXDLIN( 143)			if (_hx_tmp2) {
HXLINE( 143)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 143)				_hx_tmp1 = false;
            			}
HXDLIN( 143)			if (_hx_tmp1) {
HXLINE( 143)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 143)				_hx_tmp = false;
            			}
HXDLIN( 143)			if (_hx_tmp) {
HXLINE( 147)				Float maxOverlap;
HXDLIN( 147)				if (checkMaxOverlap) {
HXLINE( 147)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 147)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 150)				if ((obj1delta > obj2delta)) {
HXLINE( 151)					Float Object11 = Object1->x;
HXDLIN( 151)					Float overlap1 = (Object11 + Object1->get_width());
HXDLIN( 151)					overlap = (overlap1 - Object2->x);
HXLINE( 152)					bool _hx_tmp;
HXDLIN( 152)					bool _hx_tmp1;
HXDLIN( 152)					bool _hx_tmp2;
HXDLIN( 152)					if (checkMaxOverlap) {
HXLINE( 152)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 152)						_hx_tmp2 = false;
            					}
HXDLIN( 152)					if (!(_hx_tmp2)) {
HXLINE( 152)						_hx_tmp1 = ((Object1->allowCollisions & 16) == 0);
            					}
            					else {
HXLINE( 152)						_hx_tmp1 = true;
            					}
HXDLIN( 152)					if (!(_hx_tmp1)) {
HXLINE( 152)						_hx_tmp = ((Object2->allowCollisions & 1) == 0);
            					}
            					else {
HXLINE( 152)						_hx_tmp = true;
            					}
HXDLIN( 152)					if (_hx_tmp) {
HXLINE( 155)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 157)						 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 157)						Object11->touching = (Object11->touching | 16);
HXLINE( 158)						 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 158)						Object21->touching = (Object21->touching | 1);
            					}
            				}
            				else {
HXLINE( 160)					if ((obj1delta < obj2delta)) {
HXLINE( 161)						Float Object11 = Object1->x;
HXDLIN( 161)						Float overlap1 = (Object11 - Object2->get_width());
HXDLIN( 161)						overlap = (overlap1 - Object2->x);
HXLINE( 162)						bool _hx_tmp;
HXDLIN( 162)						bool _hx_tmp1;
HXDLIN( 162)						bool _hx_tmp2;
HXDLIN( 162)						if (checkMaxOverlap) {
HXLINE( 162)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 162)							_hx_tmp2 = false;
            						}
HXDLIN( 162)						if (!(_hx_tmp2)) {
HXLINE( 162)							_hx_tmp1 = ((Object1->allowCollisions & 1) == 0);
            						}
            						else {
HXLINE( 162)							_hx_tmp1 = true;
            						}
HXDLIN( 162)						if (!(_hx_tmp1)) {
HXLINE( 162)							_hx_tmp = ((Object2->allowCollisions & 16) == 0);
            						}
            						else {
HXLINE( 162)							_hx_tmp = true;
            						}
HXDLIN( 162)						if (_hx_tmp) {
HXLINE( 165)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 167)							 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 167)							Object11->touching = (Object11->touching | 1);
HXLINE( 168)							 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 168)							Object21->touching = (Object21->touching | 16);
            						}
            					}
            				}
            			}
            		}
HXLINE( 173)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapX,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_183_separateX)
HXLINE( 185)		bool obj1immovable = Object1->immovable;
HXLINE( 186)		bool obj2immovable = Object2->immovable;
HXLINE( 187)		bool _hx_tmp;
HXDLIN( 187)		if (obj1immovable) {
HXLINE( 187)			_hx_tmp = obj2immovable;
            		}
            		else {
HXLINE( 187)			_hx_tmp = false;
            		}
HXDLIN( 187)		if (_hx_tmp) {
HXLINE( 188)			return false;
            		}
HXLINE( 192)		if ((Object1->flixelType == 3)) {
HXLINE( 193)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 194)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateX_dyn(),null(),null());
            		}
HXLINE( 196)		if ((Object2->flixelType == 3)) {
HXLINE( 197)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 198)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateX_dyn(),true,null());
            		}
HXLINE( 201)		Float overlap = ::flixel::FlxObject_obj::computeOverlapX(Object1,Object2,null());
HXLINE( 203)		if ((overlap != 0)) {
HXLINE( 204)			Float obj1v = Object1->velocity->x;
HXLINE( 205)			Float obj2v = Object2->velocity->x;
HXLINE( 207)			bool _hx_tmp;
HXDLIN( 207)			if (!(obj1immovable)) {
HXLINE( 207)				_hx_tmp = !(obj2immovable);
            			}
            			else {
HXLINE( 207)				_hx_tmp = false;
            			}
HXDLIN( 207)			if (_hx_tmp) {
HXLINE( 208)				overlap = (overlap * ((Float)0.5));
HXLINE( 209)				Object1->set_x((Object1->x - overlap));
HXLINE( 210)				Object2->set_x((Object2->x + overlap));
HXLINE( 212)				int obj1velocity;
HXDLIN( 212)				if ((obj2v > 0)) {
HXLINE( 212)					obj1velocity = 1;
            				}
            				else {
HXLINE( 212)					obj1velocity = -1;
            				}
HXDLIN( 212)				Float obj1velocity1 = (::Math_obj::sqrt((((obj2v * obj2v) * Object2->mass) / Object1->mass)) * ( (Float)(obj1velocity) ));
HXLINE( 213)				int obj2velocity;
HXDLIN( 213)				if ((obj1v > 0)) {
HXLINE( 213)					obj2velocity = 1;
            				}
            				else {
HXLINE( 213)					obj2velocity = -1;
            				}
HXDLIN( 213)				Float obj2velocity1 = (::Math_obj::sqrt((((obj1v * obj1v) * Object1->mass) / Object2->mass)) * ( (Float)(obj2velocity) ));
HXLINE( 214)				Float average = ((obj1velocity1 + obj2velocity1) * ((Float)0.5));
HXLINE( 215)				obj1velocity1 = (obj1velocity1 - average);
HXLINE( 216)				obj2velocity1 = (obj2velocity1 - average);
HXLINE( 217)				Object1->velocity->set_x((average + (obj1velocity1 * Object1->elasticity)));
HXLINE( 218)				Object2->velocity->set_x((average + (obj2velocity1 * Object2->elasticity)));
            			}
            			else {
HXLINE( 219)				if (!(obj1immovable)) {
HXLINE( 220)					Object1->set_x((Object1->x - overlap));
HXLINE( 221)					Object1->velocity->set_x((obj2v - (obj1v * Object1->elasticity)));
            				}
            				else {
HXLINE( 222)					if (!(obj2immovable)) {
HXLINE( 223)						Object2->set_x((Object2->x + overlap));
HXLINE( 224)						Object2->velocity->set_x((obj1v - (obj2v * Object2->elasticity)));
            					}
            				}
            			}
HXLINE( 226)			return true;
            		}
HXLINE( 229)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::updateTouchingFlagsX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_239_updateTouchingFlagsX)
HXLINE( 241)		if ((Object1->flixelType == 3)) {
HXLINE( 242)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 243)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),null(),null());
            		}
HXLINE( 245)		if ((Object2->flixelType == 3)) {
HXLINE( 246)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 247)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::updateTouchingFlagsX_dyn(),true,null());
            		}
HXLINE( 250)		return (::flixel::FlxObject_obj::computeOverlapX(Object1,Object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsX,return )

Float FlxObject_obj::computeOverlapY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,::hx::Null< bool >  __o_checkMaxOverlap){
            		bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_259_computeOverlapY)
HXLINE( 260)		Float overlap = ( (Float)(0) );
HXLINE( 262)		Float obj1delta = (Object1->y - Object1->last->y);
HXLINE( 263)		Float obj2delta = (Object2->y - Object2->last->y);
HXLINE( 265)		if ((obj1delta != obj2delta)) {
HXLINE( 267)			Float obj1deltaAbs;
HXDLIN( 267)			if ((obj1delta > 0)) {
HXLINE( 267)				obj1deltaAbs = obj1delta;
            			}
            			else {
HXLINE( 267)				obj1deltaAbs = -(obj1delta);
            			}
HXLINE( 268)			Float obj2deltaAbs;
HXDLIN( 268)			if ((obj2delta > 0)) {
HXLINE( 268)				obj2deltaAbs = obj2delta;
            			}
            			else {
HXLINE( 268)				obj2deltaAbs = -(obj2delta);
            			}
HXLINE( 270)			 ::flixel::math::FlxRect _this = ::flixel::FlxObject_obj::_firstSeparateFlxRect;
HXDLIN( 270)			Float X = Object1->x;
HXDLIN( 270)			Float Y;
HXDLIN( 270)			if ((obj1delta > 0)) {
HXLINE( 270)				Y = obj1delta;
            			}
            			else {
HXLINE( 270)				Y = ( (Float)(0) );
            			}
HXDLIN( 270)			Float Y1 = (Object1->y - Y);
HXDLIN( 270)			Float Width = Object1->get_width();
HXDLIN( 270)			Float Height = (Object1->get_height() + obj1deltaAbs);
HXDLIN( 270)			_this->x = X;
HXDLIN( 270)			_this->y = Y1;
HXDLIN( 270)			_this->width = Width;
HXDLIN( 270)			_this->height = Height;
HXDLIN( 270)			 ::flixel::math::FlxRect obj1rect = _this;
HXLINE( 272)			 ::flixel::math::FlxRect _this1 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;
HXDLIN( 272)			Float X1 = Object2->x;
HXDLIN( 272)			Float Y2;
HXDLIN( 272)			if ((obj2delta > 0)) {
HXLINE( 272)				Y2 = obj2delta;
            			}
            			else {
HXLINE( 272)				Y2 = ( (Float)(0) );
            			}
HXDLIN( 272)			Float Y3 = (Object2->y - Y2);
HXDLIN( 272)			Float Width1 = Object2->get_width();
HXDLIN( 272)			Float Height1 = (Object2->get_height() + obj2deltaAbs);
HXDLIN( 272)			_this1->x = X1;
HXDLIN( 272)			_this1->y = Y3;
HXDLIN( 272)			_this1->width = Width1;
HXDLIN( 272)			_this1->height = Height1;
HXDLIN( 272)			 ::flixel::math::FlxRect obj2rect = _this1;
HXLINE( 275)			bool _hx_tmp;
HXDLIN( 275)			bool _hx_tmp1;
HXDLIN( 275)			bool _hx_tmp2;
HXDLIN( 275)			if (((obj1rect->x + obj1rect->width) > obj2rect->x)) {
HXLINE( 275)				_hx_tmp2 = (obj1rect->x < (obj2rect->x + obj2rect->width));
            			}
            			else {
HXLINE( 275)				_hx_tmp2 = false;
            			}
HXDLIN( 275)			if (_hx_tmp2) {
HXLINE( 275)				_hx_tmp1 = ((obj1rect->y + obj1rect->height) > obj2rect->y);
            			}
            			else {
HXLINE( 275)				_hx_tmp1 = false;
            			}
HXDLIN( 275)			if (_hx_tmp1) {
HXLINE( 275)				_hx_tmp = (obj1rect->y < (obj2rect->y + obj2rect->height));
            			}
            			else {
HXLINE( 275)				_hx_tmp = false;
            			}
HXDLIN( 275)			if (_hx_tmp) {
HXLINE( 279)				Float maxOverlap;
HXDLIN( 279)				if (checkMaxOverlap) {
HXLINE( 279)					maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::flixel::FlxObject_obj::SEPARATE_BIAS);
            				}
            				else {
HXLINE( 279)					maxOverlap = ( (Float)(0) );
            				}
HXLINE( 282)				if ((obj1delta > obj2delta)) {
HXLINE( 283)					Float Object11 = Object1->y;
HXDLIN( 283)					Float overlap1 = (Object11 + Object1->get_height());
HXDLIN( 283)					overlap = (overlap1 - Object2->y);
HXLINE( 284)					bool _hx_tmp;
HXDLIN( 284)					bool _hx_tmp1;
HXDLIN( 284)					bool _hx_tmp2;
HXDLIN( 284)					if (checkMaxOverlap) {
HXLINE( 284)						_hx_tmp2 = (overlap > maxOverlap);
            					}
            					else {
HXLINE( 284)						_hx_tmp2 = false;
            					}
HXDLIN( 284)					if (!(_hx_tmp2)) {
HXLINE( 284)						_hx_tmp1 = ((Object1->allowCollisions & 4096) == 0);
            					}
            					else {
HXLINE( 284)						_hx_tmp1 = true;
            					}
HXDLIN( 284)					if (!(_hx_tmp1)) {
HXLINE( 284)						_hx_tmp = ((Object2->allowCollisions & 256) == 0);
            					}
            					else {
HXLINE( 284)						_hx_tmp = true;
            					}
HXDLIN( 284)					if (_hx_tmp) {
HXLINE( 287)						overlap = ( (Float)(0) );
            					}
            					else {
HXLINE( 289)						 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 289)						Object11->touching = (Object11->touching | 4096);
HXLINE( 290)						 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 290)						Object21->touching = (Object21->touching | 256);
            					}
            				}
            				else {
HXLINE( 292)					if ((obj1delta < obj2delta)) {
HXLINE( 293)						Float Object11 = Object1->y;
HXDLIN( 293)						Float overlap1 = (Object11 - Object2->get_height());
HXDLIN( 293)						overlap = (overlap1 - Object2->y);
HXLINE( 294)						bool _hx_tmp;
HXDLIN( 294)						bool _hx_tmp1;
HXDLIN( 294)						bool _hx_tmp2;
HXDLIN( 294)						if (checkMaxOverlap) {
HXLINE( 294)							_hx_tmp2 = (-(overlap) > maxOverlap);
            						}
            						else {
HXLINE( 294)							_hx_tmp2 = false;
            						}
HXDLIN( 294)						if (!(_hx_tmp2)) {
HXLINE( 294)							_hx_tmp1 = ((Object1->allowCollisions & 256) == 0);
            						}
            						else {
HXLINE( 294)							_hx_tmp1 = true;
            						}
HXDLIN( 294)						if (!(_hx_tmp1)) {
HXLINE( 294)							_hx_tmp = ((Object2->allowCollisions & 4096) == 0);
            						}
            						else {
HXLINE( 294)							_hx_tmp = true;
            						}
HXDLIN( 294)						if (_hx_tmp) {
HXLINE( 297)							overlap = ( (Float)(0) );
            						}
            						else {
HXLINE( 299)							 ::flixel::FlxObject Object11 = Object1;
HXDLIN( 299)							Object11->touching = (Object11->touching | 256);
HXLINE( 300)							 ::flixel::FlxObject Object21 = Object2;
HXDLIN( 300)							Object21->touching = (Object21->touching | 4096);
            						}
            					}
            				}
            			}
            		}
HXLINE( 305)		return overlap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapY,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_315_separateY)
HXLINE( 317)		bool obj1immovable = Object1->immovable;
HXLINE( 318)		bool obj2immovable = Object2->immovable;
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (obj1immovable) {
HXLINE( 319)			_hx_tmp = obj2immovable;
            		}
            		else {
HXLINE( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 320)			return false;
            		}
HXLINE( 324)		if ((Object1->flixelType == 3)) {
HXLINE( 325)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 326)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::separateY_dyn(),null(),null());
            		}
HXLINE( 328)		if ((Object2->flixelType == 3)) {
HXLINE( 329)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 330)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::separateY_dyn(),true,null());
            		}
HXLINE( 333)		Float overlap = ::flixel::FlxObject_obj::computeOverlapY(Object1,Object2,null());
HXLINE( 335)		if ((overlap != 0)) {
HXLINE( 336)			Float obj1delta = (Object1->y - Object1->last->y);
HXLINE( 337)			Float obj2delta = (Object2->y - Object2->last->y);
HXLINE( 338)			Float obj1v = Object1->velocity->y;
HXLINE( 339)			Float obj2v = Object2->velocity->y;
HXLINE( 341)			bool _hx_tmp;
HXDLIN( 341)			if (!(obj1immovable)) {
HXLINE( 341)				_hx_tmp = !(obj2immovable);
            			}
            			else {
HXLINE( 341)				_hx_tmp = false;
            			}
HXDLIN( 341)			if (_hx_tmp) {
HXLINE( 342)				overlap = (overlap * ((Float)0.5));
HXLINE( 343)				Object1->set_y((Object1->y - overlap));
HXLINE( 344)				Object2->set_y((Object2->y + overlap));
HXLINE( 346)				int obj1velocity;
HXDLIN( 346)				if ((obj2v > 0)) {
HXLINE( 346)					obj1velocity = 1;
            				}
            				else {
HXLINE( 346)					obj1velocity = -1;
            				}
HXDLIN( 346)				Float obj1velocity1 = (::Math_obj::sqrt((((obj2v * obj2v) * Object2->mass) / Object1->mass)) * ( (Float)(obj1velocity) ));
HXLINE( 347)				int obj2velocity;
HXDLIN( 347)				if ((obj1v > 0)) {
HXLINE( 347)					obj2velocity = 1;
            				}
            				else {
HXLINE( 347)					obj2velocity = -1;
            				}
HXDLIN( 347)				Float obj2velocity1 = (::Math_obj::sqrt((((obj1v * obj1v) * Object1->mass) / Object2->mass)) * ( (Float)(obj2velocity) ));
HXLINE( 348)				Float average = ((obj1velocity1 + obj2velocity1) * ((Float)0.5));
HXLINE( 349)				obj1velocity1 = (obj1velocity1 - average);
HXLINE( 350)				obj2velocity1 = (obj2velocity1 - average);
HXLINE( 351)				Object1->velocity->set_y((average + (obj1velocity1 * Object1->elasticity)));
HXLINE( 352)				Object2->velocity->set_y((average + (obj2velocity1 * Object2->elasticity)));
            			}
            			else {
HXLINE( 353)				if (!(obj1immovable)) {
HXLINE( 354)					Object1->set_y((Object1->y - overlap));
HXLINE( 355)					Object1->velocity->set_y((obj2v - (obj1v * Object1->elasticity)));
HXLINE( 357)					bool _hx_tmp;
HXDLIN( 357)					bool _hx_tmp1;
HXDLIN( 357)					bool _hx_tmp2;
HXDLIN( 357)					if (Object1->collisonXDrag) {
HXLINE( 357)						_hx_tmp2 = Object2->active;
            					}
            					else {
HXLINE( 357)						_hx_tmp2 = false;
            					}
HXDLIN( 357)					if (_hx_tmp2) {
HXLINE( 357)						_hx_tmp1 = Object2->moves;
            					}
            					else {
HXLINE( 357)						_hx_tmp1 = false;
            					}
HXDLIN( 357)					if (_hx_tmp1) {
HXLINE( 357)						_hx_tmp = (obj1delta > obj2delta);
            					}
            					else {
HXLINE( 357)						_hx_tmp = false;
            					}
HXDLIN( 357)					if (_hx_tmp) {
HXLINE( 358)						Object1->set_x((Object1->x + (Object2->x - Object2->last->x)));
            					}
            				}
            				else {
HXLINE( 360)					if (!(obj2immovable)) {
HXLINE( 361)						Object2->set_y((Object2->y + overlap));
HXLINE( 362)						Object2->velocity->set_y((obj1v - (obj2v * Object2->elasticity)));
HXLINE( 364)						bool _hx_tmp;
HXDLIN( 364)						bool _hx_tmp1;
HXDLIN( 364)						bool _hx_tmp2;
HXDLIN( 364)						if (Object2->collisonXDrag) {
HXLINE( 364)							_hx_tmp2 = Object1->active;
            						}
            						else {
HXLINE( 364)							_hx_tmp2 = false;
            						}
HXDLIN( 364)						if (_hx_tmp2) {
HXLINE( 364)							_hx_tmp1 = Object1->moves;
            						}
            						else {
HXLINE( 364)							_hx_tmp1 = false;
            						}
HXDLIN( 364)						if (_hx_tmp1) {
HXLINE( 364)							_hx_tmp = (obj1delta < obj2delta);
            						}
            						else {
HXLINE( 364)							_hx_tmp = false;
            						}
HXDLIN( 364)						if (_hx_tmp) {
HXLINE( 365)							Object2->set_x((Object2->x + (Object1->x - Object1->last->x)));
            						}
            					}
            				}
            			}
HXLINE( 368)			return true;
            		}
HXLINE( 371)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )

bool FlxObject_obj::updateTouchingFlagsY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2){
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_381_updateTouchingFlagsY)
HXLINE( 383)		if ((Object1->flixelType == 3)) {
HXLINE( 384)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object1) );
HXLINE( 385)			return tilemap->overlapsWithCallback(Object2,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),null(),null());
            		}
HXLINE( 387)		if ((Object2->flixelType == 3)) {
HXLINE( 388)			 ::flixel::tile::FlxBaseTilemap tilemap = ( ( ::flixel::tile::FlxBaseTilemap)(Object2) );
HXLINE( 389)			return tilemap->overlapsWithCallback(Object1,::flixel::FlxObject_obj::updateTouchingFlagsY_dyn(),true,null());
            		}
HXLINE( 392)		return (::flixel::FlxObject_obj::computeOverlapY(Object1,Object2,false) != 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsY,return )


::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	::hx::ObjectPtr< FlxObject_obj > __this = new FlxObject_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

::hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height) {
	FlxObject_obj *__this = (FlxObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxObject_obj), true, "flixel.FlxObject"));
	*(void **)__this = FlxObject_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return __this;
}

FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return ::hx::Val( drag ); }
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		if (HX_FIELD_EQ(inName,"mass") ) { return ::hx::Val( mass ); }
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return ::hx::Val( hurt_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"moves") ) { return ::hx::Val( moves ); }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_solid() ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return ::hx::Val( _rect ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		if (HX_FIELD_EQ(inName,"health") ) { return ::hx::Val( health ); }
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		if (HX_FIELD_EQ(inName,"touching") ) { return ::hx::Val( touching ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return ::hx::Val( set_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return ::hx::Val( immovable ); }
		if (HX_FIELD_EQ(inName,"getHitbox") ) { return ::hx::Val( getHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return ::hx::Val( get_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return ::hx::Val( set_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return ::hx::Val( set_moves_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return ::hx::Val( elasticity ); }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return ::hx::Val( maxAngular ); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return ::hx::Val( overlapsAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return ::hx::Val( isTouching_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return ::hx::Val( maxVelocity ); }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return ::hx::Val( angularDrag ); }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return ::hx::Val( wasTouching ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return ::hx::Val( getMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return ::hx::Val( justTouched_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return ::hx::Val( scrollFactor ); }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return ::hx::Val( acceleration ); }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return ::hx::Val( updateMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return ::hx::Val( screenCenter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return ::hx::Val( collisonXDrag ); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return ::hx::Val( inWorldBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return ::hx::Val( initMotionVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return ::hx::Val( getBoundingBox_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return ::hx::Val( angularVelocity ); }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return ::hx::Val( allowCollisions ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return ::hx::Val( overlapsCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRotatedBounds") ) { return ::hx::Val( getRotatedBounds_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return ::hx::Val( getScreenPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return ::hx::Val( pixelPerfectRender ); }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return ::hx::Val( overlapsAtCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return ::hx::Val( angularAcceleration ); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return ::hx::Val( set_allowCollisions_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return ::hx::Val( pixelPerfectPosition ); }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return ::hx::Val( isPixelPerfectRender_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = ( SEPARATE_BIAS ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeOverlapX") ) { outValue = computeOverlapX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"computeOverlapY") ) { outValue = computeOverlapY_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchingFlags") ) { outValue = updateTouchingFlags_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsX") ) { outValue = updateTouchingFlagsX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsY") ) { outValue = updateTouchingFlagsY_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = ( _firstSeparateFlxRect ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = ( _secondSeparateFlxRect ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { outValue = ( defaultPixelPerfectPosition ); return true; }
	}
	return false;
}

::hx::Val FlxObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_path(inValue.Cast<  ::flixel::util::FlxPath >()) );path=inValue.Cast<  ::flixel::util::FlxPath >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) );width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_angle(inValue.Cast< Float >()) );angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_moves(inValue.Cast< bool >()) );moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_solid(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) );height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_immovable(inValue.Cast< bool >()) );immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowCollisions(inValue.Cast< int >()) );allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixelPerfectRender(inValue.Cast<  ::Dynamic >()) );pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { defaultPixelPerfectPosition=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("pixelPerfectRender",dd,59,4f,2f));
	outFields->push(HX_("pixelPerfectPosition",f0,7e,5e,3d));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("moves",42,cc,65,0c));
	outFields->push(HX_("immovable",0a,27,70,27));
	outFields->push(HX_("solid",2b,b4,c5,80));
	outFields->push(HX_("scrollFactor",bc,ec,cf,3b));
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("acceleration",40,00,61,9a));
	outFields->push(HX_("drag",f4,2b,70,42));
	outFields->push(HX_("maxVelocity",e1,0c,c4,94));
	outFields->push(HX_("last",56,0a,ad,47));
	outFields->push(HX_("mass",f4,40,56,48));
	outFields->push(HX_("elasticity",79,23,b4,4d));
	outFields->push(HX_("angularVelocity",1f,1f,fe,58));
	outFields->push(HX_("angularAcceleration",42,c6,00,9a));
	outFields->push(HX_("angularDrag",f6,1f,19,9c));
	outFields->push(HX_("maxAngular",9e,28,f6,c2));
	outFields->push(HX_("health",9c,28,06,fd));
	outFields->push(HX_("touching",83,16,25,00));
	outFields->push(HX_("wasTouching",cc,44,e4,5f));
	outFields->push(HX_("allowCollisions",aa,c9,d9,59));
	outFields->push(HX_("collisonXDrag",97,ca,fa,0a));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("_rect",03,69,b8,fe));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxObject_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_("pixelPerfectRender",dd,59,4f,2f)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_("pixelPerfectPosition",f0,7e,5e,3d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_("moves",42,cc,65,0c)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_("immovable",0a,27,70,27)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_("scrollFactor",bc,ec,cf,3b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,acceleration),HX_("acceleration",40,00,61,9a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,drag),HX_("drag",f4,2b,70,42)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_("maxVelocity",e1,0c,c4,94)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,last),HX_("last",56,0a,ad,47)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_("mass",f4,40,56,48)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_("elasticity",79,23,b4,4d)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_("angularVelocity",1f,1f,fe,58)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_("angularAcceleration",42,c6,00,9a)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_("angularDrag",f6,1f,19,9c)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_("maxAngular",9e,28,f6,c2)},
	{::hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_("health",9c,28,06,fd)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_("touching",83,16,25,00)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_("wasTouching",cc,44,e4,5f)},
	{::hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_("allowCollisions",aa,c9,d9,59)},
	{::hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_("collisonXDrag",97,ca,fa,0a)},
	{::hx::fsObject /*  ::flixel::util::FlxPath */ ,(int)offsetof(FlxObject_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxObject_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxObject_obj,_rect),HX_("_rect",03,69,b8,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxObject_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxObject_obj::defaultPixelPerfectPosition,HX_("defaultPixelPerfectPosition",51,0a,c2,b0)},
	{::hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_("SEPARATE_BIAS",15,78,21,a0)},
	{::hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &FlxObject_obj::UP,HX_("UP",5b,4a,00,00)},
	{::hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_("DOWN",62,c0,2e,2d)},
	{::hx::fsInt,(void *) &FlxObject_obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_("CEILING",dd,32,72,b3)},
	{::hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_("FLOOR",ac,09,85,80)},
	{::hx::fsInt,(void *) &FlxObject_obj::WALL,HX_("WALL",0a,25,b3,39)},
	{::hx::fsInt,(void *) &FlxObject_obj::ANY,HX_("ANY",cc,96,31,00)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_("_firstSeparateFlxRect",22,b9,2f,5e)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_("_secondSeparateFlxRect",c0,bd,fc,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxObject_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("pixelPerfectRender",dd,59,4f,2f),
	HX_("pixelPerfectPosition",f0,7e,5e,3d),
	HX_("angle",d3,43,e2,22),
	HX_("moves",42,cc,65,0c),
	HX_("immovable",0a,27,70,27),
	HX_("scrollFactor",bc,ec,cf,3b),
	HX_("velocity",1d,02,fe,1e),
	HX_("acceleration",40,00,61,9a),
	HX_("drag",f4,2b,70,42),
	HX_("maxVelocity",e1,0c,c4,94),
	HX_("last",56,0a,ad,47),
	HX_("mass",f4,40,56,48),
	HX_("elasticity",79,23,b4,4d),
	HX_("angularVelocity",1f,1f,fe,58),
	HX_("angularAcceleration",42,c6,00,9a),
	HX_("angularDrag",f6,1f,19,9c),
	HX_("maxAngular",9e,28,f6,c2),
	HX_("health",9c,28,06,fd),
	HX_("touching",83,16,25,00),
	HX_("wasTouching",cc,44,e4,5f),
	HX_("allowCollisions",aa,c9,d9,59),
	HX_("collisonXDrag",97,ca,fa,0a),
	HX_("path",a5,e5,51,4a),
	HX_("_point",91,fb,76,c2),
	HX_("_rect",03,69,b8,fe),
	HX_("initVars",dc,5a,00,53),
	HX_("initMotionVars",32,e4,28,65),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateMotion",1f,2d,21,cb),
	HX_("draw",04,2c,70,42),
	HX_("overlaps",0c,d3,2a,45),
	HX_("overlapsCallback",f1,14,bf,b4),
	HX_("overlapsAt",1f,e7,ce,03),
	HX_("overlapsAtCallback",04,f4,81,3b),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("inWorldBounds",82,46,f2,f1),
	HX_("getScreenPosition",6b,93,88,24),
	HX_("getPosition",5f,63,ee,f0),
	HX_("getMidpoint",7e,d8,fb,50),
	HX_("getHitbox",ce,76,7e,d3),
	HX_("reset",cf,49,c8,e6),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isPixelPerfectRender",67,1c,f9,26),
	HX_("isTouching",8d,28,d4,7a),
	HX_("justTouched",12,59,b8,91),
	HX_("hurt",0f,5c,17,45),
	HX_("screenCenter",61,2e,f9,e2),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setSize",83,e1,d7,11),
	HX_("getBoundingBox",11,e8,45,0d),
	HX_("getRotatedBounds",88,12,38,3c),
	HX_("toString",ac,d0,6e,38),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_solid",82,10,6f,c4),
	HX_("set_solid",8e,fc,bf,a7),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_moves",a5,14,60,33),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_allowCollisions",cd,8b,81,21),
	HX_("set_path",a2,fa,69,78),
	::String(null()) };

static void FlxObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

::hx::Class FlxObject_obj::__mClass;

static ::String FlxObject_obj_sStaticFields[] = {
	HX_("defaultPixelPerfectPosition",51,0a,c2,b0),
	HX_("SEPARATE_BIAS",15,78,21,a0),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("NONE",b8,da,ca,33),
	HX_("CEILING",dd,32,72,b3),
	HX_("FLOOR",ac,09,85,80),
	HX_("WALL",0a,25,b3,39),
	HX_("ANY",cc,96,31,00),
	HX_("_firstSeparateFlxRect",22,b9,2f,5e),
	HX_("_secondSeparateFlxRect",c0,bd,fc,da),
	HX_("separate",63,1f,1c,07),
	HX_("updateTouchingFlags",fb,01,ac,bd),
	HX_("computeOverlapX",88,a5,ab,dc),
	HX_("separateX",95,57,7f,31),
	HX_("updateTouchingFlagsX",fd,b9,d5,38),
	HX_("computeOverlapY",89,a5,ab,dc),
	HX_("separateY",96,57,7f,31),
	HX_("updateTouchingFlagsY",fe,b9,d5,38),
	::String(null())
};

void FlxObject_obj::__register()
{
	FlxObject_obj _hx_dummy;
	FlxObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxObject",1f,50,95,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = FlxObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_26_boot)
HXDLIN(  26)		defaultPixelPerfectPosition = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_33_boot)
HXDLIN(  33)		SEPARATE_BIAS = ((Float)4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_39_boot)
HXDLIN(  39)		LEFT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_45_boot)
HXDLIN(  45)		RIGHT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_51_boot)
HXDLIN(  51)		UP = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_57_boot)
HXDLIN(  57)		DOWN = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_63_boot)
HXDLIN(  63)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_69_boot)
HXDLIN(  69)		CEILING = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_75_boot)
HXDLIN(  75)		FLOOR = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_81_boot)
HXDLIN(  81)		WALL = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_87_boot)
HXDLIN(  87)		ANY = 4369;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_90_boot)
HXDLIN(  90)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  90)			_this->x = ( (Float)(0) );
HXDLIN(  90)			_this->y = ( (Float)(0) );
HXDLIN(  90)			_this->width = ( (Float)(0) );
HXDLIN(  90)			_this->height = ( (Float)(0) );
HXDLIN(  90)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  90)			rect->_inPool = false;
HXDLIN(  90)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_90_boot)
HXDLIN(  90)		_firstSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_92_boot)
HXDLIN(  92)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  92)			_this->x = ( (Float)(0) );
HXDLIN(  92)			_this->y = ( (Float)(0) );
HXDLIN(  92)			_this->width = ( (Float)(0) );
HXDLIN(  92)			_this->height = ( (Float)(0) );
HXDLIN(  92)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  92)			rect->_inPool = false;
HXDLIN(  92)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_c625bfaa5b4263df_92_boot)
HXDLIN(  92)		_secondSeparateFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
