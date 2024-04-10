#include <hxcpp.h>

#ifndef INCLUDED_away3d_cameras_Camera3D
#include <away3d/cameras/Camera3D.h>
#endif
#ifndef INCLUDED_away3d_cameras_lenses_LensBase
#include <away3d/cameras/lenses/LensBase.h>
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
#ifndef INCLUDED_away3d_core_managers_Stage3DProxy
#include <away3d/core/managers/Stage3DProxy.h>
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
#ifndef INCLUDED_away3d_materials_passes_DistanceMapPass
#include <away3d/materials/passes/DistanceMapPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76fd9372b96e2287_34_new,"away3d.materials.passes.DistanceMapPass","new",0x6dc5578c,"away3d.materials.passes.DistanceMapPass.new","away3d/materials/passes/DistanceMapPass.hx",34,0x0bb66a23)
static const Float _hx_array_data_274fe19a_2[] = {
	1.0,255.0,65025.0,16581375.0,0.00392156862745098,0.00392156862745098,0.00392156862745098,0.0,0.0,0.0,0.0,0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_51_get_alphaThreshold,"away3d.materials.passes.DistanceMapPass","get_alphaThreshold",0x98ea6b8a,"away3d.materials.passes.DistanceMapPass.get_alphaThreshold","away3d/materials/passes/DistanceMapPass.hx",51,0x0bb66a23)
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_55_set_alphaThreshold,"away3d.materials.passes.DistanceMapPass","set_alphaThreshold",0x75999dfe,"away3d.materials.passes.DistanceMapPass.set_alphaThreshold","away3d/materials/passes/DistanceMapPass.hx",55,0x0bb66a23)
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_77_get_alphaMask,"away3d.materials.passes.DistanceMapPass","get_alphaMask",0x192ea56d,"away3d.materials.passes.DistanceMapPass.get_alphaMask","away3d/materials/passes/DistanceMapPass.hx",77,0x0bb66a23)
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_81_set_alphaMask,"away3d.materials.passes.DistanceMapPass","set_alphaMask",0x5e348779,"away3d.materials.passes.DistanceMapPass.set_alphaMask","away3d/materials/passes/DistanceMapPass.hx",81,0x0bb66a23)
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_90_getVertexCode,"away3d.materials.passes.DistanceMapPass","getVertexCode",0xa46e4d13,"away3d.materials.passes.DistanceMapPass.getVertexCode","away3d/materials/passes/DistanceMapPass.hx",90,0x0bb66a23)
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_112_getFragmentCode,"away3d.materials.passes.DistanceMapPass","getFragmentCode",0xfa9753ff,"away3d.materials.passes.DistanceMapPass.getFragmentCode","away3d/materials/passes/DistanceMapPass.hx",112,0x0bb66a23)
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_153_render,"away3d.materials.passes.DistanceMapPass","render",0x2d3ba7aa,"away3d.materials.passes.DistanceMapPass.render","away3d/materials/passes/DistanceMapPass.hx",153,0x0bb66a23)
HX_LOCAL_STACK_FRAME(_hx_pos_76fd9372b96e2287_182_activate,"away3d.materials.passes.DistanceMapPass","activate",0xe4051507,"away3d.materials.passes.DistanceMapPass.activate","away3d/materials/passes/DistanceMapPass.hx",182,0x0bb66a23)
namespace away3d{
namespace materials{
namespace passes{

void DistanceMapPass_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_76fd9372b96e2287_34_new)
HXLINE(  35)		super::__construct(null());
HXLINE(  36)		::Array< Float > array = ::Array_obj< Float >::fromData( _hx_array_data_274fe19a_2,12);
HXDLIN(  36)		int length = null();
HXDLIN(  36)		bool fixed = null();
HXDLIN(  36)		::Array< Float > array1 = null();
HXDLIN(  36)		 ::openfl::_Vector::FloatVector vector =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array1,true);
HXDLIN(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			int _g1 = array->length;
HXDLIN(  36)			while((_g < _g1)){
HXLINE(  36)				_g = (_g + 1);
HXDLIN(  36)				int i = (_g - 1);
HXDLIN(  36)				vector->set(i,array->__get(i));
            			}
            		}
HXDLIN(  36)		this->_fragmentData = vector;
HXLINE(  39)		::Array< Float > array2 = null();
HXDLIN(  39)		this->_vertexData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,4,true,array2,true);
HXLINE(  40)		this->_vertexData->set(3,( (Float)(1) ));
HXLINE(  41)		this->_numUsedVertexConstants = 9;
            	}

