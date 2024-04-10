#include <hxcpp.h>

#ifndef INCLUDED_away3d_containers_ObjectContainer3D
#include <away3d/containers/ObjectContainer3D.h>
#endif
#ifndef INCLUDED_away3d_core_base_IMaterialOwner
#include <away3d/core/base/IMaterialOwner.h>
#endif
#ifndef INCLUDED_away3d_core_base_IRenderable
#include <away3d/core/base/IRenderable.h>
#endif
#ifndef INCLUDED_away3d_core_base_Object3D
#include <away3d/core/base/Object3D.h>
#endif
#ifndef INCLUDED_away3d_core_partition_NodeBase
#include <away3d/core/partition/NodeBase.h>
#endif
#ifndef INCLUDED_away3d_core_traverse_PartitionTraverser
#include <away3d/core/traverse/PartitionTraverser.h>
#endif
#ifndef INCLUDED_away3d_entities_Entity
#include <away3d/entities/Entity.h>
#endif
#ifndef INCLUDED_away3d_entities_SegmentSet
#include <away3d/entities/SegmentSet.h>
#endif
#ifndef INCLUDED_away3d_library_assets_IAsset
#include <away3d/library/assets/IAsset.h>
#endif
#ifndef INCLUDED_away3d_library_assets_NamedAssetBase
#include <away3d/library/assets/NamedAssetBase.h>
#endif
#ifndef INCLUDED_away3d_primitives_WireframePrimitiveBase
#include <away3d/primitives/WireframePrimitiveBase.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_674cc181e58ab9f9_38_new,"away3d.core.partition.NodeBase","new",0x23a0eac9,"away3d.core.partition.NodeBase.new","away3d/core/partition/NodeBase.hx",38,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_47_get_showDebugBounds,"away3d.core.partition.NodeBase","get_showDebugBounds",0x7654f2ab,"away3d.core.partition.NodeBase.get_showDebugBounds","away3d/core/partition/NodeBase.hx",47,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_51_set_showDebugBounds,"away3d.core.partition.NodeBase","set_showDebugBounds",0xb2f1e5b7,"away3d.core.partition.NodeBase.set_showDebugBounds","away3d/core/partition/NodeBase.hx",51,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_73_get_parent,"away3d.core.partition.NodeBase","get_parent",0x03a069aa,"away3d.core.partition.NodeBase.get_parent","away3d/core/partition/NodeBase.hx",73,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_84_addNode,"away3d.core.partition.NodeBase","addNode",0xb33c4fac,"away3d.core.partition.NodeBase.addNode","away3d/core/partition/NodeBase.hx",84,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_104_removeNode,"away3d.core.partition.NodeBase","removeNode",0xebc4391d,"away3d.core.partition.NodeBase.removeNode","away3d/core/partition/NodeBase.hx",104,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_130_isInFrustum,"away3d.core.partition.NodeBase","isInFrustum",0x56f86c1c,"away3d.core.partition.NodeBase.isInFrustum","away3d/core/partition/NodeBase.hx",130,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_142_isIntersectingRay,"away3d.core.partition.NodeBase","isIntersectingRay",0x81f26fa6,"away3d.core.partition.NodeBase.isIntersectingRay","away3d/core/partition/NodeBase.hx",142,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_150_findPartitionForEntity,"away3d.core.partition.NodeBase","findPartitionForEntity",0xc0258d92,"away3d.core.partition.NodeBase.findPartitionForEntity","away3d/core/partition/NodeBase.hx",150,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_164_acceptTraverser,"away3d.core.partition.NodeBase","acceptTraverser",0xc778be41,"away3d.core.partition.NodeBase.acceptTraverser","away3d/core/partition/NodeBase.hx",164,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_180_createDebugBounds,"away3d.core.partition.NodeBase","createDebugBounds",0xdaac47b5,"away3d.core.partition.NodeBase.createDebugBounds","away3d/core/partition/NodeBase.hx",180,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_185_get_numEntities,"away3d.core.partition.NodeBase","get_numEntities",0xcb0d3227,"away3d.core.partition.NodeBase.get_numEntities","away3d/core/partition/NodeBase.hx",185,0xa0b6b606)
HX_LOCAL_STACK_FRAME(_hx_pos_674cc181e58ab9f9_189_updateNumEntities,"away3d.core.partition.NodeBase","updateNumEntities",0xfc90b347,"away3d.core.partition.NodeBase.updateNumEntities","away3d/core/partition/NodeBase.hx",189,0xa0b6b606)
namespace away3d{
namespace core{
namespace partition{

void NodeBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_674cc181e58ab9f9_38_new)
HXLINE(  39)		int length = null();
HXDLIN(  39)		bool fixed = null();
HXDLIN(  39)		::Array< ::Dynamic> array = null();
HXDLIN(  39)		this->_childNodes =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(  40)		this->_numEntities = 0;
HXLINE(  41)		this->_collectionMark = 0;
HXLINE(  42)		this->_numChildNodes = 0;
            	}

Dynamic NodeBase_obj::__CreateEmpty() { return new NodeBase_obj; }

void *NodeBase_obj::_hx_vtable = 0;

Dynamic NodeBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NodeBase_obj > _hx_result = new NodeBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NodeBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f9d173b;
}

