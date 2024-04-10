#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#define INCLUDED_away3d_library_assets_NamedAssetBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace library{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES NamedAssetBase_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef NamedAssetBase_obj OBJ_;
		NamedAssetBase_obj();

	public:
		enum { _hx_ClassId = 0x37f46043 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.library.assets.NamedAssetBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.library.assets.NamedAssetBase"); }
		static ::hx::ObjectPtr< NamedAssetBase_obj > __new(::String name);
		static ::hx::ObjectPtr< NamedAssetBase_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NamedAssetBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NamedAssetBase",48,db,a1,f9); }

		static void __boot();
		static ::String DEFAULT_NAMESPACE;
		::String _originalName;
		::String _namespace;
		::String _name;
		::String _id;
		::cpp::VirtualArray _full_path;
		::String get_originalName();
		::Dynamic get_originalName_dyn();

		::String get_id();
		::Dynamic get_id_dyn();

		::String set_id(::String newID);
		::Dynamic set_id_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		::String set_name(::String val);
		::Dynamic set_name_dyn();

		::String get_assetNamespace();
		::Dynamic get_assetNamespace_dyn();

		::cpp::VirtualArray get_assetFullPath();
		::Dynamic get_assetFullPath_dyn();

		bool assetPathEquals(::String name,::String ns);
		::Dynamic assetPathEquals_dyn();

		void resetAssetPath(::String name,::String ns, ::Dynamic overrideOriginal);
		::Dynamic resetAssetPath_dyn();

		void updateFullPath();
		::Dynamic updateFullPath_dyn();

};

} // end namespace away3d
} // end namespace library
} // end namespace assets

#endif /* INCLUDED_away3d_library_assets_NamedAssetBase */ 