Dynamic DistanceMapPass_obj::__CreateEmpty() { return new DistanceMapPass_obj; }

void *DistanceMapPass_obj::_hx_vtable = 0;

Dynamic DistanceMapPass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DistanceMapPass_obj > _hx_result = new DistanceMapPass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DistanceMapPass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x168f1e90) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x168f1e90;
		}
	} else {
		return inClassId==(int)0x5a0f1d75;
	}
}

Float DistanceMapPass_obj::get_alphaThreshold(){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_51_get_alphaThreshold)
HXDLIN(  51)		return this->_alphaThreshold;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DistanceMapPass_obj,get_alphaThreshold,return )

Float DistanceMapPass_obj::set_alphaThreshold(Float value){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_55_set_alphaThreshold)
HXLINE(  56)		if ((value < 0)) {
HXLINE(  57)			value = ( (Float)(0) );
            		}
            		else {
HXLINE(  58)			if ((value > 1)) {
HXLINE(  59)				value = ( (Float)(1) );
            			}
            		}
HXLINE(  60)		if ((value == this->_alphaThreshold)) {
HXLINE(  61)			return value;
            		}
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		if ((value != 0)) {
HXLINE(  63)			_hx_tmp = (this->_alphaThreshold == 0);
            		}
            		else {
HXLINE(  63)			_hx_tmp = true;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  64)			this->invalidateShaderProgram(null());
            		}
HXLINE(  66)		this->_alphaThreshold = value;
HXLINE(  67)		this->_fragmentData->set(8,this->_alphaThreshold);
HXLINE(  68)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DistanceMapPass_obj,set_alphaThreshold,return )

 ::away3d::textures::Texture2DBase DistanceMapPass_obj::get_alphaMask(){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_77_get_alphaMask)
HXDLIN(  77)		return this->_alphaMask;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DistanceMapPass_obj,get_alphaMask,return )

 ::away3d::textures::Texture2DBase DistanceMapPass_obj::set_alphaMask( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_81_set_alphaMask)
HXLINE(  82)		this->_alphaMask = value;
HXLINE(  83)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DistanceMapPass_obj,set_alphaMask,return )

::String DistanceMapPass_obj::getVertexCode(){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_90_getVertexCode)
HXLINE(  91)		::String code = ((HX_("m44 op, vt0, vc0\t\t\n",a5,f7,c6,c7) + HX_("m44 vt1, vt0, vc5\t\t\n",b4,a0,69,f3)) + HX_("sub v0, vt1, vc9\t\t\n",17,af,b5,59));
HXLINE(  96)		if ((this->_alphaThreshold > 0)) {
HXLINE(  97)			code = (code + HX_("mov v1, va1\n",1f,47,1e,85));
HXLINE(  98)			this->_numUsedTextures = 1;
HXLINE(  99)			this->_numUsedStreams = 2;
            		}
            		else {
HXLINE( 101)			this->_numUsedTextures = 0;
HXLINE( 102)			this->_numUsedStreams = 1;
            		}
HXLINE( 105)		return code;
            	}


::String DistanceMapPass_obj::getFragmentCode(::String animationCode){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_112_getFragmentCode)
HXLINE( 115)		::String wrap;
HXDLIN( 115)		if (this->_repeat) {
HXLINE( 115)			wrap = HX_("wrap",ca,39,ff,4e);
            		}
            		else {
HXLINE( 115)			wrap = HX_("clamp",fb,72,58,48);
            		}
HXLINE( 116)		::String filter;
HXLINE( 118)		if (this->_smooth) {
HXLINE( 119)			if (this->_mipmap) {
HXLINE( 119)				filter = HX_("linear,miplinear",f2,e6,d0,0c);
            			}
            			else {
HXLINE( 119)				filter = HX_("linear",e5,51,a0,ec);
            			}
            		}
            		else {
HXLINE( 121)			if (this->_mipmap) {
HXLINE( 121)				filter = HX_("nearest,mipnearest",d8,b8,d6,47);
            			}
            			else {
HXLINE( 121)				filter = HX_("nearest",5e,18,ca,65);
            			}
            		}
