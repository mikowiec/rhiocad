// File generated by CPPExt (CPP file)
//

#include "BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColgp/TColgp_SequenceOfPnt.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepFill_DataMapOfShapeSequenceOfPnt.h"
#include "BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt.h"


using namespace OCNaroWrappers;

OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt::OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt(Handle(BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt(*nativeHandle);
}

OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt::OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTColgp_SequenceOfPnt^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt(new BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt(*((TopoDS_Shape*)K->Handle), *((TColgp_SequenceOfPnt*)I->Handle), n));
}

OCTopoDS_Shape^ OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTColgp_SequenceOfPnt^ OCBRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt::Value()
{
  TColgp_SequenceOfPnt* tmp = new TColgp_SequenceOfPnt();
  *tmp = (*((Handle_BRepFill_DataMapNodeOfDataMapOfShapeSequenceOfPnt*)nativeHandle))->Value();
  return gcnew OCTColgp_SequenceOfPnt(tmp);
}


