#ifndef INCLUDED_away3d_materials_compilation_RegisterPool
#define INCLUDED_away3d_materials_compilation_RegisterPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,materials,compilation,RegisterPool)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)

namespace away3d{
namespace materials{
namespace compilation{


class HXCPP_CLASS_ATTRIBUTES RegisterPool_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RegisterPool_obj OBJ_;
		RegisterPool_obj();

	public:
		enum { _hx_ClassId = 0x6a480f15 };

		void __construct(::String regName,int regCount,::hx::Null< bool >  __o_persistent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.compilation.RegisterPool")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.compilation.RegisterPool"); }
		static ::hx::ObjectPtr< RegisterPool_obj > __new(::String regName,int regCount,::hx::Null< bool >  __o_persistent);
		static ::hx::ObjectPtr< RegisterPool_obj > __alloc(::hx::Ctx *_hx_ctx,::String regName,int regCount,::hx::Null< bool >  __o_persistent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RegisterPool_obj();

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
		::String __ToString() const { return HX_("RegisterPool",ff,0c,5e,8e); }

		static void __boot();
		static  ::haxe::ds::StringMap _regPool;
		static  ::haxe::ds::StringMap _regCompsPool;
		static ::String _initPool(::String regName,int regCount);
		static ::Dynamic _initPool_dyn();

		 ::openfl::_Vector::ObjectVector _vectorRegisters;
		::cpp::VirtualArray _registerComponents;
		::String _regName;
		 ::openfl::_Vector::ObjectVector _usedSingleCount;
		 ::openfl::_Vector::IntVector _usedVectorCount;
		int _regCount;
		bool _persistent;
		 ::away3d::materials::compilation::ShaderRegisterElement requestFreeVectorReg();
		::Dynamic requestFreeVectorReg_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement requestFreeRegComponent();
		::Dynamic requestFreeRegComponent_dyn();

		void addUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register,int usageCount);
		::Dynamic addUsage_dyn();

		void removeUsage( ::away3d::materials::compilation::ShaderRegisterElement _hx_register);
		::Dynamic removeUsage_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		bool hasRegisteredRegs();
		::Dynamic hasRegisteredRegs_dyn();

		void initRegisters(::String regName,int regCount);
		::Dynamic initRegisters_dyn();

		bool isRegisterUsed(int index);
		::Dynamic isRegisterUsed_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace compilation

#endif /* INCLUDED_away3d_materials_compilation_RegisterPool */ 
