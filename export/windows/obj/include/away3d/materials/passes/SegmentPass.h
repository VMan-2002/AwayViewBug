#ifndef INCLUDED_away3d_materials_passes_SegmentPass
#define INCLUDED_away3d_materials_passes_SegmentPass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_materials_passes_MaterialPassBase
#include <away3d/materials/passes/MaterialPassBase.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS3(away3d,materials,passes,SegmentPass)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES SegmentPass_obj : public  ::away3d::materials::passes::MaterialPassBase_obj
{
	public:
		typedef  ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef SegmentPass_obj OBJ_;
		SegmentPass_obj();

	public:
		enum { _hx_ClassId = 0x0a9dd578 };

		void __construct(Float thickness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.passes.SegmentPass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.passes.SegmentPass"); }
		static ::hx::ObjectPtr< SegmentPass_obj > __new(Float thickness);
		static ::hx::ObjectPtr< SegmentPass_obj > __alloc(::hx::Ctx *_hx_ctx,Float thickness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SegmentPass_obj();

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
		::String __ToString() const { return HX_("SegmentPass",04,ce,f9,41); }

		static void __boot();
		static  ::openfl::_Vector::FloatVector ONE_VECTOR;
		static  ::openfl::_Vector::FloatVector FRONT_VECTOR;
		 ::openfl::_Vector::FloatVector _constants;
		 ::openfl::geom::Matrix3D _calcMatrix;
		Float _thickness;
		::String getVertexCode();

		::String getFragmentCode(::String animationCode);

		void render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection);

		void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);

		void deactivate( ::away3d::core::managers::Stage3DProxy stage3DProxy);

};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_SegmentPass */ 
