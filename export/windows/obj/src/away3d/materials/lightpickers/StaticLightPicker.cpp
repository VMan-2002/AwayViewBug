#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_LightEvent
#include <away3d/events/LightEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_lights_DirectionalLight
#include <away3d/lights/DirectionalLight.h>
#endif
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_lights_PointLight
#include <away3d/lights/PointLight.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_StaticLightPicker
#include <away3d/materials/lightpickers/StaticLightPicker.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c23dfa4cb1f6670_28_new,"away3d.materials.lightpickers.StaticLightPicker","new",0xca15197a,"away3d.materials.lightpickers.StaticLightPicker.new","away3d/materials/lightpickers/StaticLightPicker.hx",28,0xe7f9c035)
HX_LOCAL_STACK_FRAME(_hx_pos_7c23dfa4cb1f6670_38_get_lights,"away3d.materials.lightpickers.StaticLightPicker","get_lights",0x6a9308cc,"away3d.materials.lightpickers.StaticLightPicker.get_lights","away3d/materials/lightpickers/StaticLightPicker.hx",38,0xe7f9c035)
HX_LOCAL_STACK_FRAME(_hx_pos_7c23dfa4cb1f6670_42_set_lights,"away3d.materials.lightpickers.StaticLightPicker","set_lights",0x6e10a740,"away3d.materials.lightpickers.StaticLightPicker.set_lights","away3d/materials/lightpickers/StaticLightPicker.hx",42,0xe7f9c035)
HX_LOCAL_STACK_FRAME(_hx_pos_7c23dfa4cb1f6670_103_clearListeners,"away3d.materials.lightpickers.StaticLightPicker","clearListeners",0x71263358,"away3d.materials.lightpickers.StaticLightPicker.clearListeners","away3d/materials/lightpickers/StaticLightPicker.hx",103,0xe7f9c035)
HX_LOCAL_STACK_FRAME(_hx_pos_7c23dfa4cb1f6670_113_onCastShadowChange,"away3d.materials.lightpickers.StaticLightPicker","onCastShadowChange",0x2b6eb234,"away3d.materials.lightpickers.StaticLightPicker.onCastShadowChange","away3d/materials/lightpickers/StaticLightPicker.hx",113,0xe7f9c035)
HX_LOCAL_STACK_FRAME(_hx_pos_7c23dfa4cb1f6670_132_updateDirectionalCasting,"away3d.materials.lightpickers.StaticLightPicker","updateDirectionalCasting",0x4b23e8c8,"away3d.materials.lightpickers.StaticLightPicker.updateDirectionalCasting","away3d/materials/lightpickers/StaticLightPicker.hx",132,0xe7f9c035)
HX_LOCAL_STACK_FRAME(_hx_pos_7c23dfa4cb1f6670_150_updatePointCasting,"away3d.materials.lightpickers.StaticLightPicker","updatePointCasting",0x062a4ce2,"away3d.materials.lightpickers.StaticLightPicker.updatePointCasting","away3d/materials/lightpickers/StaticLightPicker.hx",150,0xe7f9c035)
namespace away3d{
namespace materials{
namespace lightpickers{

void StaticLightPicker_obj::__construct(::Array< ::Dynamic> lights){
            	HX_STACKFRAME(&_hx_pos_7c23dfa4cb1f6670_28_new)
HXLINE(  29)		this->set_lights(lights);
HXLINE(  30)		super::__construct();
            	}

Dynamic StaticLightPicker_obj::__CreateEmpty() { return new StaticLightPicker_obj; }

void *StaticLightPicker_obj::_hx_vtable = 0;

Dynamic StaticLightPicker_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticLightPicker_obj > _hx_result = new StaticLightPicker_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StaticLightPicker_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2771a4c2) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x2771a4c2;
		}
	} else {
		return inClassId==(int)0x37f46043 || inClassId==(int)0x658b889d;
	}
}

::Array< ::Dynamic> StaticLightPicker_obj::get_lights(){
            	HX_STACKFRAME(&_hx_pos_7c23dfa4cb1f6670_38_get_lights)
HXDLIN(  38)		return this->_lights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticLightPicker_obj,get_lights,return )

