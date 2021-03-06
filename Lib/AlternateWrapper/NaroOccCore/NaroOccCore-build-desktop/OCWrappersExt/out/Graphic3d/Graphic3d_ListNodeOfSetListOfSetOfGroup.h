// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_ListNodeOfSetListOfSetOfGroup_OCWrappers_HeaderFile
#define _Graphic3d_ListNodeOfSetListOfSetOfGroup_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_ListNodeOfSetListOfSetOfGroup.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCGraphic3d_Group;
ref class OCGraphic3d_SetListOfSetOfGroup;
ref class OCGraphic3d_ListIteratorOfSetListOfSetOfGroup;



public ref class OCGraphic3d_ListNodeOfSetListOfSetOfGroup : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCGraphic3d_ListNodeOfSetListOfSetOfGroup(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_ListNodeOfSetListOfSetOfGroup(Handle(Graphic3d_ListNodeOfSetListOfSetOfGroup)* nativeHandle);

// Methods PUBLIC


OCGraphic3d_ListNodeOfSetListOfSetOfGroup(OCNaroWrappers::OCGraphic3d_Group^ I, TCollection_MapNodePtr n);


 /*instead*/  OCGraphic3d_Group^ Value() ;

~OCGraphic3d_ListNodeOfSetListOfSetOfGroup()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
