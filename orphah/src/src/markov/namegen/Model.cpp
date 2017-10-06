// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_markov_namegen_Model
#include <markov/namegen/Model.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_57bad953b87c019a_43_new,"markov.namegen.Model","new",0x35ab5df8,"markov.namegen.Model.new","markov/namegen/Model.hx",43,0xd6b5c37a)
HX_LOCAL_STACK_FRAME(_hx_pos_57bad953b87c019a_65_generate,"markov.namegen.Model","generate",0x010a8a9d,"markov.namegen.Model.generate","markov/namegen/Model.hx",65,0xd6b5c37a)
HX_LOCAL_STACK_FRAME(_hx_pos_57bad953b87c019a_80_retrain,"markov.namegen.Model","retrain",0x2e4420cd,"markov.namegen.Model.retrain","markov/namegen/Model.hx",80,0xd6b5c37a)
HX_LOCAL_STACK_FRAME(_hx_pos_57bad953b87c019a_91_train,"markov.namegen.Model","train",0xfaa7b760,"markov.namegen.Model.train","markov/namegen/Model.hx",91,0xd6b5c37a)
HX_LOCAL_STACK_FRAME(_hx_pos_57bad953b87c019a_113_buildChains,"markov.namegen.Model","buildChains",0x226297b8,"markov.namegen.Model.buildChains","markov/namegen/Model.hx",113,0xd6b5c37a)
HX_LOCAL_STACK_FRAME(_hx_pos_57bad953b87c019a_131_countMatches,"markov.namegen.Model","countMatches",0x2ceae74c,"markov.namegen.Model.countMatches","markov/namegen/Model.hx",131,0xd6b5c37a)
HX_LOCAL_STACK_FRAME(_hx_pos_57bad953b87c019a_145_selectIndex,"markov.namegen.Model","selectIndex",0x3202840e,"markov.namegen.Model.selectIndex","markov/namegen/Model.hx",145,0xd6b5c37a)
namespace markov{
namespace namegen{

void Model_obj::__construct(::Array< ::String > data,int order,Float prior,::Array< ::String > alphabet){
            	HX_GC_STACKFRAME(&_hx_pos_57bad953b87c019a_43_new)
HXLINE(  44)		bool _hx_tmp;
HXDLIN(  44)		if (hx::IsNotNull( alphabet )) {
HXLINE(  44)			_hx_tmp = hx::IsNotNull( data );
            		}
            		else {
HXLINE(  44)			_hx_tmp = false;
            		}
HXDLIN(  44)		if (!(_hx_tmp)) {
HXLINE(  44)			HX_STACK_DO_THROW(HX_("FAIL: alphabet != null && data != null",b7,be,cb,f4));
            		}
HXLINE(  45)		bool _hx_tmp1;
HXDLIN(  45)		if ((alphabet->length > (int)0)) {
HXLINE(  45)			_hx_tmp1 = (data->length > (int)0);
            		}
            		else {
HXLINE(  45)			_hx_tmp1 = false;
            		}
HXDLIN(  45)		if (!(_hx_tmp1)) {
HXLINE(  45)			HX_STACK_DO_THROW(HX_("FAIL: alphabet.length > 0 && data.length > 0",8d,1d,1e,36));
            		}
HXLINE(  46)		bool _hx_tmp2;
HXDLIN(  46)		if ((prior >= (int)0)) {
HXLINE(  46)			_hx_tmp2 = (prior <= (int)1);
            		}
            		else {
HXLINE(  46)			_hx_tmp2 = false;
            		}
HXDLIN(  46)		if (!(_hx_tmp2)) {
HXLINE(  46)			HX_STACK_DO_THROW(HX_("FAIL: prior >= 0 && prior <= 1",11,ae,99,65));
            		}
HXLINE(  48)		this->order = order;
HXLINE(  49)		this->prior = prior;
HXLINE(  50)		this->alphabet = alphabet;
HXLINE(  52)		this->observations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  53)		this->train(data);
HXLINE(  54)		this->buildChains();
            	}

Dynamic Model_obj::__CreateEmpty() { return new Model_obj; }

void *Model_obj::_hx_vtable = 0;

Dynamic Model_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Model_obj > _hx_result = new Model_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Model_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25d5a178;
}

