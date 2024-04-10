#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_containers_Scene3D
#include <away3d/containers/Scene3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_partition_Partition3D
#include <away3d/core/partition/Partition3D.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_events_Scene3DEvent
#include <away3d/events/Scene3DEvent.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b50b4dabe121e3df_32_new,"away3d.containers.Scene3D","new",0x9d5e08c2,"away3d.containers.Scene3D.new","away3d/containers/Scene3D.hx",32,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_49_traversePartitions,"away3d.containers.Scene3D","traversePartitions",0xd232e579,"away3d.containers.Scene3D.traversePartitions","away3d/containers/Scene3D.hx",49,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_64_get_partition,"away3d.containers.Scene3D","get_partition",0x6948bca3,"away3d.containers.Scene3D.get_partition","away3d/containers/Scene3D.hx",64,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_68_set_partition,"away3d.containers.Scene3D","set_partition",0xae4e9eaf,"away3d.containers.Scene3D.set_partition","away3d/containers/Scene3D.hx",68,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_77_contains,"away3d.containers.Scene3D","contains",0x365f7e7d,"away3d.containers.Scene3D.contains","away3d/containers/Scene3D.hx",77,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_87_addChild,"away3d.containers.Scene3D","addChild",0xc8faf419,"away3d.containers.Scene3D.addChild","away3d/containers/Scene3D.hx",87,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_96_removeChild,"away3d.containers.Scene3D","removeChild",0x8a59f11a,"away3d.containers.Scene3D.removeChild","away3d/containers/Scene3D.hx",96,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_105_removeChildAt,"away3d.containers.Scene3D","removeChildAt",0x498c24ad,"away3d.containers.Scene3D.removeChildAt","away3d/containers/Scene3D.hx",105,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_115_getChildAt,"away3d.containers.Scene3D","getChildAt",0x1c8a7f97,"away3d.containers.Scene3D.getChildAt","away3d/containers/Scene3D.hx",115,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_123_get_numChildren,"away3d.containers.Scene3D","get_numChildren",0xf090649e,"away3d.containers.Scene3D.get_numChildren","away3d/containers/Scene3D.hx",123,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_131_registerEntity,"away3d.containers.Scene3D","registerEntity",0xa1d658c4,"away3d.containers.Scene3D.registerEntity","away3d/containers/Scene3D.hx",131,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_144_unregisterEntity,"away3d.containers.Scene3D","unregisterEntity",0xcdcbbc5d,"away3d.containers.Scene3D.unregisterEntity","away3d/containers/Scene3D.hx",144,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_152_invalidateEntityBounds,"away3d.containers.Scene3D","invalidateEntityBounds",0x01c788f1,"away3d.containers.Scene3D.invalidateEntityBounds","away3d/containers/Scene3D.hx",152,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_160_registerPartition,"away3d.containers.Scene3D","registerPartition",0x3769d6e9,"away3d.containers.Scene3D.registerPartition","away3d/containers/Scene3D.hx",160,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_170_unregisterPartition,"away3d.containers.Scene3D","unregisterPartition",0x07d5f8f0,"away3d.containers.Scene3D.unregisterPartition","away3d/containers/Scene3D.hx",170,0xd83f7a8e)
HX_LOCAL_STACK_FRAME(_hx_pos_b50b4dabe121e3df_178_addPartitionUnique,"away3d.containers.Scene3D","addPartitionUnique",0x47901d58,"away3d.containers.Scene3D.addPartitionUnique","away3d/containers/Scene3D.hx",178,0xd83f7a8e)
namespace away3d{
namespace containers{

void Scene3D_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b50b4dabe121e3df_32_new)
HXLINE(  33)		int length = null();
HXDLIN(  33)		bool fixed = null();
HXDLIN(  33)		::Array< ::Dynamic> array = null();
HXDLIN(  33)		this->_partitions =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  34)		this->_sceneGraphRoot =  ::away3d::containers::ObjectContainer3D_obj::__alloc( HX_CTX );
HXLINE(  35)		this->_sceneGraphRoot->set_scene(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  36)		this->_sceneGraphRoot->_isRoot = true;
HXLINE(  37)		 ::away3d::containers::ObjectContainer3D _hx_tmp = this->_sceneGraphRoot;
HXDLIN(  37)		_hx_tmp->set_partition( ::away3d::core::partition::Partition3D_obj::__alloc( HX_CTX , ::away3d::core::partition::NodeBase_obj::__alloc( HX_CTX )));
HXLINE(  38)		super::__construct(null());
            	}

