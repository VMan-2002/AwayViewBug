#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_controllers_ControllerBase
#include <away3d/controllers/ControllerBase.h>
#endif
#ifndef INCLUDED_away3d_controllers_HoverController
#include <away3d/controllers/HoverController.h>
#endif
#ifndef INCLUDED_away3d_controllers_LookAtController
#include <away3d/controllers/LookAtController.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_math_MathConsts
#include <away3d/core/math/MathConsts.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_93bd659335264e69_14_new,"away3d.controllers.HoverController","new",0x8be25004,"away3d.controllers.HoverController.new","away3d/controllers/HoverController.hx",14,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_51_get_steps,"away3d.controllers.HoverController","get_steps",0x3b6faaa2,"away3d.controllers.HoverController.get_steps","away3d/controllers/HoverController.hx",51,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_55_set_steps,"away3d.controllers.HoverController","set_steps",0x1ec096ae,"away3d.controllers.HoverController.set_steps","away3d/controllers/HoverController.hx",55,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_72_get_panAngle,"away3d.controllers.HoverController","get_panAngle",0xe1fd711b,"away3d.controllers.HoverController.get_panAngle","away3d/controllers/HoverController.hx",72,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_76_set_panAngle,"away3d.controllers.HoverController","set_panAngle",0xf6f6948f,"away3d.controllers.HoverController.set_panAngle","away3d/controllers/HoverController.hx",76,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_96_get_tiltAngle,"away3d.controllers.HoverController","get_tiltAngle",0x1dbbd3d1,"away3d.controllers.HoverController.get_tiltAngle","away3d/controllers/HoverController.hx",96,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_100_set_tiltAngle,"away3d.controllers.HoverController","set_tiltAngle",0x62c1b5dd,"away3d.controllers.HoverController.set_tiltAngle","away3d/controllers/HoverController.hx",100,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_120_get_distance,"away3d.controllers.HoverController","get_distance",0xd4f1b31a,"away3d.controllers.HoverController.get_distance","away3d/controllers/HoverController.hx",120,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_124_set_distance,"away3d.controllers.HoverController","set_distance",0xe9ead68e,"away3d.controllers.HoverController.set_distance","away3d/controllers/HoverController.hx",124,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_141_get_minPanAngle,"away3d.controllers.HoverController","get_minPanAngle",0x4ab41e23,"away3d.controllers.HoverController.get_minPanAngle","away3d/controllers/HoverController.hx",141,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_145_set_minPanAngle,"away3d.controllers.HoverController","set_minPanAngle",0x467f9b2f,"away3d.controllers.HoverController.set_minPanAngle","away3d/controllers/HoverController.hx",145,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_162_get_maxPanAngle,"away3d.controllers.HoverController","get_maxPanAngle",0x85ce7935,"away3d.controllers.HoverController.get_maxPanAngle","away3d/controllers/HoverController.hx",162,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_166_set_maxPanAngle,"away3d.controllers.HoverController","set_maxPanAngle",0x8199f641,"away3d.controllers.HoverController.set_maxPanAngle","away3d/controllers/HoverController.hx",166,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_183_get_minTiltAngle,"away3d.controllers.HoverController","get_minTiltAngle",0x54dc8dc9,"away3d.controllers.HoverController.get_minTiltAngle","away3d/controllers/HoverController.hx",183,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_187_set_minTiltAngle,"away3d.controllers.HoverController","set_minTiltAngle",0xab1e7b3d,"away3d.controllers.HoverController.set_minTiltAngle","away3d/controllers/HoverController.hx",187,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_204_get_maxTiltAngle,"away3d.controllers.HoverController","get_maxTiltAngle",0xd0d1e277,"away3d.controllers.HoverController.get_maxTiltAngle","away3d/controllers/HoverController.hx",204,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_208_set_maxTiltAngle,"away3d.controllers.HoverController","set_maxTiltAngle",0x2713cfeb,"away3d.controllers.HoverController.set_maxTiltAngle","away3d/controllers/HoverController.hx",208,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_225_get_yFactor,"away3d.controllers.HoverController","get_yFactor",0xf58e51e3,"away3d.controllers.HoverController.get_yFactor","away3d/controllers/HoverController.hx",225,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_229_set_yFactor,"away3d.controllers.HoverController","set_yFactor",0xfffb58ef,"away3d.controllers.HoverController.set_yFactor","away3d/controllers/HoverController.hx",229,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_244_get_wrapPanAngle,"away3d.controllers.HoverController","get_wrapPanAngle",0xf74a9785,"away3d.controllers.HoverController.get_wrapPanAngle","away3d/controllers/HoverController.hx",244,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_248_set_wrapPanAngle,"away3d.controllers.HoverController","set_wrapPanAngle",0x4d8c84f9,"away3d.controllers.HoverController.set_wrapPanAngle","away3d/controllers/HoverController.hx",248,0x5ab2a1ee)
HX_LOCAL_STACK_FRAME(_hx_pos_93bd659335264e69_293_update,"away3d.controllers.HoverController","update",0x86b764e5,"away3d.controllers.HoverController.update","away3d/controllers/HoverController.hx",293,0x5ab2a1ee)
namespace away3d{
namespace controllers{

void HoverController_obj::__construct( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject,::hx::Null< Float >  __o_panAngle,::hx::Null< Float >  __o_tiltAngle,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_minTiltAngle,::hx::Null< Float >  __o_maxTiltAngle, ::Dynamic minPanAngle, ::Dynamic maxPanAngle, ::Dynamic __o_steps, ::Dynamic __o_yFactor, ::Dynamic __o_wrapPanAngle){
            		Float panAngle = __o_panAngle.Default(0);
            		Float tiltAngle = __o_tiltAngle.Default(90);
            		Float distance = __o_distance.Default(1000);
            		Float minTiltAngle = __o_minTiltAngle.Default(-90);
            		Float maxTiltAngle = __o_maxTiltAngle.Default(90);
            		 ::Dynamic steps = __o_steps;
            		if (::hx::IsNull(__o_steps)) steps = 8;
            		 ::Dynamic yFactor = __o_yFactor;
            		if (::hx::IsNull(__o_yFactor)) yFactor = 2;
            		 ::Dynamic wrapPanAngle = __o_wrapPanAngle;
            		if (::hx::IsNull(__o_wrapPanAngle)) wrapPanAngle = false;
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_14_new)
HXLINE(  39)		this->_wrapPanAngle = false;
HXLINE(  38)		this->_yFactor = ((Float)2);
HXLINE(  37)		this->_steps = 8;
HXLINE(  36)		this->_maxTiltAngle = ((Float)90);
HXLINE(  35)		this->_minTiltAngle = ((Float)-90);
HXLINE(  34)		this->_maxPanAngle = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  33)		this->_minPanAngle = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  32)		this->_distance = ((Float)1000);
HXLINE(  31)		this->_tiltAngle = ((Float)90);
HXLINE(  30)		this->_panAngle = ((Float)0);
HXLINE(  28)		this->_currentTiltAngle = ((Float)90);
HXLINE(  27)		this->_currentPanAngle = ((Float)0);
HXLINE( 263)		super::__construct(targetObject,lookAtObject);
HXLINE( 265)		this->set_distance(distance);
HXLINE( 266)		this->set_panAngle(panAngle);
HXLINE( 267)		this->set_tiltAngle(tiltAngle);
HXLINE( 268)		Float _hx_tmp;
HXDLIN( 268)		if (::hx::IsNotNull( minPanAngle )) {
HXLINE( 268)			_hx_tmp = ( (Float)(minPanAngle) );
            		}
            		else {
HXLINE( 268)			_hx_tmp = ::Math_obj::NEGATIVE_INFINITY;
            		}