::Array< ::Dynamic> StaticLightPicker_obj::set_lights(::Array< ::Dynamic> value){
            	HX_GC_STACKFRAME(&_hx_pos_7c23dfa4cb1f6670_42_set_lights)
HXLINE(  43)		int numPointLights = 0;
HXLINE(  44)		int numDirectionalLights = 0;
HXLINE(  45)		int numCastingPointLights = 0;
HXLINE(  46)		int numCastingDirectionalLights = 0;
HXLINE(  47)		int numLightProbes = 0;
HXLINE(  48)		 ::away3d::lights::LightBase light;
HXLINE(  50)		if (::hx::IsNotNull( this->_lights )) {
HXLINE(  51)			this->clearListeners();
            		}
HXLINE(  53)		this->_lights = value;
HXLINE(  54)		int length = null();
HXDLIN(  54)		bool fixed = null();
HXDLIN(  54)		::Array< ::Dynamic> array = null();
HXDLIN(  54)		 ::openfl::_Vector::ObjectVector vector =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXDLIN(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			int _g1 = value->length;
HXDLIN(  54)			while((_g < _g1)){
HXLINE(  54)				_g = (_g + 1);
HXDLIN(  54)				int i = (_g - 1);
HXDLIN(  54)				vector->set(i,value->__get(i).StaticCast<  ::away3d::lights::LightBase >()).StaticCast<  ::away3d::lights::LightBase >();
            			}
            		}
HXDLIN(  54)		this->_allPickedLights = vector;
HXLINE(  55)		int length1 = null();
HXDLIN(  55)		bool fixed1 = null();
HXDLIN(  55)		::Array< ::Dynamic> array1 = null();
HXDLIN(  55)		this->_pointLights =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  56)		int length2 = null();
HXDLIN(  56)		bool fixed2 = null();
HXDLIN(  56)		::Array< ::Dynamic> array2 = null();
HXDLIN(  56)		this->_castingPointLights =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length2,fixed2,array2,true);
HXLINE(  57)		int length3 = null();
HXDLIN(  57)		bool fixed3 = null();
HXDLIN(  57)		::Array< ::Dynamic> array3 = null();
HXDLIN(  57)		this->_directionalLights =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE(  58)		int length4 = null();
HXDLIN(  58)		bool fixed4 = null();
HXDLIN(  58)		::Array< ::Dynamic> array4 = null();
HXDLIN(  58)		this->_castingDirectionalLights =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length4,fixed4,array4,true);
HXLINE(  59)		int length5 = null();
HXDLIN(  59)		bool fixed5 = null();
HXDLIN(  59)		::Array< ::Dynamic> array5 = null();
HXDLIN(  59)		this->_lightProbes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length5,fixed5,array5,true);
HXLINE(  61)		int len = value->length;
HXLINE(  62)		{
HXLINE(  62)			int _g2 = 0;
HXDLIN(  62)			int _g3 = len;
HXDLIN(  62)			while((_g2 < _g3)){
HXLINE(  62)				_g2 = (_g2 + 1);
HXDLIN(  62)				int i = (_g2 - 1);
HXLINE(  63)				light = value->__get(i).StaticCast<  ::away3d::lights::LightBase >();
HXLINE(  64)				light->addEventListener(HX_("castsShadowChange",64,f8,e5,91),this->onCastShadowChange_dyn(),null(),null(),null());
HXLINE(  65)				if (::Std_obj::isOfType(light,( ( ::Dynamic)(::hx::ClassOf< ::away3d::lights::PointLight >()) ))) {
HXLINE(  66)					if (light->get_castsShadows()) {
HXLINE(  67)						numCastingPointLights = (numCastingPointLights + 1);
HXDLIN(  67)						this->_castingPointLights->set((numCastingPointLights - 1),light).StaticCast<  ::away3d::lights::PointLight >();
            					}
            					else {
HXLINE(  69)						numPointLights = (numPointLights + 1);
HXDLIN(  69)						this->_pointLights->set((numPointLights - 1),light).StaticCast<  ::away3d::lights::PointLight >();
            					}
            				}
            				else {
HXLINE(  71)					if (::Std_obj::isOfType(light,( ( ::Dynamic)(::hx::ClassOf< ::away3d::lights::DirectionalLight >()) ))) {
HXLINE(  72)						if (light->get_castsShadows()) {
HXLINE(  73)							numCastingDirectionalLights = (numCastingDirectionalLights + 1);
HXDLIN(  73)							this->_castingDirectionalLights->set((numCastingDirectionalLights - 1),light).StaticCast<  ::away3d::lights::DirectionalLight >();
            						}
            						else {
HXLINE(  75)							numDirectionalLights = (numDirectionalLights + 1);
HXDLIN(  75)							this->_directionalLights->set((numDirectionalLights - 1),light).StaticCast<  ::away3d::lights::DirectionalLight >();
            						}
            					}
            					else {
HXLINE(  76)						if (::Std_obj::isOfType(light,( ( ::Dynamic)(::hx::ClassOf< ::away3d::lights::LightProbe >()) ))) {
HXLINE(  77)							numLightProbes = (numLightProbes + 1);
HXDLIN(  77)							this->_lightProbes->set((numLightProbes - 1),light).StaticCast<  ::away3d::lights::LightProbe >();
            						}
            					}
            				}
            			}
            		}
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		bool _hx_tmp1;
HXDLIN(  80)		bool _hx_tmp2;
HXDLIN(  80)		bool _hx_tmp3;
HXDLIN(  80)		if ((this->_numDirectionalLights == numDirectionalLights)) {
HXLINE(  80)			_hx_tmp3 = (this->_numPointLights == numPointLights);
            		}
            		else {
HXLINE(  80)			_hx_tmp3 = false;
            		}
