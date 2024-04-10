#ifndef INCLUDED_away3d_entities_Mesh
#define INCLUDED_away3d_entities_Mesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,Geometry)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS2(away3d,events,GeometryEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES Mesh_obj : public  ::away3d::entities::Entity_obj
{
	public:
		typedef  ::away3d::entities::Entity_obj super;
		typedef Mesh_obj OBJ_;
		Mesh_obj();

	public:
		enum { _hx_ClassId = 0x0806710d };

		void __construct( ::away3d::core::base::Geometry geometry, ::away3d::materials::MaterialBase material);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.entities.Mesh")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.entities.Mesh"); }
		static ::hx::ObjectPtr< Mesh_obj > __new( ::away3d::core::base::Geometry geometry, ::away3d::materials::MaterialBase material);
		static ::hx::ObjectPtr< Mesh_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::core::base::Geometry geometry, ::away3d::materials::MaterialBase material);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mesh_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Mesh",0d,76,32,33); }

		 ::openfl::_Vector::ObjectVector _subMeshes;
		 ::away3d::core::base::Geometry _geometry;
		 ::away3d::materials::MaterialBase _material;
		::Dynamic _animator;
		bool _castsShadows;
		bool _shareAnimationGeometry;
		void bakeTransformations();
		::Dynamic bakeTransformations_dyn();

		::String get_assetType();

		void onGeometryBoundsInvalid( ::away3d::events::GeometryEvent event);
		::Dynamic onGeometryBoundsInvalid_dyn();

		bool get_castsShadows();
		::Dynamic get_castsShadows_dyn();

		bool set_castsShadows(bool value);
		::Dynamic set_castsShadows_dyn();

		::Dynamic get_animator();
		::Dynamic get_animator_dyn();

		::Dynamic set_animator(::Dynamic value);
		::Dynamic set_animator_dyn();

		 ::away3d::core::base::Geometry get_geometry();
		::Dynamic get_geometry_dyn();

		 ::away3d::core::base::Geometry set_geometry( ::away3d::core::base::Geometry value);
		::Dynamic set_geometry_dyn();

		 ::away3d::materials::MaterialBase get_material();
		::Dynamic get_material_dyn();

		 ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		::Dynamic set_material_dyn();

		 ::openfl::_Vector::ObjectVector get_subMeshes();
		::Dynamic get_subMeshes_dyn();

		bool get_shareAnimationGeometry();
		::Dynamic get_shareAnimationGeometry_dyn();

		bool set_shareAnimationGeometry(bool value);
		::Dynamic set_shareAnimationGeometry_dyn();

		void clearAnimationGeometry();
		::Dynamic clearAnimationGeometry_dyn();

		void dispose();

		void disposeWithAnimatorAndChildren();
		::Dynamic disposeWithAnimatorAndChildren_dyn();

		 ::away3d::core::base::Object3D clone();

		void updateBounds();

		 ::away3d::core::partition::EntityNode createEntityPartitionNode();

		void onSubGeometryAdded( ::away3d::events::GeometryEvent event);
		::Dynamic onSubGeometryAdded_dyn();

		void onSubGeometryRemoved( ::away3d::events::GeometryEvent event);
		::Dynamic onSubGeometryRemoved_dyn();

		void addSubMesh(::Dynamic subGeometry);
		::Dynamic addSubMesh_dyn();

		 ::away3d::core::base::SubMesh getSubMeshForSubGeometry(::Dynamic subGeometry);
		::Dynamic getSubMeshForSubGeometry_dyn();

		bool collidesBefore(Float shortestCollisionDistance,bool findClosest);

};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_Mesh */ 
