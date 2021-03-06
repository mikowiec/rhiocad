// File generated by CPPExt (CPP file)
//

#include "Storage_SeqOfPersistent.h"
#include "../Converter.h"
#include "../Standard/Standard_Persistent.h"
#include "Storage_SequenceNodeOfSeqOfPersistent.h"


using namespace OCNaroWrappers;

OCStorage_SeqOfPersistent::OCStorage_SeqOfPersistent(Storage_SeqOfPersistent* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStorage_SeqOfPersistent::OCStorage_SeqOfPersistent() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Storage_SeqOfPersistent();
}

OCStorage_SeqOfPersistent^ OCStorage_SeqOfPersistent::Assign(OCNaroWrappers::OCStorage_SeqOfPersistent^ Other)
{
  Storage_SeqOfPersistent* tmp = new Storage_SeqOfPersistent();
  *tmp = ((Storage_SeqOfPersistent*)nativeHandle)->Assign(*((Storage_SeqOfPersistent*)Other->Handle));
  return gcnew OCStorage_SeqOfPersistent(tmp);
}

 void OCStorage_SeqOfPersistent::Append(OCNaroWrappers::OCStandard_Persistent^ T)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->Append(*((Handle_Standard_Persistent*)T->Handle));
}

 void OCStorage_SeqOfPersistent::Append(OCNaroWrappers::OCStorage_SeqOfPersistent^ S)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->Append(*((Storage_SeqOfPersistent*)S->Handle));
}

 void OCStorage_SeqOfPersistent::Prepend(OCNaroWrappers::OCStandard_Persistent^ T)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->Prepend(*((Handle_Standard_Persistent*)T->Handle));
}

 void OCStorage_SeqOfPersistent::Prepend(OCNaroWrappers::OCStorage_SeqOfPersistent^ S)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->Prepend(*((Storage_SeqOfPersistent*)S->Handle));
}

 void OCStorage_SeqOfPersistent::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ T)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->InsertBefore(Index, *((Handle_Standard_Persistent*)T->Handle));
}

 void OCStorage_SeqOfPersistent::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCStorage_SeqOfPersistent^ S)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->InsertBefore(Index, *((Storage_SeqOfPersistent*)S->Handle));
}

 void OCStorage_SeqOfPersistent::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ T)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->InsertAfter(Index, *((Handle_Standard_Persistent*)T->Handle));
}

 void OCStorage_SeqOfPersistent::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCStorage_SeqOfPersistent^ S)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->InsertAfter(Index, *((Storage_SeqOfPersistent*)S->Handle));
}

OCStandard_Persistent^ OCStorage_SeqOfPersistent::First()
{
  Handle(Standard_Persistent) tmp = ((Storage_SeqOfPersistent*)nativeHandle)->First();
  return gcnew OCStandard_Persistent(&tmp);
}

OCStandard_Persistent^ OCStorage_SeqOfPersistent::Last()
{
  Handle(Standard_Persistent) tmp = ((Storage_SeqOfPersistent*)nativeHandle)->Last();
  return gcnew OCStandard_Persistent(&tmp);
}

 void OCStorage_SeqOfPersistent::Split(Standard_Integer Index, OCNaroWrappers::OCStorage_SeqOfPersistent^ Sub)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->Split(Index, *((Storage_SeqOfPersistent*)Sub->Handle));
}

OCStandard_Persistent^ OCStorage_SeqOfPersistent::Value(Standard_Integer Index)
{
  Handle(Standard_Persistent) tmp = ((Storage_SeqOfPersistent*)nativeHandle)->Value(Index);
  return gcnew OCStandard_Persistent(&tmp);
}

 void OCStorage_SeqOfPersistent::SetValue(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ I)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->SetValue(Index, *((Handle_Standard_Persistent*)I->Handle));
}

OCStandard_Persistent^ OCStorage_SeqOfPersistent::ChangeValue(Standard_Integer Index)
{
  Handle(Standard_Persistent) tmp = ((Storage_SeqOfPersistent*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStandard_Persistent(&tmp);
}

 void OCStorage_SeqOfPersistent::Remove(Standard_Integer Index)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->Remove(Index);
}

 void OCStorage_SeqOfPersistent::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Storage_SeqOfPersistent*)nativeHandle)->Remove(FromIndex, ToIndex);
}


