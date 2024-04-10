#ifndef INCLUDED_away3d_core_managers_Stage3DManager
#define INCLUDED_away3d_core_managers_Stage3DManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,Stage3DManager)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES Stage3DManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stage3DManager_obj OBJ_;
		Stage3DManager_obj();

	public:
		enum { _hx_ClassId = 0x70b317a2 };

		void __construct( ::openfl::display::Stage stage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.managers.Stage3DManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.managers.Stage3DManager"); }
		static ::hx::ObjectPtr< Stage3DManager_obj > __new( ::openfl::display::Stage stage);
		static ::hx::ObjectPtr< Stage3DManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage3DManager_obj();

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
		::String __ToString() const { return HX_("Stage3DManager",5e,d7,62,72); }

		static void __boot();
		static  ::haxe::ds::ObjectMap _instances;
		static  ::openfl::_Vector::ObjectVector _stageProxies;
		static int _numStageProxies;
		static  ::away3d::core::managers::Stage3DManager getInstance( ::openfl::display::Stage stage);
		static ::Dynamic getInstance_dyn();

		 ::openfl::display::Stage _stage;
		 ::away3d::core::managers::Stage3DProxy getStage3DProxy(int index,::hx::Null< bool >  forceSoftware,::String profile);
		::Dynamic getStage3DProxy_dyn();

		void removeStage3DProxy( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		::Dynamic removeStage3DProxy_dyn();

		 ::away3d::core::managers::Stage3DProxy getFreeStage3DProxy(::hx::Null< bool >  forceSoftware,::String profile);
		::Dynamic getFreeStage3DProxy_dyn();

		bool get_hasFreeStage3DProxy();
		::Dynamic get_hasFreeStage3DProxy_dyn();

		int get_numProxySlotsFree();
		::Dynamic get_numProxySlotsFree_dyn();

		int get_numProxySlotsUsed();
		::Dynamic get_numProxySlotsUsed_dyn();

		int get_numProxySlotsTotal();
		::Dynamic get_numProxySlotsTotal_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_Stage3DManager */ 
