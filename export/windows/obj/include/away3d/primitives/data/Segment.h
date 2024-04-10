#ifndef INCLUDED_away3d_primitives_data_Segment
#define INCLUDED_away3d_primitives_data_Segment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,containers,ObjectContainer3D)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,Object3D)
HX_DECLARE_CLASS2(away3d,entities,Entity)
HX_DECLARE_CLASS2(away3d,entities,SegmentSet)
HX_DECLARE_CLASS3(away3d,library,assets,IAsset)
HX_DECLARE_CLASS3(away3d,library,assets,NamedAssetBase)
HX_DECLARE_CLASS3(away3d,primitives,data,Segment)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)

namespace away3d{
namespace primitives{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Segment_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Segment_obj OBJ_;
		Segment_obj();

	public:
		enum { _hx_ClassId = 0x34078196 };

		void __construct( ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  __o_colorStart,::hx::Null< int >  __o_colorEnd,::hx::Null< Float >  __o_thickness);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.primitives.data.Segment")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.primitives.data.Segment"); }
		static ::hx::ObjectPtr< Segment_obj > __new( ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  __o_colorStart,::hx::Null< int >  __o_colorEnd,::hx::Null< Float >  __o_thickness);
		static ::hx::ObjectPtr< Segment_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  __o_colorStart,::hx::Null< int >  __o_colorEnd,::hx::Null< Float >  __o_thickness);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Segment_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Segment",93,f7,1f,74); }

		 ::away3d::entities::SegmentSet _segmentsBase;
		Float _thickness;
		 ::openfl::geom::Vector3D _start;
		 ::openfl::geom::Vector3D _end;
		Float _startR;
		Float _startG;
		Float _startB;
		Float _endR;
		Float _endG;
		Float _endB;
		int _index;
		int _subSetIndex;
		int _startColor;
		int _endColor;
		void updateSegment( ::openfl::geom::Vector3D start, ::openfl::geom::Vector3D end, ::openfl::geom::Vector3D anchor,::hx::Null< int >  colorStart,::hx::Null< int >  colorEnd,::hx::Null< Float >  thickness);
		::Dynamic updateSegment_dyn();

		 ::openfl::geom::Vector3D get_start();
		::Dynamic get_start_dyn();

		 ::openfl::geom::Vector3D set_start( ::openfl::geom::Vector3D value);
		::Dynamic set_start_dyn();

		 ::openfl::geom::Vector3D get_end();
		::Dynamic get_end_dyn();

		 ::openfl::geom::Vector3D set_end( ::openfl::geom::Vector3D value);
		::Dynamic set_end_dyn();

		Float get_thickness();
		::Dynamic get_thickness_dyn();

		Float set_thickness(Float value);
		::Dynamic set_thickness_dyn();

		int get_startColor();
		::Dynamic get_startColor_dyn();

		int set_startColor(int color);
		::Dynamic set_startColor_dyn();

		int get_endColor();
		::Dynamic get_endColor_dyn();

		int set_endColor(int color);
		::Dynamic set_endColor_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		int get_index();
		::Dynamic get_index_dyn();

		int set_index(int ind);
		::Dynamic set_index_dyn();

		int get_subSetIndex();
		::Dynamic get_subSetIndex_dyn();

		int set_subSetIndex(int ind);
		::Dynamic set_subSetIndex_dyn();

		 ::away3d::entities::SegmentSet set_segmentsBase( ::away3d::entities::SegmentSet segBase);
		::Dynamic set_segmentsBase_dyn();

		void update();
		::Dynamic update_dyn();

};

} // end namespace away3d
} // end namespace primitives
} // end namespace data

#endif /* INCLUDED_away3d_primitives_data_Segment */ 
