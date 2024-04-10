#ifndef INCLUDED_away3d_animators_AnimatorBase
#define INCLUDED_away3d_animators_AnimatorBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
HX_DECLARE_CLASS2(away3d,animators,AnimatorBase)
HX_DECLARE_CLASS2(away3d,animators,IAnimationSet)
HX_DECLARE_CLASS3(away3d,animators,nodes,AnimationNodeBase)
HX_DECLARE_CLASS3(away3d,animators,states,IAnimationState)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,Mesh)
HX_DECLARE_CLASS2(away3d,events,AnimatorEvent)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace animators{


class HXCPP_CLASS_ATTRIBUTES AnimatorBase_obj : public  ::away3d::library::assets::NamedAssetBase_obj
{
	public:
		typedef  ::away3d::library::assets::NamedAssetBase_obj super;
		typedef AnimatorBase_obj OBJ_;
		AnimatorBase_obj();

	public:
		enum { _hx_ClassId = 0x22989705 };

		void __construct(::Dynamic animationSet);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.animators.AnimatorBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.animators.AnimatorBase"); }
		static ::hx::ObjectPtr< AnimatorBase_obj > __new(::Dynamic animationSet);
		static ::hx::ObjectPtr< AnimatorBase_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic animationSet);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimatorBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AnimatorBase",38,1b,8e,75); }

		 ::openfl::display::Sprite _broadcaster;
		bool _isPlaying;
		bool _autoUpdate;
		 ::away3d::events::AnimatorEvent _startEvent;
		 ::away3d::events::AnimatorEvent _stopEvent;
		 ::away3d::events::AnimatorEvent _cycleEvent;
		int _time;
		Float _playbackSpeed;
		::Dynamic _animationSet;
		 ::openfl::_Vector::ObjectVector _owners;
		 ::away3d::animators::nodes::AnimationNodeBase _activeNode;
		::Dynamic _activeState;
		::String _activeAnimationName;
		int _absoluteTime;
		 ::haxe::ds::ObjectMap _animationStates;
		bool updatePosition;
		::Dynamic getAnimationState( ::away3d::animators::nodes::AnimationNodeBase node);
		::Dynamic getAnimationState_dyn();

		::Dynamic getAnimationStateByName(::String name);
		::Dynamic getAnimationStateByName_dyn();

		int get_absoluteTime();
		::Dynamic get_absoluteTime_dyn();

		::Dynamic get_animationSet();
		::Dynamic get_animationSet_dyn();

		::Dynamic get_activeState();
		::Dynamic get_activeState_dyn();

		 ::away3d::animators::nodes::AnimationNodeBase get_activeAnimation();
		::Dynamic get_activeAnimation_dyn();

		::String get_activeAnimationName();
		::Dynamic get_activeAnimationName_dyn();

		bool get_autoUpdate();
		::Dynamic get_autoUpdate_dyn();

		bool set_autoUpdate(bool value);
		::Dynamic set_autoUpdate_dyn();

		int get_time();
		::Dynamic get_time_dyn();

		int set_time(int value);
		::Dynamic set_time_dyn();

		void phase(Float value);
		::Dynamic phase_dyn();

		Float get_playbackSpeed();
		::Dynamic get_playbackSpeed_dyn();

		Float set_playbackSpeed(Float value);
		::Dynamic set_playbackSpeed_dyn();

		void start();
		::Dynamic start_dyn();

		void stop();
		::Dynamic stop_dyn();

		void update(int time);
		::Dynamic update_dyn();

		void reset(::String name,::hx::Null< int >  offset);
		::Dynamic reset_dyn();

		void addOwner( ::away3d::entities::Mesh mesh);
		::Dynamic addOwner_dyn();

		void removeOwner( ::away3d::entities::Mesh mesh);
		::Dynamic removeOwner_dyn();

		void updateDeltaTime(int dt);
		::Dynamic updateDeltaTime_dyn();

		void onEnterFrame( ::openfl::events::Event event);
		::Dynamic onEnterFrame_dyn();

		void applyPositionDelta();
		::Dynamic applyPositionDelta_dyn();

		void dispatchCycleEvent();
		::Dynamic dispatchCycleEvent_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		::String get_assetType();
		::Dynamic get_assetType_dyn();

};

} // end namespace away3d
} // end namespace animators

#endif /* INCLUDED_away3d_animators_AnimatorBase */ 
