#ifndef INCLUDED_away3d_materials_passes_DistanceMapPass
#define INCLUDED_away3d_materials_passes_DistanceMapPass

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
HX_DECLARE_CLASS3(away3d,materials,passes,DistanceMapPass)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS2(away3d,textures,Texture2DBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace materials{
namespace passes{


class HXCPP_CLASS_ATTRIBUTES DistanceMapPass_obj : public  ::away3d::materials::passes::MaterialPassBase_obj
{
	public:
		typedef  ::away3d::materials::passes::MaterialPassBase_obj super;
		typedef DistanceMapPass_obj OBJ_;
		DistanceMapPass_obj();

	public:
		enum { _hx_ClassId = 0x168f1e90 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.passes.DistanceMapPass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.passes.DistanceMapPass"); }
		static ::hx::ObjectPtr< DistanceMapPass_obj > __new();
		static ::hx::ObjectPtr< DistanceMapPass_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DistanceMapPass_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DistanceMapPass",b8,36,4b,21); }

		 ::openfl::_Vector::FloatVector _fragmentData;
		 ::openfl::_Vector::FloatVector _vertexData;
		Float _alphaThreshold;
		 ::away3d::textures::Texture2DBase _alphaMask;
		Float get_alphaThreshold();
		::Dynamic get_alphaThreshold_dyn();

		Float set_alphaThreshold(Float value);
		::Dynamic set_alphaThreshold_dyn();

		 ::away3d::textures::Texture2DBase get_alphaMask();
		::Dynamic get_alphaMask_dyn();

		 ::away3d::textures::Texture2DBase set_alphaMask( ::away3d::textures::Texture2DBase value);
		::Dynamic set_alphaMask_dyn();

		::String getVertexCode();

		::String getFragmentCode(::String animationCode);

		void render(::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera, ::openfl::geom::Matrix3D viewProjection);

		void activate( ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);

};

} // end namespace away3d
} // end namespace materials
} // end namespace passes

#endif /* INCLUDED_away3d_materials_passes_DistanceMapPass */ 
