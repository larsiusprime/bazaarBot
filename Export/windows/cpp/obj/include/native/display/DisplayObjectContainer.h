#ifndef INCLUDED_native_display_DisplayObjectContainer
#define INCLUDED_native_display_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/InteractiveObject.h>
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Point)
namespace native{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObjectContainer_obj : public ::native::display::InteractiveObject_obj{
	public:
		typedef ::native::display::InteractiveObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();
		Void __construct(Dynamic inHandle,::String inType);

	public:
		static hx::ObjectPtr< DisplayObjectContainer_obj > __new(Dynamic inHandle,::String inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DisplayObjectContainer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DisplayObjectContainer"); }

		virtual bool set_tabChildren( bool inValue);
		Dynamic set_tabChildren_dyn();

		virtual bool get_tabChildren( );
		Dynamic get_tabChildren_dyn();

		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

		virtual bool set_mouseChildren( bool inVal);
		Dynamic set_mouseChildren_dyn();

		virtual bool get_mouseChildren( );
		Dynamic get_mouseChildren_dyn();

		virtual Void swapChildrenAt( int index1,int index2);
		Dynamic swapChildrenAt_dyn();

		virtual Void swapChildren( ::native::display::DisplayObject child1,::native::display::DisplayObject child2);
		Dynamic swapChildren_dyn();

		virtual Void setChildIndex( ::native::display::DisplayObject child,int index);
		Dynamic setChildIndex_dyn();

		virtual ::native::display::DisplayObject removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual ::native::display::DisplayObject removeChild( ::native::display::DisplayObject child);
		Dynamic removeChild_dyn();

		virtual Void nmeSwapChildrenAt( int index1,int index2);
		Dynamic nmeSwapChildrenAt_dyn();

		virtual Void nmeSetChildIndex( ::native::display::DisplayObject child,int index);
		Dynamic nmeSetChildIndex_dyn();

		virtual Void nmeRemoveChildFromArray( ::native::display::DisplayObject child);
		Dynamic nmeRemoveChildFromArray_dyn();

		virtual Void nmeOnRemoved( ::native::display::DisplayObject inObj,bool inWasOnStage);

		virtual Void nmeOnAdded( ::native::display::DisplayObject inObj,bool inIsOnStage);

		virtual Void nmeGetObjectsUnderPoint( ::native::geom::Point point,Array< ::Dynamic > result);

		virtual int nmeGetChildIndex( ::native::display::DisplayObject child);
		Dynamic nmeGetChildIndex_dyn();

		virtual ::native::display::DisplayObject nmeFindByID( int inID);

		virtual Void nmeBroadcast( ::native::events::Event inEvt);

		virtual Void nmeAddChild( ::native::display::DisplayObject child);
		Dynamic nmeAddChild_dyn();

		virtual Array< ::Dynamic > getObjectsUnderPoint( ::native::geom::Point point);
		Dynamic getObjectsUnderPoint_dyn();

		virtual int getChildIndex( ::native::display::DisplayObject child);
		Dynamic getChildIndex_dyn();

		virtual ::native::display::DisplayObject getChildByName( ::String name);
		Dynamic getChildByName_dyn();

		virtual ::native::display::DisplayObject getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual bool contains( ::native::display::DisplayObject child);
		Dynamic contains_dyn();

		virtual bool areInaccessibleObjectsUnderPoint( ::native::geom::Point point);
		Dynamic areInaccessibleObjectsUnderPoint_dyn();

		virtual ::native::display::DisplayObject addChildAt( ::native::display::DisplayObject child,int index);
		Dynamic addChildAt_dyn();

		virtual ::native::display::DisplayObject addChild( ::native::display::DisplayObject child);
		Dynamic addChild_dyn();

		Array< ::Dynamic > nmeChildren;
		int numChildren;
		static Dynamic nme_create_display_object_container;
		static Dynamic &nme_create_display_object_container_dyn() { return nme_create_display_object_container;}
		static Dynamic nme_doc_add_child;
		static Dynamic &nme_doc_add_child_dyn() { return nme_doc_add_child;}
		static Dynamic nme_doc_remove_child;
		static Dynamic &nme_doc_remove_child_dyn() { return nme_doc_remove_child;}
		static Dynamic nme_doc_set_child_index;
		static Dynamic &nme_doc_set_child_index_dyn() { return nme_doc_set_child_index;}
		static Dynamic nme_doc_get_mouse_children;
		static Dynamic &nme_doc_get_mouse_children_dyn() { return nme_doc_get_mouse_children;}
		static Dynamic nme_doc_set_mouse_children;
		static Dynamic &nme_doc_set_mouse_children_dyn() { return nme_doc_set_mouse_children;}
		static Dynamic nme_doc_swap_children;
		static Dynamic &nme_doc_swap_children_dyn() { return nme_doc_swap_children;}
};

} // end namespace native
} // end namespace display

#endif /* INCLUDED_native_display_DisplayObjectContainer */ 
