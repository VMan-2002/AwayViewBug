#ifndef INCLUDED_away3d_primitives_WireframeSphere
#define INCLUDED_away3d_primitives_WireframeSphere

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
HX_DECLARE_CLASS2(away3d,primitives,WireframePrimitiveBase)
HX_DECLARE_CLASS2(away3d,primitives,WireframeSphere)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES WireframeSphere_obj : public  ::away3d::primitives::WireframePrimitiveBase_obj
{
	public:
		typedef  ::away3d::primitives::WireframePrimitiveBase_obj super;
		typedef WireframeSphere_obj OBJ_;
		WireframeSphere_obj();

	public:
		enum { _hx_ClassId = 0x6b918b26 };

		void __construct(::hx::Null< Float >  __o_radius,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.primitives.WireframeSphere")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.primitives.WireframeSphere"); }
		static ::hx::ObjectPtr< WireframeSphere_obj > __new(::hx::Null< Float >  __o_radius,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		static ::hx::ObjectPtr< WireframeSphere_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_radius,::hx::Null< int >  __o_segmentsW,::hx::Null< int >  __o_segmentsH,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_thickness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WireframeSphere_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WireframeSphere",d5,1a,17,16); }

		int _segmentsW;
		int _segmentsH;
		Float _radius;
		void buildGeometry();

};

} // end namespace away3d
} // end namespace primitives

#endif /* INCLUDED_away3d_primitives_WireframeSphere */ 
