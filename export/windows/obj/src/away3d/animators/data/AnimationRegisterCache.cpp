#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_animators_data_AnimationRegisterCache
#include <away3d/animators/data/AnimationRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#include <away3d/animators/nodes/AnimationNodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_math_Matrix3DUtils
#include <away3d/core/math/Matrix3DUtils.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c5f775bbe801638f_14_new,"away3d.animators.data.AnimationRegisterCache","new",0x3ec17ee0,"away3d.animators.data.AnimationRegisterCache.new","away3d/animators/data/AnimationRegisterCache.hx",14,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_70_reset,"away3d.animators.data.AnimationRegisterCache","reset",0xdede984f,"away3d.animators.data.AnimationRegisterCache.reset","away3d/animators/data/AnimationRegisterCache.hx",70,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_113_setUVSourceAndTarget,"away3d.animators.data.AnimationRegisterCache","setUVSourceAndTarget",0x3c451b6a,"away3d.animators.data.AnimationRegisterCache.setUVSourceAndTarget","away3d/animators/data/AnimationRegisterCache.hx",113,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_121_setRegisterIndex,"away3d.animators.data.AnimationRegisterCache","setRegisterIndex",0x1aa7362d,"away3d.animators.data.AnimationRegisterCache.setRegisterIndex","away3d/animators/data/AnimationRegisterCache.hx",121,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_130_getRegisterIndex,"away3d.animators.data.AnimationRegisterCache","getRegisterIndex",0xc46548b9,"away3d.animators.data.AnimationRegisterCache.getRegisterIndex","away3d/animators/data/AnimationRegisterCache.hx",130,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_134_getInitCode,"away3d.animators.data.AnimationRegisterCache","getInitCode",0xedefd193,"away3d.animators.data.AnimationRegisterCache.getInitCode","away3d/animators/data/AnimationRegisterCache.hx",134,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_150_getCombinationCode,"away3d.animators.data.AnimationRegisterCache","getCombinationCode",0x35de0426,"away3d.animators.data.AnimationRegisterCache.getCombinationCode","away3d/animators/data/AnimationRegisterCache.hx",150,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_154_initColorRegisters,"away3d.animators.data.AnimationRegisterCache","initColorRegisters",0x29d5477d,"away3d.animators.data.AnimationRegisterCache.initColorRegisters","away3d/animators/data/AnimationRegisterCache.hx",154,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_172_getColorPassCode,"away3d.animators.data.AnimationRegisterCache","getColorPassCode",0x3a1bb22b,"away3d.animators.data.AnimationRegisterCache.getColorPassCode","away3d/animators/data/AnimationRegisterCache.hx",172,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_184_getColorCombinationCode,"away3d.animators.data.AnimationRegisterCache","getColorCombinationCode",0x07084aaf,"away3d.animators.data.AnimationRegisterCache.getColorCombinationCode","away3d/animators/data/AnimationRegisterCache.hx",184,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_198_getRegisterFromString,"away3d.animators.data.AnimationRegisterCache","getRegisterFromString",0xef29a2d4,"away3d.animators.data.AnimationRegisterCache.getRegisterFromString","away3d/animators/data/AnimationRegisterCache.hx",198,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_212_get_numVertexConstant,"away3d.animators.data.AnimationRegisterCache","get_numVertexConstant",0xd8a04f25,"away3d.animators.data.AnimationRegisterCache.get_numVertexConstant","away3d/animators/data/AnimationRegisterCache.hx",212,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_217_get_numFragmentConstant,"away3d.animators.data.AnimationRegisterCache","get_numFragmentConstant",0xc408e8d1,"away3d.animators.data.AnimationRegisterCache.get_numFragmentConstant","away3d/animators/data/AnimationRegisterCache.hx",217,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_221_setDataLength,"away3d.animators.data.AnimationRegisterCache","setDataLength",0x30ea6772,"away3d.animators.data.AnimationRegisterCache.setDataLength","away3d/animators/data/AnimationRegisterCache.hx",221,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_229_setVertexConst,"away3d.animators.data.AnimationRegisterCache","setVertexConst",0x3143e05d,"away3d.animators.data.AnimationRegisterCache.setVertexConst","away3d/animators/data/AnimationRegisterCache.hx",229,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_238_setVertexConstFromVector,"away3d.animators.data.AnimationRegisterCache","setVertexConstFromVector",0xc2fb908a,"away3d.animators.data.AnimationRegisterCache.setVertexConstFromVector","away3d/animators/data/AnimationRegisterCache.hx",238,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_245_setVertexConstFromMatrix,"away3d.animators.data.AnimationRegisterCache","setVertexConstFromMatrix",0xe7661608,"away3d.animators.data.AnimationRegisterCache.setVertexConstFromMatrix","away3d/animators/data/AnimationRegisterCache.hx",245,0xd6286131)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f775bbe801638f_268_setFragmentConst,"away3d.animators.data.AnimationRegisterCache","setFragmentConst",0x2a328ff1,"away3d.animators.data.AnimationRegisterCache.setFragmentConst","away3d/animators/data/AnimationRegisterCache.hx",268,0xd6286131)
namespace away3d{
namespace animators{
namespace data{

void AnimationRegisterCache_obj::__construct(::String profile){
            	HX_GC_STACKFRAME(&_hx_pos_c5f775bbe801638f_14_new)
HXLINE( 205)		int length = null();
HXDLIN( 205)		bool fixed = null();
HXDLIN( 205)		::Array< Float > array = null();
HXDLIN( 205)		this->fragmentConstantData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 204)		int length1 = null();
HXDLIN( 204)		bool fixed1 = null();
HXDLIN( 204)		::Array< Float > array1 = null();
HXDLIN( 204)		this->vertexConstantData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  51)		this->indexDictionary =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  66)		super::__construct(profile);
            	}

Dynamic AnimationRegisterCache_obj::__CreateEmpty() { return new AnimationRegisterCache_obj; }

void *AnimationRegisterCache_obj::_hx_vtable = 0;

Dynamic AnimationRegisterCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationRegisterCache_obj > _hx_result = new AnimationRegisterCache_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnimationRegisterCache_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3dc78b2e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3dc78b2e;
	} else {
		return inClassId==(int)0x4b2b1c20;
	}
}

