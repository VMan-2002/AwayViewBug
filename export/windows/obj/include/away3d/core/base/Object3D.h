#ifndef INCLUDED_away3d_core_base_Object3D
#define INCLUDED_away3d_core_base_Object3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
HX_DECLARE_CLASS2(away3d,controllers,ControllerBase)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,events,Object3DEvent)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES Object3D_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef Object3D_obj OBJ_;
		Object3D_obj();

	public:
		enum { _hx_ClassId = 0x13fff02b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.base.Object3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.base.Object3D"); }
		static ::hx::ObjectPtr< Object3D_obj > __new();
		static ::hx::ObjectPtr< Object3D_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Object3D_obj();

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
		::String __ToString() const { return HX_("Object3D",50,d5,dd,5c); }

		static  ::openfl::geom::Vector3D tempAxeX;
		static  ::openfl::geom::Vector3D tempAxeY;
		static  ::openfl::geom::Vector3D tempAxeZ;
		 ::away3d::controllers::ControllerBase _controller;
		Float _smallestNumber;
		bool _transformDirty;
		bool _positionDirty;
		bool _rotationDirty;
		bool _scaleDirty;
		 ::away3d::events::Object3DEvent _positionChanged;
		 ::away3d::events::Object3DEvent _rotationChanged;
		 ::away3d::events::Object3DEvent _scaleChanged;
		Float _rotationX;
		Float _rotationY;
		Float _rotationZ;
		 ::openfl::geom::Vector3D _eulers;
		 ::openfl::geom::Matrix3D _flipY;
		bool _listenToPositionChanged;
		bool _listenToRotationChanged;
		bool _listenToScaleChanged;
		int _zOffset;
		void invalidatePivot();
		::Dynamic invalidatePivot_dyn();

		void invalidatePosition();
		::Dynamic invalidatePosition_dyn();

		void notifyPositionChanged();
		::Dynamic notifyPositionChanged_dyn();

		virtual void addEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

		virtual void removeEventListener(::String _tmp_type, ::Dynamic _tmp_listener,::hx::Null< bool >  useCapture);

		void invalidateRotation();
		::Dynamic invalidateRotation_dyn();

		void notifyRotationChanged();
		::Dynamic notifyRotationChanged_dyn();

		void invalidateScale();
		::Dynamic invalidateScale_dyn();

		void notifyScaleChanged();
		::Dynamic notifyScaleChanged_dyn();

		 ::openfl::geom::Matrix3D _transform;
		Float _scaleX;
		Float _scaleY;
		Float _scaleZ;
		Float _x;
		Float _y;
		Float _z;
		 ::openfl::geom::Vector3D _pivotPoint;
		bool _pivotZero;
		 ::openfl::geom::Vector3D _pos;
		 ::openfl::geom::Vector3D _rot;
		 ::openfl::geom::Vector3D _sca;
		 ::openfl::_Vector::ObjectVector _transformComponents;
		 ::Dynamic extra;
		Float get_x();
		::Dynamic get_x_dyn();

		Float set_x(Float val);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float val);
		::Dynamic set_y_dyn();

		Float get_z();
		::Dynamic get_z_dyn();

		Float set_z(Float val);
		::Dynamic set_z_dyn();

		Float get_rotationX();
		::Dynamic get_rotationX_dyn();

		Float set_rotationX(Float val);
		::Dynamic set_rotationX_dyn();

		Float get_rotationY();
		::Dynamic get_rotationY_dyn();

		Float set_rotationY(Float val);
		::Dynamic set_rotationY_dyn();

		Float get_rotationZ();
		::Dynamic get_rotationZ_dyn();

		Float set_rotationZ(Float val);
		::Dynamic set_rotationZ_dyn();

		Float get_scaleX();
		::Dynamic get_scaleX_dyn();

		Float set_scaleX(Float val);
		::Dynamic set_scaleX_dyn();

		Float get_scaleY();
		::Dynamic get_scaleY_dyn();

		Float set_scaleY(Float val);
		::Dynamic set_scaleY_dyn();

		Float get_scaleZ();
		::Dynamic get_scaleZ_dyn();

		Float set_scaleZ(Float val);
		::Dynamic set_scaleZ_dyn();

		 ::openfl::geom::Vector3D get_eulers();
		::Dynamic get_eulers_dyn();

		 ::openfl::geom::Vector3D set_eulers( ::openfl::geom::Vector3D value);
		::Dynamic set_eulers_dyn();

		 ::openfl::geom::Matrix3D get_transform();
		::Dynamic get_transform_dyn();

		 ::openfl::geom::Matrix3D set_transform( ::openfl::geom::Matrix3D val);
		::Dynamic set_transform_dyn();

		 ::openfl::geom::Vector3D get_pivotPoint();
		::Dynamic get_pivotPoint_dyn();

		 ::openfl::geom::Vector3D set_pivotPoint( ::openfl::geom::Vector3D pivot);
		::Dynamic set_pivotPoint_dyn();

		 ::openfl::geom::Vector3D get_position();
		::Dynamic get_position_dyn();

		 ::openfl::geom::Vector3D set_position( ::openfl::geom::Vector3D value);
		::Dynamic set_position_dyn();

		 ::openfl::geom::Vector3D getPosition( ::openfl::geom::Vector3D v);
		::Dynamic getPosition_dyn();

		 ::openfl::geom::Vector3D get_forwardVector();
		::Dynamic get_forwardVector_dyn();

		 ::openfl::geom::Vector3D get_rightVector();
		::Dynamic get_rightVector_dyn();

		 ::openfl::geom::Vector3D get_upVector();
		::Dynamic get_upVector_dyn();

		 ::openfl::geom::Vector3D get_backVector();
		::Dynamic get_backVector_dyn();

		 ::openfl::geom::Vector3D get_leftVector();
		::Dynamic get_leftVector_dyn();

		 ::openfl::geom::Vector3D get_downVector();
		::Dynamic get_downVector_dyn();

		void scale(Float value);
		::Dynamic scale_dyn();

		void moveForward(Float distance);
		::Dynamic moveForward_dyn();

		void moveBackward(Float distance);
		::Dynamic moveBackward_dyn();

		void moveLeft(Float distance);
		::Dynamic moveLeft_dyn();

		void moveRight(Float distance);
		::Dynamic moveRight_dyn();

		void moveUp(Float distance);
		::Dynamic moveUp_dyn();

		void moveDown(Float distance);
		::Dynamic moveDown_dyn();

		void moveTo(Float dx,Float dy,Float dz);
		::Dynamic moveTo_dyn();

		void movePivot(Float dx,Float dy,Float dz);
		::Dynamic movePivot_dyn();

		void translate( ::openfl::geom::Vector3D axis,Float distance);
		::Dynamic translate_dyn();

		virtual void translateLocal( ::openfl::geom::Vector3D axis,Float distance);
		::Dynamic translateLocal_dyn();

		void pitch(Float angle);
		::Dynamic pitch_dyn();

		void yaw(Float angle);
		::Dynamic yaw_dyn();

		void roll(Float angle);
		::Dynamic roll_dyn();

		virtual  ::away3d::core::base::Object3D clone();
		::Dynamic clone_dyn();

		void rotateTo(Float ax,Float ay,Float az);
		::Dynamic rotateTo_dyn();

		virtual void rotate( ::openfl::geom::Vector3D axis,Float angle);
		::Dynamic rotate_dyn();

		virtual void lookAt( ::openfl::geom::Vector3D target, ::openfl::geom::Vector3D upAxis);
		::Dynamic lookAt_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		void disposeAsset();
		::Dynamic disposeAsset_dyn();

		virtual void invalidateTransform();
		::Dynamic invalidateTransform_dyn();

		void updateTransform();
		::Dynamic updateTransform_dyn();

		int get_zOffset();
		::Dynamic get_zOffset_dyn();

		int set_zOffset(int value);
		::Dynamic set_zOffset_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace base

#endif /* INCLUDED_away3d_core_base_Object3D */ 