HXDLIN( 268)		this->set_minPanAngle(_hx_tmp);
HXLINE( 269)		Float _hx_tmp1;
HXDLIN( 269)		if (::hx::IsNotNull( maxPanAngle )) {
HXLINE( 269)			_hx_tmp1 = ( (Float)(maxPanAngle) );
            		}
            		else {
HXLINE( 269)			_hx_tmp1 = ::Math_obj::POSITIVE_INFINITY;
            		}
HXDLIN( 269)		this->set_maxPanAngle(_hx_tmp1);
HXLINE( 270)		this->set_minTiltAngle(minTiltAngle);
HXLINE( 271)		this->set_maxTiltAngle(maxTiltAngle);
HXLINE( 272)		this->set_steps(( (int)(steps) ));
HXLINE( 273)		this->set_yFactor(( (Float)(yFactor) ));
HXLINE( 274)		this->set_wrapPanAngle(( (bool)(wrapPanAngle) ));
HXLINE( 277)		this->_currentPanAngle = this->_panAngle;
HXLINE( 278)		this->_currentTiltAngle = this->_tiltAngle;
            	}

Dynamic HoverController_obj::__CreateEmpty() { return new HoverController_obj; }

void *HoverController_obj::_hx_vtable = 0;

Dynamic HoverController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HoverController_obj > _hx_result = new HoverController_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11]);
	return _hx_result;
}

