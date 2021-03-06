// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRep_DataMapNodeOfDataMapOfShapeInteger_OCWrappers_HeaderFile
#define _TopOpeBRep_DataMapNodeOfDataMapOfShapeInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRep_DataMapNodeOfDataMapOfShapeInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRep_DataMapOfShapeInteger;
ref class OCTopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger;



public ref class OCTopOpeBRep_DataMapNodeOfDataMapOfShapeInteger : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopOpeBRep_DataMapNodeOfDataMapOfShapeInteger(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRep_DataMapNodeOfDataMapOfShapeInteger(Handle(TopOpeBRep_DataMapNodeOfDataMapOfShapeInteger)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_DataMapNodeOfDataMapOfShapeInteger(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Integer I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Integer Value() ;

~OCTopOpeBRep_DataMapNodeOfDataMapOfShapeInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