::String Model_obj::generate(::String context){
            	HX_STACKFRAME(&_hx_pos_57bad953b87c019a_65_generate)
HXLINE(  66)		if (!(hx::IsNotNull( context ))) {
HXLINE(  66)			HX_STACK_DO_THROW(HX_("FAIL: context != null",76,9d,42,02));
            		}
HXLINE(  67)		::Array< Float > chain = ( (::Array< Float >)(this->chains->get(context)) );
HXLINE(  68)		if (hx::IsNull( chain )) {
HXLINE(  69)			return null();
            		}
            		else {
HXLINE(  71)			if (!((chain->length > (int)0))) {
HXLINE(  71)				HX_STACK_DO_THROW(HX_("FAIL: chain.length > 0",e5,e9,32,db));
            			}
HXLINE(  72)			::Array< ::String > _hx_tmp = this->alphabet;
HXDLIN(  72)			return _hx_tmp->__get(::markov::namegen::Model_obj::selectIndex(chain));
            		}
HXLINE(  68)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,generate,return )

void Model_obj::retrain(::Array< ::String > data){
            	HX_STACKFRAME(&_hx_pos_57bad953b87c019a_80_retrain)
HXLINE(  81)		if (!(hx::IsNotNull( data ))) {
HXLINE(  81)			HX_STACK_DO_THROW(HX_("FAIL: data != null",39,b2,7c,50));
            		}
HXLINE(  82)		this->train(data);
HXLINE(  83)		this->buildChains();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,retrain,(void))

