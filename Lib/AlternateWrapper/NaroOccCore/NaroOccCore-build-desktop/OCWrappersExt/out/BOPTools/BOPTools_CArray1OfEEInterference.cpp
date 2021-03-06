// File generated by CPPExt (CPP file)
//

#include "BOPTools_CArray1OfEEInterference.h"
#include "../Converter.h"
#include "BOPTools_EEInterference.h"


using namespace OCNaroWrappers;

OCBOPTools_CArray1OfEEInterference::OCBOPTools_CArray1OfEEInterference(BOPTools_CArray1OfEEInterference* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_CArray1OfEEInterference::OCBOPTools_CArray1OfEEInterference(Standard_Integer Length, Standard_Integer BlockLength) 
{
  nativeHandle = new BOPTools_CArray1OfEEInterference(Length, BlockLength);
}

 void OCBOPTools_CArray1OfEEInterference::Resize(Standard_Integer theNewLength)
{
  ((BOPTools_CArray1OfEEInterference*)nativeHandle)->Resize(theNewLength);
}

 Standard_Integer OCBOPTools_CArray1OfEEInterference::Length()
{
  return ((BOPTools_CArray1OfEEInterference*)nativeHandle)->Length();
}

 Standard_Integer OCBOPTools_CArray1OfEEInterference::Extent()
{
  return ((BOPTools_CArray1OfEEInterference*)nativeHandle)->Extent();
}

 Standard_Integer OCBOPTools_CArray1OfEEInterference::FactLength()
{
  return ((BOPTools_CArray1OfEEInterference*)nativeHandle)->FactLength();
}

 Standard_Integer OCBOPTools_CArray1OfEEInterference::Append(OCNaroWrappers::OCBOPTools_EEInterference^ Value)
{
  return ((BOPTools_CArray1OfEEInterference*)nativeHandle)->Append(*((BOPTools_EEInterference*)Value->Handle));
}

 void OCBOPTools_CArray1OfEEInterference::Remove(Standard_Integer Index)
{
  ((BOPTools_CArray1OfEEInterference*)nativeHandle)->Remove(Index);
}

OCBOPTools_EEInterference^ OCBOPTools_CArray1OfEEInterference::Value(Standard_Integer Index)
{
  BOPTools_EEInterference* tmp = new BOPTools_EEInterference();
  *tmp = ((BOPTools_CArray1OfEEInterference*)nativeHandle)->Value(Index);
  return gcnew OCBOPTools_EEInterference(tmp);
}

OCBOPTools_EEInterference^ OCBOPTools_CArray1OfEEInterference::ChangeValue(Standard_Integer Index)
{
  BOPTools_EEInterference* tmp = new BOPTools_EEInterference();
  *tmp = ((BOPTools_CArray1OfEEInterference*)nativeHandle)->ChangeValue(Index);
  return gcnew OCBOPTools_EEInterference(tmp);
}

 void OCBOPTools_CArray1OfEEInterference::SetBlockLength(Standard_Integer aBL)
{
  ((BOPTools_CArray1OfEEInterference*)nativeHandle)->SetBlockLength(aBL);
}

 Standard_Integer OCBOPTools_CArray1OfEEInterference::BlockLength()
{
  return ((BOPTools_CArray1OfEEInterference*)nativeHandle)->BlockLength();
}

 void OCBOPTools_CArray1OfEEInterference::Purge()
{
  ((BOPTools_CArray1OfEEInterference*)nativeHandle)->Purge();
}


