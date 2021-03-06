// File generated by CPPExt (CPP file)
//

#include "TColStd_IndexedMapOfInteger.h"
#include "../Converter.h"
#include "TColStd_MapIntegerHasher.h"
#include "TColStd_IndexedMapNodeOfIndexedMapOfInteger.h"


using namespace OCNaroWrappers;

OCTColStd_IndexedMapOfInteger::OCTColStd_IndexedMapOfInteger(TColStd_IndexedMapOfInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_IndexedMapOfInteger::OCTColStd_IndexedMapOfInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_IndexedMapOfInteger(NbBuckets);
}

OCTColStd_IndexedMapOfInteger^ OCTColStd_IndexedMapOfInteger::Assign(OCNaroWrappers::OCTColStd_IndexedMapOfInteger^ Other)
{
  TColStd_IndexedMapOfInteger* tmp = new TColStd_IndexedMapOfInteger(0);
  *tmp = ((TColStd_IndexedMapOfInteger*)nativeHandle)->Assign(*((TColStd_IndexedMapOfInteger*)Other->Handle));
  return gcnew OCTColStd_IndexedMapOfInteger(tmp);
}

 void OCTColStd_IndexedMapOfInteger::ReSize(Standard_Integer NbBuckets)
{
  ((TColStd_IndexedMapOfInteger*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTColStd_IndexedMapOfInteger::Add(Standard_Integer K)
{
  return ((TColStd_IndexedMapOfInteger*)nativeHandle)->Add(K);
}

 void OCTColStd_IndexedMapOfInteger::Substitute(Standard_Integer I, Standard_Integer K)
{
  ((TColStd_IndexedMapOfInteger*)nativeHandle)->Substitute(I, K);
}

 void OCTColStd_IndexedMapOfInteger::RemoveLast()
{
  ((TColStd_IndexedMapOfInteger*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTColStd_IndexedMapOfInteger::Contains(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_IndexedMapOfInteger*)nativeHandle)->Contains(K));
}

 Standard_Integer OCTColStd_IndexedMapOfInteger::FindKey(Standard_Integer I)
{
  return ((TColStd_IndexedMapOfInteger*)nativeHandle)->FindKey(I);
}

 Standard_Integer OCTColStd_IndexedMapOfInteger::FindIndex(Standard_Integer K)
{
  return ((TColStd_IndexedMapOfInteger*)nativeHandle)->FindIndex(K);
}


