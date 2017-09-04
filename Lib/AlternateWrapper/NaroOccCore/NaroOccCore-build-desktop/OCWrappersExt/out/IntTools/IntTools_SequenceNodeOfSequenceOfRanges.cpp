// File generated by CPPExt (CPP file)
//

#include "IntTools_SequenceNodeOfSequenceOfRanges.h"
#include "../Converter.h"
#include "IntTools_Range.h"
#include "IntTools_SequenceOfRanges.h"


using namespace OCNaroWrappers;

OCIntTools_SequenceNodeOfSequenceOfRanges::OCIntTools_SequenceNodeOfSequenceOfRanges(Handle(IntTools_SequenceNodeOfSequenceOfRanges)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IntTools_SequenceNodeOfSequenceOfRanges(*nativeHandle);
}

OCIntTools_SequenceNodeOfSequenceOfRanges::OCIntTools_SequenceNodeOfSequenceOfRanges(OCNaroWrappers::OCIntTools_Range^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IntTools_SequenceNodeOfSequenceOfRanges(new IntTools_SequenceNodeOfSequenceOfRanges(*((IntTools_Range*)I->Handle), n, p));
}

OCIntTools_Range^ OCIntTools_SequenceNodeOfSequenceOfRanges::Value()
{
  IntTools_Range* tmp = new IntTools_Range();
  *tmp = (*((Handle_IntTools_SequenceNodeOfSequenceOfRanges*)nativeHandle))->Value();
  return gcnew OCIntTools_Range(tmp);
}

