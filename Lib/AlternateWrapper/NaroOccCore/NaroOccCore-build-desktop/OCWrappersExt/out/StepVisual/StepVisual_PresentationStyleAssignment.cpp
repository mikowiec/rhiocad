// File generated by CPPExt (CPP file)
//

#include "StepVisual_PresentationStyleAssignment.h"
#include "../Converter.h"
#include "StepVisual_HArray1OfPresentationStyleSelect.h"
#include "StepVisual_PresentationStyleSelect.h"


using namespace OCNaroWrappers;

OCStepVisual_PresentationStyleAssignment::OCStepVisual_PresentationStyleAssignment(Handle(StepVisual_PresentationStyleAssignment)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_PresentationStyleAssignment(*nativeHandle);
}

OCStepVisual_PresentationStyleAssignment::OCStepVisual_PresentationStyleAssignment() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_PresentationStyleAssignment(new StepVisual_PresentationStyleAssignment());
}

 void OCStepVisual_PresentationStyleAssignment::Init(OCNaroWrappers::OCStepVisual_HArray1OfPresentationStyleSelect^ aStyles)
{
  (*((Handle_StepVisual_PresentationStyleAssignment*)nativeHandle))->Init(*((Handle_StepVisual_HArray1OfPresentationStyleSelect*)aStyles->Handle));
}

 void OCStepVisual_PresentationStyleAssignment::SetStyles(OCNaroWrappers::OCStepVisual_HArray1OfPresentationStyleSelect^ aStyles)
{
  (*((Handle_StepVisual_PresentationStyleAssignment*)nativeHandle))->SetStyles(*((Handle_StepVisual_HArray1OfPresentationStyleSelect*)aStyles->Handle));
}

OCStepVisual_HArray1OfPresentationStyleSelect^ OCStepVisual_PresentationStyleAssignment::Styles()
{
  Handle(StepVisual_HArray1OfPresentationStyleSelect) tmp = (*((Handle_StepVisual_PresentationStyleAssignment*)nativeHandle))->Styles();
  return gcnew OCStepVisual_HArray1OfPresentationStyleSelect(&tmp);
}

OCStepVisual_PresentationStyleSelect^ OCStepVisual_PresentationStyleAssignment::StylesValue(Standard_Integer num)
{
  StepVisual_PresentationStyleSelect* tmp = new StepVisual_PresentationStyleSelect();
  *tmp = (*((Handle_StepVisual_PresentationStyleAssignment*)nativeHandle))->StylesValue(num);
  return gcnew OCStepVisual_PresentationStyleSelect(tmp);
}

 Standard_Integer OCStepVisual_PresentationStyleAssignment::NbStyles()
{
  return (*((Handle_StepVisual_PresentationStyleAssignment*)nativeHandle))->NbStyles();
}