void AnimationRegisterCache_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_c5f775bbe801638f_70_reset)
HXLINE(  71)		this->super::reset();
HXLINE(  73)		int length = null();
HXDLIN(  73)		bool fixed = null();
HXDLIN(  73)		::Array< ::Dynamic> array = null();
HXDLIN(  73)		this->rotationRegisters =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  74)		this->positionAttribute = this->getRegisterFromString(( (::String)(this->sourceRegisters->get(0)) ));
HXLINE(  75)		this->scaleAndRotateTarget = this->getRegisterFromString(( (::String)(this->targetRegisters->get(0)) ));
HXLINE(  76)		this->addVertexTempUsages(this->scaleAndRotateTarget,1);
HXLINE(  78)		{
HXLINE(  78)			int _g = 1;
HXDLIN(  78)			int _g1 = this->targetRegisters->get_length();
HXDLIN(  78)			while((_g < _g1)){
HXLINE(  78)				_g = (_g + 1);
HXDLIN(  78)				int i = (_g - 1);
HXLINE(  79)				{
HXLINE(  79)					::Dynamic this1 = this->rotationRegisters;
HXDLIN(  79)					( ( ::openfl::_Vector::ObjectVector)(this1) )->push(this->getRegisterFromString(( (::String)(this->targetRegisters->get(i)) )));
            				}
HXLINE(  80)				this->addVertexTempUsages(this->rotationRegisters->get((i - 1)).StaticCast<  ::away3d::materials::compilation::ShaderRegisterElement >(),1);
            			}
            		}
HXLINE(  83)		::String _hx_tmp = this->scaleAndRotateTarget->get_regName();
HXDLIN(  83)		this->scaleAndRotateTarget =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp,this->scaleAndRotateTarget->get_index(),null());
HXLINE(  87)		this->vertexZeroConst = this->getFreeVertexConstant();
HXLINE(  88)		::String _hx_tmp1 = this->vertexZeroConst->get_regName();
HXDLIN(  88)		this->vertexZeroConst =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp1,this->vertexZeroConst->get_index(),0);
HXLINE(  89)		::String _hx_tmp2 = this->vertexZeroConst->get_regName();
HXDLIN(  89)		this->vertexOneConst =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp2,this->vertexZeroConst->get_index(),1);
HXLINE(  90)		::String _hx_tmp3 = this->vertexZeroConst->get_regName();
HXDLIN(  90)		this->vertexTwoConst =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp3,this->vertexZeroConst->get_index(),2);
HXLINE(  93)		this->positionTarget = this->getFreeVertexVectorTemp();
HXLINE(  94)		this->addVertexTempUsages(this->positionTarget,1);
HXLINE(  95)		::String _hx_tmp4 = this->positionTarget->get_regName();
HXDLIN(  95)		this->positionTarget =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp4,this->positionTarget->get_index(),null());
HXLINE(  97)		if (this->needVelocity) {
HXLINE(  98)			this->velocityTarget = this->getFreeVertexVectorTemp();
HXLINE(  99)			this->addVertexTempUsages(this->velocityTarget,1);
HXLINE( 100)			::String _hx_tmp = this->velocityTarget->get_regName();
HXDLIN( 100)			this->velocityTarget =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp,this->velocityTarget->get_index(),null());
HXLINE( 101)			::String _hx_tmp1 = this->velocityTarget->get_regName();
HXDLIN( 101)			this->vertexTime =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp1,this->velocityTarget->get_index(),3);
HXLINE( 102)			::String _hx_tmp2 = this->positionTarget->get_regName();
HXDLIN( 102)			this->vertexLife =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp2,this->positionTarget->get_index(),3);
            		}
            		else {
HXLINE( 104)			 ::away3d::materials::compilation::ShaderRegisterElement tempTime = this->getFreeVertexVectorTemp();
HXLINE( 105)			this->addVertexTempUsages(tempTime,1);
HXLINE( 106)			::String _hx_tmp = tempTime->get_regName();
HXDLIN( 106)			this->vertexTime =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp,tempTime->get_index(),0);
HXLINE( 107)			::String _hx_tmp1 = tempTime->get_regName();
HXDLIN( 107)			this->vertexLife =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp1,tempTime->get_index(),1);
            		}
            	}


void AnimationRegisterCache_obj::setUVSourceAndTarget(::String UVAttribute,::String UVVaring){
            	HX_GC_STACKFRAME(&_hx_pos_c5f775bbe801638f_113_setUVSourceAndTarget)
HXLINE( 114)		this->uvVar = this->getRegisterFromString(UVVaring);
HXLINE( 115)		this->uvAttribute = this->getRegisterFromString(UVAttribute);
HXLINE( 117)		::String _hx_tmp = this->positionTarget->get_regName();
HXDLIN( 117)		this->uvTarget =  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp,this->positionTarget->get_index(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,setUVSourceAndTarget,(void))

void AnimationRegisterCache_obj::setRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex,int registerIndex){
            	HX_GC_STACKFRAME(&_hx_pos_c5f775bbe801638f_121_setRegisterIndex)
HXLINE( 123)		 ::openfl::_Vector::IntVector t;
HXDLIN( 123)		if (this->indexDictionary->exists(node)) {
HXLINE( 123)			t = ( ( ::openfl::_Vector::IntVector)(this->indexDictionary->get(node)) );
            		}
            		else {
HXLINE( 123)			::Array< int > array = null();
HXDLIN( 123)			t =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,8,true,array);
            		}
HXLINE( 124)		t->set(parameterIndex,registerIndex);
HXLINE( 125)		this->indexDictionary->set(node,t);
            	}


HX_DEFINE_DYNAMIC_FUNC3(AnimationRegisterCache_obj,setRegisterIndex,(void))

int AnimationRegisterCache_obj::getRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_130_getRegisterIndex)
HXDLIN( 130)		return ( ( ::openfl::_Vector::IntVector)(this->indexDictionary->get(node)) )->get(parameterIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,getRegisterIndex,return )

::String AnimationRegisterCache_obj::getInitCode(){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_134_getInitCode)
HXLINE( 135)		int len = this->sourceRegisters->get_length();
HXLINE( 136)		::String code = HX_("",00,00,00,00);
HXLINE( 137)		{
HXLINE( 137)			int _g = 0;
HXDLIN( 137)			int _g1 = len;
HXDLIN( 137)			while((_g < _g1)){
HXLINE( 137)				_g = (_g + 1);
HXDLIN( 137)				int i = (_g - 1);
HXLINE( 138)				::String code1 = ((HX_("mov ",cc,e2,60,48) + this->targetRegisters->get(i)) + HX_(",",2c,00,00,00));
HXDLIN( 138)				code = (code + ((code1 + this->sourceRegisters->get(i)) + HX_("\n",0a,00,00,00)));
            			}
            		}
