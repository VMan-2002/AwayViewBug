#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b557290fba582da0_37_new,"openfl.display._internal.DrawCommandReader","new",0x2371abc0,"openfl.display._internal.DrawCommandReader.new","openfl/display/_internal/DrawCommandReader.hx",37,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_46_advance,"openfl.display._internal.DrawCommandReader","advance",0x6c2b13e2,"openfl.display._internal.DrawCommandReader.advance","openfl/display/_internal/DrawCommandReader.hx",46,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_132_bool,"openfl.display._internal.DrawCommandReader","bool",0xd81d9cca,"openfl.display._internal.DrawCommandReader.bool","openfl/display/_internal/DrawCommandReader.hx",132,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_136_destroy,"openfl.display._internal.DrawCommandReader","destroy",0xa1a5385a,"openfl.display._internal.DrawCommandReader.destroy","openfl/display/_internal/DrawCommandReader.hx",136,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_143_fArr,"openfl.display._internal.DrawCommandReader","fArr",0xda9f923b,"openfl.display._internal.DrawCommandReader.fArr","openfl/display/_internal/DrawCommandReader.hx",143,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_148_float,"openfl.display._internal.DrawCommandReader","float",0x8d6a38fc,"openfl.display._internal.DrawCommandReader.float","openfl/display/_internal/DrawCommandReader.hx",148,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_153_iArr,"openfl.display._internal.DrawCommandReader","iArr",0xdc9b3618,"openfl.display._internal.DrawCommandReader.iArr","openfl/display/_internal/DrawCommandReader.hx",153,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_158_int,"openfl.display._internal.DrawCommandReader","int",0x236de84f,"openfl.display._internal.DrawCommandReader.int","openfl/display/_internal/DrawCommandReader.hx",158,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_165_obj,"openfl.display._internal.DrawCommandReader","obj",0x23726b57,"openfl.display._internal.DrawCommandReader.obj","openfl/display/_internal/DrawCommandReader.hx",165,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_169_readBeginBitmapFill,"openfl.display._internal.DrawCommandReader","readBeginBitmapFill",0x56395245,"openfl.display._internal.DrawCommandReader.readBeginBitmapFill","openfl/display/_internal/DrawCommandReader.hx",169,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_176_readBeginFill,"openfl.display._internal.DrawCommandReader","readBeginFill",0xc289fa76,"openfl.display._internal.DrawCommandReader.readBeginFill","openfl/display/_internal/DrawCommandReader.hx",176,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_183_readBeginGradientFill,"openfl.display._internal.DrawCommandReader","readBeginGradientFill",0xb027c386,"openfl.display._internal.DrawCommandReader.readBeginGradientFill","openfl/display/_internal/DrawCommandReader.hx",183,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_190_readBeginShaderFill,"openfl.display._internal.DrawCommandReader","readBeginShaderFill",0x5374d47b,"openfl.display._internal.DrawCommandReader.readBeginShaderFill","openfl/display/_internal/DrawCommandReader.hx",190,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_197_readCubicCurveTo,"openfl.display._internal.DrawCommandReader","readCubicCurveTo",0x2a4cd0f6,"openfl.display._internal.DrawCommandReader.readCubicCurveTo","openfl/display/_internal/DrawCommandReader.hx",197,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_204_readCurveTo,"openfl.display._internal.DrawCommandReader","readCurveTo",0xc8ec2eb4,"openfl.display._internal.DrawCommandReader.readCurveTo","openfl/display/_internal/DrawCommandReader.hx",204,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_211_readDrawCircle,"openfl.display._internal.DrawCommandReader","readDrawCircle",0x97a024ca,"openfl.display._internal.DrawCommandReader.readDrawCircle","openfl/display/_internal/DrawCommandReader.hx",211,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_218_readDrawEllipse,"openfl.display._internal.DrawCommandReader","readDrawEllipse",0x2a4ff0e4,"openfl.display._internal.DrawCommandReader.readDrawEllipse","openfl/display/_internal/DrawCommandReader.hx",218,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_225_readDrawQuads,"openfl.display._internal.DrawCommandReader","readDrawQuads",0x5be6f852,"openfl.display._internal.DrawCommandReader.readDrawQuads","openfl/display/_internal/DrawCommandReader.hx",225,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_232_readDrawRect,"openfl.display._internal.DrawCommandReader","readDrawRect",0x7d01fd5e,"openfl.display._internal.DrawCommandReader.readDrawRect","openfl/display/_internal/DrawCommandReader.hx",232,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_239_readDrawRoundRect,"openfl.display._internal.DrawCommandReader","readDrawRoundRect",0x2c1dee18,"openfl.display._internal.DrawCommandReader.readDrawRoundRect","openfl/display/_internal/DrawCommandReader.hx",239,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_246_readDrawTriangles,"openfl.display._internal.DrawCommandReader","readDrawTriangles",0x27db6e31,"openfl.display._internal.DrawCommandReader.readDrawTriangles","openfl/display/_internal/DrawCommandReader.hx",246,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_253_readEndFill,"openfl.display._internal.DrawCommandReader","readEndFill",0x204456a8,"openfl.display._internal.DrawCommandReader.readEndFill","openfl/display/_internal/DrawCommandReader.hx",253,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_260_readLineBitmapStyle,"openfl.display._internal.DrawCommandReader","readLineBitmapStyle",0x3152c7d8,"openfl.display._internal.DrawCommandReader.readLineBitmapStyle","openfl/display/_internal/DrawCommandReader.hx",260,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_267_readLineGradientStyle,"openfl.display._internal.DrawCommandReader","readLineGradientStyle",0x4416abb7,"openfl.display._internal.DrawCommandReader.readLineGradientStyle","openfl/display/_internal/DrawCommandReader.hx",267,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_274_readLineStyle,"openfl.display._internal.DrawCommandReader","readLineStyle",0x010cf5c7,"openfl.display._internal.DrawCommandReader.readLineStyle","openfl/display/_internal/DrawCommandReader.hx",274,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_281_readLineTo,"openfl.display._internal.DrawCommandReader","readLineTo",0xab2a7b25,"openfl.display._internal.DrawCommandReader.readLineTo","openfl/display/_internal/DrawCommandReader.hx",281,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_288_readMoveTo,"openfl.display._internal.DrawCommandReader","readMoveTo",0x8b370782,"openfl.display._internal.DrawCommandReader.readMoveTo","openfl/display/_internal/DrawCommandReader.hx",288,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_295_readOverrideBlendMode,"openfl.display._internal.DrawCommandReader","readOverrideBlendMode",0x7c0e7f92,"openfl.display._internal.DrawCommandReader.readOverrideBlendMode","openfl/display/_internal/DrawCommandReader.hx",295,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_302_readOverrideMatrix,"openfl.display._internal.DrawCommandReader","readOverrideMatrix",0xb4fb4843,"openfl.display._internal.DrawCommandReader.readOverrideMatrix","openfl/display/_internal/DrawCommandReader.hx",302,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_309_readWindingEvenOdd,"openfl.display._internal.DrawCommandReader","readWindingEvenOdd",0x065c1751,"openfl.display._internal.DrawCommandReader.readWindingEvenOdd","openfl/display/_internal/DrawCommandReader.hx",309,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_316_readWindingNonZero,"openfl.display._internal.DrawCommandReader","readWindingNonZero",0xd1916f71,"openfl.display._internal.DrawCommandReader.readWindingNonZero","openfl/display/_internal/DrawCommandReader.hx",316,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_324_reset,"openfl.display._internal.DrawCommandReader","reset",0x719bbd2f,"openfl.display._internal.DrawCommandReader.reset","openfl/display/_internal/DrawCommandReader.hx",324,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_328_skip,"openfl.display._internal.DrawCommandReader","skip",0xe3572f1f,"openfl.display._internal.DrawCommandReader.skip","openfl/display/_internal/DrawCommandReader.hx",328,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_b557290fba582da0_23_boot,"openfl.display._internal.DrawCommandReader","boot",0xd81d9cd2,"openfl.display._internal.DrawCommandReader.boot","openfl/display/_internal/DrawCommandReader.hx",23,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{