bool HoverController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x51376be0) {
		if (inClassId<=(int)0x1f727d22) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1f727d22;
		} else {
			return inClassId==(int)0x51376be0;
		}
	} else {
		return inClassId==(int)0x603e0965;
	}
}

int HoverController_obj::get_steps(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_51_get_steps)
HXDLIN(  51)		return this->_steps;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_steps,return )

int HoverController_obj::set_steps(int val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_55_set_steps)
HXLINE(  56)		if ((val < 1)) {
HXLINE(  56)			val = 1;
            		}
HXLINE(  58)		if ((this->_steps == val)) {
HXLINE(  59)			return val;
            		}
HXLINE(  61)		this->_steps = val;
HXLINE(  63)		this->notifyUpdate();
HXLINE(  64)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_steps,return )

Float HoverController_obj::get_panAngle(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_72_get_panAngle)
HXDLIN(  72)		return this->_panAngle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_panAngle,return )

Float HoverController_obj::set_panAngle(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_76_set_panAngle)
HXLINE(  77)		if (::Math_obj::isNaN(val)) {
HXLINE(  78)			val = ( (Float)(0) );
            		}
HXLINE(  80)		val = ::Math_obj::max(this->_minPanAngle,::Math_obj::min(this->_maxPanAngle,val));
HXLINE(  82)		if ((this->_panAngle == val)) {
HXLINE(  83)			return val;
            		}
HXLINE(  85)		this->_panAngle = val;
HXLINE(  87)		this->notifyUpdate();
HXLINE(  88)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_panAngle,return )

Float HoverController_obj::get_tiltAngle(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_96_get_tiltAngle)
HXDLIN(  96)		return this->_tiltAngle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_tiltAngle,return )

Float HoverController_obj::set_tiltAngle(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_100_set_tiltAngle)
HXLINE( 101)		if (::Math_obj::isNaN(val)) {
HXLINE( 102)			val = ( (Float)(0) );
            		}
HXLINE( 104)		val = ::Math_obj::max(this->_minTiltAngle,::Math_obj::min(this->_maxTiltAngle,val));
HXLINE( 106)		if ((this->_tiltAngle == val)) {
HXLINE( 107)			return val;
            		}
HXLINE( 109)		this->_tiltAngle = val;
HXLINE( 111)		this->notifyUpdate();
HXLINE( 112)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_tiltAngle,return )

Float HoverController_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_120_get_distance)
HXDLIN( 120)		return this->_distance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_distance,return )

Float HoverController_obj::set_distance(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_124_set_distance)
HXLINE( 125)		if ((this->_distance == val)) {
HXLINE( 126)			return val;
            		}
HXLINE( 128)		this->_distance = val;
HXLINE( 130)		this->notifyUpdate();
HXLINE( 131)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_distance,return )

Float HoverController_obj::get_minPanAngle(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_141_get_minPanAngle)
HXDLIN( 141)		return this->_minPanAngle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_minPanAngle,return )

Float HoverController_obj::set_minPanAngle(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_145_set_minPanAngle)
HXLINE( 146)		if ((this->_minPanAngle == val)) {
HXLINE( 147)			return val;
            		}
HXLINE( 149)		this->_minPanAngle = val;
HXLINE( 151)		this->set_panAngle(::Math_obj::max(this->_minPanAngle,::Math_obj::min(this->_maxPanAngle,this->_panAngle)));
HXLINE( 152)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_minPanAngle,return )

Float HoverController_obj::get_maxPanAngle(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_162_get_maxPanAngle)
HXDLIN( 162)		return this->_maxPanAngle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_maxPanAngle,return )

Float HoverController_obj::set_maxPanAngle(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_166_set_maxPanAngle)
HXLINE( 167)		if ((this->_maxPanAngle == val)) {
HXLINE( 168)			return val;
            		}