HXDLIN(  80)		if (_hx_tmp3) {
HXLINE(  80)			_hx_tmp2 = (this->_numLightProbes == numLightProbes);
            		}
            		else {
HXLINE(  80)			_hx_tmp2 = false;
            		}
HXDLIN(  80)		if (_hx_tmp2) {
HXLINE(  80)			_hx_tmp1 = (this->_numCastingPointLights == numCastingPointLights);
            		}
            		else {
HXLINE(  80)			_hx_tmp1 = false;
            		}
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  80)			_hx_tmp = (this->_numCastingDirectionalLights == numCastingDirectionalLights);
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  82)			return value;
            		}
HXLINE(  85)		this->_numDirectionalLights = numDirectionalLights;
HXLINE(  86)		this->_numCastingDirectionalLights = numCastingDirectionalLights;
HXLINE(  87)		this->_numPointLights = numPointLights;
HXLINE(  88)		this->_numCastingPointLights = numCastingPointLights;
HXLINE(  89)		this->_numLightProbes = numLightProbes;
HXLINE(  92)		::Array< Float > array6 = null();
HXDLIN(  92)		this->_lightProbeWeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,(::Math_obj::ceil((( (Float)(numLightProbes) ) / ( (Float)(4) ))) * 4),true,array6,true);
HXLINE(  95)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
HXLINE(  96)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StaticLightPicker_obj,set_lights,return )

