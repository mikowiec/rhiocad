// File generated by CPPExt (CPP file)
//

#include "StepBasic_ApprovalPersonOrganization.h"
#include "../Converter.h"
#include "StepBasic_Approval.h"
#include "StepBasic_ApprovalRole.h"
#include "StepBasic_PersonOrganizationSelect.h"


using namespace OCNaroWrappers;

OCStepBasic_ApprovalPersonOrganization::OCStepBasic_ApprovalPersonOrganization(Handle(StepBasic_ApprovalPersonOrganization)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_ApprovalPersonOrganization(*nativeHandle);
}

OCStepBasic_ApprovalPersonOrganization::OCStepBasic_ApprovalPersonOrganization() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_ApprovalPersonOrganization(new StepBasic_ApprovalPersonOrganization());
}

 void OCStepBasic_ApprovalPersonOrganization::Init(OCNaroWrappers::OCStepBasic_PersonOrganizationSelect^ aPersonOrganization, OCNaroWrappers::OCStepBasic_Approval^ aAuthorizedApproval, OCNaroWrappers::OCStepBasic_ApprovalRole^ aRole)
{
  (*((Handle_StepBasic_ApprovalPersonOrganization*)nativeHandle))->Init(*((StepBasic_PersonOrganizationSelect*)aPersonOrganization->Handle), *((Handle_StepBasic_Approval*)aAuthorizedApproval->Handle), *((Handle_StepBasic_ApprovalRole*)aRole->Handle));
}

 void OCStepBasic_ApprovalPersonOrganization::SetPersonOrganization(OCNaroWrappers::OCStepBasic_PersonOrganizationSelect^ aPersonOrganization)
{
  (*((Handle_StepBasic_ApprovalPersonOrganization*)nativeHandle))->SetPersonOrganization(*((StepBasic_PersonOrganizationSelect*)aPersonOrganization->Handle));
}

OCStepBasic_PersonOrganizationSelect^ OCStepBasic_ApprovalPersonOrganization::PersonOrganization()
{
  StepBasic_PersonOrganizationSelect* tmp = new StepBasic_PersonOrganizationSelect();
  *tmp = (*((Handle_StepBasic_ApprovalPersonOrganization*)nativeHandle))->PersonOrganization();
  return gcnew OCStepBasic_PersonOrganizationSelect(tmp);
}

 void OCStepBasic_ApprovalPersonOrganization::SetAuthorizedApproval(OCNaroWrappers::OCStepBasic_Approval^ aAuthorizedApproval)
{
  (*((Handle_StepBasic_ApprovalPersonOrganization*)nativeHandle))->SetAuthorizedApproval(*((Handle_StepBasic_Approval*)aAuthorizedApproval->Handle));
}

OCStepBasic_Approval^ OCStepBasic_ApprovalPersonOrganization::AuthorizedApproval()
{
  Handle(StepBasic_Approval) tmp = (*((Handle_StepBasic_ApprovalPersonOrganization*)nativeHandle))->AuthorizedApproval();
  return gcnew OCStepBasic_Approval(&tmp);
}

 void OCStepBasic_ApprovalPersonOrganization::SetRole(OCNaroWrappers::OCStepBasic_ApprovalRole^ aRole)
{
  (*((Handle_StepBasic_ApprovalPersonOrganization*)nativeHandle))->SetRole(*((Handle_StepBasic_ApprovalRole*)aRole->Handle));
}

OCStepBasic_ApprovalRole^ OCStepBasic_ApprovalPersonOrganization::Role()
{
  Handle(StepBasic_ApprovalRole) tmp = (*((Handle_StepBasic_ApprovalPersonOrganization*)nativeHandle))->Role();
  return gcnew OCStepBasic_ApprovalRole(&tmp);
}

