// File generated by CPPExt (CPP file)
//

#include "StepBasic_ProductCategory.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepBasic_ProductCategory::OCStepBasic_ProductCategory(Handle(StepBasic_ProductCategory)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_ProductCategory(*nativeHandle);
}

OCStepBasic_ProductCategory::OCStepBasic_ProductCategory() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_ProductCategory(new StepBasic_ProductCategory());
}

 void OCStepBasic_ProductCategory::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasAdescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription)
{
  (*((Handle_StepBasic_ProductCategory*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), OCConverter::BooleanToStandardBoolean(hasAdescription), *((Handle_TCollection_HAsciiString*)aDescription->Handle));
}

 void OCStepBasic_ProductCategory::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepBasic_ProductCategory*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_ProductCategory::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_ProductCategory*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_ProductCategory::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ aDescription)
{
  (*((Handle_StepBasic_ProductCategory*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)aDescription->Handle));
}

 void OCStepBasic_ProductCategory::UnSetDescription()
{
  (*((Handle_StepBasic_ProductCategory*)nativeHandle))->UnSetDescription();
}

OCTCollection_HAsciiString^ OCStepBasic_ProductCategory::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_ProductCategory*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 System::Boolean OCStepBasic_ProductCategory::HasDescription()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepBasic_ProductCategory*)nativeHandle))->HasDescription());
}