bool NodeBase_obj::get_showDebugBounds(){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_47_get_showDebugBounds)
HXDLIN(  47)		return ::hx::IsNotNull( this->_debugPrimitive );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,get_showDebugBounds,return )

bool NodeBase_obj::set_showDebugBounds(bool value){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_51_set_showDebugBounds)
HXLINE(  52)		if ((::hx::IsNotNull( this->_debugPrimitive ) == value)) {
HXLINE(  53)			return value;
            		}
HXLINE(  55)		if (value) {
HXLINE(  56)			this->_debugPrimitive = this->createDebugBounds();
            		}
            		else {
HXLINE(  58)			this->_debugPrimitive->dispose();
HXLINE(  59)			this->_debugPrimitive = null();
            		}
HXLINE(  62)		{
HXLINE(  62)			int _g = 0;
HXDLIN(  62)			int _g1 = this->_numChildNodes;
HXDLIN(  62)			while((_g < _g1)){
HXLINE(  62)				_g = (_g + 1);
HXDLIN(  62)				int i = (_g - 1);
HXLINE(  63)				this->_childNodes->get(i).StaticCast<  ::away3d::core::partition::NodeBase >()->set_showDebugBounds(value);
            			}
            		}
HXLINE(  65)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,set_showDebugBounds,return )

 ::away3d::core::partition::NodeBase NodeBase_obj::get_parent(){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_73_get_parent)
HXDLIN(  73)		return this->_parent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,get_parent,return )

void NodeBase_obj::addNode( ::away3d::core::partition::NodeBase node){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_84_addNode)
HXLINE(  85)		node->_parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  86)		 ::away3d::core::partition::NodeBase _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  86)		_hx_tmp->_numEntities = (_hx_tmp->_numEntities + node->_numEntities);
HXLINE(  87)		this->_childNodes->set(this->_numChildNodes++,node).StaticCast<  ::away3d::core::partition::NodeBase >();
HXLINE(  88)		node->set_showDebugBounds(::hx::IsNotNull( this->_debugPrimitive ));
HXLINE(  91)		int numEntities = node->_numEntities;
HXLINE(  92)		node = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  94)		while(true){
HXLINE(  95)			 ::away3d::core::partition::NodeBase node1 = node;
HXDLIN(  95)			node1->_numEntities = (node1->_numEntities + numEntities);
HXLINE(  96)			node = node->_parent;
HXLINE(  94)			if (!(::hx::IsNotNull( node ))) {
HXLINE(  94)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,addNode,(void))

void NodeBase_obj::removeNode( ::away3d::core::partition::NodeBase node){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_104_removeNode)
HXLINE( 109)		int index = this->_childNodes->indexOf(node,0);
HXLINE( 110)		{
HXLINE( 110)			::Dynamic this1 = this->_childNodes;
HXDLIN( 110)			( ( ::openfl::_Vector::ObjectVector)(this1) )->set(index,this->_childNodes->get(--this->_numChildNodes).StaticCast<  ::away3d::core::partition::NodeBase >()).StaticCast<  ::away3d::core::partition::NodeBase >();
            		}
HXLINE( 111)		this->_childNodes->pop().StaticCast<  ::away3d::core::partition::NodeBase >();
HXLINE( 114)		int numEntities = node->_numEntities;
HXLINE( 115)		node = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 117)		while(true){
HXLINE( 118)			 ::away3d::core::partition::NodeBase node1 = node;
HXDLIN( 118)			node1->_numEntities = (node1->_numEntities - numEntities);
HXLINE( 119)			node = node->_parent;
HXLINE( 117)			if (!(::hx::IsNotNull( node ))) {
HXLINE( 117)				goto _hx_goto_7;
            			}
            		}
            		_hx_goto_7:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,removeNode,(void))

bool NodeBase_obj::isInFrustum( ::openfl::_Vector::ObjectVector planes,int numPlanes){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_130_isInFrustum)
HXDLIN( 130)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NodeBase_obj,isInFrustum,return )

