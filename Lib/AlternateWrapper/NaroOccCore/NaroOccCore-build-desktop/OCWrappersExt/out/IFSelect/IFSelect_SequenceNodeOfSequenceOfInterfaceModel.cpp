// File generated by CPPExt (CPP file)
//

#include "IFSelect_SequenceNodeOfSequenceOfInterfaceModel.h"
#include "../Converter.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "IFSelect_SequenceOfInterfaceModel.h"


using namespace OCNaroWrappers;

OCIFSelect_SequenceNodeOfSequenceOfInterfaceModel::OCIFSelect_SequenceNodeOfSequenceOfInterfaceModel(Handle(IFSelect_SequenceNodeOfSequenceOfInterfaceModel)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SequenceNodeOfSequenceOfInterfaceModel(*nativeHandle);
}

OCIFSelect_SequenceNodeOfSequenceOfInterfaceModel::OCIFSelect_SequenceNodeOfSequenceOfInterfaceModel(OCNaroWrappers::OCInterface_InterfaceModel^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SequenceNodeOfSequenceOfInterfaceModel(new IFSelect_SequenceNodeOfSequenceOfInterfaceModel(*((Handle_Interface_InterfaceModel*)I->Handle), n, p));
}

OCInterface_InterfaceModel^ OCIFSelect_SequenceNodeOfSequenceOfInterfaceModel::Value()
{
  Handle(Interface_InterfaceModel) tmp = (*((Handle_IFSelect_SequenceNodeOfSequenceOfInterfaceModel*)nativeHandle))->Value();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