HXLINE( 114)		::String code = (((HX_("dp3 ft2.z, v0.xyz, v0.xyz\t\n",ca,62,ee,ac) + HX_("mul ft0, fc0, ft2.z\t\n",e4,19,c9,45)) + HX_("frc ft0, ft0\t\t\t\n",b6,50,4e,5f)) + HX_("mul ft1, ft0.yzww, fc1\t\n",f9,e3,cb,8c));
HXLINE( 129)		if ((this->_alphaThreshold > 0)) {
HXLINE( 130)			::String format;
HXLINE( 131)			 ::Dynamic _hx_switch_0 = this->_alphaMask->get_format();
            			if (  (_hx_switch_0==3) ){
HXLINE( 133)				format = HX_("dxt1,",3b,cd,bb,e3);
HXDLIN( 133)				goto _hx_goto_8;
            			}
            			if (  (_hx_switch_0==4) ){
HXLINE( 135)				format = HX_("dxt5,",b7,d0,bb,e3);
HXDLIN( 135)				goto _hx_goto_8;
            			}
            			/* default */{
HXLINE( 137)				format = HX_("",00,00,00,00);
            			}
            			_hx_goto_8:;
HXLINE( 139)			code = (code + (((((((HX_("tex ft3, v1, fs0 <2d,",4a,77,bb,7e) + filter) + HX_(",",2c,00,00,00)) + format) + wrap) + HX_(">\n",0c,36,00,00)) + HX_("sub ft3.w, ft3.w, fc2.x\n",eb,dd,f4,f0)) + HX_("kil ft3.w\n",2e,72,d6,ec)));
            		}
HXLINE( 144)		code = (code + HX_("sub oc, ft0, ft1\t\t\n",55,31,54,8d));
HXLINE( 146)		return code;
            	}


void DistanceMapPass_obj::render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_153_render)
HXLINE( 154)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 155)		 ::openfl::geom::Vector3D pos = camera->get_scenePosition();
HXLINE( 157)		this->_vertexData->set(0,pos->x);
HXLINE( 158)		this->_vertexData->set(1,pos->y);
HXLINE( 159)		this->_vertexData->set(2,pos->z);
HXLINE( 160)		this->_vertexData->set(3,( (Float)(1) ));
HXLINE( 162)		 ::openfl::geom::Matrix3D sceneTransform = ::away3d::core::base::IRenderable_obj::getRenderSceneTransform(renderable,camera);
HXLINE( 164)		context->setProgramConstantsFromMatrix(1,5,sceneTransform,true);
HXLINE( 165)		context->setProgramConstantsFromVector(1,9,this->_vertexData,1);
HXLINE( 167)		if ((this->_alphaThreshold > 0)) {
HXLINE( 168)			::away3d::core::base::IRenderable_obj::activateUVBuffer(renderable,1,stage3DProxy);
            		}
HXLINE( 170)		 ::openfl::geom::Matrix3D matrix = ::away3d::core::math::Matrix3DUtils_obj::CALCULATION_MATRIX;
HXLINE( 171)		matrix->copyFrom(sceneTransform);
HXLINE( 172)		matrix->append(viewProjection);
HXLINE( 173)		context->setProgramConstantsFromMatrix(1,0,matrix,true);
HXLINE( 174)		::away3d::core::base::IRenderable_obj::activateVertexBuffer(renderable,0,stage3DProxy);
HXLINE( 175)		 ::openfl::display3D::IndexBuffer3D _hx_tmp = ::away3d::core::base::IRenderable_obj::getIndexBuffer(renderable,stage3DProxy);
HXDLIN( 175)		stage3DProxy->drawTriangles(_hx_tmp,0,::away3d::core::base::IRenderable_obj::get_numTriangles(renderable));
            	}


void DistanceMapPass_obj::activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera){
            	HX_STACKFRAME(&_hx_pos_76fd9372b96e2287_182_activate)
HXLINE( 183)		 ::openfl::display3D::Context3D context = stage3DProxy->_context3D;
HXLINE( 184)		this->super::activate(stage3DProxy,camera);
HXLINE( 186)		Float f = camera->get_lens()->get_far();
HXLINE( 188)		f = (( (Float)(1) ) / ((( (Float)(2) ) * f) * f));
HXLINE( 190)		this->_fragmentData->set(0,f);
HXLINE( 191)		this->_fragmentData->set(1,(((Float)255.0) * f));
HXLINE( 192)		this->_fragmentData->set(2,(((Float)65025.0) * f));
HXLINE( 193)		this->_fragmentData->set(3,(((Float)16581375.0) * f));
HXLINE( 195)		if ((this->_alphaThreshold > 0)) {
HXLINE( 196)			context->setTextureAt(0,this->_alphaMask->getTextureForStage3D(stage3DProxy));
HXLINE( 197)			context->setProgramConstantsFromVector(0,0,this->_fragmentData,3);
            		}
            		else {
HXLINE( 199)			context->setProgramConstantsFromVector(0,0,this->_fragmentData,2);
            		}
            	}



