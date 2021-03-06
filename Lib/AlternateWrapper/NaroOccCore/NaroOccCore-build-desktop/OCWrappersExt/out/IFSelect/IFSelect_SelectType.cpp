// File generated by CPPExt (CPP file)
//

#include "IFSelect_SelectType.h"
#include "../Converter.h"
#include "../Standard/Standard_Type.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCIFSelect_SelectType::OCIFSelect_SelectType(Handle(IFSelect_SelectType)* nativeHandle) : OCIFSelect_SelectAnyType((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_SelectType(*nativeHandle);
}

OCIFSelect_SelectType::OCIFSelect_SelectType() : OCIFSelect_SelectAnyType((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectType(new IFSelect_SelectType());
}

OCIFSelect_SelectType::OCIFSelect_SelectType(OCNaroWrappers::OCStandard_Type^ atype) : OCIFSelect_SelectAnyType((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_SelectType(new IFSelect_SelectType(*((Handle_Standard_Type*)atype->Handle)));
}

 void OCIFSelect_SelectType::SetType(OCNaroWrappers::OCStandard_Type^ atype)
{
  (*((Handle_IFSelect_SelectType*)nativeHandle))->SetType(*((Handle_Standard_Type*)atype->Handle));
}

OCStandard_Type^ OCIFSelect_SelectType::TypeForMatch()
{
  Handle(Standard_Type) tmp = (*((Handle_IFSelect_SelectType*)nativeHandle))->TypeForMatch();
  return gcnew OCStandard_Type(&tmp);
}

OCTCollection_AsciiString^ OCIFSelect_SelectType::ExtractLabel()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_SelectType*)nativeHandle))->ExtractLabel();
  return gcnew OCTCollection_AsciiString(tmp);
}