HXLINE( 170)		this->_maxPanAngle = val;
HXLINE( 172)		this->set_panAngle(::Math_obj::max(this->_minPanAngle,::Math_obj::min(this->_maxPanAngle,this->_panAngle)));
HXLINE( 173)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_maxPanAngle,return )

Float HoverController_obj::get_minTiltAngle(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_183_get_minTiltAngle)
HXDLIN( 183)		return this->_minTiltAngle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_minTiltAngle,return )

Float HoverController_obj::set_minTiltAngle(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_187_set_minTiltAngle)
HXLINE( 188)		if ((this->_minTiltAngle == val)) {
HXLINE( 189)			return val;
            		}
HXLINE( 191)		this->_minTiltAngle = val;
HXLINE( 193)		this->set_tiltAngle(::Math_obj::max(this->_minTiltAngle,::Math_obj::min(this->_maxTiltAngle,this->_tiltAngle)));
HXLINE( 194)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_minTiltAngle,return )

Float HoverController_obj::get_maxTiltAngle(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_204_get_maxTiltAngle)
HXDLIN( 204)		return this->_maxTiltAngle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_maxTiltAngle,return )

Float HoverController_obj::set_maxTiltAngle(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_208_set_maxTiltAngle)
HXLINE( 209)		if ((this->_maxTiltAngle == val)) {
HXLINE( 210)			return val;
            		}
HXLINE( 212)		this->_maxTiltAngle = val;
HXLINE( 214)		this->set_tiltAngle(::Math_obj::max(this->_minTiltAngle,::Math_obj::min(this->_maxTiltAngle,this->_tiltAngle)));
HXLINE( 215)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_maxTiltAngle,return )

Float HoverController_obj::get_yFactor(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_225_get_yFactor)
HXDLIN( 225)		return this->_yFactor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_yFactor,return )

Float HoverController_obj::set_yFactor(Float val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_229_set_yFactor)
HXLINE( 230)		if ((this->_yFactor == val)) {
HXLINE( 231)			return val;
            		}
HXLINE( 233)		this->_yFactor = val;
HXLINE( 235)		this->notifyUpdate();
HXLINE( 236)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_yFactor,return )

bool HoverController_obj::get_wrapPanAngle(){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_244_get_wrapPanAngle)
HXDLIN( 244)		return this->_wrapPanAngle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HoverController_obj,get_wrapPanAngle,return )

bool HoverController_obj::set_wrapPanAngle(bool val){
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_248_set_wrapPanAngle)
HXLINE( 249)		if ((this->_wrapPanAngle == val)) {
HXLINE( 250)			return val;
            		}
HXLINE( 252)		this->_wrapPanAngle = val;
HXLINE( 254)		this->notifyUpdate();
HXLINE( 255)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HoverController_obj,set_wrapPanAngle,return )

void HoverController_obj::update(::hx::Null< bool >  __o_interpolate){
            		bool interpolate = __o_interpolate.Default(true);
            	HX_STACKFRAME(&_hx_pos_93bd659335264e69_293_update)
HXLINE( 294)		bool _hx_tmp;
HXDLIN( 294)		if ((this->_tiltAngle == this->_currentTiltAngle)) {
HXLINE( 294)			_hx_tmp = (this->_panAngle != this->_currentPanAngle);
            		}
            		else {
HXLINE( 294)			_hx_tmp = true;
            		}
HXDLIN( 294)		if (_hx_tmp) {
HXLINE( 296)			this->notifyUpdate();
HXLINE( 298)			if (this->_wrapPanAngle) {
HXLINE( 299)				if ((this->_panAngle < 0)) {
HXLINE( 300)					 ::away3d::controllers::HoverController _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 300)					_hx_tmp->_currentPanAngle = (_hx_tmp->_currentPanAngle + ((::hx::Mod(this->_panAngle,360) + 360) - this->_panAngle));
HXLINE( 301)					this->_panAngle = (::hx::Mod(this->_panAngle,360) + 360);
            				}
            				else {
HXLINE( 303)					 ::away3d::controllers::HoverController _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)					_hx_tmp->_currentPanAngle = (_hx_tmp->_currentPanAngle + (::hx::Mod(this->_panAngle,360) - this->_panAngle));
HXLINE( 304)					this->_panAngle = ::hx::Mod(this->_panAngle,360);
            				}
HXLINE( 307)				while(((this->_panAngle - this->_currentPanAngle) < -180)){
HXLINE( 308)					 ::away3d::controllers::HoverController _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 308)					_hx_tmp->_currentPanAngle = (_hx_tmp->_currentPanAngle - ( (Float)(360) ));
            				}
