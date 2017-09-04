// File generated by CPPExt (CPP file)
//

#include "StepRepr_ShapeAspectRelationship.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepRepr_ShapeAspect.h"


using namespace OCNaroWrappers;

OCStepRepr_ShapeAspectRelationship::OCStepRepr_ShapeAspectRelationship(Handle(StepRepr_ShapeAspectRelationship)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_ShapeAspectRelationship(*nativeHandle);
}

OCStepRepr_ShapeAspectRelationship::OCStepRepr_ShapeAspectRelationship() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_ShapeAspectRelationship(new StepRepr_ShapeAspectRelationship());
}

 void OCStepRepr_ShapeAspectRelationship::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepRepr_ShapeAspect^ aRelatingShapeAspect, OCNaroWrappers::OCStepRepr_ShapeAspect^ aRelatedShapeAspect)
{
  (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), OCConverter::BooleanToStandardBoolean(hasDescription), *((Handle_TCollection_HAsciiString*)aDescription->Handle), *((Handle_StepRepr_ShapeAspect*)aRelatingShapeAspect->Handle), *((Handle_StepRepr_ShapeAspect*)aRelatedShapeAspect->Handle));
}

OCTCollection_HAsciiString^ OCStepRepr_ShapeAspectRelationship::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepRepr_ShapeAspectRelationship::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name)
{
  (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)Name->Handle));
}

OCTCollection_HAsciiString^ OCStepRepr_ShapeAspectRelationship::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepRepr_ShapeAspectRelationship::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description)
{
  (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)Description->Handle));
}

 System::Boolean OCStepRepr_ShapeAspectRelationship::HasDescription()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->HasDescription());
}

OCStepRepr_ShapeAspect^ OCStepRepr_ShapeAspectRelationship::RelatingShapeAspect()
{
  Handle(StepRepr_ShapeAspect) tmp = (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->RelatingShapeAspect();
  return gcnew OCStepRepr_ShapeAspect(&tmp);
}

 void OCStepRepr_ShapeAspectRelationship::SetRelatingShapeAspect(OCNaroWrappers::OCStepRepr_ShapeAspect^ RelatingShapeAspect)
{
  (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->SetRelatingShapeAspect(*((Handle_StepRepr_ShapeAspect*)RelatingShapeAspect->Handle));
}

OCStepRepr_ShapeAspect^ OCStepRepr_ShapeAspectRelationship::RelatedShapeAspect()
{
  Handle(StepRepr_ShapeAspect) tmp = (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->RelatedShapeAspect();
  return gcnew OCStepRepr_ShapeAspect(&tmp);
}

 void OCStepRepr_ShapeAspectRelationship::SetRelatedShapeAspect(OCNaroWrappers::OCStepRepr_ShapeAspect^ RelatedShapeAspect)
{
  (*((Handle_StepRepr_ShapeAspectRelationship*)nativeHandle))->SetRelatedShapeAspect(*((Handle_StepRepr_ShapeAspect*)RelatedShapeAspect->Handle));
}

