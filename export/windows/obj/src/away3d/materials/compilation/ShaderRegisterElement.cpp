#include <hxcpp.h>

#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#include <away3d/materials/compilation/ShaderRegisterElement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7eba7a4d641f32a3_28_new,"away3d.materials.compilation.ShaderRegisterElement","new",0x8e5eb1aa,"away3d.materials.compilation.ShaderRegisterElement.new","away3d/materials/compilation/ShaderRegisterElement.hx",28,0x883a6849)
HX_LOCAL_STACK_FRAME(_hx_pos_7eba7a4d641f32a3_47_toString,"away3d.materials.compilation.ShaderRegisterElement","toString",0x68bd0322,"away3d.materials.compilation.ShaderRegisterElement.toString","away3d/materials/compilation/ShaderRegisterElement.hx",47,0x883a6849)
HX_LOCAL_STACK_FRAME(_hx_pos_7eba7a4d641f32a3_55_get_regName,"away3d.materials.compilation.ShaderRegisterElement","get_regName",0xbdcf4d20,"away3d.materials.compilation.ShaderRegisterElement.get_regName","away3d/materials/compilation/ShaderRegisterElement.hx",55,0x883a6849)
HX_LOCAL_STACK_FRAME(_hx_pos_7eba7a4d641f32a3_63_get_index,"away3d.materials.compilation.ShaderRegisterElement","get_index",0x15dbec33,"away3d.materials.compilation.ShaderRegisterElement.get_index","away3d/materials/compilation/ShaderRegisterElement.hx",63,0x883a6849)
HX_LOCAL_STACK_FRAME(_hx_pos_7eba7a4d641f32a3_17_boot,"away3d.materials.compilation.ShaderRegisterElement","boot",0xfc95c3a8,"away3d.materials.compilation.ShaderRegisterElement.boot","away3d/materials/compilation/ShaderRegisterElement.hx",17,0x883a6849)
static const ::String _hx_array_data_262e54b8_5[] = {
	HX_("x",78,00,00,00),HX_("y",79,00,00,00),HX_("z",7a,00,00,00),HX_("w",77,00,00,00),
};
namespace away3d{
namespace materials{
namespace compilation{

void ShaderRegisterElement_obj::__construct(::String regName,int index,::hx::Null< int >  __o_component){
            		int component = __o_component.Default(-1);
            	HX_STACKFRAME(&_hx_pos_7eba7a4d641f32a3_28_new)
HXLINE(  29)		this->_component = component;
HXLINE(  30)		this->_regName = regName;
HXLINE(  31)		this->_index = index;
HXLINE(  33)		this->_toStr = this->_regName;
HXLINE(  35)		if ((this->_index >= 0)) {
HXLINE(  36)			 ::away3d::materials::compilation::ShaderRegisterElement _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)			_hx_tmp->_toStr = (_hx_tmp->_toStr + this->_index);
            		}
HXLINE(  38)		if ((component > -1)) {
HXLINE(  39)			 ::away3d::materials::compilation::ShaderRegisterElement _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  39)			_hx_tmp->_toStr = (_hx_tmp->_toStr + (HX_(".",2e,00,00,00) + ::away3d::materials::compilation::ShaderRegisterElement_obj::COMPONENTS->__get(component)));
            		}
            	}

Dynamic ShaderRegisterElement_obj::__CreateEmpty() { return new ShaderRegisterElement_obj; }

void *ShaderRegisterElement_obj::_hx_vtable = 0;

Dynamic ShaderRegisterElement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderRegisterElement_obj > _hx_result = new ShaderRegisterElement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ShaderRegisterElement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f2e586e;
}

::String ShaderRegisterElement_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_7eba7a4d641f32a3_47_toString)
HXDLIN(  47)		return this->_toStr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterElement_obj,toString,return )

::String ShaderRegisterElement_obj::get_regName(){
            	HX_STACKFRAME(&_hx_pos_7eba7a4d641f32a3_55_get_regName)
HXDLIN(  55)		return this->_regName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterElement_obj,get_regName,return )

