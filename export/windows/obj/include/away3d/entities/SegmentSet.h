#ifndef INCLUDED_away3d_entities_SegmentSet
#define INCLUDED_away3d_entities_SegmentSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,IAnimator)
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,partition,EntityNode)
HX_DECLARE_CLASS3(away3d,core,partition,NodeBase)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS2(away3d,entities,SubSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,materials,MaterialBase)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES SegmentSet_obj : public  ::away3d::entities::Entity_obj
{
	public:
		typedef  ::away3d::entities::Entity_obj super;
		typedef SegmentSet_obj OBJ_;
		SegmentSet_obj();

	public:
		enum { _hx_ClassId = 0x03f3a2fb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.entities.SegmentSet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.entities.SegmentSet"); }
		static ::hx::ObjectPtr< SegmentSet_obj > __new();
		static ::hx::ObjectPtr< SegmentSet_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SegmentSet_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SegmentSet",cf,19,5e,4e); }

		static void __boot();
		static int LIMIT;
		 ::away3d::entities::SubSet _activeSubSet;
		 ::openfl::_Vector::ObjectVector _subSets;
		int _subSetCount;
		int _numIndices;
		 ::away3d::materials::MaterialBase _material;
		::Dynamic _animator;
		bool _hasData;
		 ::haxe::ds::IntMap _segments;
		int _indexSegments;
		void addSegment( ::away3d::primitives::data::Segment segment);
		::Dynamic addSegment_dyn();

		void removeSegmentByIndex(int index,::hx::Null< bool >  dispose);
		::Dynamic removeSegmentByIndex_dyn();

		void removeSegment( ::away3d::primitives::data::Segment segment,::hx::Null< bool >  dispose);
		::Dynamic removeSegment_dyn();

		virtual void removeAllSegments();
		::Dynamic removeAllSegments_dyn();

		 ::away3d::primitives::data::Segment getSegment(int index);
		::Dynamic getSegment_dyn();

		int get_segmentCount();
		::Dynamic get_segmentCount_dyn();

		int get_subSetCount();
		::Dynamic get_subSetCount_dyn();

		void updateSegment( ::away3d::primitives::data::Segment segment);
		::Dynamic updateSegment_dyn();

		bool get_hasData();
		::Dynamic get_hasData_dyn();

		 ::openfl::display3D::IndexBuffer3D getIndexBuffer( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic getIndexBuffer_dyn();

		void activateVertexBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexBuffer_dyn();

		void activateUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateUVBuffer_dyn();

		void activateVertexNormalBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexNormalBuffer_dyn();

		void activateVertexTangentBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateVertexTangentBuffer_dyn();

		void activateSecondaryUVBuffer(int index, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic activateSecondaryUVBuffer_dyn();

		void reOrderIndices(int subSetIndex,int index);
		::Dynamic reOrderIndices_dyn();

		 ::away3d::entities::SubSet addSubSet();
		::Dynamic addSubSet_dyn();

		void dispose();

		bool get_mouseEnabled();

		 ::away3d::bounds::BoundingVolumeBase getDefaultBoundingVolume();

		void updateBounds();

		 ::away3d::core::partition::EntityNode createEntityPartitionNode();

		int get_numTriangles();
		::Dynamic get_numTriangles_dyn();

		 ::away3d::entities::Entity get_sourceEntity();
		::Dynamic get_sourceEntity_dyn();

		bool get_castsShadows();
		::Dynamic get_castsShadows_dyn();

		 ::away3d::materials::MaterialBase get_material();
		::Dynamic get_material_dyn();

		::Dynamic get_animator();
		::Dynamic get_animator_dyn();

		 ::away3d::materials::MaterialBase set_material( ::away3d::materials::MaterialBase value);
		::Dynamic set_material_dyn();

		 ::openfl::geom::Matrix get_uvTransform();
		::Dynamic get_uvTransform_dyn();

		 ::openfl::geom::Matrix get_uvTransform2();
		::Dynamic get_uvTransform2_dyn();

		 ::openfl::_Vector::FloatVector get_vertexData();
		::Dynamic get_vertexData_dyn();

		 ::openfl::_Vector::IntVector get_indexData();
		::Dynamic get_indexData_dyn();

		 ::openfl::_Vector::FloatVector get_UVData();
		::Dynamic get_UVData_dyn();

		int get_numVertices();
		::Dynamic get_numVertices_dyn();

		int get_vertexStride();
		::Dynamic get_vertexStride_dyn();

		 ::openfl::_Vector::FloatVector get_vertexNormalData();
		::Dynamic get_vertexNormalData_dyn();

		 ::openfl::_Vector::FloatVector get_vertexTangentData();
		::Dynamic get_vertexTangentData_dyn();

		int get_vertexOffset();
		::Dynamic get_vertexOffset_dyn();

		int get_vertexNormalOffset();
		::Dynamic get_vertexNormalOffset_dyn();

		int get_vertexTangentOffset();
		::Dynamic get_vertexTangentOffset_dyn();

		::String get_assetType();

		 ::openfl::geom::Matrix3D getRenderSceneTransform( ::away3d::cameras::Camera3D camera);
		::Dynamic getRenderSceneTransform_dyn();

};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_SegmentSet */ 