HXLINE( 310)				while(((this->_panAngle - this->_currentPanAngle) > 180)){
HXLINE( 311)					 ::away3d::controllers::HoverController _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 311)					_hx_tmp->_currentPanAngle = (_hx_tmp->_currentPanAngle + 360);
            				}
            			}
HXLINE( 314)			if (interpolate) {
HXLINE( 315)				 ::away3d::controllers::HoverController _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 315)				Float _hx_tmp1 = _hx_tmp->_currentTiltAngle;
HXDLIN( 315)				Float _hx_tmp2 = (this->_tiltAngle - this->_currentTiltAngle);
HXDLIN( 315)				_hx_tmp->_currentTiltAngle = (_hx_tmp1 + (_hx_tmp2 / ( (Float)((this->get_steps() + 1)) )));
HXLINE( 316)				 ::away3d::controllers::HoverController _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 316)				Float _hx_tmp4 = _hx_tmp3->_currentPanAngle;
HXDLIN( 316)				Float _hx_tmp5 = (this->_panAngle - this->_currentPanAngle);
HXDLIN( 316)				_hx_tmp3->_currentPanAngle = (_hx_tmp4 + (_hx_tmp5 / ( (Float)((this->get_steps() + 1)) )));
            			}
            			else {
HXLINE( 318)				this->_currentPanAngle = this->_panAngle;
HXLINE( 319)				this->_currentTiltAngle = this->_tiltAngle;
            			}
HXLINE( 323)			bool _hx_tmp;
HXDLIN( 323)			Float _hx_tmp1 = this->get_tiltAngle();
HXDLIN( 323)			if ((::Math_obj::abs((_hx_tmp1 - this->_currentTiltAngle)) < ((Float)0.01))) {
HXLINE( 323)				_hx_tmp = (::Math_obj::abs((this->_panAngle - this->_currentPanAngle)) < ((Float)0.01));
            			}
            			else {
HXLINE( 323)				_hx_tmp = false;
            			}
HXDLIN( 323)			if (_hx_tmp) {
HXLINE( 324)				this->_currentTiltAngle = this->_tiltAngle;
HXLINE( 325)				this->_currentPanAngle = this->_panAngle;
            			}
            		}
HXLINE( 329)		if (::hx::IsNull( this->get_targetObject() )) {
HXLINE( 329)			return;
            		}
HXLINE( 331)		if (::hx::IsNotNull( this->_lookAtPosition )) {
HXLINE( 332)			this->_pos->x = this->_lookAtPosition->x;
HXLINE( 333)			this->_pos->y = this->_lookAtPosition->y;
HXLINE( 334)			this->_pos->z = this->_lookAtPosition->z;
            		}
            		else {
HXLINE( 335)			if (::hx::IsNotNull( this->_lookAtObject )) {
HXLINE( 336)				bool _hx_tmp;
HXDLIN( 336)				if (::hx::IsNotNull( this->_targetObject->get_parent() )) {
HXLINE( 336)					_hx_tmp = ::hx::IsNotNull( this->_lookAtObject->get_parent() );
            				}
            				else {
HXLINE( 336)					_hx_tmp = false;
            				}
HXDLIN( 336)				if (_hx_tmp) {
HXLINE( 337)					 ::away3d::containers::ObjectContainer3D _hx_tmp = this->_targetObject->get_parent();
HXDLIN( 337)					if (::hx::IsInstanceNotEq( _hx_tmp,this->_lookAtObject->get_parent() )) {
HXLINE( 338)						this->_pos->x = this->_lookAtObject->get_scenePosition()->x;
HXLINE( 339)						this->_pos->y = this->_lookAtObject->get_scenePosition()->y;
HXLINE( 340)						this->_pos->z = this->_lookAtObject->get_scenePosition()->z;
HXLINE( 341)						 ::openfl::geom::Matrix3D _hx_tmp = this->_targetObject->get_parent()->get_inverseSceneTransform();
HXDLIN( 341)						::away3d::core::math::Matrix3DUtils_obj::transformVector(_hx_tmp,this->_pos,this->_pos);
            					}
            					else {
HXLINE( 343)						 ::openfl::geom::Matrix3D _hx_tmp = this->_lookAtObject->get_transform();
HXDLIN( 343)						::away3d::core::math::Matrix3DUtils_obj::getTranslation(_hx_tmp,this->_pos);
            					}
            				}
            				else {
HXLINE( 345)					if (::hx::IsNotNull( this->_lookAtObject->get_scene() )) {
HXLINE( 346)						this->_pos->x = this->_lookAtObject->get_scenePosition()->x;
HXLINE( 347)						this->_pos->y = this->_lookAtObject->get_scenePosition()->y;
HXLINE( 348)						this->_pos->z = this->_lookAtObject->get_scenePosition()->z;
            					}
            					else {
HXLINE( 350)						 ::openfl::geom::Matrix3D _hx_tmp = this->_lookAtObject->get_transform();
HXDLIN( 350)						::away3d::core::math::Matrix3DUtils_obj::getTranslation(_hx_tmp,this->_pos);
            					}
            				}
            			}
            			else {
HXLINE( 353)				this->_pos->x = this->_origin->x;
HXLINE( 354)				this->_pos->y = this->_origin->y;
HXLINE( 355)				this->_pos->z = this->_origin->z;
            			}
            		}
