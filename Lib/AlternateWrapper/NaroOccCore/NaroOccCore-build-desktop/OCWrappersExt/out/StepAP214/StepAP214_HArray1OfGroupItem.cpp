// File generated by CPPExt (CPP file)
//

#include "StepAP214_HArray1OfGroupItem.h"
#include "../Converter.h"
#include "StepAP214_GroupItem.h"
#include "StepAP214_Array1OfGroupItem.h"


using namespace OCNaroWrappers;

OCStepAP214_HArray1OfGroupItem::OCStepAP214_HArray1OfGroupItem(Handle(StepAP214_HArray1OfGroupItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_HArray1OfGroupItem(*nativeHandle);
}

OCStepAP214_HArray1OfGroupItem::OCStepAP214_HArray1OfGroupItem(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_HArray1OfGroupItem(new StepAP214_HArray1OfGroupItem(Low, Up));
}

OCStepAP214_HArray1OfGroupItem::OCStepAP214_HArray1OfGroupItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP214_GroupItem^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_HArray1OfGroupItem(new StepAP214_HArray1OfGroupItem(Low, Up, *((StepAP214_GroupItem*)V->Handle)));
}

 void OCStepAP214_HArray1OfGroupItem::Init(OCNaroWrappers::OCStepAP214_GroupItem^ V)
{
  (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->Init(*((StepAP214_GroupItem*)V->Handle));
}

 Standard_Integer OCStepAP214_HArray1OfGroupItem::Length()
{
  return (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->Length();
}

 Standard_Integer OCStepAP214_HArray1OfGroupItem::Lower()
{
  return (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->Lower();
}

 Standard_Integer OCStepAP214_HArray1OfGroupItem::Upper()
{
  return (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->Upper();
}

 void OCStepAP214_HArray1OfGroupItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_GroupItem^ Value)
{
  (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->SetValue(Index, *((StepAP214_GroupItem*)Value->Handle));
}

OCStepAP214_GroupItem^ OCStepAP214_HArray1OfGroupItem::Value(Standard_Integer Index)
{
  StepAP214_GroupItem* tmp = new StepAP214_GroupItem();
  *tmp = (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->Value(Index);
  return gcnew OCStepAP214_GroupItem(tmp);
}

OCStepAP214_GroupItem^ OCStepAP214_HArray1OfGroupItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_GroupItem* tmp = new StepAP214_GroupItem();
  *tmp = (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepAP214_GroupItem(tmp);
}

OCStepAP214_Array1OfGroupItem^ OCStepAP214_HArray1OfGroupItem::Array1()
{
  StepAP214_Array1OfGroupItem* tmp = new StepAP214_Array1OfGroupItem(0, 0);
  *tmp = (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->Array1();
  return gcnew OCStepAP214_Array1OfGroupItem(tmp);
}

OCStepAP214_Array1OfGroupItem^ OCStepAP214_HArray1OfGroupItem::ChangeArray1()
{
  StepAP214_Array1OfGroupItem* tmp = new StepAP214_Array1OfGroupItem(0, 0);
  *tmp = (*((Handle_StepAP214_HArray1OfGroupItem*)nativeHandle))->ChangeArray1();
  return gcnew OCStepAP214_Array1OfGroupItem(tmp);
}


