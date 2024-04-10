#ifndef INCLUDED_away3d_core_managers_AGALProgram3DCache
#define INCLUDED_away3d_core_managers_AGALProgram3DCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,managers,AGALProgram3DCache)
HX_DECLARE_CLASS3(away3d,core,managers,Stage3DProxy)
HX_DECLARE_CLASS2(away3d,events,Stage3DEvent)
HX_DECLARE_CLASS3(away3d,materials,passes,MaterialPassBase)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace core{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES AGALProgram3DCache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AGALProgram3DCache_obj OBJ_;
		AGALProgram3DCache_obj();

	public:
		enum { _hx_ClassId = 0x75661342 };

		void __construct( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.core.managers.AGALProgram3DCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.core.managers.AGALProgram3DCache"); }
		static ::hx::ObjectPtr< AGALProgram3DCache_obj > __new( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static ::hx::ObjectPtr< AGALProgram3DCache_obj > __alloc(::hx::Ctx *_hx_ctx, ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AGALProgram3DCache_obj();

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
		::String __ToString() const { return HX_("AGALProgram3DCache",fe,60,b6,42); }

		static void __boot();
		static  ::openfl::_Vector::ObjectVector _instances;
		static int _currentId;
		static  ::away3d::core::managers::AGALProgram3DCache getInstance( ::away3d::core::managers::Stage3DProxy stage3DProxy);
		static ::Dynamic getInstance_dyn();

		static  ::away3d::core::managers::AGALProgram3DCache getInstanceFromIndex(int index);
		static ::Dynamic getInstanceFromIndex_dyn();

		static void onContext3DDisposed( ::away3d::events::Stage3DEvent event);
		static ::Dynamic onContext3DDisposed_dyn();

		 ::away3d::core::managers::Stage3DProxy _stage3DProxy;
		 ::haxe::ds::StringMap _program3Ds;
		 ::haxe::ds::StringMap _ids;
		::Array< int > _usages;
		::Array< ::String > _keys;
		void dispose();
		::Dynamic dispose_dyn();

		void setProgram3D( ::away3d::materials::passes::MaterialPassBase pass,::String vertexCode,::String fragmentCode,::hx::Null< int >  agalVersion);
		::Dynamic setProgram3D_dyn();

		void freeProgram3D(int programId);
		::Dynamic freeProgram3D_dyn();

		void destroyProgram(::String key);
		::Dynamic destroyProgram_dyn();

		::String getKey(::String vertexCode,::String fragmentCode);
		::Dynamic getKey_dyn();

};

} // end namespace away3d
} // end namespace core
} // end namespace managers

#endif /* INCLUDED_away3d_core_managers_AGALProgram3DCache */ 