void DrawCommandReader_obj::__construct( ::openfl::display::_internal::DrawCommandBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_37_new)
HXLINE(  38)		this->buffer = buffer;
HXLINE(  40)		this->bPos = (this->iPos = (this->fPos = (this->oPos = (this->ffPos = (this->iiPos = (this->tsPos = 0))))));
HXLINE(  41)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::UNKNOWN_dyn();
            	}

Dynamic DrawCommandReader_obj::__CreateEmpty() { return new DrawCommandReader_obj; }

void *DrawCommandReader_obj::_hx_vtable = 0;

Dynamic DrawCommandReader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawCommandReader_obj > _hx_result = new DrawCommandReader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DrawCommandReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x30a4d7c0;
}

void DrawCommandReader_obj::advance(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_46_advance)
HXDLIN(  46)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE(  49)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  49)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXLINE(  50)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  50)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE(  53)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  53)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXLINE(  54)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  54)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE(  57)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE(  58)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  58)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXLINE(  59)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  59)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXLINE(  60)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  60)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE(  63)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  63)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE(  66)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  66)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE(  69)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  69)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE(  72)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE(  75)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  75)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE(  78)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  78)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE(  81)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  81)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE(  84)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  84)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXLINE(  85)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  85)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE(  88)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  88)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE(  95)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXLINE(  96)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  96)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE(  99)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  99)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE( 100)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 100)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXLINE( 101)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXLINE( 102)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 102)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 105)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 105)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXLINE( 106)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 106)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXLINE( 107)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 107)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXLINE( 108)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 108)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 111)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 111)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 114)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 114)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 117)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 117)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 120)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 120)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,advance,(void))

