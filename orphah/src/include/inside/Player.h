// Generated by Haxe 3.4.3
#ifndef INCLUDED_inside_Player
#define INCLUDED_inside_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(inside,Player)

namespace inside{


class HXCPP_CLASS_ATTRIBUTES Player_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x59f2be3d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="inside.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"inside.Player"); }
		static hx::ObjectPtr< Player_obj > __new();
		static hx::ObjectPtr< Player_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		static void main();
		static ::Dynamic main_dyn();

		 ::Dynamic get_player_params();
		::Dynamic get_player_params_dyn();

		 ::Dynamic params;
};

} // end namespace inside

#endif /* INCLUDED_inside_Player */ 