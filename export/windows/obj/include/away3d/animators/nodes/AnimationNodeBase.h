#ifndef INCLUDED_away3d_animators_nodes_AnimationNodeBase
#define INCLUDED_away3d_animators_nodes_AnimationNodeBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,animators,states,IAnimationState)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace animators{
namespace nodes{


class HXCPP_CLASS_ATTRIBUTES AnimationNodeBase_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef AnimationNodeBase_obj OBJ_;
		AnimationNodeBase_obj();

	public:
		enum { _hx_ClassId = 0x4b755133 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.animators.nodes.AnimationNodeBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.animators.nodes.AnimationNodeBase"); }
		static ::hx::ObjectPtr< AnimationNodeBase_obj > __new();
		static ::hx::ObjectPtr< AnimationNodeBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationNodeBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AnimationNodeBase",37,56,c7,b1); }

		 ::Dynamic _stateConstructor;
		Dynamic _stateConstructor_dyn() { return _stateConstructor;}
		 ::Dynamic get_stateConstructor();
		::Dynamic get_stateConstructor_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		::String get_assetType();
		::Dynamic get_assetType_dyn();

};

} // end namespace away3d
} // end namespace animators
} // end namespace nodes

#endif /* INCLUDED_away3d_animators_nodes_AnimationNodeBase */ 
