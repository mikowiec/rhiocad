// File generated by CPPExt (CPP file)
//

#include "StepShape_ValueQualifier.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepShape_PrecisionQualifier.h"
#include "StepShape_TypeQualifier.h"


using namespace OCNaroWrappers;

OCStepShape_ValueQualifier::OCStepShape_ValueQualifier(StepShape_ValueQualifier* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_ValueQualifier::OCStepShape_ValueQualifier() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_ValueQualifier();
}

 Standard_Integer OCStepShape_ValueQualifier::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepShape_ValueQualifier*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepShape_PrecisionQualifier^ OCStepShape_ValueQualifier::PrecisionQualifier()
{
  Handle(StepShape_PrecisionQualifier) tmp = ((StepShape_ValueQualifier*)nativeHandle)->PrecisionQualifier();
  return gcnew OCStepShape_PrecisionQualifier(&tmp);
}

OCStepShape_TypeQualifier^ OCStepShape_ValueQualifier::TypeQualifier()
{
  Handle(StepShape_TypeQualifier) tmp = ((StepShape_ValueQualifier*)nativeHandle)->TypeQualifier();
  return gcnew OCStepShape_TypeQualifier(&tmp);
}


