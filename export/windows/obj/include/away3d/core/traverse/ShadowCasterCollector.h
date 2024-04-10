#ifndef INCLUDED_away3d_core_traverse_ShadowCasterCollector
#define INCLUDED_away3d_core_traverse_ShadowCasterCollector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_traverse_EntityCollector
#include <away3d/core/traverse/EntityCollector.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS3(away3d,core,traverse,ShadowCasterCollector)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS2(away3d,lights,LightProbe)
HX_DECLARE_CLASS2(away3d,lights,PointLight)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace traverse{


class HXCPP_CLASS_ATTRIBUTES ShadowCasterCollector_obj : public  ::away3d::core::traverse::EntityCollector_obj
{
	public:
		typedef  ::away3d::core::traverse::EntityCollector_obj super;
		typedef ShadowCasterCollector_obj OBJ_;
		ShadowCasterCollector_obj();

	public:
		enum { _hx_ClassId = 0x5b803811 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.traverse.ShadowCasterCollector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.traverse.ShadowCasterCollector"); }
		static ::hx::ObjectPtr< ShadowCasterCollector_obj > __new();
		static ::hx::ObjectPtr< ShadowCasterCollector_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShadowCasterCollector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShadowCasterCollector",a1,8e,1d,ab); }

		void applyRenderable(::Dynamic renderable);

		void applyUnknownLight( ::away3d::lights::LightBase light);

		void applyDirectionalLight( ::away3d::lights::DirectionalLight light);

		void applyPointLight( ::away3d::lights::PointLight light);

		void applyLightProbe( ::away3d::lights::LightProbe light);

		void applySkyBox(::Dynamic renderable);

};

} // end namespace away3d
} // end namespace core
} // end namespace traverse

#endif /* INCLUDED_away3d_core_traverse_ShadowCasterCollector */ 