HXLINE( 140)		::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->positionTarget)) + HX_(".xyz,",e1,84,1c,cc));
HXDLIN( 140)		code = (code + ((code1 + this->vertexZeroConst->toString()) + HX_("\n",0a,00,00,00)));
HXLINE( 142)		if (this->needVelocity) {
HXLINE( 143)			::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->velocityTarget)) + HX_(".xyz,",e1,84,1c,cc));
HXDLIN( 143)			code = (code + ((code1 + this->vertexZeroConst->toString()) + HX_("\n",0a,00,00,00)));
            		}
HXLINE( 145)		return code;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,getInitCode,return )

::String AnimationRegisterCache_obj::getCombinationCode(){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_150_getCombinationCode)
HXDLIN( 150)		::String _hx_tmp = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(this->scaleAndRotateTarget)) + HX_(".xyz,",e1,84,1c,cc));
HXDLIN( 150)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->scaleAndRotateTarget)) + HX_(".xyz,",e1,84,1c,cc));
HXDLIN( 150)		return ((_hx_tmp1 + ::Std_obj::string(this->positionTarget)) + HX_(".xyz\n",bf,84,1c,cc));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,getCombinationCode,return )

::String AnimationRegisterCache_obj::initColorRegisters(){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_154_initColorRegisters)
HXLINE( 155)		::String code = HX_("",00,00,00,00);
HXLINE( 156)		if (this->hasColorMulNode) {
HXLINE( 157)			this->colorMulTarget = this->getFreeVertexVectorTemp();
HXLINE( 158)			this->addVertexTempUsages(this->colorMulTarget,1);
HXLINE( 159)			this->colorMulVary = this->getFreeVarying();
HXLINE( 160)			::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->colorMulTarget)) + HX_(",",2c,00,00,00));
HXDLIN( 160)			code = (code + ((code1 + ::Std_obj::string(this->vertexOneConst)) + HX_("\n",0a,00,00,00)));
            		}
HXLINE( 162)		if (this->hasColorAddNode) {
HXLINE( 163)			this->colorAddTarget = this->getFreeVertexVectorTemp();
HXLINE( 164)			this->addVertexTempUsages(this->colorAddTarget,1);
HXLINE( 165)			this->colorAddVary = this->getFreeVarying();
HXLINE( 166)			::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->colorAddTarget)) + HX_(",",2c,00,00,00));
HXDLIN( 166)			code = (code + ((code1 + ::Std_obj::string(this->vertexZeroConst)) + HX_("\n",0a,00,00,00)));
            		}
HXLINE( 168)		return code;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,initColorRegisters,return )

::String AnimationRegisterCache_obj::getColorPassCode(){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_172_getColorPassCode)
HXLINE( 173)		::String code = HX_("",00,00,00,00);
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		if (this->needFragmentAnimation) {
HXLINE( 174)			if (!(this->hasColorAddNode)) {
HXLINE( 174)				_hx_tmp = this->hasColorMulNode;
            			}
            			else {
HXLINE( 174)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 175)			if (this->hasColorMulNode) {
HXLINE( 176)				::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->colorMulVary)) + HX_(",",2c,00,00,00));
HXDLIN( 176)				code = (code + ((code1 + ::Std_obj::string(this->colorMulTarget)) + HX_("\n",0a,00,00,00)));
            			}
HXLINE( 177)			if (this->hasColorAddNode) {
HXLINE( 178)				::String code1 = ((HX_("mov ",cc,e2,60,48) + ::Std_obj::string(this->colorAddVary)) + HX_(",",2c,00,00,00));
HXDLIN( 178)				code = (code + ((code1 + ::Std_obj::string(this->colorAddTarget)) + HX_("\n",0a,00,00,00)));
            			}
            		}
HXLINE( 180)		return code;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,getColorPassCode,return )

::String AnimationRegisterCache_obj::getColorCombinationCode(::String shadedTarget){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_184_getColorCombinationCode)
HXLINE( 185)		::String code = HX_("",00,00,00,00);
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		if (this->needFragmentAnimation) {
HXLINE( 186)			if (!(this->hasColorAddNode)) {
HXLINE( 186)				_hx_tmp = this->hasColorMulNode;
            			}
            			else {
HXLINE( 186)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 186)			_hx_tmp = false;
            		}
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 187)			 ::away3d::materials::compilation::ShaderRegisterElement colorTarget = this->getRegisterFromString(shadedTarget);
HXLINE( 188)			this->addFragmentTempUsages(colorTarget,1);
HXLINE( 189)			if (this->hasColorMulNode) {
HXLINE( 190)				::String code1 = ((HX_("mul ",9c,67,65,48) + ::Std_obj::string(colorTarget)) + HX_(",",2c,00,00,00));
HXDLIN( 190)				::String code2 = ((code1 + ::Std_obj::string(colorTarget)) + HX_(",",2c,00,00,00));
HXDLIN( 190)				code = (code + ((code2 + ::Std_obj::string(this->colorMulVary)) + HX_("\n",0a,00,00,00)));
            			}
HXLINE( 191)			if (this->hasColorAddNode) {
HXLINE( 192)				::String code1 = ((HX_("add ",df,ea,69,40) + ::Std_obj::string(colorTarget)) + HX_(",",2c,00,00,00));
HXDLIN( 192)				::String code2 = ((code1 + ::Std_obj::string(colorTarget)) + HX_(",",2c,00,00,00));
HXDLIN( 192)				code = (code + ((code2 + ::Std_obj::string(this->colorAddVary)) + HX_("\n",0a,00,00,00)));
            			}
            		}