HXLINE( 358)		this->_targetObject->set_x((this->_pos->x + ((this->_distance * ::Math_obj::sin((this->_currentPanAngle * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS))) * ::Math_obj::cos((this->_currentTiltAngle * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS)))));
HXLINE( 359)		this->_targetObject->set_z((this->_pos->z + ((this->_distance * ::Math_obj::cos((this->_currentPanAngle * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS))) * ::Math_obj::cos((this->_currentTiltAngle * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS)))));
HXLINE( 360)		this->_targetObject->set_y((this->_pos->y + ((this->_distance * ::Math_obj::sin((this->_currentTiltAngle * ::away3d::core::math::MathConsts_obj::DEGREES_TO_RADIANS))) * this->_yFactor)));
HXLINE( 361)		this->super::update(null());
            	}



::hx::ObjectPtr< HoverController_obj > HoverController_obj::__new( ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject,::hx::Null< Float >  __o_panAngle,::hx::Null< Float >  __o_tiltAngle,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_minTiltAngle,::hx::Null< Float >  __o_maxTiltAngle, ::Dynamic minPanAngle, ::Dynamic maxPanAngle, ::Dynamic __o_steps, ::Dynamic __o_yFactor, ::Dynamic __o_wrapPanAngle) {
	::hx::ObjectPtr< HoverController_obj > __this = new HoverController_obj();
	__this->__construct(targetObject,lookAtObject,__o_panAngle,__o_tiltAngle,__o_distance,__o_minTiltAngle,__o_maxTiltAngle,minPanAngle,maxPanAngle,__o_steps,__o_yFactor,__o_wrapPanAngle);
	return __this;
}

::hx::ObjectPtr< HoverController_obj > HoverController_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::entities::Entity targetObject, ::away3d::containers::ObjectContainer3D lookAtObject,::hx::Null< Float >  __o_panAngle,::hx::Null< Float >  __o_tiltAngle,::hx::Null< Float >  __o_distance,::hx::Null< Float >  __o_minTiltAngle,::hx::Null< Float >  __o_maxTiltAngle, ::Dynamic minPanAngle, ::Dynamic maxPanAngle, ::Dynamic __o_steps, ::Dynamic __o_yFactor, ::Dynamic __o_wrapPanAngle) {
	HoverController_obj *__this = (HoverController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HoverController_obj), true, "away3d.controllers.HoverController"));
	*(void **)__this = HoverController_obj::_hx_vtable;
	__this->__construct(targetObject,lookAtObject,__o_panAngle,__o_tiltAngle,__o_distance,__o_minTiltAngle,__o_maxTiltAngle,minPanAngle,maxPanAngle,__o_steps,__o_yFactor,__o_wrapPanAngle);
	return __this;
}

HoverController_obj::HoverController_obj()
{
}

