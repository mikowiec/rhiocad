// File generated by CPPExt (CPP file)
//

#include "StepAP214_Array1OfDocumentReferenceItem.h"
#include "../Converter.h"
#include "StepAP214_DocumentReferenceItem.h"


using namespace OCNaroWrappers;

OCStepAP214_Array1OfDocumentReferenceItem::OCStepAP214_Array1OfDocumentReferenceItem(StepAP214_Array1OfDocumentReferenceItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_Array1OfDocumentReferenceItem::OCStepAP214_Array1OfDocumentReferenceItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfDocumentReferenceItem(Low, Up);
}

OCStepAP214_Array1OfDocumentReferenceItem::OCStepAP214_Array1OfDocumentReferenceItem(OCNaroWrappers::OCStepAP214_DocumentReferenceItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfDocumentReferenceItem(*((StepAP214_DocumentReferenceItem*)Item->Handle), Low, Up);
}

 void OCStepAP214_Array1OfDocumentReferenceItem::Init(OCNaroWrappers::OCStepAP214_DocumentReferenceItem^ V)
{
  ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->Init(*((StepAP214_DocumentReferenceItem*)V->Handle));
}

 System::Boolean OCStepAP214_Array1OfDocumentReferenceItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->IsAllocated());
}

OCStepAP214_Array1OfDocumentReferenceItem^ OCStepAP214_Array1OfDocumentReferenceItem::Assign(OCNaroWrappers::OCStepAP214_Array1OfDocumentReferenceItem^ Other)
{
  StepAP214_Array1OfDocumentReferenceItem* tmp = new StepAP214_Array1OfDocumentReferenceItem(0, 0);
  *tmp = ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->Assign(*((StepAP214_Array1OfDocumentReferenceItem*)Other->Handle));
  return gcnew OCStepAP214_Array1OfDocumentReferenceItem(tmp);
}

 Standard_Integer OCStepAP214_Array1OfDocumentReferenceItem::Length()
{
  return ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP214_Array1OfDocumentReferenceItem::Lower()
{
  return ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP214_Array1OfDocumentReferenceItem::Upper()
{
  return ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->Upper();
}

 void OCStepAP214_Array1OfDocumentReferenceItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_DocumentReferenceItem^ Value)
{
  ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->SetValue(Index, *((StepAP214_DocumentReferenceItem*)Value->Handle));
}

OCStepAP214_DocumentReferenceItem^ OCStepAP214_Array1OfDocumentReferenceItem::Value(Standard_Integer Index)
{
  StepAP214_DocumentReferenceItem* tmp = new StepAP214_DocumentReferenceItem();
  *tmp = ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP214_DocumentReferenceItem(tmp);
}

OCStepAP214_DocumentReferenceItem^ OCStepAP214_Array1OfDocumentReferenceItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_DocumentReferenceItem* tmp = new StepAP214_DocumentReferenceItem();
  *tmp = ((StepAP214_Array1OfDocumentReferenceItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP214_DocumentReferenceItem(tmp);
}


