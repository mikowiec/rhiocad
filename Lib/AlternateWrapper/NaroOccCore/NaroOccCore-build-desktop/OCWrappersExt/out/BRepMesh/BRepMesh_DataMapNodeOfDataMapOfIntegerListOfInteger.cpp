// File generated by CPPExt (CPP file)
//

#include "BRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger.h"
#include "../Converter.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "BRepMesh_DataMapOfIntegerListOfInteger.h"
#include "BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfInteger.h"


using namespace OCNaroWrappers;

OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger::OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger(Handle(BRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger(*nativeHandle);
}

OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger::OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger(Standard_Integer K, BRepMesh_ListOfInteger I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger(new BRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger(K, I, n));
}

 Standard_Integer OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger::Key()
{
  return (*((Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger*)nativeHandle))->Key();
}

 BRepMesh_ListOfInteger& OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger::Value()
{
  return (*((Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerListOfInteger*)nativeHandle))->Value();
}

