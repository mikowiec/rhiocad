// File generated by CPPExt (CPP file)
//

#include "StepShape_ClosedShell.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepShape_ClosedShell::OCStepShape_ClosedShell(StepShape_ClosedShell* nativeHandle) : OCStepShape_ConnectedFaceSet((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_ClosedShell::OCStepShape_ClosedShell() : OCStepShape_ConnectedFaceSet((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_ClosedShell();
}

