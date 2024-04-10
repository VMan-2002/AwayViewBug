#include <hxcpp.h>

#ifndef INCLUDED_away3d_animators_IAnimationSet
#include <away3d/animators/IAnimationSet.h>
#endif
#ifndef INCLUDED_away3d_animators_IAnimator
#include <away3d/animators/IAnimator.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationRegisterCache
#include <away3d/animators/data/AnimationRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
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
#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCache
#include <away3d/core/managers/AGALProgram3DCache.h>
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
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_lightpickers_LightPickerBase
#include <away3d/materials/lightpickers/LightPickerBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_97536d97c2fc4d02_34_new,"away3d.materials.passes.MaterialPassBase","new",0xae9854b9,"away3d.materials.passes.MaterialPassBase.new","away3d/materials/passes/MaterialPassBase.hx",34,0xb369ff38)
static const ::String _hx_array_data_52578447_4[] = {
	HX_("vt0",32,ef,59,00),
};
static const ::String _hx_array_data_52578447_5[] = {
	HX_("va0",a5,de,59,00),
};
static const int _hx_array_data_52578447_6[] = {
	(int)-1,(int)-1,(int)-1,(int)-1,(int)-1,(int)-1,(int)-1,(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_130_get_material,"away3d.materials.passes.MaterialPassBase","get_material",0x4eadb937,"away3d.materials.passes.MaterialPassBase.get_material","away3d/materials/passes/MaterialPassBase.hx",130,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_134_set_material,"away3d.materials.passes.MaterialPassBase","set_material",0x63a6dcab,"away3d.materials.passes.MaterialPassBase.set_material","away3d/materials/passes/MaterialPassBase.hx",134,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_144_get_writeDepth,"away3d.materials.passes.MaterialPassBase","get_writeDepth",0xa2308c34,"away3d.materials.passes.MaterialPassBase.get_writeDepth","away3d/materials/passes/MaterialPassBase.hx",144,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_148_set_writeDepth,"away3d.materials.passes.MaterialPassBase","set_writeDepth",0xc25074a8,"away3d.materials.passes.MaterialPassBase.set_writeDepth","away3d/materials/passes/MaterialPassBase.hx",148,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_158_get_mipmap,"away3d.materials.passes.MaterialPassBase","get_mipmap",0x8c794618,"away3d.materials.passes.MaterialPassBase.get_mipmap","away3d/materials/passes/MaterialPassBase.hx",158,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_162_set_mipmap,"away3d.materials.passes.MaterialPassBase","set_mipmap",0x8ff6e48c,"away3d.materials.passes.MaterialPassBase.set_mipmap","away3d/materials/passes/MaterialPassBase.hx",162,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_175_get_anisotropy,"away3d.materials.passes.MaterialPassBase","get_anisotropy",0x51d39892,"away3d.materials.passes.MaterialPassBase.get_anisotropy","away3d/materials/passes/MaterialPassBase.hx",175,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_179_set_anisotropy,"away3d.materials.passes.MaterialPassBase","set_anisotropy",0x71f38106,"away3d.materials.passes.MaterialPassBase.set_anisotropy","away3d/materials/passes/MaterialPassBase.hx",179,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_192_get_smooth,"away3d.materials.passes.MaterialPassBase","get_smooth",0x3f9020be,"away3d.materials.passes.MaterialPassBase.get_smooth","away3d/materials/passes/MaterialPassBase.hx",192,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_196_set_smooth,"away3d.materials.passes.MaterialPassBase","set_smooth",0x430dbf32,"away3d.materials.passes.MaterialPassBase.set_smooth","away3d/materials/passes/MaterialPassBase.hx",196,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_209_get_repeat,"away3d.materials.passes.MaterialPassBase","get_repeat",0x3ea1afeb,"away3d.materials.passes.MaterialPassBase.get_repeat","away3d/materials/passes/MaterialPassBase.hx",209,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_213_set_repeat,"away3d.materials.passes.MaterialPassBase","set_repeat",0x421f4e5f,"away3d.materials.passes.MaterialPassBase.set_repeat","away3d/materials/passes/MaterialPassBase.hx",213,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_226_get_bothSides,"away3d.materials.passes.MaterialPassBase","get_bothSides",0xf35f6c2b,"away3d.materials.passes.MaterialPassBase.get_bothSides","away3d/materials/passes/MaterialPassBase.hx",226,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_230_set_bothSides,"away3d.materials.passes.MaterialPassBase","set_bothSides",0x38654e37,"away3d.materials.passes.MaterialPassBase.set_bothSides","away3d/materials/passes/MaterialPassBase.hx",230,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_242_get_depthCompareMode,"away3d.materials.passes.MaterialPassBase","get_depthCompareMode",0xc4d6caf5,"away3d.materials.passes.MaterialPassBase.get_depthCompareMode","away3d/materials/passes/MaterialPassBase.hx",242,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_246_set_depthCompareMode,"away3d.materials.passes.MaterialPassBase","set_depthCompareMode",0x918e8269,"away3d.materials.passes.MaterialPassBase.set_depthCompareMode","away3d/materials/passes/MaterialPassBase.hx",246,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_256_get_animationSet,"away3d.materials.passes.MaterialPassBase","get_animationSet",0x7348838e,"away3d.materials.passes.MaterialPassBase.get_animationSet","away3d/materials/passes/MaterialPassBase.hx",256,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_260_set_animationSet,"away3d.materials.passes.MaterialPassBase","set_animationSet",0xc98a7102,"away3d.materials.passes.MaterialPassBase.set_animationSet","away3d/materials/passes/MaterialPassBase.hx",260,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_275_get_renderToTexture,"away3d.materials.passes.MaterialPassBase","get_renderToTexture",0xf778afda,"away3d.materials.passes.MaterialPassBase.get_renderToTexture","away3d/materials/passes/MaterialPassBase.hx",275,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_283_dispose,"away3d.materials.passes.MaterialPassBase","dispose",0xfecca578,"away3d.materials.passes.MaterialPassBase.dispose","away3d/materials/passes/MaterialPassBase.hx",283,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_300_get_numUsedStreams,"away3d.materials.passes.MaterialPassBase","get_numUsedStreams",0xb4937f20,"away3d.materials.passes.MaterialPassBase.get_numUsedStreams","away3d/materials/passes/MaterialPassBase.hx",300,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_308_get_numUsedVertexConstants,"away3d.materials.passes.MaterialPassBase","get_numUsedVertexConstants",0xbc5306b8,"away3d.materials.passes.MaterialPassBase.get_numUsedVertexConstants","away3d/materials/passes/MaterialPassBase.hx",308,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_313_get_numUsedVaryings,"away3d.materials.passes.MaterialPassBase","get_numUsedVaryings",0x6b494a36,"away3d.materials.passes.MaterialPassBase.get_numUsedVaryings","away3d/materials/passes/MaterialPassBase.hx",313,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_321_get_numUsedFragmentConstants,"away3d.materials.passes.MaterialPassBase","get_numUsedFragmentConstants",0xe3e7ba0c,"away3d.materials.passes.MaterialPassBase.get_numUsedFragmentConstants","away3d/materials/passes/MaterialPassBase.hx",321,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_326_get_needFragmentAnimation,"away3d.materials.passes.MaterialPassBase","get_needFragmentAnimation",0x8e00094e,"away3d.materials.passes.MaterialPassBase.get_needFragmentAnimation","away3d/materials/passes/MaterialPassBase.hx",326,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_334_get_needUVAnimation,"away3d.materials.passes.MaterialPassBase","get_needUVAnimation",0x9679e53d,"away3d.materials.passes.MaterialPassBase.get_needUVAnimation","away3d/materials/passes/MaterialPassBase.hx",334,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_344_updateAnimationState,"away3d.materials.passes.MaterialPassBase","updateAnimationState",0x07e647dd,"away3d.materials.passes.MaterialPassBase.updateAnimationState","away3d/materials/passes/MaterialPassBase.hx",344,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_354_render,"away3d.materials.passes.MaterialPassBase","render",0x1463649d,"away3d.materials.passes.MaterialPassBase.render","away3d/materials/passes/MaterialPassBase.hx",354,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_362_getVertexCode,"away3d.materials.passes.MaterialPassBase","getVertexCode",0x56d86480,"away3d.materials.passes.MaterialPassBase.getVertexCode","away3d/materials/passes/MaterialPassBase.hx",362,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_371_getFragmentCode,"away3d.materials.passes.MaterialPassBase","getFragmentCode",0xad47e0ac,"away3d.materials.passes.MaterialPassBase.getFragmentCode","away3d/materials/passes/MaterialPassBase.hx",371,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_387_setBlendMode,"away3d.materials.passes.MaterialPassBase","setBlendMode",0xd9764cd9,"away3d.materials.passes.MaterialPassBase.setBlendMode","away3d/materials/passes/MaterialPassBase.hx",387,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_425_activate,"away3d.materials.passes.MaterialPassBase","activate",0xb24c34ba,"away3d.materials.passes.MaterialPassBase.activate","away3d/materials/passes/MaterialPassBase.hx",425,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_469_deactivate,"away3d.materials.passes.MaterialPassBase","deactivate",0x839f04fb,"away3d.materials.passes.MaterialPassBase.deactivate","away3d/materials/passes/MaterialPassBase.hx",469,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_496_invalidateShaderProgram,"away3d.materials.passes.MaterialPassBase","invalidateShaderProgram",0x8240de3d,"away3d.materials.passes.MaterialPassBase.invalidateShaderProgram","away3d/materials/passes/MaterialPassBase.hx",496,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_509_updateProgram,"away3d.materials.passes.MaterialPassBase","updateProgram",0xe74c7d14,"away3d.materials.passes.MaterialPassBase.updateProgram","away3d/materials/passes/MaterialPassBase.hx",509,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_554_get_lightPicker,"away3d.materials.passes.MaterialPassBase","get_lightPicker",0x28e32274,"away3d.materials.passes.MaterialPassBase.get_lightPicker","away3d/materials/passes/MaterialPassBase.hx",554,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_558_set_lightPicker,"away3d.materials.passes.MaterialPassBase","set_lightPicker",0x24ae9f80,"away3d.materials.passes.MaterialPassBase.set_lightPicker","away3d/materials/passes/MaterialPassBase.hx",558,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_573_onLightsChange,"away3d.materials.passes.MaterialPassBase","onLightsChange",0x174aac33,"away3d.materials.passes.MaterialPassBase.onLightsChange","away3d/materials/passes/MaterialPassBase.hx",573,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_580_updateLights,"away3d.materials.passes.MaterialPassBase","updateLights",0x90b47a4d,"away3d.materials.passes.MaterialPassBase.updateLights","away3d/materials/passes/MaterialPassBase.hx",580,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_591_get_alphaPremultiplied,"away3d.materials.passes.MaterialPassBase","get_alphaPremultiplied",0x35a087a8,"away3d.materials.passes.MaterialPassBase.get_alphaPremultiplied","away3d/materials/passes/MaterialPassBase.hx",591,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_595_set_alphaPremultiplied,"away3d.materials.passes.MaterialPassBase","set_alphaPremultiplied",0x694c041c,"away3d.materials.passes.MaterialPassBase.set_alphaPremultiplied","away3d/materials/passes/MaterialPassBase.hx",595,0xb369ff38)
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_89_boot,"away3d.materials.passes.MaterialPassBase","boot",0x0ecacdb9,"away3d.materials.passes.MaterialPassBase.boot","away3d/materials/passes/MaterialPassBase.hx",89,0xb369ff38)
static const int _hx_array_data_52578447_54[] = {
	(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_97536d97c2fc4d02_90_boot,"away3d.materials.passes.MaterialPassBase","boot",0x0ecacdb9,"away3d.materials.passes.MaterialPassBase.boot","away3d/materials/passes/MaterialPassBase.hx",90,0xb369ff38)
static const int _hx_array_data_52578447_58[] = {
	(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,
};
namespace away3d{
namespace materials{
namespace passes{

void MaterialPassBase_obj::__construct(::hx::Null< bool >  __o_renderToTexture){
            		bool renderToTexture = __o_renderToTexture.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_34_new)
HXLINE( 108)		this->_writeDepth = true;
HXLINE( 107)		this->_agalVersion = 1;
HXLINE(  91)		this->_defaultCulling = 0;
HXLINE(  86)		this->_shadedTarget = HX_("ft0",22,cb,4d,00);
HXLINE(  85)		::Array< ::String > array = ::Array_obj< ::String >::fromData( _hx_array_data_52578447_4,1);
HXDLIN(  85)		int length = null();
HXDLIN(  85)		bool fixed = null();
HXDLIN(  85)		::Array< ::String > array1 = null();
HXDLIN(  85)		 ::openfl::_Vector::ObjectVector vector =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN(  85)		{
HXLINE(  85)			int _g = 0;
HXDLIN(  85)			int _g1 = array->length;
HXDLIN(  85)			while((_g < _g1)){
HXLINE(  85)				_g = (_g + 1);
HXDLIN(  85)				int i = (_g - 1);
HXDLIN(  85)				vector->set(i,array->__get(i));
            			}
            		}
HXDLIN(  85)		this->_animationTargetRegisters = vector;
HXLINE(  84)		::Array< ::String > array2 = ::Array_obj< ::String >::fromData( _hx_array_data_52578447_5,1);
HXDLIN(  84)		int length1 = null();
HXDLIN(  84)		bool fixed1 = null();
HXDLIN(  84)		::Array< ::String > array3 = null();
HXDLIN(  84)		 ::openfl::_Vector::ObjectVector vector1 =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length1,fixed1,array3,true);
HXDLIN(  84)		{
HXLINE(  84)			int _g2 = 0;
HXDLIN(  84)			int _g11 = array2->length;
HXDLIN(  84)			while((_g2 < _g11)){
HXLINE(  84)				_g2 = (_g2 + 1);
HXDLIN(  84)				int i = (_g2 - 1);
HXDLIN(  84)				vector1->set(i,array2->__get(i));
            			}
            		}
HXDLIN(  84)		this->_animatableAttributes = vector1;
HXLINE(  77)		this->_blendFactorDest = 9;
HXLINE(  76)		this->_blendFactorSource = 2;
HXLINE(  74)		this->_depthCompareMode = 5;
HXLINE(  73)		this->_anisotropy = 1;
HXLINE(  72)		this->_mipmap = true;
HXLINE(  71)		this->_repeat = false;
HXLINE(  70)		this->_smooth = true;
HXLINE(  68)		this->_numUsedVaryings = 0;
HXLINE(  67)		this->_numUsedFragmentConstants = 0;
HXLINE(  66)		this->_numUsedVertexConstants = 0;
HXLINE(  65)		this->_numUsedTextures = 0;
HXLINE(  64)		this->_numUsedStreams = 0;
HXLINE(  60)		bool fixed2 = null();
HXDLIN(  60)		::Array< ::Dynamic> array4 = null();
HXDLIN(  60)		this->_context3Ds =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed2,array4,true);
HXLINE(  59)		::Array< int > array5 = ::Array_obj< int >::fromData( _hx_array_data_52578447_6,8);
HXDLIN(  59)		int length2 = null();
HXDLIN(  59)		bool fixed3 = null();
HXDLIN(  59)		::Array< int > array6 = null();
HXDLIN(  59)		 ::openfl::_Vector::IntVector vector2 =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length2,fixed3,array6);
HXDLIN(  59)		{
HXLINE(  59)			int _g3 = 0;
HXDLIN(  59)			int _g12 = array5->length;
HXDLIN(  59)			while((_g3 < _g12)){
HXLINE(  59)				_g3 = (_g3 + 1);
HXDLIN(  59)				int i = (_g3 - 1);
HXDLIN(  59)				vector2->set(i,array5->__get(i));
            			}
            		}
HXDLIN(  59)		this->_program3Dids = vector2;
HXLINE(  58)		bool fixed4 = null();
HXDLIN(  58)		::Array< ::Dynamic> array7 = null();
HXDLIN(  58)		this->_program3Ds =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,8,fixed4,array7,true);
HXLINE( 119)		super::__construct(null());
HXLINE( 120)		this->_renderToTexture = renderToTexture;
HXLINE( 121)		this->_numUsedStreams = 1;
HXLINE( 122)		this->_numUsedVertexConstants = 5;
            	}