bool NodeBase_obj::isIntersectingRay( ::openfl::geom::Vector3D rayPosition, ::openfl::geom::Vector3D rayDirection){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_142_isIntersectingRay)
HXDLIN( 142)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NodeBase_obj,isIntersectingRay,return )

 ::away3d::core::partition::NodeBase NodeBase_obj::findPartitionForEntity( ::away3d::entities::Entity entity){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_150_findPartitionForEntity)
HXDLIN( 150)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,findPartitionForEntity,return )

void NodeBase_obj::acceptTraverser( ::away3d::core::traverse::PartitionTraverser traverser){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_164_acceptTraverser)
HXLINE( 165)		bool _hx_tmp;
HXDLIN( 165)		if ((this->_numEntities == 0)) {
HXLINE( 165)			_hx_tmp = ::hx::IsNull( this->_debugPrimitive );
            		}
            		else {
HXLINE( 165)			_hx_tmp = false;
            		}
HXDLIN( 165)		if (_hx_tmp) {
HXLINE( 166)			return;
            		}
HXLINE( 168)		if (traverser->enterNode(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE( 169)			int i = 0;
HXLINE( 170)			while((i < this->_numChildNodes)){
HXLINE( 171)				i = (i + 1);
HXDLIN( 171)				this->_childNodes->get((i - 1)).StaticCast<  ::away3d::core::partition::NodeBase >()->acceptTraverser(traverser);
            			}
HXLINE( 173)			if (::hx::IsNotNull( this->_debugPrimitive )) {
HXLINE( 174)				traverser->applyRenderable(this->_debugPrimitive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,acceptTraverser,(void))

 ::away3d::primitives::WireframePrimitiveBase NodeBase_obj::createDebugBounds(){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_180_createDebugBounds)
HXDLIN( 180)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,createDebugBounds,return )

int NodeBase_obj::get_numEntities(){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_185_get_numEntities)
HXDLIN( 185)		return this->_numEntities;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NodeBase_obj,get_numEntities,return )

void NodeBase_obj::updateNumEntities(int value){
            	HX_STACKFRAME(&_hx_pos_674cc181e58ab9f9_189_updateNumEntities)
HXLINE( 190)		int diff = (value - this->_numEntities);
HXLINE( 191)		 ::away3d::core::partition::NodeBase node = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 193)		while(true){
HXLINE( 194)			 ::away3d::core::partition::NodeBase node1 = node;
HXDLIN( 194)			node1->_numEntities = (node1->_numEntities + diff);
HXLINE( 195)			node = node->_parent;
HXLINE( 193)			if (!(::hx::IsNotNull( node ))) {
HXLINE( 193)				goto _hx_goto_16;
            			}
            		}
            		_hx_goto_16:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NodeBase_obj,updateNumEntities,(void))


::hx::ObjectPtr< NodeBase_obj > NodeBase_obj::__new() {
	::hx::ObjectPtr< NodeBase_obj > __this = new NodeBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NodeBase_obj > NodeBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NodeBase_obj *__this = (NodeBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NodeBase_obj), true, "away3d.core.partition.NodeBase"));
	*(void **)__this = NodeBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NodeBase_obj::NodeBase_obj()
{
}

void NodeBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeBase);
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_childNodes,"_childNodes");
	HX_MARK_MEMBER_NAME(_numChildNodes,"_numChildNodes");
	HX_MARK_MEMBER_NAME(_debugPrimitive,"_debugPrimitive");
	HX_MARK_MEMBER_NAME(_numEntities,"_numEntities");
	HX_MARK_MEMBER_NAME(_collectionMark,"_collectionMark");
	HX_MARK_END_CLASS();
}

void NodeBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_childNodes,"_childNodes");
	HX_VISIT_MEMBER_NAME(_numChildNodes,"_numChildNodes");
	HX_VISIT_MEMBER_NAME(_debugPrimitive,"_debugPrimitive");
	HX_VISIT_MEMBER_NAME(_numEntities,"_numEntities");
	HX_VISIT_MEMBER_NAME(_collectionMark,"_collectionMark");
}

