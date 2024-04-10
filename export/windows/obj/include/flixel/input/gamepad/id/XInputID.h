#ifndef INCLUDED_flixel_input_gamepad_id_XInputID
#define INCLUDED_flixel_input_gamepad_id_XInputID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,XInputID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES XInputID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef XInputID_obj OBJ_;
		XInputID_obj();

	public:
		enum { _hx_ClassId = 0x42843883 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.XInputID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.XInputID"); }

		inline static ::hx::ObjectPtr< XInputID_obj > __new() {
			::hx::ObjectPtr< XInputID_obj > __this = new XInputID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< XInputID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			XInputID_obj *__this = (XInputID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(XInputID_obj), false, "flixel.input.gamepad.id.XInputID"));
			*(void **)__this = XInputID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~XInputID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("XInputID",ed,fc,c6,4a); }

		static void __boot();
		static int A;
		static int B;
		static int X;
		static int Y;
		static int BACK;
		static int GUIDE;
		static int START;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int LB;
		static int RB;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_XInputID */ 