Dynamic Scene3D_obj::__CreateEmpty() { return new Scene3D_obj; }

void *Scene3D_obj::_hx_vtable = 0;

Dynamic Scene3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scene3D_obj > _hx_result = new Scene3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Scene3D_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x1714c148;
	}
}

void Scene3D_obj::traversePartitions( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_49_traversePartitions)
HXLINE(  50)		int i = 0;
HXLINE(  51)		int len = this->_partitions->get_length();
HXLINE(  53)		traverser->scene = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  55)		while((i < len)){
HXLINE(  56)			i = (i + 1);
HXDLIN(  56)			this->_partitions->get((i - 1)).StaticCast<  ::away3d::core::partition::Partition3D >()->traverse(traverser);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,traversePartitions,(void))

 ::away3d::core::partition::Partition3D Scene3D_obj::get_partition(){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_64_get_partition)
HXDLIN(  64)		return this->_sceneGraphRoot->get_partition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene3D_obj,get_partition,return )

 ::away3d::core::partition::Partition3D Scene3D_obj::set_partition( ::away3d::core::partition::Partition3D value){
            	HX_GC_STACKFRAME(&_hx_pos_b50b4dabe121e3df_68_set_partition)
HXLINE(  69)		this->_sceneGraphRoot->set_partition(value);
HXLINE(  71)		this->dispatchEvent( ::away3d::events::Scene3DEvent_obj::__alloc( HX_CTX ,HX_("partitionChanged",2a,a8,20,c4),this->_sceneGraphRoot));
HXLINE(  72)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,set_partition,return )

bool Scene3D_obj::contains( ::away3d::containers::ObjectContainer3D child){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_77_contains)
HXDLIN(  77)		return this->_sceneGraphRoot->contains(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,contains,return )

 ::away3d::containers::ObjectContainer3D Scene3D_obj::addChild( ::away3d::containers::ObjectContainer3D child){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_87_addChild)
HXDLIN(  87)		return this->_sceneGraphRoot->addChild(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,addChild,return )

void Scene3D_obj::removeChild( ::away3d::containers::ObjectContainer3D child){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_96_removeChild)
HXDLIN(  96)		this->_sceneGraphRoot->removeChild(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,removeChild,(void))

void Scene3D_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_105_removeChildAt)
HXDLIN( 105)		this->_sceneGraphRoot->removeChildAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,removeChildAt,(void))

 ::away3d::containers::ObjectContainer3D Scene3D_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_115_getChildAt)
HXDLIN( 115)		return this->_sceneGraphRoot->getChildAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,getChildAt,return )

int Scene3D_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_123_get_numChildren)
HXDLIN( 123)		return this->_sceneGraphRoot->get_numChildren();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scene3D_obj,get_numChildren,return )

void Scene3D_obj::registerEntity( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_131_registerEntity)
HXLINE( 132)		 ::away3d::core::partition::Partition3D partition = entity->get_implicitPartition();
HXLINE( 133)		this->addPartitionUnique(partition);
HXLINE( 135)		partition->markForUpdate(entity);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,registerEntity,(void))

void Scene3D_obj::unregisterEntity( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_144_unregisterEntity)
HXDLIN( 144)		entity->get_implicitPartition()->removeEntity(entity);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,unregisterEntity,(void))

void Scene3D_obj::invalidateEntityBounds( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_152_invalidateEntityBounds)
HXDLIN( 152)		entity->get_implicitPartition()->markForUpdate(entity);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,invalidateEntityBounds,(void))

void Scene3D_obj::registerPartition( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_160_registerPartition)
HXDLIN( 160)		this->addPartitionUnique(entity->get_implicitPartition());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,registerPartition,(void))

