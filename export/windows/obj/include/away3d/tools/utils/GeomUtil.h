#ifndef INCLUDED_away3d_tools_utils_GeomUtil
#define INCLUDED_away3d_tools_utils_GeomUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(away3d,core,base,CompactSubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,IMaterialOwner)
HX_DECLARE_CLASS3(away3d,core,base,IRenderable)
HX_DECLARE_CLASS3(away3d,core,base,ISubGeometry)
HX_DECLARE_CLASS3(away3d,core,base,SubGeometryBase)
HX_DECLARE_CLASS3(away3d,core,base,SubMesh)
HX_DECLARE_CLASS3(away3d,tools,utils,GeomUtil)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)

namespace away3d{
namespace tools{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES GeomUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GeomUtil_obj OBJ_;
		GeomUtil_obj();

	public:
		enum { _hx_ClassId = 0x72923833 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="away3d.tools.utils.GeomUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"away3d.tools.utils.GeomUtil"); }

		inline static ::hx::ObjectPtr< GeomUtil_obj > __new() {
			::hx::ObjectPtr< GeomUtil_obj > __this = new GeomUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GeomUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GeomUtil_obj *__this = (GeomUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GeomUtil_obj), false, "away3d.tools.utils.GeomUtil"));
			*(void **)__this = GeomUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GeomUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GeomUtil",fe,4c,c7,a1); }

		static void __boot();
		static int LIMIT_VERTS;
		static int LIMIT_INDICES;
		static  ::openfl::_Vector::ObjectVector fromVectors( ::openfl::_Vector::FloatVector verts, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents, ::openfl::_Vector::FloatVector weights, ::openfl::_Vector::FloatVector jointIndices,::hx::Null< int >  triangleOffset);
		static ::Dynamic fromVectors_dyn();

		static  ::away3d::core::base::CompactSubGeometry constructSubGeometry( ::openfl::_Vector::FloatVector verts, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents, ::openfl::_Vector::FloatVector weights, ::openfl::_Vector::FloatVector jointIndices,int triangleOffset);
		static ::Dynamic constructSubGeometry_dyn();

		static  ::openfl::_Vector::FloatVector interleaveBuffers(int numVertices, ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::FloatVector normals, ::openfl::_Vector::FloatVector tangents, ::openfl::_Vector::FloatVector uvs, ::openfl::_Vector::FloatVector suvs);
		static ::Dynamic interleaveBuffers_dyn();

		static int getMeshSubgeometryIndex(::Dynamic subGeometry);
		static ::Dynamic getMeshSubgeometryIndex_dyn();

		static int getMeshSubMeshIndex( ::away3d::core::base::SubMesh subMesh);
		static ::Dynamic getMeshSubMeshIndex_dyn();

};

} // end namespace away3d
} // end namespace tools
} // end namespace utils

#endif /* INCLUDED_away3d_tools_utils_GeomUtil */ 