::hx::Val HoverController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"steps") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_steps() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_steps") ) { return ::hx::Val( _steps ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yFactor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_yFactor() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"panAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_panAngle() ); }
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_distance() ); }
		if (HX_FIELD_EQ(inName,"_yFactor") ) { return ::hx::Val( _yFactor ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tiltAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tiltAngle() ); }
		if (HX_FIELD_EQ(inName,"_panAngle") ) { return ::hx::Val( _panAngle ); }
		if (HX_FIELD_EQ(inName,"_distance") ) { return ::hx::Val( _distance ); }
		if (HX_FIELD_EQ(inName,"get_steps") ) { return ::hx::Val( get_steps_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_steps") ) { return ::hx::Val( set_steps_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tiltAngle") ) { return ::hx::Val( _tiltAngle ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minPanAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minPanAngle() ); }
		if (HX_FIELD_EQ(inName,"maxPanAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxPanAngle() ); }
		if (HX_FIELD_EQ(inName,"get_yFactor") ) { return ::hx::Val( get_yFactor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_yFactor") ) { return ::hx::Val( set_yFactor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minTiltAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minTiltAngle() ); }
		if (HX_FIELD_EQ(inName,"maxTiltAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxTiltAngle() ); }
		if (HX_FIELD_EQ(inName,"wrapPanAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wrapPanAngle() ); }
		if (HX_FIELD_EQ(inName,"_minPanAngle") ) { return ::hx::Val( _minPanAngle ); }
		if (HX_FIELD_EQ(inName,"_maxPanAngle") ) { return ::hx::Val( _maxPanAngle ); }
		if (HX_FIELD_EQ(inName,"get_panAngle") ) { return ::hx::Val( get_panAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_panAngle") ) { return ::hx::Val( set_panAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_distance") ) { return ::hx::Val( get_distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_distance") ) { return ::hx::Val( set_distance_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_minTiltAngle") ) { return ::hx::Val( _minTiltAngle ); }
		if (HX_FIELD_EQ(inName,"_maxTiltAngle") ) { return ::hx::Val( _maxTiltAngle ); }
		if (HX_FIELD_EQ(inName,"_wrapPanAngle") ) { return ::hx::Val( _wrapPanAngle ); }
		if (HX_FIELD_EQ(inName,"get_tiltAngle") ) { return ::hx::Val( get_tiltAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tiltAngle") ) { return ::hx::Val( set_tiltAngle_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_minPanAngle") ) { return ::hx::Val( get_minPanAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minPanAngle") ) { return ::hx::Val( set_minPanAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxPanAngle") ) { return ::hx::Val( get_maxPanAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxPanAngle") ) { return ::hx::Val( set_maxPanAngle_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentPanAngle") ) { return ::hx::Val( _currentPanAngle ); }
		if (HX_FIELD_EQ(inName,"get_minTiltAngle") ) { return ::hx::Val( get_minTiltAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minTiltAngle") ) { return ::hx::Val( set_minTiltAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxTiltAngle") ) { return ::hx::Val( get_maxTiltAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxTiltAngle") ) { return ::hx::Val( set_maxTiltAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wrapPanAngle") ) { return ::hx::Val( get_wrapPanAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wrapPanAngle") ) { return ::hx::Val( set_wrapPanAngle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentTiltAngle") ) { return ::hx::Val( _currentTiltAngle ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HoverController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"steps") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_steps(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_steps") ) { _steps=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yFactor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_yFactor(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"panAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_panAngle(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_distance(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_yFactor") ) { _yFactor=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tiltAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tiltAngle(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_panAngle") ) { _panAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tiltAngle") ) { _tiltAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minPanAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minPanAngle(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maxPanAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxPanAngle(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minTiltAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minTiltAngle(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maxTiltAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxTiltAngle(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"wrapPanAngle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wrapPanAngle(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_minPanAngle") ) { _minPanAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxPanAngle") ) { _maxPanAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_minTiltAngle") ) { _minTiltAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxTiltAngle") ) { _maxTiltAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wrapPanAngle") ) { _wrapPanAngle=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentPanAngle") ) { _currentPanAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentTiltAngle") ) { _currentTiltAngle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HoverController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("steps",a7,7b,0e,84));
	outFields->push(HX_("panAngle",36,51,05,79));
	outFields->push(HX_("tiltAngle",56,0b,98,ad));
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("minPanAngle",e8,00,b1,b3));
	outFields->push(HX_("maxPanAngle",fa,5b,cb,ee));
	outFields->push(HX_("minTiltAngle",64,17,26,c9));
	outFields->push(HX_("maxTiltAngle",12,6c,1b,45));
	outFields->push(HX_("yFactor",28,2e,47,c0));
	outFields->push(HX_("wrapPanAngle",20,21,94,6b));
	outFields->push(HX_("_currentPanAngle",10,4d,36,38));
	outFields->push(HX_("_currentTiltAngle",3c,6e,43,39));
	outFields->push(HX_("_panAngle",95,48,9b,c0));
	outFields->push(HX_("_tiltAngle",17,87,3a,09));
	outFields->push(HX_("_distance",94,8a,8f,b3));
	outFields->push(HX_("_minPanAngle",e9,ae,ba,19));
	outFields->push(HX_("_maxPanAngle",fb,09,d5,54));
	outFields->push(HX_("_minTiltAngle",43,aa,94,ab));
	outFields->push(HX_("_maxTiltAngle",f1,fe,89,27));
	outFields->push(HX_("_steps",e8,c2,f5,7f));
	outFields->push(HX_("_yFactor",a9,87,ff,f9));
	outFields->push(HX_("_wrapPanAngle",ff,b3,02,4e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HoverController_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_currentPanAngle),HX_("_currentPanAngle",10,4d,36,38)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_currentTiltAngle),HX_("_currentTiltAngle",3c,6e,43,39)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_panAngle),HX_("_panAngle",95,48,9b,c0)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_tiltAngle),HX_("_tiltAngle",17,87,3a,09)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_distance),HX_("_distance",94,8a,8f,b3)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_minPanAngle),HX_("_minPanAngle",e9,ae,ba,19)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_maxPanAngle),HX_("_maxPanAngle",fb,09,d5,54)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_minTiltAngle),HX_("_minTiltAngle",43,aa,94,ab)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_maxTiltAngle),HX_("_maxTiltAngle",f1,fe,89,27)},
	{::hx::fsInt,(int)offsetof(HoverController_obj,_steps),HX_("_steps",e8,c2,f5,7f)},
	{::hx::fsFloat,(int)offsetof(HoverController_obj,_yFactor),HX_("_yFactor",a9,87,ff,f9)},
	{::hx::fsBool,(int)offsetof(HoverController_obj,_wrapPanAngle),HX_("_wrapPanAngle",ff,b3,02,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HoverController_obj_sStaticStorageInfo = 0;
#endif

static ::String HoverController_obj_sMemberFields[] = {
	HX_("_currentPanAngle",10,4d,36,38),
	HX_("_currentTiltAngle",3c,6e,43,39),
	HX_("_panAngle",95,48,9b,c0),
	HX_("_tiltAngle",17,87,3a,09),
	HX_("_distance",94,8a,8f,b3),
	HX_("_minPanAngle",e9,ae,ba,19),
	HX_("_maxPanAngle",fb,09,d5,54),
	HX_("_minTiltAngle",43,aa,94,ab),
	HX_("_maxTiltAngle",f1,fe,89,27),
	HX_("_steps",e8,c2,f5,7f),
	HX_("_yFactor",a9,87,ff,f9),
	HX_("_wrapPanAngle",ff,b3,02,4e),
	HX_("get_steps",fe,d7,b7,c7),
	HX_("set_steps",0a,c4,08,ab),
	HX_("get_panAngle",3f,05,1f,2e),
	HX_("set_panAngle",b3,28,18,43),
	HX_("get_tiltAngle",2d,df,fb,6e),
	HX_("set_tiltAngle",39,c1,01,b4),
	HX_("get_distance",3e,47,13,21),
	HX_("set_distance",b2,6a,0c,36),
	HX_("get_minPanAngle",7f,b8,92,74),
	HX_("set_minPanAngle",8b,35,5e,70),
	HX_("get_maxPanAngle",91,13,ad,af),
	HX_("set_maxPanAngle",9d,90,78,ab),
	HX_("get_minTiltAngle",ed,03,c5,cd),
	HX_("set_minTiltAngle",61,f1,06,24),
	HX_("get_maxTiltAngle",9b,58,ba,49),
	HX_("set_maxTiltAngle",0f,46,fc,9f),
	HX_("get_yFactor",3f,8e,41,46),
	HX_("set_yFactor",4b,95,ae,50),
	HX_("get_wrapPanAngle",a9,0d,33,70),
	HX_("set_wrapPanAngle",1d,fb,74,c6),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class HoverController_obj::__mClass;

void HoverController_obj::__register()
{
	HoverController_obj _hx_dummy;
	HoverController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.controllers.HoverController",12,3e,79,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HoverController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HoverController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HoverController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HoverController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace controllers
