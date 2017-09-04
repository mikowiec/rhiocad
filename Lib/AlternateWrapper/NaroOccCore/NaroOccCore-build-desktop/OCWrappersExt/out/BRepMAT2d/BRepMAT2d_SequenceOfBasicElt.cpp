// File generated by CPPExt (CPP file)
//

#include "BRepMAT2d_SequenceOfBasicElt.h"
#include "../Converter.h"
#include "../MAT/MAT_BasicElt.h"
#include "BRepMAT2d_SequenceNodeOfSequenceOfBasicElt.h"


using namespace OCNaroWrappers;

OCBRepMAT2d_SequenceOfBasicElt::OCBRepMAT2d_SequenceOfBasicElt(BRepMAT2d_SequenceOfBasicElt* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepMAT2d_SequenceOfBasicElt::OCBRepMAT2d_SequenceOfBasicElt() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new BRepMAT2d_SequenceOfBasicElt();
}

OCBRepMAT2d_SequenceOfBasicElt^ OCBRepMAT2d_SequenceOfBasicElt::Assign(OCNaroWrappers::OCBRepMAT2d_SequenceOfBasicElt^ Other)
{
  BRepMAT2d_SequenceOfBasicElt* tmp = new BRepMAT2d_SequenceOfBasicElt();
  *tmp = ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Assign(*((BRepMAT2d_SequenceOfBasicElt*)Other->Handle));
  return gcnew OCBRepMAT2d_SequenceOfBasicElt(tmp);
}

 void OCBRepMAT2d_SequenceOfBasicElt::Append(OCNaroWrappers::OCMAT_BasicElt^ T)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Append(*((Handle_MAT_BasicElt*)T->Handle));
}

 void OCBRepMAT2d_SequenceOfBasicElt::Append(OCNaroWrappers::OCBRepMAT2d_SequenceOfBasicElt^ S)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Append(*((BRepMAT2d_SequenceOfBasicElt*)S->Handle));
}

 void OCBRepMAT2d_SequenceOfBasicElt::Prepend(OCNaroWrappers::OCMAT_BasicElt^ T)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Prepend(*((Handle_MAT_BasicElt*)T->Handle));
}

 void OCBRepMAT2d_SequenceOfBasicElt::Prepend(OCNaroWrappers::OCBRepMAT2d_SequenceOfBasicElt^ S)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Prepend(*((BRepMAT2d_SequenceOfBasicElt*)S->Handle));
}

 void OCBRepMAT2d_SequenceOfBasicElt::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMAT_BasicElt^ T)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->InsertBefore(Index, *((Handle_MAT_BasicElt*)T->Handle));
}

 void OCBRepMAT2d_SequenceOfBasicElt::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepMAT2d_SequenceOfBasicElt^ S)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->InsertBefore(Index, *((BRepMAT2d_SequenceOfBasicElt*)S->Handle));
}

 void OCBRepMAT2d_SequenceOfBasicElt::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMAT_BasicElt^ T)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->InsertAfter(Index, *((Handle_MAT_BasicElt*)T->Handle));
}

 void OCBRepMAT2d_SequenceOfBasicElt::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepMAT2d_SequenceOfBasicElt^ S)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->InsertAfter(Index, *((BRepMAT2d_SequenceOfBasicElt*)S->Handle));
}

OCMAT_BasicElt^ OCBRepMAT2d_SequenceOfBasicElt::First()
{
  Handle(MAT_BasicElt) tmp = ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->First();
  return gcnew OCMAT_BasicElt(&tmp);
}

OCMAT_BasicElt^ OCBRepMAT2d_SequenceOfBasicElt::Last()
{
  Handle(MAT_BasicElt) tmp = ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Last();
  return gcnew OCMAT_BasicElt(&tmp);
}

 void OCBRepMAT2d_SequenceOfBasicElt::Split(Standard_Integer Index, OCNaroWrappers::OCBRepMAT2d_SequenceOfBasicElt^ Sub)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Split(Index, *((BRepMAT2d_SequenceOfBasicElt*)Sub->Handle));
}

OCMAT_BasicElt^ OCBRepMAT2d_SequenceOfBasicElt::Value(Standard_Integer Index)
{
  Handle(MAT_BasicElt) tmp = ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Value(Index);
  return gcnew OCMAT_BasicElt(&tmp);
}

 void OCBRepMAT2d_SequenceOfBasicElt::SetValue(Standard_Integer Index, OCNaroWrappers::OCMAT_BasicElt^ I)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->SetValue(Index, *((Handle_MAT_BasicElt*)I->Handle));
}

OCMAT_BasicElt^ OCBRepMAT2d_SequenceOfBasicElt::ChangeValue(Standard_Integer Index)
{
  Handle(MAT_BasicElt) tmp = ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->ChangeValue(Index);
  return gcnew OCMAT_BasicElt(&tmp);
}

 void OCBRepMAT2d_SequenceOfBasicElt::Remove(Standard_Integer Index)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Remove(Index);
}

 void OCBRepMAT2d_SequenceOfBasicElt::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((BRepMAT2d_SequenceOfBasicElt*)nativeHandle)->Remove(FromIndex, ToIndex);
}

