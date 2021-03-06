// File generated by CPPExt (CPP file)
//

#include "BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BOP_ListOfFaceInfo.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BOP_IndexedDataMapOfEdgeListFaceInfo.h"


using namespace OCNaroWrappers;

OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo::OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo(Handle(BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo(*nativeHandle);
}

OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo::OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, OCNaroWrappers::OCBOP_ListOfFaceInfo^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo(new BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo(*((TopoDS_Shape*)K1->Handle), K2, *((BOP_ListOfFaceInfo*)I->Handle), n1, n2));
}

OCTopoDS_Shape^ OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo::Key1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo*)nativeHandle))->Key1();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo::Key2()
{
  return (*((Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo::Next2()
{
  return (*((Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo*)nativeHandle))->Next2();
}

OCBOP_ListOfFaceInfo^ OCBOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo::Value()
{
  BOP_ListOfFaceInfo* tmp = new BOP_ListOfFaceInfo();
  *tmp = (*((Handle_BOP_IndexedDataMapNodeOfIndexedDataMapOfEdgeListFaceInfo*)nativeHandle))->Value();
  return gcnew OCBOP_ListOfFaceInfo(tmp);
}


