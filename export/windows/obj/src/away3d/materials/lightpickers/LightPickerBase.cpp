#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
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
#ifndef INCLUDED_away3d_lights_LightBase
#include <away3d/lights/LightBase.h>
#endif
#ifndef INCLUDED_away3d_lights_LightProbe
#include <away3d/lights/LightProbe.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_53_new,"away3d.materials.lightpickers.LightPickerBase","new",0x5a01a4b9,"away3d.materials.lightpickers.LightPickerBase.new","away3d/materials/lightpickers/LightPickerBase.hx",53,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_60_dispose,"away3d.materials.lightpickers.LightPickerBase","dispose",0x211df578,"away3d.materials.lightpickers.LightPickerBase.dispose","away3d/materials/lightpickers/LightPickerBase.hx",60,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_68_get_assetType,"away3d.materials.lightpickers.LightPickerBase","get_assetType",0x8525323a,"away3d.materials.lightpickers.LightPickerBase.get_assetType","away3d/materials/lightpickers/LightPickerBase.hx",68,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_76_get_numDirectionalLights,"away3d.materials.lightpickers.LightPickerBase","get_numDirectionalLights",0xdc8646d1,"away3d.materials.lightpickers.LightPickerBase.get_numDirectionalLights","away3d/materials/lightpickers/LightPickerBase.hx",76,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_84_get_numPointLights,"away3d.materials.lightpickers.LightPickerBase","get_numPointLights",0x871abb37,"away3d.materials.lightpickers.LightPickerBase.get_numPointLights","away3d/materials/lightpickers/LightPickerBase.hx",84,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_92_get_numCastingDirectionalLights,"away3d.materials.lightpickers.LightPickerBase","get_numCastingDirectionalLights",0x3b37e63a,"away3d.materials.lightpickers.LightPickerBase.get_numCastingDirectionalLights","away3d/materials/lightpickers/LightPickerBase.hx",92,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_100_get_numCastingPointLights,"away3d.materials.lightpickers.LightPickerBase","get_numCastingPointLights",0x175975e0,"away3d.materials.lightpickers.LightPickerBase.get_numCastingPointLights","away3d/materials/lightpickers/LightPickerBase.hx",100,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_108_get_numLightProbes,"away3d.materials.lightpickers.LightPickerBase","get_numLightProbes",0xd21e84a3,"away3d.materials.lightpickers.LightPickerBase.get_numLightProbes","away3d/materials/lightpickers/LightPickerBase.hx",108,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_116_get_pointLights,"away3d.materials.lightpickers.LightPickerBase","get_pointLights",0xe0839cbd,"away3d.materials.lightpickers.LightPickerBase.get_pointLights","away3d/materials/lightpickers/LightPickerBase.hx",116,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_124_get_directionalLights,"away3d.materials.lightpickers.LightPickerBase","get_directionalLights",0x558a10d7,"away3d.materials.lightpickers.LightPickerBase.get_directionalLights","away3d/materials/lightpickers/LightPickerBase.hx",124,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_132_get_castingPointLights,"away3d.materials.lightpickers.LightPickerBase","get_castingPointLights",0x81a6711a,"away3d.materials.lightpickers.LightPickerBase.get_castingPointLights","away3d/materials/lightpickers/LightPickerBase.hx",132,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_140_get_castingDirectionalLights,"away3d.materials.lightpickers.LightPickerBase","get_castingDirectionalLights",0x5dd008f4,"away3d.materials.lightpickers.LightPickerBase.get_castingDirectionalLights","away3d/materials/lightpickers/LightPickerBase.hx",140,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_148_get_lightProbes,"away3d.materials.lightpickers.LightPickerBase","get_lightProbes",0x2b876629,"away3d.materials.lightpickers.LightPickerBase.get_lightProbes","away3d/materials/lightpickers/LightPickerBase.hx",148,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_156_get_lightProbeWeights,"away3d.materials.lightpickers.LightPickerBase","get_lightProbeWeights",0xd0319211,"away3d.materials.lightpickers.LightPickerBase.get_lightProbeWeights","away3d/materials/lightpickers/LightPickerBase.hx",156,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_164_get_allPickedLights,"away3d.materials.lightpickers.LightPickerBase","get_allPickedLights",0x1bafd2ae,"away3d.materials.lightpickers.LightPickerBase.get_allPickedLights","away3d/materials/lightpickers/LightPickerBase.hx",164,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_172_collectLights,"away3d.materials.lightpickers.LightPickerBase","collectLights",0x56d3fdc0,"away3d.materials.lightpickers.LightPickerBase.collectLights","away3d/materials/lightpickers/LightPickerBase.hx",172,0x1a651416)
HX_LOCAL_STACK_FRAME(_hx_pos_8a7503d3cf2a70a2_180_updateProbeWeights,"away3d.materials.lightpickers.LightPickerBase","updateProbeWeights",0x40811e1b,"away3d.materials.lightpickers.LightPickerBase.updateProbeWeights","away3d/materials/lightpickers/LightPickerBase.hx",180,0x1a651416)
namespace away3d{
namespace materials{
namespace lightpickers{

void LightPickerBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_53_new)
HXDLIN(  53)		super::__construct(null());
            	}

Dynamic LightPickerBase_obj::__CreateEmpty() { return new LightPickerBase_obj; }

void *LightPickerBase_obj::_hx_vtable = 0;

Dynamic LightPickerBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LightPickerBase_obj > _hx_result = new LightPickerBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LightPickerBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x658b889d;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_away3d_materials_lightpickers_LightPickerBase__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::lightpickers::LightPickerBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::lightpickers::LightPickerBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::lightpickers::LightPickerBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::lightpickers::LightPickerBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::lightpickers::LightPickerBase_obj::willTrigger,
};

