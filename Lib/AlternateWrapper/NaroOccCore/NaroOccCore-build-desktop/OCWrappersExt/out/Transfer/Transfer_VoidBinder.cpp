// File generated by CPPExt (CPP file)
//

#include "Transfer_VoidBinder.h"
#include "../Converter.h"
#include "../Standard/Standard_Type.h"


using namespace OCNaroWrappers;

OCTransfer_VoidBinder::OCTransfer_VoidBinder(Handle(Transfer_VoidBinder)* nativeHandle) : OCTransfer_Binder((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_VoidBinder(*nativeHandle);
}

OCTransfer_VoidBinder::OCTransfer_VoidBinder() : OCTransfer_Binder((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_VoidBinder(new Transfer_VoidBinder());
}

OCStandard_Type^ OCTransfer_VoidBinder::ResultType()
{
  Handle(Standard_Type) tmp = (*((Handle_Transfer_VoidBinder*)nativeHandle))->ResultType();
  return gcnew OCStandard_Type(&tmp);
}

 System::String^ OCTransfer_VoidBinder::ResultTypeName()
{
  return OCConverter::StandardCStringToString((*((Handle_Transfer_VoidBinder*)nativeHandle))->ResultTypeName());
}


