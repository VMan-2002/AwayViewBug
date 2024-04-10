#include <hxcpp.h>

#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_materials_MaterialBase
#include <away3d/materials/MaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_SinglePassMaterialBase
#include <away3d/materials/SinglePassMaterialBase.h>
#endif
#ifndef INCLUDED_away3d_materials_TextureMaterial
#include <away3d/materials/TextureMaterial.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicAmbientMethod
#include <away3d/materials/methods/BasicAmbientMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_BasicDiffuseMethod
#include <away3d/materials/methods/BasicDiffuseMethod.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_LightingMethodBase
#include <away3d/materials/methods/LightingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#include <away3d/materials/methods/ShadingMethodBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_CompiledPass
#include <away3d/materials/passes/CompiledPass.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
#ifndef INCLUDED_away3d_materials_passes_SuperShaderPass
#include <away3d/materials/passes/SuperShaderPass.h>
#endif
#ifndef INCLUDED_away3d_textures_Texture2DBase
#include <away3d/textures/Texture2DBase.h>
#endif
#ifndef INCLUDED_away3d_textures_TextureProxyBase
#include <away3d/textures/TextureProxyBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_00866ffde50d679f_29_new,"away3d.materials.TextureMaterial","new",0x8f8f2403,"away3d.materials.TextureMaterial.new","away3d/materials/TextureMaterial.hx",29,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_45_get_animateUVs,"away3d.materials.TextureMaterial","get_animateUVs",0xf86b6c77,"away3d.materials.TextureMaterial.get_animateUVs","away3d/materials/TextureMaterial.hx",45,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_49_set_animateUVs,"away3d.materials.TextureMaterial","set_animateUVs",0x188b54eb,"away3d.materials.TextureMaterial.set_animateUVs","away3d/materials/TextureMaterial.hx",49,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_61_get_animateUVs2,"away3d.materials.TextureMaterial","get_animateUVs2",0x65937bdb,"away3d.materials.TextureMaterial.get_animateUVs2","away3d/materials/TextureMaterial.hx",61,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_65_set_animateUVs2,"away3d.materials.TextureMaterial","set_animateUVs2",0x615ef8e7,"away3d.materials.TextureMaterial.set_animateUVs2","away3d/materials/TextureMaterial.hx",65,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_75_get_alpha,"away3d.materials.TextureMaterial","get_alpha",0x82663398,"away3d.materials.TextureMaterial.get_alpha","away3d/materials/TextureMaterial.hx",75,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_79_set_alpha,"away3d.materials.TextureMaterial","set_alpha",0x65b71fa4,"away3d.materials.TextureMaterial.set_alpha","away3d/materials/TextureMaterial.hx",79,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_98_get_texture,"away3d.materials.TextureMaterial","get_texture",0x7bd75795,"away3d.materials.TextureMaterial.get_texture","away3d/materials/TextureMaterial.hx",98,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_102_set_texture,"away3d.materials.TextureMaterial","set_texture",0x86445ea1,"away3d.materials.TextureMaterial.set_texture","away3d/materials/TextureMaterial.hx",102,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_112_get_ambientTexture,"away3d.materials.TextureMaterial","get_ambientTexture",0x2d0c2829,"away3d.materials.TextureMaterial.get_ambientTexture","away3d/materials/TextureMaterial.hx",112,0xd824f08f)
HX_LOCAL_STACK_FRAME(_hx_pos_00866ffde50d679f_116_set_ambientTexture,"away3d.materials.TextureMaterial","set_ambientTexture",0x09bb5a9d,"away3d.materials.TextureMaterial.set_ambientTexture","away3d/materials/TextureMaterial.hx",116,0xd824f08f)
namespace away3d{
namespace materials{

void TextureMaterial_obj::__construct( ::away3d::textures::Texture2DBase texture,::hx::Null< bool >  __o_smooth,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_mipmap, ::Dynamic __o_anisotropy){
            		bool smooth = __o_smooth.Default(true);
            		bool repeat = __o_repeat.Default(false);
            		bool mipmap = __o_mipmap.Default(true);
            		 ::Dynamic anisotropy = __o_anisotropy;
            		if (::hx::IsNull(__o_anisotropy)) anisotropy = 1;
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_29_new)
HXLINE(  30)		super::__construct();
HXLINE(  31)		this->set_texture(texture);
HXLINE(  32)		this->set_smooth(smooth);
HXLINE(  33)		this->set_repeat(repeat);
HXLINE(  34)		this->set_mipmap(mipmap);
HXLINE(  35)		this->set_anisotropy(anisotropy);
            	}

Dynamic TextureMaterial_obj::__CreateEmpty() { return new TextureMaterial_obj; }

void *TextureMaterial_obj::_hx_vtable = 0;

Dynamic TextureMaterial_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextureMaterial_obj > _hx_result = new TextureMaterial_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TextureMaterial_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37f46043) {
		if (inClassId<=(int)0x208a1015) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x208a1015;
			}
		} else {
			return inClassId==(int)0x37f46043;
		}
	} else {
		return inClassId==(int)0x488e125e || inClassId==(int)0x7e319f05;
	}
}

