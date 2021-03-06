// File generated by CPPExt (CPP file)
//

#include "IntPatch_ThePathPointOfTheSOnBoundsOfIntersection.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HVertex.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection(IntPatch_ThePathPointOfTheSOnBoundsOfIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection() 
{
  nativeHandle = new IntPatch_ThePathPointOfTheSOnBoundsOfIntersection();
}

OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter) 
{
  nativeHandle = new IntPatch_ThePathPointOfTheSOnBoundsOfIntersection(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor3d_HVertex*)V->Handle), *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter) 
{
  nativeHandle = new IntPatch_ThePathPointOfTheSOnBoundsOfIntersection(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

 void OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::SetValue(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter)
{
  ((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->SetValue(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor3d_HVertex*)V->Handle), *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

 void OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::SetValue(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Tol, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Parameter)
{
  ((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->SetValue(*((gp_Pnt*)P->Handle), Tol, *((Handle_Adaptor2d_HCurve2d*)A->Handle), Parameter);
}

OCgp_Pnt^ OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::Tolerance()
{
  return ((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->Tolerance();
}

 System::Boolean OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::IsNew()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->IsNew());
}

OCAdaptor3d_HVertex^ OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::Vertex()
{
  Handle(Adaptor3d_HVertex) tmp = ((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->Vertex();
  return gcnew OCAdaptor3d_HVertex(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::Arc()
{
  Handle(Adaptor2d_HCurve2d) tmp = ((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->Arc();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

 Standard_Real OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection::Parameter()
{
  return ((IntPatch_ThePathPointOfTheSOnBoundsOfIntersection*)nativeHandle)->Parameter();
}