static ::away3d::library::assets::IAsset_obj _hx_away3d_materials_lightpickers_LightPickerBase__hx_away3d_library_assets_IAsset= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::away3d::materials::lightpickers::LightPickerBase_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::away3d::materials::lightpickers::LightPickerBase_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::away3d::materials::lightpickers::LightPickerBase_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::away3d::materials::lightpickers::LightPickerBase_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::away3d::materials::lightpickers::LightPickerBase_obj::willTrigger,
	( ::String (::hx::Object::*)())&::away3d::materials::lightpickers::LightPickerBase_obj::get_name,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::lightpickers::LightPickerBase_obj::set_name,
	( ::String (::hx::Object::*)())&::away3d::materials::lightpickers::LightPickerBase_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::away3d::materials::lightpickers::LightPickerBase_obj::set_id,
	( ::String (::hx::Object::*)())&::away3d::materials::lightpickers::LightPickerBase_obj::get_assetNamespace,
	( ::String (::hx::Object::*)())&::away3d::materials::lightpickers::LightPickerBase_obj::get_assetType,
	( ::cpp::VirtualArray (::hx::Object::*)())&::away3d::materials::lightpickers::LightPickerBase_obj::get_assetFullPath,
	( bool (::hx::Object::*)(::String,::String))&::away3d::materials::lightpickers::LightPickerBase_obj::assetPathEquals,
	( void (::hx::Object::*)(::String,::String, ::Dynamic))&::away3d::materials::lightpickers::LightPickerBase_obj::resetAssetPath,
	( void (::hx::Object::*)())&::away3d::materials::lightpickers::LightPickerBase_obj::dispose,
};

void *LightPickerBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_away3d_materials_lightpickers_LightPickerBase__hx_openfl_events_IEventDispatcher;
		case (int)0xa8241686: return &_hx_away3d_materials_lightpickers_LightPickerBase__hx_away3d_library_assets_IAsset;
	}
	return super::_hx_getInterface(inHash);
}

void LightPickerBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_60_dispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,dispose,(void))

::String LightPickerBase_obj::get_assetType(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_68_get_assetType)
HXDLIN(  68)		return HX_("lightPicker",04,45,1b,e3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_assetType,return )

int LightPickerBase_obj::get_numDirectionalLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_76_get_numDirectionalLights)
HXDLIN(  76)		return this->_numDirectionalLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numDirectionalLights,return )

int LightPickerBase_obj::get_numPointLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_84_get_numPointLights)
HXDLIN(  84)		return this->_numPointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numPointLights,return )

int LightPickerBase_obj::get_numCastingDirectionalLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_92_get_numCastingDirectionalLights)
HXDLIN(  92)		return this->_numCastingDirectionalLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numCastingDirectionalLights,return )

