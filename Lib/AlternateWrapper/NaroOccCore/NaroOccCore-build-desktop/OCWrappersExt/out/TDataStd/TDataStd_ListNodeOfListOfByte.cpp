// File generated by CPPExt (CPP file)
//

#include "TDataStd_ListNodeOfListOfByte.h"
#include "../Converter.h"
#include "TDataStd_ListOfByte.h"
#include "TDataStd_ListIteratorOfListOfByte.h"


using namespace OCNaroWrappers;

OCTDataStd_ListNodeOfListOfByte::OCTDataStd_ListNodeOfListOfByte(Handle(TDataStd_ListNodeOfListOfByte)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_ListNodeOfListOfByte(*nativeHandle);
}

OCTDataStd_ListNodeOfListOfByte::OCTDataStd_ListNodeOfListOfByte(Standard_Byte I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_ListNodeOfListOfByte(new TDataStd_ListNodeOfListOfByte(I, n));
}

 Standard_Byte OCTDataStd_ListNodeOfListOfByte::Value()
{
  return (*((Handle_TDataStd_ListNodeOfListOfByte*)nativeHandle))->Value();
}