void Model_obj::train(::Array< ::String > data){
            	HX_STACKFRAME(&_hx_pos_57bad953b87c019a_91_train)
HXDLIN(  91)		while((data->length != (int)0)){
HXLINE(  92)			::String d = ( (::String)(data->pop()) );
HXLINE(  93)			int times = this->order;
HXDLIN(  93)			if (!(true)) {
HXLINE(  93)				HX_STACK_DO_THROW(HX_("FAIL: str != null",38,54,07,40));
            			}
HXDLIN(  93)			if (!((times >= (int)1))) {
HXLINE(  93)				HX_STACK_DO_THROW(HX_("FAIL: times >= 1",ae,97,08,7f));
            			}
HXDLIN(  93)			::String output = HX_("",00,00,00,00);
HXDLIN(  93)			{
HXLINE(  93)				int _g1 = (int)0;
HXDLIN(  93)				int _g = times;
HXDLIN(  93)				while((_g1 < _g)){
HXLINE(  93)					_g1 = (_g1 + (int)1);
HXDLIN(  93)					int i = (_g1 - (int)1);
HXDLIN(  93)					output = (output + HX_("#",23,00,00,00));
            				}
            			}
HXDLIN(  93)			d = ((output + d) + HX_("#",23,00,00,00));
HXLINE(  94)			{
HXLINE(  94)				int _g11 = (int)0;
HXDLIN(  94)				int _g2 = (d.length - this->order);
HXDLIN(  94)				while((_g11 < _g2)){
HXLINE(  94)					_g11 = (_g11 + (int)1);
HXDLIN(  94)					int i1 = (_g11 - (int)1);
HXLINE(  95)					::String key = d.substring(i1,(i1 + this->order));
HXLINE(  97)					::Array< ::String > value = ( (::Array< ::String >)(this->observations->get(key)) );
HXLINE(  98)					if (hx::IsNull( value )) {
HXLINE(  99)						value = ::Array_obj< ::String >::__new();
HXLINE( 100)						this->observations->set(key,value);
            					}
HXLINE( 102)					value->push(d.charAt((i1 + this->order)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,train,(void))

void Model_obj::buildChains(){
            	HX_GC_STACKFRAME(&_hx_pos_57bad953b87c019a_113_buildChains)
HXLINE( 114)		this->chains =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 116)		{
HXLINE( 116)			 ::Dynamic context = this->observations->keys();
HXDLIN( 116)			while(( (bool)(context->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 116)				::String context1 = ( (::String)(context->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 117)				int _g = (int)0;
HXDLIN( 117)				::Array< ::String > _g1 = this->alphabet;
HXDLIN( 117)				while((_g < _g1->length)){
HXLINE( 117)					::String prediction = _g1->__get(_g);
HXDLIN( 117)					_g = (_g + (int)1);
HXLINE( 118)					::Array< Float > value = ( (::Array< Float >)(this->chains->get(context1)) );
HXLINE( 119)					if (hx::IsNull( value )) {
HXLINE( 120)						value = ::Array_obj< Float >::__new();
HXLINE( 121)						this->chains->set(context1,value);
            					}
HXLINE( 123)					Float _hx_tmp = this->prior;
HXDLIN( 123)					::Array< ::String > arr = ( (::Array< ::String >)(this->observations->get(context1)) );
HXDLIN( 123)					int _hx_tmp1;
HXDLIN( 123)					if (hx::IsNull( arr )) {
HXLINE( 123)						_hx_tmp1 = (int)0;
            					}
            					else {
HXLINE( 123)						int i = (int)0;
HXDLIN( 123)						{
HXLINE( 123)							int _g2 = (int)0;
HXDLIN( 123)							while((_g2 < arr->length)){
HXLINE( 123)								::String s = arr->__get(_g2);
HXDLIN( 123)								_g2 = (_g2 + (int)1);
HXDLIN( 123)								if ((s == prediction)) {
HXLINE( 123)									i = (i + (int)1);
            								}
            							}
            						}
HXDLIN( 123)						_hx_tmp1 = i;
            					}
HXDLIN( 123)					value->push((_hx_tmp + _hx_tmp1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,buildChains,(void))

int Model_obj::countMatches(::Array< ::String > arr,::String v){
            	HX_STACKFRAME(&_hx_pos_57bad953b87c019a_131_countMatches)
HXLINE( 132)		if (hx::IsNull( arr )) {
HXLINE( 133)			return (int)0;
            		}
HXLINE( 136)		int i = (int)0;
HXLINE( 137)		{
HXLINE( 137)			int _g = (int)0;
HXDLIN( 137)			while((_g < arr->length)){
HXLINE( 137)				::String s = arr->__get(_g);
HXDLIN( 137)				_g = (_g + (int)1);
HXLINE( 138)				if ((s == v)) {
HXLINE( 139)					i = (i + (int)1);
            				}
            			}
            		}
HXLINE( 142)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Model_obj,countMatches,return )

int Model_obj::selectIndex(::Array< Float > chain){
            	HX_STACKFRAME(&_hx_pos_57bad953b87c019a_145_selectIndex)
HXLINE( 146)		::Array< Float > totals = ::Array_obj< Float >::__new();
HXLINE( 147)		Float accumulator = (int)0;
HXLINE( 149)		{
HXLINE( 149)			int _g = (int)0;
HXDLIN( 149)			while((_g < chain->length)){
HXLINE( 149)				Float weight = chain->__get(_g);
HXDLIN( 149)				_g = (_g + (int)1);
HXLINE( 150)				accumulator = (accumulator + weight);
HXLINE( 151)				totals->push(accumulator);
            			}
            		}
HXLINE( 154)		Float rand = (::Math_obj::random() * accumulator);
HXLINE( 155)		{
HXLINE( 155)			int _g1 = (int)0;
HXDLIN( 155)			int _g2 = totals->length;
HXDLIN( 155)			while((_g1 < _g2)){
HXLINE( 155)				_g1 = (_g1 + (int)1);
HXDLIN( 155)				int i = (_g1 - (int)1);
HXLINE( 156)				if ((rand < totals->__get(i))) {
HXLINE( 157)					return i;
            				}
            			}
            		}
HXLINE( 161)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Model_obj,selectIndex,return )


hx::ObjectPtr< Model_obj > Model_obj::__new(::Array< ::String > data,int order,Float prior,::Array< ::String > alphabet) {
	hx::ObjectPtr< Model_obj > __this = new Model_obj();
	__this->__construct(data,order,prior,alphabet);
	return __this;
}

hx::ObjectPtr< Model_obj > Model_obj::__alloc(hx::Ctx *_hx_ctx,::Array< ::String > data,int order,Float prior,::Array< ::String > alphabet) {
	Model_obj *__this = (Model_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Model_obj), true, "markov.namegen.Model"));
	*(void **)__this = Model_obj::_hx_vtable;
	__this->__construct(data,order,prior,alphabet);
	return __this;
}

Model_obj::Model_obj()
{
}

void Model_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Model);
	HX_MARK_MEMBER_NAME(order,"order");
	HX_MARK_MEMBER_NAME(prior,"prior");
	HX_MARK_MEMBER_NAME(alphabet,"alphabet");
	HX_MARK_MEMBER_NAME(observations,"observations");
	HX_MARK_MEMBER_NAME(chains,"chains");
	HX_MARK_END_CLASS();
}

void Model_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(order,"order");
	HX_VISIT_MEMBER_NAME(prior,"prior");
	HX_VISIT_MEMBER_NAME(alphabet,"alphabet");
	HX_VISIT_MEMBER_NAME(observations,"observations");
	HX_VISIT_MEMBER_NAME(chains,"chains");
}

hx::Val Model_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"order") ) { return hx::Val( order ); }
		if (HX_FIELD_EQ(inName,"prior") ) { return hx::Val( prior ); }
		if (HX_FIELD_EQ(inName,"train") ) { return hx::Val( train_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"chains") ) { return hx::Val( chains ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"retrain") ) { return hx::Val( retrain_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { return hx::Val( alphabet ); }
		if (HX_FIELD_EQ(inName,"generate") ) { return hx::Val( generate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildChains") ) { return hx::Val( buildChains_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"observations") ) { return hx::Val( observations ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Model_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"selectIndex") ) { outValue = selectIndex_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"countMatches") ) { outValue = countMatches_dyn(); return true; }
	}
	return false;
}

hx::Val Model_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"order") ) { order=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prior") ) { prior=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"chains") ) { chains=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { alphabet=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"observations") ) { observations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("order","\x8e","\xf0","\x20","\x35"));
	outFields->push(HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8"));
	outFields->push(HX_HCSTRING("alphabet","\xb3","\x7c","\x38","\x21"));
	outFields->push(HX_HCSTRING("observations","\x47","\xb8","\x08","\xee"));
	outFields->push(HX_HCSTRING("chains","\x52","\xcc","\x6e","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Model_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Model_obj,order),HX_HCSTRING("order","\x8e","\xf0","\x20","\x35")},
	{hx::fsFloat,(int)offsetof(Model_obj,prior),HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Model_obj,alphabet),HX_HCSTRING("alphabet","\xb3","\x7c","\x38","\x21")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Model_obj,observations),HX_HCSTRING("observations","\x47","\xb8","\x08","\xee")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Model_obj,chains),HX_HCSTRING("chains","\x52","\xcc","\x6e","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Model_obj_sStaticStorageInfo = 0;
#endif

static ::String Model_obj_sMemberFields[] = {
	HX_HCSTRING("order","\x8e","\xf0","\x20","\x35"),
	HX_HCSTRING("prior","\x0a","\x59","\x8b","\xc8"),
	HX_HCSTRING("alphabet","\xb3","\x7c","\x38","\x21"),
	HX_HCSTRING("observations","\x47","\xb8","\x08","\xee"),
	HX_HCSTRING("chains","\x52","\xcc","\x6e","\xb7"),
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	HX_HCSTRING("retrain","\x35","\xe7","\xb9","\xfc"),
	HX_HCSTRING("train","\xc8","\x93","\x1f","\x16"),
	HX_HCSTRING("buildChains","\x20","\xb2","\xdf","\x07"),
	::String(null()) };

static void Model_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Model_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Model_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Model_obj::__mClass,"__mClass");
};

#endif

hx::Class Model_obj::__mClass;

static ::String Model_obj_sStaticFields[] = {
	HX_HCSTRING("countMatches","\xe4","\xe7","\xe4","\x14"),
	HX_HCSTRING("selectIndex","\x76","\x9e","\x7f","\x17"),
	::String(null())
};

void Model_obj::__register()
{
	hx::Object *dummy = new Model_obj;
	Model_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("markov.namegen.Model","\x06","\x42","\xbf","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Model_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Model_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Model_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Model_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Model_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Model_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Model_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Model_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markov
} // end namespace namegen