::hx::ObjectPtr< DistanceMapPass_obj > DistanceMapPass_obj::__new() {
	::hx::ObjectPtr< DistanceMapPass_obj > __this = new DistanceMapPass_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DistanceMapPass_obj > DistanceMapPass_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DistanceMapPass_obj *__this = (DistanceMapPass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DistanceMapPass_obj), true, "away3d.materials.passes.DistanceMapPass"));
	*(void **)__this = DistanceMapPass_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DistanceMapPass_obj::DistanceMapPass_obj()
{
}

void DistanceMapPass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DistanceMapPass);
	HX_MARK_MEMBER_NAME(_fragmentData,"_fragmentData");
	HX_MARK_MEMBER_NAME(_vertexData,"_vertexData");
	HX_MARK_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_MARK_MEMBER_NAME(_alphaMask,"_alphaMask");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DistanceMapPass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fragmentData,"_fragmentData");
	HX_VISIT_MEMBER_NAME(_vertexData,"_vertexData");
	HX_VISIT_MEMBER_NAME(_alphaThreshold,"_alphaThreshold");
	HX_VISIT_MEMBER_NAME(_alphaMask,"_alphaMask");
	 ::away3d::materials::passes::MaterialPassBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DistanceMapPass_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaMask() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaMask") ) { return ::hx::Val( _alphaMask ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { return ::hx::Val( _vertexData ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fragmentData") ) { return ::hx::Val( _fragmentData ); }
		if (HX_FIELD_EQ(inName,"get_alphaMask") ) { return ::hx::Val( get_alphaMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaMask") ) { return ::hx::Val( set_alphaMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"getVertexCode") ) { return ::hx::Val( getVertexCode_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alphaThreshold() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { return ::hx::Val( _alphaThreshold ); }
		if (HX_FIELD_EQ(inName,"getFragmentCode") ) { return ::hx::Val( getFragmentCode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_alphaThreshold") ) { return ::hx::Val( get_alphaThreshold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alphaThreshold") ) { return ::hx::Val( set_alphaThreshold_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DistanceMapPass_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaMask(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_alphaMask") ) { _alphaMask=inValue.Cast<  ::away3d::textures::Texture2DBase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_vertexData") ) { _vertexData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fragmentData") ) { _fragmentData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alphaThreshold(inValue.Cast< Float >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_alphaThreshold") ) { _alphaThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DistanceMapPass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alphaThreshold",6d,20,ab,01));
	outFields->push(HX_("alphaMask",6a,1b,50,e2));
	outFields->push(HX_("_fragmentData",f9,9c,84,e8));
	outFields->push(HX_("_vertexData",cd,ac,a9,a5));
	outFields->push(HX_("_alphaThreshold",0c,69,0b,4b));
	outFields->push(HX_("_alphaMask",2b,97,f2,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DistanceMapPass_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(DistanceMapPass_obj,_fragmentData),HX_("_fragmentData",f9,9c,84,e8)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(DistanceMapPass_obj,_vertexData),HX_("_vertexData",cd,ac,a9,a5)},
	{::hx::fsFloat,(int)offsetof(DistanceMapPass_obj,_alphaThreshold),HX_("_alphaThreshold",0c,69,0b,4b)},
	{::hx::fsObject /*  ::away3d::textures::Texture2DBase */ ,(int)offsetof(DistanceMapPass_obj,_alphaMask),HX_("_alphaMask",2b,97,f2,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DistanceMapPass_obj_sStaticStorageInfo = 0;
#endif

static ::String DistanceMapPass_obj_sMemberFields[] = {
	HX_("_fragmentData",f9,9c,84,e8),
	HX_("_vertexData",cd,ac,a9,a5),
	HX_("_alphaThreshold",0c,69,0b,4b),
	HX_("_alphaMask",2b,97,f2,3d),
	HX_("get_alphaThreshold",36,01,45,9d),
	HX_("set_alphaThreshold",aa,33,f4,79),
	HX_("get_alphaMask",41,ef,b3,a3),
	HX_("set_alphaMask",4d,d1,b9,e8),
	HX_("getVertexCode",e7,96,f3,2e),
	HX_("getFragmentCode",d3,ba,61,28),
	HX_("render",56,6b,29,05),
	HX_("activate",b3,1b,ac,e5),
	::String(null()) };

::hx::Class DistanceMapPass_obj::__mClass;

void DistanceMapPass_obj::__register()
{
	DistanceMapPass_obj _hx_dummy;
	DistanceMapPass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.passes.DistanceMapPass",9a,e1,4f,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DistanceMapPass_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DistanceMapPass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DistanceMapPass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DistanceMapPass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
} // end namespace passes