int LightPickerBase_obj::get_numCastingPointLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_100_get_numCastingPointLights)
HXDLIN( 100)		return this->_numCastingPointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numCastingPointLights,return )

int LightPickerBase_obj::get_numLightProbes(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_108_get_numLightProbes)
HXDLIN( 108)		return this->_numLightProbes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_numLightProbes,return )

 ::openfl::_Vector::ObjectVector LightPickerBase_obj::get_pointLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_116_get_pointLights)
HXDLIN( 116)		return this->_pointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_pointLights,return )

 ::openfl::_Vector::ObjectVector LightPickerBase_obj::get_directionalLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_124_get_directionalLights)
HXDLIN( 124)		return this->_directionalLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_directionalLights,return )

 ::openfl::_Vector::ObjectVector LightPickerBase_obj::get_castingPointLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_132_get_castingPointLights)
HXDLIN( 132)		return this->_castingPointLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_castingPointLights,return )

 ::openfl::_Vector::ObjectVector LightPickerBase_obj::get_castingDirectionalLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_140_get_castingDirectionalLights)
HXDLIN( 140)		return this->_castingDirectionalLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_castingDirectionalLights,return )

 ::openfl::_Vector::ObjectVector LightPickerBase_obj::get_lightProbes(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_148_get_lightProbes)
HXDLIN( 148)		return this->_lightProbes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_lightProbes,return )

 ::openfl::_Vector::FloatVector LightPickerBase_obj::get_lightProbeWeights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_156_get_lightProbeWeights)
HXDLIN( 156)		return this->_lightProbeWeights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_lightProbeWeights,return )

 ::openfl::_Vector::ObjectVector LightPickerBase_obj::get_allPickedLights(){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_164_get_allPickedLights)
HXDLIN( 164)		return this->_allPickedLights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LightPickerBase_obj,get_allPickedLights,return )

void LightPickerBase_obj::collectLights(::Dynamic renderable, ::away3d::core::traverse::EntityCollector entityCollector){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_172_collectLights)
HXDLIN( 172)		this->updateProbeWeights(renderable);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LightPickerBase_obj,collectLights,(void))