void Scene3D_obj::unregisterPartition( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_170_unregisterPartition)
HXDLIN( 170)		entity->get_implicitPartition()->removeEntity(entity);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,unregisterPartition,(void))

void Scene3D_obj::addPartitionUnique( ::away3d::core::partition::Partition3D partition){
            	HX_STACKFRAME(&_hx_pos_b50b4dabe121e3df_178_addPartitionUnique)
HXDLIN( 178)		if ((this->_partitions->indexOf(partition,0) == -1)) {
HXLINE( 179)			this->_partitions->push(partition);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scene3D_obj,addPartitionUnique,(void))


::hx::ObjectPtr< Scene3D_obj > Scene3D_obj::__new() {
	::hx::ObjectPtr< Scene3D_obj > __this = new Scene3D_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Scene3D_obj > Scene3D_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Scene3D_obj *__this = (Scene3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scene3D_obj), true, "away3d.containers.Scene3D"));
	*(void **)__this = Scene3D_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Scene3D_obj::Scene3D_obj()
{
}

void Scene3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene3D);
	HX_MARK_MEMBER_NAME(_sceneGraphRoot,"_sceneGraphRoot");
	HX_MARK_MEMBER_NAME(_partitions,"_partitions");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sceneGraphRoot,"_sceneGraphRoot");
	HX_VISIT_MEMBER_NAME(_partitions,"_partitions");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Scene3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"partition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_partition() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"_partitions") ) { return ::hx::Val( _partitions ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_partition") ) { return ::hx::Val( get_partition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_partition") ) { return ::hx::Val( set_partition_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerEntity") ) { return ::hx::Val( registerEntity_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_sceneGraphRoot") ) { return ::hx::Val( _sceneGraphRoot ); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unregisterEntity") ) { return ::hx::Val( unregisterEntity_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerPartition") ) { return ::hx::Val( registerPartition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"traversePartitions") ) { return ::hx::Val( traversePartitions_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPartitionUnique") ) { return ::hx::Val( addPartitionUnique_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unregisterPartition") ) { return ::hx::Val( unregisterPartition_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"invalidateEntityBounds") ) { return ::hx::Val( invalidateEntityBounds_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scene3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"partition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_partition(inValue.Cast<  ::away3d::core::partition::Partition3D >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_partitions") ) { _partitions=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_sceneGraphRoot") ) { _sceneGraphRoot=inValue.Cast<  ::away3d::containers::ObjectContainer3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("partition",ea,a1,bf,9d));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("_sceneGraphRoot",43,ae,60,7f));
	outFields->push(HX_("_partitions",68,d8,77,3c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scene3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::containers::ObjectContainer3D */ ,(int)offsetof(Scene3D_obj,_sceneGraphRoot),HX_("_sceneGraphRoot",43,ae,60,7f)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(Scene3D_obj,_partitions),HX_("_partitions",68,d8,77,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Scene3D_obj_sStaticStorageInfo = 0;
#endif

static ::String Scene3D_obj_sMemberFields[] = {
	HX_("_sceneGraphRoot",43,ae,60,7f),
	HX_("_partitions",68,d8,77,3c),
	HX_("traversePartitions",9b,5f,8e,6a),
	HX_("get_partition",c1,75,23,5f),
	HX_("set_partition",cd,57,29,a4),
	HX_("contains",1f,5a,7b,2c),
	HX_("addChild",bb,cf,16,bf),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("registerEntity",e6,99,5d,cb),
	HX_("unregisterEntity",ff,09,7f,d8),
	HX_("invalidateEntityBounds",13,bc,07,da),
	HX_("registerPartition",07,77,9a,89),
	HX_("unregisterPartition",8e,5c,85,bf),
	HX_("addPartitionUnique",7a,97,eb,df),
	::String(null()) };

::hx::Class Scene3D_obj::__mClass;

void Scene3D_obj::__register()
{
	Scene3D_obj _hx_dummy;
	Scene3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.containers.Scene3D",d0,3f,be,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scene3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scene3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scene3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scene3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace containers