HXLINE( 194)		return code;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimationRegisterCache_obj,getColorCombinationCode,return )

 ::away3d::materials::compilation::ShaderRegisterElement AnimationRegisterCache_obj::getRegisterFromString(::String code){
            	HX_GC_STACKFRAME(&_hx_pos_c5f775bbe801638f_198_getRegisterFromString)
HXLINE( 199)		 ::EReg ereg =  ::EReg_obj::__alloc( HX_CTX ,HX_("([a-z]+)([\\d]+)",80,ce,42,71),HX_("",00,00,00,00));
HXLINE( 200)		ereg->match(code);
HXLINE( 201)		::String _hx_tmp = ereg->matched(1);
HXDLIN( 201)		return  ::away3d::materials::compilation::ShaderRegisterElement_obj::__alloc( HX_CTX ,_hx_tmp,( (int)(::Std_obj::parseInt(ereg->matched(2))) ),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimationRegisterCache_obj,getRegisterFromString,return )

int AnimationRegisterCache_obj::get_numVertexConstant(){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_212_get_numVertexConstant)
HXDLIN( 212)		return this->_numVertexConstant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,get_numVertexConstant,return )

int AnimationRegisterCache_obj::get_numFragmentConstant(){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_217_get_numFragmentConstant)
HXDLIN( 217)		return this->_numFragmentConstant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,get_numFragmentConstant,return )

void AnimationRegisterCache_obj::setDataLength(){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_221_setDataLength)
HXLINE( 222)		this->_numVertexConstant = (this->_numUsedVertexConstants - this->_vertexConstantOffset);
HXLINE( 223)		this->_numFragmentConstant = (this->_numUsedFragmentConstants - this->_fragmentConstantOffset);
HXLINE( 224)		this->vertexConstantData->set_length((this->_numVertexConstant * 4));
HXLINE( 225)		this->fragmentConstantData->set_length((this->_numFragmentConstant * 4));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationRegisterCache_obj,setDataLength,(void))

void AnimationRegisterCache_obj::setVertexConst(int index,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float z = __o_z.Default(0);
            		Float w = __o_w.Default(0);
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_229_setVertexConst)
HXLINE( 230)		int _index = ((index - this->_vertexConstantOffset) * 4);
HXLINE( 231)		{
HXLINE( 231)			_index = (_index + 1);
HXDLIN( 231)			this->vertexConstantData->set((_index - 1),x);
            		}
HXLINE( 232)		{
HXLINE( 232)			_index = (_index + 1);
HXDLIN( 232)			this->vertexConstantData->set((_index - 1),y);
            		}
HXLINE( 233)		{
HXLINE( 233)			_index = (_index + 1);
HXDLIN( 233)			this->vertexConstantData->set((_index - 1),z);
            		}
HXLINE( 234)		this->vertexConstantData->set(_index,w);
            	}


HX_DEFINE_DYNAMIC_FUNC5(AnimationRegisterCache_obj,setVertexConst,(void))

