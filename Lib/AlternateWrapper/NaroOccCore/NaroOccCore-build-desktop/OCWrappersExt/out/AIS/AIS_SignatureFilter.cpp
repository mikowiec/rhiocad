// File generated by CPPExt (CPP file)
//

#include "AIS_SignatureFilter.h"
#include "../Converter.h"
#include "../SelectMgr/SelectMgr_EntityOwner.h"


using namespace OCNaroWrappers;

OCAIS_SignatureFilter::OCAIS_SignatureFilter(Handle(AIS_SignatureFilter)* nativeHandle) : OCAIS_TypeFilter((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_SignatureFilter(*nativeHandle);
}

OCAIS_SignatureFilter::OCAIS_SignatureFilter(OCAIS_KindOfInteractive aGivenKind, Standard_Integer aGivenSignature) : OCAIS_TypeFilter((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_SignatureFilter(new AIS_SignatureFilter((AIS_KindOfInteractive)aGivenKind, aGivenSignature));
}

 System::Boolean OCAIS_SignatureFilter::IsOk(OCNaroWrappers::OCSelectMgr_EntityOwner^ anobj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_SignatureFilter*)nativeHandle))->IsOk(*((Handle_SelectMgr_EntityOwner*)anobj->Handle)));
}