Dynamic MaterialPassBase_obj::__CreateEmpty() { return new MaterialPassBase_obj; }

void *MaterialPassBase_obj::_hx_vtable = 0;

Dynamic MaterialPassBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MaterialPassBase_obj > _hx_result = new MaterialPassBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MaterialPassBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x5a0f1d75;
	}
}

 ::away3d::materials::MaterialBase MaterialPassBase_obj::get_material(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_130_get_material)
HXDLIN( 130)		return this->_material;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_material,return )

 ::away3d::materials::MaterialBase MaterialPassBase_obj::set_material( ::away3d::materials::MaterialBase value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_134_set_material)
HXLINE( 135)		this->_material = value;
HXLINE( 136)		return this->_material;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_material,return )

bool MaterialPassBase_obj::get_writeDepth(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_144_get_writeDepth)
HXDLIN( 144)		return this->_writeDepth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_writeDepth,return )

bool MaterialPassBase_obj::set_writeDepth(bool value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_148_set_writeDepth)
HXLINE( 149)		this->_writeDepth = value;
HXLINE( 150)		return this->_writeDepth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_writeDepth,return )

bool MaterialPassBase_obj::get_mipmap(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_158_get_mipmap)
HXDLIN( 158)		return this->_mipmap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_mipmap,return )

bool MaterialPassBase_obj::set_mipmap(bool value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_162_set_mipmap)
HXLINE( 163)		if ((this->_mipmap == value)) {
HXLINE( 164)			return this->_mipmap;
            		}
HXLINE( 165)		this->_mipmap = value;
HXLINE( 166)		this->invalidateShaderProgram(null());
HXLINE( 167)		return this->_mipmap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_mipmap,return )

 ::Dynamic MaterialPassBase_obj::get_anisotropy(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_175_get_anisotropy)
HXDLIN( 175)		return this->_anisotropy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_anisotropy,return )

 ::Dynamic MaterialPassBase_obj::set_anisotropy( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_179_set_anisotropy)
HXLINE( 180)		if (::hx::IsEq( this->_anisotropy,value )) {
HXLINE( 181)			return value;
            		}
HXLINE( 182)		this->_anisotropy = value;
HXLINE( 183)		this->invalidateShaderProgram(null());
HXLINE( 184)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_anisotropy,return )

bool MaterialPassBase_obj::get_smooth(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_192_get_smooth)
HXDLIN( 192)		return this->_smooth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_smooth,return )

