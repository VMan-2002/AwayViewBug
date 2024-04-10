#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#define INCLUDED_away3d_primitives_WireframePrimitiveBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
HX_DECLARE_CLASS2(away3d,bounds,BoundingVolumeBase)
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES WireframePrimitiveBase_obj : public  ::away3d::entities::SegmentSet_obj
{
	public:
		typedef  ::away3d::entities::SegmentSet_obj super;
		typedef WireframePrimitiveBase_obj OBJ_;
		WireframePrimitiveBase_obj();

	public:
		enum { _hx_ClassId = 0x2eb7455f };

		void __construct(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.primitives.WireframePrimitiveBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.primitives.WireframePrimitiveBase"); }
		static ::hx::ObjectPtr< WireframePrimitiveBase_obj > __new(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		static ::hx::ObjectPtr< WireframePrimitiveBase_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WireframePrimitiveBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WireframePrimitiveBase",90,99,0d,56); }

		bool _geomDirty;
		int _color;
		Float _thickness;
		int get_color();
		::Dynamic get_color_dyn();

		int set_color(int value);
		::Dynamic set_color_dyn();

		Float get_thickness();
		::Dynamic get_thickness_dyn();

		Float set_thickness(Float value);
		::Dynamic set_thickness_dyn();

		void removeAllSegments();

		 ::away3d::bounds::BoundingVolumeBase get_bounds();

		virtual void buildGeometry();
		::Dynamic buildGeometry_dyn();

		void invalidateGeometry();
		::Dynamic invalidateGeometry_dyn();

		void updateGeometry();
		::Dynamic updateGeometry_dyn();

		void updateOrAddSegment(int index, ::openfl::geom::Vector3D v0, ::openfl::geom::Vector3D v1);
		::Dynamic updateOrAddSegment_dyn();

		void updateMouseChildren();

};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_WireframePrimitiveBase */ 
