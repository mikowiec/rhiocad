// File generated by CPPExt (CPP file)
//

#include "IntTools_SequenceOfCommonPrts.h"
#include "../Converter.h"
#include "IntTools_CommonPrt.h"
#include "IntTools_SequenceNodeOfSequenceOfCommonPrts.h"


using namespace OCNaroWrappers;

OCIntTools_SequenceOfCommonPrts::OCIntTools_SequenceOfCommonPrts(IntTools_SequenceOfCommonPrts* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntTools_SequenceOfCommonPrts::OCIntTools_SequenceOfCommonPrts() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new IntTools_SequenceOfCommonPrts();
}

OCIntTools_SequenceOfCommonPrts^ OCIntTools_SequenceOfCommonPrts::Assign(OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ Other)
{
  IntTools_SequenceOfCommonPrts* tmp = new IntTools_SequenceOfCommonPrts();
  *tmp = ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Assign(*((IntTools_SequenceOfCommonPrts*)Other->Handle));
  return gcnew OCIntTools_SequenceOfCommonPrts(tmp);
}

 void OCIntTools_SequenceOfCommonPrts::Append(OCNaroWrappers::OCIntTools_CommonPrt^ T)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Append(*((IntTools_CommonPrt*)T->Handle));
}

 void OCIntTools_SequenceOfCommonPrts::Append(OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Append(*((IntTools_SequenceOfCommonPrts*)S->Handle));
}

 void OCIntTools_SequenceOfCommonPrts::Prepend(OCNaroWrappers::OCIntTools_CommonPrt^ T)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Prepend(*((IntTools_CommonPrt*)T->Handle));
}

 void OCIntTools_SequenceOfCommonPrts::Prepend(OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Prepend(*((IntTools_SequenceOfCommonPrts*)S->Handle));
}

 void OCIntTools_SequenceOfCommonPrts::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_CommonPrt^ T)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->InsertBefore(Index, *((IntTools_CommonPrt*)T->Handle));
}

 void OCIntTools_SequenceOfCommonPrts::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->InsertBefore(Index, *((IntTools_SequenceOfCommonPrts*)S->Handle));
}

 void OCIntTools_SequenceOfCommonPrts::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_CommonPrt^ T)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->InsertAfter(Index, *((IntTools_CommonPrt*)T->Handle));
}

 void OCIntTools_SequenceOfCommonPrts::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ S)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->InsertAfter(Index, *((IntTools_SequenceOfCommonPrts*)S->Handle));
}

OCIntTools_CommonPrt^ OCIntTools_SequenceOfCommonPrts::First()
{
  IntTools_CommonPrt* tmp = new IntTools_CommonPrt();
  *tmp = ((IntTools_SequenceOfCommonPrts*)nativeHandle)->First();
  return gcnew OCIntTools_CommonPrt(tmp);
}

OCIntTools_CommonPrt^ OCIntTools_SequenceOfCommonPrts::Last()
{
  IntTools_CommonPrt* tmp = new IntTools_CommonPrt();
  *tmp = ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Last();
  return gcnew OCIntTools_CommonPrt(tmp);
}

 void OCIntTools_SequenceOfCommonPrts::Split(Standard_Integer Index, OCNaroWrappers::OCIntTools_SequenceOfCommonPrts^ Sub)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Split(Index, *((IntTools_SequenceOfCommonPrts*)Sub->Handle));
}

OCIntTools_CommonPrt^ OCIntTools_SequenceOfCommonPrts::Value(Standard_Integer Index)
{
  IntTools_CommonPrt* tmp = new IntTools_CommonPrt();
  *tmp = ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Value(Index);
  return gcnew OCIntTools_CommonPrt(tmp);
}

 void OCIntTools_SequenceOfCommonPrts::SetValue(Standard_Integer Index, OCNaroWrappers::OCIntTools_CommonPrt^ I)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->SetValue(Index, *((IntTools_CommonPrt*)I->Handle));
}

OCIntTools_CommonPrt^ OCIntTools_SequenceOfCommonPrts::ChangeValue(Standard_Integer Index)
{
  IntTools_CommonPrt* tmp = new IntTools_CommonPrt();
  *tmp = ((IntTools_SequenceOfCommonPrts*)nativeHandle)->ChangeValue(Index);
  return gcnew OCIntTools_CommonPrt(tmp);
}

 void OCIntTools_SequenceOfCommonPrts::Remove(Standard_Integer Index)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Remove(Index);
}

 void OCIntTools_SequenceOfCommonPrts::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((IntTools_SequenceOfCommonPrts*)nativeHandle)->Remove(FromIndex, ToIndex);
}