bool MaterialPassBase_obj::set_smooth(bool value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_196_set_smooth)
HXLINE( 197)		if ((this->_smooth == value)) {
HXLINE( 198)			return this->_smooth;
            		}
HXLINE( 199)		this->_smooth = value;
HXLINE( 200)		this->invalidateShaderProgram(null());
HXLINE( 201)		return this->_smooth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_smooth,return )

bool MaterialPassBase_obj::get_repeat(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_209_get_repeat)
HXDLIN( 209)		return this->_repeat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_repeat,return )

bool MaterialPassBase_obj::set_repeat(bool value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_213_set_repeat)
HXLINE( 214)		if ((this->_repeat == value)) {
HXLINE( 215)			return this->_repeat;
            		}
HXLINE( 216)		this->_repeat = value;
HXLINE( 217)		this->invalidateShaderProgram(null());
HXLINE( 218)		return this->_repeat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_repeat,return )

bool MaterialPassBase_obj::get_bothSides(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_226_get_bothSides)
HXDLIN( 226)		return this->_bothSides;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_bothSides,return )

bool MaterialPassBase_obj::set_bothSides(bool value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_230_set_bothSides)
HXLINE( 231)		this->_bothSides = value;
HXLINE( 232)		return this->_bothSides;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_bothSides,return )

 ::Dynamic MaterialPassBase_obj::get_depthCompareMode(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_242_get_depthCompareMode)
HXDLIN( 242)		return this->_depthCompareMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_depthCompareMode,return )

 ::Dynamic MaterialPassBase_obj::set_depthCompareMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_246_set_depthCompareMode)
HXLINE( 247)		this->_depthCompareMode = value;
HXLINE( 248)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_depthCompareMode,return )

::Dynamic MaterialPassBase_obj::get_animationSet(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_256_get_animationSet)
HXDLIN( 256)		return this->_animationSet;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_animationSet,return )

::Dynamic MaterialPassBase_obj::set_animationSet(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_260_set_animationSet)
HXLINE( 261)		if (::hx::IsInstanceEq( this->_animationSet,value )) {
HXLINE( 262)			return this->_animationSet;
            		}
HXLINE( 264)		this->_animationSet = value;
HXLINE( 266)		this->invalidateShaderProgram(null());
HXLINE( 267)		return this->_animationSet;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_animationSet,return )

bool MaterialPassBase_obj::get_renderToTexture(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_275_get_renderToTexture)
HXDLIN( 275)		return this->_renderToTexture;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_renderToTexture,return )

void MaterialPassBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_283_dispose)
HXLINE( 284)		if (::hx::IsNotNull( this->_lightPicker )) {
HXLINE( 285)			this->_lightPicker->removeEventListener(HX_("change",70,91,72,b7),this->onLightsChange_dyn(),null());
            		}
HXLINE( 287)		{
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(0).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(0);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(0));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(0,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(1).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(1);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(1));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(1,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(2).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(2);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(2));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(2,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(3).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(3);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(3));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(3,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(4).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(4);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(4));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(4,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(5).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(5);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(5));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(5,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(6).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(6);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(6));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(6,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
HXLINE( 288)			if (::hx::IsNotNull( this->_program3Ds->get(7).StaticCast<  ::openfl::display3D::Program3D >() )) {
HXLINE( 289)				 ::away3d::core::managers::AGALProgram3DCache _hx_tmp = ::away3d::core::managers::AGALProgram3DCache_obj::getInstanceFromIndex(7);
HXDLIN( 289)				_hx_tmp->freeProgram3D(this->_program3Dids->get(7));
HXLINE( 290)				{
HXLINE( 290)					 ::openfl::display3D::Program3D value = null();
HXDLIN( 290)					this->_program3Ds->set(7,value).StaticCast<  ::openfl::display3D::Program3D >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,dispose,(void))

int MaterialPassBase_obj::get_numUsedStreams(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_300_get_numUsedStreams)
HXDLIN( 300)		return this->_numUsedStreams;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedStreams,return )

int MaterialPassBase_obj::get_numUsedVertexConstants(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_308_get_numUsedVertexConstants)
HXDLIN( 308)		return this->_numUsedVertexConstants;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedVertexConstants,return )

int MaterialPassBase_obj::get_numUsedVaryings(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_313_get_numUsedVaryings)
HXDLIN( 313)		return this->_numUsedVaryings;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedVaryings,return )

int MaterialPassBase_obj::get_numUsedFragmentConstants(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_321_get_numUsedFragmentConstants)
HXDLIN( 321)		return this->_numUsedFragmentConstants;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_numUsedFragmentConstants,return )

bool MaterialPassBase_obj::get_needFragmentAnimation(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_326_get_needFragmentAnimation)
HXDLIN( 326)		return this->_needFragmentAnimation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_needFragmentAnimation,return )

bool MaterialPassBase_obj::get_needUVAnimation(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_334_get_needUVAnimation)
HXDLIN( 334)		return this->_needUVAnimation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_needUVAnimation,return )

void MaterialPassBase_obj::updateAnimationState(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_344_updateAnimationState)
HXDLIN( 344)		::away3d::animators::IAnimator_obj::setRenderState(::away3d::core::base::IMaterialOwner_obj::get_animator(renderable),stage3DProxy,renderable,this->_numUsedVertexConstants,this->_numUsedStreams,camera);
            	}


HX_DEFINE_DYNAMIC_FUNC3(MaterialPassBase_obj,updateAnimationState,(void))

void MaterialPassBase_obj::render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection){
            	HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_354_render)
HXDLIN( 354)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC4(MaterialPassBase_obj,render,(void))

::String MaterialPassBase_obj::getVertexCode(){
            	HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_362_getVertexCode)
HXDLIN( 362)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 362)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,getVertexCode,return )

::String MaterialPassBase_obj::getFragmentCode(::String fragmentAnimatorCode){
            	HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_371_getFragmentCode)
HXDLIN( 371)		HX_STACK_DO_THROW( ::away3d::errors::AbstractMethodError_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 371)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,getFragmentCode,return )

void MaterialPassBase_obj::setBlendMode( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_387_setBlendMode)
HXDLIN( 387)		 ::Dynamic _hx_switch_0 = value;
            		if (  (_hx_switch_0==0) ){
HXLINE( 401)			this->_blendFactorSource = 7;
HXLINE( 402)			this->_blendFactorDest = 2;
HXLINE( 403)			this->_enableBlending = true;
HXLINE( 400)			goto _hx_goto_37;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE( 405)			this->_blendFactorSource = 9;
HXLINE( 406)			this->_blendFactorDest = 7;
HXLINE( 407)			this->_enableBlending = true;
HXLINE( 404)			goto _hx_goto_37;
            		}
            		if (  (_hx_switch_0==7) ){
HXLINE( 393)			this->_blendFactorSource = 7;
HXLINE( 394)			this->_blendFactorDest = 5;
HXLINE( 395)			this->_enableBlending = true;
HXLINE( 392)			goto _hx_goto_37;
            		}
            		if (  (_hx_switch_0==9) ){
HXLINE( 397)			this->_blendFactorSource = 9;
HXLINE( 398)			this->_blendFactorDest = 8;
HXLINE( 399)			this->_enableBlending = true;
HXLINE( 396)			goto _hx_goto_37;
            		}
            		if (  (_hx_switch_0==10) ){
HXLINE( 389)			this->_blendFactorSource = 2;
HXLINE( 390)			this->_blendFactorDest = 9;
HXLINE( 391)			this->_enableBlending = false;
HXLINE( 388)			goto _hx_goto_37;
            		}
            		if (  (_hx_switch_0==12) ){
HXLINE( 409)			this->_blendFactorSource = 2;
HXLINE( 410)			this->_blendFactorDest = 6;
HXLINE( 411)			this->_enableBlending = true;
HXLINE( 408)			goto _hx_goto_37;
            		}
            		/* default */{
HXLINE( 413)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Unsupported blend mode!",44,ce,40,e2)));
            		}
            		_hx_goto_37:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,setBlendMode,(void))

void MaterialPassBase_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_425_activate)
HXLINE( 426)		int contextIndex = stage3DProxy->_stage3DIndex;
HXLINE( 427)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 429)		bool _hx_tmp;
HXDLIN( 429)		if (this->_writeDepth) {
HXLINE( 429)			_hx_tmp = !(this->_enableBlending);
            		}
            		else {
HXLINE( 429)			_hx_tmp = false;
            		}
HXDLIN( 429)		context->setDepthTest(_hx_tmp,this->_depthCompareMode);
HXLINE( 430)		if (this->_enableBlending) {
HXLINE( 431)			context->setBlendFactors(this->_blendFactorSource,this->_blendFactorDest);
            		}
HXLINE( 433)		bool _hx_tmp1;
HXDLIN( 433)		if (::hx::IsInstanceEq( this->_context3Ds->get(contextIndex).StaticCast<  ::openfl::display3D::Context3D >(),context )) {
HXLINE( 433)			_hx_tmp1 = ::hx::IsNull( this->_program3Ds->get(contextIndex).StaticCast<  ::openfl::display3D::Program3D >() );
            		}
            		else {
HXLINE( 433)			_hx_tmp1 = true;
            		}
