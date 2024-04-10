#ifndef INCLUDED_AwayViewBugState
#define INCLUDED_AwayViewBugState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_StateBase
#include <StateBase.h>
#endif
HX_DECLARE_CLASS0(AwayViewBugState)
HX_DECLARE_CLASS0(StateBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS2(away3d,controllers,ControllerBase)
HX_DECLARE_CLASS2(away3d,controllers,HoverController)
HX_DECLARE_CLASS2(away3d,controllers,LookAtController)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,lights,DirectionalLight)
HX_DECLARE_CLASS2(away3d,lights,LightBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,LightPickerBase)
HX_DECLARE_CLASS3(away3d,materials,lightpickers,StaticLightPicker)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(object3d,VeView3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)



class HXCPP_CLASS_ATTRIBUTES AwayViewBugState_obj : public  ::StateBase_obj
{
	public:
		typedef  ::StateBase_obj super;
		typedef AwayViewBugState_obj OBJ_;
		AwayViewBugState_obj();

	public:
		enum { _hx_ClassId = 0x4928fd30 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AwayViewBugState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AwayViewBugState"); }
		static ::hx::ObjectPtr< AwayViewBugState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< AwayViewBugState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AwayViewBugState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AwayViewBugState",70,4a,47,73); }

		 ::away3d::controllers::HoverController _cameraController;
		 ::away3d::lights::DirectionalLight _light;
		 ::away3d::materials::lightpickers::StaticLightPicker _lightPicker;
		 ::object3d::VeView3D veView;
		void create();

		 ::openfl::geom::Vector3D _direction;
		Float mousestartX;
		Float mousestartY;
		Float _lastPanAngle;
		Float _lastTiltAngle;
		Float rotTime;
		void update(Float elapsed);

};


#endif /* INCLUDED_AwayViewBugState */ 