bool TextureMaterial_obj::get_animateUVs(){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_45_get_animateUVs)
HXDLIN(  45)		return this->_screenPass->get_animateUVs();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_animateUVs,return )

bool TextureMaterial_obj::set_animateUVs(bool value){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_49_set_animateUVs)
HXLINE(  50)		this->_screenPass->set_animateUVs(value);
HXLINE(  51)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_animateUVs,return )

bool TextureMaterial_obj::get_animateUVs2(){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_61_get_animateUVs2)
HXDLIN(  61)		return this->_screenPass->get_animateUVs2();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_animateUVs2,return )

bool TextureMaterial_obj::set_animateUVs2(bool value){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_65_set_animateUVs2)
HXLINE(  66)		this->_screenPass->set_animateUVs2(value);
HXLINE(  67)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_animateUVs2,return )

Float TextureMaterial_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_75_get_alpha)
HXDLIN(  75)		if (::hx::IsNotNull( this->_screenPass->get_colorTransform() )) {
HXDLIN(  75)			return this->_screenPass->get_colorTransform()->alphaMultiplier;
            		}
            		else {
HXDLIN(  75)			return ( (Float)(1) );
            		}
HXDLIN(  75)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_alpha,return )

Float TextureMaterial_obj::set_alpha(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_00866ffde50d679f_79_set_alpha)
HXLINE(  80)		if ((value > 1)) {
HXLINE(  81)			value = ( (Float)(1) );
            		}
            		else {
HXLINE(  82)			if ((value < 0)) {
HXLINE(  83)				value = ( (Float)(0) );
            			}
            		}
HXLINE(  85)		if (::hx::IsNull( this->get_colorTransform() )) {
HXLINE(  86)			this->set_colorTransform( ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null()));
            		}
HXLINE(  87)		this->get_colorTransform()->alphaMultiplier = value;
HXLINE(  88)		 ::away3d::materials::passes::SuperShaderPass _hx_tmp = this->_screenPass;
HXDLIN(  88)		_hx_tmp->set_preserveAlpha(this->get_requiresBlending());
HXLINE(  89)		 ::away3d::materials::passes::SuperShaderPass _hx_tmp1 = this->_screenPass;
HXDLIN(  89)		 ::Dynamic _hx_tmp2;
HXDLIN(  89)		bool _hx_tmp3;
HXDLIN(  89)		if (::hx::IsEq( this->get_blendMode(),10 )) {
HXLINE(  89)			_hx_tmp3 = this->get_requiresBlending();
            		}
            		else {
HXLINE(  89)			_hx_tmp3 = false;
            		}
HXDLIN(  89)		if (_hx_tmp3) {
HXLINE(  89)			_hx_tmp2 = 7;
            		}
            		else {
HXLINE(  89)			_hx_tmp2 = this->get_blendMode();
            		}
HXDLIN(  89)		_hx_tmp1->setBlendMode(_hx_tmp2);
HXLINE(  90)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_alpha,return )

 ::away3d::textures::Texture2DBase TextureMaterial_obj::get_texture(){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_98_get_texture)
HXDLIN(  98)		return this->_screenPass->get_diffuseMethod()->get_texture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_texture,return )

 ::away3d::textures::Texture2DBase TextureMaterial_obj::set_texture( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_102_set_texture)