void AnimationRegisterCache_obj::setVertexConstFromVector(int index, ::openfl::_Vector::FloatVector data){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_238_setVertexConstFromVector)
HXLINE( 239)		int _index = ((index - this->_vertexConstantOffset) * 4);
HXLINE( 240)		{
HXLINE( 240)			int _g = 0;
HXDLIN( 240)			int _g1 = data->get_length();
HXDLIN( 240)			while((_g < _g1)){
HXLINE( 240)				_g = (_g + 1);
HXDLIN( 240)				int i = (_g - 1);
HXLINE( 241)				{
HXLINE( 241)					::Dynamic this1 = this->vertexConstantData;
HXDLIN( 241)					_index = (_index + 1);
HXDLIN( 241)					( ( ::openfl::_Vector::FloatVector)(this1) )->set((_index - 1),data->get(i));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,setVertexConstFromVector,(void))

void AnimationRegisterCache_obj::setVertexConstFromMatrix(int index, ::openfl::geom::Matrix3D matrix){
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_245_setVertexConstFromMatrix)
HXLINE( 246)		 ::openfl::_Vector::FloatVector rawData = ::away3d::core::math::Matrix3DUtils_obj::RAW_DATA_CONTAINER;
HXLINE( 247)		matrix->copyRawDataTo(rawData,null(),null());
HXLINE( 248)		int _index = ((index - this->_vertexConstantOffset) * 4);
HXLINE( 249)		{
HXLINE( 249)			::Dynamic this1 = this->vertexConstantData;
HXDLIN( 249)			_index = (_index + 1);
HXDLIN( 249)			( ( ::openfl::_Vector::FloatVector)(this1) )->set((_index - 1),rawData->get(0));
            		}
HXLINE( 250)		{
HXLINE( 250)			::Dynamic this2 = this->vertexConstantData;
HXDLIN( 250)			_index = (_index + 1);
HXDLIN( 250)			( ( ::openfl::_Vector::FloatVector)(this2) )->set((_index - 1),rawData->get(4));
            		}
HXLINE( 251)		{
HXLINE( 251)			::Dynamic this3 = this->vertexConstantData;
HXDLIN( 251)			_index = (_index + 1);
HXDLIN( 251)			( ( ::openfl::_Vector::FloatVector)(this3) )->set((_index - 1),rawData->get(8));
            		}
HXLINE( 252)		{
HXLINE( 252)			::Dynamic this4 = this->vertexConstantData;
HXDLIN( 252)			_index = (_index + 1);
HXDLIN( 252)			( ( ::openfl::_Vector::FloatVector)(this4) )->set((_index - 1),rawData->get(12));
            		}
HXLINE( 253)		{
HXLINE( 253)			::Dynamic this5 = this->vertexConstantData;
HXDLIN( 253)			_index = (_index + 1);
HXDLIN( 253)			( ( ::openfl::_Vector::FloatVector)(this5) )->set((_index - 1),rawData->get(1));
            		}
HXLINE( 254)		{
HXLINE( 254)			::Dynamic this6 = this->vertexConstantData;
HXDLIN( 254)			_index = (_index + 1);
HXDLIN( 254)			( ( ::openfl::_Vector::FloatVector)(this6) )->set((_index - 1),rawData->get(5));
            		}
HXLINE( 255)		{
HXLINE( 255)			::Dynamic this7 = this->vertexConstantData;
HXDLIN( 255)			_index = (_index + 1);
HXDLIN( 255)			( ( ::openfl::_Vector::FloatVector)(this7) )->set((_index - 1),rawData->get(9));
            		}
HXLINE( 256)		{
HXLINE( 256)			::Dynamic this8 = this->vertexConstantData;
HXDLIN( 256)			_index = (_index + 1);
HXDLIN( 256)			( ( ::openfl::_Vector::FloatVector)(this8) )->set((_index - 1),rawData->get(13));
            		}
HXLINE( 257)		{
HXLINE( 257)			::Dynamic this9 = this->vertexConstantData;
HXDLIN( 257)			_index = (_index + 1);
HXDLIN( 257)			( ( ::openfl::_Vector::FloatVector)(this9) )->set((_index - 1),rawData->get(2));
            		}
HXLINE( 258)		{
HXLINE( 258)			::Dynamic this10 = this->vertexConstantData;
HXDLIN( 258)			_index = (_index + 1);
HXDLIN( 258)			( ( ::openfl::_Vector::FloatVector)(this10) )->set((_index - 1),rawData->get(6));
            		}
HXLINE( 259)		{
HXLINE( 259)			::Dynamic this11 = this->vertexConstantData;
HXDLIN( 259)			_index = (_index + 1);
HXDLIN( 259)			( ( ::openfl::_Vector::FloatVector)(this11) )->set((_index - 1),rawData->get(10));
            		}
HXLINE( 260)		{
HXLINE( 260)			::Dynamic this12 = this->vertexConstantData;
HXDLIN( 260)			_index = (_index + 1);
HXDLIN( 260)			( ( ::openfl::_Vector::FloatVector)(this12) )->set((_index - 1),rawData->get(14));
            		}
HXLINE( 261)		{
HXLINE( 261)			::Dynamic this13 = this->vertexConstantData;
HXDLIN( 261)			_index = (_index + 1);
HXDLIN( 261)			( ( ::openfl::_Vector::FloatVector)(this13) )->set((_index - 1),rawData->get(3));
            		}
HXLINE( 262)		{
HXLINE( 262)			::Dynamic this14 = this->vertexConstantData;
HXDLIN( 262)			_index = (_index + 1);
HXDLIN( 262)			( ( ::openfl::_Vector::FloatVector)(this14) )->set((_index - 1),rawData->get(7));
            		}
HXLINE( 263)		{
HXLINE( 263)			::Dynamic this15 = this->vertexConstantData;
HXDLIN( 263)			_index = (_index + 1);
HXDLIN( 263)			( ( ::openfl::_Vector::FloatVector)(this15) )->set((_index - 1),rawData->get(11));
            		}
HXLINE( 264)		{
HXLINE( 264)			::Dynamic this16 = this->vertexConstantData;
HXDLIN( 264)			( ( ::openfl::_Vector::FloatVector)(this16) )->set(_index,rawData->get(15));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationRegisterCache_obj,setVertexConstFromMatrix,(void))

void AnimationRegisterCache_obj::setFragmentConst(int index,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float z = __o_z.Default(0);
            		Float w = __o_w.Default(0);
            	HX_STACKFRAME(&_hx_pos_c5f775bbe801638f_268_setFragmentConst)
HXLINE( 269)		int _index = ((index - this->_fragmentConstantOffset) * 4);
HXLINE( 270)		{
HXLINE( 270)			_index = (_index + 1);
HXDLIN( 270)			this->fragmentConstantData->set((_index - 1),x);
            		}
HXLINE( 271)		{
HXLINE( 271)			_index = (_index + 1);
HXDLIN( 271)			this->fragmentConstantData->set((_index - 1),y);
            		}
HXLINE( 272)		{
HXLINE( 272)			_index = (_index + 1);
HXDLIN( 272)			this->fragmentConstantData->set((_index - 1),z);
            		}
HXLINE( 273)		this->fragmentConstantData->set(_index,w);
            	}


HX_DEFINE_DYNAMIC_FUNC5(AnimationRegisterCache_obj,setFragmentConst,(void))


::hx::ObjectPtr< AnimationRegisterCache_obj > AnimationRegisterCache_obj::__new(::String profile) {
	::hx::ObjectPtr< AnimationRegisterCache_obj > __this = new AnimationRegisterCache_obj();
	__this->__construct(profile);
	return __this;
}

::hx::ObjectPtr< AnimationRegisterCache_obj > AnimationRegisterCache_obj::__alloc(::hx::Ctx *_hx_ctx,::String profile) {
	AnimationRegisterCache_obj *__this = (AnimationRegisterCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationRegisterCache_obj), true, "away3d.animators.data.AnimationRegisterCache"));
	*(void **)__this = AnimationRegisterCache_obj::_hx_vtable;
	__this->__construct(profile);
	return __this;
}

AnimationRegisterCache_obj::AnimationRegisterCache_obj()
{
}

void AnimationRegisterCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationRegisterCache);
	HX_MARK_MEMBER_NAME(positionAttribute,"positionAttribute");
	HX_MARK_MEMBER_NAME(uvAttribute,"uvAttribute");
	HX_MARK_MEMBER_NAME(positionTarget,"positionTarget");
	HX_MARK_MEMBER_NAME(scaleAndRotateTarget,"scaleAndRotateTarget");
	HX_MARK_MEMBER_NAME(velocityTarget,"velocityTarget");
	HX_MARK_MEMBER_NAME(vertexTime,"vertexTime");
	HX_MARK_MEMBER_NAME(vertexLife,"vertexLife");
	HX_MARK_MEMBER_NAME(vertexZeroConst,"vertexZeroConst");
	HX_MARK_MEMBER_NAME(vertexOneConst,"vertexOneConst");
	HX_MARK_MEMBER_NAME(vertexTwoConst,"vertexTwoConst");
	HX_MARK_MEMBER_NAME(uvTarget,"uvTarget");
	HX_MARK_MEMBER_NAME(colorAddTarget,"colorAddTarget");
	HX_MARK_MEMBER_NAME(colorMulTarget,"colorMulTarget");
	HX_MARK_MEMBER_NAME(colorAddVary,"colorAddVary");
	HX_MARK_MEMBER_NAME(colorMulVary,"colorMulVary");
	HX_MARK_MEMBER_NAME(uvVar,"uvVar");
	HX_MARK_MEMBER_NAME(rotationRegisters,"rotationRegisters");
	HX_MARK_MEMBER_NAME(needFragmentAnimation,"needFragmentAnimation");
	HX_MARK_MEMBER_NAME(needUVAnimation,"needUVAnimation");
	HX_MARK_MEMBER_NAME(sourceRegisters,"sourceRegisters");
	HX_MARK_MEMBER_NAME(targetRegisters,"targetRegisters");
	HX_MARK_MEMBER_NAME(indexDictionary,"indexDictionary");
	HX_MARK_MEMBER_NAME(hasUVNode,"hasUVNode");
	HX_MARK_MEMBER_NAME(needVelocity,"needVelocity");
	HX_MARK_MEMBER_NAME(hasBillboard,"hasBillboard");
	HX_MARK_MEMBER_NAME(hasColorMulNode,"hasColorMulNode");
	HX_MARK_MEMBER_NAME(hasColorAddNode,"hasColorAddNode");
	HX_MARK_MEMBER_NAME(vertexConstantData,"vertexConstantData");
	HX_MARK_MEMBER_NAME(fragmentConstantData,"fragmentConstantData");
	HX_MARK_MEMBER_NAME(_numVertexConstant,"_numVertexConstant");
	HX_MARK_MEMBER_NAME(_numFragmentConstant,"_numFragmentConstant");
	 ::away3d::materials::compilation::ShaderRegisterCache_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimationRegisterCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(positionAttribute,"positionAttribute");
	HX_VISIT_MEMBER_NAME(uvAttribute,"uvAttribute");
	HX_VISIT_MEMBER_NAME(positionTarget,"positionTarget");
	HX_VISIT_MEMBER_NAME(scaleAndRotateTarget,"scaleAndRotateTarget");
	HX_VISIT_MEMBER_NAME(velocityTarget,"velocityTarget");
	HX_VISIT_MEMBER_NAME(vertexTime,"vertexTime");
	HX_VISIT_MEMBER_NAME(vertexLife,"vertexLife");
	HX_VISIT_MEMBER_NAME(vertexZeroConst,"vertexZeroConst");
	HX_VISIT_MEMBER_NAME(vertexOneConst,"vertexOneConst");
	HX_VISIT_MEMBER_NAME(vertexTwoConst,"vertexTwoConst");
	HX_VISIT_MEMBER_NAME(uvTarget,"uvTarget");
	HX_VISIT_MEMBER_NAME(colorAddTarget,"colorAddTarget");
	HX_VISIT_MEMBER_NAME(colorMulTarget,"colorMulTarget");
	HX_VISIT_MEMBER_NAME(colorAddVary,"colorAddVary");
	HX_VISIT_MEMBER_NAME(colorMulVary,"colorMulVary");
	HX_VISIT_MEMBER_NAME(uvVar,"uvVar");
	HX_VISIT_MEMBER_NAME(rotationRegisters,"rotationRegisters");
	HX_VISIT_MEMBER_NAME(needFragmentAnimation,"needFragmentAnimation");
	HX_VISIT_MEMBER_NAME(needUVAnimation,"needUVAnimation");
	HX_VISIT_MEMBER_NAME(sourceRegisters,"sourceRegisters");
	HX_VISIT_MEMBER_NAME(targetRegisters,"targetRegisters");
	HX_VISIT_MEMBER_NAME(indexDictionary,"indexDictionary");
	HX_VISIT_MEMBER_NAME(hasUVNode,"hasUVNode");
	HX_VISIT_MEMBER_NAME(needVelocity,"needVelocity");
	HX_VISIT_MEMBER_NAME(hasBillboard,"hasBillboard");
	HX_VISIT_MEMBER_NAME(hasColorMulNode,"hasColorMulNode");
	HX_VISIT_MEMBER_NAME(hasColorAddNode,"hasColorAddNode");
	HX_VISIT_MEMBER_NAME(vertexConstantData,"vertexConstantData");
	HX_VISIT_MEMBER_NAME(fragmentConstantData,"fragmentConstantData");
	HX_VISIT_MEMBER_NAME(_numVertexConstant,"_numVertexConstant");
	HX_VISIT_MEMBER_NAME(_numFragmentConstant,"_numFragmentConstant");
	 ::away3d::materials::compilation::ShaderRegisterCache_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AnimationRegisterCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uvVar") ) { return ::hx::Val( uvVar ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvTarget") ) { return ::hx::Val( uvTarget ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasUVNode") ) { return ::hx::Val( hasUVNode ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexTime") ) { return ::hx::Val( vertexTime ); }
		if (HX_FIELD_EQ(inName,"vertexLife") ) { return ::hx::Val( vertexLife ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uvAttribute") ) { return ::hx::Val( uvAttribute ); }
		if (HX_FIELD_EQ(inName,"getInitCode") ) { return ::hx::Val( getInitCode_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorAddVary") ) { return ::hx::Val( colorAddVary ); }
		if (HX_FIELD_EQ(inName,"colorMulVary") ) { return ::hx::Val( colorMulVary ); }
		if (HX_FIELD_EQ(inName,"needVelocity") ) { return ::hx::Val( needVelocity ); }
		if (HX_FIELD_EQ(inName,"hasBillboard") ) { return ::hx::Val( hasBillboard ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDataLength") ) { return ::hx::Val( setDataLength_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionTarget") ) { return ::hx::Val( positionTarget ); }
		if (HX_FIELD_EQ(inName,"velocityTarget") ) { return ::hx::Val( velocityTarget ); }
		if (HX_FIELD_EQ(inName,"vertexOneConst") ) { return ::hx::Val( vertexOneConst ); }
		if (HX_FIELD_EQ(inName,"vertexTwoConst") ) { return ::hx::Val( vertexTwoConst ); }
		if (HX_FIELD_EQ(inName,"colorAddTarget") ) { return ::hx::Val( colorAddTarget ); }
		if (HX_FIELD_EQ(inName,"colorMulTarget") ) { return ::hx::Val( colorMulTarget ); }
		if (HX_FIELD_EQ(inName,"setVertexConst") ) { return ::hx::Val( setVertexConst_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexZeroConst") ) { return ::hx::Val( vertexZeroConst ); }
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { return ::hx::Val( needUVAnimation ); }
		if (HX_FIELD_EQ(inName,"sourceRegisters") ) { return ::hx::Val( sourceRegisters ); }
		if (HX_FIELD_EQ(inName,"targetRegisters") ) { return ::hx::Val( targetRegisters ); }
		if (HX_FIELD_EQ(inName,"indexDictionary") ) { return ::hx::Val( indexDictionary ); }
		if (HX_FIELD_EQ(inName,"hasColorMulNode") ) { return ::hx::Val( hasColorMulNode ); }
		if (HX_FIELD_EQ(inName,"hasColorAddNode") ) { return ::hx::Val( hasColorAddNode ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setRegisterIndex") ) { return ::hx::Val( setRegisterIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRegisterIndex") ) { return ::hx::Val( getRegisterIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getColorPassCode") ) { return ::hx::Val( getColorPassCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFragmentConst") ) { return ::hx::Val( setFragmentConst_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numVertexConstant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numVertexConstant() ); }
		if (HX_FIELD_EQ(inName,"positionAttribute") ) { return ::hx::Val( positionAttribute ); }
		if (HX_FIELD_EQ(inName,"rotationRegisters") ) { return ::hx::Val( rotationRegisters ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCombinationCode") ) { return ::hx::Val( getCombinationCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"initColorRegisters") ) { return ::hx::Val( initColorRegisters_dyn() ); }
		if (HX_FIELD_EQ(inName,"vertexConstantData") ) { return ::hx::Val( vertexConstantData ); }
		if (HX_FIELD_EQ(inName,"_numVertexConstant") ) { return ::hx::Val( _numVertexConstant ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"numFragmentConstant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFragmentConstant() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scaleAndRotateTarget") ) { return ::hx::Val( scaleAndRotateTarget ); }
		if (HX_FIELD_EQ(inName,"setUVSourceAndTarget") ) { return ::hx::Val( setUVSourceAndTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"fragmentConstantData") ) { return ::hx::Val( fragmentConstantData ); }
		if (HX_FIELD_EQ(inName,"_numFragmentConstant") ) { return ::hx::Val( _numFragmentConstant ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"needFragmentAnimation") ) { return ::hx::Val( needFragmentAnimation ); }
		if (HX_FIELD_EQ(inName,"getRegisterFromString") ) { return ::hx::Val( getRegisterFromString_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numVertexConstant") ) { return ::hx::Val( get_numVertexConstant_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getColorCombinationCode") ) { return ::hx::Val( getColorCombinationCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFragmentConstant") ) { return ::hx::Val( get_numFragmentConstant_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setVertexConstFromVector") ) { return ::hx::Val( setVertexConstFromVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVertexConstFromMatrix") ) { return ::hx::Val( setVertexConstFromMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationRegisterCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uvVar") ) { uvVar=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvTarget") ) { uvTarget=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasUVNode") ) { hasUVNode=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexTime") ) { vertexTime=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexLife") ) { vertexLife=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uvAttribute") ) { uvAttribute=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorAddVary") ) { colorAddVary=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorMulVary") ) { colorMulVary=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needVelocity") ) { needVelocity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasBillboard") ) { hasBillboard=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionTarget") ) { positionTarget=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocityTarget") ) { velocityTarget=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexOneConst") ) { vertexOneConst=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexTwoConst") ) { vertexTwoConst=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorAddTarget") ) { colorAddTarget=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorMulTarget") ) { colorMulTarget=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexZeroConst") ) { vertexZeroConst=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needUVAnimation") ) { needUVAnimation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceRegisters") ) { sourceRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetRegisters") ) { targetRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexDictionary") ) { indexDictionary=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasColorMulNode") ) { hasColorMulNode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasColorAddNode") ) { hasColorAddNode=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"positionAttribute") ) { positionAttribute=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationRegisters") ) { rotationRegisters=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertexConstantData") ) { vertexConstantData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numVertexConstant") ) { _numVertexConstant=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scaleAndRotateTarget") ) { scaleAndRotateTarget=inValue.Cast<  ::away3d::materials::compilation::ShaderRegisterElement >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentConstantData") ) { fragmentConstantData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numFragmentConstant") ) { _numFragmentConstant=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"needFragmentAnimation") ) { needFragmentAnimation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationRegisterCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numVertexConstant",ce,fd,f6,91));
	outFields->push(HX_("numFragmentConstant",ba,53,67,83));
	outFields->push(HX_("positionAttribute",33,d2,9d,1e));
	outFields->push(HX_("uvAttribute",7b,95,bd,24));
	outFields->push(HX_("positionTarget",da,6c,df,db));
	outFields->push(HX_("scaleAndRotateTarget",19,36,db,86));
	outFields->push(HX_("velocityTarget",4e,5d,db,0d));
	outFields->push(HX_("vertexTime",91,55,b9,dd));
	outFields->push(HX_("vertexLife",80,9a,6f,d8));
	outFields->push(HX_("vertexZeroConst",17,e1,f8,cc));
	outFields->push(HX_("vertexOneConst",a1,f8,c8,6f));
	outFields->push(HX_("vertexTwoConst",bb,fb,97,03));
	outFields->push(HX_("uvTarget",92,4c,74,0a));
	outFields->push(HX_("colorAddTarget",6f,d2,bd,a6));
	outFields->push(HX_("colorMulTarget",92,08,14,a3));
	outFields->push(HX_("colorAddVary",50,67,dd,b3));
	outFields->push(HX_("colorMulVary",b3,be,24,0e));
	outFields->push(HX_("uvVar",06,a3,22,ac));
	outFields->push(HX_("rotationRegisters",92,fb,37,64));
	outFields->push(HX_("needFragmentAnimation",de,ff,92,45));
	outFields->push(HX_("needUVAnimation",cd,8f,1e,56));
	outFields->push(HX_("sourceRegisters",55,ac,b1,8e));
	outFields->push(HX_("targetRegisters",1f,6b,d1,1f));
	outFields->push(HX_("indexDictionary",48,7d,a2,16));
	outFields->push(HX_("hasUVNode",dd,03,03,c1));
	outFields->push(HX_("needVelocity",93,78,5f,54));
	outFields->push(HX_("hasBillboard",85,7e,f3,33));
	outFields->push(HX_("hasColorMulNode",7d,c7,55,70));
	outFields->push(HX_("hasColorAddNode",1a,70,0e,16));
	outFields->push(HX_("vertexConstantData",32,73,c8,f1));
	outFields->push(HX_("fragmentConstantData",9e,e9,d0,a3));
	outFields->push(HX_("_numVertexConstant",8f,a2,0c,65));
	outFields->push(HX_("_numFragmentConstant",bb,6a,c0,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationRegisterCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,positionAttribute),HX_("positionAttribute",33,d2,9d,1e)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,uvAttribute),HX_("uvAttribute",7b,95,bd,24)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,positionTarget),HX_("positionTarget",da,6c,df,db)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,scaleAndRotateTarget),HX_("scaleAndRotateTarget",19,36,db,86)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,velocityTarget),HX_("velocityTarget",4e,5d,db,0d)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,vertexTime),HX_("vertexTime",91,55,b9,dd)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,vertexLife),HX_("vertexLife",80,9a,6f,d8)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,vertexZeroConst),HX_("vertexZeroConst",17,e1,f8,cc)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,vertexOneConst),HX_("vertexOneConst",a1,f8,c8,6f)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,vertexTwoConst),HX_("vertexTwoConst",bb,fb,97,03)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,uvTarget),HX_("uvTarget",92,4c,74,0a)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,colorAddTarget),HX_("colorAddTarget",6f,d2,bd,a6)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,colorMulTarget),HX_("colorMulTarget",92,08,14,a3)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,colorAddVary),HX_("colorAddVary",50,67,dd,b3)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,colorMulVary),HX_("colorMulVary",b3,be,24,0e)},
	{::hx::fsObject /*  ::away3d::materials::compilation::ShaderRegisterElement */ ,(int)offsetof(AnimationRegisterCache_obj,uvVar),HX_("uvVar",06,a3,22,ac)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(AnimationRegisterCache_obj,rotationRegisters),HX_("rotationRegisters",92,fb,37,64)},
	{::hx::fsBool,(int)offsetof(AnimationRegisterCache_obj,needFragmentAnimation),HX_("needFragmentAnimation",de,ff,92,45)},
	{::hx::fsBool,(int)offsetof(AnimationRegisterCache_obj,needUVAnimation),HX_("needUVAnimation",cd,8f,1e,56)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(AnimationRegisterCache_obj,sourceRegisters),HX_("sourceRegisters",55,ac,b1,8e)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(AnimationRegisterCache_obj,targetRegisters),HX_("targetRegisters",1f,6b,d1,1f)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(AnimationRegisterCache_obj,indexDictionary),HX_("indexDictionary",48,7d,a2,16)},
	{::hx::fsBool,(int)offsetof(AnimationRegisterCache_obj,hasUVNode),HX_("hasUVNode",dd,03,03,c1)},
	{::hx::fsBool,(int)offsetof(AnimationRegisterCache_obj,needVelocity),HX_("needVelocity",93,78,5f,54)},
	{::hx::fsBool,(int)offsetof(AnimationRegisterCache_obj,hasBillboard),HX_("hasBillboard",85,7e,f3,33)},
	{::hx::fsBool,(int)offsetof(AnimationRegisterCache_obj,hasColorMulNode),HX_("hasColorMulNode",7d,c7,55,70)},
	{::hx::fsBool,(int)offsetof(AnimationRegisterCache_obj,hasColorAddNode),HX_("hasColorAddNode",1a,70,0e,16)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(AnimationRegisterCache_obj,vertexConstantData),HX_("vertexConstantData",32,73,c8,f1)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(AnimationRegisterCache_obj,fragmentConstantData),HX_("fragmentConstantData",9e,e9,d0,a3)},
	{::hx::fsInt,(int)offsetof(AnimationRegisterCache_obj,_numVertexConstant),HX_("_numVertexConstant",8f,a2,0c,65)},
	{::hx::fsInt,(int)offsetof(AnimationRegisterCache_obj,_numFragmentConstant),HX_("_numFragmentConstant",bb,6a,c0,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AnimationRegisterCache_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationRegisterCache_obj_sMemberFields[] = {
	HX_("positionAttribute",33,d2,9d,1e),
	HX_("uvAttribute",7b,95,bd,24),
	HX_("positionTarget",da,6c,df,db),
	HX_("scaleAndRotateTarget",19,36,db,86),
	HX_("velocityTarget",4e,5d,db,0d),
	HX_("vertexTime",91,55,b9,dd),
	HX_("vertexLife",80,9a,6f,d8),
	HX_("vertexZeroConst",17,e1,f8,cc),
	HX_("vertexOneConst",a1,f8,c8,6f),
	HX_("vertexTwoConst",bb,fb,97,03),
	HX_("uvTarget",92,4c,74,0a),
	HX_("colorAddTarget",6f,d2,bd,a6),
	HX_("colorMulTarget",92,08,14,a3),
	HX_("colorAddVary",50,67,dd,b3),
	HX_("colorMulVary",b3,be,24,0e),
	HX_("uvVar",06,a3,22,ac),
	HX_("rotationRegisters",92,fb,37,64),
	HX_("needFragmentAnimation",de,ff,92,45),
	HX_("needUVAnimation",cd,8f,1e,56),
	HX_("sourceRegisters",55,ac,b1,8e),
	HX_("targetRegisters",1f,6b,d1,1f),
	HX_("indexDictionary",48,7d,a2,16),
	HX_("hasUVNode",dd,03,03,c1),
	HX_("needVelocity",93,78,5f,54),
	HX_("hasBillboard",85,7e,f3,33),
	HX_("hasColorMulNode",7d,c7,55,70),
	HX_("hasColorAddNode",1a,70,0e,16),
	HX_("reset",cf,49,c8,e6),
	HX_("setUVSourceAndTarget",ea,19,ff,66),
	HX_("setRegisterIndex",ad,f4,df,73),
	HX_("getRegisterIndex",39,07,9e,1d),
	HX_("getInitCode",13,a3,6f,6c),
	HX_("getCombinationCode",a6,62,a3,dd),
	HX_("initColorRegisters",fd,a5,9a,d1),
	HX_("getColorPassCode",ab,70,54,93),
	HX_("getColorCombinationCode",2f,5c,bc,ce),
	HX_("getRegisterFromString",54,54,2e,27),
	HX_("vertexConstantData",32,73,c8,f1),
	HX_("fragmentConstantData",9e,e9,d0,a3),
	HX_("_numVertexConstant",8f,a2,0c,65),
	HX_("_numFragmentConstant",bb,6a,c0,82),
	HX_("get_numVertexConstant",a5,00,a5,10),
	HX_("get_numFragmentConstant",51,fa,bc,8b),
	HX_("setDataLength",f2,98,21,2c),
	HX_("setVertexConst",dd,fe,57,06),
	HX_("setVertexConstFromVector",0a,cf,d6,b8),
	HX_("setVertexConstFromMatrix",88,54,41,dd),
	HX_("setFragmentConst",71,4e,6b,83),
	::String(null()) };

::hx::Class AnimationRegisterCache_obj::__mClass;

void AnimationRegisterCache_obj::__register()
{
	AnimationRegisterCache_obj _hx_dummy;
	AnimationRegisterCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.animators.data.AnimationRegisterCache",ee,ce,28,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationRegisterCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationRegisterCache_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationRegisterCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationRegisterCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace animators
} // end namespace data