bool DrawCommandReader_obj::_hx_bool(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_132_bool)
HXDLIN( 132)		return this->buffer->b->__get((this->bPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_bool,return )

void DrawCommandReader_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_136_destroy)
HXLINE( 137)		this->buffer = null();
HXLINE( 138)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,destroy,(void))

::Array< Float > DrawCommandReader_obj::fArr(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_143_fArr)
HXDLIN( 143)		return this->buffer->ff->__get((this->ffPos + index)).StaticCast< ::Array< Float > >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,fArr,return )

Float DrawCommandReader_obj::_hx_float(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_148_float)
HXDLIN( 148)		return this->buffer->f->__get((this->fPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_float,return )

::Array< int > DrawCommandReader_obj::iArr(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_153_iArr)
HXDLIN( 153)		return this->buffer->ii->__get((this->iiPos + index)).StaticCast< ::Array< int > >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,iArr,return )

int DrawCommandReader_obj::_hx_int(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_158_int)
HXDLIN( 158)		return this->buffer->i->__get((this->iPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_hx_int,return )

 ::Dynamic DrawCommandReader_obj::obj(int index){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_165_obj)
HXDLIN( 165)		return this->buffer->o->__get((this->oPos + index));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,obj,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginBitmapFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_169_readBeginBitmapFill)
HXLINE( 170)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 170)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 171)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXLINE( 172)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 172)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginBitmapFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_176_readBeginFill)
HXLINE( 177)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 177)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 177)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 178)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXLINE( 179)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 179)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginGradientFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_183_readBeginGradientFill)
HXLINE( 184)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 184)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 184)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 185)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXLINE( 186)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 186)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginGradientFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readBeginShaderFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_190_readBeginShaderFill)
HXLINE( 191)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 191)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 192)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXLINE( 193)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 193)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginShaderFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readCubicCurveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_197_readCubicCurveTo)
HXLINE( 198)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 198)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 198)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 199)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXLINE( 200)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 200)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCubicCurveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readCurveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_204_readCurveTo)
HXLINE( 205)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 205)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 206)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXLINE( 207)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCurveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawCircle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_211_readDrawCircle)
HXLINE( 212)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 212)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 213)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXLINE( 214)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 214)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawCircle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawEllipse(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_218_readDrawEllipse)
HXLINE( 219)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 219)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 220)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXLINE( 221)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 221)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawEllipse,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawQuads(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_225_readDrawQuads)
HXLINE( 226)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 226)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 226)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 227)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXLINE( 228)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 228)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawQuads,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawRect(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_232_readDrawRect)
HXLINE( 233)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 233)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 234)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXLINE( 235)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 235)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRect,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawRoundRect(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_239_readDrawRoundRect)
HXLINE( 240)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 240)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 240)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 241)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXLINE( 242)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 242)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRoundRect,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readDrawTriangles(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_246_readDrawTriangles)
HXLINE( 247)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 247)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 248)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXLINE( 249)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 249)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawTriangles,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readEndFill(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_253_readEndFill)
HXLINE( 254)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 254)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 255)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXLINE( 256)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readEndFill,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineBitmapStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_260_readLineBitmapStyle)
HXLINE( 261)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 261)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 261)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 262)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXLINE( 263)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineBitmapStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineGradientStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_267_readLineGradientStyle)
HXLINE( 268)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 268)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 269)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXLINE( 270)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 270)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineGradientStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineStyle(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_274_readLineStyle)
HXLINE( 275)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 275)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 276)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXLINE( 277)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 277)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineStyle,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readLineTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_281_readLineTo)
HXLINE( 282)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 282)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 282)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 283)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXLINE( 284)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 284)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readMoveTo(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_288_readMoveTo)
HXLINE( 289)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 289)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 289)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 290)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXLINE( 291)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 291)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readMoveTo,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readOverrideBlendMode(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_295_readOverrideBlendMode)
HXLINE( 296)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 296)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 296)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 297)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXLINE( 298)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 298)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideBlendMode,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readOverrideMatrix(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_302_readOverrideMatrix)
HXLINE( 303)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 303)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 304)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_MATRIX_dyn();
HXLINE( 305)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 305)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideMatrix,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readWindingEvenOdd(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_309_readWindingEvenOdd)
HXLINE( 310)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 310)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 310)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 311)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXLINE( 312)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 312)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readWindingEvenOdd,return )

 ::openfl::display::_internal::DrawCommandReader DrawCommandReader_obj::readWindingNonZero(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_316_readWindingNonZero)
