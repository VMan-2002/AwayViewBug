#ifndef INCLUDED_away3d_entities_SubSet
#define INCLUDED_away3d_entities_SubSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(away3d,entities,SubSet)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace away3d{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES SubSet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SubSet_obj OBJ_;
		SubSet_obj();

	public:
		enum { _hx_ClassId = 0x7c8fc922 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="away3d.entities.SubSet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"away3d.entities.SubSet"); }
		static ::hx::ObjectPtr< SubSet_obj > __new();
		static ::hx::ObjectPtr< SubSet_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SubSet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SubSet",22,0e,87,ce); }

		 ::openfl::_Vector::FloatVector vertices;
		int numVertices;
		 ::openfl::_Vector::IntVector indices;
		int numIndices;
		bool vertexBufferDirty;
		bool indexBufferDirty;
		 ::openfl::display3D::Context3D vertexContext3D;
		 ::openfl::display3D::Context3D indexContext3D;
		 ::openfl::display3D::VertexBuffer3D vertexBuffer;
		 ::openfl::display3D::IndexBuffer3D indexBuffer;
		int lineCount;
		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace away3d
} // end namespace entities

#endif /* INCLUDED_away3d_entities_SubSet */ 