HXLINE( 103)		this->_screenPass->get_diffuseMethod()->set_texture(value);
HXLINE( 104)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_texture,return )

 ::away3d::textures::Texture2DBase TextureMaterial_obj::get_ambientTexture(){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_112_get_ambientTexture)
HXDLIN( 112)		return this->_screenPass->get_ambientMethod()->get_texture();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureMaterial_obj,get_ambientTexture,return )

 ::away3d::textures::Texture2DBase TextureMaterial_obj::set_ambientTexture( ::away3d::textures::Texture2DBase value){
            	HX_STACKFRAME(&_hx_pos_00866ffde50d679f_116_set_ambientTexture)
HXLINE( 117)		this->_screenPass->get_ambientMethod()->set_texture(value);
HXLINE( 118)		this->_screenPass->get_diffuseMethod()->set_useAmbientTexture(::hx::IsNotNull( value ));
HXLINE( 119)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureMaterial_obj,set_ambientTexture,return )


::hx::ObjectPtr< TextureMaterial_obj > TextureMaterial_obj::__new( ::away3d::textures::Texture2DBase texture,::hx::Null< bool >  __o_smooth,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_mipmap, ::Dynamic __o_anisotropy) {
	::hx::ObjectPtr< TextureMaterial_obj > __this = new TextureMaterial_obj();
	__this->__construct(texture,__o_smooth,__o_repeat,__o_mipmap,__o_anisotropy);
	return __this;
}

::hx::ObjectPtr< TextureMaterial_obj > TextureMaterial_obj::__alloc(::hx::Ctx *_hx_ctx, ::away3d::textures::Texture2DBase texture,::hx::Null< bool >  __o_smooth,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_mipmap, ::Dynamic __o_anisotropy) {
	TextureMaterial_obj *__this = (TextureMaterial_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextureMaterial_obj), true, "away3d.materials.TextureMaterial"));
	*(void **)__this = TextureMaterial_obj::_hx_vtable;
	__this->__construct(texture,__o_smooth,__o_repeat,__o_mipmap,__o_anisotropy);
	return __this;
}

TextureMaterial_obj::TextureMaterial_obj()
{
}

::hx::Val TextureMaterial_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alpha() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_texture() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return ::hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animateUVs() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animateUVs2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animateUVs2() ); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return ::hx::Val( get_texture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ambientTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ambientTexture() ); }
		if (HX_FIELD_EQ(inName,"get_animateUVs") ) { return ::hx::Val( get_animateUVs_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animateUVs") ) { return ::hx::Val( set_animateUVs_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_animateUVs2") ) { return ::hx::Val( get_animateUVs2_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_animateUVs2") ) { return ::hx::Val( set_animateUVs2_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_ambientTexture") ) { return ::hx::Val( get_ambientTexture_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ambientTexture") ) { return ::hx::Val( set_ambientTexture_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextureMaterial_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animateUVs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animateUVs(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animateUVs2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_animateUVs2(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ambientTexture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ambientTexture(inValue.Cast<  ::away3d::textures::Texture2DBase >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureMaterial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animateUVs",f1,8a,63,80));
	outFields->push(HX_("animateUVs2",21,08,b6,d6));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("ambientTexture",a3,0b,4e,55));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextureMaterial_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextureMaterial_obj_sStaticStorageInfo = 0;
#endif

static ::String TextureMaterial_obj_sMemberFields[] = {
	HX_("get_animateUVs",3a,13,59,f6),
	HX_("set_animateUVs",ae,fb,78,16),
	HX_("get_animateUVs2",b8,bf,97,97),
	HX_("set_animateUVs2",c4,3c,63,93),
	HX_("get_alpha",b5,03,40,65),
	HX_("set_alpha",c1,ef,90,48),
	HX_("get_texture",f2,28,db,24),
	HX_("set_texture",fe,2f,48,2f),
	HX_("get_ambientTexture",6c,ec,e7,f0),
	HX_("set_ambientTexture",e0,1e,97,cd),
	::String(null()) };

::hx::Class TextureMaterial_obj::__mClass;

void TextureMaterial_obj::__register()
{
	TextureMaterial_obj _hx_dummy;
	TextureMaterial_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.TextureMaterial",91,66,8e,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextureMaterial_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextureMaterial_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureMaterial_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureMaterial_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace materials
