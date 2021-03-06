// File generated by CPPExt (CPP file)
//

#include "BOPTools_Checker.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BOPTools_InterferencePool.h"
#include "BOPTools_ListOfCheckResults.h"


using namespace OCNaroWrappers;

OCBOPTools_Checker::OCBOPTools_Checker(BOPTools_Checker* nativeHandle) : OCBOPTools_PaveFiller((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_Checker::OCBOPTools_Checker() : OCBOPTools_PaveFiller((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_Checker();
}

OCBOPTools_Checker::OCBOPTools_Checker(OCNaroWrappers::OCTopoDS_Shape^ aS) : OCBOPTools_PaveFiller((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_Checker(*((TopoDS_Shape*)aS->Handle));
}

OCBOPTools_Checker::OCBOPTools_Checker(OCNaroWrappers::OCBOPTools_InterferencePool^ aIP) : OCBOPTools_PaveFiller((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_Checker(*((BOPTools_InterferencePool*)aIP->Handle));
}

 void OCBOPTools_Checker::Destroy()
{
  ((BOPTools_Checker*)nativeHandle)->Destroy();
}

 void OCBOPTools_Checker::SetPerformType(System::Boolean StopOnFirstFaulty)
{
  ((BOPTools_Checker*)nativeHandle)->SetPerformType(OCConverter::BooleanToStandardBoolean(StopOnFirstFaulty));
}

 void OCBOPTools_Checker::Perform()
{
  ((BOPTools_Checker*)nativeHandle)->Perform();
}

 void OCBOPTools_Checker::SetShape(OCNaroWrappers::OCTopoDS_Shape^ aS)
{
  ((BOPTools_Checker*)nativeHandle)->SetShape(*((TopoDS_Shape*)aS->Handle));
}

OCTopoDS_Shape^ OCBOPTools_Checker::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BOPTools_Checker*)nativeHandle)->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCBOPTools_ListOfCheckResults^ OCBOPTools_Checker::GetCheckResult()
{
  BOPTools_ListOfCheckResults* tmp = new BOPTools_ListOfCheckResults();
  *tmp = ((BOPTools_Checker*)nativeHandle)->GetCheckResult();
  return gcnew OCBOPTools_ListOfCheckResults(tmp);
}

 System::Boolean OCBOPTools_Checker::HasFaulty()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_Checker*)nativeHandle)->HasFaulty());
}


