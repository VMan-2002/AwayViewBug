#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_away3d_core_base_CompactSubGeometry
#include <away3d/core/base/CompactSubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_Geometry
#include <away3d/core/base/Geometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_ISubGeometry
#include <away3d/core/base/ISubGeometry.h>
#endif
#ifndef INCLUDED_away3d_core_base_SubGeometryBase
#include <away3d/core/base/SubGeometryBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_CubeGeometry
#include <away3d/primitives/CubeGeometry.h>
#endif
#ifndef INCLUDED_away3d_primitives_PrimitiveBase
#include <away3d/primitives/PrimitiveBase.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_40_new,"away3d.primitives.CubeGeometry","new",0x0a172cec,"away3d.primitives.CubeGeometry.new","away3d/primitives/CubeGeometry.hx",40,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_57_get_width,"away3d.primitives.CubeGeometry","get_width",0xc0795fe9,"away3d.primitives.CubeGeometry.get_width","away3d/primitives/CubeGeometry.hx",57,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_61_set_width,"away3d.primitives.CubeGeometry","set_width",0xa3ca4bf5,"away3d.primitives.CubeGeometry.set_width","away3d/primitives/CubeGeometry.hx",61,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_72_get_height,"away3d.primitives.CubeGeometry","get_height",0x600a04a4,"away3d.primitives.CubeGeometry.get_height","away3d/primitives/CubeGeometry.hx",72,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_76_set_height,"away3d.primitives.CubeGeometry","set_height",0x6387a318,"away3d.primitives.CubeGeometry.set_height","away3d/primitives/CubeGeometry.hx",76,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_87_get_depth,"away3d.primitives.CubeGeometry","get_depth",0xcd409ae6,"away3d.primitives.CubeGeometry.get_depth","away3d/primitives/CubeGeometry.hx",87,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_91_set_depth,"away3d.primitives.CubeGeometry","set_depth",0xb09186f2,"away3d.primitives.CubeGeometry.set_depth","away3d/primitives/CubeGeometry.hx",91,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_107_get_tile6,"away3d.primitives.CubeGeometry","get_tile6",0x064ba72b,"away3d.primitives.CubeGeometry.get_tile6","away3d/primitives/CubeGeometry.hx",107,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_111_set_tile6,"away3d.primitives.CubeGeometry","set_tile6",0xe99c9337,"away3d.primitives.CubeGeometry.set_tile6","away3d/primitives/CubeGeometry.hx",111,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_122_get_segmentsW,"away3d.primitives.CubeGeometry","get_segmentsW",0x38fd9e5a,"away3d.primitives.CubeGeometry.get_segmentsW","away3d/primitives/CubeGeometry.hx",122,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_126_set_segmentsW,"away3d.primitives.CubeGeometry","set_segmentsW",0x7e038066,"away3d.primitives.CubeGeometry.set_segmentsW","away3d/primitives/CubeGeometry.hx",126,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_138_get_segmentsH,"away3d.primitives.CubeGeometry","get_segmentsH",0x38fd9e4b,"away3d.primitives.CubeGeometry.get_segmentsH","away3d/primitives/CubeGeometry.hx",138,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_142_set_segmentsH,"away3d.primitives.CubeGeometry","set_segmentsH",0x7e038057,"away3d.primitives.CubeGeometry.set_segmentsH","away3d/primitives/CubeGeometry.hx",142,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_154_get_segmentsD,"away3d.primitives.CubeGeometry","get_segmentsD",0x38fd9e47,"away3d.primitives.CubeGeometry.get_segmentsD","away3d/primitives/CubeGeometry.hx",154,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_158_set_segmentsD,"away3d.primitives.CubeGeometry","set_segmentsD",0x7e038053,"away3d.primitives.CubeGeometry.set_segmentsD","away3d/primitives/CubeGeometry.hx",158,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_169_buildGeometry,"away3d.primitives.CubeGeometry","buildGeometry",0x312a7b8c,"away3d.primitives.CubeGeometry.buildGeometry","away3d/primitives/CubeGeometry.hx",169,0x6ca3ba64)
HX_LOCAL_STACK_FRAME(_hx_pos_01b5a6dbdbe43aa4_377_buildUVs,"away3d.primitives.CubeGeometry","buildUVs",0xd63e4878,"away3d.primitives.CubeGeometry.buildUVs","away3d/primitives/CubeGeometry.hx",377,0x6ca3ba64)
namespace away3d{
namespace primitives{

void CubeGeometry_obj::__construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_segmentsD,::hx::Null< bool >  __o_tile6){
            		Float width = __o_width.Default(100);
            		Float height = __o_height.Default(100);
            		Float depth = __o_depth.Default(100);
            		int segmentsW = __o_segmentsW.Default(1);
            		int segmentsH = __o_segmentsH.Default(1);
            		int segmentsD = __o_segmentsD.Default(1);
            		bool tile6 = __o_tile6.Default(true);
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_40_new)
HXLINE(  41)		super::__construct();
HXLINE(  43)		this->_width = width;
HXLINE(  44)		this->_height = height;
HXLINE(  45)		this->_depth = depth;
HXLINE(  46)		this->_segmentsW = segmentsW;
HXLINE(  47)		this->_segmentsH = segmentsH;
HXLINE(  48)		this->_segmentsD = segmentsD;
HXLINE(  49)		this->_tile6 = tile6;
            	}

Dynamic CubeGeometry_obj::__CreateEmpty() { return new CubeGeometry_obj; }

void *CubeGeometry_obj::_hx_vtable = 0;

Dynamic CubeGeometry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeGeometry_obj > _hx_result = new CubeGeometry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool CubeGeometry_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2818d649) {
		if (inClassId<=(int)0x156ffae5) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x156ffae5;
			}
		} else {
			return inClassId==(int)0x2818d649;
		}
	} else {
		return inClassId==(int)0x37f46043 || inClassId==(int)0x56f77692;
	}
}