void StaticLightPicker_obj::clearListeners(){
            	HX_STACKFRAME(&_hx_pos_7c23dfa4cb1f6670_103_clearListeners)
HXLINE( 104)		int len = this->_lights->length;
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			int _g1 = len;
HXDLIN( 105)			while((_g < _g1)){
HXLINE( 105)				_g = (_g + 1);
HXDLIN( 105)				int i = (_g - 1);
HXLINE( 106)				this->_lights->__get(i).StaticCast<  ::away3d::lights::LightBase >()->removeEventListener(HX_("castsShadowChange",64,f8,e5,91),this->onCastShadowChange_dyn(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticLightPicker_obj,clearListeners,(void))

void StaticLightPicker_obj::onCastShadowChange( ::away3d::events::LightEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_7c23dfa4cb1f6670_113_onCastShadowChange)
HXLINE( 117)		 ::away3d::lights::LightBase light = ::hx::TCast<  ::away3d::lights::LightBase >::cast(event->target);
HXLINE( 119)		if (::Std_obj::isOfType(light,( ( ::Dynamic)(::hx::ClassOf< ::away3d::lights::PointLight >()) ))) {
HXLINE( 120)			this->updatePointCasting(::hx::TCast<  ::away3d::lights::PointLight >::cast(light));
            		}
            		else {
HXLINE( 121)			if (::Std_obj::isOfType(light,( ( ::Dynamic)(::hx::ClassOf< ::away3d::lights::DirectionalLight >()) ))) {
HXLINE( 122)				this->updateDirectionalCasting(::hx::TCast<  ::away3d::lights::DirectionalLight >::cast(light));
            			}
            		}
HXLINE( 124)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(StaticLightPicker_obj,onCastShadowChange,(void))

void StaticLightPicker_obj::updateDirectionalCasting( ::away3d::lights::DirectionalLight light){
            	HX_STACKFRAME(&_hx_pos_7c23dfa4cb1f6670_132_updateDirectionalCasting)
HXDLIN( 132)		if (light->get_castsShadows()) {
HXLINE( 133)			--this->_numDirectionalLights;
HXLINE( 134)			++this->_numCastingDirectionalLights;
HXLINE( 135)			{
HXLINE( 135)				::Dynamic this1 = this->_directionalLights;
HXDLIN( 135)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 135)				this1->__SetField(HX_("__tempIndex",3e,e8,54,22),this->_directionalLights->indexOf(light,0),::hx::paccDynamic);
HXDLIN( 135)				{
HXLINE( 135)					int _g_current = 0;
HXDLIN( 135)					::cpp::VirtualArray _g_args = this2;
HXDLIN( 135)					while((_g_current < _g_args->get_length())){
HXLINE( 135)						_g_current = (_g_current + 1);
HXDLIN( 135)						 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 135)						( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::away3d::lights::DirectionalLight)(item) ));
HXDLIN( 135)						::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            					}
            				}
HXDLIN( 135)				( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            			}
HXLINE( 136)			this->_castingDirectionalLights->push(light);
            		}
            		else {
HXLINE( 138)			++this->_numDirectionalLights;
HXLINE( 139)			--this->_numCastingDirectionalLights;
HXLINE( 140)			{
HXLINE( 140)				::Dynamic this1 = this->_castingDirectionalLights;
HXDLIN( 140)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 140)				this1->__SetField(HX_("__tempIndex",3e,e8,54,22),this->_castingDirectionalLights->indexOf(light,0),::hx::paccDynamic);
HXDLIN( 140)				{
HXLINE( 140)					int _g_current = 0;
HXDLIN( 140)					::cpp::VirtualArray _g_args = this2;
HXDLIN( 140)					while((_g_current < _g_args->get_length())){
HXLINE( 140)						_g_current = (_g_current + 1);
HXDLIN( 140)						 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 140)						( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::away3d::lights::DirectionalLight)(item) ));
HXDLIN( 140)						::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            					}
            				}
HXDLIN( 140)				( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            			}
HXLINE( 141)			this->_directionalLights->push(light);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StaticLightPicker_obj,updateDirectionalCasting,(void))

void StaticLightPicker_obj::updatePointCasting( ::away3d::lights::PointLight light){
            	HX_STACKFRAME(&_hx_pos_7c23dfa4cb1f6670_150_updatePointCasting)
HXDLIN( 150)		if (light->get_castsShadows()) {
HXLINE( 151)			--this->_numPointLights;
HXLINE( 152)			++this->_numCastingPointLights;
HXLINE( 153)			{
HXLINE( 153)				::Dynamic this1 = this->_pointLights;
HXDLIN( 153)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 153)				this1->__SetField(HX_("__tempIndex",3e,e8,54,22),this->_pointLights->indexOf(light,0),::hx::paccDynamic);
HXDLIN( 153)				{
HXLINE( 153)					int _g_current = 0;
HXDLIN( 153)					::cpp::VirtualArray _g_args = this2;
HXDLIN( 153)					while((_g_current < _g_args->get_length())){
HXLINE( 153)						_g_current = (_g_current + 1);
HXDLIN( 153)						 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 153)						( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::away3d::lights::PointLight)(item) ));
HXDLIN( 153)						::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            					}
            				}
