// File generated by CPPExt (CPP file)
//

#include "StepData_HArray1OfField.h"
#include "../Converter.h"
#include "StepData_Field.h"
#include "StepData_Array1OfField.h"


using namespace OCNaroWrappers;

OCStepData_HArray1OfField::OCStepData_HArray1OfField(Handle(StepData_HArray1OfField)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepData_HArray1OfField(*nativeHandle);
}

OCStepData_HArray1OfField::OCStepData_HArray1OfField(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepData_HArray1OfField(new StepData_HArray1OfField(Low, Up));
}

OCStepData_HArray1OfField::OCStepData_HArray1OfField(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepData_Field^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepData_HArray1OfField(new StepData_HArray1OfField(Low, Up, *((StepData_Field*)V->Handle)));
}

 void OCStepData_HArray1OfField::Init(OCNaroWrappers::OCStepData_Field^ V)
{
  (*((Handle_StepData_HArray1OfField*)nativeHandle))->Init(*((StepData_Field*)V->Handle));
}

 Standard_Integer OCStepData_HArray1OfField::Length()
{
  return (*((Handle_StepData_HArray1OfField*)nativeHandle))->Length();
}

 Standard_Integer OCStepData_HArray1OfField::Lower()
{
  return (*((Handle_StepData_HArray1OfField*)nativeHandle))->Lower();
}

 Standard_Integer OCStepData_HArray1OfField::Upper()
{
  return (*((Handle_StepData_HArray1OfField*)nativeHandle))->Upper();
}

 void OCStepData_HArray1OfField::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepData_Field^ Value)
{
  (*((Handle_StepData_HArray1OfField*)nativeHandle))->SetValue(Index, *((StepData_Field*)Value->Handle));
}

OCStepData_Field^ OCStepData_HArray1OfField::Value(Standard_Integer Index)
{
  StepData_Field* tmp = new StepData_Field();
  *tmp = (*((Handle_StepData_HArray1OfField*)nativeHandle))->Value(Index);
  return gcnew OCStepData_Field(tmp);
}

OCStepData_Field^ OCStepData_HArray1OfField::ChangeValue(Standard_Integer Index)
{
  StepData_Field* tmp = new StepData_Field();
  *tmp = (*((Handle_StepData_HArray1OfField*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepData_Field(tmp);
}

OCStepData_Array1OfField^ OCStepData_HArray1OfField::Array1()
{
  StepData_Array1OfField* tmp = new StepData_Array1OfField(0, 0);
  *tmp = (*((Handle_StepData_HArray1OfField*)nativeHandle))->Array1();
  return gcnew OCStepData_Array1OfField(tmp);
}

OCStepData_Array1OfField^ OCStepData_HArray1OfField::ChangeArray1()
{
  StepData_Array1OfField* tmp = new StepData_Array1OfField(0, 0);
  *tmp = (*((Handle_StepData_HArray1OfField*)nativeHandle))->ChangeArray1();
  return gcnew OCStepData_Array1OfField(tmp);
}