int ShaderRegisterElement_obj::get_index(){
            	HX_STACKFRAME(&_hx_pos_7eba7a4d641f32a3_63_get_index)
HXDLIN(  63)		return this->_index;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderRegisterElement_obj,get_index,return )

::Array< ::String > ShaderRegisterElement_obj::COMPONENTS;


ShaderRegisterElement_obj::ShaderRegisterElement_obj()
{
}

void ShaderRegisterElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderRegisterElement);
	HX_MARK_MEMBER_NAME(_regName,"_regName");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_toStr,"_toStr");
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_END_CLASS();
}

void ShaderRegisterElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_regName,"_regName");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_toStr,"_toStr");
	HX_VISIT_MEMBER_NAME(_component,"_component");
}

::hx::Val ShaderRegisterElement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_index() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { return ::hx::Val( _index ); }
		if (HX_FIELD_EQ(inName,"_toStr") ) { return ::hx::Val( _toStr ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regName") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_regName() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_regName") ) { return ::hx::Val( _regName ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_index") ) { return ::hx::Val( get_index_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_regName") ) { return ::hx::Val( get_regName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShaderRegisterElement_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"COMPONENTS") ) { outValue = ( COMPONENTS ); return true; }
	}
	return false;
}

::hx::Val ShaderRegisterElement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toStr") ) { _toStr=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_regName") ) { _regName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShaderRegisterElement_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"COMPONENTS") ) { COMPONENTS=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void ShaderRegisterElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("regName",bf,b1,b8,68));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("_regName",40,0b,71,a2));
	outFields->push(HX_("_index",53,e2,fb,b9));
	outFields->push(HX_("_toStr",37,a1,00,10));
	outFields->push(HX_("_component",7e,6c,f6,6a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderRegisterElement_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ShaderRegisterElement_obj,_regName),HX_("_regName",40,0b,71,a2)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterElement_obj,_index),HX_("_index",53,e2,fb,b9)},
	{::hx::fsString,(int)offsetof(ShaderRegisterElement_obj,_toStr),HX_("_toStr",37,a1,00,10)},
	{::hx::fsInt,(int)offsetof(ShaderRegisterElement_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ShaderRegisterElement_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ShaderRegisterElement_obj::COMPONENTS,HX_("COMPONENTS",16,29,28,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ShaderRegisterElement_obj_sMemberFields[] = {
	HX_("_regName",40,0b,71,a2),
	HX_("_index",53,e2,fb,b9),
	HX_("_toStr",37,a1,00,10),
	HX_("_component",7e,6c,f6,6a),
	HX_("toString",ac,d0,6e,38),
	HX_("get_regName",d6,11,b3,ee),
	HX_("get_index",69,f7,bd,01),
	::String(null()) };

static void ShaderRegisterElement_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderRegisterElement_obj::COMPONENTS,"COMPONENTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderRegisterElement_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderRegisterElement_obj::COMPONENTS,"COMPONENTS");
};

#endif

::hx::Class ShaderRegisterElement_obj::__mClass;

static ::String ShaderRegisterElement_obj_sStaticFields[] = {
	HX_("COMPONENTS",16,29,28,4c),
	::String(null())
};

void ShaderRegisterElement_obj::__register()
{
	ShaderRegisterElement_obj _hx_dummy;
	ShaderRegisterElement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.materials.compilation.ShaderRegisterElement",b8,54,2e,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderRegisterElement_obj::__GetStatic;
	__mClass->mSetStaticField = &ShaderRegisterElement_obj::__SetStatic;
	__mClass->mMarkFunc = ShaderRegisterElement_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderRegisterElement_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderRegisterElement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderRegisterElement_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderRegisterElement_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderRegisterElement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderRegisterElement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderRegisterElement_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7eba7a4d641f32a3_17_boot)
HXDLIN(  17)		COMPONENTS = ::Array_obj< ::String >::fromData( _hx_array_data_262e54b8_5,4);
            	}
}

} // end namespace away3d
} // end namespace materials
} // end namespace compilation