Float CubeGeometry_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_57_get_width)
HXDLIN(  57)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeGeometry_obj,get_width,return )

Float CubeGeometry_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_61_set_width)
HXLINE(  62)		this->_width = value;
HXLINE(  63)		this->invalidateGeometry();
HXLINE(  64)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeGeometry_obj,set_width,return )

Float CubeGeometry_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_72_get_height)
HXDLIN(  72)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeGeometry_obj,get_height,return )

Float CubeGeometry_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_76_set_height)
HXLINE(  77)		this->_height = value;
HXLINE(  78)		this->invalidateGeometry();
HXLINE(  79)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeGeometry_obj,set_height,return )

Float CubeGeometry_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_87_get_depth)
HXDLIN(  87)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeGeometry_obj,get_depth,return )

Float CubeGeometry_obj::set_depth(Float value){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_91_set_depth)
HXLINE(  92)		this->_depth = value;
HXLINE(  93)		this->invalidateGeometry();
HXLINE(  94)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeGeometry_obj,set_depth,return )

bool CubeGeometry_obj::get_tile6(){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_107_get_tile6)
HXDLIN( 107)		return this->_tile6;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeGeometry_obj,get_tile6,return )

bool CubeGeometry_obj::set_tile6(bool value){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_111_set_tile6)
HXLINE( 112)		this->_tile6 = value;
HXLINE( 113)		this->invalidateUVs();
HXLINE( 114)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeGeometry_obj,set_tile6,return )

int CubeGeometry_obj::get_segmentsW(){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_122_get_segmentsW)
HXDLIN( 122)		return this->_segmentsW;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeGeometry_obj,get_segmentsW,return )

int CubeGeometry_obj::set_segmentsW(int value){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_126_set_segmentsW)
HXLINE( 127)		this->_segmentsW = value;
HXLINE( 128)		this->invalidateGeometry();
HXLINE( 129)		this->invalidateUVs();
HXLINE( 130)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeGeometry_obj,set_segmentsW,return )

int CubeGeometry_obj::get_segmentsH(){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_138_get_segmentsH)
HXDLIN( 138)		return this->_segmentsH;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeGeometry_obj,get_segmentsH,return )

int CubeGeometry_obj::set_segmentsH(int value){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_142_set_segmentsH)
HXLINE( 143)		this->_segmentsH = value;
HXLINE( 144)		this->invalidateGeometry();
HXLINE( 145)		this->invalidateUVs();
HXLINE( 146)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeGeometry_obj,set_segmentsH,return )

int CubeGeometry_obj::get_segmentsD(){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_154_get_segmentsD)
HXDLIN( 154)		return this->_segmentsD;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CubeGeometry_obj,get_segmentsD,return )

int CubeGeometry_obj::set_segmentsD(int value){
            	HX_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_158_set_segmentsD)
HXLINE( 159)		this->_segmentsD = value;
HXLINE( 160)		this->invalidateGeometry();
HXLINE( 161)		this->invalidateUVs();
HXLINE( 162)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubeGeometry_obj,set_segmentsD,return )

void CubeGeometry_obj::buildGeometry( ::away3d::core::base::CompactSubGeometry target){
            	HX_GC_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_169_buildGeometry)
HXLINE( 170)		 ::openfl::_Vector::FloatVector data;
HXLINE( 171)		 ::openfl::_Vector::IntVector indices;
HXLINE( 173)		int tl = 0;
HXDLIN( 173)		int tr = 0;
HXDLIN( 173)		int bl = 0;
HXDLIN( 173)		int br = 0;
HXLINE( 174)		int i = 0;
HXDLIN( 174)		int j = 0;
HXDLIN( 174)		int inc = 0;
HXLINE( 176)		int vidx = 0;
HXDLIN( 176)		int fidx = 0;
HXLINE( 177)		Float hw = ( (Float)(0) );
HXDLIN( 177)		Float hh = ( (Float)(0) );
HXDLIN( 177)		Float hd = ( (Float)(0) );
HXLINE( 178)		Float dw = ( (Float)(0) );
HXDLIN( 178)		Float dh = ( (Float)(0) );
HXDLIN( 178)		Float dd = ( (Float)(0) );
HXLINE( 180)		Float outer_pos;
HXLINE( 182)		int numVerts = (((((this->_segmentsW + 1) * (this->_segmentsH + 1)) + ((this->_segmentsW + 1) * (this->_segmentsD + 1))) + ((this->_segmentsH + 1) * (this->_segmentsD + 1))) * 2);
HXLINE( 186)		int stride = target->get_vertexStride();
HXLINE( 187)		int skip = (stride - 9);
HXLINE( 189)		if ((numVerts == target->get_numVertices())) {
HXLINE( 190)			data = target->get_vertexData();
HXLINE( 191)			indices = target->get_indexData();
HXLINE( 192)			if (::hx::IsNull( indices )) {
HXLINE( 193)				::Array< int > array = null();
HXDLIN( 193)				indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,((((this->_segmentsW * this->_segmentsH) + (this->_segmentsW * this->_segmentsD)) + (this->_segmentsH * this->_segmentsD)) * 12),true,array);
            			}
            		}
            		else {
HXLINE( 195)			::Array< Float > array = null();
HXDLIN( 195)			data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,(numVerts * stride),true,array,true);
HXLINE( 196)			::Array< int > array1 = null();
HXDLIN( 196)			indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,((((this->_segmentsW * this->_segmentsH) + (this->_segmentsW * this->_segmentsD)) + (this->_segmentsH * this->_segmentsD)) * 12),true,array1);
HXLINE( 197)			this->invalidateUVs();
            		}