HXLINE( 317)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 317)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 317)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 318)		this->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXLINE( 319)		 ::openfl::display::_internal::DrawCommandReader this1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 319)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readWindingNonZero,return )

void DrawCommandReader_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_324_reset)
HXDLIN( 324)		this->bPos = (this->iPos = (this->fPos = (this->oPos = (this->ffPos = (this->iiPos = (this->tsPos = 0))))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,reset,(void))

void DrawCommandReader_obj::skip( ::openfl::display::_internal::DrawCommandType type){
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_328_skip)
HXLINE( 329)		switch((int)(this->prev->_hx_getIndex())){
            			case (int)0: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)1: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->iPos = (_hx_tmp->iPos + 1);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp1->fPos = (_hx_tmp1->fPos + 1);
            			}
            			break;
            			case (int)2: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)3: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)4: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 6);
            			}
            			break;
            			case (int)5: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)6: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 3);
            			}
            			break;
            			case (int)7: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)8: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 3);
            			}
            			break;
            			case (int)9: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 4);
            			}
            			break;
            			case (int)10: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 5);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp1->oPos = (_hx_tmp1->oPos + 1);
            			}
            			break;
            			case (int)12: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
            			}
            			break;
            			case (int)13: {
            			}
            			break;
            			case (int)14: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 2);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp1->bPos = (_hx_tmp1->bPos + 2);
            			}
            			break;
            			case (int)15: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp1->iiPos = (_hx_tmp1->iiPos + 2);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp2->ffPos = (_hx_tmp2->ffPos + 1);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp3->fPos = (_hx_tmp3->fPos + 1);
            			}
            			break;
            			case (int)16: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 4);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp1->iPos = (_hx_tmp1->iPos + 1);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp2->fPos = (_hx_tmp2->fPos + 2);
HXDLIN( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp3->bPos = (_hx_tmp3->bPos + 1);
            			}
            			break;
            			case (int)17: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)18: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->fPos = (_hx_tmp->fPos + 2);
            			}
            			break;
            			case (int)19: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)20: {
HXLINE( 329)				 ::openfl::display::_internal::DrawCommandReader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 329)				_hx_tmp->oPos = (_hx_tmp->oPos + 1);
            			}
            			break;
            			case (int)21: case (int)22: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 330)		this->prev = type;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,skip,(void))


::hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__new( ::openfl::display::_internal::DrawCommandBuffer buffer) {
	::hx::ObjectPtr< DrawCommandReader_obj > __this = new DrawCommandReader_obj();
	__this->__construct(buffer);
	return __this;
}

::hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::_internal::DrawCommandBuffer buffer) {
	DrawCommandReader_obj *__this = (DrawCommandReader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawCommandReader_obj), true, "openfl.display._internal.DrawCommandReader"));
	*(void **)__this = DrawCommandReader_obj::_hx_vtable;
	__this->__construct(buffer);
	return __this;
}

DrawCommandReader_obj::DrawCommandReader_obj()
{
}

void DrawCommandReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandReader);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bPos,"bPos");
	HX_MARK_MEMBER_NAME(iiPos,"iiPos");
	HX_MARK_MEMBER_NAME(iPos,"iPos");
	HX_MARK_MEMBER_NAME(ffPos,"ffPos");
	HX_MARK_MEMBER_NAME(fPos,"fPos");
	HX_MARK_MEMBER_NAME(oPos,"oPos");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(tsPos,"tsPos");
	HX_MARK_END_CLASS();
}

void DrawCommandReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bPos,"bPos");
	HX_VISIT_MEMBER_NAME(iiPos,"iiPos");
	HX_VISIT_MEMBER_NAME(iPos,"iPos");
	HX_VISIT_MEMBER_NAME(ffPos,"ffPos");
	HX_VISIT_MEMBER_NAME(fPos,"fPos");
	HX_VISIT_MEMBER_NAME(oPos,"oPos");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(tsPos,"tsPos");
}

