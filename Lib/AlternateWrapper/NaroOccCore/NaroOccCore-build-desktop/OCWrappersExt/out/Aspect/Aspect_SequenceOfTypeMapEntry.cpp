// File generated by CPPExt (CPP file)
//

#include "Aspect_SequenceOfTypeMapEntry.h"
#include "../Converter.h"
#include "Aspect_TypeMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfTypeMapEntry.h"


using namespace OCNaroWrappers;

OCAspect_SequenceOfTypeMapEntry::OCAspect_SequenceOfTypeMapEntry(Aspect_SequenceOfTypeMapEntry* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAspect_SequenceOfTypeMapEntry::OCAspect_SequenceOfTypeMapEntry() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Aspect_SequenceOfTypeMapEntry();
}

OCAspect_SequenceOfTypeMapEntry^ OCAspect_SequenceOfTypeMapEntry::Assign(OCNaroWrappers::OCAspect_SequenceOfTypeMapEntry^ Other)
{
  Aspect_SequenceOfTypeMapEntry* tmp = new Aspect_SequenceOfTypeMapEntry();
  *tmp = ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Assign(*((Aspect_SequenceOfTypeMapEntry*)Other->Handle));
  return gcnew OCAspect_SequenceOfTypeMapEntry(tmp);
}

 void OCAspect_SequenceOfTypeMapEntry::Append(OCNaroWrappers::OCAspect_TypeMapEntry^ T)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Append(*((Aspect_TypeMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfTypeMapEntry::Append(OCNaroWrappers::OCAspect_SequenceOfTypeMapEntry^ S)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Append(*((Aspect_SequenceOfTypeMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfTypeMapEntry::Prepend(OCNaroWrappers::OCAspect_TypeMapEntry^ T)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Prepend(*((Aspect_TypeMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfTypeMapEntry::Prepend(OCNaroWrappers::OCAspect_SequenceOfTypeMapEntry^ S)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Prepend(*((Aspect_SequenceOfTypeMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfTypeMapEntry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_TypeMapEntry^ T)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->InsertBefore(Index, *((Aspect_TypeMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfTypeMapEntry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfTypeMapEntry^ S)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->InsertBefore(Index, *((Aspect_SequenceOfTypeMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfTypeMapEntry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_TypeMapEntry^ T)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->InsertAfter(Index, *((Aspect_TypeMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfTypeMapEntry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfTypeMapEntry^ S)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->InsertAfter(Index, *((Aspect_SequenceOfTypeMapEntry*)S->Handle));
}

OCAspect_TypeMapEntry^ OCAspect_SequenceOfTypeMapEntry::First()
{
  Aspect_TypeMapEntry* tmp = new Aspect_TypeMapEntry();
  *tmp = ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->First();
  return gcnew OCAspect_TypeMapEntry(tmp);
}

OCAspect_TypeMapEntry^ OCAspect_SequenceOfTypeMapEntry::Last()
{
  Aspect_TypeMapEntry* tmp = new Aspect_TypeMapEntry();
  *tmp = ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Last();
  return gcnew OCAspect_TypeMapEntry(tmp);
}

 void OCAspect_SequenceOfTypeMapEntry::Split(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfTypeMapEntry^ Sub)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Split(Index, *((Aspect_SequenceOfTypeMapEntry*)Sub->Handle));
}

OCAspect_TypeMapEntry^ OCAspect_SequenceOfTypeMapEntry::Value(Standard_Integer Index)
{
  Aspect_TypeMapEntry* tmp = new Aspect_TypeMapEntry();
  *tmp = ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Value(Index);
  return gcnew OCAspect_TypeMapEntry(tmp);
}

 void OCAspect_SequenceOfTypeMapEntry::SetValue(Standard_Integer Index, OCNaroWrappers::OCAspect_TypeMapEntry^ I)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->SetValue(Index, *((Aspect_TypeMapEntry*)I->Handle));
}

OCAspect_TypeMapEntry^ OCAspect_SequenceOfTypeMapEntry::ChangeValue(Standard_Integer Index)
{
  Aspect_TypeMapEntry* tmp = new Aspect_TypeMapEntry();
  *tmp = ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAspect_TypeMapEntry(tmp);
}

 void OCAspect_SequenceOfTypeMapEntry::Remove(Standard_Integer Index)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Remove(Index);
}

 void OCAspect_SequenceOfTypeMapEntry::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Aspect_SequenceOfTypeMapEntry*)nativeHandle)->Remove(FromIndex, ToIndex);
}


