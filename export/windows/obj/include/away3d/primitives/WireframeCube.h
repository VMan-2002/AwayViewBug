#ifndef INCLUDED_away3d_primitives_WireframeCube
#define INCLUDED_away3d_primitives_WireframeCube

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframeCube)
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES WireframeCube_obj : public  ::away3d::primitives::WireframePrimitiveBase_obj
{
	public:
		typedef  ::away3d::primitives::WireframePrimitiveBase_obj super;
		typedef WireframeCube_obj OBJ_;
		WireframeCube_obj();

	public:
		enum { _hx_ClassId = 0x39c56ab2 };

		void __construct(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.primitives.WireframeCube")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.primitives.WireframeCube"); }
		static ::hx::ObjectPtr< WireframeCube_obj > __new(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		static ::hx::ObjectPtr< WireframeCube_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height,::hx::Null< Float >  __o_depth,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WireframeCube_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WireframeCube",bd,a6,a5,1b); }

		Float _width;
		Float _height;
		Float _depth;
		Float get_width();
		::Dynamic get_width_dyn();

		Float set_width(Float value);
		::Dynamic set_width_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float set_height(Float value);
		::Dynamic set_height_dyn();

		Float get_depth();
		::Dynamic get_depth_dyn();

		Float set_depth(Float value);
		::Dynamic set_depth_dyn();

		void buildGeometry();

};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_WireframeCube */ 