::hx::Val DrawCommandReader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return ::hx::Val( _hx_int_dyn() ); }
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { return ::hx::Val( bPos ); }
		if (HX_FIELD_EQ(inName,"iPos") ) { return ::hx::Val( iPos ); }
		if (HX_FIELD_EQ(inName,"fPos") ) { return ::hx::Val( fPos ); }
		if (HX_FIELD_EQ(inName,"oPos") ) { return ::hx::Val( oPos ); }
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"bool") ) { return ::hx::Val( _hx_bool_dyn() ); }
		if (HX_FIELD_EQ(inName,"fArr") ) { return ::hx::Val( fArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"iArr") ) { return ::hx::Val( iArr_dyn() ); }
		if (HX_FIELD_EQ(inName,"skip") ) { return ::hx::Val( skip_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { return ::hx::Val( iiPos ); }
		if (HX_FIELD_EQ(inName,"ffPos") ) { return ::hx::Val( ffPos ); }
		if (HX_FIELD_EQ(inName,"tsPos") ) { return ::hx::Val( tsPos ); }
		if (HX_FIELD_EQ(inName,"float") ) { return ::hx::Val( _hx_float_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return ::hx::Val( advance_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readLineTo") ) { return ::hx::Val( readLineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"readMoveTo") ) { return ::hx::Val( readMoveTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readCurveTo") ) { return ::hx::Val( readCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"readEndFill") ) { return ::hx::Val( readEndFill_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readDrawRect") ) { return ::hx::Val( readDrawRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readBeginFill") ) { return ::hx::Val( readBeginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readDrawQuads") ) { return ::hx::Val( readDrawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineStyle") ) { return ::hx::Val( readLineStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readDrawCircle") ) { return ::hx::Val( readDrawCircle_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readDrawEllipse") ) { return ::hx::Val( readDrawEllipse_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readCubicCurveTo") ) { return ::hx::Val( readCubicCurveTo_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readDrawRoundRect") ) { return ::hx::Val( readDrawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"readDrawTriangles") ) { return ::hx::Val( readDrawTriangles_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readOverrideMatrix") ) { return ::hx::Val( readOverrideMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"readWindingEvenOdd") ) { return ::hx::Val( readWindingEvenOdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"readWindingNonZero") ) { return ::hx::Val( readWindingNonZero_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readBeginBitmapFill") ) { return ::hx::Val( readBeginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readBeginShaderFill") ) { return ::hx::Val( readBeginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineBitmapStyle") ) { return ::hx::Val( readLineBitmapStyle_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"readBeginGradientFill") ) { return ::hx::Val( readBeginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLineGradientStyle") ) { return ::hx::Val( readLineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"readOverrideBlendMode") ) { return ::hx::Val( readOverrideBlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DrawCommandReader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { bPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iPos") ) { iPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPos") ) { fPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oPos") ) { oPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::openfl::display::_internal::DrawCommandType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { iiPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ffPos") ) { ffPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tsPos") ) { tsPos=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawCommandReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("bPos",52,fe,03,41));
	outFields->push(HX_("iiPos",94,65,b7,ba));
	outFields->push(HX_("iPos",ab,7c,a4,45));
	outFields->push(HX_("ffPos",34,04,88,fe));
	outFields->push(HX_("fPos",ce,d8,a8,43));
	outFields->push(HX_("oPos",65,c4,9b,49));
	outFields->push(HX_("prev",f3,be,5e,4a));
	outFields->push(HX_("tsPos",55,e9,bb,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DrawCommandReader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(int)offsetof(DrawCommandReader_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,bPos),HX_("bPos",52,fe,03,41)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,iiPos),HX_("iiPos",94,65,b7,ba)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,iPos),HX_("iPos",ab,7c,a4,45)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,ffPos),HX_("ffPos",34,04,88,fe)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,fPos),HX_("fPos",ce,d8,a8,43)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,oPos),HX_("oPos",65,c4,9b,49)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandType */ ,(int)offsetof(DrawCommandReader_obj,prev),HX_("prev",f3,be,5e,4a)},
	{::hx::fsInt,(int)offsetof(DrawCommandReader_obj,tsPos),HX_("tsPos",55,e9,bb,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DrawCommandReader_obj_sStaticStorageInfo = 0;
#endif

static ::String DrawCommandReader_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("bPos",52,fe,03,41),
	HX_("iiPos",94,65,b7,ba),
	HX_("iPos",ab,7c,a4,45),
	HX_("ffPos",34,04,88,fe),
	HX_("fPos",ce,d8,a8,43),
	HX_("oPos",65,c4,9b,49),
	HX_("prev",f3,be,5e,4a),
	HX_("tsPos",55,e9,bb,16),
	HX_("advance",82,08,0c,ef),
	HX_("bool",2a,84,1b,41),
	HX_("destroy",fa,2c,86,24),
	HX_("fArr",9b,79,9d,43),
	HX_("float",9c,c5,96,02),
	HX_("iArr",78,1d,99,45),
	HX_("int",ef,0c,50,00),
	HX_("obj",f7,8f,54,00),
	HX_("readBeginBitmapFill",e5,b6,06,b9),
	HX_("readBeginFill",16,27,04,20),
	HX_("readBeginGradientFill",26,90,8f,6c),
	HX_("readBeginShaderFill",1b,39,42,b6),
	HX_("readCubicCurveTo",56,48,38,74),
	HX_("readCurveTo",54,f3,73,21),
	HX_("readDrawCircle",2a,04,0d,05),
	HX_("readDrawEllipse",84,85,26,7c),
	HX_("readDrawQuads",f2,24,61,b9),
	HX_("readDrawRect",be,44,46,9b),
	HX_("readDrawRoundRect",b8,ea,3a,90),
	HX_("readDrawTriangles",d1,6a,f8,8b),
	HX_("readEndFill",48,1b,cc,78),
	HX_("readLineBitmapStyle",78,2c,20,94),
	HX_("readLineGradientStyle",57,78,7e,00),
	HX_("readLineStyle",67,22,87,5e),
	HX_("readLineTo",85,2a,1c,e6),
	HX_("readMoveTo",e2,b6,28,c6),
	HX_("readOverrideBlendMode",32,4c,76,38),
	HX_("readOverrideMatrix",a3,57,3b,ea),
	HX_("readWindingEvenOdd",b1,26,9c,3b),
	HX_("readWindingNonZero",d1,7e,d1,06),
	HX_("reset",cf,49,c8,e6),
	HX_("skip",7f,16,55,4c),
	::String(null()) };

::hx::Class DrawCommandReader_obj::__mClass;

void DrawCommandReader_obj::__register()
{
	DrawCommandReader_obj _hx_dummy;
	DrawCommandReader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DrawCommandReader",ce,0b,49,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DrawCommandReader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DrawCommandReader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCommandReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCommandReader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DrawCommandReader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b557290fba582da0_23_boot)
HXDLIN(  23)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
