#ifndef INCLUDED_away3d_animators_data_AnimationRegisterCache
#define INCLUDED_away3d_animators_data_AnimationRegisterCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_compilation_ShaderRegisterCache
#include <away3d/materials/compilation/ShaderRegisterCache.h>
#endif
HX_DECLARE_CLASS3(away3d,animators,data,AnimationRegisterCache)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace animators{
namespace data{


class HXCPP_CLASS_ATTRIBUTES AnimationRegisterCache_obj : public  ::away3d::materials::compilation::ShaderRegisterCache_obj
{
	public:
		typedef  ::away3d::materials::compilation::ShaderRegisterCache_obj super;
		typedef AnimationRegisterCache_obj OBJ_;
		AnimationRegisterCache_obj();

	public:
		enum { _hx_ClassId = 0x3dc78b2e };

		void __construct(::String profile);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.animators.data.AnimationRegisterCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.animators.data.AnimationRegisterCache"); }
		static ::hx::ObjectPtr< AnimationRegisterCache_obj > __new(::String profile);
		static ::hx::ObjectPtr< AnimationRegisterCache_obj > __alloc(::hx::Ctx *_hx_ctx,::String profile);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationRegisterCache_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationRegisterCache",5b,5f,7b,94); }

		 ::away3d::materials::compilation::ShaderRegisterElement positionAttribute;
		 ::away3d::materials::compilation::ShaderRegisterElement uvAttribute;
		 ::away3d::materials::compilation::ShaderRegisterElement positionTarget;
		 ::away3d::materials::compilation::ShaderRegisterElement scaleAndRotateTarget;
		 ::away3d::materials::compilation::ShaderRegisterElement velocityTarget;
		 ::away3d::materials::compilation::ShaderRegisterElement vertexTime;
		 ::away3d::materials::compilation::ShaderRegisterElement vertexLife;
		 ::away3d::materials::compilation::ShaderRegisterElement vertexZeroConst;
		 ::away3d::materials::compilation::ShaderRegisterElement vertexOneConst;
		 ::away3d::materials::compilation::ShaderRegisterElement vertexTwoConst;
		 ::away3d::materials::compilation::ShaderRegisterElement uvTarget;
		 ::away3d::materials::compilation::ShaderRegisterElement colorAddTarget;
		 ::away3d::materials::compilation::ShaderRegisterElement colorMulTarget;
		 ::away3d::materials::compilation::ShaderRegisterElement colorAddVary;
		 ::away3d::materials::compilation::ShaderRegisterElement colorMulVary;
		 ::away3d::materials::compilation::ShaderRegisterElement uvVar;
		 ::openfl::_Vector::ObjectVector rotationRegisters;
		bool needFragmentAnimation;
		bool needUVAnimation;
		 ::openfl::_Vector::ObjectVector sourceRegisters;
		 ::openfl::_Vector::ObjectVector targetRegisters;
		 ::haxe::ds::ObjectMap indexDictionary;
		bool hasUVNode;
		bool needVelocity;
		bool hasBillboard;
		bool hasColorMulNode;
		bool hasColorAddNode;
		void reset();

		void setUVSourceAndTarget(::String UVAttribute,::String UVVaring);
		::Dynamic setUVSourceAndTarget_dyn();

		void setRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex,int registerIndex);
		::Dynamic setRegisterIndex_dyn();

		int getRegisterIndex( ::away3d::animators::nodes::AnimationNodeBase node,int parameterIndex);
		::Dynamic getRegisterIndex_dyn();

		::String getInitCode();
		::Dynamic getInitCode_dyn();

		::String getCombinationCode();
		::Dynamic getCombinationCode_dyn();

		::String initColorRegisters();
		::Dynamic initColorRegisters_dyn();

		::String getColorPassCode();
		::Dynamic getColorPassCode_dyn();

		::String getColorCombinationCode(::String shadedTarget);
		::Dynamic getColorCombinationCode_dyn();

		 ::away3d::materials::compilation::ShaderRegisterElement getRegisterFromString(::String code);
		::Dynamic getRegisterFromString_dyn();

		 ::openfl::_Vector::FloatVector vertexConstantData;
		 ::openfl::_Vector::FloatVector fragmentConstantData;
		int _numVertexConstant;
		int _numFragmentConstant;
		int get_numVertexConstant();
		::Dynamic get_numVertexConstant_dyn();

		int get_numFragmentConstant();
		::Dynamic get_numFragmentConstant_dyn();

		void setDataLength();
		::Dynamic setDataLength_dyn();

		void setVertexConst(int index,::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z,::hx::Null< Float >  w);
		::Dynamic setVertexConst_dyn();

		void setVertexConstFromVector(int index, ::openfl::_Vector::FloatVector data);
		::Dynamic setVertexConstFromVector_dyn();

		void setVertexConstFromMatrix(int index, ::openfl::geom::Matrix3D matrix);
		::Dynamic setVertexConstFromMatrix_dyn();

		void setFragmentConst(int index,::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z,::hx::Null< Float >  w);
		::Dynamic setFragmentConst_dyn();

};

} // end namespace away3d
} // end namespace animators
} // end namespace data

#endif /* INCLUDED_away3d_animators_data_AnimationRegisterCache */ 
