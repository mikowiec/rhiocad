// File generated by CPPExt (CPP file)
//

#include "StepRepr_ProductDefinitionUsage.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepRepr_ProductDefinitionUsage::OCStepRepr_ProductDefinitionUsage(Handle(StepRepr_ProductDefinitionUsage)* nativeHandle) : OCStepBasic_ProductDefinitionRelationship((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_ProductDefinitionUsage(*nativeHandle);
}

OCStepRepr_ProductDefinitionUsage::OCStepRepr_ProductDefinitionUsage() : OCStepBasic_ProductDefinitionRelationship((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_ProductDefinitionUsage(new StepRepr_ProductDefinitionUsage());
}