HXDLIN( 153)				( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            			}
HXLINE( 154)			this->_castingPointLights->push(light);
            		}
            		else {
HXLINE( 156)			++this->_numPointLights;
HXLINE( 157)			--this->_numCastingPointLights;
HXLINE( 158)			{
HXLINE( 158)				::Dynamic this1 = this->_castingPointLights;
HXDLIN( 158)				::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 158)				this1->__SetField(HX_("__tempIndex",3e,e8,54,22),this->_castingPointLights->indexOf(light,0),::hx::paccDynamic);
HXDLIN( 158)				{
HXLINE( 158)					int _g_current = 0;
HXDLIN( 158)					::cpp::VirtualArray _g_args = this2;
HXDLIN( 158)					while((_g_current < _g_args->get_length())){
HXLINE( 158)						_g_current = (_g_current + 1);
HXDLIN( 158)						 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 158)						( ( ::openfl::_Vector::ObjectVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( ( ::away3d::lights::PointLight)(item) ));
HXDLIN( 158)						::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            					}
            				}
HXDLIN( 158)				( ( ::openfl::_Vector::ObjectVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),1);
            			}
HXLINE( 159)			this->_pointLights->push(light);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StaticLightPicker_obj,updatePointCasting,(void))


::hx::ObjectPtr< StaticLightPicker_obj > StaticLightPicker_obj::__new(::Array< ::Dynamic> lights) {
	::hx::ObjectPtr< StaticLightPicker_obj > __this = new StaticLightPicker_obj();
	__this->__construct(lights);
	return __this;
}

::hx::ObjectPtr< StaticLightPicker_obj > StaticLightPicker_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> lights) {
	StaticLightPicker_obj *__this = (StaticLightPicker_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticLightPicker_obj), true, "away3d.materials.lightpickers.StaticLightPicker"));
	*(void **)__this = StaticLightPicker_obj::_hx_vtable;
	__this->__construct(lights);
	return __this;
}

StaticLightPicker_obj::StaticLightPicker_obj()
{
}

void StaticLightPicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticLightPicker);
	HX_MARK_MEMBER_NAME(_lights,"_lights");
	 ::away3d::materials::lightpickers::LightPickerBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticLightPicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lights,"_lights");
	 ::away3d::materials::lightpickers::LightPickerBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StaticLightPicker_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lights() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_lights") ) { return ::hx::Val( _lights ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_lights") ) { return ::hx::Val( get_lights_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lights") ) { return ::hx::Val( set_lights_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearListeners") ) { return ::hx::Val( clearListeners_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onCastShadowChange") ) { return ::hx::Val( onCastShadowChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"updatePointCasting") ) { return ::hx::Val( updatePointCasting_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"updateDirectionalCasting") ) { return ::hx::Val( updateDirectionalCasting_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticLightPicker_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lights(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_lights") ) { _lights=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticLightPicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lights",dd,2a,02,e8));
	outFields->push(HX_("_lights",7c,3c,79,56));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticLightPicker_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StaticLightPicker_obj,_lights),HX_("_lights",7c,3c,79,56)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticLightPicker_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticLightPicker_obj_sMemberFields[] = {
	HX_("_lights",7c,3c,79,56),
	HX_("get_lights",a6,9a,89,d8),
	HX_("set_lights",1a,39,07,dc),
	HX_("clearListeners",32,ba,93,b1),
	HX_("onCastShadowChange",0e,ae,71,dd),
	HX_("updateDirectionalCasting",22,44,5c,5f),
	HX_("updatePointCasting",bc,48,2d,b8),
	::String(null()) };

::hx::Class StaticLightPicker_obj::__mClass;

void StaticLightPicker_obj::__register()
{
	StaticLightPicker_obj _hx_dummy;
	StaticLightPicker_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.lightpickers.StaticLightPicker",88,94,00,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticLightPicker_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticLightPicker_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticLightPicker_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticLightPicker_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace lightpickers
