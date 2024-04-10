#ifndef INCLUDED_away3d_core_base_SubMesh
#define INCLUDED_away3d_core_base_SubMesh

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS3(away3d,animators,data,AnimationSubGeometry)
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES SubMesh_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SubMesh_obj OBJ_;
		SubMesh_obj();

	public:
		enum { _hx_ClassId = 0x1a1b2eba };

		void __construct(::Dynamic subGeometry, ::away3d::entities::Mesh parentMesh, ::away3d::materials::MaterialBase material);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.base.SubMesh")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.base.SubMesh"); }
		static ::hx::ObjectPtr< SubMesh_obj > __new(::Dynamic subGeometry, ::away3d::entities::Mesh parentMesh, ::away3d::materials::MaterialBase material);
		static ::hx::ObjectPtr< SubMesh_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic subGeometry, ::away3d::entities::Mesh parentMesh, ::away3d::materials::MaterialBase material);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SubMesh_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SubMesh",6d,07,ae,e3); }

		 ::away3d::materials::MaterialBase _material;
		 ::away3d::entities::Mesh _parentMesh;
		::Dynamic _subGeometry;
		int _index;
		 ::openfl::geom::Matrix _uvTransform;
		bool _uvTransformDirty;
		Float _uvRotation;
		Float _scaleU;
		Float _scaleV;
		Float _offsetU;
		Float _offsetV;
		 ::openfl::geom::Matrix _uvTransform2;
		bool _uvTransformDirty2;
		Float _uvRotation2;
		Float _scaleU2;
		Float _scaleV2;
		Float _offsetU2;
		Float _offsetV2;
		 ::away3d::animators::data::AnimationSubGeometry animationSubGeometry;
		 ::away3d::animators::data::AnimationSubGeometry animatorSubGeometry;
		bool get_shaderPickingDetails();
		::Dynamic get_shaderPickingDetails_dyn();

		Float get_offsetU();
		::Dynamic get_offsetU_dyn();

		Float set_offsetU(Float value);
		::Dynamic set_offsetU_dyn();

		Float get_offsetV();
		::Dynamic get_offsetV_dyn();

		Float set_offsetV(Float value);
		::Dynamic set_offsetV_dyn();

		Float get_scaleU();
		::Dynamic get_scaleU_dyn();

		Float set_scaleU(Float value);
		::Dynamic set_scaleU_dyn();

		Float get_scaleV();
		::Dynamic get_scaleV_dyn();

		Float set_scaleV(Float value);
		::Dynamic set_scaleV_dyn();

		Float get_uvRotation();
		::Dynamic get_uvRotation_dyn();

		Float set_uvRotation(Float value);
		::Dynamic set_uvRotation_dyn();

		Float get_offsetU2();
		::Dynamic get_offsetU2_dyn();

		Float set_offsetU2(Float value);
		::Dynamic set_offsetU2_dyn();

		Float get_offsetV2();
		::Dynamic get_offsetV2_dyn();

		Float set_offsetV2(Float value);
		::Dynamic set_offsetV2_dyn();

		Float get_scaleU2();
		::Dynamic get_scaleU2_dyn();

		Float set_scaleU2(Float value);
		::Dynamic set_scaleU2_dyn();

		Float get_scaleV2();
		::Dynamic get_scaleV2_dyn();

		Float set_scaleV2(Float value);
		::Dynamic set_scaleV2_dyn();

		Float get_uvRotation2();
		::Dynamic get_uvRotation2_dyn();

		Float set_uvRotation2(Float value);
		::Dynamic set_uvRotation2_dyn();

		 ::away3d::entities::Entity get_sourceEntity();
		::Dynamic get_sourceEntity_dyn();

		::Dynamic get_subGeometry();
		::Dynamic get_subGeometry_dyn();

		::Dynamic set_subGeometry(::Dynamic value);
		::Dynamic set_subGeometry_dyn();

		 ::away3d::materials::MaterialBase get_material();
		::Dynamic get_material_dyn();

		 ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		::Dynamic set_material_dyn();

		 ::openfl::geom::Matrix3D get_sceneTransform();
		::Dynamic get_sceneTransform_dyn();

		 ::openfl::geom::Matrix3D get_inverseSceneTransform();
		::Dynamic get_inverseSceneTransform_dyn();

		void activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexBuffer_dyn();

		void activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexNormalBuffer_dyn();

		void activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexTangentBuffer_dyn();

		void activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateUVBuffer_dyn();

		void activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateSecondaryUVBuffer_dyn();

		 ::openfl::display3D::IndexBuffer3D getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic getIndexBuffer_dyn();

		int get_numTriangles();
		::Dynamic get_numTriangles_dyn();

		::Dynamic get_animator();
		::Dynamic get_animator_dyn();

		bool get_mouseEnabled();
		::Dynamic get_mouseEnabled_dyn();

		bool get_castsShadows();
		::Dynamic get_castsShadows_dyn();

		 ::away3d::entities::Mesh get_parentMesh();
		::Dynamic get_parentMesh_dyn();

		 ::away3d::entities::Mesh set_parentMesh( ::away3d::entities::Mesh value);
		::Dynamic set_parentMesh_dyn();

		 ::openfl::geom::Matrix get_uvTransform();
		::Dynamic get_uvTransform_dyn();

		 ::openfl::geom::Matrix get_uvTransform2();
		::Dynamic get_uvTransform2_dyn();

		void updateUVTransform();
		::Dynamic updateUVTransform_dyn();

		void updateUVTransform2();
		::Dynamic updateUVTransform2_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		 ::openfl::_Vector::FloatVector get_vertexData();
		::Dynamic get_vertexData_dyn();

		 ::openfl::_Vector::IntVector get_indexData();
		::Dynamic get_indexData_dyn();

		 ::openfl::_Vector::FloatVector get_UVData();
		::Dynamic get_UVData_dyn();

		 ::away3d::bounds::BoundingVolumeBase get_bounds();
		::Dynamic get_bounds_dyn();

		bool get_visible();
		::Dynamic get_visible_dyn();

		int get_numVertices();
		::Dynamic get_numVertices_dyn();

		int get_vertexStride();
		::Dynamic get_vertexStride_dyn();

		int get_UVStride();
		::Dynamic get_UVStride_dyn();

		 ::openfl::_Vector::FloatVector get_vertexNormalData();
		::Dynamic get_vertexNormalData_dyn();

		 ::openfl::_Vector::FloatVector get_vertexTangentData();
		::Dynamic get_vertexTangentData_dyn();

		int get_UVOffset();
		::Dynamic get_UVOffset_dyn();

		int get_vertexOffset();
		::Dynamic get_vertexOffset_dyn();

		int get_vertexNormalOffset();
		::Dynamic get_vertexNormalOffset_dyn();

		int get_vertexTangentOffset();
		::Dynamic get_vertexTangentOffset_dyn();

		 ::openfl::geom::Matrix3D getRenderSceneTransform( ::away3d::cameras::Camera3D camera);
		::Dynamic getRenderSceneTransform_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_SubMesh */ 
