// File generated by CPPExt (CPP file)
//

#include "StepShape_ConnectedFaceSubSet.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepShape_HArray1OfFace.h"
#include "StepShape_ConnectedFaceSet.h"


using namespace OCNaroWrappers;

OCStepShape_ConnectedFaceSubSet::OCStepShape_ConnectedFaceSubSet(StepShape_ConnectedFaceSubSet* nativeHandle) : OCStepShape_ConnectedFaceSet((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_ConnectedFaceSubSet::OCStepShape_ConnectedFaceSubSet() : OCStepShape_ConnectedFaceSet((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_ConnectedFaceSubSet();
}

 void OCStepShape_ConnectedFaceSubSet::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aRepresentationItem_Name, OCNaroWrappers::OCStepShape_HArray1OfFace^ aConnectedFaceSet_CfsFaces, OCNaroWrappers::OCStepShape_ConnectedFaceSet^ aParentFaceSet)
{
  ((StepShape_ConnectedFaceSubSet*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aRepresentationItem_Name->Handle), *((Handle_StepShape_HArray1OfFace*)aConnectedFaceSet_CfsFaces->Handle), *((StepShape_ConnectedFaceSet*)aParentFaceSet->Handle));
}

OCStepShape_ConnectedFaceSet^ OCStepShape_ConnectedFaceSubSet::ParentFaceSet()
{
  StepShape_ConnectedFaceSet* tmp = new StepShape_ConnectedFaceSet();
  *tmp = ((StepShape_ConnectedFaceSubSet*)nativeHandle)->ParentFaceSet();
  return gcnew OCStepShape_ConnectedFaceSet(tmp);
}

 void OCStepShape_ConnectedFaceSubSet::SetParentFaceSet(OCNaroWrappers::OCStepShape_ConnectedFaceSet^ ParentFaceSet)
{
  ((StepShape_ConnectedFaceSubSet*)nativeHandle)->SetParentFaceSet(*((StepShape_ConnectedFaceSet*)ParentFaceSet->Handle));
}