HXDLIN( 433)		if (_hx_tmp1) {
HXLINE( 434)			this->_context3Ds->set(contextIndex,context).StaticCast<  ::openfl::display3D::Context3D >();
HXLINE( 435)			this->updateProgram(stage3DProxy);
HXLINE( 436)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
HXLINE( 439)		int prevUsed = ::away3d::materials::passes::MaterialPassBase_obj::_previousUsedStreams->get(contextIndex);
HXLINE( 440)		{
HXLINE( 440)			int _g = this->_numUsedStreams;
HXDLIN( 440)			int _g1 = prevUsed;
HXDLIN( 440)			while((_g < _g1)){
HXLINE( 440)				_g = (_g + 1);
HXDLIN( 440)				int i = (_g - 1);
HXLINE( 441)				context->setVertexBufferAt(i,null(),null(),null());
            			}
            		}
HXLINE( 443)		prevUsed = ::away3d::materials::passes::MaterialPassBase_obj::_previousUsedTexs->get(contextIndex);
HXLINE( 444)		{
HXLINE( 444)			int _g2 = this->_numUsedTextures;
HXDLIN( 444)			int _g3 = prevUsed;
HXDLIN( 444)			while((_g2 < _g3)){
HXLINE( 444)				_g2 = (_g2 + 1);
HXDLIN( 444)				int i = (_g2 - 1);
HXLINE( 445)				context->setTextureAt(i,null());
            			}
            		}
HXLINE( 447)		bool _hx_tmp2;
HXDLIN( 447)		if (::hx::IsNotNull( this->_animationSet )) {
HXLINE( 447)			_hx_tmp2 = !(::away3d::animators::IAnimationSet_obj::get_usesCPU(this->_animationSet));
            		}
            		else {
HXLINE( 447)			_hx_tmp2 = false;
            		}
HXDLIN( 447)		if (_hx_tmp2) {
HXLINE( 448)			::away3d::animators::IAnimationSet_obj::activate(this->_animationSet,stage3DProxy,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 450)		context->setProgram(this->_program3Ds->get(contextIndex).StaticCast<  ::openfl::display3D::Program3D >());
HXLINE( 452)		 ::Dynamic _hx_tmp3;
HXDLIN( 452)		if (this->_bothSides) {
HXLINE( 452)			_hx_tmp3 = 3;
            		}
            		else {
HXLINE( 452)			_hx_tmp3 = this->_defaultCulling;
            		}
HXDLIN( 452)		context->setCulling(_hx_tmp3);
HXLINE( 454)		if (this->_renderToTexture) {
HXLINE( 455)			this->_oldTarget = stage3DProxy->get_renderTarget();
HXLINE( 456)			this->_oldSurface = stage3DProxy->get_renderSurfaceSelector();
HXLINE( 457)			this->_oldDepthStencil = stage3DProxy->get_enableDepthAndStencil();
HXLINE( 458)			this->_oldRect = stage3DProxy->get_scissorRect();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MaterialPassBase_obj,activate,(void))

void MaterialPassBase_obj::deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_469_deactivate)
HXLINE( 470)		int index = stage3DProxy->_stage3DIndex;
HXLINE( 471)		::away3d::materials::passes::MaterialPassBase_obj::_previousUsedStreams->set(index,this->_numUsedStreams);
HXLINE( 472)		::away3d::materials::passes::MaterialPassBase_obj::_previousUsedTexs->set(index,this->_numUsedTextures);
HXLINE( 474)		bool _hx_tmp;
HXDLIN( 474)		if (::hx::IsNotNull( this->_animationSet )) {
HXLINE( 474)			_hx_tmp = !(::away3d::animators::IAnimationSet_obj::get_usesCPU(this->_animationSet));
            		}
            		else {
HXLINE( 474)			_hx_tmp = false;
            		}
HXDLIN( 474)		if (_hx_tmp) {
HXLINE( 475)			::away3d::animators::IAnimationSet_obj::deactivate(this->_animationSet,stage3DProxy,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 477)		if (this->_renderToTexture) {
HXLINE( 479)			stage3DProxy->setRenderTarget(this->_oldTarget,this->_oldDepthStencil,this->_oldSurface);
HXLINE( 480)			stage3DProxy->set_scissorRect(this->_oldRect);
            		}
HXLINE( 483)		if (this->_enableBlending) {
HXLINE( 484)			stage3DProxy->_context3D->setBlendFactors(2,9);
            		}
HXLINE( 487)		stage3DProxy->_context3D->setDepthTest(true,5);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,deactivate,(void))

void MaterialPassBase_obj::invalidateShaderProgram(::hx::Null< bool >  __o_updateMaterial){
            		bool updateMaterial = __o_updateMaterial.Default(true);
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_496_invalidateShaderProgram)
HXLINE( 497)		{
HXLINE( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value = null();
HXDLIN( 498)				this->_program3Ds->set(0,value).StaticCast<  ::openfl::display3D::Program3D >();
            			}
HXDLIN( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value1 = null();
HXDLIN( 498)				this->_program3Ds->set(1,value1).StaticCast<  ::openfl::display3D::Program3D >();
            			}
HXDLIN( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value2 = null();
HXDLIN( 498)				this->_program3Ds->set(2,value2).StaticCast<  ::openfl::display3D::Program3D >();
            			}
HXDLIN( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value3 = null();
HXDLIN( 498)				this->_program3Ds->set(3,value3).StaticCast<  ::openfl::display3D::Program3D >();
            			}
HXDLIN( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value4 = null();
HXDLIN( 498)				this->_program3Ds->set(4,value4).StaticCast<  ::openfl::display3D::Program3D >();
            			}
HXDLIN( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value5 = null();
HXDLIN( 498)				this->_program3Ds->set(5,value5).StaticCast<  ::openfl::display3D::Program3D >();
            			}
HXDLIN( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value6 = null();
HXDLIN( 498)				this->_program3Ds->set(6,value6).StaticCast<  ::openfl::display3D::Program3D >();
            			}
HXDLIN( 498)			{
HXLINE( 498)				 ::openfl::display3D::Program3D value7 = null();
HXDLIN( 498)				this->_program3Ds->set(7,value7).StaticCast<  ::openfl::display3D::Program3D >();
            			}
            		}
HXLINE( 500)		bool _hx_tmp;
HXDLIN( 500)		if (::hx::IsNotNull( this->_material )) {
HXLINE( 500)			_hx_tmp = updateMaterial;
            		}
            		else {
HXLINE( 500)			_hx_tmp = false;
            		}
HXDLIN( 500)		if (_hx_tmp) {
HXLINE( 501)			this->_material->invalidatePasses(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,invalidateShaderProgram,(void))

void MaterialPassBase_obj::updateProgram( ::away3d::core::managers::Stage3DProxy stage3DProxy){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_509_updateProgram)
HXLINE( 510)		::String animatorCode = HX_("",00,00,00,00);
HXLINE( 511)		::String UVAnimatorCode = HX_("",00,00,00,00);
HXLINE( 512)		::String fragmentAnimatorCode = HX_("",00,00,00,00);
HXLINE( 513)		::String vertexCode = this->getVertexCode();
HXLINE( 515)		bool _hx_tmp;
HXDLIN( 515)		if (::hx::IsNotNull( this->_animationSet )) {
HXLINE( 515)			_hx_tmp = !(::away3d::animators::IAnimationSet_obj::get_usesCPU(this->_animationSet));
            		}
            		else {
HXLINE( 515)			_hx_tmp = false;
            		}
HXDLIN( 515)		if (_hx_tmp) {
HXLINE( 516)			::Dynamic animatorCode1 = this->_animationSet;
HXDLIN( 516)			 ::openfl::_Vector::ObjectVector animatorCode2 = this->_animatableAttributes;
HXDLIN( 516)			 ::openfl::_Vector::ObjectVector animatorCode3 = this->_animationTargetRegisters;
HXDLIN( 516)			animatorCode = ::away3d::animators::IAnimationSet_obj::getAGALVertexCode(animatorCode1,::hx::ObjectPtr<OBJ_>(this),animatorCode2,animatorCode3,stage3DProxy->get_profile());
HXLINE( 517)			if (this->_needFragmentAnimation) {
HXLINE( 518)				::Dynamic fragmentAnimatorCode1 = this->_animationSet;
HXDLIN( 518)				::String fragmentAnimatorCode2 = this->_shadedTarget;
HXDLIN( 518)				fragmentAnimatorCode = ::away3d::animators::IAnimationSet_obj::getAGALFragmentCode(fragmentAnimatorCode1,::hx::ObjectPtr<OBJ_>(this),fragmentAnimatorCode2,stage3DProxy->get_profile());
            			}
HXLINE( 519)			if (this->_needUVAnimation) {
HXLINE( 520)				UVAnimatorCode = ::away3d::animators::IAnimationSet_obj::getAGALUVCode(this->_animationSet,::hx::ObjectPtr<OBJ_>(this),this->_UVSource,this->_UVTarget);
            			}
HXLINE( 521)			::away3d::animators::IAnimationSet_obj::doneAGALCode(this->_animationSet,::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE( 523)			int len = this->_animatableAttributes->get_length();
HXLINE( 527)			{
HXLINE( 527)				int _g = 0;
HXDLIN( 527)				int _g1 = len;
HXDLIN( 527)				while((_g < _g1)){
HXLINE( 527)					_g = (_g + 1);
HXDLIN( 527)					int i = (_g - 1);
HXLINE( 528)					::String animatorCode1 = ((HX_("mov ",cc,e2,60,48) + this->_animationTargetRegisters->get(i)) + HX_(", ",74,26,00,00));
HXDLIN( 528)					animatorCode = (animatorCode + ((animatorCode1 + this->_animatableAttributes->get(i)) + HX_("\n",0a,00,00,00)));
            				}
            			}
HXLINE( 529)			if (this->_needUVAnimation) {
HXLINE( 530)				UVAnimatorCode = ((((HX_("mov ",cc,e2,60,48) + this->_UVTarget) + HX_(",",2c,00,00,00)) + this->_UVSource) + HX_("\n",0a,00,00,00));
            			}
            		}
HXLINE( 533)		vertexCode = ((animatorCode + UVAnimatorCode) + vertexCode);
HXLINE( 535)		::String fragmentCode = this->getFragmentCode(fragmentAnimatorCode);
HXLINE( 536)		if (::away3d::debug::Debug_obj::active) {
HXLINE( 537)			::haxe::Log_obj::trace(HX_("Compiling AGAL Code:",0e,75,bd,e5),::hx::SourceInfo(HX_("away3d/materials/passes/MaterialPassBase.hx",38,ff,69,b3),537,HX_("away3d.materials.passes.MaterialPassBase",47,84,57,52),HX_("updateProgram",7b,af,67,bf)));
HXLINE( 538)			::haxe::Log_obj::trace(HX_("--------------------",c0,41,cc,4b),::hx::SourceInfo(HX_("away3d/materials/passes/MaterialPassBase.hx",38,ff,69,b3),538,HX_("away3d.materials.passes.MaterialPassBase",47,84,57,52),HX_("updateProgram",7b,af,67,bf)));
HXLINE( 539)			::haxe::Log_obj::trace(vertexCode,::hx::SourceInfo(HX_("away3d/materials/passes/MaterialPassBase.hx",38,ff,69,b3),539,HX_("away3d.materials.passes.MaterialPassBase",47,84,57,52),HX_("updateProgram",7b,af,67,bf)));
HXLINE( 540)			::haxe::Log_obj::trace(HX_("--------------------",c0,41,cc,4b),::hx::SourceInfo(HX_("away3d/materials/passes/MaterialPassBase.hx",38,ff,69,b3),540,HX_("away3d.materials.passes.MaterialPassBase",47,84,57,52),HX_("updateProgram",7b,af,67,bf)));
HXLINE( 541)			::haxe::Log_obj::trace(fragmentCode,::hx::SourceInfo(HX_("away3d/materials/passes/MaterialPassBase.hx",38,ff,69,b3),541,HX_("away3d.materials.passes.MaterialPassBase",47,84,57,52),HX_("updateProgram",7b,af,67,bf)));
            		}
HXLINE( 543)		::away3d::core::managers::AGALProgram3DCache_obj::getInstance(stage3DProxy)->setProgram3D(::hx::ObjectPtr<OBJ_>(this),vertexCode,fragmentCode,this->_agalVersion);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,updateProgram,(void))

 ::away3d::materials::lightpickers::LightPickerBase MaterialPassBase_obj::get_lightPicker(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_554_get_lightPicker)
HXDLIN( 554)		return this->_lightPicker;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_lightPicker,return )

 ::away3d::materials::lightpickers::LightPickerBase MaterialPassBase_obj::set_lightPicker( ::away3d::materials::lightpickers::LightPickerBase value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_558_set_lightPicker)
HXLINE( 559)		if (::hx::IsNotNull( this->_lightPicker )) {
HXLINE( 560)			this->_lightPicker->removeEventListener(HX_("change",70,91,72,b7),this->onLightsChange_dyn(),null());
            		}
HXLINE( 561)		this->_lightPicker = value;
HXLINE( 562)		if (::hx::IsNotNull( this->_lightPicker )) {
HXLINE( 563)			this->_lightPicker->addEventListener(HX_("change",70,91,72,b7),this->onLightsChange_dyn(),null(),null(),null());
            		}
HXLINE( 564)		this->updateLights();
HXLINE( 565)		return this->_lightPicker;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_lightPicker,return )

