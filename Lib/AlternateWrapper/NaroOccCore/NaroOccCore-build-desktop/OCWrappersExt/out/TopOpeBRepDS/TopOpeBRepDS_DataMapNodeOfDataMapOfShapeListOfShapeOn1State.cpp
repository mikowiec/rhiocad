// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepDS_ListOfShapeOn1State.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.h"
#include "TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeListOfShapeOn1State.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State::OCTopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State(Handle(TopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State(*nativeHandle);
}

OCTopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State::OCTopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopOpeBRepDS_ListOfShapeOn1State^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State(new TopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State(*((TopoDS_Shape*)K->Handle), *((TopOpeBRepDS_ListOfShapeOn1State*)I->Handle), n));
}

OCTopoDS_Shape^ OCTopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopOpeBRepDS_ListOfShapeOn1State^ OCTopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State::Value()
{
  TopOpeBRepDS_ListOfShapeOn1State* tmp = new TopOpeBRepDS_ListOfShapeOn1State();
  *tmp = (*((Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfShapeListOfShapeOn1State*)nativeHandle))->Value();
  return gcnew OCTopOpeBRepDS_ListOfShapeOn1State(tmp);
}

