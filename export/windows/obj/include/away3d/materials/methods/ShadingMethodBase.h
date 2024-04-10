#ifndef INCLUDED_away3d_materials_methods_ShadingMethodBase
#define INCLUDED_away3d_materials_methods_ShadingMethodBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
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
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterCache)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterData)
HX_DECLARE_CLASS3(away3d,materials,compilation,ShaderRegisterElement)
HX_DECLARE_CLASS3(away3d,materials,methods,MethodVO)
HX_DECLARE_CLASS3(away3d,materials,methods,ShadingMethodBase)
HX_DECLARE_CLASS2(away3d,textures,TextureProxyBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace materials{
namespace methods{


class HXCPP_CLASS_ATTRIBUTES ShadingMethodBase_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef ShadingMethodBase_obj OBJ_;
		ShadingMethodBase_obj();

	public:
		enum { _hx_ClassId = 0x12886923 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.materials.methods.ShadingMethodBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.materials.methods.ShadingMethodBase"); }
		static ::hx::ObjectPtr< ShadingMethodBase_obj > __new();
		static ::hx::ObjectPtr< ShadingMethodBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShadingMethodBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShadingMethodBase",3c,33,2d,96); }

		 ::away3d::materials::compilation::ShaderRegisterData _sharedRegisters;
		 ::openfl::_Vector::ObjectVector _passes;
		virtual void initVO( ::away3d::materials::methods::MethodVO vo);
		::Dynamic initVO_dyn();

		virtual void initConstants( ::away3d::materials::methods::MethodVO vo);
		::Dynamic initConstants_dyn();

		 ::away3d::materials::compilation::ShaderRegisterData get_sharedRegisters();
		::Dynamic get_sharedRegisters_dyn();

		 ::away3d::materials::compilation::ShaderRegisterData set_sharedRegisters( ::away3d::materials::compilation::ShaderRegisterData value);
		::Dynamic set_sharedRegisters_dyn();

		 ::openfl::_Vector::ObjectVector get_passes();
		::Dynamic get_passes_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		 ::away3d::materials::methods::MethodVO createMethodVO();
		::Dynamic createMethodVO_dyn();

		void reset();
		::Dynamic reset_dyn();

		virtual void cleanCompilationData();
		::Dynamic cleanCompilationData_dyn();

		::String getVertexCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterCache regCache);
		::Dynamic getVertexCode_dyn();

		virtual void activate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activate_dyn();

		virtual void setRenderState( ::away3d::materials::methods::MethodVO vo,::Dynamic renderable, ::away3d::core::managers::Stage3DProxy stage3DProxy, ::away3d::cameras::Camera3D camera);
		::Dynamic setRenderState_dyn();

		void deactivate( ::away3d::materials::methods::MethodVO vo, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic deactivate_dyn();

		::String getTex2DSampleCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement targetReg, ::away3d::materials::compilation::ShaderRegisterElement inputReg, ::away3d::textures::TextureProxyBase texture, ::away3d::materials::compilation::ShaderRegisterElement uvReg,::String forceWrap);
		::Dynamic getTex2DSampleCode_dyn();

		::String getTexCubeSampleCode( ::away3d::materials::methods::MethodVO vo, ::away3d::materials::compilation::ShaderRegisterElement targetReg, ::away3d::materials::compilation::ShaderRegisterElement inputReg, ::away3d::textures::TextureProxyBase texture, ::away3d::materials::compilation::ShaderRegisterElement uvReg);
		::Dynamic getTexCubeSampleCode_dyn();

		::String getFormatStringForTexture( ::away3d::textures::TextureProxyBase texture);
		::Dynamic getFormatStringForTexture_dyn();

		void invalidateShaderProgram();
		::Dynamic invalidateShaderProgram_dyn();

		virtual void copyFrom( ::away3d::materials::methods::ShadingMethodBase method);
		::Dynamic copyFrom_dyn();

		 ::Dynamic getSmoothingFilter(bool smooth, ::Dynamic anisotropy);
		::Dynamic getSmoothingFilter_dyn();

};

} // end namespace away3d
} // end namespace materials
} // end namespace methods

#endif /* INCLUDED_away3d_materials_methods_ShadingMethodBase */ 
