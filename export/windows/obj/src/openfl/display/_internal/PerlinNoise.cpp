#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_AbstractNoise
#include <openfl/display/_internal/AbstractNoise.h>
#endif
#ifndef INCLUDED_openfl_display__internal_PerlinNoise
#include <openfl/display/_internal/PerlinNoise.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7ac11d622634610f_51_new,"openfl.display._internal.PerlinNoise","new",0xd8492cdc,"openfl.display._internal.PerlinNoise.new","openfl/display/_internal/PerlinNoise.hx",51,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_67_fill,"openfl.display._internal.PerlinNoise","fill",0x62775e87,"openfl.display._internal.PerlinNoise.fill","openfl/display/_internal/PerlinNoise.hx",67,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_190_noise,"openfl.display._internal.PerlinNoise","noise",0x65250316,"openfl.display._internal.PerlinNoise.noise","openfl/display/_internal/PerlinNoise.hx",190,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_262_setSeed,"openfl.display._internal.PerlinNoise","setSeed",0xcb5810af,"openfl.display._internal.PerlinNoise.setSeed","openfl/display/_internal/PerlinNoise.hx",262,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_22_boot,"openfl.display._internal.PerlinNoise","boot",0x5fd71436,"openfl.display._internal.PerlinNoise.boot","openfl/display/_internal/PerlinNoise.hx",22,0xa5e7a0d7)
HX_LOCAL_STACK_FRAME(_hx_pos_7ac11d622634610f_25_boot,"openfl.display._internal.PerlinNoise","boot",0x5fd71436,"openfl.display._internal.PerlinNoise.boot","openfl/display/_internal/PerlinNoise.hx",25,0xa5e7a0d7)
static const int _hx_array_data_054aceea_10[] = {
	(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,(int)151,(int)160,(int)137,(int)91,(int)90,(int)15,(int)131,(int)13,(int)201,(int)95,(int)96,(int)53,(int)194,(int)233,(int)7,(int)225,(int)140,(int)36,(int)103,(int)30,(int)69,(int)142,(int)8,(int)99,(int)37,(int)240,(int)21,(int)10,(int)23,(int)190,(int)6,(int)148,(int)247,(int)120,(int)234,(int)75,(int)0,(int)26,(int)197,(int)62,(int)94,(int)252,(int)219,(int)203,(int)117,(int)35,(int)11,(int)32,(int)57,(int)177,(int)33,(int)88,(int)237,(int)149,(int)56,(int)87,(int)174,(int)20,(int)125,(int)136,(int)171,(int)168,(int)68,(int)175,(int)74,(int)165,(int)71,(int)134,(int)139,(int)48,(int)27,(int)166,(int)77,(int)146,(int)158,(int)231,(int)83,(int)111,(int)229,(int)122,(int)60,(int)211,(int)133,(int)230,(int)220,(int)105,(int)92,(int)41,(int)55,(int)46,(int)245,(int)40,(int)244,(int)102,(int)143,(int)54,(int)65,(int)25,(int)63,(int)161,(int)1,(int)216,(int)80,(int)73,(int)209,(int)76,(int)132,(int)187,(int)208,(int)89,(int)18,(int)169,(int)200,(int)196,(int)135,(int)130,(int)116,(int)188,(int)159,(int)86,(int)164,(int)100,(int)109,(int)198,(int)173,(int)186,(int)3,(int)64,(int)52,(int)217,(int)226,(int)250,(int)124,(int)123,(int)5,(int)202,(int)38,(int)147,(int)118,(int)126,(int)255,(int)82,(int)85,(int)212,(int)207,(int)206,(int)59,(int)227,(int)47,(int)16,(int)58,(int)17,(int)182,(int)189,(int)28,(int)42,(int)223,(int)183,(int)170,(int)213,(int)119,(int)248,(int)152,(int)2,(int)44,(int)154,(int)163,(int)70,(int)221,(int)153,(int)101,(int)155,(int)167,(int)43,(int)172,(int)9,(int)129,(int)22,(int)39,(int)253,(int)19,(int)98,(int)108,(int)110,(int)79,(int)113,(int)224,(int)232,(int)178,(int)185,(int)112,(int)104,(int)218,(int)246,(int)97,(int)228,(int)251,(int)34,(int)242,(int)193,(int)238,(int)210,(int)144,(int)12,(int)191,(int)179,(int)162,(int)241,(int)81,(int)51,(int)145,(int)235,(int)249,(int)14,(int)239,(int)107,(int)49,(int)192,(int)214,(int)31,(int)181,(int)199,(int)106,(int)157,(int)184,(int)84,(int)204,(int)176,(int)115,(int)121,(int)50,(int)45,(int)127,(int)4,(int)150,(int)254,(int)138,(int)236,(int)205,(int)93,(int)222,(int)114,(int)67,(int)29,(int)24,(int)72,(int)243,(int)141,(int)128,(int)195,(int)78,(int)66,(int)215,(int)61,(int)156,(int)180,
};
namespace openfl{
namespace display{
namespace _internal{

void PerlinNoise_obj::__construct(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold){
            		bool stitch = __o_stitch.Default(false);
            		Float stitch_threshold = __o_stitch_threshold.Default(((Float)0.05));
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_51_new)
HXLINE(  52)		super::__construct(seed,octaves,channels,grayScale,falloff,stitch,stitch_threshold);
HXLINE(  54)		this->p_perm = ::Array_obj< int >::__new(0);
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			while((_g < 512)){
HXLINE(  56)				_g = (_g + 1);
HXDLIN(  56)				int i = (_g - 1);
HXLINE(  58)				this->p_perm[i] = ::openfl::display::_internal::PerlinNoise_obj::P->__get((i & 255));
            			}
            		}
HXLINE(  61)		this->base_factor = ((Float)0.03125);
HXLINE(  63)		this->setSeed(seed);
            	}

Dynamic PerlinNoise_obj::__CreateEmpty() { return new PerlinNoise_obj; }

void *PerlinNoise_obj::_hx_vtable = 0;

Dynamic PerlinNoise_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PerlinNoise_obj > _hx_result = new PerlinNoise_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool PerlinNoise_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4234fc78) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4234fc78;
	} else {
		return inClassId==(int)0x5be429ce;
	}
}

void PerlinNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _scale_x,Float _scale_y,Float _scale_z){
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_67_fill)
HXLINE(  68)		int width = bitmap->width;
HXLINE(  69)		int height = bitmap->height;
HXLINE(  71)		int octaves = this->octaves;
HXLINE(  72)		::Array< Float > octaves_frequencies = this->octaves_frequencies;
HXLINE(  73)		::Array< Float > octaves_persistences = this->octaves_persistences;
HXLINE(  75)		bool isRed = ((1 & this->channels) == 1);
HXLINE(  76)		bool isGreen = ((2 & this->channels) == 2);
HXLINE(  77)		bool isBlue = ((4 & this->channels) == 4);
HXLINE(  79)		int channels = 0;
HXLINE(  81)		if (isRed) {
HXLINE(  83)			channels = (channels + 1);
            		}
HXLINE(  86)		if (isGreen) {
HXLINE(  88)			channels = (channels + 1);
            		}
HXLINE(  91)		if (isBlue) {
HXLINE(  93)			channels = (channels + 1);
            		}
HXLINE(  96)		bool grayscale = this->grayscale;
HXLINE(  98)		int stitch_w = ::Std_obj::_hx_int((this->stitch_threshold * ( (Float)(width) )));
HXLINE(  99)		int stitch_h = ::Std_obj::_hx_int((this->stitch_threshold * ( (Float)(height) )));
HXLINE( 101)		Float base_x = ((_scale_x * this->base_factor) + this->x_offset);
HXLINE( 103)		_scale_y = ((_scale_y * this->base_factor) + this->y_offset);
HXLINE( 104)		_scale_z = ((_scale_z * this->base_factor) + this->z_offset);
HXLINE( 106)		Float g_offset = ((Float)1.0);
HXLINE( 107)		Float b_offset = ((Float)2.0);
HXLINE( 109)		{
HXLINE( 109)			int _g = 0;
HXDLIN( 109)			int _g1 = height;
HXDLIN( 109)			while((_g < _g1)){
HXLINE( 109)				_g = (_g + 1);
HXDLIN( 109)				int py = (_g - 1);
HXLINE( 111)				_scale_x = base_x;
HXLINE( 113)				{
HXLINE( 113)					int _g1 = 0;
HXDLIN( 113)					int _g2 = width;
HXDLIN( 113)					while((_g1 < _g2)){
HXLINE( 113)						_g1 = (_g1 + 1);
HXDLIN( 113)						int px = (_g1 - 1);
HXLINE( 115)						Float color1 = ((Float)0.0);
HXLINE( 116)						Float color2 = ((Float)0.0);
HXLINE( 117)						Float color3 = ((Float)0.0);
HXLINE( 119)						{
HXLINE( 119)							int _g = 0;
HXDLIN( 119)							int _g2 = octaves;
HXDLIN( 119)							while((_g < _g2)){
HXLINE( 119)								_g = (_g + 1);
HXDLIN( 119)								int i = (_g - 1);
HXLINE( 121)								Float frequency = octaves_frequencies->__get(i);
HXLINE( 122)								Float persistence = octaves_persistences->__get(i);
HXLINE( 124)								color1 = (color1 + (this->noise((_scale_x * frequency),(_scale_y * frequency),(_scale_z * frequency)) * persistence));
HXLINE( 126)								if (!(grayscale)) {
HXLINE( 128)									if ((1 < channels)) {
HXLINE( 130)										color2 = (color2 + (this->noise(((_scale_x + g_offset) * frequency),((_scale_y + g_offset) * frequency),(_scale_z * frequency)) * persistence));
            									}
HXLINE( 133)									if ((2 < channels)) {
HXLINE( 135)										color3 = (color3 + (this->noise(((_scale_x + b_offset) * frequency),((_scale_y + b_offset) * frequency),(_scale_z * frequency)) * persistence));
            									}
            								}
            							}
            						}
HXLINE( 140)						int color = 0;
HXLINE( 142)						if (grayscale) {
HXLINE( 144)							color = this->color(color1,color1,color1);
            						}
            						else {
HXLINE( 146)							bool _hx_tmp;
HXDLIN( 146)							bool _hx_tmp1;
HXDLIN( 146)							if (isRed) {
HXLINE( 146)								_hx_tmp1 = isGreen;
            							}
            							else {
HXLINE( 146)								_hx_tmp1 = false;
            							}
HXDLIN( 146)							if (_hx_tmp1) {
HXLINE( 146)								_hx_tmp = isBlue;
            							}
            							else {
HXLINE( 146)								_hx_tmp = false;
            							}
HXDLIN( 146)							if (_hx_tmp) {
HXLINE( 148)								color = this->color(color1,color2,color3);
            							}
            							else {
HXLINE( 150)								bool _hx_tmp;
HXDLIN( 150)								if (isRed) {
HXLINE( 150)									_hx_tmp = isGreen;
            								}
            								else {
HXLINE( 150)									_hx_tmp = false;
            								}
HXDLIN( 150)								if (_hx_tmp) {
HXLINE( 152)									color = this->color(color1,color2,null());
            								}
            								else {
HXLINE( 154)									bool _hx_tmp;
HXDLIN( 154)									if (isRed) {
HXLINE( 154)										_hx_tmp = isBlue;
            									}
            									else {
HXLINE( 154)										_hx_tmp = false;
            									}
HXDLIN( 154)									if (_hx_tmp) {
HXLINE( 156)										color = this->color(color1,null(),color2);
            									}
            									else {
HXLINE( 158)										bool _hx_tmp;
HXDLIN( 158)										if (isGreen) {
HXLINE( 158)											_hx_tmp = isBlue;
            										}
            										else {
HXLINE( 158)											_hx_tmp = false;
            										}
HXDLIN( 158)										if (_hx_tmp) {
HXLINE( 160)											color = this->color(null(),color1,color2);
            										}
            										else {
HXLINE( 162)											if (isRed) {
HXLINE( 164)												color = this->color(color1,null(),null());
            											}
            											else {
HXLINE( 166)												if (isGreen) {
HXLINE( 168)													color = this->color(null(),color1,null());
            												}
            												else {
HXLINE( 170)													if (isBlue) {
HXLINE( 172)														color = this->color(null(),null(),color1);
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
HXLINE( 175)						if (this->stitch) {
HXLINE( 177)							color = this->stitching(bitmap,color,px,py,stitch_w,stitch_h,width,height);
            						}
HXLINE( 180)						bitmap->setPixel32(px,py,color);
HXLINE( 182)						_scale_x = (_scale_x + this->base_factor);
            					}
            				}
HXLINE( 185)				_scale_y = (_scale_y + this->base_factor);
            			}
            		}
            	}


Float PerlinNoise_obj::noise(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_190_noise)
HXLINE( 191)		Float xf = (x - ::hx::Mod(x,1));
HXLINE( 192)		Float yf = (y - ::hx::Mod(y,1));
HXLINE( 193)		Float zf = (z - ::hx::Mod(z,1));
HXLINE( 195)		x = (x - xf);
HXLINE( 196)		y = (y - yf);
HXLINE( 197)		z = (z - zf);
HXLINE( 199)		int X = (::Std_obj::_hx_int(xf) & 255);
HXLINE( 200)		int Y = (::Std_obj::_hx_int(yf) & 255);
HXLINE( 201)		int Z = (::Std_obj::_hx_int(zf) & 255);
HXLINE( 203)		Float u = this->fade(x);
HXLINE( 204)		Float v = this->fade(y);
HXLINE( 205)		Float w = this->fade(z);
HXLINE( 207)		int A = (this->p_perm->__get(X) + Y);
HXLINE( 208)		int AA = (this->p_perm->__get(A) + Z);
HXLINE( 209)		int AB = (this->p_perm->__get((A + 1)) + Z);
HXLINE( 210)		int B = (this->p_perm->__get((X + 1)) + Y);
HXLINE( 211)		int BA = (this->p_perm->__get(B) + Z);
HXLINE( 212)		int BB = (this->p_perm->__get((B + 1)) + Z);
HXLINE( 214)		Float x1 = (x - ( (Float)(1) ));
HXLINE( 215)		Float y1 = (y - ( (Float)(1) ));
HXLINE( 216)		Float z1 = (z - ( (Float)(1) ));
HXLINE( 218)		int hash = (this->p_perm->__get((BB + 1)) & 15);
HXLINE( 219)		Float g1;
HXDLIN( 219)		if (((hash & 1) == 0)) {
HXLINE( 219)			if ((hash < 8)) {
HXLINE( 219)				g1 = x1;
            			}
            			else {
HXLINE( 219)				g1 = y1;
            			}
            		}
            		else {
HXLINE( 219)			if ((hash < 8)) {
HXLINE( 219)				g1 = -(x1);
            			}
            			else {
HXLINE( 219)				g1 = -(y1);
            			}
            		}
HXLINE( 220)		Float g11;
HXDLIN( 220)		if (((hash & 2) == 0)) {
HXLINE( 220)			if ((hash < 4)) {
HXLINE( 220)				g11 = y1;
            			}
            			else {
HXLINE( 220)				if ((hash == 12)) {
HXLINE( 220)					g11 = x1;
            				}
            				else {
HXLINE( 220)					g11 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 220)			if ((hash < 4)) {
HXLINE( 220)				g11 = -(y1);
            			}
            			else {
HXLINE( 220)				if ((hash == 14)) {
HXLINE( 220)					g11 = -(x1);
            				}
            				else {
HXLINE( 220)					g11 = -(z1);
            				}
            			}
            		}
HXLINE( 219)		Float g12 = (g1 + g11);
HXLINE( 222)		hash = (this->p_perm->__get((AB + 1)) & 15);
HXLINE( 223)		Float g2;
HXDLIN( 223)		if (((hash & 1) == 0)) {
HXLINE( 223)			if ((hash < 8)) {
HXLINE( 223)				g2 = x;
            			}
            			else {
HXLINE( 223)				g2 = y1;
            			}
            		}
            		else {
HXLINE( 223)			if ((hash < 8)) {
HXLINE( 223)				g2 = -(x);
            			}
            			else {
HXLINE( 223)				g2 = -(y1);
            			}
            		}
HXLINE( 224)		Float g21;
HXDLIN( 224)		if (((hash & 2) == 0)) {
HXLINE( 224)			if ((hash < 4)) {
HXLINE( 224)				g21 = y1;
            			}
            			else {
HXLINE( 224)				if ((hash == 12)) {
HXLINE( 224)					g21 = x;
            				}
            				else {
HXLINE( 224)					g21 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 224)			if ((hash < 4)) {
HXLINE( 224)				g21 = -(y1);
            			}
            			else {
HXLINE( 224)				if ((hash == 14)) {
HXLINE( 224)					g21 = -(x);
            				}
            				else {
HXLINE( 224)					g21 = -(z1);
            				}
            			}
            		}
HXLINE( 223)		Float g22 = (g2 + g21);
HXLINE( 226)		hash = (this->p_perm->__get((BA + 1)) & 15);
HXLINE( 227)		Float g3;
HXDLIN( 227)		if (((hash & 1) == 0)) {
HXLINE( 227)			if ((hash < 8)) {
HXLINE( 227)				g3 = x1;
            			}
            			else {
HXLINE( 227)				g3 = y;
            			}
            		}
            		else {
HXLINE( 227)			if ((hash < 8)) {
HXLINE( 227)				g3 = -(x1);
            			}
            			else {
HXLINE( 227)				g3 = -(y);
            			}
            		}
HXLINE( 228)		Float g31;
HXDLIN( 228)		if (((hash & 2) == 0)) {
HXLINE( 228)			if ((hash < 4)) {
HXLINE( 228)				g31 = y;
            			}
            			else {
HXLINE( 228)				if ((hash == 12)) {
HXLINE( 228)					g31 = x1;
            				}
            				else {
HXLINE( 228)					g31 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 228)			if ((hash < 4)) {
HXLINE( 228)				g31 = -(y);
            			}
            			else {
HXLINE( 228)				if ((hash == 14)) {
HXLINE( 228)					g31 = -(x1);
            				}
            				else {
HXLINE( 228)					g31 = -(z1);
            				}
            			}
            		}
HXLINE( 227)		Float g32 = (g3 + g31);
HXLINE( 230)		hash = (this->p_perm->__get((AA + 1)) & 15);
HXLINE( 231)		Float g4;
HXDLIN( 231)		if (((hash & 1) == 0)) {
HXLINE( 231)			if ((hash < 8)) {
HXLINE( 231)				g4 = x;
            			}
            			else {
HXLINE( 231)				g4 = y;
            			}
            		}
            		else {
HXLINE( 231)			if ((hash < 8)) {
HXLINE( 231)				g4 = -(x);
            			}
            			else {
HXLINE( 231)				g4 = -(y);
            			}
            		}
HXLINE( 232)		Float g41;
HXDLIN( 232)		if (((hash & 2) == 0)) {
HXLINE( 232)			if ((hash < 4)) {
HXLINE( 232)				g41 = y;
            			}
            			else {
HXLINE( 232)				if ((hash == 12)) {
HXLINE( 232)					g41 = x;
            				}
            				else {
HXLINE( 232)					g41 = z1;
            				}
            			}
            		}
            		else {
HXLINE( 232)			if ((hash < 4)) {
HXLINE( 232)				g41 = -(y);
            			}
            			else {
HXLINE( 232)				if ((hash == 14)) {
HXLINE( 232)					g41 = -(x);
            				}
            				else {
HXLINE( 232)					g41 = -(z1);
            				}
            			}
            		}
HXLINE( 231)		Float g42 = (g4 + g41);
HXLINE( 234)		hash = (this->p_perm->__get(BB) & 15);
HXLINE( 235)		Float g5;
HXDLIN( 235)		if (((hash & 1) == 0)) {
HXLINE( 235)			if ((hash < 8)) {
HXLINE( 235)				g5 = x1;
            			}
            			else {
HXLINE( 235)				g5 = y1;
            			}
            		}
            		else {
HXLINE( 235)			if ((hash < 8)) {
HXLINE( 235)				g5 = -(x1);
            			}
            			else {
HXLINE( 235)				g5 = -(y1);
            			}
            		}
HXLINE( 236)		Float g51;
HXDLIN( 236)		if (((hash & 2) == 0)) {
HXLINE( 236)			if ((hash < 4)) {
HXLINE( 236)				g51 = y1;
            			}
            			else {
HXLINE( 236)				if ((hash == 12)) {
HXLINE( 236)					g51 = x1;
            				}
            				else {
HXLINE( 236)					g51 = z;
            				}
            			}
            		}
            		else {
HXLINE( 236)			if ((hash < 4)) {
HXLINE( 236)				g51 = -(y1);
            			}
            			else {
HXLINE( 236)				if ((hash == 14)) {
HXLINE( 236)					g51 = -(x1);
            				}
            				else {
HXLINE( 236)					g51 = -(z);
            				}
            			}
            		}
HXLINE( 235)		Float g52 = (g5 + g51);
HXLINE( 238)		hash = (this->p_perm->__get(AB) & 15);
HXLINE( 239)		Float g6;
HXDLIN( 239)		if (((hash & 1) == 0)) {
HXLINE( 239)			if ((hash < 8)) {
HXLINE( 239)				g6 = x;
            			}
            			else {
HXLINE( 239)				g6 = y1;
            			}
            		}
            		else {
HXLINE( 239)			if ((hash < 8)) {
HXLINE( 239)				g6 = -(x);
            			}
            			else {
HXLINE( 239)				g6 = -(y1);
            			}
            		}
HXLINE( 240)		Float g61;
HXDLIN( 240)		if (((hash & 2) == 0)) {
HXLINE( 240)			if ((hash < 4)) {
HXLINE( 240)				g61 = y1;
            			}
            			else {
HXLINE( 240)				if ((hash == 12)) {
HXLINE( 240)					g61 = x;
            				}
            				else {
HXLINE( 240)					g61 = z;
            				}
            			}
            		}
            		else {
HXLINE( 240)			if ((hash < 4)) {
HXLINE( 240)				g61 = -(y1);
            			}
            			else {
HXLINE( 240)				if ((hash == 14)) {
HXLINE( 240)					g61 = -(x);
            				}
            				else {
HXLINE( 240)					g61 = -(z);
            				}
            			}
            		}
HXLINE( 239)		Float g62 = (g6 + g61);
HXLINE( 242)		hash = (this->p_perm->__get(BA) & 15);
HXLINE( 243)		Float g7;
HXDLIN( 243)		if (((hash & 1) == 0)) {
HXLINE( 243)			if ((hash < 8)) {
HXLINE( 243)				g7 = x1;
            			}
            			else {
HXLINE( 243)				g7 = y;
            			}
            		}
            		else {
HXLINE( 243)			if ((hash < 8)) {
HXLINE( 243)				g7 = -(x1);
            			}
            			else {
HXLINE( 243)				g7 = -(y);
            			}
            		}
HXLINE( 244)		Float g71;
HXDLIN( 244)		if (((hash & 2) == 0)) {
HXLINE( 244)			if ((hash < 4)) {
HXLINE( 244)				g71 = y;
            			}
            			else {
HXLINE( 244)				if ((hash == 12)) {
HXLINE( 244)					g71 = x1;
            				}
            				else {
HXLINE( 244)					g71 = z;
            				}
            			}
            		}
            		else {
HXLINE( 244)			if ((hash < 4)) {
HXLINE( 244)				g71 = -(y);
            			}
            			else {
HXLINE( 244)				if ((hash == 14)) {
HXLINE( 244)					g71 = -(x1);
            				}
            				else {
HXLINE( 244)					g71 = -(z);
            				}
            			}
            		}
HXLINE( 243)		Float g72 = (g7 + g71);
HXLINE( 246)		hash = (this->p_perm->__get(AA) & 15);
HXLINE( 247)		Float g8;
HXDLIN( 247)		if (((hash & 1) == 0)) {
HXLINE( 247)			if ((hash < 8)) {
HXLINE( 247)				g8 = x;
            			}
            			else {
HXLINE( 247)				g8 = y;
            			}
            		}
            		else {
HXLINE( 247)			if ((hash < 8)) {
HXLINE( 247)				g8 = -(x);
            			}
            			else {
HXLINE( 247)				g8 = -(y);
            			}
            		}
HXLINE( 248)		Float g81;
HXDLIN( 248)		if (((hash & 2) == 0)) {
HXLINE( 248)			if ((hash < 4)) {
HXLINE( 248)				g81 = y;
            			}
            			else {
HXLINE( 248)				if ((hash == 12)) {
HXLINE( 248)					g81 = x;
            				}
            				else {
HXLINE( 248)					g81 = z;
            				}
            			}
            		}
            		else {
HXLINE( 248)			if ((hash < 4)) {
HXLINE( 248)				g81 = -(y);
            			}
            			else {
HXLINE( 248)				if ((hash == 14)) {
HXLINE( 248)					g81 = -(x);
            				}
            				else {
HXLINE( 248)					g81 = -(z);
            				}
            			}
            		}
HXLINE( 247)		Float g82 = (g8 + g81);
HXLINE( 250)		g22 = (g22 + (u * (g12 - g22)));
HXLINE( 251)		g42 = (g42 + (u * (g32 - g42)));
HXLINE( 252)		g62 = (g62 + (u * (g52 - g62)));
HXLINE( 253)		g82 = (g82 + (u * (g72 - g82)));
HXLINE( 255)		g42 = (g42 + (v * (g22 - g42)));
HXLINE( 256)		g82 = (g82 + (v * (g62 - g82)));
HXLINE( 258)		return (g82 + (w * (g42 - g82)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(PerlinNoise_obj,noise,return )

void PerlinNoise_obj::setSeed(int seed){
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_262_setSeed)
HXLINE( 263)		seed = ::Std_obj::_hx_int(::hx::Mod((( (Float)(seed) ) * ((Float)16807.0)),(int)2147483647));
HXDLIN( 263)		this->x_offset = ( (Float)(seed) );
HXLINE( 264)		seed = ::Std_obj::_hx_int(::hx::Mod((( (Float)(seed) ) * ((Float)16807.0)),(int)2147483647));
HXDLIN( 264)		this->y_offset = ( (Float)(seed) );
HXLINE( 265)		seed = ::Std_obj::_hx_int(::hx::Mod((( (Float)(seed) ) * ((Float)16807.0)),(int)2147483647));
HXDLIN( 265)		this->z_offset = ( (Float)(seed) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,setSeed,(void))

::Array< int > PerlinNoise_obj::P;


::hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__new(int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold) {
	::hx::ObjectPtr< PerlinNoise_obj > __this = new PerlinNoise_obj();
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

::hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__alloc(::hx::Ctx *_hx_ctx,int seed,int octaves,int channels,bool grayScale,Float falloff,::hx::Null< bool >  __o_stitch,::hx::Null< Float >  __o_stitch_threshold) {
	PerlinNoise_obj *__this = (PerlinNoise_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PerlinNoise_obj), true, "openfl.display._internal.PerlinNoise"));
	*(void **)__this = PerlinNoise_obj::_hx_vtable;
	__this->__construct(seed,octaves,channels,grayScale,falloff,__o_stitch,__o_stitch_threshold);
	return __this;
}

PerlinNoise_obj::PerlinNoise_obj()
{
}

void PerlinNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinNoise);
	HX_MARK_MEMBER_NAME(p_perm,"p_perm");
	HX_MARK_MEMBER_NAME(x_offset,"x_offset");
	HX_MARK_MEMBER_NAME(y_offset,"y_offset");
	HX_MARK_MEMBER_NAME(z_offset,"z_offset");
	HX_MARK_MEMBER_NAME(base_factor,"base_factor");
	 ::openfl::display::_internal::AbstractNoise_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PerlinNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p_perm,"p_perm");
	HX_VISIT_MEMBER_NAME(x_offset,"x_offset");
	HX_VISIT_MEMBER_NAME(y_offset,"y_offset");
	HX_VISIT_MEMBER_NAME(z_offset,"z_offset");
	HX_VISIT_MEMBER_NAME(base_factor,"base_factor");
	 ::openfl::display::_internal::AbstractNoise_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PerlinNoise_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"noise") ) { return ::hx::Val( noise_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"p_perm") ) { return ::hx::Val( p_perm ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setSeed") ) { return ::hx::Val( setSeed_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"x_offset") ) { return ::hx::Val( x_offset ); }
		if (HX_FIELD_EQ(inName,"y_offset") ) { return ::hx::Val( y_offset ); }
		if (HX_FIELD_EQ(inName,"z_offset") ) { return ::hx::Val( z_offset ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_factor") ) { return ::hx::Val( base_factor ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PerlinNoise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { outValue = ( P ); return true; }
	}
	return false;
}

::hx::Val PerlinNoise_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"p_perm") ) { p_perm=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"x_offset") ) { x_offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y_offset") ) { y_offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z_offset") ) { z_offset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"base_factor") ) { base_factor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PerlinNoise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void PerlinNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("p_perm",5f,72,5e,c5));
	outFields->push(HX_("x_offset",ba,27,5c,9e));
	outFields->push(HX_("y_offset",d9,99,8e,d7));
	outFields->push(HX_("z_offset",f8,0b,c1,10));
	outFields->push(HX_("base_factor",7d,56,3a,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PerlinNoise_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PerlinNoise_obj,p_perm),HX_("p_perm",5f,72,5e,c5)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,x_offset),HX_("x_offset",ba,27,5c,9e)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,y_offset),HX_("y_offset",d9,99,8e,d7)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,z_offset),HX_("z_offset",f8,0b,c1,10)},
	{::hx::fsFloat,(int)offsetof(PerlinNoise_obj,base_factor),HX_("base_factor",7d,56,3a,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PerlinNoise_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &PerlinNoise_obj::P,HX_("P",50,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PerlinNoise_obj_sMemberFields[] = {
	HX_("p_perm",5f,72,5e,c5),
	HX_("x_offset",ba,27,5c,9e),
	HX_("y_offset",d9,99,8e,d7),
	HX_("z_offset",f8,0b,c1,10),
	HX_("base_factor",7d,56,3a,d7),
	HX_("fill",83,ce,bb,43),
	HX_("noise",9a,8f,c2,9f),
	HX_("setSeed",33,c6,d4,11),
	::String(null()) };

static void PerlinNoise_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PerlinNoise_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#endif

::hx::Class PerlinNoise_obj::__mClass;

static ::String PerlinNoise_obj_sStaticFields[] = {
	HX_("P",50,00,00,00),
	::String(null())
};

void PerlinNoise_obj::__register()
{
	PerlinNoise_obj _hx_dummy;
	PerlinNoise_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.PerlinNoise",ea,ce,4a,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PerlinNoise_obj::__GetStatic;
	__mClass->mSetStaticField = &PerlinNoise_obj::__SetStatic;
	__mClass->mMarkFunc = PerlinNoise_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PerlinNoise_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PerlinNoise_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PerlinNoise_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PerlinNoise_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PerlinNoise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PerlinNoise_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PerlinNoise_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_22_boot)
HXDLIN(  22)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("P",50,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:ConstantName",20,38,cc,f4))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ac11d622634610f_25_boot)
HXDLIN(  25)		P = ::Array_obj< int >::fromData( _hx_array_data_054aceea_10,512);
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