void MaterialPassBase_obj::onLightsChange( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_573_onLightsChange)
HXDLIN( 573)		this->updateLights();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,onLightsChange,(void))

void MaterialPassBase_obj::updateLights(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_580_updateLights)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,updateLights,(void))

bool MaterialPassBase_obj::get_alphaPremultiplied(){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_591_get_alphaPremultiplied)
HXDLIN( 591)		return this->_alphaPremultiplied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MaterialPassBase_obj,get_alphaPremultiplied,return )

bool MaterialPassBase_obj::set_alphaPremultiplied(bool value){
            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_595_set_alphaPremultiplied)
HXLINE( 596)		this->_alphaPremultiplied = value;
HXLINE( 597)		this->invalidateShaderProgram(false);
HXLINE( 598)		return this->_alphaPremultiplied;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialPassBase_obj,set_alphaPremultiplied,return )

 ::openfl::_Vector::IntVector MaterialPassBase_obj::_previousUsedStreams;

 ::openfl::_Vector::IntVector MaterialPassBase_obj::_previousUsedTexs;


::hx::ObjectPtr< MaterialPassBase_obj > MaterialPassBase_obj::__new(::hx::Null< bool >  __o_renderToTexture) {
	::hx::ObjectPtr< MaterialPassBase_obj > __this = new MaterialPassBase_obj();
	__this->__construct(__o_renderToTexture);
	return __this;
}

::hx::ObjectPtr< MaterialPassBase_obj > MaterialPassBase_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_renderToTexture) {
	MaterialPassBase_obj *__this = (MaterialPassBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MaterialPassBase_obj), true, "away3d.materials.passes.MaterialPassBase"));
	*(void **)__this = MaterialPassBase_obj::_hx_vtable;
	__this->__construct(__o_renderToTexture);
	return __this;
}

MaterialPassBase_obj::MaterialPassBase_obj()
{
}

void MaterialPassBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialPassBase);
	HX_MARK_MEMBER_NAME(_material,"_material");
	HX_MARK_MEMBER_NAME(_animationSet,"_animationSet");
	HX_MARK_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_MARK_MEMBER_NAME(_program3Dids,"_program3Dids");
	HX_MARK_MEMBER_NAME(_context3Ds,"_context3Ds");
	HX_MARK_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_MARK_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_MARK_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_MARK_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_MARK_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_mipmap,"_mipmap");
	HX_MARK_MEMBER_NAME(_anisotropy,"_anisotropy");
	HX_MARK_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	HX_MARK_MEMBER_NAME(_blendFactorSource,"_blendFactorSource");
	HX_MARK_MEMBER_NAME(_blendFactorDest,"_blendFactorDest");
	HX_MARK_MEMBER_NAME(_enableBlending,"_enableBlending");
	HX_MARK_MEMBER_NAME(_bothSides,"_bothSides");
	HX_MARK_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_MARK_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_MARK_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_MARK_MEMBER_NAME(_shadedTarget,"_shadedTarget");
	HX_MARK_MEMBER_NAME(_defaultCulling,"_defaultCulling");
	HX_MARK_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_MARK_MEMBER_NAME(_oldTarget,"_oldTarget");
	HX_MARK_MEMBER_NAME(_oldSurface,"_oldSurface");
	HX_MARK_MEMBER_NAME(_oldDepthStencil,"_oldDepthStencil");
	HX_MARK_MEMBER_NAME(_oldRect,"_oldRect");
	HX_MARK_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_MARK_MEMBER_NAME(_needFragmentAnimation,"_needFragmentAnimation");
	HX_MARK_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_MARK_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_MARK_MEMBER_NAME(_UVSource,"_UVSource");
	HX_MARK_MEMBER_NAME(_agalVersion,"_agalVersion");
	HX_MARK_MEMBER_NAME(_writeDepth,"_writeDepth");
	HX_MARK_MEMBER_NAME(animationRegisterCache,"animationRegisterCache");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MaterialPassBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_material,"_material");
	HX_VISIT_MEMBER_NAME(_animationSet,"_animationSet");
	HX_VISIT_MEMBER_NAME(_program3Ds,"_program3Ds");
	HX_VISIT_MEMBER_NAME(_program3Dids,"_program3Dids");
	HX_VISIT_MEMBER_NAME(_context3Ds,"_context3Ds");
	HX_VISIT_MEMBER_NAME(_numUsedStreams,"_numUsedStreams");
	HX_VISIT_MEMBER_NAME(_numUsedTextures,"_numUsedTextures");
	HX_VISIT_MEMBER_NAME(_numUsedVertexConstants,"_numUsedVertexConstants");
	HX_VISIT_MEMBER_NAME(_numUsedFragmentConstants,"_numUsedFragmentConstants");
	HX_VISIT_MEMBER_NAME(_numUsedVaryings,"_numUsedVaryings");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_mipmap,"_mipmap");
	HX_VISIT_MEMBER_NAME(_anisotropy,"_anisotropy");
	HX_VISIT_MEMBER_NAME(_depthCompareMode,"_depthCompareMode");
	HX_VISIT_MEMBER_NAME(_blendFactorSource,"_blendFactorSource");
	HX_VISIT_MEMBER_NAME(_blendFactorDest,"_blendFactorDest");
	HX_VISIT_MEMBER_NAME(_enableBlending,"_enableBlending");
	HX_VISIT_MEMBER_NAME(_bothSides,"_bothSides");
	HX_VISIT_MEMBER_NAME(_lightPicker,"_lightPicker");
	HX_VISIT_MEMBER_NAME(_animatableAttributes,"_animatableAttributes");
	HX_VISIT_MEMBER_NAME(_animationTargetRegisters,"_animationTargetRegisters");
	HX_VISIT_MEMBER_NAME(_shadedTarget,"_shadedTarget");
	HX_VISIT_MEMBER_NAME(_defaultCulling,"_defaultCulling");
	HX_VISIT_MEMBER_NAME(_renderToTexture,"_renderToTexture");
	HX_VISIT_MEMBER_NAME(_oldTarget,"_oldTarget");
	HX_VISIT_MEMBER_NAME(_oldSurface,"_oldSurface");
	HX_VISIT_MEMBER_NAME(_oldDepthStencil,"_oldDepthStencil");
	HX_VISIT_MEMBER_NAME(_oldRect,"_oldRect");
	HX_VISIT_MEMBER_NAME(_alphaPremultiplied,"_alphaPremultiplied");
	HX_VISIT_MEMBER_NAME(_needFragmentAnimation,"_needFragmentAnimation");
	HX_VISIT_MEMBER_NAME(_needUVAnimation,"_needUVAnimation");
	HX_VISIT_MEMBER_NAME(_UVTarget,"_UVTarget");
	HX_VISIT_MEMBER_NAME(_UVSource,"_UVSource");
	HX_VISIT_MEMBER_NAME(_agalVersion,"_agalVersion");
	HX_VISIT_MEMBER_NAME(_writeDepth,"_writeDepth");
	HX_VISIT_MEMBER_NAME(animationRegisterCache,"animationRegisterCache");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MaterialPassBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mipmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mipmap() ); }
		if (HX_FIELD_EQ(inName,"smooth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_smooth() ); }
		if (HX_FIELD_EQ(inName,"repeat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_repeat() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_smooth") ) { return ::hx::Val( _smooth ); }
		if (HX_FIELD_EQ(inName,"_repeat") ) { return ::hx::Val( _repeat ); }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { return ::hx::Val( _mipmap ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_material() ); }
		if (HX_FIELD_EQ(inName,"_oldRect") ) { return ::hx::Val( _oldRect ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bothSides") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bothSides() ); }
		if (HX_FIELD_EQ(inName,"_material") ) { return ::hx::Val( _material ); }
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { return ::hx::Val( _UVTarget ); }
		if (HX_FIELD_EQ(inName,"_UVSource") ) { return ::hx::Val( _UVSource ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeDepth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_writeDepth() ); }
		if (HX_FIELD_EQ(inName,"anisotropy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_anisotropy() ); }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { return ::hx::Val( _bothSides ); }
		if (HX_FIELD_EQ(inName,"_oldTarget") ) { return ::hx::Val( _oldTarget ); }
		if (HX_FIELD_EQ(inName,"get_mipmap") ) { return ::hx::Val( get_mipmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mipmap") ) { return ::hx::Val( set_mipmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { return ::hx::Val( get_smooth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_smooth") ) { return ::hx::Val( set_smooth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { return ::hx::Val( get_repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_repeat") ) { return ::hx::Val( set_repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightPicker() ); }
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { return ::hx::Val( _program3Ds ); }
		if (HX_FIELD_EQ(inName,"_context3Ds") ) { return ::hx::Val( _context3Ds ); }
		if (HX_FIELD_EQ(inName,"_anisotropy") ) { return ::hx::Val( _anisotropy ); }
		if (HX_FIELD_EQ(inName,"_oldSurface") ) { return ::hx::Val( _oldSurface ); }
		if (HX_FIELD_EQ(inName,"_writeDepth") ) { return ::hx::Val( _writeDepth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"animationSet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animationSet() ); }
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { return ::hx::Val( _lightPicker ); }
		if (HX_FIELD_EQ(inName,"_agalVersion") ) { return ::hx::Val( _agalVersion ); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return ::hx::Val( get_material_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return ::hx::Val( set_material_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return ::hx::Val( setBlendMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateLights") ) { return ::hx::Val( updateLights_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_animationSet") ) { return ::hx::Val( _animationSet ); }
		if (HX_FIELD_EQ(inName,"_program3Dids") ) { return ::hx::Val( _program3Dids ); }
		if (HX_FIELD_EQ(inName,"_shadedTarget") ) { return ::hx::Val( _shadedTarget ); }
		if (HX_FIELD_EQ(inName,"get_bothSides") ) { return ::hx::Val( get_bothSides_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bothSides") ) { return ::hx::Val( set_bothSides_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateProgram") ) { return ::hx::Val( updateProgram_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numUsedStreams") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedStreams() ); }
		if (HX_FIELD_EQ(inName,"get_writeDepth") ) { return ::hx::Val( get_writeDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_writeDepth") ) { return ::hx::Val( set_writeDepth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_anisotropy") ) { return ::hx::Val( get_anisotropy_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_anisotropy") ) { return ::hx::Val( set_anisotropy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLightsChange") ) { return ::hx::Val( onLightsChange_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_renderToTexture() ); }
		if (HX_FIELD_EQ(inName,"numUsedVaryings") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedVaryings() ); }
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_needUVAnimation() ); }
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { return ::hx::Val( _numUsedStreams ); }
		if (HX_FIELD_EQ(inName,"_enableBlending") ) { return ::hx::Val( _enableBlending ); }
		if (HX_FIELD_EQ(inName,"_defaultCulling") ) { return ::hx::Val( _defaultCulling ); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_lightPicker") ) { return ::hx::Val( get_lightPicker_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lightPicker") ) { return ::hx::Val( set_lightPicker_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depthCompareMode() ); }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { return ::hx::Val( _numUsedTextures ); }
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { return ::hx::Val( _numUsedVaryings ); }
		if (HX_FIELD_EQ(inName,"_blendFactorDest") ) { return ::hx::Val( _blendFactorDest ); }
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { return ::hx::Val( _renderToTexture ); }
		if (HX_FIELD_EQ(inName,"_oldDepthStencil") ) { return ::hx::Val( _oldDepthStencil ); }
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { return ::hx::Val( _needUVAnimation ); }
		if (HX_FIELD_EQ(inName,"get_animationSet") ) { return ::hx::Val( get_animationSet_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animationSet") ) { return ::hx::Val( set_animationSet_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { return ::hx::Val( _depthCompareMode ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaPremultiplied() ); }
		if (HX_FIELD_EQ(inName,"_blendFactorSource") ) { return ::hx::Val( _blendFactorSource ); }
		if (HX_FIELD_EQ(inName,"get_numUsedStreams") ) { return ::hx::Val( get_numUsedStreams_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { return ::hx::Val( _alphaPremultiplied ); }
		if (HX_FIELD_EQ(inName,"get_renderToTexture") ) { return ::hx::Val( get_renderToTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numUsedVaryings") ) { return ::hx::Val( get_numUsedVaryings_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_needUVAnimation") ) { return ::hx::Val( get_needUVAnimation_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_depthCompareMode") ) { return ::hx::Val( get_depthCompareMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depthCompareMode") ) { return ::hx::Val( set_depthCompareMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateAnimationState") ) { return ::hx::Val( updateAnimationState_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"needFragmentAnimation") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_needFragmentAnimation() ); }
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { return ::hx::Val( _animatableAttributes ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"numUsedVertexConstants") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedVertexConstants() ); }
		if (HX_FIELD_EQ(inName,"_needFragmentAnimation") ) { return ::hx::Val( _needFragmentAnimation ); }
		if (HX_FIELD_EQ(inName,"animationRegisterCache") ) { return ::hx::Val( animationRegisterCache ); }
		if (HX_FIELD_EQ(inName,"get_alphaPremultiplied") ) { return ::hx::Val( get_alphaPremultiplied_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaPremultiplied") ) { return ::hx::Val( set_alphaPremultiplied_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { return ::hx::Val( _numUsedVertexConstants ); }
		if (HX_FIELD_EQ(inName,"invalidateShaderProgram") ) { return ::hx::Val( invalidateShaderProgram_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"numUsedFragmentConstants") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numUsedFragmentConstants() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { return ::hx::Val( _numUsedFragmentConstants ); }
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { return ::hx::Val( _animationTargetRegisters ); }
		if (HX_FIELD_EQ(inName,"get_needFragmentAnimation") ) { return ::hx::Val( get_needFragmentAnimation_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_numUsedVertexConstants") ) { return ::hx::Val( get_numUsedVertexConstants_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_numUsedFragmentConstants") ) { return ::hx::Val( get_numUsedFragmentConstants_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MaterialPassBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_previousUsedTexs") ) { outValue = ( _previousUsedTexs ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_previousUsedStreams") ) { outValue = ( _previousUsedStreams ); return true; }
	}
	return false;
}

::hx::Val MaterialPassBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mipmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mipmap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"smooth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_smooth(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"repeat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_repeat(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mipmap") ) { _mipmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_material(inValue.Cast<  ::away3d::materials::MaterialBase >()) ); }
		if (HX_FIELD_EQ(inName,"_oldRect") ) { _oldRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bothSides") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bothSides(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_material") ) { _material=inValue.Cast<  ::away3d::materials::MaterialBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UVTarget") ) { _UVTarget=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UVSource") ) { _UVSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeDepth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_writeDepth(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"anisotropy") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_anisotropy(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_bothSides") ) { _bothSides=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldTarget") ) { _oldTarget=inValue.Cast<  ::openfl::display3D::textures::TextureBase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lightPicker") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lightPicker(inValue.Cast<  ::away3d::materials::lightpickers::LightPickerBase >()) ); }
		if (HX_FIELD_EQ(inName,"_program3Ds") ) { _program3Ds=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_context3Ds") ) { _context3Ds=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anisotropy") ) { _anisotropy=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldSurface") ) { _oldSurface=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_writeDepth") ) { _writeDepth=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"animationSet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animationSet(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_lightPicker") ) { _lightPicker=inValue.Cast<  ::away3d::materials::lightpickers::LightPickerBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_agalVersion") ) { _agalVersion=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_animationSet") ) { _animationSet=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_program3Dids") ) { _program3Dids=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadedTarget") ) { _shadedTarget=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_numUsedStreams") ) { _numUsedStreams=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enableBlending") ) { _enableBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_defaultCulling") ) { _defaultCulling=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depthCompareMode(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_numUsedTextures") ) { _numUsedTextures=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numUsedVaryings") ) { _numUsedVaryings=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendFactorDest") ) { _blendFactorDest=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderToTexture") ) { _renderToTexture=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldDepthStencil") ) { _oldDepthStencil=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_needUVAnimation") ) { _needUVAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthCompareMode") ) { _depthCompareMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaPremultiplied") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaPremultiplied(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_blendFactorSource") ) { _blendFactorSource=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_alphaPremultiplied") ) { _alphaPremultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_animatableAttributes") ) { _animatableAttributes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_needFragmentAnimation") ) { _needFragmentAnimation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationRegisterCache") ) { animationRegisterCache=inValue.Cast<  ::away3d::animators::data::AnimationRegisterCache >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_numUsedVertexConstants") ) { _numUsedVertexConstants=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_numUsedFragmentConstants") ) { _numUsedFragmentConstants=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animationTargetRegisters") ) { _animationTargetRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MaterialPassBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_previousUsedTexs") ) { _previousUsedTexs=ioValue.Cast<  ::openfl::_Vector::IntVector >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_previousUsedStreams") ) { _previousUsedStreams=ioValue.Cast<  ::openfl::_Vector::IntVector >(); return true; }
	}
	return false;
}

void MaterialPassBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("material",a7,5c,a5,f0));
	outFields->push(HX_("writeDepth",a4,eb,eb,6b));
	outFields->push(HX_("mipmap",88,2d,54,54));
	outFields->push(HX_("smooth",2e,08,6b,07));
	outFields->push(HX_("repeat",5b,97,7c,06));
	outFields->push(HX_("anisotropy",02,f8,8e,1b));
	outFields->push(HX_("bothSides",bb,ca,16,0a));
	outFields->push(HX_("depthCompareMode",65,5e,47,b5));
	outFields->push(HX_("animationSet",fe,9e,2e,aa));
	outFields->push(HX_("renderToTexture",6a,5a,1d,b7));
	outFields->push(HX_("numUsedStreams",90,56,cb,05));
	outFields->push(HX_("numUsedVertexConstants",28,ce,57,a5));
	outFields->push(HX_("numUsedVaryings",c6,f4,ed,2a));
	outFields->push(HX_("numUsedFragmentConstants",7c,3d,41,ad));
	outFields->push(HX_("needFragmentAnimation",de,ff,92,45));
	outFields->push(HX_("needUVAnimation",cd,8f,1e,56));
	outFields->push(HX_("lightPicker",04,45,1b,e3));
	outFields->push(HX_("alphaPremultiplied",18,d7,f0,91));
	outFields->push(HX_("_material",06,54,3b,38));
	outFields->push(HX_("_animationSet",dd,31,9d,8c));
	outFields->push(HX_("_program3Ds",bd,db,61,21));
	outFields->push(HX_("_program3Dids",02,c6,56,a2));
	outFields->push(HX_("_context3Ds",32,45,5e,d8));
	outFields->push(HX_("_numUsedStreams",2f,9f,2b,4f));
	outFields->push(HX_("_numUsedTextures",7c,08,d3,d6));
	outFields->push(HX_("_numUsedVertexConstants",c7,4d,30,38));
	outFields->push(HX_("_numUsedFragmentConstants",db,22,f0,06));
	outFields->push(HX_("_numUsedVaryings",47,37,cd,15));
	outFields->push(HX_("_smooth",cd,19,e2,75));
	outFields->push(HX_("_repeat",fa,a8,f3,74));
	outFields->push(HX_("_mipmap",27,3f,cb,c2));
	outFields->push(HX_("_anisotropy",21,c5,18,ee));
	outFields->push(HX_("_depthCompareMode",c4,4c,c2,4d));
	outFields->push(HX_("_blendFactorSource",bc,51,b1,22));
	outFields->push(HX_("_blendFactorDest",03,55,02,db));
	outFields->push(HX_("_enableBlending",73,db,66,ec));
	outFields->push(HX_("_bothSides",7c,46,b9,65));
	outFields->push(HX_("_lightPicker",05,f3,24,49));
	outFields->push(HX_("_animatableAttributes",34,59,6f,48));
	outFields->push(HX_("_animationTargetRegisters",da,ed,7c,5c));
	outFields->push(HX_("_shadedTarget",a7,a4,17,93));
	outFields->push(HX_("_defaultCulling",4e,84,28,cc));
	outFields->push(HX_("_renderToTexture",eb,9c,fc,a1));
	outFields->push(HX_("_oldTarget",19,f3,7a,ed));
	outFields->push(HX_("_oldSurface",65,35,fb,b2));
	outFields->push(HX_("_oldDepthStencil",01,71,ae,72));
	outFields->push(HX_("_oldRect",ec,4a,a4,3a));
	outFields->push(HX_("_alphaPremultiplied",37,5b,cb,71));
	outFields->push(HX_("_needFragmentAnimation",1f,99,a0,9e));
	outFields->push(HX_("_needUVAnimation",4e,d2,fd,40));
	outFields->push(HX_("_UVTarget",f1,27,0d,f9));
	outFields->push(HX_("_UVSource",7b,e5,51,a4));
	outFields->push(HX_("_agalVersion",c8,89,4a,f1));
	outFields->push(HX_("_writeDepth",c3,b8,75,3e));
	outFields->push(HX_("animationRegisterCache",3b,ab,44,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MaterialPassBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::MaterialBase */ ,(int)offsetof(MaterialPassBase_obj,_material),HX_("_material",06,54,3b,38)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(MaterialPassBase_obj,_animationSet),HX_("_animationSet",dd,31,9d,8c)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(MaterialPassBase_obj,_program3Ds),HX_("_program3Ds",bd,db,61,21)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(MaterialPassBase_obj,_program3Dids),HX_("_program3Dids",02,c6,56,a2)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(MaterialPassBase_obj,_context3Ds),HX_("_context3Ds",32,45,5e,d8)},
	{::hx::fsInt,(int)offsetof(MaterialPassBase_obj,_numUsedStreams),HX_("_numUsedStreams",2f,9f,2b,4f)},
	{::hx::fsInt,(int)offsetof(MaterialPassBase_obj,_numUsedTextures),HX_("_numUsedTextures",7c,08,d3,d6)},
	{::hx::fsInt,(int)offsetof(MaterialPassBase_obj,_numUsedVertexConstants),HX_("_numUsedVertexConstants",c7,4d,30,38)},
	{::hx::fsInt,(int)offsetof(MaterialPassBase_obj,_numUsedFragmentConstants),HX_("_numUsedFragmentConstants",db,22,f0,06)},
	{::hx::fsInt,(int)offsetof(MaterialPassBase_obj,_numUsedVaryings),HX_("_numUsedVaryings",47,37,cd,15)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_smooth),HX_("_smooth",cd,19,e2,75)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_repeat),HX_("_repeat",fa,a8,f3,74)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_mipmap),HX_("_mipmap",27,3f,cb,c2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialPassBase_obj,_anisotropy),HX_("_anisotropy",21,c5,18,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialPassBase_obj,_depthCompareMode),HX_("_depthCompareMode",c4,4c,c2,4d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialPassBase_obj,_blendFactorSource),HX_("_blendFactorSource",bc,51,b1,22)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialPassBase_obj,_blendFactorDest),HX_("_blendFactorDest",03,55,02,db)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_enableBlending),HX_("_enableBlending",73,db,66,ec)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_bothSides),HX_("_bothSides",7c,46,b9,65)},
	{::hx::fsObject /*  ::away3d::materials::lightpickers::LightPickerBase */ ,(int)offsetof(MaterialPassBase_obj,_lightPicker),HX_("_lightPicker",05,f3,24,49)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(MaterialPassBase_obj,_animatableAttributes),HX_("_animatableAttributes",34,59,6f,48)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(MaterialPassBase_obj,_animationTargetRegisters),HX_("_animationTargetRegisters",da,ed,7c,5c)},
	{::hx::fsString,(int)offsetof(MaterialPassBase_obj,_shadedTarget),HX_("_shadedTarget",a7,a4,17,93)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MaterialPassBase_obj,_defaultCulling),HX_("_defaultCulling",4e,84,28,cc)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_renderToTexture),HX_("_renderToTexture",eb,9c,fc,a1)},
	{::hx::fsObject /*  ::openfl::display3D::textures::TextureBase */ ,(int)offsetof(MaterialPassBase_obj,_oldTarget),HX_("_oldTarget",19,f3,7a,ed)},
	{::hx::fsInt,(int)offsetof(MaterialPassBase_obj,_oldSurface),HX_("_oldSurface",65,35,fb,b2)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_oldDepthStencil),HX_("_oldDepthStencil",01,71,ae,72)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(MaterialPassBase_obj,_oldRect),HX_("_oldRect",ec,4a,a4,3a)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_alphaPremultiplied),HX_("_alphaPremultiplied",37,5b,cb,71)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_needFragmentAnimation),HX_("_needFragmentAnimation",1f,99,a0,9e)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_needUVAnimation),HX_("_needUVAnimation",4e,d2,fd,40)},
	{::hx::fsString,(int)offsetof(MaterialPassBase_obj,_UVTarget),HX_("_UVTarget",f1,27,0d,f9)},
	{::hx::fsString,(int)offsetof(MaterialPassBase_obj,_UVSource),HX_("_UVSource",7b,e5,51,a4)},
	{::hx::fsInt,(int)offsetof(MaterialPassBase_obj,_agalVersion),HX_("_agalVersion",c8,89,4a,f1)},
	{::hx::fsBool,(int)offsetof(MaterialPassBase_obj,_writeDepth),HX_("_writeDepth",c3,b8,75,3e)},
	{::hx::fsObject /*  ::away3d::animators::data::AnimationRegisterCache */ ,(int)offsetof(MaterialPassBase_obj,animationRegisterCache),HX_("animationRegisterCache",3b,ab,44,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MaterialPassBase_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(void *) &MaterialPassBase_obj::_previousUsedStreams,HX_("_previousUsedStreams",40,e3,20,4e)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(void *) &MaterialPassBase_obj::_previousUsedTexs,HX_("_previousUsedTexs",3f,e3,f9,60)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MaterialPassBase_obj_sMemberFields[] = {
	HX_("_material",06,54,3b,38),
	HX_("_animationSet",dd,31,9d,8c),
	HX_("_program3Ds",bd,db,61,21),
	HX_("_program3Dids",02,c6,56,a2),
	HX_("_context3Ds",32,45,5e,d8),
	HX_("_numUsedStreams",2f,9f,2b,4f),
	HX_("_numUsedTextures",7c,08,d3,d6),
	HX_("_numUsedVertexConstants",c7,4d,30,38),
	HX_("_numUsedFragmentConstants",db,22,f0,06),
	HX_("_numUsedVaryings",47,37,cd,15),
	HX_("_smooth",cd,19,e2,75),
	HX_("_repeat",fa,a8,f3,74),
	HX_("_mipmap",27,3f,cb,c2),
	HX_("_anisotropy",21,c5,18,ee),
	HX_("_depthCompareMode",c4,4c,c2,4d),
	HX_("_blendFactorSource",bc,51,b1,22),
	HX_("_blendFactorDest",03,55,02,db),
	HX_("_enableBlending",73,db,66,ec),
	HX_("_bothSides",7c,46,b9,65),
	HX_("_lightPicker",05,f3,24,49),
	HX_("_animatableAttributes",34,59,6f,48),
	HX_("_animationTargetRegisters",da,ed,7c,5c),
	HX_("_shadedTarget",a7,a4,17,93),
	HX_("_defaultCulling",4e,84,28,cc),
	HX_("_renderToTexture",eb,9c,fc,a1),
	HX_("_oldTarget",19,f3,7a,ed),
	HX_("_oldSurface",65,35,fb,b2),
	HX_("_oldDepthStencil",01,71,ae,72),
	HX_("_oldRect",ec,4a,a4,3a),
	HX_("_alphaPremultiplied",37,5b,cb,71),
	HX_("_needFragmentAnimation",1f,99,a0,9e),
	HX_("_needUVAnimation",4e,d2,fd,40),
	HX_("_UVTarget",f1,27,0d,f9),
	HX_("_UVSource",7b,e5,51,a4),
	HX_("_agalVersion",c8,89,4a,f1),
	HX_("_writeDepth",c3,b8,75,3e),
	HX_("animationRegisterCache",3b,ab,44,1e),
	HX_("get_material",b0,10,bf,a5),
	HX_("set_material",24,34,b8,ba),
	HX_("get_writeDepth",ed,73,e1,e1),
	HX_("set_writeDepth",61,5c,01,02),
	HX_("get_mipmap",51,9d,db,44),
	HX_("set_mipmap",c5,3b,59,48),
	HX_("get_anisotropy",4b,80,84,91),
	HX_("set_anisotropy",bf,68,a4,b1),
	HX_("get_smooth",f7,77,f2,f7),
	HX_("set_smooth",6b,16,70,fb),
	HX_("get_repeat",24,07,04,f7),
	HX_("set_repeat",98,a5,81,fa),
	HX_("get_bothSides",92,9e,7a,cb),
	HX_("set_bothSides",9e,80,80,10),
	HX_("get_depthCompareMode",6e,c3,b1,d3),
	HX_("set_depthCompareMode",e2,7a,69,a0),
	HX_("get_animationSet",87,8b,cd,ae),
	HX_("set_animationSet",fb,78,0f,05),
	HX_("get_renderToTexture",81,29,28,42),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_numUsedStreams",59,37,65,a1),
	HX_("get_numUsedVertexConstants",f1,1f,5d,dd),
	HX_("get_numUsedVaryings",dd,c3,f8,b5),
	HX_("get_numUsedFragmentConstants",85,53,95,ee),
	HX_("get_needFragmentAnimation",35,ba,90,4b),
	HX_("get_needUVAnimation",e4,5e,29,e1),
	HX_("updateAnimationState",56,40,c1,16),
	HX_("render",56,6b,29,05),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("setBlendMode",52,a4,87,30),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	HX_("invalidateShaderProgram",64,b7,8b,f4),
	HX_("updateProgram",7b,af,67,bf),
	HX_("get_lightPicker",9b,fc,fc,a3),
	HX_("set_lightPicker",a7,79,c8,9f),
	HX_("onLightsChange",ec,93,fb,56),
	HX_("updateLights",c6,d1,c5,e7),
	HX_("get_alphaPremultiplied",61,50,85,eb),
	HX_("set_alphaPremultiplied",d5,cc,30,1f),
	::String(null()) };

static void MaterialPassBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaterialPassBase_obj::_previousUsedStreams,"_previousUsedStreams");
	HX_MARK_MEMBER_NAME(MaterialPassBase_obj::_previousUsedTexs,"_previousUsedTexs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MaterialPassBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaterialPassBase_obj::_previousUsedStreams,"_previousUsedStreams");
	HX_VISIT_MEMBER_NAME(MaterialPassBase_obj::_previousUsedTexs,"_previousUsedTexs");
};

#endif

::hx::Class MaterialPassBase_obj::__mClass;

static ::String MaterialPassBase_obj_sStaticFields[] = {
	HX_("_previousUsedStreams",40,e3,20,4e),
	HX_("_previousUsedTexs",3f,e3,f9,60),
	::String(null())
};

void MaterialPassBase_obj::__register()
{
	MaterialPassBase_obj _hx_dummy;
	MaterialPassBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.passes.MaterialPassBase",47,84,57,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MaterialPassBase_obj::__GetStatic;
	__mClass->mSetStaticField = &MaterialPassBase_obj::__SetStatic;
	__mClass->mMarkFunc = MaterialPassBase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MaterialPassBase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MaterialPassBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MaterialPassBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MaterialPassBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MaterialPassBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MaterialPassBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MaterialPassBase_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::IntVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_89_boot)
HXDLIN(  89)			::Array< int > array = ::Array_obj< int >::fromData( _hx_array_data_52578447_54,8);
HXDLIN(  89)			int length = null();
HXDLIN(  89)			bool fixed = null();
HXDLIN(  89)			::Array< int > array1 = null();
HXDLIN(  89)			 ::openfl::_Vector::IntVector vector =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array1);
HXDLIN(  89)			{
HXDLIN(  89)				int _g = 0;
HXDLIN(  89)				int _g1 = array->length;
HXDLIN(  89)				while((_g < _g1)){
HXDLIN(  89)					_g = (_g + 1);
HXDLIN(  89)					int i = (_g - 1);
HXDLIN(  89)					vector->set(i,array->__get(i));
            				}
            			}
HXDLIN(  89)			return vector;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_89_boot)
HXDLIN(  89)		_previousUsedStreams = ( ( ::openfl::_Vector::IntVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::_Vector::IntVector _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_97536d97c2fc4d02_90_boot)
HXDLIN(  90)			::Array< int > array = ::Array_obj< int >::fromData( _hx_array_data_52578447_58,8);
HXDLIN(  90)			int length = null();
HXDLIN(  90)			bool fixed = null();
HXDLIN(  90)			::Array< int > array1 = null();
HXDLIN(  90)			 ::openfl::_Vector::IntVector vector =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array1);
HXDLIN(  90)			{
HXDLIN(  90)				int _g = 0;
HXDLIN(  90)				int _g1 = array->length;
HXDLIN(  90)				while((_g < _g1)){
HXDLIN(  90)					_g = (_g + 1);
HXDLIN(  90)					int i = (_g - 1);
HXDLIN(  90)					vector->set(i,array->__get(i));
            				}
            			}
HXDLIN(  90)			return vector;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_97536d97c2fc4d02_90_boot)
HXDLIN(  90)		_previousUsedTexs = ( ( ::openfl::_Vector::IntVector)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
