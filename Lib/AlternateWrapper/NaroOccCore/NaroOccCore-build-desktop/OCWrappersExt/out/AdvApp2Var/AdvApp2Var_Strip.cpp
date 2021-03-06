// File generated by CPPExt (CPP file)
//

#include "AdvApp2Var_Strip.h"
#include "../Converter.h"
#include "AdvApp2Var_Iso.h"
#include "AdvApp2Var_SequenceNodeOfStrip.h"


using namespace OCNaroWrappers;

OCAdvApp2Var_Strip::OCAdvApp2Var_Strip(AdvApp2Var_Strip* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAdvApp2Var_Strip::OCAdvApp2Var_Strip() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new AdvApp2Var_Strip();
}

OCAdvApp2Var_Strip^ OCAdvApp2Var_Strip::Assign(OCNaroWrappers::OCAdvApp2Var_Strip^ Other)
{
  AdvApp2Var_Strip* tmp = new AdvApp2Var_Strip();
  *tmp = ((AdvApp2Var_Strip*)nativeHandle)->Assign(*((AdvApp2Var_Strip*)Other->Handle));
  return gcnew OCAdvApp2Var_Strip(tmp);
}

 void OCAdvApp2Var_Strip::Append(OCNaroWrappers::OCAdvApp2Var_Iso^ T)
{
  ((AdvApp2Var_Strip*)nativeHandle)->Append(*((AdvApp2Var_Iso*)T->Handle));
}

 void OCAdvApp2Var_Strip::Append(OCNaroWrappers::OCAdvApp2Var_Strip^ S)
{
  ((AdvApp2Var_Strip*)nativeHandle)->Append(*((AdvApp2Var_Strip*)S->Handle));
}

 void OCAdvApp2Var_Strip::Prepend(OCNaroWrappers::OCAdvApp2Var_Iso^ T)
{
  ((AdvApp2Var_Strip*)nativeHandle)->Prepend(*((AdvApp2Var_Iso*)T->Handle));
}

 void OCAdvApp2Var_Strip::Prepend(OCNaroWrappers::OCAdvApp2Var_Strip^ S)
{
  ((AdvApp2Var_Strip*)nativeHandle)->Prepend(*((AdvApp2Var_Strip*)S->Handle));
}

 void OCAdvApp2Var_Strip::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Iso^ T)
{
  ((AdvApp2Var_Strip*)nativeHandle)->InsertBefore(Index, *((AdvApp2Var_Iso*)T->Handle));
}

 void OCAdvApp2Var_Strip::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Strip^ S)
{
  ((AdvApp2Var_Strip*)nativeHandle)->InsertBefore(Index, *((AdvApp2Var_Strip*)S->Handle));
}

 void OCAdvApp2Var_Strip::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Iso^ T)
{
  ((AdvApp2Var_Strip*)nativeHandle)->InsertAfter(Index, *((AdvApp2Var_Iso*)T->Handle));
}

 void OCAdvApp2Var_Strip::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Strip^ S)
{
  ((AdvApp2Var_Strip*)nativeHandle)->InsertAfter(Index, *((AdvApp2Var_Strip*)S->Handle));
}

OCAdvApp2Var_Iso^ OCAdvApp2Var_Strip::First()
{
  AdvApp2Var_Iso* tmp = new AdvApp2Var_Iso();
  *tmp = ((AdvApp2Var_Strip*)nativeHandle)->First();
  return gcnew OCAdvApp2Var_Iso(tmp);
}

OCAdvApp2Var_Iso^ OCAdvApp2Var_Strip::Last()
{
  AdvApp2Var_Iso* tmp = new AdvApp2Var_Iso();
  *tmp = ((AdvApp2Var_Strip*)nativeHandle)->Last();
  return gcnew OCAdvApp2Var_Iso(tmp);
}

 void OCAdvApp2Var_Strip::Split(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Strip^ Sub)
{
  ((AdvApp2Var_Strip*)nativeHandle)->Split(Index, *((AdvApp2Var_Strip*)Sub->Handle));
}

OCAdvApp2Var_Iso^ OCAdvApp2Var_Strip::Value(Standard_Integer Index)
{
  AdvApp2Var_Iso* tmp = new AdvApp2Var_Iso();
  *tmp = ((AdvApp2Var_Strip*)nativeHandle)->Value(Index);
  return gcnew OCAdvApp2Var_Iso(tmp);
}

 void OCAdvApp2Var_Strip::SetValue(Standard_Integer Index, OCNaroWrappers::OCAdvApp2Var_Iso^ I)
{
  ((AdvApp2Var_Strip*)nativeHandle)->SetValue(Index, *((AdvApp2Var_Iso*)I->Handle));
}

OCAdvApp2Var_Iso^ OCAdvApp2Var_Strip::ChangeValue(Standard_Integer Index)
{
  AdvApp2Var_Iso* tmp = new AdvApp2Var_Iso();
  *tmp = ((AdvApp2Var_Strip*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAdvApp2Var_Iso(tmp);
}

 void OCAdvApp2Var_Strip::Remove(Standard_Integer Index)
{
  ((AdvApp2Var_Strip*)nativeHandle)->Remove(Index);
}

 void OCAdvApp2Var_Strip::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((AdvApp2Var_Strip*)nativeHandle)->Remove(FromIndex, ToIndex);
}


