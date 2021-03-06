// File generated by CPPExt (CPP file)
//

#include "PCollection_CompareOfReal.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCPCollection_CompareOfReal::OCPCollection_CompareOfReal(PCollection_CompareOfReal* nativeHandle) : OCPCollection_PrivCompareOfReal((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCPCollection_CompareOfReal::OCPCollection_CompareOfReal() : OCPCollection_PrivCompareOfReal((OCDummy^)nullptr)

{
  nativeHandle = new PCollection_CompareOfReal();
}

 System::Boolean OCPCollection_CompareOfReal::IsLower(Standard_Real Left, Standard_Real Right)
{
  return OCConverter::StandardBooleanToBoolean(((PCollection_CompareOfReal*)nativeHandle)->IsLower(Left, Right));
}

 System::Boolean OCPCollection_CompareOfReal::IsGreater(Standard_Real Left, Standard_Real Right)
{
  return OCConverter::StandardBooleanToBoolean(((PCollection_CompareOfReal*)nativeHandle)->IsGreater(Left, Right));
}