void LightPickerBase_obj::updateProbeWeights(::Dynamic renderable){
            	HX_STACKFRAME(&_hx_pos_8a7503d3cf2a70a2_180_updateProbeWeights)
HXLINE( 182)		 ::openfl::geom::Vector3D objectPos = ::away3d::core::base::IRenderable_obj::get_sourceEntity(renderable)->get_scenePosition();
HXLINE( 183)		 ::openfl::geom::Vector3D lightPos;
HXLINE( 184)		Float rx = objectPos->x;
HXDLIN( 184)		Float ry = objectPos->y;
HXDLIN( 184)		Float rz = objectPos->z;
HXLINE( 185)		Float dx;
HXDLIN( 185)		Float dy;
HXDLIN( 185)		Float dz;
HXLINE( 186)		Float w;
HXDLIN( 186)		Float total = ( (Float)(0) );
HXLINE( 189)		{
HXLINE( 189)			int _g = 0;
HXDLIN( 189)			int _g1 = this->_numLightProbes;
HXDLIN( 189)			while((_g < _g1)){
HXLINE( 189)				_g = (_g + 1);
HXDLIN( 189)				int i = (_g - 1);
HXLINE( 190)				lightPos = this->_lightProbes->get(i).StaticCast<  ::away3d::lights::LightProbe >()->get_scenePosition();
HXLINE( 191)				dx = (rx - lightPos->x);
HXLINE( 192)				dy = (ry - lightPos->y);
HXLINE( 193)				dz = (rz - lightPos->z);
HXLINE( 195)				w = (((dx * dx) + (dy * dy)) + (dz * dz));
HXLINE( 198)				if ((w > ((Float).00001))) {
HXLINE( 198)					w = (( (Float)(1) ) / w);
            				}
            				else {
HXLINE( 198)					w = ( (Float)(50000000) );
            				}
HXLINE( 199)				this->_lightProbeWeights->set(i,w);
HXLINE( 200)				total = (total + w);
            			}
            		}
HXLINE( 204)		total = (( (Float)(1) ) / total);
HXLINE( 205)		{
HXLINE( 205)			int _g2 = 0;
HXDLIN( 205)			int _g3 = this->_numLightProbes;
HXDLIN( 205)			while((_g2 < _g3)){
HXLINE( 205)				_g2 = (_g2 + 1);
HXDLIN( 205)				int i = (_g2 - 1);
HXLINE( 206)				{
HXLINE( 206)					int _g = i;
HXDLIN( 206)					 ::openfl::_Vector::FloatVector _g1 = this->_lightProbeWeights;
HXDLIN( 206)					_g1->set(_g,(_g1->get(_g) * total));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LightPickerBase_obj,updateProbeWeights,(void))


::hx::ObjectPtr< LightPickerBase_obj > LightPickerBase_obj::__new() {
	::hx::ObjectPtr< LightPickerBase_obj > __this = new LightPickerBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LightPickerBase_obj > LightPickerBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LightPickerBase_obj *__this = (LightPickerBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LightPickerBase_obj), true, "away3d.materials.lightpickers.LightPickerBase"));
	*(void **)__this = LightPickerBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LightPickerBase_obj::LightPickerBase_obj()
{
}

void LightPickerBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightPickerBase);
	HX_MARK_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_MARK_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_MARK_MEMBER_NAME(_numCastingPointLights,"_numCastingPointLights");
	HX_MARK_MEMBER_NAME(_numCastingDirectionalLights,"_numCastingDirectionalLights");
	HX_MARK_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_MARK_MEMBER_NAME(_allPickedLights,"_allPickedLights");
	HX_MARK_MEMBER_NAME(_pointLights,"_pointLights");
	HX_MARK_MEMBER_NAME(_castingPointLights,"_castingPointLights");
	HX_MARK_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_MARK_MEMBER_NAME(_castingDirectionalLights,"_castingDirectionalLights");
	HX_MARK_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_MARK_MEMBER_NAME(_lightProbeWeights,"_lightProbeWeights");
	 ::away3d::library::assets::NamedAssetBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightPickerBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_numPointLights,"_numPointLights");
	HX_VISIT_MEMBER_NAME(_numDirectionalLights,"_numDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numCastingPointLights,"_numCastingPointLights");
	HX_VISIT_MEMBER_NAME(_numCastingDirectionalLights,"_numCastingDirectionalLights");
	HX_VISIT_MEMBER_NAME(_numLightProbes,"_numLightProbes");
	HX_VISIT_MEMBER_NAME(_allPickedLights,"_allPickedLights");
	HX_VISIT_MEMBER_NAME(_pointLights,"_pointLights");
	HX_VISIT_MEMBER_NAME(_castingPointLights,"_castingPointLights");
	HX_VISIT_MEMBER_NAME(_directionalLights,"_directionalLights");
	HX_VISIT_MEMBER_NAME(_castingDirectionalLights,"_castingDirectionalLights");
	HX_VISIT_MEMBER_NAME(_lightProbes,"_lightProbes");
	HX_VISIT_MEMBER_NAME(_lightProbeWeights,"_lightProbeWeights");
	 ::away3d::library::assets::NamedAssetBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LightPickerBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_assetType() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pointLights() ); }
		if (HX_FIELD_EQ(inName,"lightProbes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightProbes() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_pointLights") ) { return ::hx::Val( _pointLights ); }
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { return ::hx::Val( _lightProbes ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_assetType") ) { return ::hx::Val( get_assetType_dyn() ); }
		if (HX_FIELD_EQ(inName,"collectLights") ) { return ::hx::Val( collectLights_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numPointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numPointLights() ); }
		if (HX_FIELD_EQ(inName,"numLightProbes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numLightProbes() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allPickedLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allPickedLights() ); }
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { return ::hx::Val( _numPointLights ); }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { return ::hx::Val( _numLightProbes ); }
		if (HX_FIELD_EQ(inName,"get_pointLights") ) { return ::hx::Val( get_pointLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_lightProbes") ) { return ::hx::Val( get_lightProbes_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_allPickedLights") ) { return ::hx::Val( _allPickedLights ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"directionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_directionalLights() ); }
		if (HX_FIELD_EQ(inName,"lightProbeWeights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightProbeWeights() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"castingPointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_castingPointLights() ); }
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { return ::hx::Val( _directionalLights ); }
		if (HX_FIELD_EQ(inName,"_lightProbeWeights") ) { return ::hx::Val( _lightProbeWeights ); }
		if (HX_FIELD_EQ(inName,"get_numPointLights") ) { return ::hx::Val( get_numPointLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numLightProbes") ) { return ::hx::Val( get_numLightProbes_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateProbeWeights") ) { return ::hx::Val( updateProbeWeights_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_castingPointLights") ) { return ::hx::Val( _castingPointLights ); }
		if (HX_FIELD_EQ(inName,"get_allPickedLights") ) { return ::hx::Val( get_allPickedLights_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"numDirectionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numDirectionalLights() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"numCastingPointLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numCastingPointLights() ); }
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { return ::hx::Val( _numDirectionalLights ); }
		if (HX_FIELD_EQ(inName,"get_directionalLights") ) { return ::hx::Val( get_directionalLights_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_lightProbeWeights") ) { return ::hx::Val( get_lightProbeWeights_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_numCastingPointLights") ) { return ::hx::Val( _numCastingPointLights ); }
		if (HX_FIELD_EQ(inName,"get_castingPointLights") ) { return ::hx::Val( get_castingPointLights_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"castingDirectionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_castingDirectionalLights() ); }
		if (HX_FIELD_EQ(inName,"get_numDirectionalLights") ) { return ::hx::Val( get_numDirectionalLights_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_castingDirectionalLights") ) { return ::hx::Val( _castingDirectionalLights ); }
		if (HX_FIELD_EQ(inName,"get_numCastingPointLights") ) { return ::hx::Val( get_numCastingPointLights_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"numCastingDirectionalLights") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numCastingDirectionalLights() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_numCastingDirectionalLights") ) { return ::hx::Val( _numCastingDirectionalLights ); }
		if (HX_FIELD_EQ(inName,"get_castingDirectionalLights") ) { return ::hx::Val( get_castingDirectionalLights_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_numCastingDirectionalLights") ) { return ::hx::Val( get_numCastingDirectionalLights_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LightPickerBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_pointLights") ) { _pointLights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightProbes") ) { _lightProbes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numPointLights") ) { _numPointLights=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numLightProbes") ) { _numLightProbes=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_allPickedLights") ) { _allPickedLights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_directionalLights") ) { _directionalLights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lightProbeWeights") ) { _lightProbeWeights=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_castingPointLights") ) { _castingPointLights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_numDirectionalLights") ) { _numDirectionalLights=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_numCastingPointLights") ) { _numCastingPointLights=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_castingDirectionalLights") ) { _castingDirectionalLights=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_numCastingDirectionalLights") ) { _numCastingDirectionalLights=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LightPickerBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("assetType",ca,40,af,b1));
	outFields->push(HX_("numDirectionalLights",41,a2,e8,bb));
	outFields->push(HX_("numPointLights",a7,e2,c1,38));
	outFields->push(HX_("numCastingDirectionalLights",ca,d8,b8,e0));
	outFields->push(HX_("numCastingPointLights",70,1c,07,ae));
	outFields->push(HX_("numLightProbes",13,ac,c5,83));
	outFields->push(HX_("pointLights",4d,6f,9a,ce));
	outFields->push(HX_("directionalLights",67,2f,9d,f7));
	outFields->push(HX_("castingPointLights",8a,10,4e,b0));
	outFields->push(HX_("castingDirectionalLights",64,dc,dc,89));
	outFields->push(HX_("lightProbes",b9,38,9e,19));
	outFields->push(HX_("lightProbeWeights",a1,b0,44,72));
	outFields->push(HX_("allPickedLights",3e,2d,4b,dc));
	outFields->push(HX_("_numPointLights",46,2b,22,82));
	outFields->push(HX_("_numDirectionalLights",20,ac,83,2a));
	outFields->push(HX_("_numCastingPointLights",b1,b5,14,07));
	outFields->push(HX_("_numCastingDirectionalLights",cb,58,72,e4));
	outFields->push(HX_("_numLightProbes",b2,f4,25,cd));
	outFields->push(HX_("_allPickedLights",bf,6f,2a,c7));
	outFields->push(HX_("_pointLights",4e,1d,a4,34));
	outFields->push(HX_("_castingPointLights",a9,94,28,90));
	outFields->push(HX_("_directionalLights",28,d4,b2,ca));
	outFields->push(HX_("_castingDirectionalLights",c3,c1,8b,e3));
	outFields->push(HX_("_lightProbes",ba,e6,a7,7f));
	outFields->push(HX_("_lightProbeWeights",62,55,5a,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LightPickerBase_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(LightPickerBase_obj,_numPointLights),HX_("_numPointLights",46,2b,22,82)},
	{::hx::fsInt,(int)offsetof(LightPickerBase_obj,_numDirectionalLights),HX_("_numDirectionalLights",20,ac,83,2a)},
	{::hx::fsInt,(int)offsetof(LightPickerBase_obj,_numCastingPointLights),HX_("_numCastingPointLights",b1,b5,14,07)},
	{::hx::fsInt,(int)offsetof(LightPickerBase_obj,_numCastingDirectionalLights),HX_("_numCastingDirectionalLights",cb,58,72,e4)},
	{::hx::fsInt,(int)offsetof(LightPickerBase_obj,_numLightProbes),HX_("_numLightProbes",b2,f4,25,cd)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(LightPickerBase_obj,_allPickedLights),HX_("_allPickedLights",bf,6f,2a,c7)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(LightPickerBase_obj,_pointLights),HX_("_pointLights",4e,1d,a4,34)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(LightPickerBase_obj,_castingPointLights),HX_("_castingPointLights",a9,94,28,90)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(LightPickerBase_obj,_directionalLights),HX_("_directionalLights",28,d4,b2,ca)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(LightPickerBase_obj,_castingDirectionalLights),HX_("_castingDirectionalLights",c3,c1,8b,e3)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(LightPickerBase_obj,_lightProbes),HX_("_lightProbes",ba,e6,a7,7f)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(LightPickerBase_obj,_lightProbeWeights),HX_("_lightProbeWeights",62,55,5a,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LightPickerBase_obj_sStaticStorageInfo = 0;
#endif

static ::String LightPickerBase_obj_sMemberFields[] = {
	HX_("_numPointLights",46,2b,22,82),
	HX_("_numDirectionalLights",20,ac,83,2a),
	HX_("_numCastingPointLights",b1,b5,14,07),
	HX_("_numCastingDirectionalLights",cb,58,72,e4),
	HX_("_numLightProbes",b2,f4,25,cd),
	HX_("_allPickedLights",bf,6f,2a,c7),
	HX_("_pointLights",4e,1d,a4,34),
	HX_("_castingPointLights",a9,94,28,90),
	HX_("_directionalLights",28,d4,b2,ca),
	HX_("_castingDirectionalLights",c3,c1,8b,e3),
	HX_("_lightProbes",ba,e6,a7,7f),
	HX_("_lightProbeWeights",62,55,5a,45),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_assetType",a1,14,13,73),
	HX_("get_numDirectionalLights",ca,bf,84,fe),
	HX_("get_numPointLights",70,c3,5b,d4),
	HX_("get_numCastingDirectionalLights",61,6e,89,bc),
	HX_("get_numCastingPointLights",c7,d6,04,b4),
	HX_("get_numLightProbes",dc,8c,5f,1f),
	HX_("get_pointLights",e4,26,7c,8f),
	HX_("get_directionalLights",3e,32,4b,76),
	HX_("get_castingPointLights",d3,89,e2,09),
	HX_("get_castingDirectionalLights",6d,f2,30,cb),
	HX_("get_lightProbes",50,f0,7f,da),
	HX_("get_lightProbeWeights",78,b3,f2,f0),
	HX_("get_allPickedLights",55,fc,55,67),
	HX_("collectLights",27,e0,c1,44),
	HX_("updateProbeWeights",54,26,c2,8d),
	::String(null()) };

::hx::Class LightPickerBase_obj::__mClass;

void LightPickerBase_obj::__register()
{
	LightPickerBase_obj _hx_dummy;
	LightPickerBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.lightpickers.LightPickerBase",47,d4,d8,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LightPickerBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LightPickerBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LightPickerBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LightPickerBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace lightpickers
