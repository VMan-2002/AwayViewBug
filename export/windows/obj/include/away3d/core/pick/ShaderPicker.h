#ifndef INCLUDED_away3d_core_pick_ShaderPicker
#define INCLUDED_away3d_core_pick_ShaderPicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_core_pick_IPicker
#include <away3d/core/pick/IPicker.h>
#endif
HX_DECLARE_CLASS2(away3d,cameras,Camera3D)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,containers,Scene3D)
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS3(away3d,core,data,RenderableListItem)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS3(away3d,core,pick,IPicker)
HX_DECLARE_CLASS3(away3d,core,pick,PickingCollisionVO)
HX_DECLARE_CLASS3(away3d,core,pick,ShaderPicker)
HX_DECLARE_CLASS3(away3d,core,traverse,EntityCollector)
HX_DECLARE_CLASS3(away3d,core,traverse,PartitionTraverser)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace core{
namespace pick{


class HXCPP_CLASS_ATTRIBUTES ShaderPicker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderPicker_obj OBJ_;
		ShaderPicker_obj();

	public:
		enum { _hx_ClassId = 0x1e3ce47a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.pick.ShaderPicker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.pick.ShaderPicker"); }
		static ::hx::ObjectPtr< ShaderPicker_obj > __new();
		static ::hx::ObjectPtr< ShaderPicker_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderPicker_obj();

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
		::String __ToString() const { return HX_("ShaderPicker",b3,e4,c7,b6); }

		static void __boot();
		static  ::openfl::geom::Rectangle MOUSE_SCISSOR_RECT;
		 ::away3d::core::managers::Stage3DProxy _stage3DProxy;
		 ::openfl::display3D::Context3D _context;
		bool _onlyMouseEnabled;
		 ::openfl::display3D::Program3D _objectProgram3D;
		 ::openfl::display3D::Program3D _triangleProgram3D;
		 ::openfl::display::BitmapData _bitmapData;
		 ::openfl::_Vector::FloatVector _viewportData;
		 ::openfl::_Vector::FloatVector _boundOffsetScale;
		 ::openfl::_Vector::FloatVector _id;
		 ::openfl::_Vector::ObjectVector _interactives;
		int _interactiveId;
		int _hitColor;
		Float _projX;
		Float _projY;
		::Dynamic _hitRenderable;
		 ::away3d::entities::Entity _hitEntity;
		 ::openfl::geom::Vector3D _localHitPosition;
		 ::openfl::geom::Point _hitUV;
		int _faceIndex;
		int _subGeometryIndex;
		 ::openfl::geom::Vector3D _localHitNormal;
		 ::openfl::geom::Vector3D _rayPos;
		 ::openfl::geom::Vector3D _rayDir;
		bool _potentialFound;
		bool get_onlyMouseEnabled();
		::Dynamic get_onlyMouseEnabled_dyn();

		bool set_onlyMouseEnabled(bool value);
		::Dynamic set_onlyMouseEnabled_dyn();

		 ::away3d::core::pick::PickingCollisionVO getViewCollision(Float x,Float y, ::away3d::containers::View3D view);
		::Dynamic getViewCollision_dyn();

		 ::away3d::core::pick::PickingCollisionVO getSceneCollision( ::openfl::geom::Vector3D position, ::openfl::geom::Vector3D direction, ::away3d::containers::Scene3D scene);
		::Dynamic getSceneCollision_dyn();

		void draw( ::away3d::core::traverse::EntityCollector entityCollector, ::openfl::display3D::textures::TextureBase target);
		::Dynamic draw_dyn();

		void drawRenderables( ::away3d::core::data::RenderableListItem item, ::away3d::cameras::Camera3D camera);
		::Dynamic drawRenderables_dyn();

		void updateRay( ::away3d::cameras::Camera3D camera);
		::Dynamic updateRay_dyn();

		void initObjectProgram3D();
		::Dynamic initObjectProgram3D_dyn();

		void initTriangleProgram3D();
		::Dynamic initTriangleProgram3D_dyn();

		void getHitDetails( ::away3d::cameras::Camera3D camera);
		::Dynamic getHitDetails_dyn();

		void getApproximatePosition( ::away3d::cameras::Camera3D camera);
		::Dynamic getApproximatePosition_dyn();

		void getPreciseDetails( ::away3d::cameras::Camera3D camera);
		::Dynamic getPreciseDetails_dyn();

		void getPrecisePosition( ::openfl::geom::Matrix3D invSceneTransform,Float nx,Float ny,Float nz,Float px,Float py,Float pz);
		::Dynamic getPrecisePosition_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace pick

#endif /* INCLUDED_away3d_core_pick_ShaderPicker */ 
