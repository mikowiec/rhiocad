// File generated by CPPExt (CPP file)
//

#include "Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "Transfer_Binder.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "Transfer_TransferMapOfProcessForTransient.h"


using namespace OCNaroWrappers;

OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient::OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient(Handle(Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient(*nativeHandle);
}

OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient::OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient(OCNaroWrappers::OCStandard_Transient^ K1, Standard_Integer K2, OCNaroWrappers::OCTransfer_Binder^ I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient(new Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient(*((Handle_Standard_Transient*)K1->Handle), K2, *((Handle_Transfer_Binder*)I->Handle), n1, n2));
}

OCStandard_Transient^ OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient::Key1()
{
  Handle(Standard_Transient) tmp = (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient*)nativeHandle))->Key1();
  return gcnew OCStandard_Transient(&tmp);
}

 Standard_Integer OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient::Key2()
{
  return (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient::Next2()
{
  return (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient*)nativeHandle))->Next2();
}

OCTransfer_Binder^ OCTransfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient::Value()
{
  Handle(Transfer_Binder) tmp = (*((Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient*)nativeHandle))->Value();
  return gcnew OCTransfer_Binder(&tmp);
}