HXLINE( 201)		vidx = target->get_vertexOffset();
HXLINE( 202)		fidx = 0;
HXLINE( 205)		hw = (this->_width / ( (Float)(2) ));
HXLINE( 206)		hh = (this->_height / ( (Float)(2) ));
HXLINE( 207)		hd = (this->_depth / ( (Float)(2) ));
HXLINE( 210)		dw = (this->_width / ( (Float)(this->_segmentsW) ));
HXLINE( 211)		dh = (this->_height / ( (Float)(this->_segmentsH) ));
HXLINE( 212)		dd = (this->_depth / ( (Float)(this->_segmentsD) ));
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			int _g1 = (this->_segmentsW + 1);
HXDLIN( 214)			while((_g < _g1)){
HXLINE( 214)				_g = (_g + 1);
HXDLIN( 214)				int i = (_g - 1);
HXLINE( 215)				outer_pos = (-(hw) + (( (Float)(i) ) * dw));
HXLINE( 217)				{
HXLINE( 217)					int _g1 = 0;
HXDLIN( 217)					int _g2 = (this->_segmentsH + 1);
HXDLIN( 217)					while((_g1 < _g2)){
HXLINE( 217)						_g1 = (_g1 + 1);
HXDLIN( 217)						int j = (_g1 - 1);
HXLINE( 219)						{
HXLINE( 219)							vidx = (vidx + 1);
HXDLIN( 219)							data->set((vidx - 1),outer_pos);
            						}
HXLINE( 220)						{
HXLINE( 220)							vidx = (vidx + 1);
HXDLIN( 220)							data->set((vidx - 1),(-(hh) + (( (Float)(j) ) * dh)));
            						}
HXLINE( 221)						{
HXLINE( 221)							vidx = (vidx + 1);
HXDLIN( 221)							data->set((vidx - 1),-(hd));
            						}
HXLINE( 222)						{
HXLINE( 222)							vidx = (vidx + 1);
HXDLIN( 222)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 223)						{
HXLINE( 223)							vidx = (vidx + 1);
HXDLIN( 223)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 224)						{
HXLINE( 224)							vidx = (vidx + 1);
HXDLIN( 224)							data->set((vidx - 1),( (Float)(-1) ));
            						}
HXLINE( 225)						{
HXLINE( 225)							vidx = (vidx + 1);
HXDLIN( 225)							data->set((vidx - 1),( (Float)(1) ));
            						}
HXLINE( 226)						{
HXLINE( 226)							vidx = (vidx + 1);
HXDLIN( 226)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 227)						{
HXLINE( 227)							vidx = (vidx + 1);
HXDLIN( 227)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 228)						vidx = (vidx + skip);
HXLINE( 231)						{
HXLINE( 231)							vidx = (vidx + 1);
HXDLIN( 231)							data->set((vidx - 1),outer_pos);
            						}
HXLINE( 232)						{
HXLINE( 232)							vidx = (vidx + 1);
HXDLIN( 232)							data->set((vidx - 1),(-(hh) + (( (Float)(j) ) * dh)));
            						}
HXLINE( 233)						{
HXLINE( 233)							vidx = (vidx + 1);
HXDLIN( 233)							data->set((vidx - 1),hd);
            						}
HXLINE( 234)						{
HXLINE( 234)							vidx = (vidx + 1);
HXDLIN( 234)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 235)						{
HXLINE( 235)							vidx = (vidx + 1);
HXDLIN( 235)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 236)						{
HXLINE( 236)							vidx = (vidx + 1);
HXDLIN( 236)							data->set((vidx - 1),( (Float)(1) ));
            						}
HXLINE( 237)						{
HXLINE( 237)							vidx = (vidx + 1);
HXDLIN( 237)							data->set((vidx - 1),( (Float)(-1) ));
            						}
HXLINE( 238)						{
HXLINE( 238)							vidx = (vidx + 1);
HXDLIN( 238)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 239)						{
HXLINE( 239)							vidx = (vidx + 1);
HXDLIN( 239)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 240)						vidx = (vidx + skip);
HXLINE( 242)						bool _hx_tmp;
HXDLIN( 242)						if ((i > 0)) {
HXLINE( 242)							_hx_tmp = (j > 0);
            						}
            						else {
HXLINE( 242)							_hx_tmp = false;
            						}
HXDLIN( 242)						if (_hx_tmp) {
HXLINE( 243)							tl = ::Std_obj::_hx_int(( (Float)((2 * (((i - 1) * (this->_segmentsH + 1)) + (j - 1)))) ));
HXLINE( 244)							tr = ::Std_obj::_hx_int(( (Float)((2 * ((i * (this->_segmentsH + 1)) + (j - 1)))) ));
HXLINE( 245)							bl = (tl + 2);
HXLINE( 246)							br = (tr + 2);
HXLINE( 248)							{
HXLINE( 248)								fidx = (fidx + 1);
HXDLIN( 248)								indices->set((fidx - 1),tl);
            							}
HXLINE( 249)							{
HXLINE( 249)								fidx = (fidx + 1);
HXDLIN( 249)								indices->set((fidx - 1),bl);
            							}
HXLINE( 250)							{
HXLINE( 250)								fidx = (fidx + 1);
HXDLIN( 250)								indices->set((fidx - 1),br);
            							}
HXLINE( 251)							{
HXLINE( 251)								fidx = (fidx + 1);
HXDLIN( 251)								indices->set((fidx - 1),tl);
            							}
HXLINE( 252)							{
HXLINE( 252)								fidx = (fidx + 1);
HXDLIN( 252)								indices->set((fidx - 1),br);
            							}
HXLINE( 253)							{
HXLINE( 253)								fidx = (fidx + 1);
HXDLIN( 253)								indices->set((fidx - 1),tr);
            							}
HXLINE( 254)							{
HXLINE( 254)								fidx = (fidx + 1);
HXDLIN( 254)								indices->set((fidx - 1),(tr + 1));
            							}
HXLINE( 255)							{
HXLINE( 255)								fidx = (fidx + 1);
HXDLIN( 255)								indices->set((fidx - 1),(br + 1));
            							}
HXLINE( 256)							{
HXLINE( 256)								fidx = (fidx + 1);
HXDLIN( 256)								indices->set((fidx - 1),(bl + 1));
            							}
HXLINE( 257)							{
HXLINE( 257)								fidx = (fidx + 1);
HXDLIN( 257)								indices->set((fidx - 1),(tr + 1));
            							}
HXLINE( 258)							{
HXLINE( 258)								fidx = (fidx + 1);
HXDLIN( 258)								indices->set((fidx - 1),(bl + 1));
            							}
HXLINE( 259)							{
HXLINE( 259)								fidx = (fidx + 1);
HXDLIN( 259)								indices->set((fidx - 1),(tl + 1));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 264)		inc = (inc + ::Std_obj::_hx_int(( (Float)(((2 * (this->_segmentsW + 1)) * (this->_segmentsH + 1))) )));
HXLINE( 266)		{
HXLINE( 266)			int _g2 = 0;
HXDLIN( 266)			int _g3 = (this->_segmentsW + 1);
HXDLIN( 266)			while((_g2 < _g3)){
HXLINE( 266)				_g2 = (_g2 + 1);
HXDLIN( 266)				int i = (_g2 - 1);
HXLINE( 267)				outer_pos = (-(hw) + (( (Float)(i) ) * dw));
HXLINE( 269)				{
HXLINE( 269)					int _g = 0;
HXDLIN( 269)					int _g1 = (this->_segmentsD + 1);
HXDLIN( 269)					while((_g < _g1)){
HXLINE( 269)						_g = (_g + 1);
HXDLIN( 269)						int j = (_g - 1);
HXLINE( 271)						{
HXLINE( 271)							vidx = (vidx + 1);
HXDLIN( 271)							data->set((vidx - 1),outer_pos);
            						}
HXLINE( 272)						{
HXLINE( 272)							vidx = (vidx + 1);
HXDLIN( 272)							data->set((vidx - 1),hh);
            						}
HXLINE( 273)						{
HXLINE( 273)							vidx = (vidx + 1);
HXDLIN( 273)							data->set((vidx - 1),(-(hd) + (( (Float)(j) ) * dd)));
            						}
HXLINE( 274)						{
HXLINE( 274)							vidx = (vidx + 1);
HXDLIN( 274)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 275)						{
HXLINE( 275)							vidx = (vidx + 1);
HXDLIN( 275)							data->set((vidx - 1),( (Float)(1) ));
            						}
HXLINE( 276)						{
HXLINE( 276)							vidx = (vidx + 1);
HXDLIN( 276)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 277)						{
HXLINE( 277)							vidx = (vidx + 1);
HXDLIN( 277)							data->set((vidx - 1),( (Float)(1) ));
            						}
HXLINE( 278)						{
HXLINE( 278)							vidx = (vidx + 1);
HXDLIN( 278)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 279)						{
HXLINE( 279)							vidx = (vidx + 1);
HXDLIN( 279)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 280)						vidx = (vidx + skip);
HXLINE( 283)						{
HXLINE( 283)							vidx = (vidx + 1);
HXDLIN( 283)							data->set((vidx - 1),outer_pos);
            						}
HXLINE( 284)						{
HXLINE( 284)							vidx = (vidx + 1);
HXDLIN( 284)							data->set((vidx - 1),-(hh));
            						}
HXLINE( 285)						{
HXLINE( 285)							vidx = (vidx + 1);
HXDLIN( 285)							data->set((vidx - 1),(-(hd) + (( (Float)(j) ) * dd)));
            						}
HXLINE( 286)						{
HXLINE( 286)							vidx = (vidx + 1);
HXDLIN( 286)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 287)						{
HXLINE( 287)							vidx = (vidx + 1);
HXDLIN( 287)							data->set((vidx - 1),( (Float)(-1) ));
            						}
HXLINE( 288)						{
HXLINE( 288)							vidx = (vidx + 1);
HXDLIN( 288)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 289)						{
HXLINE( 289)							vidx = (vidx + 1);
HXDLIN( 289)							data->set((vidx - 1),( (Float)(1) ));
            						}
HXLINE( 290)						{
HXLINE( 290)							vidx = (vidx + 1);
HXDLIN( 290)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 291)						{
HXLINE( 291)							vidx = (vidx + 1);
HXDLIN( 291)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 292)						vidx = (vidx + skip);
HXLINE( 294)						bool _hx_tmp;
HXDLIN( 294)						if ((i > 0)) {
HXLINE( 294)							_hx_tmp = (j > 0);
            						}
            						else {
HXLINE( 294)							_hx_tmp = false;
            						}
HXDLIN( 294)						if (_hx_tmp) {
HXLINE( 296)							tl = ::Std_obj::_hx_int(( (Float)((inc + (2 * (((i - 1) * (this->_segmentsD + 1)) + (j - 1))))) ));
HXLINE( 297)							tr = ::Std_obj::_hx_int(( (Float)((inc + (2 * ((i * (this->_segmentsD + 1)) + (j - 1))))) ));
HXLINE( 298)							bl = (tl + 2);
HXLINE( 299)							br = (tr + 2);
HXLINE( 301)							{
HXLINE( 301)								fidx = (fidx + 1);
HXDLIN( 301)								indices->set((fidx - 1),tl);
            							}
HXLINE( 302)							{
HXLINE( 302)								fidx = (fidx + 1);
HXDLIN( 302)								indices->set((fidx - 1),bl);
            							}
HXLINE( 303)							{
HXLINE( 303)								fidx = (fidx + 1);
HXDLIN( 303)								indices->set((fidx - 1),br);
            							}
HXLINE( 304)							{
HXLINE( 304)								fidx = (fidx + 1);
HXDLIN( 304)								indices->set((fidx - 1),tl);
            							}
HXLINE( 305)							{
HXLINE( 305)								fidx = (fidx + 1);
HXDLIN( 305)								indices->set((fidx - 1),br);
            							}
HXLINE( 306)							{
HXLINE( 306)								fidx = (fidx + 1);
HXDLIN( 306)								indices->set((fidx - 1),tr);
            							}
HXLINE( 307)							{
HXLINE( 307)								fidx = (fidx + 1);
HXDLIN( 307)								indices->set((fidx - 1),(tr + 1));
            							}
HXLINE( 308)							{
HXLINE( 308)								fidx = (fidx + 1);
HXDLIN( 308)								indices->set((fidx - 1),(br + 1));
            							}
HXLINE( 309)							{
HXLINE( 309)								fidx = (fidx + 1);
HXDLIN( 309)								indices->set((fidx - 1),(bl + 1));
            							}
HXLINE( 310)							{
HXLINE( 310)								fidx = (fidx + 1);
HXDLIN( 310)								indices->set((fidx - 1),(tr + 1));
            							}
HXLINE( 311)							{
HXLINE( 311)								fidx = (fidx + 1);
HXDLIN( 311)								indices->set((fidx - 1),(bl + 1));
            							}
HXLINE( 312)							{
HXLINE( 312)								fidx = (fidx + 1);
HXDLIN( 312)								indices->set((fidx - 1),(tl + 1));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 317)		inc = (inc + ::Std_obj::_hx_int(( (Float)(((2 * (this->_segmentsW + 1)) * (this->_segmentsD + 1))) )));
HXLINE( 319)		{
HXLINE( 319)			int _g4 = 0;
HXDLIN( 319)			int _g5 = (this->_segmentsD + 1);
HXDLIN( 319)			while((_g4 < _g5)){
HXLINE( 319)				_g4 = (_g4 + 1);
HXDLIN( 319)				int i = (_g4 - 1);
HXLINE( 320)				outer_pos = (hd - (( (Float)(i) ) * dd));
HXLINE( 322)				{
HXLINE( 322)					int _g = 0;
HXDLIN( 322)					int _g1 = (this->_segmentsH + 1);
HXDLIN( 322)					while((_g < _g1)){
HXLINE( 322)						_g = (_g + 1);
HXDLIN( 322)						int j = (_g - 1);
HXLINE( 324)						{
HXLINE( 324)							vidx = (vidx + 1);
HXDLIN( 324)							data->set((vidx - 1),-(hw));
            						}
HXLINE( 325)						{
HXLINE( 325)							vidx = (vidx + 1);
HXDLIN( 325)							data->set((vidx - 1),(-(hh) + (( (Float)(j) ) * dh)));
            						}
HXLINE( 326)						{
HXLINE( 326)							vidx = (vidx + 1);
HXDLIN( 326)							data->set((vidx - 1),outer_pos);
            						}
HXLINE( 327)						{
HXLINE( 327)							vidx = (vidx + 1);
HXDLIN( 327)							data->set((vidx - 1),( (Float)(-1) ));
            						}
HXLINE( 328)						{
HXLINE( 328)							vidx = (vidx + 1);
HXDLIN( 328)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 329)						{
HXLINE( 329)							vidx = (vidx + 1);
HXDLIN( 329)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 330)						{
HXLINE( 330)							vidx = (vidx + 1);
HXDLIN( 330)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 331)						{
HXLINE( 331)							vidx = (vidx + 1);
HXDLIN( 331)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 332)						{
HXLINE( 332)							vidx = (vidx + 1);
HXDLIN( 332)							data->set((vidx - 1),( (Float)(-1) ));
            						}
HXLINE( 333)						vidx = (vidx + skip);
HXLINE( 336)						{
HXLINE( 336)							vidx = (vidx + 1);
HXDLIN( 336)							data->set((vidx - 1),hw);
            						}
HXLINE( 337)						{
HXLINE( 337)							vidx = (vidx + 1);
HXDLIN( 337)							data->set((vidx - 1),(-(hh) + (( (Float)(j) ) * dh)));
            						}
HXLINE( 338)						{
HXLINE( 338)							vidx = (vidx + 1);
HXDLIN( 338)							data->set((vidx - 1),outer_pos);
            						}
HXLINE( 339)						{
HXLINE( 339)							vidx = (vidx + 1);
HXDLIN( 339)							data->set((vidx - 1),( (Float)(1) ));
            						}
HXLINE( 340)						{
HXLINE( 340)							vidx = (vidx + 1);
HXDLIN( 340)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 341)						{
HXLINE( 341)							vidx = (vidx + 1);
HXDLIN( 341)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 342)						{
HXLINE( 342)							vidx = (vidx + 1);
HXDLIN( 342)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 343)						{
HXLINE( 343)							vidx = (vidx + 1);
HXDLIN( 343)							data->set((vidx - 1),( (Float)(0) ));
            						}
HXLINE( 344)						{
HXLINE( 344)							vidx = (vidx + 1);
HXDLIN( 344)							data->set((vidx - 1),( (Float)(1) ));
            						}
HXLINE( 345)						vidx = (vidx + skip);
HXLINE( 347)						bool _hx_tmp;
HXDLIN( 347)						if ((i > 0)) {
HXLINE( 347)							_hx_tmp = (j > 0);
            						}
            						else {
HXLINE( 347)							_hx_tmp = false;
            						}
HXDLIN( 347)						if (_hx_tmp) {
HXLINE( 348)							tl = ::Std_obj::_hx_int(( (Float)((inc + (2 * (((i - 1) * (this->_segmentsH + 1)) + (j - 1))))) ));
HXLINE( 349)							tr = ::Std_obj::_hx_int(( (Float)((inc + (2 * ((i * (this->_segmentsH + 1)) + (j - 1))))) ));
HXLINE( 350)							bl = (tl + 2);
HXLINE( 351)							br = (tr + 2);
HXLINE( 353)							{
HXLINE( 353)								fidx = (fidx + 1);
HXDLIN( 353)								indices->set((fidx - 1),tl);
            							}
HXLINE( 354)							{
HXLINE( 354)								fidx = (fidx + 1);
HXDLIN( 354)								indices->set((fidx - 1),bl);
            							}
HXLINE( 355)							{
HXLINE( 355)								fidx = (fidx + 1);
HXDLIN( 355)								indices->set((fidx - 1),br);
            							}
HXLINE( 356)							{
HXLINE( 356)								fidx = (fidx + 1);
HXDLIN( 356)								indices->set((fidx - 1),tl);
            							}
HXLINE( 357)							{
HXLINE( 357)								fidx = (fidx + 1);
HXDLIN( 357)								indices->set((fidx - 1),br);
            							}
HXLINE( 358)							{
HXLINE( 358)								fidx = (fidx + 1);
HXDLIN( 358)								indices->set((fidx - 1),tr);
            							}
HXLINE( 359)							{
HXLINE( 359)								fidx = (fidx + 1);
HXDLIN( 359)								indices->set((fidx - 1),(tr + 1));
            							}
HXLINE( 360)							{
HXLINE( 360)								fidx = (fidx + 1);
HXDLIN( 360)								indices->set((fidx - 1),(br + 1));
            							}
HXLINE( 361)							{
HXLINE( 361)								fidx = (fidx + 1);
HXDLIN( 361)								indices->set((fidx - 1),(bl + 1));
            							}
HXLINE( 362)							{
HXLINE( 362)								fidx = (fidx + 1);
HXDLIN( 362)								indices->set((fidx - 1),(tr + 1));
            							}
HXLINE( 363)							{
HXLINE( 363)								fidx = (fidx + 1);
HXDLIN( 363)								indices->set((fidx - 1),(bl + 1));
            							}
HXLINE( 364)							{
HXLINE( 364)								fidx = (fidx + 1);
HXDLIN( 364)								indices->set((fidx - 1),(tl + 1));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 369)		target->updateData(data);
HXLINE( 370)		target->updateIndexData(indices);
            	}


void CubeGeometry_obj::buildUVs( ::away3d::core::base::CompactSubGeometry target){
            	HX_GC_STACKFRAME(&_hx_pos_01b5a6dbdbe43aa4_377_buildUVs)
HXLINE( 378)		int i = 0;
HXDLIN( 378)		int j = 0;
HXLINE( 379)		 ::openfl::_Vector::FloatVector data;
HXLINE( 381)		Float u_tile_dim;
HXDLIN( 381)		Float v_tile_dim;
HXLINE( 382)		Float u_tile_step;
HXDLIN( 382)		Float v_tile_step;
HXLINE( 386)		int stride = target->get_UVStride();
HXLINE( 387)		int numUvs = ::Std_obj::_hx_int(( (Float)(((((((this->_segmentsW + 1) * (this->_segmentsH + 1)) + ((this->_segmentsW + 1) * (this->_segmentsD + 1))) + ((this->_segmentsH + 1) * (this->_segmentsD + 1))) * 2) * stride)) ));
HXLINE( 390)		int skip = (stride - 2);
HXLINE( 392)		bool _hx_tmp;
HXDLIN( 392)		if (::hx::IsNotNull( target->get_UVData() )) {
HXLINE( 392)			_hx_tmp = (numUvs == target->get_UVData()->get_length());
            		}
            		else {
HXLINE( 392)			_hx_tmp = false;
            		}
HXDLIN( 392)		if (_hx_tmp) {
HXLINE( 393)			data = target->get_UVData();
            		}
            		else {
HXLINE( 395)			::Array< Float > array = null();
HXDLIN( 395)			data =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,numUvs,true,array,true);
HXLINE( 396)			this->invalidateGeometry();
            		}
HXLINE( 399)		if (this->_tile6) {
HXLINE( 400)			u_tile_step = ((Float)0.33333333333333331);
HXDLIN( 400)			u_tile_dim = u_tile_step;
HXLINE( 401)			v_tile_step = ((Float)0.5);
HXDLIN( 401)			v_tile_dim = v_tile_step;
            		}
            		else {
HXLINE( 403)			v_tile_dim = ( (Float)(1) );
HXDLIN( 403)			u_tile_dim = v_tile_dim;
HXLINE( 404)			v_tile_step = ( (Float)(0) );
HXDLIN( 404)			u_tile_step = v_tile_step;
            		}
HXLINE( 378)		int uidx = target->get_UVOffset();
HXLINE( 383)		Float tl0u = u_tile_step;
HXDLIN( 383)		Float tl0v = v_tile_step;
HXLINE( 384)		Float tl1u = (( (Float)(2) ) * u_tile_step);
HXDLIN( 384)		Float tl1v = (( (Float)(0) ) * v_tile_step);
HXLINE( 385)		Float du = (u_tile_dim / ( (Float)(this->_segmentsW) ));
HXDLIN( 385)		Float dv = (v_tile_dim / ( (Float)(this->_segmentsH) ));
HXLINE( 428)		{
HXLINE( 428)			int _g = 0;
HXDLIN( 428)			int _g1 = (this->_segmentsW + 1);
HXDLIN( 428)			while((_g < _g1)){
HXLINE( 428)				_g = (_g + 1);
HXDLIN( 428)				int i = (_g - 1);
HXLINE( 429)				{
HXLINE( 429)					int _g1 = 0;
HXDLIN( 429)					int _g2 = (this->_segmentsH + 1);
HXDLIN( 429)					while((_g1 < _g2)){
HXLINE( 429)						_g1 = (_g1 + 1);
HXDLIN( 429)						int j = (_g1 - 1);
HXLINE( 430)						{
HXLINE( 430)							uidx = (uidx + 1);
HXDLIN( 430)							data->set((uidx - 1),((tl0u + (( (Float)(i) ) * du)) * target->get_scaleU()));
            						}
HXLINE( 431)						{
HXLINE( 431)							uidx = (uidx + 1);
HXDLIN( 431)							data->set((uidx - 1),((tl0v + (v_tile_dim - (( (Float)(j) ) * dv))) * target->get_scaleV()));
            						}
HXLINE( 432)						uidx = (uidx + skip);
HXLINE( 433)						{
HXLINE( 433)							uidx = (uidx + 1);
HXDLIN( 433)							data->set((uidx - 1),((tl1u + (u_tile_dim - (( (Float)(i) ) * du))) * target->get_scaleU()));
            						}
HXLINE( 434)						{
HXLINE( 434)							uidx = (uidx + 1);
HXDLIN( 434)							data->set((uidx - 1),((tl1v + (v_tile_dim - (( (Float)(j) ) * dv))) * target->get_scaleV()));
            						}
HXLINE( 435)						uidx = (uidx + skip);
            					}
            				}
            			}
            		}
HXLINE( 440)		tl0u = u_tile_step;
HXLINE( 441)		tl0v = (( (Float)(0) ) * v_tile_step);
HXLINE( 442)		tl1u = (( (Float)(0) ) * u_tile_step);
HXLINE( 443)		tl1v = (( (Float)(0) ) * v_tile_step);
HXLINE( 444)		du = (u_tile_dim / ( (Float)(this->_segmentsW) ));
HXLINE( 445)		dv = (v_tile_dim / ( (Float)(this->_segmentsD) ));
HXLINE( 446)		{
HXLINE( 446)			int _g2 = 0;
HXDLIN( 446)			int _g3 = (this->_segmentsW + 1);
HXDLIN( 446)			while((_g2 < _g3)){
HXLINE( 446)				_g2 = (_g2 + 1);
HXDLIN( 446)				int i = (_g2 - 1);
HXLINE( 447)				{
HXLINE( 447)					int _g = 0;
HXDLIN( 447)					int _g1 = (this->_segmentsD + 1);
HXDLIN( 447)					while((_g < _g1)){
HXLINE( 447)						_g = (_g + 1);
HXDLIN( 447)						int j = (_g - 1);
HXLINE( 448)						{
HXLINE( 448)							uidx = (uidx + 1);
HXDLIN( 448)							data->set((uidx - 1),((tl0u + (( (Float)(i) ) * du)) * target->get_scaleU()));
            						}
HXLINE( 449)						{
HXLINE( 449)							uidx = (uidx + 1);
HXDLIN( 449)							data->set((uidx - 1),((tl0v + (v_tile_dim - (( (Float)(j) ) * dv))) * target->get_scaleV()));
            						}
HXLINE( 450)						uidx = (uidx + skip);
HXLINE( 451)						{
HXLINE( 451)							uidx = (uidx + 1);
HXDLIN( 451)							data->set((uidx - 1),((tl1u + (( (Float)(i) ) * du)) * target->get_scaleU()));
            						}
HXLINE( 452)						{
HXLINE( 452)							uidx = (uidx + 1);
HXDLIN( 452)							data->set((uidx - 1),((tl1v + (( (Float)(j) ) * dv)) * target->get_scaleV()));
            						}
HXLINE( 453)						uidx = (uidx + skip);
            					}
            				}
            			}
            		}
HXLINE( 458)		tl0u = (( (Float)(0) ) * u_tile_step);
HXLINE( 459)		tl0v = v_tile_step;
HXLINE( 460)		tl1u = (( (Float)(2) ) * u_tile_step);
HXLINE( 461)		tl1v = v_tile_step;
HXLINE( 462)		du = (u_tile_dim / ( (Float)(this->_segmentsD) ));
HXLINE( 463)		dv = (v_tile_dim / ( (Float)(this->_segmentsH) ));
HXLINE( 464)		{
HXLINE( 464)			int _g4 = 0;
HXDLIN( 464)			int _g5 = (this->_segmentsD + 1);
HXDLIN( 464)			while((_g4 < _g5)){
HXLINE( 464)				_g4 = (_g4 + 1);
HXDLIN( 464)				int i = (_g4 - 1);
HXLINE( 465)				{
HXLINE( 465)					int _g = 0;
HXDLIN( 465)					int _g1 = (this->_segmentsH + 1);
HXDLIN( 465)					while((_g < _g1)){
HXLINE( 465)						_g = (_g + 1);
HXDLIN( 465)						int j = (_g - 1);
HXLINE( 466)						{
HXLINE( 466)							uidx = (uidx + 1);
HXDLIN( 466)							data->set((uidx - 1),((tl0u + (( (Float)(i) ) * du)) * target->get_scaleU()));
            						}
HXLINE( 467)						{
HXLINE( 467)							uidx = (uidx + 1);
HXDLIN( 467)							data->set((uidx - 1),((tl0v + (v_tile_dim - (( (Float)(j) ) * dv))) * target->get_scaleV()));
            						}
HXLINE( 468)						uidx = (uidx + skip);
HXLINE( 469)						{
HXLINE( 469)							uidx = (uidx + 1);
HXDLIN( 469)							data->set((uidx - 1),((tl1u + (u_tile_dim - (( (Float)(i) ) * du))) * target->get_scaleU()));
            						}
HXLINE( 470)						{
HXLINE( 470)							uidx = (uidx + 1);
HXDLIN( 470)							data->set((uidx - 1),((tl1v + (v_tile_dim - (( (Float)(j) ) * dv))) * target->get_scaleV()));
            						}
HXLINE( 471)						uidx = (uidx + skip);
            					}
            				}
            			}
            		}
HXLINE( 475)		target->updateData(data);
            	}



::hx::ObjectPtr< CubeGeometry_obj > CubeGeometry_obj::__new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_segmentsD,::hx::Null< bool >  __o_tile6) {
	::hx::ObjectPtr< CubeGeometry_obj > __this = new CubeGeometry_obj();
	__this->__construct(__o_width,__o_height,__o_depth,__o_segmentsW,__o_segmentsH,__o_segmentsD,__o_tile6);
	return __this;
}

::hx::ObjectPtr< CubeGeometry_obj > CubeGeometry_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_segmentsD,::hx::Null< bool >  __o_tile6) {
	CubeGeometry_obj *__this = (CubeGeometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeGeometry_obj), true, "away3d.primitives.CubeGeometry"));
	*(void **)__this = CubeGeometry_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height,__o_depth,__o_segmentsW,__o_segmentsH,__o_segmentsD,__o_tile6);
	return __this;
}

CubeGeometry_obj::CubeGeometry_obj()
{
}

::hx::Val CubeGeometry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		if (HX_FIELD_EQ(inName,"tile6") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tile6() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		if (HX_FIELD_EQ(inName,"_tile6") ) { return ::hx::Val( _tile6 ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buildUVs") ) { return ::hx::Val( buildUVs_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"segmentsW") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_segmentsW() ); }
		if (HX_FIELD_EQ(inName,"segmentsH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_segmentsH() ); }
		if (HX_FIELD_EQ(inName,"segmentsD") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_segmentsD() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return ::hx::Val( set_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tile6") ) { return ::hx::Val( get_tile6_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tile6") ) { return ::hx::Val( set_tile6_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { return ::hx::Val( _segmentsW ); }
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { return ::hx::Val( _segmentsH ); }
		if (HX_FIELD_EQ(inName,"_segmentsD") ) { return ::hx::Val( _segmentsD ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_segmentsW") ) { return ::hx::Val( get_segmentsW_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_segmentsW") ) { return ::hx::Val( set_segmentsW_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_segmentsH") ) { return ::hx::Val( get_segmentsH_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_segmentsH") ) { return ::hx::Val( set_segmentsH_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_segmentsD") ) { return ::hx::Val( get_segmentsD_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_segmentsD") ) { return ::hx::Val( set_segmentsD_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildGeometry") ) { return ::hx::Val( buildGeometry_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CubeGeometry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depth(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"tile6") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tile6(inValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile6") ) { _tile6=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"segmentsW") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_segmentsW(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"segmentsH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_segmentsH(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"segmentsD") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_segmentsD(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_segmentsW") ) { _segmentsW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_segmentsH") ) { _segmentsH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_segmentsD") ) { _segmentsD=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeGeometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("tile6",48,fd,34,10));
	outFields->push(HX_("segmentsW",f7,c6,e8,13));
	outFields->push(HX_("segmentsH",e8,c6,e8,13));
	outFields->push(HX_("segmentsD",e4,c6,e8,13));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_depth",44,38,11,d3));
	outFields->push(HX_("_tile6",89,44,1c,0c));
	outFields->push(HX_("_segmentsW",b8,42,8b,6f));
	outFields->push(HX_("_segmentsH",a9,42,8b,6f));
	outFields->push(HX_("_segmentsD",a5,42,8b,6f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubeGeometry_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(CubeGeometry_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsFloat,(int)offsetof(CubeGeometry_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsFloat,(int)offsetof(CubeGeometry_obj,_depth),HX_("_depth",44,38,11,d3)},
	{::hx::fsBool,(int)offsetof(CubeGeometry_obj,_tile6),HX_("_tile6",89,44,1c,0c)},
	{::hx::fsInt,(int)offsetof(CubeGeometry_obj,_segmentsW),HX_("_segmentsW",b8,42,8b,6f)},
	{::hx::fsInt,(int)offsetof(CubeGeometry_obj,_segmentsH),HX_("_segmentsH",a9,42,8b,6f)},
	{::hx::fsInt,(int)offsetof(CubeGeometry_obj,_segmentsD),HX_("_segmentsD",a5,42,8b,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CubeGeometry_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeGeometry_obj_sMemberFields[] = {
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_depth",44,38,11,d3),
	HX_("_tile6",89,44,1c,0c),
	HX_("_segmentsW",b8,42,8b,6f),
	HX_("_segmentsH",a9,42,8b,6f),
	HX_("_segmentsD",a5,42,8b,6f),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("get_tile6",9f,59,de,53),
	HX_("set_tile6",ab,45,2f,37),
	HX_("get_segmentsW",ce,9a,4c,d5),
	HX_("set_segmentsW",da,7c,52,1a),
	HX_("get_segmentsH",bf,9a,4c,d5),
	HX_("set_segmentsH",cb,7c,52,1a),
	HX_("get_segmentsD",bb,9a,4c,d5),
	HX_("set_segmentsD",c7,7c,52,1a),
	HX_("buildGeometry",00,78,79,cd),
	HX_("buildUVs",84,a0,b8,53),
	::String(null()) };

::hx::Class CubeGeometry_obj::__mClass;

void CubeGeometry_obj::__register()
{
	CubeGeometry_obj _hx_dummy;
	CubeGeometry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.primitives.CubeGeometry",fa,86,f3,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeGeometry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeGeometry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeGeometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeGeometry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace primitives