::hx::Val NodeBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_parent() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return ::hx::Val( _parent ); }
		if (HX_FIELD_EQ(inName,"addNode") ) { return ::hx::Val( addNode_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_parent") ) { return ::hx::Val( get_parent_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeNode") ) { return ::hx::Val( removeNode_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numEntities") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numEntities() ); }
		if (HX_FIELD_EQ(inName,"_childNodes") ) { return ::hx::Val( _childNodes ); }
		if (HX_FIELD_EQ(inName,"isInFrustum") ) { return ::hx::Val( isInFrustum_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { return ::hx::Val( _numEntities ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_numChildNodes") ) { return ::hx::Val( _numChildNodes ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_showDebugBounds() ); }
		if (HX_FIELD_EQ(inName,"_debugPrimitive") ) { return ::hx::Val( _debugPrimitive ); }
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { return ::hx::Val( _collectionMark ); }
		if (HX_FIELD_EQ(inName,"acceptTraverser") ) { return ::hx::Val( acceptTraverser_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numEntities") ) { return ::hx::Val( get_numEntities_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isIntersectingRay") ) { return ::hx::Val( isIntersectingRay_dyn() ); }
		if (HX_FIELD_EQ(inName,"createDebugBounds") ) { return ::hx::Val( createDebugBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateNumEntities") ) { return ::hx::Val( updateNumEntities_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_showDebugBounds") ) { return ::hx::Val( get_showDebugBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_showDebugBounds") ) { return ::hx::Val( set_showDebugBounds_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"findPartitionForEntity") ) { return ::hx::Val( findPartitionForEntity_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NodeBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast<  ::away3d::core::partition::NodeBase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_childNodes") ) { _childNodes=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_numEntities") ) { _numEntities=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_numChildNodes") ) { _numChildNodes=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"showDebugBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_showDebugBounds(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_debugPrimitive") ) { _debugPrimitive=inValue.Cast<  ::away3d::primitives::WireframePrimitiveBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collectionMark") ) { _collectionMark=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NodeBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("showDebugBounds",2b,e7,a7,24));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("numEntities",a7,e6,ab,7e));
	outFields->push(HX_("_parent",c9,16,f5,5b));
	outFields->push(HX_("_childNodes",14,f6,c3,10));
	outFields->push(HX_("_numChildNodes",1c,cf,23,57));
	outFields->push(HX_("_debugPrimitive",73,fc,16,12));
	outFields->push(HX_("_numEntities",a8,94,b5,e4));
	outFields->push(HX_("_collectionMark",2a,0a,3c,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NodeBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::away3d::core::partition::NodeBase */ ,(int)offsetof(NodeBase_obj,_parent),HX_("_parent",c9,16,f5,5b)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(NodeBase_obj,_childNodes),HX_("_childNodes",14,f6,c3,10)},
	{::hx::fsInt,(int)offsetof(NodeBase_obj,_numChildNodes),HX_("_numChildNodes",1c,cf,23,57)},
	{::hx::fsObject /*  ::away3d::primitives::WireframePrimitiveBase */ ,(int)offsetof(NodeBase_obj,_debugPrimitive),HX_("_debugPrimitive",73,fc,16,12)},
	{::hx::fsInt,(int)offsetof(NodeBase_obj,_numEntities),HX_("_numEntities",a8,94,b5,e4)},
	{::hx::fsInt,(int)offsetof(NodeBase_obj,_collectionMark),HX_("_collectionMark",2a,0a,3c,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NodeBase_obj_sStaticStorageInfo = 0;
#endif

static ::String NodeBase_obj_sMemberFields[] = {
	HX_("_parent",c9,16,f5,5b),
	HX_("_childNodes",14,f6,c3,10),
	HX_("_numChildNodes",1c,cf,23,57),
	HX_("_debugPrimitive",73,fc,16,12),
	HX_("_numEntities",a8,94,b5,e4),
	HX_("_collectionMark",2a,0a,3c,40),
	HX_("get_showDebugBounds",42,b6,b2,af),
	HX_("set_showDebugBounds",4e,a9,4f,ec),
	HX_("get_parent",f3,74,05,de),
	HX_("addNode",c3,4c,47,85),
	HX_("removeNode",66,44,29,c6),
	HX_("isInFrustum",b3,40,fd,94),
	HX_("isIntersectingRay",7d,4f,77,68),
	HX_("findPartitionForEntity",5b,e2,52,47),
	HX_("acceptTraverser",58,2a,f9,3b),
	HX_("createDebugBounds",8c,27,31,c1),
	HX_("get_numEntities",3e,9e,8d,3f),
	HX_("updateNumEntities",1e,93,15,e3),
	::String(null()) };

::hx::Class NodeBase_obj::__mClass;

void NodeBase_obj::__register()
{
	NodeBase_obj _hx_dummy;
	NodeBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("away3d.core.partition.NodeBase",57,d2,b7,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NodeBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NodeBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NodeBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NodeBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace away3d
} // end namespace core
} // end namespace partition
