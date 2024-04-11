#ifndef INCLUDED_object3d_VeView3D
#define INCLUDED_object3d_VeView3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS2(away3d,containers,View3D)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(object3d,VeView3D)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace object3d{


class HXCPP_CLASS_ATTRIBUTES VeView3D_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef VeView3D_obj OBJ_;
		VeView3D_obj();

	public:
		enum { _hx_ClassId = 0x1d46d9d5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="object3d.VeView3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"object3d.VeView3D"); }
		static ::hx::ObjectPtr< VeView3D_obj > __new();
		static ::hx::ObjectPtr< VeView3D_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VeView3D_obj();

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
		::String __ToString() const { return HX_("VeView3D",05,27,cb,b9); }

		static void __boot();
		static ::Array< ::Dynamic> viewSprites;
		static bool canDoResize;
		static bool initialized;
		static Float renderScale;
		static Float renderDescale;
		static void resizeFunc( ::Dynamic width, ::Dynamic height);
		static ::Dynamic resizeFunc_dyn();

		 ::openfl::display::BitmapData bmd;
		::String graphicId;
		Float pixelScale;
		bool shouldResize;
		Float myDescale;
		 ::away3d::containers::View3D view3d;
		void updateViewSize();
		::Dynamic updateViewSize_dyn();

		void destroy();

		void update(Float elapsed);

		void draw();

		void drawComplex( ::flixel::FlxCamera camera);

		Float set_pixelScale(Float value);
		::Dynamic set_pixelScale_dyn();

};

} // end namespace object3d

#endif /* INCLUDED_object3d_VeView3D */ 
