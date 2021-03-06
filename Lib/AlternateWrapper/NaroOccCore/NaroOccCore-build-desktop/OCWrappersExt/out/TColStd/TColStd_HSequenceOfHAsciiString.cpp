// File generated by CPPExt (CPP file)
//

#include "TColStd_HSequenceOfHAsciiString.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "TColStd_SequenceOfHAsciiString.h"


using namespace OCNaroWrappers;

OCTColStd_HSequenceOfHAsciiString::OCTColStd_HSequenceOfHAsciiString(Handle(TColStd_HSequenceOfHAsciiString)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_HSequenceOfHAsciiString(*nativeHandle);
}

OCTColStd_HSequenceOfHAsciiString::OCTColStd_HSequenceOfHAsciiString() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_HSequenceOfHAsciiString(new TColStd_HSequenceOfHAsciiString());
}

 System::Boolean OCTColStd_HSequenceOfHAsciiString::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTColStd_HSequenceOfHAsciiString::Length()
{
  return (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Length();
}

 void OCTColStd_HSequenceOfHAsciiString::Clear()
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Clear();
}

 void OCTColStd_HSequenceOfHAsciiString::Append(OCNaroWrappers::OCTCollection_HAsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Append(*((Handle_TCollection_HAsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::Append(OCNaroWrappers::OCTColStd_HSequenceOfHAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Append(*((Handle_TColStd_HSequenceOfHAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::Prepend(OCNaroWrappers::OCTCollection_HAsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Prepend(*((Handle_TCollection_HAsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::Prepend(OCNaroWrappers::OCTColStd_HSequenceOfHAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Prepend(*((Handle_TColStd_HSequenceOfHAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::Reverse()
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Reverse();
}

 void OCTColStd_HSequenceOfHAsciiString::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTCollection_HAsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->InsertBefore(anIndex, *((Handle_TCollection_HAsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTColStd_HSequenceOfHAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->InsertBefore(anIndex, *((Handle_TColStd_HSequenceOfHAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTCollection_HAsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->InsertAfter(anIndex, *((Handle_TCollection_HAsciiString*)anItem->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTColStd_HSequenceOfHAsciiString^ aSequence)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->InsertAfter(anIndex, *((Handle_TColStd_HSequenceOfHAsciiString*)aSequence->Handle));
}

 void OCTColStd_HSequenceOfHAsciiString::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCTColStd_HSequenceOfHAsciiString^ OCTColStd_HSequenceOfHAsciiString::Split(Standard_Integer anIndex)
{
  Handle(TColStd_HSequenceOfHAsciiString) tmp = (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Split(anIndex);
  return gcnew OCTColStd_HSequenceOfHAsciiString(&tmp);
}

 void OCTColStd_HSequenceOfHAsciiString::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCTCollection_HAsciiString^ anItem)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->SetValue(anIndex, *((Handle_TCollection_HAsciiString*)anItem->Handle));
}

OCTCollection_HAsciiString^ OCTColStd_HSequenceOfHAsciiString::Value(Standard_Integer anIndex)
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Value(anIndex);
  return gcnew OCTCollection_HAsciiString(&tmp);
}

OCTCollection_HAsciiString^ OCTColStd_HSequenceOfHAsciiString::ChangeValue(Standard_Integer anIndex)
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCTColStd_HSequenceOfHAsciiString::Remove(Standard_Integer anIndex)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Remove(anIndex);
}

 void OCTColStd_HSequenceOfHAsciiString::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCTColStd_SequenceOfHAsciiString^ OCTColStd_HSequenceOfHAsciiString::Sequence()
{
  TColStd_SequenceOfHAsciiString* tmp = new TColStd_SequenceOfHAsciiString();
  *tmp = (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->Sequence();
  return gcnew OCTColStd_SequenceOfHAsciiString(tmp);
}

OCTColStd_SequenceOfHAsciiString^ OCTColStd_HSequenceOfHAsciiString::ChangeSequence()
{
  TColStd_SequenceOfHAsciiString* tmp = new TColStd_SequenceOfHAsciiString();
  *tmp = (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->ChangeSequence();
  return gcnew OCTColStd_SequenceOfHAsciiString(tmp);
}

OCTColStd_HSequenceOfHAsciiString^ OCTColStd_HSequenceOfHAsciiString::ShallowCopy()
{
  Handle(TColStd_HSequenceOfHAsciiString) tmp = (*((Handle_TColStd_HSequenceOfHAsciiString*)nativeHandle))->ShallowCopy();
  return gcnew OCTColStd_HSequenceOfHAsciiString(&tmp);
}


