#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#define INCLUDED_away3d_containers_ObjectContainer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,partition,Partition3D)
HX_DECLARE_CLASS2(away3d,events,Object3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ObjectContainer3D_obj : public  ::away3d::core::base::Object3D_obj
{
	public:
		typedef  ::away3d::core::base::Object3D_obj super;
		typedef ObjectContainer3D_obj OBJ_;
		ObjectContainer3D_obj();

	public:
		enum { _hx_ClassId = 0x1e6a8fa2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.containers.ObjectContainer3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.containers.ObjectContainer3D"); }
		static ::hx::ObjectPtr< ObjectContainer3D_obj > __new();
		static ::hx::ObjectPtr< ObjectContainer3D_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ObjectContainer3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ObjectContainer3D",93,97,cc,eb); }

		bool _ancestorsAllowMouseEnabled;
		bool _isRoot;
		 ::away3d::containers::Scene3D _scene;
		 ::away3d::containers::ObjectContainer3D _parent;
		 ::openfl::geom::Matrix3D _sceneTransform;
		bool _sceneTransformDirty;
		 ::away3d::core::partition::Partition3D _explicitPartition;
		 ::away3d::core::partition::Partition3D _implicitPartition;
		bool _mouseEnabled;
		 ::away3d::events::Object3DEvent _sceneTransformChanged;
		 ::away3d::events::Object3DEvent _scenechanged;
		 ::openfl::_Vector::ObjectVector _children;
		bool _mouseChildren;
		 ::away3d::containers::Scene3D _oldScene;
		 ::openfl::geom::Matrix3D _inverseSceneTransform;
		bool _inverseSceneTransformDirty;
		 ::openfl::geom::Vector3D _scenePosition;
		bool _scenePositionDirty;
		bool _explicitVisibility;
		bool _implicitVisibility;
		bool _listenToSceneTransformChanged;
		bool _listenToSceneChanged;
		bool _ignoreTransform;
		bool get_ignoreTransform();
		::Dynamic get_ignoreTransform_dyn();

		virtual bool set_ignoreTransform(bool value);
		::Dynamic set_ignoreTransform_dyn();

		 ::away3d::core::partition::Partition3D get_implicitPartition();
		::Dynamic get_implicitPartition_dyn();

		virtual  ::away3d::core::partition::Partition3D set_implicitPartition( ::away3d::core::partition::Partition3D value);
		::Dynamic set_implicitPartition_dyn();

		bool get_isVisible();
		::Dynamic get_isVisible_dyn();

		void setParent( ::away3d::containers::ObjectContainer3D value);
		::Dynamic setParent_dyn();

		void notifySceneTransformChange();
		::Dynamic notifySceneTransformChange_dyn();

		void notifySceneChange();
		::Dynamic notifySceneChange_dyn();

		virtual void updateMouseChildren();
		::Dynamic updateMouseChildren_dyn();

		virtual bool get_mouseEnabled();
		::Dynamic get_mouseEnabled_dyn();

		bool set_mouseEnabled(bool value);
		::Dynamic set_mouseEnabled_dyn();

		void invalidateTransform();

		virtual void invalidateSceneTransform();
		::Dynamic invalidateSceneTransform_dyn();

		virtual void updateSceneTransform();
		::Dynamic updateSceneTransform_dyn();

		bool get_mouseChildren();
		::Dynamic get_mouseChildren_dyn();

		bool set_mouseChildren(bool value);
		::Dynamic set_mouseChildren_dyn();

		bool get_visible();
		::Dynamic get_visible_dyn();

		bool set_visible(bool value);
		::Dynamic set_visible_dyn();

		virtual ::String get_assetType();
		::Dynamic get_assetType_dyn();

		 ::openfl::geom::Vector3D get_scenePosition();
		::Dynamic get_scenePosition_dyn();

		virtual Float get_minX();
		::Dynamic get_minX_dyn();

		virtual Float get_minY();
		::Dynamic get_minY_dyn();

		virtual Float get_minZ();
		::Dynamic get_minZ_dyn();

		virtual Float get_maxX();
		::Dynamic get_maxX_dyn();

		virtual Float get_maxY();
		::Dynamic get_maxY_dyn();

		virtual Float get_maxZ();
		::Dynamic get_maxZ_dyn();

		 ::away3d::core::partition::Partition3D get_partition();
		::Dynamic get_partition_dyn();

		 ::away3d::core::partition::Partition3D set_partition( ::away3d::core::partition::Partition3D value);
		::Dynamic set_partition_dyn();

		 ::openfl::geom::Matrix3D get_sceneTransform();
		::Dynamic get_sceneTransform_dyn();

		 ::away3d::containers::Scene3D get_scene();
		::Dynamic get_scene_dyn();

		virtual  ::away3d::containers::Scene3D set_scene( ::away3d::containers::Scene3D value);
		::Dynamic set_scene_dyn();

		 ::openfl::geom::Matrix3D get_inverseSceneTransform();
		::Dynamic get_inverseSceneTransform_dyn();

		 ::away3d::containers::ObjectContainer3D get_parent();
		::Dynamic get_parent_dyn();

		bool contains( ::away3d::containers::ObjectContainer3D child);
		::Dynamic contains_dyn();

		 ::away3d::containers::ObjectContainer3D addChild( ::away3d::containers::ObjectContainer3D child);
		::Dynamic addChild_dyn();

		void addChildren( ::openfl::_Vector::ObjectVector childarray);
		::Dynamic addChildren_dyn();

		void removeChild( ::away3d::containers::ObjectContainer3D child);
		::Dynamic removeChild_dyn();

		void removeChildAt(int index);
		::Dynamic removeChildAt_dyn();

		void removeChildInternal(int childIndex, ::away3d::containers::ObjectContainer3D child);
		::Dynamic removeChildInternal_dyn();

		 ::away3d::containers::ObjectContainer3D getChildAt(int index);
		::Dynamic getChildAt_dyn();

		int get_numChildren();
		::Dynamic get_numChildren_dyn();

		void lookAt( ::openfl::geom::Vector3D target, ::openfl::geom::Vector3D upAxis);

		void translateLocal( ::openfl::geom::Vector3D axis,Float distance);

		virtual void dispose();

		void disposeWithChildren();
		::Dynamic disposeWithChildren_dyn();

		virtual  ::away3d::core::base::Object3D clone();

		void rotate( ::openfl::geom::Vector3D axis,Float angle);

		bool dispatchEvent( ::openfl::events::Event event);

		void updateImplicitVisibility();
		::Dynamic updateImplicitVisibility_dyn();

		void addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

		void removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture);

};

} // end namespace away3d
} // end namespace containers

#endif /* INCLUDED_away3d_containers_ObjectContainer3D */ 
