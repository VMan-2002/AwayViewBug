#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterElement
#define INCLUDED_away3d_materials_compilation_ShaderRegisterElement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7eba7a4d641f32a3_28_new)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)

namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES ShaderRegisterElement_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderRegisterElement_obj OBJ_;
		ShaderRegisterElement_obj();

	public:
		enum { _hx_ClassId = 0x6f2e586e };

		void __construct(::String regName,int index,::hx::Null< int >  __o_component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.compilation.ShaderRegisterElement")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.compilation.ShaderRegisterElement"); }

		inline static ::hx::ObjectPtr< ShaderRegisterElement_obj > __new(::String regName,int index,::hx::Null< int >  __o_component) {
			::hx::ObjectPtr< ShaderRegisterElement_obj > __this = new ShaderRegisterElement_obj();
			__this->__construct(regName,index,__o_component);
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderRegisterElement_obj > __alloc(::hx::Ctx *_hx_ctx,::String regName,int index,::hx::Null< int >  __o_component) {
			ShaderRegisterElement_obj *__this = (ShaderRegisterElement_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderRegisterElement_obj), true, "away3d.materials.compilation.ShaderRegisterElement"));
			*(void **)__this = ShaderRegisterElement_obj::_hx_vtable;
{
            		int component = __o_component.Default(-1);
            	HX_STACKFRAME(&_hx_pos_7eba7a4d641f32a3_28_new)
HXLINE(  29)		( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) )->_component = component;
HXLINE(  30)		( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) )->_regName = regName;
HXLINE(  31)		( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) )->_index = index;
HXLINE(  33)		( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) )->_toStr = ( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) )->_regName;
HXLINE(  35)		if ((( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) )->_index >= 0)) {
HXLINE(  36)			 ::away3d::materials::compilation::ShaderRegisterElement _hx_tmp = ( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) );
HXDLIN(  36)			_hx_tmp->_toStr = (_hx_tmp->_toStr + ( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) )->_index);
            		}
HXLINE(  38)		if ((component > -1)) {
HXLINE(  39)			 ::away3d::materials::compilation::ShaderRegisterElement _hx_tmp = ( ( ::away3d::materials::compilation::ShaderRegisterElement)(__this) );
HXDLIN(  39)			_hx_tmp->_toStr = (_hx_tmp->_toStr + (HX_(".",2e,00,00,00) + ::away3d::materials::compilation::ShaderRegisterElement_obj::COMPONENTS->__get(component)));
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderRegisterElement_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderRegisterElement",d4,5c,0c,44); }

		static void __boot();
		static ::Array< ::String > COMPONENTS;
		::String _regName;
		int _index;
		::String _toStr;
		int _component;
		virtual ::String toString();
		::Dynamic toString_dyn();

		::String get_regName();
		::Dynamic get_regName_dyn();

		int get_index();
		::Dynamic get_index_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_ShaderRegisterElement */ 
